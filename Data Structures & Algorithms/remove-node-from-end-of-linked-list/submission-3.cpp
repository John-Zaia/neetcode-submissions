/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
	int counter = 0;
	ListNode* prev;
	ListNode* dummy = head;
    ListNode* findLength = head;
    int length = 1;

	if(head->next == nullptr && n == 1)
	{
		delete head;
		head = nullptr;
		return head;
	}

    while(findLength->next != nullptr)
    {
        findLength = findLength->next;
        length++;
    }

    length = length - n;
	
	if (length == 0) {
		ListNode* newHead = head->next;
		delete head;
		return newHead;
	}

	while (counter != length)
	{	
		prev = head;
		head = head->next;
		counter++;
	}


	prev->next = head->next;
	delete head;
	head = nullptr;
	return dummy;
    }
};

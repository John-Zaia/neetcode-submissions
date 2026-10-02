class Solution {
   public:
    string encode(vector<string>& strs) {
        std::string s;
        for (int i = 0; i < strs.size(); i++) {
            s += std::to_string(strs[i].length()) + "#" + strs[i];
        }

        return s;
    }

    vector<string> decode(string s) {
        std::vector<std::string> decodedString;
        int i = 0;
        int j = 0;

        while (i < s.size()) {
            if (s[i] == '#') {
                int length = std::stoi(s.substr(j, i - j));

                std::string result = s.substr(i + 1, length);
                decodedString.push_back(result);

                i = i + 1 + length;
                j = i;
                continue;
            }

            i++;
        }

        return decodedString;
    }
};

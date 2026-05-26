class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        // store frequency of characters in t
        for (char ch : t) {
            need[ch]++;
        }

        int left = 0;
        int right = 0;

        int matched = 0;

        int minLen = INT_MAX;
        int startIndex = 0;

        while (right < s.size()) {

            char ch = s[right];

            // add current character to window
            window[ch]++;

            // useful character matched
            if (window[ch] <= need[ch]) {
                matched++;
            }

            // when all characters matched
            while (matched == t.size()) {

                int windowLen = right - left + 1;

                // update minimum answer
                if (windowLen < minLen) {
                    minLen = windowLen;
                    startIndex = left;
                }

                char leftChar = s[left];

                // removing useful character
                if (window[leftChar] <= need[leftChar]) {
                    matched--;
                }

                // shrink window
                window[leftChar]--;

                left++;
            }

            right++;
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(startIndex, minLen);
    }
};
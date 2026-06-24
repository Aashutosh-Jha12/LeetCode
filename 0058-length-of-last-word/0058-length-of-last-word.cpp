class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int i=0;
          // Skip leading spaces
    while (i < s.length() && s[i] == ' ')
        i++;

    int count = 0;

    // Count first word
    while (i < s.length() && s[i] != ' ') {
        count++;
        i++;
    }
        return count;
    }
};
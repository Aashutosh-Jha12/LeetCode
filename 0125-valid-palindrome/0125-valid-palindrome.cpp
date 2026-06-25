class Solution {
public:
    bool isPalindrome(string s) {
         //transform(s.begin(), s.end(), s.begin(), ::tolower);
        // string dup;
        // for ( int i = s.length() - 1 ; i >= 0 ; i--){
        //     if ( s[i]>96 && s[i]<=122){
        //         dup += s[i];
        //     }
        // }
        // int n = dup.length() ;
        // for ( int i = 0 ; i < n ; i++){
        //     if ( dup[i] != dup[n-i-1]){
        //         return false;
        //     }
        // }
         transform(s.begin(), s.end(), s.begin(), ::tolower);

    string clean;
    for (char c : s) {
        if (isalnum(c)) {
            clean += c;
        }
    }

    string dup = clean;
    reverse(dup.begin(), dup.end());

    return clean == dup;
    }
};
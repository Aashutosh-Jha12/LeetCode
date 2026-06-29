class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count =0;
        int n=patterns.size();
       // for ( string s: patterns){
       for ( int i= 0; i<n ; i++){
            if( word.find(patterns[i]) != string::npos){
                count++;
            }
        }
        return count;
    }
};
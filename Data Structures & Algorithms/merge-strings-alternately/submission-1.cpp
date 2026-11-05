class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        ans.reserve(word1.size()+word2.size());
        int i=0;
        int j=0;
        int n= word1.size();
        int m=word2.size();
        while(i<n and j<m){
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }
        while(i<n){
            ans.push_back(word1[i++]);
        }
        while(j<m){
            ans.push_back(word2[j++]);
        }
        return ans;
    }
};
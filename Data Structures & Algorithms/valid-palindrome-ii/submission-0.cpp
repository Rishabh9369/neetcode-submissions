class Solution {
public:
 bool isPal(string &s, int low, int high) {
    while (low < high) {
        if (s[low] != s[high]) {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
    bool validPalindrome(string s) {
    int low = 0;
    int high = s.size() - 1;

    while (low < high) {
        if (s[low] != s[high]) {
            
            return isPal(s, low + 1, high) || isPal(s, low, high - 1);
        }
        low++;
        high--;
    }
    return true;  

    }
};
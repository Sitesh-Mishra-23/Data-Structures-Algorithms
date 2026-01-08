// 680. Valid Palindrome
class Solution {
public:
    bool pal(string s, int i, int j){
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
            
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                bool ans1 = pal(s,i,j-1);
                bool ans2 = pal(s,i+1,j);
                return ans1||ans2;
            }
            
        }
        return true;
    }
};
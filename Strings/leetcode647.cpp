// 647. Palindromic Substrings
class Solution {
public:
    int substr(string s,int i,int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int c=0;c<s.length();c++){
            int oddans= substr(s,c,c);
            int evenans=substr(s,c,c+1);
            totalcount=oddans+evenans+totalcount;
        }
        return totalcount;
    }
};
// 890. Find and Replace Pattern
class Solution {
public:
    void patternmap(string& s){
        char start ='a';
        char mapping[257]={0};
        for( auto ch:s){
            if(mapping[ch]==0){
                mapping[ch]=start;
                start++;  
            }
            
        }
        for(int i =0;i<s.length();i++){
            char ch=s[i];
            s[i]=mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        patternmap(pattern);

        for(string s:words){
            string temp=s;
            patternmap(temp);
            if(temp==pattern){
                ans.push_back(s);
            }
        }
        return ans;
    }
    
};
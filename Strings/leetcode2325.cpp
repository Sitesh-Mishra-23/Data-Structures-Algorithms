// 2325. Decode the Message
class Solution {
public:
    string decodeMessage(string key, string message) {
        char start='a';
        char map[257]={0};
        string ans;
        for(auto ch: key){
            if(ch!=' ' && map[ch]==0){
                map[ch]=start;
                start++;
            }
        }
        for(auto ch:message){
            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char decode = map[ch];
                ans.push_back(decode);
            }
            
        }
        return ans;
    }
};
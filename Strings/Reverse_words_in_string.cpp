// https://leetcode.com/problems/reverse-words-in-a-string/
class Solution {
public:
    string reverseWords(string s) {
        vector<string>temp;
        int n=s.length();
        string word;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(word.length()){
                    temp.push_back(word);
                    word="";
                }
            }
            else{
                word+=s[i];
            }
        }
      // adding last word if there were no trailing spaces
        if(word.length()>0){
            temp.push_back(word);
        }
      
        string ans
      // pushing all the words in ans string with spaces
        for(int i=temp.size()-1;i>=0;i--){
            ans+=temp[i];
            if(i>0)ans+=' ';
        }
        return ans;
    }
};

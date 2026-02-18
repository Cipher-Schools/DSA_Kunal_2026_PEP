class Solution {
  public:
    string firstNonRepeating(string &s) {
        // code here
        queue<char>q;
        // unordered_map<char,int>freq;
        vector<int>fr(26,0);
        string res="";
        for(auto it:s){
            fr[it-'a']++;
            // if current occurence is first occurence then push it into queue
            if(fr[it-'a']==1){
                q.push(it);
            }
            // if queue contains repeating element pop them from queue
            while(!q.empty() and fr[q.front()-'a']>1){
                q.pop();
            }
            // if queue is empty then there are no non-repeating elements
            if(q.empty())res+='#';
            
            // if queue is not empty insert q.front in answer
            else res+=q.front();
        }
        return res;
    }
};

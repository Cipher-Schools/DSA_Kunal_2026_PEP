// https://leetcode.com/problems/sort-characters-by-frequency/description/
class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        map<int,vector<char>,greater<int>>freq;
      // Storing elements in sorted map 
      // pairs are sorted based on their frequency
      
        for(auto it:mp){
            freq[it.second].push_back(it.first);
        }
        string ans;
      // Iterating the sorted map
        for(auto it:freq){
          // Iterating the vector of elements that are mapped to their frequencies
            for(auto x:it.second){
              // Pushing the elements into answer string frequency times.
                for(int i=0;i<it.first;i++){
                    ans+=x;
                }
            }
        }
        return ans;
    }
};

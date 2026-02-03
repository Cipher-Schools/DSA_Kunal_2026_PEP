// https://leetcode.com/problems/valid-palindrome-ii/
//  Problem - 680 
class Solution {
public:
    bool check(string s, int i, int j){
        while(i<=j){
            if(s[i++]!=s[j--])return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(s[i]!=s[j]){
              // if we gets an inequality at i and j case then we have to check whether their is a palindrome 
              // string from i to j-1 or i+1 to j if there is not then we will return false.
                return (check(s,i+1,j) or check(s,i,j-1));
            }
            i++;
            j--;
        }
      // if we comes out of loop means we didn't encounter an inequality case so it means that the string is a palindrome without deletion.
        return true;
    }
};

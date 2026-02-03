class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans="";
        int n=num1.length();
        int m=num2.length();
        int i=n-1;
        int j=m-1;
        int carry=0;
        while(i>=0 or j>=0){
          // if i is negative then we will consider num1[i as 0
            int a=(i>=0)?num1[i]-'0':0;
          // if j is negative then we will consider num2[j] as 0
            int b=(j>=0)?num2[j]-'0':0;
          
            int add=a+b+carry;
            carry=add/10;
            add=add%10;
            ans+=add+'0';
            i--;
            j--;
        }
      // if carry still has some value, then we have to add it in ans
        if(carry>0)ans+=carry+'0';
      // reversing to get the final answer
        reverse(ans.begin(),ans.end());
      
        return ans;
    }
};

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {

        vector<int>ans;
        
        int r=matrix.size();
        
        int c=matrix[0].size();
        
        for(int i=0;i<r;i++){
            
            for(int j=0;j<c;j++){
                
                if(i%2==0) //if index is even we will push from start to end
                    ans.push_back(matrix[i][j]);
                    
                else{
                  // if index is odd in that case we will push from end to start
                    ans.push_back(matrix[i][c-j-1]);
                }
            }
        }
        return ans;
    }
};

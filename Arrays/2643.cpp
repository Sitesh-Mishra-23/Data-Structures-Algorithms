// 2643. Row With Maximum Ones
/* Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row.
 In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected. 
 Return an array containing the index of the row, and the number of ones in it.*/

class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
       vector<int>ans;
      int n = mat.size();
      int rows = 0;
      int onecount = INT_MIN;

      for(int i=0;i<n;i++){
        int count =0;
        for(int j =0;j<mat[i].size();j++){
            if(mat[i][j]==1){
                count++;
            }
        }
        if(count>onecount){
            onecount=count;
            rows=i;
        }
      }
      ans.push_back(rows);
      ans.push_back(onecount);
      return ans;

    }
};
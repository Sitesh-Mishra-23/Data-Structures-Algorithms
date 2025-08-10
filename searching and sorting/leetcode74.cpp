/*74. Search a 2D Matrix
Solved
Medium
Topics
premium lock icon
Companies
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.*/

class Solution {
public:
    bool searchinrow(vector<vector<int>>& matrix, int target, int row){
        int n = matrix[0].size();
        int st=0,end=n-1;

        while(st<=end){
            int mid = st +(end-st)/2;
            if(target==matrix[row][mid]){
                return true;
            }
            else if (target>matrix[row][mid]){
                st = mid +1;
            }
            else {
                end=mid-1;
            }

        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int startrow = 0,endrow= m-1;

        while(startrow<=endrow){
            int midrow= startrow +(endrow- startrow)/2;
            if(target>=matrix[midrow][0] && target <=matrix[midrow][n-1]){
                return searchinrow(matrix,target,midrow);
            }
            else if (target>matrix[midrow][n-1]){
                startrow=midrow+1;
            }
            else{
                endrow=midrow-1;
            }
        }
        return false;
    }
};
/*69. Sqrt(x)
Solved
Easy
Topics
premium lock icon
Companies
Hint
Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 */

class Solution {
public:
    int mySqrt(int x) {
        int st = 1;
        int end  = x/2;
        int ans = 0;

        if(x<2){
            return x;
        }

        while(st<=end){
            int mid =  st +(end - st)/2;
            long long sq = (long long) mid*mid;

            if(sq==x){
                return mid ;
            }
            else if (sq<x){
                ans=mid;
                st=mid+1;
            }
            else{
                end=mid-1;
            }

        }
        return ans;
    }
};
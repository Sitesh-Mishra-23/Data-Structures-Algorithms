//11. Container With Most Water
/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left =0;
        int right=n-1;
        int maxvol=0;

        while(left<right){
            int width=right-left;
            int ht=min(height[left],height[right]);
            int vol= width*ht;
            maxvol=max(vol,maxvol);

            height[left]<height[right] ? left++ :right --;
        }

        return maxvol;


    }
};
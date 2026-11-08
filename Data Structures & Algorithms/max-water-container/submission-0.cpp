class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int low=0;
        int high=heights.size()-1;
        while(low<high){
            int h= min(heights[low],heights[high]);
            int water= (high-low)*h;
            maxWater= max(water,maxWater);
            if(heights[low]<heights[high]){
             low++;
            }else high--;
        }
        return maxWater;
    }
};

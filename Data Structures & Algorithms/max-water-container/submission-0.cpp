class Solution {
public:
    int maxArea(vector<int>& heights) {
        int start=0;
        int end=heights.size()-1;
        int maxWater=0;
        while(start<end){
            int width=end-start;
            int h= min(heights[start],heights[end]);
            int area=width*h;
            maxWater=max(maxWater,area);
            if(heights[start]<heights[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxWater;
    }
};

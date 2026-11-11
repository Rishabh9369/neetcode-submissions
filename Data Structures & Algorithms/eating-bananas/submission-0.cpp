class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int end=0;
        int ans=0;
        int n= piles.size();
        for(int i=0;i<n;i++){
            end=max(end,piles[i]);
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            long long hours=0;
            for(int i=0;i<n;i++){
                hours=hours+piles[i]/mid;
                if(piles[i]%mid!=0){
                    hours++;
                }
            }
            if(hours<=h){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        return ans;
    }
};

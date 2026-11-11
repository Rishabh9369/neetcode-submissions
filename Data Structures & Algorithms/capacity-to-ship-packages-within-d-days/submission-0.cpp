class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
                int start=0;
        int end=0;
        int n=weights.size();
        for(int i=0;i<n;i++){
            start=max(start,weights[i]);
            end=end+weights[i];
        }
        int ans=end;
        while(start<=end){
            int mid=start+(end-start)/2;
            int current_load=0;
            int reqdays=1;
            for(int i=0;i<n;i++){
                if(current_load+weights[i]<=mid){
                    current_load=current_load+weights[i];
                }else{
                    reqdays++;
                    current_load=weights[i];
                }
            }if(reqdays<=days){
                ans=mid;
                end=mid-1;
            }else{
                start=mid+1;
            }

        }
        return ans;
    }
};
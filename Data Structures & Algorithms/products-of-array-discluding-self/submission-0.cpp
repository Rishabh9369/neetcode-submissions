class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        int prefix=1;
        for(int i=0;i<n;i++){
            ans[i]=prefix;
            prefix=prefix*nums[i];
        }

        int suffix=1;
        for(int i=n-2;i>=0;i--){
            suffix=suffix*nums[i+1];
            ans[i]=ans[i]*suffix;
        }
        return ans;
    }
};

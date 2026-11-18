class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

        vector<int> ans;
        for(pair<int,int>p:freq){
            if(p.second>n/3){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
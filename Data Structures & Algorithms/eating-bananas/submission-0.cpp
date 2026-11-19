class Solution {
public:

bool check(vector<int>piles,int h ,int k){
    long long hours=0;
    for(int i=0;i<piles.size();i++){
        int bananas=piles[i];
      int required_hour=bananas/k;
      if(bananas%k!=0){
        required_hour++;
      }
      hours=hours+required_hour;
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(check(piles,h,mid)){
                high=mid;
            }else {
                low=mid+1;
            }
        }
        return low;
    }
};

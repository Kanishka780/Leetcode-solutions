class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n= nums.size();
        unordered_map<int,int>mp;
        for(int i=0 ;i< n; i++){
            mp[nums[i]]++;
        }
        if(k == n){
            return *max_element(nums.begin(),nums.end());
        }
        if(k==1){
            int max = -1;
            for(int i=0 ;i< n;i++){
                if(mp[nums[i]]== 1 && nums[i]>max){
                    max=nums[i];
                }
            }
            return max;
        }
        if (nums[0] == nums[n-1]){ return -1;}
        if( mp[nums[0]]==1 && mp[nums[n-1]]==1){ return max(nums[0],nums[n-1]);}
        if(mp[nums[0]] ==1 && mp[nums[n-1]] >1){ return nums[0];}
        if(mp[nums[0]] >1 && mp[nums[n-1]] ==1){
            return nums[n-1];
        }
        return -1;
    }
};
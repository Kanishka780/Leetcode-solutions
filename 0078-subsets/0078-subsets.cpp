class Solution {
public:
    
    void solve(vector<int>&nums,int i, int n,vector<vector<int>>&ans, vector<int>&temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(nums,i+1,n,ans,temp);
        temp.pop_back();
        solve(nums,i+1,n,ans,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        solve(nums,0,nums.size(),ans,temp);
        return ans;
    }
};
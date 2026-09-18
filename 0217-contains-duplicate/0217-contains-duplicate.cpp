class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        auto a=unique(nums.begin(),nums.end());
        return a != nums.end();
    }
};
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int max_sum = INT_MIN;
        int max_prefix = nums[0];

        for (int j = k; j < n; j++) {
            max_prefix = max(max_prefix, nums[j - k]);
            max_sum = max(max_sum, max_prefix + nums[j]);
        }

        return max_sum;
    }
};
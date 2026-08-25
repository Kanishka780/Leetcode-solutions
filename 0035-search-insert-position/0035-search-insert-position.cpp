class Solution {
public:

    int searchInsert(vector<int>& nums, int target) {
        bool found=false;
        for(int i=0 ;i< nums.size(); i++){
            if(nums[i]==target){
                return i;
                found=true;
            }
        }

        if(!found){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>target){
                    return i;
                   // break;
                }
            }
        }
       return nums.size() ;
    }
};
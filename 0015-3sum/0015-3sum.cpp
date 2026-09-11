class Solution {
public:

    vector<vector<int>> threeSum(vector<int>& nums) {
//Brute-force
/*
        int n= nums.size();
        set<vector<int>>ans;
        for(int i=0;i< n-2;i++){
            for(int j=i+1 ;j< n-1; j++){
                for(int  k=j+1; k<n ;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int>temp = {nums[i],nums[j],nums[k]};
                        sort(temp.begin(),temp.end());
                        ans.insert(temp);
                    }
                }
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
        */

        //using hashing
        /*
        int n= nums.size();
        set<vector<int>>ans;
        for(int i=0; i< n-2; i++){
            unordered_set<int> st;
            for(int j=i+1 ;j< n; j++){
                int required = -( nums[i]+nums[j]);
                if(st.find(required) != st.end()){
                    vector<int>temp= {nums[i],nums[j],required};
                    sort(temp.begin(),temp.end());
                    ans.insert(temp);
                }
                st.insert(nums[j]);
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
        */

        //sorting two pointer
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>ans;
        for(int i=0 ;i<n-2; i++){
            int left= i+1;
            int right=n-1;
            while(left < right){

                int sum = nums[i] + nums[left] + nums[right];

                if(sum == 0){
                ans.insert({nums[i], nums[left], nums[right]});
                left++;
                right--;
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return vector<vector<int>>(ans.begin(),ans.end());
    }
};
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr;
        for(int a : nums1){
            for( int b : nums2){
                if(a==b){
                    arr.push_back(a);
                }
            }
        }
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        return arr;
    }
};
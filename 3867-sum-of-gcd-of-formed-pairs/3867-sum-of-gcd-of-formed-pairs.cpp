class Solution {
public:
    int gcd( int a,int b){
        while(a>0 && b>0){
            if(a>b){a%=b;}
            else{b %=a;}
        }
        if(a==0){return b;}
        else{return a;}
    }

    long long gcdSum(vector<int>& nums) {
        long long sum=0;
        int n= nums.size();
        vector<int>arr;
        int currmax=0;
        for(int i=0 ;i<n;i++){
            currmax= max(currmax, nums[i]);
            arr.push_back( gcd(nums[i],currmax));
        }
        sort(arr.begin(),arr.end());
        for(int i=0 ;i< n/2;i++){
            sum+= gcd(arr[i],arr[n-i-1]);
        }
        return sum;
    }
};
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int x=k;
        while(true){
            bool f= false;
            for(int y : nums){
                if(x==y){
                    f= true;
                    break;
                }
            }
            if(!f){
                return x;
            }
                    x +=k;

        }
    }
};
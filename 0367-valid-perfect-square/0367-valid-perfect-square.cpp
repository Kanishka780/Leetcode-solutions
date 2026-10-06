class Solution {
public:
    bool isPerfectSquare(int num) {
        /*
        int i=1;
        while(num >0){
            num-=i;
            i +=2;
        }
        return num==0;
        */

        int low=1; 
        int high=num;
        while(low <=high){
            long long mid = low+(high-low)/2;
            if(mid*mid == num){
                return true;
            }
            else if( mid *mid <num){
                low=mid+1;
            }
            else if(mid*mid >num){
                high=mid-1;
            }
        }
        return false;
    }
};
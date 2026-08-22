class Solution {
public:
    int sum(int n){
        int s=0;
        while(n>0){
            s += n%10;
            n /=10;
        }
        return s;
    }
    int prod(int n){
        int p=1;
        while(n>0){
            p *= n%10;
            n /=10;
        }
        return p;
    }
    bool checkDivisibility(int n) {
        if( n% (sum(n)+prod(n))==0){
            return true;
        }
        return false;
    }
};
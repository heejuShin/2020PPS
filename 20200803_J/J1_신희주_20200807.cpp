class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num==1) return true;
        if(num%4!=0) return false;
        float check = num;
        while(check>1){
            check=check/4;
        }
        cout << num;
        if(check==1) return true;
        return false;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int power = 0;
        for(int i=0; i<32; i++){
            if(pow(2,i) == n){
                power++;
            }
        }
        if(power > 0){
            return true;
        }
        else
        return false;
    }
};

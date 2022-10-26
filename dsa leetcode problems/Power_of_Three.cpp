// https://leetcode.com/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) {
        bool flag{0};
        int i{0};
        while(pow(3,i) <= n){
            if(pow(3,i) == n){
                flag = 1;
            }
            i++;
        }
        if(flag == 1){
            return true;
        }
        else{
            return false;
        }
    }
};

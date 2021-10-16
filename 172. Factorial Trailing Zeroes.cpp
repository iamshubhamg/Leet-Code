//Dev Wadhwa

class Solution {
public:
    int trailingZeroes(int n) {
        int count5=0;
        while(n!=0)
        {
            n/=5;             //We need to check number of 5s that apear in the factorial value, so we divide n by 5 to find number of 5s (initial which can be directly divided)
            count5+=n;        //Some numbers have multiple factors as 5, so we need to repeat this process
        }
        return count5;
    }
};

/*https://leetcode.com/problems/minimum-operations-to-make-array-equal/*/
class Solution {
public:
    int minOperations(int n) {
        
     
        int i;
        long long int s=0;
        if(n%2==0)
        {
            i=n/2;
            s=i*i;
        }
        else
        {
            i=n/2;
            s=i*(i+1);
        }
        return s;   
    }
};

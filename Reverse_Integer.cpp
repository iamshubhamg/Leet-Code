class Solution {
public:
    int reverse(int x) {
     
    int temp,rev = 0;
        
        while(x !=0)
        {
            temp = x %10;
            if(rev >(INT_MAX /10) || (rev > INT_MAX/10 && rev > 7)) return 0;
            if(rev <(INT_MIN /10) || (rev < INT_MIN/10 && rev < -8)) return 0;
            
            
            rev = rev* 10 + temp;
            x = x/10;
        }
        return rev;
    }
};
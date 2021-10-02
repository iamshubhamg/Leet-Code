class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0)
            return false;
        
        int rev = 0;
        
        int temp = x;
        while(x >0)
        {
            if(rev > INT_MAX/10 || rev == INT_MAX / 10 && rev > 7) return false;
            if(rev < INT_MIN/10 || rev == INT_MIN / 10 && rev < -8) return false;
            
            rev = rev * 10 + (x % 10);
            x /=10;
        }
        
        
        if(temp == rev) return true;
            
        
        return false;
    }
};
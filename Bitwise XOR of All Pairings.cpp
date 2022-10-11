// problem link : https://leetcode.com/problems/bitwise-xor-of-all-pairings/
//  Approach: The solution is based on the fact that a^a=0. Hence all even occurences of a number will result in zero.
//  Total number of combinations will be m*n, where m is the size of first array and n of the second array. For simplification
//  consider 2 arrays [a,b] and [c,d]. Possible combinations include (a ^ c), (a ^ d), (b ^ c), (b ^ d). Now, if we
//  consider the XOR of all pairs . The expression will reduce to 0.  Similarly for arrays [a,b,c] & [c,d] the expression
//  will be ( a ^ d ) ^ ( a ^ e ) ^ ( b ^ d ) ^ ( b ^ e ) ^ ( c ^ d ) ^ ( c ^ e ) = c ^ d . Hence, the answer will be xor of
//  all elements in second array. Hence if size of both arrays is even, the answer is 0. If the size of either array is odd,
//  then the asnwer will be xor of the elements in other array. If both arrays are odd, then the answer will be xor of all
//  elements in both arrays.

class Solution
{
public:
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        int ans = 0;
        if (n & 1 && m & 1)
        {
            for (auto x : nums1)
                ans ^= x;
            for (auto x : nums2)
                ans ^= x;
        }
        else if (n & 1)
        {
            for (auto x : nums2)
                ans ^= x;
        }
        else if (m & 1)
        {
            for (auto x : nums1)
                ans ^= x;
        }
        return ans;
    }
};
// Problem Link: https://leetcode.com/problems/number-of-subarrays-with-gcd-equal-to-k/

// GCD: The greatest common divisor (GCD) of two or more numbers is the greatest common factor number that divides them, exactly. It is also called the highest common factor (HCF).

// Vectors in C++ are sequence containers representing arrays that can change their size during runtime. They use contiguous storage locations for their elements just as efficiently as in arrays, which means that their elements can also be accessed using offsets on regular pointers to its elements.

class Solution
{
public:
    int subarrayGCD(vector<int> &nums, int k)
    {
        int count = 0;

        // Check for the subarray if vector is of size 1
        if (nums.size() == 1)
        {
            if (nums[0] == k)
                return 1;
            else
                return 0;
        }

        // Find the gcd of each subaaray
        for (int i = 0; i < nums.size(); i++)
        {
            int gcdval = nums[i];
            for (int j = i; j < nums.size(); j++)
            {
                gcdval = __gcd(gcdval, nums[j]);
                if (gcdval == k)
                    count++;
            }
        }
        // return the count, i.e. the number of subarrays of vector nums where gcd of the subarray's elements is k.
        return count;
    }
};
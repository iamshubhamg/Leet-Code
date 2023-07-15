# Intuition
To reverse a string in-place, we can use a two-pointer approach. We initialize two pointers, one pointing to the beginning of the string and the other pointing to the end. We swap the characters at the two pointers and move the pointers towards each other until they meet in the middle.

# Approach
- Initialize two pointers, left and right, pointing to the first and last characters of the string.
- While the left pointer is less than the right pointer, swap the characters at the left and right positions.
- Increment the left pointer and decrement the right pointer.
- Repeat steps 2 and 3 until the pointers meet or cross each other.
The string will be reversed in-place.

# Complexity
- Time complexity: O(N/2), where N is the length of the string. The algorithm visits each character once, so the time complexity is linear.
- Space complexity: O(1), as the algorithm reverses the string in-place without using any additional data structures. It only uses a constant amount of extra memory for the two pointers.
# Code
```
public class Solution {
    public void ReverseString(char[] s) {
        int left = 0;
        int right = s.Length - 1;

        while (left < right) {
            // Swap characters at left and right indices
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;

            left++;
            right--;
        }
    }
}

```

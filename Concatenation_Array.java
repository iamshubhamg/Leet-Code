/* Soluion: https://leetcode.com/problems/concatenation-of-array/ */

import java.util.Arrays;

public class Concatenation_Array {
    public static void main(String[] args) {
        int[] input = {1, 2, 1};
        int[] output = new int[2 * (input.length)];

        //Using two statements given in problem
        // Time complexity is O(n/2)
        for (int i = 0; i < input.length; i++) {
            output[i] = input[i];
            output[i + input.length] = input[i];
        }

        // Using modulus
        // Time complexity is O(n)
        for (int i = 0; i < output.length ; i++) {
            output[i] = input[i % input.length];
        }

        System.out.println(Arrays.toString(output));
    }
}

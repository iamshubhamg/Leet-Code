/* Solving:- https://leetcode.com/problems/build-array-from-permutation/ */


import java.util.Arrays;

public class BuildArrayFromPermutation {
    public static void main(String[] args) {

        int[] input = {0, 2, 1, 5, 3, 4};

        int[] Output = new int[input.length];

        // For taking input
        for (int i = 0; i < input.length ; i++) {
            Output[i] = input[input[i]];
        }
        System.out.println(Arrays.toString(Output));
    }
}



/* Solving Que. 832. Flipping an Image : https://leetcode.com/problems/flipping-an-image/  */

import java.util.Arrays;

public class FlippingImage {
    public static void main(String[] args) {
        int[][] arr = {
                {1,1,0,0},
                {1,0,0,1},
                {0,1,1,1},
                {1,0,1,0}
        };

        int c = arr[0].length;
        for (int[] row :  arr) {
            for (int i = 0; i < (c+1)/2 ; i++) {
                int tmp = row[i];
                row[i] = 1 - row[c-1-i];
                row[c-1-i] = 1 - tmp;
            }
        }
        // printing the final answer
        for(int row = 0; row < arr.length ; row++)
        {
            System.out.println(Arrays.toString(arr[row]));
        }
    }
}

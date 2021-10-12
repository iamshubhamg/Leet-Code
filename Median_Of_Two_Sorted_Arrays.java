// Question Link: https://leetcode.com/problems/median-of-two-sorted-arrays/


public class Median_Of_Two_Sorted_Arrays {

    public double findMedianSortedArrays(int[] nums1, int[] nums2) {

        int low = 0;
        int high = nums1.length;


        if (nums1.length > nums2.length)
            return findMedianSortedArrays(nums2, nums1);

        int total = nums1.length + nums2.length;


        while (low <= high) {

            int aleft = (low + high) / 2;
            int bleft = (total + 1) / 2 - aleft;


            int am1 = (aleft == 0) ? Integer.MIN_VALUE : nums1[aleft - 1];
            int a1 = (aleft == nums1.length) ? Integer.MAX_VALUE : nums1[aleft];


            int bm1 = (bleft == 0) ? Integer.MIN_VALUE : nums2[bleft - 1];
            int b1 = (bleft == nums2.length) ? Integer.MAX_VALUE : nums2[bleft];


            if (am1 <= b1 && bm1 <= a1) {

                double median = 0.0;

                if (total % 2 == 0) {

                    int lmax = Math.max(am1, bm1);
                    int rmin = Math.min(a1, b1);

                    median = (double) (lmax + rmin) / 2.0;


                } else {
                    int lmax = Math.max(am1, bm1);
                    median = lmax;
                }


                return median;
            } else if (am1 > b1) {

                high = aleft - 1;

            } else if (bm1 > a1) {

                low = aleft + 1;
            }


        }


        return 0;


    }


    public static void main(String[] args) {
        int[] nums1 = new int[]{1, 2};
        int[] nums2 = new int[]{3, 4};
        Median_Of_Two_Sorted_Arrays median_of_two_sorted_arrays = new Median_Of_Two_Sorted_Arrays();
        double ans = median_of_two_sorted_arrays.findMedianSortedArrays(nums1,nums2);

        System.out.println(ans);
    }

}

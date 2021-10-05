// Question Link: https://leetcode.com/problems/super-egg-drop/

public class Super_Egg_Drop {


        public int superEggDrop(int k, int n) {

            int dp[][] = new int[k+1][n+1];

            for(int i=0;i<k+1;i++){
                for(int j=0;j<n+1;j++){
                    dp[i][j] = -1;
                }
            }

            return solve(k,n,dp);
        }


        private int solve(int e,int f,int[][] dp){

            if(e==1)
                return f;
            if(f==0||f==1)
                return f;
            if(dp[e][f]!=-1)
                return dp[e][f];


            int l=1;
            int h=f;
            int min = Integer.MAX_VALUE;

            int willBreak =0;
            int notBreak = 0;
            while(l<=h){
                int mid = (l+h)/2;

                if(dp[e-1][mid-1]!=-1){
                    willBreak = dp[e-1][mid-1];
                }
                else{
                    willBreak = solve(e-1,mid-1,dp);
                }


                if(dp[e][f-mid]!=-1){
                    notBreak = dp[e][f-mid];
                }
                else{
                    notBreak = solve(e,f-mid,dp);
                }

                int temp = 1+ Math.max(willBreak,notBreak);
                if(temp<=min)
                    min = temp;


                if(willBreak<notBreak){
                    l = mid+1;
                }else{
                    h = mid-1;
                }



            }


            dp[e][f] = min;

            return min;


        }

        public static  void  main(String args[]){

            Super_Egg_Drop sed = new Super_Egg_Drop();

            System.out.println(sed.superEggDrop(1,2));


        }



}

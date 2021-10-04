

// Problem Link: https://leetcode.com/problems/scramble-string/



import java.util.HashMap;
public class Scramble_Strings {

    HashMap<String,Boolean> map = new HashMap();
    public boolean isScramble(String s1, String s2) {

        return solve(s1,s2);

    }

    public  boolean solve(String a, String b){

        if(a.length()!=b.length())
            return false;

        if(a.equals(b))
            return true;
        if(a.length()==0&&b.length()==0)
            return true;
        if(a.length()<=1)
            return false;

        String key = a+"_"+b;
        if(map.containsKey(key))
            return map.get(key);

        int n = a.length();
        boolean flag = false;


        for(int i=1;i<n;i++){

            if(((solve(a.substring(0,i),b.substring(0,i))==true)&&(solve(a.substring(i,n),b.substring(i,n))==true)
            )||((solve(a.substring(0,i),b.substring(n-i,n))==true)&&(solve(a.substring(i,n),b.substring(0,n-i))==true))
            )
            {
                flag=true;
                break;
            }

        }

        map.put(key,flag);
        return flag;

    }


    public static void main(String[] args) {

       String  s1 = "great";
        String s2 = "rgeat";
        Scramble_Strings ss = new Scramble_Strings();
        boolean ans = ss.isScramble(s1,s2);

        System.out.println(ans);

    }


}

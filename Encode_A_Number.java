import java.io.*;
public class Main
{
    static BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
    public static void main(String[] args)throws IOException
    {
        String S=br.readLine();
        int n=Integer.parseInt(S);
        double token=0;
        int i=0;
        while(n!=0 && i<S.length())
        {
            int d=n%10;
            if(d%2==0)
            {
                token+=(d+1)*Math.pow(10,i);
            }
            else
            {
                token+=(d-1)*Math.pow(10,i);
            }
            n/=10;
            i++;
        }
        System.out.println((int)(token));
        
        
    }
}

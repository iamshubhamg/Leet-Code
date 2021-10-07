import java.io.*;
public class Main
{
    static BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
    static String input()throws IOException
    {
        String S=br.readLine();
        return S;
    }
    
    static int[] counter(String S)
    {
        int count[]=new int[256];
        for(int i=0;i<256;i++)
        {
            count[i]=0;
        }
        for(int i=0;i<S.length();i++)
        {
            count[S.charAt(i)]++;
        }
        return count;
    }
    
    static void findDuplicates(String S)
    {
        int A[]=counter(S);
        for(int i=0;i<256;i++)
        {
            if(A[i]>1)
            {
                System.out.println((char)(i)+" appears "+A[i]+" times");
            }
        }
        
    }
    
    public static void main(String[] args)throws IOException
    {
        Main obj = new Main();
        String Str=obj.input();
        obj.findDuplicates(Str);
    }
}

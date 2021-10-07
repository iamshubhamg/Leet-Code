import java.io.*;
public class Main
{
    static String input()throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Give a Number");
        String S=br.readLine();
        return S;
    }
    
    static String addCommas(String S)
    {
        String Scom="";
        int c=0;
        for(int i=S.length()-1;i>=0;i--,c++)
        {
            if(c==3 || c==6 || c==9)
            {
                Scom=","+Scom;
            }
            else if(c>9 && c%2!=0)
            {
                Scom=","+Scom;
            }
            Scom=S.charAt(i)+Scom;
        }
        return Scom;
    }
    
    static void print(String S)
    {
        System.out.print(S);
        
    }
    
    public static void main(String[] args)throws IOException
    {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        Main obj = new Main();
        String Str=obj.input();
        Str=obj.addCommas(Str);
        System.out.print("Numbers in American counting order are:\n");
        obj.print(Str);
    }
}

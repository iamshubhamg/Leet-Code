//Dev Wadhwa

class Solution {
public:
    int binaryGap(int n) {
        int count=0,max=0;
        string binary="";
        while(n!=0)
        {
            binary=to_string(n%2)+binary;
            n/=2;
        }
        n=binary.size();
        for(int i=0;i<n;i++)
        {
            if(binary[i]=='1')
            {
                count=0;
                for(int j=i+1;j<n;j++)
                {
                    count++;
                    if(binary[j]=='1') break;
                    if(j==n-1 && binary[j]=='0') count=0;
                }
                if(count>max) max=count;
            }
        }
        return max;
    }
};

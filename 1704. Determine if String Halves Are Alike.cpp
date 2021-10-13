//Dev Wadhwa

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            s[i]=tolower(s[i]);
            if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && i<n/2) count1++;
            else if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') && i>=n/2) count2++;
        }
        if(count1==count2) return true;
        else return false;
    }
};

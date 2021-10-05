bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j])
            {
                j++;
                i++;
            }
            else
            {
                j++;
            }
        }
        return i==s.length();
        
    }

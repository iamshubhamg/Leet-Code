class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)
        {
            return strs[0];
        }
        
        else 
        {
      sort(strs.begin(),strs.end());
       int l = strs.size()-1;
        int min_length = min(strs[0].length(),strs[l].length());
        
        string left = strs[0];
        string right = strs[l];
       int i=0;
        while(i <min_length && left[i] == right[i])
              i++;
        
        
        string pre = left.substr(0,i);
        return pre;
            
        }
        return "";
        
        
    }
};
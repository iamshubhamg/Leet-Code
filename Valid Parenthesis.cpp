class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == '{' || s[i] == '[' ||s[i] == '(' )
            {
                stack.push(s[i]);
                continue;
            }
            
            if(stack.empty())
            return false;
            
        char c;
        
        switch(s[i])
        {
            case '}': c = stack.top();
                
                stack.pop();
                if(c == '(' || c == '[')
                    return false;
                
                break;
                
                case ')': c = stack.top();
                
                stack.pop();
                if(c == '{' || c == '[')
                    return false;
                
                break;
                case ']': c = stack.top();
                
                stack.pop();
                if(c == '{' || c == '(')
                    return false;
                
                break;
        }
        }
        
        
        
        return (stack.empty());
        
    }
    
    
    
};
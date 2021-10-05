#include<bits/stdc++.h>
using namespace std;
int main(){
    
   string sk;
   getline(cin,sk);
   transform(sk.begin(),sk.end(),sk.begin(),::toupper);
 transform(sk.begin(),sk.end(),sk.begin(),::tolower);
   cout<<sk<<endl;
    return 0;
}

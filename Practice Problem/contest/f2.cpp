#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        string decode_s;
        for(int i=0;i<s.size();i=i+2){
            char c=s[i];
            int integer=s[i+1]-'0';
            if(integer !=0){
                decode_s.append(integer,c);
            }
           
        }
        cout<<decode_s<<endl;
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int freq1[26]={0};
        int freq2[26]={0};
        
        string s1,s2;
        cin>>s1>>s2;
        
        for(int i=0;i<s1.size();i++){
            freq1[s1[i]-'a']++;
           
        }
        for(int i=0;i<s2.size();i++){
            freq2[s2[i]-'a']++;
           
        }
        
        bool flag=true;
    
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i]){
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
      
    }



    return 0;
}

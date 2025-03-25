#include<bits/stdc++.h>
using namespace std;
int main(){
    int freq[26]={0};
    string s;
    cin>>s;
    for(auto ch: s){
        freq[ch-'a']=1;
    }
    
    for(int i=0;i<26;i++){
       if(freq[i]==1){
        cout<<char(i+'a');
       }
    }



    return 0;
}
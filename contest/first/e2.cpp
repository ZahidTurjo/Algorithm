#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    while(getline(cin,s)){
        int freq[26]={0};

        for(char c: s){
            if(c!=' '){
                freq[c-'a']++;
            }
        }

        for(int i=0;i<26;i++){
            
            if(freq[i]!=0){
                while(freq[i]--){

                    cout<<char(i+'a');
                }
            }
            
        }

        cout<<endl;
    }

    return 0;
}
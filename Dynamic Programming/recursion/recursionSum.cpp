#include<bits/stdc++.h>
using namespace std;
int rec_sum(int n){
    if(n>5){
        return 0;
    }
    return n+rec_sum(n+1);
}
int main(){

    cout<<rec_sum(1)<<endl;


    return 0;
}
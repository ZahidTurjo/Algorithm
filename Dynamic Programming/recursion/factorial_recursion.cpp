#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==1){
        return 1;
    }
    int product=fact(n-1);
 
    return  n*product;
}
int main(){
    cout<<fact(3)<<endl;


    return 0;
}
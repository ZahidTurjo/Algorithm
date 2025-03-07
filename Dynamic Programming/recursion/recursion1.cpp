#include<bits/stdc++.h>
using namespace std;
void recursion(int n){
    if(n>5){
        return;
    }
    cout<<n<<endl;
    recursion(n+1);
}
int main(){
    recursion(1);


    return 0;
}
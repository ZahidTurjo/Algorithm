#include<bits/stdc++.h>
using namespace std;
void devide(int a[],int l,int r){
    if(l>=r){
        return;
    }
    int mid=l+r/2;
    devide(a,l,mid);
    devide(a,mid+1,r);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    devide(a,0,n-1);


    return 0;
}
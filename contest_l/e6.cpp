#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int mx1=INT_MIN;
        int mx2=INT_MIN;
        int min1=INT_MAX;
        int min2=INT_MAX;

        for(int i=0;i<n;i++){
            if(arr[i]>mx1){
                mx2=mx1;
                mx1=arr[i];
            }else if(arr[i]>mx2){
                mx2=arr[i];
            }
            if(arr[i]<min1){
                min2=min1;
                min1=arr[i];
            }else if(arr[i]<min2){
                min2=arr[i];
            }
        }

            if(n==1){
                mx2=mx1;
                min2=min1;
            }
            int mxProduct=max({mx1*mx1,mx2*mx2,min1*min1,min2*min2,mx1*mx2,mx1*min1,mx1*min2});
            int minProduct=min({mx1*mx1,mx2*mx2,min1*min1,min2*min2,mx1*mx2,mx1*min1,mx1*min2});
            int mxSum=max({mx1+mx1,mx2+mx2,min1+min1,min2+min2,mx1+mx2,mx1+min1,mx1+min2});
            int minSum=min({mx1+mx1,mx2+mx2,min1+min1,min2+min2,mx1+mx2,mx1+min1,mx1+min2});

            cout<<mxProduct<<" "<<minProduct<<" "<<mxSum<<" "<<minSum<<"\n";


        

    }


    return 0;
}
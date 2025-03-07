#include<bits/stdc++.h>
using namespace std;
void print_digit(int n){
    if(n<10){
        cout<<n<<" ";
        return;
    }
    int digit=n%10;
    print_digit(n/10);
    cout<<digit<<" ";

}

int main(){
  
    int t;
    cin>>t;
    while (t--)
    {
        int a;
        cin>>a;
        print_digit(a);
        cout<<endl;
    }
    

    return 0;
}
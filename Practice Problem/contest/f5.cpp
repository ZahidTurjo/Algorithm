#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;

    unordered_map<int,int> freq;
    priority_queue<pair<int,int>> pq;
    while (q--) {
        int cmnd;
        cin>>cmnd;
        if (cmnd==1) {
            int x;
            cin>>x;
            freq[x]++;
            pq.push({freq[x], x});
        } else if (cmnd==2) {
            if (freq.empty()) {
                cout<<"empty"<<"\n";
            } else{
                int max_fre=-1;
                int max_val=-1;

                for(auto curr: freq) {
                    int val=curr.first;
                    int fre=curr.second;
                    if (fre>max_fre || (fre==max_fre && val>max_val)) {
                        max_fre=fre;
                        max_val=val;
                    }
                }

                if (max_fre>0) {
                    cout<<max_val<<"\n";
                }

                int cnt=max_fre/2;
                freq[max_val]-=cnt;

                if (freq[max_val]>0) {
                    pq.push({freq[max_val], max_val});
                }
            }
        }
    }

    return 0;
}

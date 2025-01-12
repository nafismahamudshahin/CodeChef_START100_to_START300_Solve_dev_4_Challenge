#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int t;cin>>t;
    while(t--){
        vector<int>a,b;
        for(int i=0;i<3;i++){
            int val;
            cin>>val;
            a.push_back(val);
        }
        for(int i=0;i<3;i++){
            int val;
            cin>>val;
            b.push_back(val);
        }
        sort(all(a));
        sort(all(b));
        int aCnt =0,bCnt =0;
        for(int i=2;i>=0;i--){
            if(a[i]>b[i]){
                aCnt++;
                break;
            }else if(b[i]>a[i]){
                bCnt++;
                break;
            }
        }
        if(aCnt>bCnt) cout<<"Alice"<<endl;
        else if(bCnt>aCnt) cout<<"Bob"<<endl;
        else cout<<"Tie"<<endl;
    }
    return 0;
}
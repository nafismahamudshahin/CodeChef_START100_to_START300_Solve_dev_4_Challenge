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
        int n;
        cin>>n;
        vector<int>v(n);
        for(auto &i:v)cin>>i;
        int breakCnt = 0;
        for(int i=0;i<n;i++) if(v[i]>1) breakCnt+=v[i]-1;
        cout<<breakCnt<<endl;
    }
    return 0;
}
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
        int n,m;cin>>n>>m;
        vector<int>v(n);
        for(auto &i:v) cin>>i;
        int cnt =0;
        for(int i=0;i<n;i++){
            if(v[i]>=m){
                cnt++;
            }else if(i != n-1){
                v[i+1] = v[i+1]+v[i];
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
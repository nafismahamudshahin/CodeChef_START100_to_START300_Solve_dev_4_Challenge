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
        int x,y;cin>>x>>y;
        int ans = x/y;
        cout<<(min(ans,20))<<endl;
    }
    return 0;
}
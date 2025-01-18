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
        int a,b;cin>>a>>b;
        cout<<(2*b-2*a>0?2*b-2*a:0)<<endl;
    }
    return 0;
}
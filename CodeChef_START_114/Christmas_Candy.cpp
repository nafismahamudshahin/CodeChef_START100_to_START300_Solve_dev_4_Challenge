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
        ll n,maxi =0,b,cnt =0;
        cin>>n;
        for(ll i =0;i<n;i++){
            cin>>b;
            if(b>maxi){
                maxi = b;
            }else cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
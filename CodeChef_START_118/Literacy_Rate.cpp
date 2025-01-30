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
        int p,l;cin>>p>>l;
        int pursentise =((float)l/p)*100;
        if(pursentise>=75){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}
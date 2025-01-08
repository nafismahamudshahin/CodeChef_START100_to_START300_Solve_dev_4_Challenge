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
        int a_export,a_input,b_export,b_input;
        cin>>a_export>>a_input>>b_export>>b_input;
        int a = a_export - a_input;
        int b = b_export - b_input;
        int netExport = a+b;
        if(netExport<0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
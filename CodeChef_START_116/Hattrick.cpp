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
        char a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        if(a=='W'&&b=='W'&&c=='W' || b=='W'&&c=='W'&&d=='W' || c=='W'&&d=='W'&&e=='W'){
            cout<<"YES"<<endl;
        }else if(d=='W'&&e=='W'&&f=='W'){
            cout<<"YES"<<endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}
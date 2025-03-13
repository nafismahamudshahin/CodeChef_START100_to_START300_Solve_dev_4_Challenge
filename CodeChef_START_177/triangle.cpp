#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int a,b,c;cin>>a>>b>>c;
    if(a+b>c && b+c > a && a+c > b){
        cout<<"Yes";
    }else cout<<"No";
    return 0;
}
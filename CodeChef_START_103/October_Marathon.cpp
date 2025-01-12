#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;cin>>n;
    if(n<3) cout<<"GOLD";
    else if(n>=3 && n<6) cout<<"SILVER";
    else if(n>=6) cout<<"BRONZE";
    return 0;
}
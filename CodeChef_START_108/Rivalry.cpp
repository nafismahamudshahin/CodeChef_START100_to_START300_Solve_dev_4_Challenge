#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int d1,e1,d2,e2;cin>>d1>>e1>>d2>>e2;
    d1+=d2;
    e1+=e2;
    cout<<(d1<e1?"Everule":"Dominater");
    return 0;
}
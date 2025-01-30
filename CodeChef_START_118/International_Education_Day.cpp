#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    ll chefPrice,cefinaPrice,sellQuentity;
    cin>>chefPrice>>cefinaPrice>>sellQuentity;
    ll chefSell = chefPrice*sellQuentity;
    ll cefinaSell = cefinaPrice*sellQuentity;
    ll maxSell = max(chefSell,cefinaSell);
    cout<<maxSell;
    return 0;
}
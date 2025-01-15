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
        int n,x,d;cin>>n>>x>>d;
        int perDayFoodNeed = 5*x;
        int day = n/perDayFoodNeed;
        cout<<day+d<<endl;
    }
    return 0;
}
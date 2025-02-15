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
        int n;cin>>n;
        vector<int>v(n);
        for(auto &i:v) cin>>i;
        bool possible = true;
        for(auto i:v){
            if(i<=4) possible = false;
        }
        cout<<(possible?"YES":"NO")<<endl;
    }
    return 0;
}
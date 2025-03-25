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
        int cnt = 0;
        while(n>0){
            if(n%2 == 1)cnt++;
            n/=2;
        }
        cout<<(cnt%2==0?"EVEN":"ODD")<<endl;
    }
    return 0;
}
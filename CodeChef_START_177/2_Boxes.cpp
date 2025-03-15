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
        int x,y,k;
        cin>>x>>y>>k;
        int time = 0;
        int trial = abs(x-y);
        if(trial == k){
            cout<<0<<endl;
        }else if((k-trial) %2 ==0 && k<=x+y){
            cout<<abs(k- trial)/2<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
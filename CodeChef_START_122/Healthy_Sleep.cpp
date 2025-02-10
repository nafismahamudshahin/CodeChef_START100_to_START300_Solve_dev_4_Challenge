#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int n;cin>>n;
    if(n<8){
        cout<<"LESS";
    }else if(n == 8){
        cout<<"PERFECT";
    }else cout<<"MORE";
    return 0;
}
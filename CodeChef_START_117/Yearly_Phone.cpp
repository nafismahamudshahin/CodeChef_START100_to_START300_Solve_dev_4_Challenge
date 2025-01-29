#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) x.begin(), x.end()
#define ll long long int
#define endl '\n'
int main(){
    fast;
    int x;cin>>x;
    int last = x%10;
    x/=10;
    int twoNdLast = x%10;
    cout<<"K"<<twoNdLast<<last;
    return 0;
}
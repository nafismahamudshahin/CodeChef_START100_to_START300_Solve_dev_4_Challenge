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
        int n,x;cin>>n>>x;
        string s;cin>>s;
        int swipe = 0;
        bool isPossible = true;
        for(int i=0;i<n;i++){
            if(s[i] == '1') swipe=x;
            else{
                if(swipe>0){
                    swipe--;
                }else{
                    isPossible = false;
                    break;
                }
            }
        }
        cout<<(isPossible?"YES":"NO")<<endl;
    }
    return 0;
}
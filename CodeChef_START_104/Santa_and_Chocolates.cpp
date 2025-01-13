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
        int n,k;cin>>n>>k;
        vector<int>v(n);
        ll chocolate = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            chocolate+=v[i];
        }
        if(chocolate<n) cout<<"NO"<<endl;
        else if(chocolate%n == 0) cout<<"YES"<<endl;
        else cout<<(k<1?"NO":"YES")<<endl;
    }
    return 0;
}

// int div = chocolate/n;
//             int reminingCholateAfterSameDistibution =chocolate-(div*n);
//             cout<<reminingCholateAfterSameDistibution<<endl;
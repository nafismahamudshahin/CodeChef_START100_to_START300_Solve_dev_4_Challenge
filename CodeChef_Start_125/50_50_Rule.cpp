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
        int attendense,mark;
        cin>>attendense>>mark;
        if(attendense<50){ 
            cout<<"Z"<<endl;
        }else if(mark<50 && attendense>=50){
            cout<<"F"<<endl;
        }else{
            cout<<"A"<<endl;
    
        }
    }
    return 0;
}
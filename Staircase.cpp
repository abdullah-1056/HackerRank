#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n;
    cin>>n;
    
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(ll k=1;k<=i;k++){
            cout<<"#";
        }
        cout<<endl;
    }
}

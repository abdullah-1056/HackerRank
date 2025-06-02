#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,p=1;
    cin>>n;
    vector<ll>v(n);
    
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<ll>());
    
    for(ll i=0;i<n;i++){
        if(v[i]==v[i+1])
           p++;
        
        else
           break;
    }
    cout<<p<<endl;
}


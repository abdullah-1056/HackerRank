#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while (t--) {
    string s,p;
    cin>>s;
    p="hackerrank";
    ll j=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]==p[j]){
            j++;
        }
    }
    if(p.size()==j){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
  }
}
    

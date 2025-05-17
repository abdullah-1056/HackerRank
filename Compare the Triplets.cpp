#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a[3],b[3];
    ll al=0,bo=0;
    
    for (ll i=0;i<3;i++) {
          cin>>a[i];
    }
    for (ll i=0;i<3;i++) {
          cin>>b[i];
    }
    for (ll i=0;i<3;i++) {
         if(a[i]>b[i]){
            al++;
         }
         else if(a[i]<b[i]){
            bo++;
         }
    }
    cout<<al<<" "<<bo<<endl;
    
}
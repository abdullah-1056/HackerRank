#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    
    ll n;
    cin>>n;
    ll arr[n][n];
    ll p=0,q=0;
    
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
            
            if(i==j){
                p+=arr[i][j];
            }
           if(i + j == n - 1) {
                q += arr[i][j];
             }
        }
    }
   
     ll diff = abs(p-q);
    cout << diff << endl;
    
}
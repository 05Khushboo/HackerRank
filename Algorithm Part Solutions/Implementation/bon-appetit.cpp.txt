#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main() {
     ll n,k; cin>>n>>k; ll ans=0; 
    for(ll i=0;i<n;i++) 
        { ll a; cin>>a;
        if(i!=k) ans+=a;
    } ans/=2;
    ll b; cin>>b; 
    if(b!=ans) cout<<(b-ans);
    else cout<<"Bon Appetit";
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    map<ll,ll>m;
    ll n,k,o; cin>>n>>k>>o;
    ll b[n+1];
    for(ll i=1;i<=n;i++) cin>>b[i];
    for(ll i=1;i<=n;i++) {
        ll a=i;
        a=(a+k)%n;
        if(a==0) a=n;
        m[a]=i;
    }
    //for(ll i=1;i<=n;i++) cout<<m[i]<<" ";
    while(o--)
        {
        ll a;
       cin>>a; a++;
       cout<<b[m[a]]<<"\n";
    }
    return 0;
}

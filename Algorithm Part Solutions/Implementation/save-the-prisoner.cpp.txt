#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t; cin>>t;
    while(t--)
        { 
        ll n,m,s;
        cin>>n>>m>>s;
        ll ans;
        ans=m%n;
        if(ans==0) ans=n;
        ans+=(s-1);
        if(ans>n) ans%=n;
        cout<<ans<<"\n";
    }
    return 0;
}

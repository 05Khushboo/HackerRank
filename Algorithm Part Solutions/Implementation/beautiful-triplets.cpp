#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,d; cin>>n>>d;
    ll a[n];
    vector<ll> v[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++)
        {
        for(ll j=i+1;j<n;j++)
            {
            if((a[j]-a[i])==d){
                v[i].push_back(j);
            }
        }
    } ll ans=0;
    for(ll i=0;i<n;i++)
        {
        for( ll j=0;j<v[i].size();j++)
            {
            for(ll k=v[v[i][j]].size()-1;k>=0;k--)
                {
                if(v[v[i][j]][k]<=v[i][j]) break;
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}

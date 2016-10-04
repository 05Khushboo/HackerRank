#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int fun(pair<ll,ll> a,pair<ll,ll> b)
    {
    return a.first<b.first;
}
int main() {
   ll n; cin>>n; vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++)
        { ll a; cin>>a;
        v.push_back(pair<ll,ll>(a,i));
    }
   sort(v.begin(),v.end(),fun);ll m=10E10;
    for(ll i=1;i<v.size();i++)
        { ll a;
         if(v[i].first==v[i-1].first){ a=abs(v[i].second-v[i-1].second);if(m>a) m=a;}
        
    }
    if(m==10E10){
        cout<<"-1";return 0;
    }
    cout<<m;
    return 0;
}

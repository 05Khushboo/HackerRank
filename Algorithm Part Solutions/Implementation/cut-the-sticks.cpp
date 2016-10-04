#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
   map<ll,ll> m;
    ll n; cin>>n;
    for(ll i=0;i<n;i++)
        { ll a;cin>>a;
        if(m.find(a)==m.end())
            {
            m[a]=1;
        }
         else m[a]++;
        }
    map<ll,ll>::iterator it;
    ll i=0,c=0,k=10E10; 
    for(it=m.begin();it!=m.end();it++)
        {
        k=min(k,it->first);
    } i=k;
  while(!m.empty()){ k=10E10;
    for(it=m.begin();it!=m.end();it++)
        {
        if((it->first)>=i) {c+=it->second;if(it->first!=i) k=min(k,it->first-i);}
         else m.erase(it);
        
    }
    if(c!=0)  cout<<c<<"\n";
      i+=k;c=0;
  }
    return 0;
}

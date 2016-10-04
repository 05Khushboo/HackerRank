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
        ll n,a,b; cin>>n>>a>>b;map<ll,ll> m;
        if(a>b)
            {
            ll t=a;a=b;b=t;
        }
        cout<<(n-1)*a<<" ";
        ll no=(n-1)*a; m[no]=1;
        for(ll i=1;i<n;i++)
            {
            no+=(b-a);
           if(m.find(no)==m.end()) cout<<no<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

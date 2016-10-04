#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,t; cin>>n>>t;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    while(t--)
        {
        ll i,j; cin>>i>>j; ll m=4;
        for(ll k=i;k<=j;k++)
            { if(m>a[k]) m=a[k];
            
        }
        cout<<m<<"\n";
    }
    return 0;
}

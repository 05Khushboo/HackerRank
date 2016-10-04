#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k;
    cin>>n>>k;
    ll c[n];ll e=100; ll i=0,f=0;
    for(ll i=0;i<n;i++) cin>>c[i];
    while(1)
        {
        if(i==0&&f==1) break;
       i=(i+k)%n;
        if(c[i]==0) e-=1;
        else e-=3;
        f=1;
    }
    cout<<e;
    return 0;
}

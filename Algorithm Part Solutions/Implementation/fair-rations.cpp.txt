#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  ll n; cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i]; ll c=0;
    for(ll i=0;i<n-1;i++)
        {
        if(a[i]%2!=0)
            {
            a[i]+=1;
            a[i+1]+=1; c+=2;
        }
    }
    for(ll i=0;i<n;i++)
        {
        if(a[i]%2!=0) {
            cout<<"NO";return 0;
        }
    }
    cout<<c;
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,k; cin>>n>>k;ll s=0,p=0;
    while(n--)
        {
        ll c; cin>>c; 
        for(ll i=1;i<=c;i+=k)
            { p++;
           ll a=i;
             ll b=i+k-1;
             if(b>c) b=c;
             if(p>=a&&p<=b) {s++;}
        }
    }
    cout<<s;
    return 0;
}

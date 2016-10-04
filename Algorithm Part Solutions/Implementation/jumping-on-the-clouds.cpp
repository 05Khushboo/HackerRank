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
    ll c[n+1];
    for(ll i=1;i<=n;i++) cin>>c[i];
    ll s=1,ans=0;
    while(1)
        {
        if(s==n) {
            break;
        }
        if(s+2<=n){
        if(c[s+2]==0)
            {
            s=s+2;ans++; 
        }
            else {
                s=s+1;
                ans++;
            }
        
        }
        else {
            s=s+1; ans++;
        }
        
        
        
    }
    cout<<ans;
    return 0;
}

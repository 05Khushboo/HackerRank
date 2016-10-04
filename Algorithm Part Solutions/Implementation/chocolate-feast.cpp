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
        ll n,c,m; cin>>n>>c>>m;
        ll co=n/c;
        ll i=co;
        while(1)
            {
            if(i<m) break;
                co+=i/m;
            i=i/m+i%m;
        }
        cout<<co<<"\n";
    }
    return 0;
}

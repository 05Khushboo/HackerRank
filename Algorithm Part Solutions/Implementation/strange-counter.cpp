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
    ll m;
    float n=log((t+3.0)/3.0)/log(2);
    if(n>int(n)) m=n+1;
   else m=n;
    ll b=3*(pow(2,m)-1);
    ll ans=b-t+1;
    cout<<ans;
    return 0;
}

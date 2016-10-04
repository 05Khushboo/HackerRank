#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n,m; cin>>n>>m; ll b[n];
    //memset(b,10000,n);
    for(ll i=0;i<n;i++)
         {
         
         b[i]=1000000;
     }
   while(m--)
       {
       ll a; cin>>a;
       for(ll i=0;i<n;i++)
           { if(b[i]>(abs(a-i))) b[i]=(abs(a-i));
           
       }
   } ll m1=0;
     for(ll i=0;i<n;i++)
         {
         if(m1<b[i]) m1=b[i];
         //cout<<b[i]<<" ";
     }
    cout<<m1;
    return 0;
}

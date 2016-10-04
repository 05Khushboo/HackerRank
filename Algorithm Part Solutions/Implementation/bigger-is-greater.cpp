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
        { string w; cin>>w; ll k;
        vector<char> v; ll f=0;
         for(k=w.size()-2;k>=0;k--){
         char c=w[k]; ll j; char ans='z'+1;
         //cout<<ans;
         for(ll i=k+1;i<w.size();i++)
             {
              if(w[i]>c&&w[i]<ans){
                  ans=w[i];
                  f=1;j=i;
                  //cout<<j;
              }}
             if(f==1)
                 {
                 w[k]=w[j];
                 w[j]=c;
                 break;
             }
         }
         if(f==0) {cout<<"no answer\n";continue;}
         
         for(ll i=0;i<=k;i++)
              {
              cout<<w[i];
          }
         for(ll i=k+1;i<w.size();i++)
             v.push_back(w[i]);
         sort(v.begin(),v.end());
         for(ll i=0;i<v.size();i++)
         cout<<v[i];
         cout<<"\n";
        
    }
    return 0;
}

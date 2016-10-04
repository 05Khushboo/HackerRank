#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
   cin >> s; 
  ll l=s.length();
    char p[101][101];
    ll r=floor(sqrt(l));
    ll c=ceil(sqrt(l));
    if(r*c<l) r=c; ll k=0; ll i,j,a,b;
   // cout<<r<<" "<<c;
    for(i=0;i<r;i++)
        {
        for(j=0;j<c;j++)
            {
           p[i][j]=s[k++];
            //cout<<p[i][j];
            if(k==l){a=i;b=j;break;}
        } 
        if(k==l) break;
    }// cout<<k;
    //a=i;b=j;
   // cout<<a<<" "<<b; 
   // cout<<p[2][3];
    for(j=0;j<c;j++)
        {
        for(i=0;i<r;i++)
            {if((i==a&&j>b)) break;
           cout<<p[i][j]; 
           
        }
        //if(k==l) break;
        cout<<" ";
    }
    
    
    return 0;
}

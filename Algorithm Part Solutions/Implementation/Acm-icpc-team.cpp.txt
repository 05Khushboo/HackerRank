#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define _cin ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() { _cin;
    ll n,m; cin>>n>>m;
    string v[n];
    ll j=1; ll i=0;
    while(i<n)
        { 
         cin>>v[i];
        
        i++;
    } ll c=0,max1=-1,o=1;
  
         i=0;  
           
    while(i<n-1)
        { j=i+1;
        while(j<n)
            { 
             c=0;
            for(ll k=0;k<m;k++)
                {
                if(v[i][k]!=v[j][k])
                    {
                    c++;
                }
                else if(v[i][k]=='1'&&v[j][k]=='1') c++;
                
            }
            
             //cout<<c;
        if(max1<c) {
            max1=c; o=1; //cout<<c;
        } 
                 else if(max1==c) o++;
            j++;
    } i++;
         
    }
    cout<<max1<<"\n"<<o;
        
    return 0;
}

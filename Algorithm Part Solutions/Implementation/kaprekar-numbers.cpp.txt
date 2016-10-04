#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mx 100000
ll p,q,f;
void fun()
    {
    for(ll i=p;i<=q;i++)
        { if(i==1) {
            cout<<1<<" "; f=1;
            continue;
        }
        ll b=i*i; //cout<<log(45);
        ll k=ceil(log(i)/log(10));
        ll d=ceil(log(b)/log(10));
       // cout<<log(2025)/log(10);
       ll h=d-k; ll j=0,no=0;
        //cout<<k<<" "<<d<<" "<<h;
        // cout<<b<<" ";
        while(j<k)
            { ll r=b%10;
            no+=pow(10,j)*r;
             b/=10;
             j++;
        } j=0; ll no1=0;//cout<<b<<" "<<no<<" ";
         while(j<h)
             {ll r=b%10;
            no1+=pow(10,j)*r;
             b/=10;
             j++;
             
         }
        if(no+no1==i) {
            cout<<i<<" ";
            f=1;
        }
        
    }
    
}
int main() 
    {    
     cin>>p>>q;   
    fun();
    if(f==0) cout<<"INVALID RANGE";
    return 0;
}

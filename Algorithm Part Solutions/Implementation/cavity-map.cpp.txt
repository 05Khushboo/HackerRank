#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll int
int main(){
    ll n;
    cin>>n;
    ll a[n][n];
    for(ll i = 0;i<n;i++){
        for(ll j=0;j<n;j++)
        { scanf("%1d",&a[i][j]);
        }
    }
    /*for(ll i = 0;i < n;i++){
        for(ll j=0;j<n;j++){
           cout<<a[i][j];
          //  else cout<<"X";
        }
        cout<<"\n";
    }*/
   for(ll i=1;i<n-1;i++)
        {
        for(ll j=1;j<n-1;j++)
            {
            if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1])
                a[i][j]=10;
        }
    }
    for(ll i = 0;i < n;i++){
        for(ll j=0;j<n;j++){
          if(a[i][j]!=10)  cout<<a[i][j];
            else cout<<"X";
        }
        cout<<"\n";
    }
    
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main() {
   ll a,b,c,a1,b1,c1; cin>>a>>b>>c>>a1>>b1>>c1;
    ll ali=0,bb=0;
    if(a>a1) ali++; else if(a1>a) bb++;
        if(b>b1) ali++; else if(b1>b) bb++;
        if(c>c1) ali++; else if(c1>c) bb++;
        cout<<ali<<" "<<bb;
    return 0;
}

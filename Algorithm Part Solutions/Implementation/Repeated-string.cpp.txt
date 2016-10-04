#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long int
int main() {
   string s; cin>>s; ll n; cin>>n;
    ll c=s.size();
    ll a=n/c; ll b=n%c; ll ans=0;
    for(ll i=0;i<c;i++) if(s[i]=='a') ans++;
        ans*=a;
    for(ll i=0;i<b;i++) if(s[i]=='a') ans++;
        cout<<ans;
    return 0;
}

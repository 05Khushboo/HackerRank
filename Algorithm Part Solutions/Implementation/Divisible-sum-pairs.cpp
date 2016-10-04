#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll n,k;
	cin>>n>>k;
	ll a[100001];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll c=0;
	for(ll i=0;i<n;i++)
	{
		for(ll j=i+1;j<n;j++)
		{
			if((a[i]+a[j])%k==0) c++;
		}
	}
	cout<<c;
	return 0;
}

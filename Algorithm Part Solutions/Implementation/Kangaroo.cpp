#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	float x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	float a;
	    if(v1==v2)
		{ 
		if(x1==x2)cout<<"YES";
	else cout<<"NO";
	    }else{
	a=(x1-x2)/(v2-v1);
	ll b=(x1-x2)/(v2-v1);
	float c=b;
	if(a==c&&a>=1)cout<<"YES";
	    else cout<<"NO";}
	return 0;
}

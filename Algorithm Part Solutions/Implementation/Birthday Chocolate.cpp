/*input
5
1 1 1 1 1 
3 2
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vii;
typedef pair<int,int> pii;
typedef list<int>li;
typedef list<li>lii;
typedef set<int>si;
typedef set<ll> sl;
typedef set<si>sii;
typedef map<int,int> mi;
typedef map<ll, ll> mll;
#define be_fast std::ios::sync_with_stdio(false);std::cin.tie(NULL); std::cout.tie(NULL);
#define print cout <<
#define bitlezero(n) __builtin_clz(n)    //trailing zeroes
#define bitone(n) __builtin_popcount(n)        //1-count
#define bittrzero(n) __builtin_ctz(n)            //trailing zeroes
#define ict ll t;cin>>t;while(t--)
#define lp(n)  for(ll i=0;i<n;i++)
#define lpe(n) for(ll i=1;i<=n;i++)
#define loop(a,b,c)   for (int (a)=(b); (a)<(c); ++(a))
#define loopn(a,b,c)  for (int (a)=(b); (a)<=(c); ++(a))
#define loopd(a,b,c)  for (int (a)=(b); (a)>=(c); --(a))
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define limit 100000+5
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define takeline(str) getline(cin, str)
#define all(c) c.begin(), c.end()    //iterator range
#define rall(c) c.rbegin(),c.rend()    //reverse all iterator
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++))
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
int main()
{
	ll n; cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];
	ll d,m; cin>>d>>m;
	if(m>n) cout<<"0";
	else
	{   ll k=0,c=0;
		for(ll i=0;i<m;i++) k+=a[i];
		if(k==d) c++;
		for(ll i=m,j=0;i<n;i++,j++)
		{
			k+=a[i];
			k-=a[j];
			if(k==d) c++;
		}
		cout<<c;
	}
	return 0;
}
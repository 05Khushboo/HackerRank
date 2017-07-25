/*input
10 4

4 -9 -3 0 6 3 -1 4 8 1

7 8

10 10

2 7

1 10
*/
/*
https://www.hackerrank.com/contests/programming-camp-smvdu/challenges/minmax-query
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
ll sx[10000001],sn[10000001],a[10000001];
ll mx = -1E17,mn=1E17;
void build(ll k,ll l, ll h)
{
  if(l==h)
  {
    sx[k]=sn[k]=a[l];
    return;
  }
  else{
    ll m = (l+h)/2;
    build(2*k,l,m);
    build(2*k+1,m+1,h);
    sx[k] = max(sx[2*k],sx[2*k+1]);
    sn[k] = min(sn[2*k],sn[2*k+1]);
    return;
  }
}
pair<ll,ll> query(ll k,ll l,ll h,ll L,ll R)
{
  pair<ll,ll> p,p1,p2;
  if(l==L&&h==R)
  {
   p.first = sx[k];
   p.second = sn[k];
   return p;
  }
  else{
    ll  m = (l+h)/2;
    if(R<=m){
      return query(2*k,l,m,L,R);
    }
    else if(L>m)
    {
      return query(2*k+1,m+1,h,L,R);
    }
    else{
      p = query(2*k,l,m,L,m);
      p1 = query(2*k+1,m+1,h,m+1,R);
      p2.first = max(p.first,p1.first);
      p2.second = min(p.second,p1.second);
      return p2;
    }
  }
}
int main()
{
  be_fast;
  ll n,q; 
  cin>>n>>q;
  lp(n) cin>>a[i+1];
  build(1,1,n);
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    pair<ll,ll> p;
    p=query(1,1,n,l,r);
    cout<<p.first+p.second<<"\n";
  }
  return 0;
}
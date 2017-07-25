/*input
4 4
1 1 2 1
2
2
3
1
*/
/*
https://www.hackerrank.com/contests/programming-camp-smvdu/challenges/greater-to-left
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
 ll a[6000001],b[6000001];
int main()
{
  be_fast;
  ll n,q;
  cin>>n>>q;
  b[0] = -1;
  b[1] = -1;
  lp(n) cin>>a[i+1];
  vector<ll> v;
  v.push_back(a[1]);
  for(ll i = 2;i<=n;i++)
  {
    ll s = v.size()-1;
    // cout<<s<<" ";
   if(s!=-1){ while(!v.empty()&&a[i]>v[s])
    {
      v.pop_back();
      s = v.size()-1;
      if(s==-1) break;
    }
  }
    // cout<<s<<" ";
    if(v.empty())
    {
      b[i] = -1;
      v.push_back(a[i]);
    }
    else{
      s = v.size()-1;
      b[i] = v[s];
      v.push_back(a[i]);
    }
  }
  // lp(n)cout<<b[i+1]<<" ";
  while(q--)
  {
    ll p; cin>>p;
    if(p>n)
    {
      cout<<b[n]<<"\n";
      continue;
    }
    cout<<b[p]<<"\n";
    
  } 
  return 0;
}
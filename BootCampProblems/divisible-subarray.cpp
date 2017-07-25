/*input
5
9 12 11 21 13
*/
/*
https://www.hackerrank.com/contests/programming-camp-smvdu/challenges/divisible-subarray
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
  be_fast;
  ll n; cin>>n;
  ll a[n],b[n],c[n];
  lp(n) {
    cin>>a[i];
    a[i]%=n;
    b[i] = c[i] = -1;
  }
  ll f=0,l=0,ans=0;
  lp(n)
  { 
    ans+=a[i];
    ll k = ans%n;
    // cout<<k<<" ";
    if(k==0)
    {
      l = i;
      break;
    }
    else{
      if(b[k]!=-1)
      {
          f = c[k] + 1;
          l = i;
          // cout<<f<<"F";
          break;
      }
      else{
        // cout<<"P";
        b[k] = 1;
        c[k] = i;
      }
    }
  }
  cout<<f+1<<" "<<l+1;
  return 0;
}
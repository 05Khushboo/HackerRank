/*input
1
12
4 3 4 2 5
1 8
2 9 7
2 6 11
1 8
2 9 10
2 10 11
1 12
2 10 12
1 12
1 12
*/
/*
https://www.hackerrank.com/contests/programming-camp-smvdu/challenges/maximum-to-left
*/
#include <algorithm>
#include<map>
#include <vector>
#include <climits>
#include <iostream>
using namespace std;
#define ll long long int
const ll maxnodes = 5000001;

ll nodes = maxnodes, src, dest;
ll dist[maxnodes], q[maxnodes], work[maxnodes];

struct Edge {
  ll to, rev;
  ll f, cap;
};

vector<Edge> g[maxnodes];

// Adds bidirectional edge
void addEdge(ll s, ll t, ll cap){
  Edge a = {t, g[t].size(), 0, cap};
  Edge b = {s, g[s].size(), 0, cap};
  g[s].push_back(a);
  g[t].push_back(b);
}

bool dinic_bfs() {
  fill(dist, dist + nodes, -1);
  dist[src] = 0;
  ll qt = 0;
  q[qt++] = src;
  for (ll qh = 0; qh < qt; qh++) {
    ll u = q[qh];
    for (ll j = 0; j < (ll) g[u].size(); j++) {
      Edge &e = g[u][j];
      ll v = e.to;
      if (dist[v] < 0 && e.f < e.cap) {
        dist[v] = dist[u] + 1;
        q[qt++] = v;
      }
    }
  }
  return dist[dest] >= 0;
}

ll dinic_dfs(ll u, ll f) {
  if (u == dest)
    return f;
  for (ll &i = work[u]; i < (ll) g[u].size(); i++) {
    Edge &e = g[u][i];
    if (e.cap <= e.f) continue;
    ll v = e.to;
    if (dist[v] == dist[u] + 1) {
      ll df = dinic_dfs(v, min(f, e.cap - e.f));
      if (df > 0) {
        e.f += df;
        g[v][e.rev].f -= df;
        return df;
      }
    }
  }
  return 0;
}

ll maxFlow(ll _src, ll _dest) {
  src = _src;
  dest = _dest;
  ll result = 0;
  while (dinic_bfs()) {
    fill(work, work + nodes, 0);
    while (ll delta = dinic_dfs(src, INT_MAX))
      result += delta;
  }
  return result;
}

int main() {
  ll t; cin>>t;
  for(ll ik=0;ik<t;ik++)
  {
    ll n,m;
    cin>>n;
    nodes = n;

    ll capacity[n][n];
    for(ll i =0;i<n;i++) 
      {
        for(ll j = 0;j<n;j++) 
          {
            capacity[i][j]=0;
          }

        }
        // cout<<n<<" ";
    for(ll i =0;i<n-1;i++)
    {
      ll p1; cin>>p1;
      // cout<<p1<<" ";
      for(ll j =0;j<p1;j++)
      {
        ll x1; 
        cin>>x1;
        // cout<<x1<<" ";
        x1--;
        // if(x1==i) continue;
        if(i==0||x1==(n-1))capacity[i][x1] = 1;
        else capacity[i][x1] = INT_MAX;
      }
    }
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < n; j++)
            if (capacity[i][j] != 0)
                addEdge(i, j, capacity[i][j]);
    cout <<maxFlow(0,n-1) << endl;
    for(ll i =0;i<=n;i++)
    {
      g[i].clear();
    }
  }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
const int N= 5*1e5+1;
int a[N];
int mintree[4*N],maxtree[4*N];
void build(int node,int i,int j)
{
  cerr << "build " << i << " " << j << endl;
  if(i==j)
  {
    mintree[node]=a[i];
    maxtree[node]=a[i];
  }
  else
  {
    int mid=(i+j)/2;
    build(2*node,i,mid);
    build(2*node+1,mid+1,j);
    mintree[node]=min(mintree[2*node],mintree[2*node+1]);
    maxtree[node]=max(maxtree[2*node],maxtree[2*node+1]);
  }
}

int query(int node,int i,int j,int k,int l)
{
  //cerr << i << " " << j << " " << k << " " << l << endl;
  if(k <= i && j <= l)
    return mintree[node];
  else
  {
    int mid=(i+j)/2;
    if(l <= mid){
      int ans = query(2*node,i,mid,k,l);
      return ans;
    }
    if (k >= mid+1) {
      int ans = query(2*node+1,mid+1,j,k,l);
      return ans;
    }
    int ans =   min(query(2*node,i,mid,k,mid), query(2*node+1,mid+1,j,mid+1,l));
    return ans;
  }
}
int query1(int node,int i,int j,int k,int l)
{
  //cerr << i << " " << j << " " << k << " " << l << endl;
  if(i>=k&&j<=l)
    return maxtree[node];
  else
  {
    int mid=(i+j)/2;
    if(l <= mid) {
      int ans = query1(2*node,i,mid,k,l);
      return ans;
    }
    if (k >= mid+1){
      int ans = query1(2*node+1,mid+1,j,k,l);
      return ans;
    }
    int ans =  max(query1(2*node,i,mid,k,mid), query1(2*node+1,mid+1,j,mid+1,l));
    return ans;
  }
}

int main() {
    int n,q;
    cin>>n>>q;

    for(int i=0;i<n;i++){
      cin>>a[i];
    }

   build(1,0,n-1);
    int l,r;
    while(q--)
    {
      cin>>l>>r;
      int k=query(1,0,n-1,l-1,r-1);
      int k1= query1(1,0,n-1,l-1,r-1); 
      cout<<k1+k<<endl;
    }
    return 0;
}

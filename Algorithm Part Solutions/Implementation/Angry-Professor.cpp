#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t,a1=0;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        a1=0;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i]; if(a[a_i]<=0) a1++;
        }
        if(a1>=k) cout<<"NO\n";
        else cout<<"YES\n"; a1=0;
    }
    return 0;
}

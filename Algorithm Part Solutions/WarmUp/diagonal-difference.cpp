#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;long long int a1=0,b=0,c=0;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j]; if(a_i==a_j) {
              a1+=a[a_i][a_j];
          } if(n-1-a_i==a_j)  b+=a[a_i][a_j];
       }
    }
    c=abs(a1-b); cout<<c;
    return 0;
}

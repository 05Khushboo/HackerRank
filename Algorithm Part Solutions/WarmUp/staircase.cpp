#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
        { for(int j=1;j<=n-i;j++) cout<<" ";
         for(int j=1;j<=i;j++) cout<<"#";
         cout<<"\n";
    }
    return 0;
}

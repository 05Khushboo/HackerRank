#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n,m,a,c=0;
        cin >> n;m=n;
        while(m!=0){
            a=m%10;
            if(a!=0&&n%a==0){
                c++;
            }
            m/=10;
        }
        cout<<c<<"\n";
    }
    return 0;
}

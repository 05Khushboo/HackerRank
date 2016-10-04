#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,a=0,b=0,c=0;float a1,b1,c1,q,w,x;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i]; if(arr[arr_i]>0) a++;
       else if(arr[arr_i]<0) b++; else c++;
    } q=a;w=b;x=c;
    a1=q/n;
    b1=w/n;
    c1=x/n;
    cout<<a1<<"\n"<<b1<<"\n"<<c1;
    return 0;
}

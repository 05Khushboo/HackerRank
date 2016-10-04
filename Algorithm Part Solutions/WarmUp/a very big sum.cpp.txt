#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<long long int> arr(n); long long int b=0;
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];  b+=arr[arr_i];
    }
    cout<<b;
    return 0;
}

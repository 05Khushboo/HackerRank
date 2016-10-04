#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int h;
    map<ll,string> m;
    m[1]="one";m[2]="two";m[3]="three";m[4]="four";m[5]="five";
    m[6]="six";m[7]="seven";m[8]="eight";m[9]="nine";m[10]="ten";
    m[11]="eleven";m[12]="twelve";m[13]="thirteen";m[14]="fourteen";m[16]="sixteen";
  m[17]="seventeen";m[18]="eightteen";m[19]="nineteen";m[20]="twenty";
    m[21]="twenty one";m[22]="twenty two";m[23]="twenty three";m[24]="twenty four";m[25]="twenty five";
    m[26]="twenty six";
    m[27]="twenty seven";m[28]="twenty eight";m[29]="twenty nine";
    cin >> h;
    int M;
    cin >> M;
    if(M==0) {
        cout<<m[h]<<" o' clock";
    }
    else if(M==15)
        {
        cout<<"quarter past "<<m[h];
    }
    else if(M<30){
        cout<<m[M]<<" minutes past "<<m[h];
    }
    else if(M==30)
        {
        cout<<"half past "<<m[h];
    }
    else if(M==45)
        { cout<<"quarter to "<<m[h+1];
        
    }
    else if(M>30)
        {
        cout<<m[60-M]<<" minutes to "<<m[h+1];
    }
    return 0;
}

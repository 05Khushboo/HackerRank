#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string t;
    cin >> t;
   if(t[8]=='A') {
       if(t[0]=='1'&&t[1]=='2') cout<<"00:"<<t[3]<<t[4]<<":"<<t[6]<<t[7];
           else {
               for(int i=0;i<=7;i++) cout<<t[i];
           }
       }
    else 
        {
         if(t[0]=='1'&&t[1]=='2') {
              for(int i=0;i<=7;i++) cout<<t[i];
         }
        else{  int a=(t[0]-48)*10+(t[1]-48)*1;
             a+=12;
             cout<<a<<":"<<t[3]<<t[4]<<":"<<t[6]<<t[7];
            
        }
    }
    return 0;
}

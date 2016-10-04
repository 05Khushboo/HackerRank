#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int c=0;
    if(y2==y1){
        if(m2==m1){
            if(d1==d2){
                c=0;
            }
            else{ if(d1<d2) c=0;
               else  c=15*(d1-d2);
            }
        }else{ if(m1<m2) c=0;
            else c=500*(m1-m2);
        }
        
    }else{ if(y1<y2) c=0;
        else c=10000;
    }
    cout<<c;
    return 0;
}

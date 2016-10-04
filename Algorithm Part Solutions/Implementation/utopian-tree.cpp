#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int t,n,ans=0,i;
    scanf("%d",&t);
    while(t--)
        {
        scanf("%d",&n);
       for(i=0;i<=n;i++)
          {
           if(i%2==0) ans+=1;
           else ans*=2;
       }
        printf("%d\n",ans);
        ans=0;
    }
    return 0;
}

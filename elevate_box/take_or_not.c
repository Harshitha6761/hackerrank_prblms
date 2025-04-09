#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,ob,c,s,i,j,k,cost[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ob);
        scanf("%d",&c);
        scanf("%d",&s);
        for(j=1;j<=ob;j++){
           scanf("%d",&cost[j]);
        }
        int sum=0,t=0;
        for(k=1;k<=ob;k++){
            t=t+cost[k];
            if(cost[k]>s)
            sum=sum+(cost[k]-s);
        }
        if((c+sum)>=t)
            printf("NO COUPON\n");
        else
            printf("COUPON\n");
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

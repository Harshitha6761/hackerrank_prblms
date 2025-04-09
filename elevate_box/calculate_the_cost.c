#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,ob,x,i,a[100],b[100],j,k,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&ob);
        scanf("%d",&x);
        for(j=1;j<=ob;j++){
            scanf("%d",&a[j]);
        }
        for(k=1;k<=ob;k++){
            scanf("%d",&b[k]);
            
        }
        int sum=0;
        for(p=1;p<=ob;p++){
            if(a[p]>=x)
            sum=sum+b[p];
            
        }
        printf("%d\n",sum);

        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

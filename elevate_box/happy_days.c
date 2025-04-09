#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,d,a[100],k[100],i,j,p,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&d);
        for(j=1;j<=d;j++){
            scanf("%d",&a[j]);
        }
        for(p=1;p<=d;p++){
            scanf("%d",&k[p]);
        }
        int count=0;
        for(q=1;q<=d;q++){
            if(2*a[q]<k[q] || a[q]>2*k[q]){
                continue;
            }
            else
                count=count+1;
        }
        printf("%d\n",count);
        
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
                    
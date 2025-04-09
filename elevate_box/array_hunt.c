#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,a[100],key,count=0;
    scanf("%d",&n);
    scanf("%d",&key);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]==key)
            count++;
    }
    if(count==0)
        printf("NO");
    else
        printf("YES");
     
     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,st,t,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    scanf("%d",&st);
    scanf("%d",&t);
    if(st>t)
    printf("%d",st-t);
    else
    printf("0");
    printf("\n");
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
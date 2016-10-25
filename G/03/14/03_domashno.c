#include <stdio.h>

int main(){
    int n,k,m,i,sum;
    sum=0;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &k);
    for(i=0;i<n;i++)sum=sum+m-(m*i/(50*k));
    printf("%d", sum);
return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>

int n,i,a,mx,sum,fl;

int main() {

    printf("Kolichestvo elementov massiva: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &a);
        if(a>mx)mx=a;
        if(a<0) fl=1;
        if(fl==0) sum+=a;
    }

    printf("Maximum=%d\n", mx);
    printf("Summa=%d\n", sum);

    return 0;
}
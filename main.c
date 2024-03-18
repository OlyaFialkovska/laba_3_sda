#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,buf;

    printf("Input n = ");
    scanf("%d", &n);

    int a[4*n], b[n];

    printf("Input array a: \n");
    for (i = 0; i < 4*n; i++)
        scanf("%d", &a[i]);

    int p = 4*n - 1;

    for(i=0; i<n; i++)
        b[i]=a[p-i];
    for(i=0; i<n; i++)
    {
        a[p-i]=a[i];
        a[i]=b[i];
    }
    for(i=n; i<2*n; i++)
        b[i-n]=a[i];
    for(i=2*n; i<3*n; i++)
    {
        a[i-n]=a[i];
        a[i]=b[i-2*n];
    }

    printf("Output array a: \n");//out
    for(i=0; i<4*n; i++)
        printf("%d\n",a[i]);

    return 0;
}

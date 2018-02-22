#include <stdio.h>
void main()
{
    int n, i;

    printf("Enter an numr: ");
    scanf("%d",&n);

    for(i=1; i<=10; ++i)
    {
       printf("\n%d",n*i);
    }
}

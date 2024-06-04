#include <stdio.h>


int main()
{
    int a[1000],i,n;
    float sum=0;


    scanf("%d",&n);


    for(i=0; i<n; i++)
    {
        scanf("%f",&a[i]);
    }


    for(i=0; i<n; i++)
    {

        sum= sum+ a[i];
    }
     printf("%d",sum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2];
    int b[2];
    int i =0;
    for(int i=0;i<2;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<2;i++){
        scanf("%d",&b[i]);
    }
    if (a[1]!=0){
        for(i=0;i<a[1];i++){
            a[0]=a[0]*10;
        }
        }
        if (b[1]!=0){
        for(i=0;i<b[1];i++){
            b[0]=b[0]*10;
        }
        }
    if (a[0]>b[0]){
        printf("%d",a[0]);
    }
    else {
        printf("%d",b[0]);
    }
return 0;
}

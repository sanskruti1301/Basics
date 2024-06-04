#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   if (a==1 || b==1){
    printf(1);
   }
   else{
    printf("%d",(a+b)/4);
   }

    return 0;
}

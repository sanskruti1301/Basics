#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i,j=0,k=0,c=1;

   scanf("%d",&n);
   int s[n];
   int a[n],b[n];
   for (i=0;i<n;i++){
    scanf("%d",&s[i]);
   }
   //to check
   for(i=0;i<n;i++){
    if (s[i]<s[i+1]){
        c=0;
        }
    }
    if(c=1){
        for(i=0;i<n;i++){
            if(s[i]==1){
                a[j]=i+1;
                j++;
            }
            if(s[i]==0){
                b[k]=i+1;
                k++;
            }

        }
        if(j>k){
            for(i=0;i<j;i++){
                printf("%d",a[i]);
            }
            for(i=0;i<k;i++){
                printf("%d",b[i+1]);
            }

        }


    }

    if(c=0){
        printf("%d",0);
    }

   //reversing



    return 0;
}

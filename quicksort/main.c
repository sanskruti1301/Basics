#include <stdio.h>
#include <stdlib.h>
void partition(l,h){
pivot=arr_fac[(l+h)/2].id
int i=l,j=h;
while(i<j){
    do{
        i++;
    } while(arr_fac[i].id <=pivot);
    do{
        j--;
    } while(arr_fac[j].id >pivot);
    if(i<j){
        swap(arr_fac[i].id,arr_fac[j].id);
    }
    swap(arr_fac[l].id,arr_fac[j].id);
    return j;

}
}
void quicksort (l,h){
if(l<h){
    j= partiton(l,h);
    quicksort(l,j);
    quicksort(j+1,h);
}
}
int main()
{ struct faculty
  { char name[20];
    int id[20];
    int code[20];
    char class_name[20];

  };
  int i=0,j=0,key,count=0;
  struct faculty arr_fac[4];

        for(i = 0; i < 4; i++ )
    {
        printf("Enter name of faculty %d\n", i+1);
        scanf("%s", &arr_fac[i].name);

        printf("Enter id: \n");
        scanf("%d", &arr_fac[i].id);

        printf("Enter subject code: \n");
        scanf("%d", &arr_fac[i].code);

        printf("Enter class name: \n");
        scanf("%s", &arr_fac[i].class_name);
    }
        printf("Unsorted Faculty data \n ");
        for(i=0;i<7;i++){
    printf("Faculty %s\n ID %d \t subject code %d\t Class name %s \t",arr_fac[i].name,arr_fac[i].id,arr_fac[i].code,arr_fac[i].class_name );
     }
quicksort(0,4);
printf("SORTED FACULTY DATA/n")
for(i=0;i<4;i++){
    printf("Faculty %s\n ID %d \t subject code %d\t Class name %s \t",arr_fac[i].name,arr_fac[i].id,arr_fac[i].code,arr_fac[i].class_name );
    }
return 0;
}

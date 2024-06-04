#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,m,i,j;
    int all[n][m],max[n][m],need[n][m];
    int ava[m];
    printf("ENTER THE NUMBER OF PROCESSES \n");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF RESOURCES \n");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        printf("ENTER THE AVAILABLITY OF RESOURCE %d \n",i+1);
        scanf("%d",&ava[i]);
    }
    printf("\nENTER VALUES OF ALLOCATIONS:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&all[i][j]);
			}
	}
	printf("\nENTER VALUES OF MAX:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&max[i][j]);
			}
	}
	for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            need[i][j] = max[i][j] - all[i][j];
    }
    printf("\nThe need is:\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d  ", need[i][j]);
        printf("\n");
    }
    return 0;
}

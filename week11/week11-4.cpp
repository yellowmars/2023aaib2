#include <stdio.h>
int main()
{
	int a[10][10];
	int m,n;//part1 input
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	//part2:output
	for(int j=0;j<n;j++){
		for(int i=m-1;i>=0;i--){//part3
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
}
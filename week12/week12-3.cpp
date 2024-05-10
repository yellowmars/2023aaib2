#include <stdio.h>
int main()
{
    int n=2;
    int a[2][2]={ {10,20},{11,22} };
    int b[2][2]={ {2,1},{3,2} };
    int c[2][2];
    ///上週教的 part1 讀資料。先設好，就不用再讀
    int *p1,*p2,*p3;///為了在Tutor秀箭頭，用指標
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                p1=&a[i][k];
                p2=&a[k][j];
                p3=&a[i][j];
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%3d ",c[i][j]);
        }
        printf("\n");
    }
}


#include <stdio.h>
int myAdd(int a,int b){///函式定義
    return a+b;
}
void myPrint(int a){
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main()///函式
{
    int ans=myAdd(3,4);///函式呼叫
    printf("Hello ans:%d\n",ans);
        myPrint(ans);///函式呼叫(請他幫我做事)
}

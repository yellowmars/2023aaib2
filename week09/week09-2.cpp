#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("myFunc()�̪�x�O:%d\n");
}
int main()
{
    int x=100;
    printf("main()�̪�x�O:%d\n");
    myFuncA();
    printf("main()�̪�x�O:%d\n");

}

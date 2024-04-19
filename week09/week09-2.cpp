#include <stdio.h>
int myFuncA()
{
    int x=200;
    printf("myFunc()裡的x是:%d\n");
}
int main()
{
    int x=100;
    printf("main()裡的x是:%d\n");
    myFuncA();
    printf("main()裡的x是:%d\n");

}

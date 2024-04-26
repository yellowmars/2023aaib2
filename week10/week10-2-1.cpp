///a程,bい,c greatest common divisor
#include <stdio.h>
int gcd(int a,int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);///ρど跑ρρ跑ρ
}
int main()
{
    printf("叫块 a bㄢ计:");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("程そ计琌: %d\n",gcd(a,b));

}

1. Rathik organized
#include<stdio.h>
int main()
{
    int testnum1,testnum2;
    int sum,sub,mult,mod;
    float div;
    scanf("%d",&testnum1);
    scanf("%d",&testnum2);
    sum=testnum1+testnum2;
    sub=testnum1-testnum2;
    div=(float)testnum1/(float)testnum2;
    mult=testnum1*testnum2;
    mod=testnum1%testnum2;
    printf("\nAddition : %d",sum);
    printf("\nSubtraction : %d",sub);
    printf("\nMultiplication : %d",mult);
    printf("\nDivision : %0.3f",div);
    printf("\nModulus : %d",mod);
    return 0;
}
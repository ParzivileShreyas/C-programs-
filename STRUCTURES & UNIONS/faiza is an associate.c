#include <stdio.h>
#include<math.h>
struct EMI{
 float principal,rate,time;}pay;
int main()
{
    float emi;
 scanf("%f%f%f",&pay.principal,&pay.rate,&pay.time);
 pay.rate=pay.rate/1200;
 pay.time=pay.time*12;
 emi=pay.principal*pay.rate*pow(1+pay.rate,pay.time)/(pow(1+pay.rate,pay.time)-1);
printf("%.2f",emi);
return 0;
}
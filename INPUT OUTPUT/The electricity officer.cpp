#include <stdio.h>
#include <math.h>
int main()
{
    int unitconsumed,totalbillamount;
    int costperunit;
    scanf("%d",&unitconsumed);
    scanf("%d",&costperunit);
    totalbillamount=pow(unitconsumed,costperunit);
    printf("\n%d",totalbillamount);
	return 0;
}
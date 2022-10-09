#include <stdio.h>
int convert(int);
int main()
{
    int d;
    scanf("%d",&d);
    int weeks,days;
    weeks=(d-convert(d)*365)/7;
    days=(d-convert(d)*365)%7;
    printf("%d Years %d Weeks %d Days",convert(d),weeks,days);
	return 0;
}
int convert(int ndays)
{
    return ndays/365;
}
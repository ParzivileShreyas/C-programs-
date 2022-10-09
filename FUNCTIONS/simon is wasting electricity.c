#include <stdio.h>
float bill(int unit);
int main()
{int n;
scanf("%d", &n);
float total = bill(n);
printf("%.2f", total);

    return 0;
}
float bill(int unit){

    if(unit < 50) return unit*0.50;

    else if(unit <= 50) return (((unit-50)*0.75) + 25);

    else if(unit <= 250) return (((unit-150)*1.20)+100);

    else return (((unit-250)*1.50) + 220);

    return 0;
}
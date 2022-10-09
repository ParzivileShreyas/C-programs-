#include <stdio.h>
int main()
{
    int aravspeed,aaronspeed,speeddiff;
    int speedmore;
    scanf("%d %d",&aravspeed,&aaronspeed);
    speeddiff=aravspeed-aaronspeed;
    speedmore=aaronspeed-aravspeed;
    if(speeddiff>speedmore){
        printf("%d",speeddiff);
    }
    else{
        printf("%d",speedmore);}
	return 0;
}

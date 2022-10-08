#include <stdio.h>
int main()
{
    int number;
    scanf("%d",&number);
    if(number<0){
        printf("NEGATIVE");
    }
    else if(number>0){
        printf("POSITIVE");
    }
    else{
        printf("zero");
    }
	return 0;
}
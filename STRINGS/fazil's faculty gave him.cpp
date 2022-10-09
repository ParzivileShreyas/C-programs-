#include <stdio.h>
int main()
{
    int t;
    int l;
    scanf("%d",&t);
    int sum;
    char string;
    int pair;
    while(t>0){
        pair=0;
        sum=0;
        scanf("%d",&l);
        int i;
        for(i=0;i<=l;i++){
            scanf("%c",&string);
            if(string=='1')
            pair++;
        }
        for(i=1;i<=pair;i++)
        sum+=i;
        printf("%d\n",sum);
        t--;}
	return 0;
}
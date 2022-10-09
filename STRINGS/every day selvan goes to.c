#include <string.h>
#include <stdio.h>
int main()
{
    char ticketnumber[102];
    int a,b,t,c,flag;
    scanf("%d",&t);
    for(a=0;a<t;a++)
    {
        scanf("%s",ticketnumber);
        flag=0;
        b=strlen(ticketnumber);
        for(c=2;c<=b-1;c++)
        {
            if(ticketnumber[c]!=ticketnumber[c-2])
            flag=1;
        }
        (flag==0)?printf("YES\n"):printf("NO\n");
    }
	return 0;
}
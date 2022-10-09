#include <stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--){
        int n,a=0,b=0;
        scanf("%d\n",&n);
    char s[100],r[100];
    scanf("%s%s",s,r);
    for( i=0;i<n;i++)
    a+=s[i];
    for( i=0;i<n;i++)
    b+=r[i];
    if(a==b)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
	return 0;
}
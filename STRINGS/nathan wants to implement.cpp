#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    while(n--){
        int MAX=10;
        char a[MAX],b[MAX];
        scanf("%s",a);
        scanf("%s",b);
        int flag=0;
        for(i=0;i<strlen(a);i++){
            if(a[i]!=b[i]){
                if(a[i]=='?'||b[i]=='?') flag=flag;
                else
                flag=1;}
        }
        if(flag) printf("No\n");
        else printf("Yes\n");
    }
	return 0;
}
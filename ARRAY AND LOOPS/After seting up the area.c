#include <stdio.h>
int main()
{int x[100],y[100],u[100],v[100];
int n,k,i,j,ans=0;
scanf("%d %d",&n,&k);
for(i=0;i<k;++i){
    scanf("%d\n%d",&x[i],&y[i]);
    v[0]=x[i]-1+y[i]-1;
    v[1]=x[i]-1+n-y[i];
    v[2]=n-x[i]+y[i]-1;
    v[3]=2*n-x[i]-y[i];
    int min=v[0];
    for (j=0;j<4;j++){
        if (min>v[j]){
            min=v[j];}
        else{continue;}}
    u[i]=min;
    ans+=u[i];}
printf("%d",ans);
return 0;}

#include <stdio.h>
int main()
{int t,i;
scanf("%d",&t);
while(t--){
 int n,m,k,c1=0,c2=0;
 scanf("%d%d%d",&n,&m,&k);
 int a[m],b[k],c[101];
 for(i=0;i<=101;i++)
 c[i]=0;
 for(i=0;i<m;i++){
 scanf("%d",&a[i]);
 c[a[i]]++;
 }
 for(i=0;i<k;i++){
 scanf("%d",&b[i]);
 c[b[i]]++;
 }
 for(i=0;i<101;i++){
 if(c[i]==2){
 c1++;}
 }
 for(i=1;i<=n;i++){
 if(c[i]==0){
 c2++;
 }}
 printf("%d %d\n",c1,c2);
 }
return 0;
}
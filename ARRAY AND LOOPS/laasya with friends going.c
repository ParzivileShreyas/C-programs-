#include <stdio.h>
int main()
{
 int n;
int i,j,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
 if(i%2==0){
 k=2;
 }
 else{
 k=1;
 }
 for(j=1;j<=i;j++){
 printf("%d ",k);
 k +=2;
 }
 printf("\n");
}
return 0;}

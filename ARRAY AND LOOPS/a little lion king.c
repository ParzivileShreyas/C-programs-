#include <stdio.h>
int main(void)
{ int T,N,C; int a;
 scanf("%d",&T);
 while(T--){
 int i;
 scanf("%d %d",&N,&C);
 for(i=0;i<N;i++){
 scanf("%d",&a);
 C-=a; }
 
 if(C>=0)
 printf("Yes\n");
 else
 printf("No\n"); }
return 0;}

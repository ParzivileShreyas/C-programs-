#include <stdio.h>
#include <stdbool.h>
bool check(int arr[],int n,int m,long long mid)
{
 int days=0,i;
 long long temp=0;
 for(i=0;i<n;i++)
 {if(temp+arr[i]>mid){
 temp=0;
 days++;
 temp+=arr[i];}
 else{
 temp+=arr[i];}
 }
 return days<=m-1&&temp<=mid;
}
int main()
{
 int n,m,a,mintime=0;
 scanf("%d %d",&n,&m);
 int timetosolve[100005];
 for(a=0;a<n;a++){
 scanf("%d",&timetosolve[a]);
 if(timetosolve[a]>mintime){
 mintime=timetosolve[a];
 }
 }
 long long lo=mintime,hi=1e10,mid;
 while(hi-lo>1)
 {
 mid=(hi+lo)/2;
 if(check(timetosolve,n,m,mid))
{
 hi=mid;
}
else 
{
 lo=mid+1;
}}
lo=check(timetosolve,n,m,lo)?lo:hi;
printf("%lld\n",lo);
 
return 0;
}

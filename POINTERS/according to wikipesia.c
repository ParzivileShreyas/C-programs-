#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void sum();
int valid_digit(char *ip_str)
{
 while(*ip_str)
 {
 if(!isdigit(*ip_str))
 { return 0;}
 ip_str++;
 }
 return 1;
}
int is_valid_ip(char *ip_str)
{ int num,dots=0;
 char *ptr; if(ip_str==NULL) return 0; ptr = strtok(ip_str,"."); if(ptr == NULL)
return 0;
 while(ptr)
 {
 if(!valid_digit(ptr))
 {
 return 0;
 }
 num = atoi(ptr);
 if(num>=0 && num <= 255)
 {
 ptr = strtok(NULL,".");
 if(ptr!= NULL)
 {
 dots++;
 }
 }
 else return 0;}
 if(dots != 3)
 return 0;
 return 1;
}
int main()
{
sum();
return 0;
}
void sum(){
 int t;
 scanf("%d",&t);
 while(t--)
 {
 char ip[100];
 scanf("%s",ip);
 is_valid_ip(ip) ? puts("Valid") : puts("Not valid");
 }}
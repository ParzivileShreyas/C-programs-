#include <stdio.h>
#include <string.h>
int calculateLength(char* ch) {
 int i=0;
 
 i++;
 ch++;
 
 return i;
}
int main()
{
 char a[151];
 scanf("%s",a);
 int l=strlen(a);
 printf("%d",l);
return 0;
}
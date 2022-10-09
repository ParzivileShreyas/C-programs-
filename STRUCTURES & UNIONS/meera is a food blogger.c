#include <stdio.h>
struct video
{
char name[100];
int dish;
};

int main()
{
int i=0,total=0;
struct video clip;

for (i=0;i<7;i++)
{
scanf("%s %d",clip.name,&clip.dish);
total+=(clip.dish*3);
printf("%s : %d\n",clip.name,clip.dish*3);
}

printf("TOTAL : %d",total);
return 0;
}
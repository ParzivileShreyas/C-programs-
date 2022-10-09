#include <stdio.h>
union book

{

    char title[100];

    char writer[100];

    char genre[100];

};

int main()

{
union book b1;

scanf("%s\n",b1.title);
printf("Title:%s\n",b1.title);
scanf("%s\n",b1.writer);
printf("Writer:%s\n",b1.writer);
scanf("%s\n",b1.genre);
printf("Genre:%s",b1.genre);

               return 0;

}
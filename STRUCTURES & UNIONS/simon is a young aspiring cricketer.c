#include <stdio.h>
#include <math.h>
struct circleshape
{
int x1;
int x2;
int y1; int y2;int radius;};
int main()
{
    struct circleshape dis;
    scanf("%d %d %d %d %d",&dis.x1,&dis.y1,&dis.radius,&dis.x2,&dis.y2);
    int r1 = pow(dis.x2-dis.x1,2);
    int r2 = pow(dis.y2-dis.y1, 2);
    int res=r1 + r2;
    if(res <= dis.radius*dis.radius)
    printf("BALL LANDED INSIDE THE STADIUM");
    else printf("BALL IS OUT OF THE STADIUM");
	return 0;
}
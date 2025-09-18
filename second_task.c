#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, y1, y2, x, y;
    float e;
    printf("Adja meg X x kordinátá\n");
    scanf("%d", &x1);
    printf("Adja meg X y kordinátá\n");
    scanf("%d", &x2);
    printf("Adja meg Y x kordinátá\n");
    scanf("%d", &y1);
    printf("Adja meg Y y kordinátá\n");
    scanf("%d", &y2);
    x = x1-y1;
    y = x2-y2;
    e = sqrt(x*x+y*y);
    printf("A hossz %f", e);

    return 0;
}
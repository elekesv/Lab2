#include <stdio.h>
#include <math.h> //Why do we need this library?

int main()
{
    int a, b, c;
    float e1, e2;
    printf("ax2+bx+c=0\n");
    printf("please give a\n");
    scanf("%d", &a);
    printf("please give b\n");
    scanf("%d", &b);
    printf("please give c\n");
    scanf("%d", &c);
    if (b*b-4*c*a < 0){
        printf("Nincs megoldás");
    }
    if (b*b-4*c*a == 0){
        e1 = -1*b/(2*a);
        printf("A megoldas %f", e1);
    }
    if (b*b-4*c*a > 0)
    {
        e1 = (-1*b+sqrt(b*b-4*c*a))/(2*a);
        e2 = (-1*b-sqrt(b*b-4*c*a))/(2*a);
        printf("A megoldások: %f, %f", e1, e2);
    }
    
    



    return 0;
}
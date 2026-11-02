#include <stdio.h>
int main()
{
    int r;
    printf("Enter radius");
    scanf("%d",&r);

    int area = 3.14*r*r;
    printf("area of circle is %d",area);
    return 0;

}
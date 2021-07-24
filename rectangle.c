#include <stdio.h>

int main() {

    int area,peri,s;

    printf("\nEnter the side of square = ");
    scanf("%d",&s);

    area=s*s;
    peri=2*2*s;

    printf("\nArea = %d\nPerimeter = %d",area,peri);


    return 0;
}

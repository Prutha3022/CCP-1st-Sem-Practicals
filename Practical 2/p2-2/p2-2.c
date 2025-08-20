#include <stdio.h>
void main()
{
    x:
    int length, breadth, fc, gc, costperunitl;
    int area, perimeter;

    printf("Enter length for the park\n");
    scanf("%d", &length);

    printf("Enter breadth for the park\n");
    scanf("%d", &breadth);

    printf("Enter cost per square meter\n");
    scanf("%d", &costperunitl);
    area = length*breadth;
    printf("The area is: %d\n", area);
    perimeter = 2*(length+breadth);
    printf("The perimeter is: %d\n", perimeter);

    fc = perimeter*costperunitl;
    gc = area*costperunitl;
    printf("The total cost for fencing is : %d\n", fc);
    printf("The total cost for grasslaying is : %d\n", gc);
    printf("\n");
    goto x;
}

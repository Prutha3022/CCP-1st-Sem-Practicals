#include <stdio.h>
void main()
{
    int length = 70, breadth = 90, fc, gc, costperunitl;
    int area = length*breadth;
    int perimeter = 2*(length+breadth);

    printf("Enter cost per square meter\n");
    scanf("%d", &costperunitl);
    printf("The area is: %d\n", area);
    printf("The perimeter is: %d\n", perimeter);

    fc = perimeter*costperunitl;
    gc = area*costperunitl;
    printf("The total cost for fencing is : %d\n", fc);
    printf("The total cost for grasslaying is : %d\n", gc);
}

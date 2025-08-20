#include<stdio.h>
#include<limits.h>
#include<float.h>

void main ()
{
    printf("value of int data type in bytes is = %d\n", sizeof(int));
    printf("value of char data type in bytes is = %d\n", sizeof(char));
    printf("value of float data type in bytes is = %d\n", sizeof(float));
    printf("value of double data type in bytes is  = %d\n", sizeof(double));

    printf("range of int datatype is %d to %d\n", INT_MIN, INT_MAX);
    printf("range of char datatype is %d to %d\n", CHAR_MIN, CHAR_MAX);
    printf("range of float datatype is %g to %g\n", -FLT_MIN, FLT_MAX);
    printf("range of double datatype is %g to %g\n", -DBL_MIN, DBL_MAX);
}

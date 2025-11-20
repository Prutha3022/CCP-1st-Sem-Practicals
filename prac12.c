#include<stdio.h>
int main()
{
    printf("my id no is: 25CE121");
    int id,n=50;
    for(id=1; id<=n; id++)
    {
        printf("Book id : %d",id);
        if(id%5==0)
        {
            printf("(special edition)");
        }
        printf("\n");

    }
    return 0;
}

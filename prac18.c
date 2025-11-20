#include<stdio.h>

int main(){

int vert,hori,i,j;
printf("Enter the size of table verticaly: ");
scanf("%d",&vert);
printf("Enter the size of table horizontaly: ");
scanf("%d",&hori);
printf("Multiplication Table(%d x %d)\n",vert,hori);
for(i=0;i<vert;i++){
    for(j=0;j<hori;j++){
        printf("%5d",(i+1)*(j+1));
    }
    printf("\n");
}
return 0;
}



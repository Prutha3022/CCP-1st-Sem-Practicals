#include<stdio.h>
int main(){
int integers[25];
int i,positivecount=0,negativecount=0,oddcount=0,evencount=0;

for(i = 0;i < 25;i++) {
printf("Enter number %d :",i+1);
scanf("%d",&integers[i]);


if(integers[i]>0) {

    printf("%d is positive number.\n",integers[i]);
    positivecount++;

} else {

    printf("%d is negaitive number.\n",integers[i]);
    negativecount++;

}


if(integers[i]%2==1) {
    printf("%d is odd number.\n",integers[i]);
    oddcount++;

}else {
    printf("%d is even number.\n",integers[i]);
evencount++;
}
}
printf("===============Statistics===============\n");
printf("Total positive numbers %d.",positivecount);
printf("\nTotal negative numbers %d.",negativecount);
printf("\nTotal even numbers %d.",evencount);
printf("\nTotal odd numbers %d.",oddcount);


return 0;
}


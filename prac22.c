#include<stdio.h>



int main(){
int i ,j ,n;

printf("ENTER NO OF MEMBERS:");
scanf("%d", &n);

int a[n], b[n];

for(int k=0;k<n;k++){
printf("Enter the seat you want(row column) : sss");
scanf("%d %d", &a[k], &b[k]);

}

for(i=0;i<5;i++){

for(j=0;j<10;j++){
    int reserved=0;
    for(int k=0; k<n;k++){
    if(i == a[k]-1 && j == b[k]-1){
    reserved = 1;
    break;
        }
    }
    printf("%3c",reserved ? 'X':'O');


}
printf("\n");
}

return 0;
}


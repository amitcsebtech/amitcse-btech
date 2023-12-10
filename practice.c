#include<stdio.h>
int main(){
int n;
printf("enter a number ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        printf("*");
    }
   for(int k=1;k<=i;k++){
    printf(" ");
   }
    printf("\n");
}
return 0;
}
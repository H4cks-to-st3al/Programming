#include<stdio.h>

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            printf("*");
        }
        printf("\n");
    }
}
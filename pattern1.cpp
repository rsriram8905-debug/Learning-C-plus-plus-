/*
   *
  ***
 *****
*******
*/
#include<stdio.h>
int main(){
    int a,star=1;
    printf("Enter the numver of rows: ");
    scanf("%d",&a);
    for(int i=a; i>0; i--){                               //Number of rows
        for(int space=i-1; space >= 0; space--){          //space
            printf(" ");
        }
        for(int j=1; j<=star; j++){                       //star
            printf("*");
        }
        printf("\n");
        star+=2;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number of rows: ");
    scanf("%d",&a);
    for(int i=0; i<a; i++){                          //number of rows
        for(int j=0; j<i; j++){                      //spaces
            printf(" ");
        }
        for(int k = 1; k <=(2 * (a - i) - 1); k++){  //star
            printf("%d",k);
        }
        printf("\n");  
    }
    return 0;
}
#include <stdio.h>

int factorial(int n){
    if (n==1){
     return 1;   
    } 
    else{
         return n * factorial(n-1);
    }
}

int main(){
    int fact, num;
    printf("Ingresar n:");
    scanf("%d",&num);

    fact = factorial(num);
    printf("El factorial de %d es: %d", num, fact);
    printf("Imprimiendo una nueva línea\n");
}

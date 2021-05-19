#include <stdio.h>

int main(){
printf("Insira tres numeros: ");
float a, b, c;
scanf("%f %f %f", &a, &b, &c);

if (a>b && a>c){
    printf("O maior numero e: %.1f", a);
}
else if(b>a && b>c){
    printf("O maior numero e: %.1f", b);
}
else{
    printf("O maior numero e: %.1f", c);
}


    return 0;
}
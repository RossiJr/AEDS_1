#include <stdio.h>
#include <math.h>

int main(){
    int a=0, b=0, c=0;
    float delta=0, x1=0, x2=0;

// ax2 + bx + c = 0;

    printf("Insira os valores a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
// b2 - 4 .a c
    delta = ((pow(b, 2)) - (4 * a * c));
    delta = sqrt(delta);
// (-b +- delta) / 2 
int divisor = 2 * a;
    x1 = ((b * (-1)) - delta)/divisor;
    x2 = ((b * (-1)) + delta)/divisor;
    
    printf("X' -> %.1f", x1);
    printf("\nX'' -> %.1f", x2);
    return 0;
}
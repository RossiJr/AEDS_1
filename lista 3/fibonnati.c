#include <stdio.h>
#include <conio.h>

//F(n+2) = F(n+1) + F(n)

int main(){
    printf("Insira o valor de N: ");
    int n = 0, f, a=0, b=1; scanf("%d", &n);
    
    printf("Aperte qualquer botao para iniciar...");
    getch();
    for(int i=0; i<n; i++){
        f = a + b;
        a = b;
        b = f;
    printf("%d\n", f);

    }
    




    return 0;
}
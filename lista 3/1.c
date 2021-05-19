#include <math.h>
#include <stdio.h>

int main(void)
{
    
    char grupo; 
    int n1=0, n2=0, n3=0, n4=0; 

    for (int i=0; i<5; i++){
        printf("Indique qual o grupo: "); 
        scanf("%c", &grupo); 

        printf("Agora, insira os numeros: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        printf("Ordem normal do %c = %d %d %d %d\n", grupo, n1, n2, n3, n4);

        for (int j=-9999999; j<9999999; j++) 
        {
            if (j == n1 || j == n2 || j == n3 || j == n4) //crescente
            {
                printf("%d, ", j);
            }
        
        }
        
        
        for (int e = 9999999; e > -9999999; e--) //decrescente
        {
            if (e == n1 || e == n2 || e == n3 || e == n4)
            {
                printf("%d, ", e);
            }
        
        }   


    }
    return 0;
}
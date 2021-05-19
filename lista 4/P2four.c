#include <stdio.h>
double fatorial(int denominador);

int main() {
int denominador = 0, numerador=100;
double resultado, soma=0.0;


for(int i=0;i<20;i++, denominador++, numerador--){
resultado = fatorial(denominador);
soma += (double)numerador/resultado;
printf("%f\n", soma);

}
return 0;

}

double fatorial(int denominador ){
    
    
     double resultado = 1;
    
     if(denominador == 1 || denominador == 0 ){
           return 1;     
     }
    else{
        
         for(int i = 1; i <=  denominador ; i++  ){
             
             resultado = resultado * (double)i;
         }
        
        
    }
    
    
    return  resultado;
}  
 
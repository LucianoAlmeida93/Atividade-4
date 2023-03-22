
#include <stdio.h>

int main()
{
       float matrix[4][4];
       
       int i, j, cont;
       float somanumpar, somanumimpar;
       float media;
       somanumimpar = 0;
       somanumpar = 0;
       cont = 0;
       for(i=0; i<4; i++){
           for(j=0; j<4; j++){
               printf("\nDigite um número inteiro aleatório:");
               scanf("%f", &matrix[i][j]);
           }
       }
       for(i=0; i<4; i++){
           for(j=0; j<4; j++){
               if(j % 2 == 0){
                   somanumpar = somanumpar + matrix[i][j];
                   cont = cont + 1;
               }
               else{
                   somanumimpar = somanumimpar + matrix[i][j];
               }
           }
       }

               media = somanumimpar/cont;
               
               printf("\nA soma dos valor das colunas impares é %2.f", somanumimpar);
               printf("\nA média dos valores das colunas pares é %2.f", media);
}

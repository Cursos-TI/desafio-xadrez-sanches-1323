#include <stdio.h>

int main(){

    int bispo , rainha , torre ;
   


        printf("--Torre--\n");
        while(torre <= 4) //codigo para o movimento da torre 
            {
                printf("esquerda\n");
                torre++;
            }
        printf("A Torre moveu-se 5 casa para direita..\n");
        printf("finalizando movimento da torre....\n");

        printf("--Bispo--\n");
        do              //codigo para o movimento da bispo 
        {   
            if (bispo % 2 != 0 )
            {
               printf("Cima\n");
               printf("Direita\n");
            }
            
            bispo++;
        } while (bispo <= 10);
        printf("A Bispo moveu-se 5 casa na diagoal..\n");
        printf("finalizando movimento do Bispo ....\n");
          
        printf("--Rainha--\n");
        for (rainha = 0 ; rainha <= 7 ; rainha++)
        {
            printf("esquerda\n");
        }       
        printf("A Rainha moveu-se 8 casa para esquerda..\n");
        printf("finalizando movimento da rainha....\n");
        

    return 0;
}   
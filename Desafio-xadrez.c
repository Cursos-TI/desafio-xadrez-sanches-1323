#include <stdio.h>

int main(){

    int bispo = 1 ;
    int  rainha , torre, cavalo;
   


        printf("--Torre--\n");
        while(torre <= 4) //codigo para o movimento da torre 
            {
                printf("direita\n");
                torre++;
            }
        printf("A Torre moveu-se 5 casa para direita..\n");
        printf("finalizando movimento da torre....\n");  
            printf("\n");




        printf("--Bispo--\n");
        do              //codigo para o movimento da bispo 
        {   
            if (bispo % 2 != 0 );
            {
               printf("Cima\n");
               printf("Direita\n");
            }
            
            bispo++;
        } while (bispo <= 5);
        printf("O Bispo moveu-se 5 casa na diagoal..\n");
        printf("finalizando movimento do Bispo ....\n");
            printf("\n");
            



        printf("--Rainha--\n");
        for(rainha = 0;rainha <= 7;rainha++)
        {
            printf("esquerda\n");
        }       
        printf("A Rainha moveu-se 8 casa para esquerda..\n");
        printf("finalizando movimento da rainha....\n");
        printf("\n");
    

        printf("--cavalo--\n");
        while (cavalo <= 1)
        { 

            for (cavalo = 1; cavalo <= 2; cavalo++)
            {
                printf("cima\n");
            }
                printf("esquerda\n");  
          cavalo++;  
        }
        printf("O cavalo moveu-se duas casa para cima e uma casa para esquerda...\n");
        printf("finalizando movimento do cavalo....\n");
    

        
    return 0;
}   
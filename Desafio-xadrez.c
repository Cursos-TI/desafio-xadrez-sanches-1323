#include <stdio.h>

void movertorre(int n){  //movimento da torre
    if (n > 0)
    {
        printf("direita\n"); 
        movertorre( n - 1);
    }
}
 
void moverbispo(int n){   //movimento do bispo
    if (n > 0)
    {
       printf("cima\n");
    }
    
}

void moverrainha(int n){   //movimento da rainha
    if (n > 0)
    {
        printf("esquerda\n"); 
        moverrainha( n - 1);
    }
}

int main()
{

    int bispo,cavalo,rainha = 8 ;
    

    printf("--Torre--\n");

        movertorre(5);
   
    printf("A Torre moveu-se 5 casa para direita..\n");
    printf("finalizando movimento da torre....\n");
    printf("\n");



    printf("--Bispo--\n");
    
         for (bispo = 5; bispo > 0; bispo--)
        {
            moverbispo(5);          //recursividade-loop 
            printf("direita\n");        
    
        }     

    printf("O Bispo moveu-se 5 casa na diagoal..\n");
    printf("finalizando movimento do Bispo ....\n");
    printf("\n");



    printf("--Rainha--\n");
        
        moverrainha(rainha);

    printf("A Rainha moveu-se 8 casa para esquerda..\n");
    printf("finalizando movimento da rainha....\n");
    printf("\n");



    printf("--cavalo--\n");
      
        for(int m1 = 0, m2 = 2;
             m1 < m2;           //loop com multipla variavel
             m2--){

            printf("cima\n");
                 
    } 
            printf("direita\n");

    printf("O cavalo moveu-se 2 casa para cima e 1 casa para direita...\n");
    printf("finalizando movimento do cavalo....\n");



    return 0;
}
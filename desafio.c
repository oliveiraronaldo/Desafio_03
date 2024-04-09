#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));

    int n = 4;
    int numero;
    int chance_de_recurso;      //porcentagem de chance de sair um recurso
    int recurso_coletado = 0;   

    printf("Numero de linhas e colunas: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            chance_de_recurso = 1 +  rand() % 10;   //define a porcentagem de chance de aparecer um recurso
            numero = 1 + rand() % 9;

            if (chance_de_recurso < 4){     //porcentagem de chance de aparecer um recurso é de 30%
                printf("%d ", numero);
                recurso_coletado += numero;
            }else{
                printf(". ");
            }
            
        }
        printf("\n");
    }

    if(recurso_coletado == 0){
        printf("Nenhum recurso encontrado.");
    }else{
        printf("Quantidade total de recursos coletados pelo robo: %d", recurso_coletado);
    }

    return 0;
}

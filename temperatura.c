#include <stdio.h>
int main(){
    int temperatura[10];
    int limiteSuperior, limiteInferior;
    int quantidade = 0;
    for(int i = 0; i < 10; i++){
        printf("Digite a temperatura em °C: ");
        scanf("%d", &temperatura[i]);

    }

    printf("Digite o limite inferior da faixa:");
    scanf("%d", &limiteInferior);

    printf("Digite o limite superior da faixa:");
    scanf("%d", &limiteSuperior);

    for(int i = 0; i < 10; i++){
    if(temperatura[i]>= limiteInferior && temperatura[i] <= limiteSuperior){
    printf("%d", temperatura[i]);
    quantidade++;
    }
    
   }
    printf("\nQuantidade de medições dentro da faixa: %d\n", quantidade);


}

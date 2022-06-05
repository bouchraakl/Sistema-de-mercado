
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a função printf() mostre na tela os caracteres da Língua Portuguesa

int main()
{
    //Faz referência à todos os aspectos da localização
    setlocale(LC_ALL,"");

    //Declaraçao de variáveis
    int codigo;

    printf("========== Sistema De Classificação de Produtos ============");

    // Entrada de dados do usuário
    printf("\nInsira o código do produto desejado :");
    scanf("%d", &codigo);

    if (codigo == 1 ){
        printf("Alimento não perecivel ");// será executada se a expressão é verdadeira
    }else {
        if (codigo>1 && codigo<5){
            printf("Alimento perecivel");// será executada se a expressão é verdadeira
        }else{
            if (codigo >4 && codigo<7){
                printf("Vestuário");// será executada se a expressão é verdadeira
            }else {
                if (codigo == 7){
                    printf("Higiene pessoal");// será executada se a expressão é verdadeira
                }else {
                    if (codigo>7 && codigo<11){
                        printf("Utensilio doméstico");// será executada se a expressão é verdadeira
                    }
                    else {
                        printf("Inválido");// executa quando o nenhum das condições acima é verdade
                    }
                }
            }
        }


    }


    return 0;
}

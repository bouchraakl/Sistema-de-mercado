
//As bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>//faz com que a fun��o printf() mostre na tela os caracteres da L�ngua Portuguesa

int main()
{
    //Faz refer�ncia � todos os aspectos da localiza��o
    setlocale(LC_ALL,"");

    //Declara�ao de vari�veis
    int codigo;

    printf("========== Sistema De Classifica��o de Produtos ============");

    // Entrada de dados do usu�rio
    printf("\nInsira o c�digo do produto desejado :");
    scanf("%d", &codigo);

    if (codigo == 1 ){
        printf("Alimento n�o perecivel ");// ser� executada se a express�o � verdadeira
    }else {
        if (codigo>1 && codigo<5){
            printf("Alimento perecivel");// ser� executada se a express�o � verdadeira
        }else{
            if (codigo >4 && codigo<7){
                printf("Vestu�rio");// ser� executada se a express�o � verdadeira
            }else {
                if (codigo == 7){
                    printf("Higiene pessoal");// ser� executada se a express�o � verdadeira
                }else {
                    if (codigo>7 && codigo<11){
                        printf("Utensilio dom�stico");// ser� executada se a express�o � verdadeira
                    }
                    else {
                        printf("Inv�lido");// executa quando o nenhum das condi��es acima � verdade
                    }
                }
            }
        }


    }


    return 0;
}

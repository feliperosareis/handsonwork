#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao, num;
	
	// Menu a ser exibido para o usu�rio.
	printf("\nCALCULADORA CONVERSORA DE BASES\n\n");
    printf("DIGITE A OPERACAO DESEJADA:\n\n");
    printf("[ 1 ] DECIMAL  	  ->  HEXADECIAL\n");
	printf("[ 2 ] HEXADECIAL  ->  DECIMAL\n");
    printf("[ 0 ] SAIR\n");
	
	// Este comando l� a op��o digitado pelo usu�rio.
	scanf("%d", &opcao);
	
	// Estrutura condicional.
	if (opcao == 1)
	{
		// Solicita que o usu�rio digite um n�mero decimal.
		printf("Digite um numero em DECIMAL para converte-lo em HEXADECIMAL: ");
		// L� o n�mero decimal digitado pelo usu�io.
		scanf("%d", &num);
		// Imprime o n�mero convertido para hexadecimal.
		printf("O numero %d em hexadecimal eh: %x", num, num);	// A instru��o %x converte o n�mero decimal para hexadecimal.
	}
	else if (opcao == 2)
	{
		// Solicita que o usu�rio digite um n�mero hexadecimal.
		printf("Digite um numero em HEXADECIMAL para converte-lo em DECIMAL: ");
		// L� o n�mero hexadecimal digitado pelo usu�io.
		scanf("%x", &num);
		// Imprime o n�mero convertido para decimal.
		printf("O numero %x em decimal eh: %d", num, num);	// A instru��o %x converte o n�mero decimal para decimal.
	}
	else
	{
		printf("Opcao invalida!");
		exit(0);	// Finaliza o programa.
	}
	
	return 0;
}



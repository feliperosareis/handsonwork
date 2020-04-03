#include <stdio.h>
#include <stdlib.h>

int main()
{
	int opcao, num;
	
	// Menu a ser exibido para o usuário.
	printf("\nCALCULADORA CONVERSORA DE BASES\n\n");
    printf("DIGITE A OPERACAO DESEJADA:\n\n");
    printf("[ 1 ] DECIMAL  	  ->  HEXADECIAL\n");
	printf("[ 2 ] HEXADECIAL  ->  DECIMAL\n");
    printf("[ 0 ] SAIR\n");
	
	// Este comando lê a opção digitado pelo usuário.
	scanf("%d", &opcao);
	
	// Estrutura condicional.
	if (opcao == 1)
	{
		// Solicita que o usuário digite um número decimal.
		printf("Digite um numero em DECIMAL para converte-lo em HEXADECIMAL: ");
		// Lê o número decimal digitado pelo usuáio.
		scanf("%d", &num);
		// Imprime o número convertido para hexadecimal.
		printf("O numero %d em hexadecimal eh: %x", num, num);	// A instrução %x converte o número decimal para hexadecimal.
	}
	else if (opcao == 2)
	{
		// Solicita que o usuário digite um número hexadecimal.
		printf("Digite um numero em HEXADECIMAL para converte-lo em DECIMAL: ");
		// Lê o número hexadecimal digitado pelo usuáio.
		scanf("%x", &num);
		// Imprime o número convertido para decimal.
		printf("O numero %x em decimal eh: %d", num, num);	// A instrução %x converte o número decimal para decimal.
	}
	else
	{
		printf("Opcao invalida!");
		exit(0);	// Finaliza o programa.
	}
	
	return 0;
}



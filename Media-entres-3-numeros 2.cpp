#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ALUNOS: Izabelly Azevedo Lima - Matr�cula 2019201251
		 Gabriel dos SN Martis - Matr�cula 2019200071
		 Raquel Vieira Cardoso - Matr�cula 2019200854

ATIVIDADE I  - QUEST�O 2

*/

main(){

	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3,soma;
	float media;

		printf("Digite o primeiro n�mero:");
			scanf("%d",&num1);

		printf("Digite o segundo n�mero:");
			scanf("%d",&num2);

		printf("Digite o terceiro n�mero:");
			scanf("%d",&num3);

	soma = ( num1 + num2 + num3 );
	media = ( soma / 3 );

	printf("Os respectivos n�meros informados s�o %d,%d,%d \n", num1, num2, num3);
	printf("A soma dos n�meros informados � %d \n", soma);
	printf("A m�dia dos n�meros informados � %d \n", media);



}

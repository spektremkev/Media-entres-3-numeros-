#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*ALUNOS: Izabelly Azevedo Lima - Matrícula 2019201251
		 Gabriel dos SN Martis - Matrícula 2019200071
		 Raquel Vieira Cardoso - Matrícula 2019200854

ATIVIDADE I  - QUESTÃO 2

*/

main(){

	setlocale(LC_ALL,"Portuguese");
	int num1, num2, num3,soma;
	float media;

		printf("Digite o primeiro número:");
			scanf("%d",&num1);

		printf("Digite o segundo número:");
			scanf("%d",&num2);

		printf("Digite o terceiro número:");
			scanf("%d",&num3);

	soma = ( num1 + num2 + num3 );
	media = ( soma / 3 );

	printf("Os respectivos números informados são %d,%d,%d \n", num1, num2, num3);
	printf("A soma dos números informados é %d \n", soma);
	printf("A média dos números informados é %d \n", media);



}

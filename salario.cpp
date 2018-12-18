#include <conio.h>
#include <stdio.h>
main()
{
	float sal_bto, inss, sal_liq;
	char nome[30];
	
	printf("Digite o nome do funcionario: ");
	scanf("%s",nome);
	printf("Digite o salario bruto do funcionario: ");
	scanf("%f",&sal_bto);
	inss = (sal_bto / 100) * 9;
	sal_liq = sal_bto - inss;
	
	printf("Nome: %s",nome);
	printf("\nSalario bruto: %f",sal_bto);
	printf("\nINSS: %f",inss);
	printf("\nSalario liquido: %f",sal_liq); 
	getch();
}

// Exercício 1 
/*
#include <stdio.h>

int main()
{
    int a=5, b=13, aux;
    
    aux = a;
    a = b;
    b = aux;
    
    printf("O swap ficou B: %i", b);
    printf("\nO swap ficou A: %i", a);

    return 0;
}
*/

// Exercício 2
/*
#include <stdio.h>

int main()
{
    int segundos, minutos, horas;
    

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);
    
    minutos = segundos / 60;
    horas = minutos / 60;
    
    printf("\nA quantidade de segundos digitas: %i", segundos);
    printf("\nA quantidade de minutos convertidos de segundos: %i", minutos);
    printf("\nA quantidade de horas convertidos de segundos: %i", horas);
    

    return 0;
}
*/

// Exercício 3
/*
#include <stdio.h>

int main()
{
    double salario_inicial, porcentagem, salario_ajustado;

    printf("Digite o seu salário atual: R$ ");
    scanf("%lf", &salario_inicial);
    
    printf("Digite o percentual de aumento do seu salário: ");
    scanf("%lf", &porcentagem);
    
    salario_ajustado = salario_inicial * (1 + porcentagem / 100);
    
    printf("\nO salário corrigido com a porcentagem informada é igual a : R$ %.2lf", salario_ajustado);

    return 0;
}
*/

// Exercício 4
#include <stdio.h>

int main()
{
    double peso, altura, imc;
    
    printf("Digite o peso em KG: ");
    scanf("%lf", &peso);
    
    printf("Digite a altura em metros: ");
    scanf("%lf", &altura);
    
    imc = peso / (altura * altura);
    
    printf("\nO IMC de acordo com o peso e altura informada é igual a: %.2lf", imc);

    return 0;
}
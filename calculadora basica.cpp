#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

#define MAX_HISTORICO 100

char historico[MAX_HISTORICO][100];
int historico_index = 0;

void adicionar_historico(const char *operacao)
{
    if (historico_index < MAX_HISTORICO)
    {
        strcpy(historico[historico_index], operacao);
        historico_index ++;
    }
    else
    {
      printf("Hist�rico cheio! N�o � poss�vel adicionar mais opera��es.\n");
    }
}

void exibir_historico()
{
    printf("\n=== Hist�rico de Opera��es ===\n");
    for (int i = 0; i < historico_index; i++)
    {
        printf("%d. %s\n", i + 1, historico[i]);
    }
    printf("==============================\n");
}

int somar(int num1, int num2)
{
    int resultado = num1 + num2;
    printf("O resultado � %d\n", resultado);
    return resultado;
}

int subtrair(int num1, int num2)
{
    int resultado = num1 - num2;
    printf("O resultado � %d\n", resultado);
    return resultado;
}

int multiplicar(int num1, int num2)
{
    int resultado = num1 * num2;
    printf("O resultado � %d\n", resultado);
    return resultado;
}

int dividir(float num1, float num2)
{
  if (num2 == 0)
  {
    printf("Erro: Divis�o por zero!\n");
    return 0;
  }
    float resultado = num1 / num2;
    printf("O resultado � %.2f\n", resultado);
    return resultado;
}
double potencia(double base, double expoente)
{
    double resultado = pow(base, expoente);
    printf("O resultado � %.2f\n", resultado);
    return resultado;
}
double raiz_quadrada(double num)
{
    if (num < 0)
    {
        printf("Erro: N�o � poss�vel calcular a raiz quadrada de um n�mero negativo!\n");
        return 0;
    }
    double resultado = sqrt(num);
    printf("O resultado � %.2f\n", resultado);
    return resultado;
}

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int escolha;
  double n1, n2;
  

  printf("===================================================== \n");
  printf("	Apresenta��o de Projeto em C - Calculadora B�sica \n");
  printf("===================================================== \n");
  printf("Projeto: Calculadora B�sica em Linguagem C \n");
  printf("Aluno: Lucas Cavalcante de Alencar \n");
  printf("Turma: engs2402842\n");
  printf("Disciplina: L�gica e estrutura de dados \n");
  printf("Professor: Raimundo \n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("================================\n");
  printf("    Calculadora B�sica em C \n");
  printf("================================\n");

  while (1)
  {

    printf("Selecione a opera��o:\n");
    printf("1. Soma\n");
    printf("2. Subtra��o\n");
    printf("3. Multiplica��o\n");
    printf("4. Divis�o\n");
    printf("5. Pot�ncia\n");
    printf("6. Raiz Quadrada\n");
    printf("7. Hist�rico\n");
    printf("8. Sair\n");
    printf("Op��o: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Digite o primeiro n�mero pra somar: ");
        scanf("%lf", &n1);
        printf("Digite o segundo n�mero pra somar: ");
        scanf("%lf", &n2);
        adicionar_historico("Soma");
        somar(n1, n2);
        break;

    case 2:
        printf("Digite o primeiro n�mero pra subtrair: ");
        scanf("%lf", &n1);
        printf("Digite o segundo n�mero pra subtrair: ");
        scanf("%lf", &n2);
        adicionar_historico("Subtra��o");
        subtrair(n1, n2);
        break;

    case 3:
        printf("Digite o primeiro n�mero pra multiplicar: ");
        scanf("%lf", &n1);
        printf("Digite o segundo n�mero pra multiplicar: ");
        scanf("%lf", &n2);
        adicionar_historico("Multiplica��o");
        multiplicar(n1, n2);
        break;

    case 4:
        printf("Digite o primeiro n�mero pra dividir: ");
        scanf("%lf", &n1);
        printf("Digite o segundo n�mero pra dividir: ");
        scanf("%lf", &n2);
        adicionar_historico("Divis�o");
        dividir(n1, n2);
        break;

    case 5:
        printf("Digite a base: ");
        scanf("%lf", &n1);
        printf("Digite o expoente: ");
        scanf("%lf", &n2);
        adicionar_historico("Pot�ncia");
        potencia(n1, n2);
        break;
    
    case 6:
        printf("Digite o n�mero: ");
        scanf("%lf", &n1);
        adicionar_historico("Raiz Quadrada");
        raiz_quadrada(n1);
        break;

    case 7:
        exibir_historico();
        break;
    case 8:
        printf("Saindo do programa...\n");
        return 0;
    
    default:
      printf("op��o invalida\n");
    }
  }

  return 0;
}
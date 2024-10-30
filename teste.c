#include "FuncoesBasicas.h"
#include <locale.h>
typedef int Vetor[2];
typedef int Ponto[2];

void SomaVetor(Vetor Vetor1, Vetor Vetor2, Vetor Resultado) 
{
  Resultado[0] = Vetor1[0] + Vetor2[0];
  Resultado[1] = Vetor1[1] + Vetor2[1];
}

void SubtraiPonto(Ponto Ponto1, Ponto Ponto2)
{

}

void Questao1()
{
  printf("Questão 1:\n\n");
  Vetor V = {2,-5};
  Ponto A = {-1, 3};
  Ponto B;
  ImprimeVetor(V, 'V');
  ImprimeVetor(A, 'A');
  printf("B = V + A\n");
  SomaVetor(V,A,B);
  ImprimeVetor(B, 'B');
  printf("\n\n");
}

int main()
{
  setlocale(LC_ALL, "");
  Questao1();

  return 0;
}
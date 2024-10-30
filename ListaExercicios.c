#include <stdio.h>
#include <stdlib.h>

typedef int Vetor[2];
typedef int Ponto[2];

void ImprimeVetor(Vetor Vetor1) 
{
  printf("(%i, %i)\n", Vetor1[0], Vetor1[1]);
}

void MultPorReal(int k, Vetor Vetor1, Vetor Resultado)
{
  Resultado[0] = k * Vetor1[0];
  Resultado[1] = k * Vetor1[1];
}

void SomaVetor(Vetor Vetor1, Vetor Vetor2, Vetor Resultado) 
{
  Resultado[0] = Vetor1[0] + Vetor2[0];
  Resultado[1] = Vetor1[1] + Vetor2[1];
}

void SubtraiVetor(Vetor Vetor1, Vetor Vetor2, Vetor Resultado) 
{
  Resultado[0] = Vetor1[0] - Vetor2[0];
  Resultado[1] = Vetor1[1] - Vetor2[1];
}

void CopiaVetor(Vetor Vetor1, Vetor Vetor2)
{
  Vetor1[0] = Vetor2[0];
  Vetor1[1] = Vetor2[1];
}

void Questao1()
{
  printf("Questao 1:\n\n");
  Vetor V = {2,-5};
  Vetor A = {-1, 3};
  Vetor B;
  printf("V = ");
  ImprimeVetor(V);

  printf("A = ");
  ImprimeVetor(A);

  printf("B = V + A\n");
  SomaVetor(V,A,B);

  printf("B = ");
  ImprimeVetor(B);

  printf("\n\n");
}

void Questao3()
{
  printf("Questao 3:\n\n");
  Vetor A = {-1,3};
  Vetor B = {2,5};
  Vetor C = {3,-1};
  Vetor OA;
  Vetor AB;
  Vetor OC;
  Vetor BC;
  Vetor BA;
  Vetor CB;

  printf("OA = A - 0\n");
  printf("OA = A\n");
  CopiaVetor(OA, A);
  printf("OA = ");
  ImprimeVetor(OA);
  printf("\n");

  printf("AB = B - A\n");
  SubtraiVetor(B,A,AB);
  printf("AB = ");
  ImprimeVetor(AB);
  printf("\n");

  
  printf("OC = C - 0\n");
  printf("OC = C\n");
  CopiaVetor(OC, C);
  printf("OC = ");
  ImprimeVetor(OC);
  printf("\n");


  printf("BC = C - B\n");
  SubtraiVetor(C,B,BC);
  printf("BC = ");
  ImprimeVetor(BC);
  printf("\n");


  printf("BA = A - B\n");
  SubtraiVetor(A,B,BA);
  printf("BA = ");
  ImprimeVetor(BA);
  printf("\n");


  printf("CB = B - C\n");
  SubtraiVetor(B,C,CB);
  printf("CB = ");
  ImprimeVetor(CB);
  printf("\n");

  Vetor OAAB;
  SubtraiVetor(OA,AB,OAAB);
  printf("OA - AB = ");
  ImprimeVetor(OAAB);
  printf("\n");


  Vetor OCBC;
  SubtraiVetor(OC,BC,OCBC);
  printf("OC - BC = ");
  ImprimeVetor(OCBC);
  printf("\n");

  Vetor BA3;
  MultPorReal(3,BA,BA3);
  Vetor CB4;
  MultPorReal(4,CB,CB4);
  Vetor BA3MCB4;
  SubtraiVetor(BA3,CB4,BA3MCB4);
  printf("3BA - 4CB = ");
  ImprimeVetor(BA3MCB4);
}

void Questao5()
{
  Vetor U = {3,-4};
  Vetor V = {-5,1};
  Vetor W = {-12,6};
  int K1;
  int K2;
  //W = K1U + K2V
  //(W[0], W[1]) = (U[0]K1, U[1]K1) + (V[0]K2, V[1]K2)
  //(W[0], W[1]) = (U[0]K1 + V[0]K2, U[1]K1 + V[1]K2)

  //U[0]K1 + V[0]K2 = W[0]
  //U[1]K1 + V[1]K2 = W[0]

  //regra de cramer
  

}

int main()
{
  system("cls");
  Questao1();
  Questao3();
  Questao5();

  return 0;
}
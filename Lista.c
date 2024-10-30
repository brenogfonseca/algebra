#include <stdio.h>

void SomaVetores(int Vetor1[2], int Vetor2[2], int Resultado[2])
{
  Resultado[0] = Vetor1[0] + Vetor2[0];
  Resultado[1] = Vetor1[1] + Vetor2[1];
}

void MultEscalar(int Vetor1[2], int Escalar, int Resultado[2])
{
  Resultado[0] = Vetor1[0] * Escalar;
  Resultado[1] = Vetor1[1] * Escalar;
}

void SubtraiVetores(int Vetor1[2], int Vetor2[2], int Resultado[2])
{
  Resultado[0] = Vetor1[0] - Vetor2[0];
  Resultado[1] = Vetor1[1] - Vetor2[1];
}

void CopiaVetor(int Vetor1[2], int Vetor2[2])
{
  Vetor1[0] = Vetor2[0];
  Vetor1[1] = Vetor2[1];
}

void Questao1()
{
  int VetorV[2] = {2, -5};
  int PontoA[2] = {-1, 3};
  int PontoB[2];
  //V = B - A
  //B = V + A
  SomaVetores(VetorV, PontoA, PontoB);
  printf("Questao 1\n");
  printf("(%i, %i)\n\n\n", PontoB[0], PontoB[1]);
}

void Questao3()
{
  printf("Questao 3: \n");
  int PontoA[2] = {-1, 3};
  int PontoB[2] = {2, 5};
  int PontoC[2] = {3, -1};
  int VetorOA[2];
  int VetorAB[2];
  int VetorOAMenosVetorAB[2];
  int VetorOC[2];
  int VetorBC[2];
  int VetorOCMenosVetorBC[2];
  int VetorBA[2];
  int Vetor3BA[2];
  int VetorCB[2];
  int Vetor4CB[2];
  int Vetor3BAMenosVetor4CB[2];

  CopiaVetor(VetorOA, PontoA);
  printf("Vetor OA = (%i, %i)\n", VetorOA[0], VetorOA[1]);

  SubtraiVetores(PontoB, PontoA, VetorAB);
  printf("Vetor AB = (%i, %i)\n", VetorAB[0], VetorAB[1]);

  SubtraiVetores(VetorOA, VetorAB, VetorOAMenosVetorAB);
  printf("Vetor OA - AB = (%i, %i)\n", VetorOAMenosVetorAB[0], VetorOAMenosVetorAB[1]);

  CopiaVetor(VetorOC, PontoC);
  printf("Vetor OC = (%i, %i)\n", VetorOC[0], VetorOC[1]);

  SubtraiVetores(PontoC, PontoB, VetorBC);
  printf("Vetor BC = (%i, %i)\n", VetorBC[0], VetorBC[1]);

  SubtraiVetores(VetorOC, VetorBC, VetorOCMenosVetorBC);
  printf("Vetor OC - BC = (%i, %i)\n", VetorOCMenosVetorBC[0], VetorOCMenosVetorBC[1]);

  SubtraiVetores(PontoA, PontoB, VetorBA);
  printf("Vetor BA = (%i, %i)\n", VetorBA[0], VetorBA[1]);

  MultEscalar(VetorBA, 3, Vetor3BA);
  printf("Vetor 3BA = (%i, %i)\n", Vetor3BA[0], Vetor3BA[1]);

  SubtraiVetores(PontoB, PontoC, VetorCB);
  printf("Vetor CB = (%i, %i)\n", VetorCB[0], VetorCB[1]);

  MultEscalar(VetorCB, 4, Vetor4CB);
  printf("Vetor 4CB = (%i, %i)\n", Vetor4CB[0], Vetor4CB[1]);

  SubtraiVetores(Vetor3BA, Vetor4CB, Vetor3BAMenosVetor4CB);
  printf("Vetor 3BA - 4CB = (%i, %i)\n", Vetor3BAMenosVetor4CB[0], Vetor3BAMenosVetor4CB[1]);


  //3 * (1,2) = 


  //OA   AB
  //OA - AB


  //Vetor OA
  // OA = A
}

int main() 
{
  Questao1();
  Questao3();
  return 0;
}
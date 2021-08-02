#include <stdio.h>


typedef struct nave{
  int armadura;
  int escudo;
  int canhao;
  int missil;
}ship;

ship operacoes(ship alterada){

char arma;
int municao=1;
scanf(" %c", &arma);
if (arma == 'M'){
  if (alterada.missil>0){
    alterada.armadura =alterada.armadura -20;
    alterada.missil =alterada.missil -1;
  }
  else {
    printf("Míssil sem munição\n");
  }
}
if (arma == 'C'){
  if (alterada.canhao >0){
    if (alterada.escudo > 0){
      alterada.escudo = alterada.escudo - 10;
      alterada.canhao = alterada.canhao -1;
    }
    if (alterada.escudo ==0){
      alterada.armadura = alterada.armadura -10;
    }
    
  }
  else {
    printf("Canhão sem munição!\n");}
}
  

  return alterada;
}



int main () {

  ship E;
  ship K;
  char nave;
  int N;

scanf("%d", &N);

scanf("%d %d %d %d", &E.armadura,&E.escudo, &E.canhao, &E.missil);

scanf("%d %d %d %d", &K.armadura,&K.escudo, &K.canhao, &K.missil);

for (int i=0; i<N; i++)
{
  scanf(" %c", &nave);
  if( nave == 'E'){
    E = operacoes(E);
    if (E.armadura == 0){
      printf("Klingons vencem!\n");
      break;
    }
  }
  if( nave == 'K'){
    K = operacoes(K);
    if (K.armadura ==0){
      printf("Enterprise vence!\n");
      break;
    }
  }

}
if (K.armadura >0 && E.armadura >0)
printf("Empate!\n");


  return 0;
}
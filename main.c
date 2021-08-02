#include <stdio.h>


typedef struct nave{
  int armadura;
  int escudo;
  int canhao;
  int missil;
}ship;

ship atirador(ship atirador, char acao){

if (acao == 'M'){
  if (atirador.missil >0){
  atirador.missil = atirador.missil -1;
  }
  else (printf("Míssil sem munição!\n"));
}
if (acao == 'C'){
  if (atirador.canhao >0){
  atirador.canhao = atirador.canhao -1;
  }
  else (printf("Canhão sem munição!\n"));
}
  return  atirador;
}

ship alvo(ship alvo, char acao){

if (acao == 'M'){
 alvo.armadura = alvo.armadura -20;
}
if (acao == 'C'){
  if (alvo.escudo > 0){
    alvo.escudo =alvo.escudo - 10;
  }

  else {alvo.armadura = alvo.armadura -10;}
}


  return alvo;
}



int main () {

  ship E;
  ship K;
  char acao;
  char nave;
  int N;

scanf("%d", &N);

scanf("%d %d %d %d", &E.armadura,&E.escudo, &E.canhao, &E.missil);

scanf("%d %d %d %d", &K.armadura,&K.escudo, &K.canhao, &K.missil);

for (int i=0; i<N; i++)
{

 scanf(" %c", &nave);
 scanf(" %c", &acao);


 if (nave == 'E'){
   E = atirador(E, acao);
   K = alvo (K, acao);
   if (K.armadura == 0){
     printf("Enterprise vence!\n");
     break;
   }
 }


 if (nave == 'K'){
    K = atirador (K, acao);
    E = alvo (E, acao);
    if (E.armadura == 0){
      printf("Klingons vencem!\n");
      break;
    }
 }

}


if (K.armadura >0 && E.armadura >0)
printf("Empate!\n");


  return 0;
}
#include "stdio.h"
#include "math.h"

int kareAlan(int girdi,int girdi2);
int kareCevre(int girdi,int girdi2);
int ucgenAlan(int girdi,int girdi2);
int ucgenCevre(int girdi,int girdi2);

int main(int argc, char const *argv[]) {

  basla:;

  int kenar1=0,kenar2=0,alan=0,secim1=0,sonuc=0,tekrar=0;
  printf("meraba,\nkare alan icin 1i\nkare cevre icin 2yi\ndik ucgen alan icin 3u\ndik ucgen cevre icin 4u tusla\n");
  scanf("%d",&secim1);
  if((secim1==1||secim1==2||secim1==3||secim1==4)==0){
    printf("\nyanlis tusladiniz");
    goto son;
  }
  printf("secim %d\nkenarlari gir:\n",secim1);
  scanf("%d%d",&kenar1,&kenar2);
  switch (secim1) {
    case 1:sonuc=kareAlan(kenar1,kenar2); break;
    case 2:sonuc=kareCevre(kenar1,kenar2); break;
    case 3:sonuc=ucgenAlan(kenar1,kenar2); break;
    case 4:sonuc=ucgenCevre(kenar1,kenar2); break;
    default:sonuc=-1;
      }
   son:
  printf("sonuc:%d,yeniden?\n1=evet\n",sonuc);
  scanf("%d",&tekrar);
  if (tekrar==1) {
    goto basla;
  }
  return 0;
}

int kareAlan(int girdi,int girdi2){
  int cikti=girdi*girdi2;
  return cikti;
}
int kareCevre(int girdi,int girdi2){
  int cikti=2*(girdi+girdi2);
  return cikti;
}
int ucgenAlan(int girdi,int girdi2){
  int cikti=girdi*girdi2/2;
  return cikti;
}
int ucgenCevre(int girdi,int girdi2){

  int hipo=pow(girdi,2)+pow(girdi2,2);
  hipo= sqrt((double)hipo);
  return hipo+girdi+girdi2;
}

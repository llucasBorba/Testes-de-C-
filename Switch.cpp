#include <stdio.h>
 
 int main (void){
  int item;
    printf("Digite o numero do intem comprado: ");
    scanf("%d", &item);
     
      switch (item){
      case 1: 
      printf ("O item comprado foi ABACAXI");
      break;
      
      case 2: 
      printf ("O item comprado foi MACA");
      break;
      
      case 3: 
      printf ("O item comprado foi PERA");
      break;
      
      default: 
       printf("O numero informado nao consresponde a nenhum item");
	  }
  }

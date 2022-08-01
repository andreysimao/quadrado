#include <stdio.h>


int main() {
 

int altura = 5;


for(int linha = 0;  linha<altura; linha++ ){

   
  for(int coluna= 0; coluna<altura; coluna++){

    

if(0 == linha || altura - 1 == linha){
  printf(" ");
  printf("*");


  }



else if(altura - 1 == coluna || coluna == 0 ){
  printf(" ");
  printf("*");

}

else{

printf("  ");


}

 }

printf("\n");


}


return 0;
}


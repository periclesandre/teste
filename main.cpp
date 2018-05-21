#include <iostream>
#include <stdio.h>
#include <string.h>

main(){
       
       char palavra [256];
       int fim, inicio, tamanho, palindromo=1;
      
       gets(palavra);
       
       /*ANALISA O TAMANHO DA PALAVRA*/     
       for (tamanho=0; palavra[tamanho] != '\0'; tamanho++);
       
       /*PERCORRE DO INICIO PARA O FIM AO MESMO TEMPO FAZ O PERCURSO INVERSO*/
       for (inicio=0, fim=tamanho-1; fim>0 && palavra[inicio] != '\0'; inicio++, fim--){
           
           /*ANALISA A 1ª POSIÇÃO COM A ULTIMA POSIÇÃO DA PALAVRA, DE ACRODO C O TAMANHO*/    
           if (palavra[fim] != palavra[inicio])
              palindromo=0; /*SE A CONDIÇÃO ACIMA FOR VERDADE, INVALIDA -> PALINDROMO*/
              break;
       }
       
       if (palindromo)/*SE A CONDIÇÃO DO PALINDRO FOR VERDADE ( = 1 )*/
          puts("a string eh um palindromo");
       
       else /*SE A CONDIÇÃO DO PALINDRO FOR FALSA ( = 0 )*/
           puts("a string NAO eh um palindromo");
           
       system("pause>nul");
}
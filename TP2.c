/*Trabajo Practico No. 2 - GetChar
*Cordoba, Maria Noelia - K2051
*20150419*/

#include "stdafx.h"
#include <stdio.h>

int main(){

	int c;
	
	while ((c = getchar()) != EOF){
		if (c == '\t'){  // con comillas simples porque es un único caracter
			printf("\\t"); // con comillas dobles porque es de tipo string
		}
		else {
			if (c == '\b'){
				printf("\\b");
			}
			else {
				if (c == '\\'){
					printf("\\\\");
				}
				else{
					printf("%c", c);
				}
			}

		}
	}
	return 0;
}
#include <stdio.h>
int main (){
	int maior,menor,valor;
	
	printf ("Digite O Primeiro Numero: ");
	scanf ("%d",&valor);	
	maior = valor;
	menor = valor;
	
	printf ("Digite O Segundo Numero: ");
	scanf ("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if ( valor < menor){
		menor = valor;
	}
	
	printf ("Digite O Terceiro Numero: ");
	scanf ("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if ( valor < menor){
		menor = valor;
	}
	
	printf ("Digite O Quarto Numero: ");
	scanf ("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if ( valor < menor){
		menor = valor;
	}
	
	printf ("Digite O Quinto Numero: ");
	scanf ("%d",&valor);
	if (valor > maior){
		maior = valor;
	}
	if ( valor < menor){
		menor = valor;
	}
	
	printf ("Maior = %d e menor = %d",maior,menor);
	
    return 0;
}

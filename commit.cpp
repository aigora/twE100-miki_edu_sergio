#include <stdio.h>
#include <math.h>
 int main(){
float b , a , resp , r , resr ;
char tipo, repe;
do{

printf("introduce 'c' para area de un circulo y 'p' si es un paralelogrmo \n");
scanf("%s",&tipo);
if (tipo == 'p'){
	printf("Dame las dimensiones del rectangulo\n");
	printf("la base es :\n");
	scanf("%f",&b);
	fflush(stdin);
	printf("la altura es :\n");
	scanf("%f",&a);
	fflush(stdin);
	resp = (b*a);
	printf("el area de tu rectangulo es %f m^2\n ", resp);
}
else if (tipo == 'c'){

	printf("Introduca el radio: \n ");
	scanf("%f",&r);
	resr=M_PI*pow(r,2);
	printf("El area del circulo es :%f m^2\n", resr);
	}
	
else{
	printf("Se ha equivocado");
	
}


printf("Desea continuar? Marque si o no\n");
scanf("%s",&repe);
fflush(stdin);
}while(repe == 's' || repe == 'S');

}

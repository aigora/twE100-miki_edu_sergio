//Guillen Torralba, Miguel Angel
//Martin Jimenez, Eduardo
//Gonzalez Gutierrez, Sergio


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#define MAXCAD 100

void registrar_vehiculos();
void menu();
void mostrar_vehiculos();
void mostrar_vehiculos_aptos();
void mostrar_vehiculos_noaptos();



typedef struct {

char nombre[MAXCAD];
char apellido[MAXCAD] ;
char matricula[MAXCAD];
char dni[MAXCAD];
char eco[MAXCAD];


} propietario;

int main()
{
	
char nombre_completo[100];
char nombre_matricula[15];
char nombre_dni[10];
char nombre_eco[30];
propietario lista[MAXCAD];
char nombre[100];
char apellido[100] ;
char matricula[20];
char dni[20];
char eco[20];
char L[30];
char N[30];
char ancho;
int nv = 0;
int opcion, cont1;
FILE *p_archivo;

p_archivo = fopen ("Madrid central.txt", "r");
cont1 = 1;
	while (feof(p_archivo) == 0)
	{	// Lectura de un registro
		fscanf (p_archivo, "%c", &L[i].propietario.nombre.apellido.matricula.dni.eco);  // <<< Arregla la posición dle puntero (¡OJO con el formato del archivo!)
		fgets (L[i].nombre, N, p_archivo);
			ancho = strlen (L[i].nombre);
			if (L[i].nombre [ancho - 1] == '\n') L[i].nombre [ancho - 1] = '\0';
			printf("\t%c", ancho);
		fgets (L[i].apellido, N, p_archivo);
			ancho = strlen (L[i].apellido);
			if (L[i].apellido [ancho - 1] == '\n') L[i].apellido [ancho - 1] = '\0';
			printf("\t%c", ancho);
		fgets (L[i].matricula, N, p_archivo);
			ancho = strlen (L[i].matricula);
			if (L[i].matricula [ancho - 1] == '\n') L[i].matricula [ancho - 1] = '\0';
			printf("\t%c", ancho);
		fgets (L[i].dni, N, p_archivo);
			ancho = strlen (L[i].dni);
			if (L[i].dni [ancho - 1] == '\n') L[i].dni [ancho - 1] = '\0';
			printf("\t%c", ancho);
		fgets (L[i].eco, N, p_archivo);
			ancho = strlen (L[i].eco);
			if (L[i].eco [ancho - 1] == '\n') L[i].eco [ancho - 1] = '\0';
			printf("\t%c", ancho);		
		
		fscanf (p_archivo, "%c", &L[i].propietario.nombre);
		fscanf (p_archivo, "%c", &L[i].propietario.apellido);
		fscanf (p_archivo, "%c", &L[i].propietario.matricula);
		fscanf (p_archivo, "%c", &L[i].propietario.dni);
		fscanf (p_archivo, "%c", &L[i].propietario.eco);
		
		// En pantalla
		printf ("\nEl registro %c es:\n", cont1);
		printf ("%s %s %s, nacido el %2c/%2c/%4c\n", L[i].nombre, L[i].apellido, L[i].matricula, L[i].dni, L[i].eco
					L[i].propietario.nombre, L[i].propietario.apellido, L[i].nacimiento.matricula), L[i].nacimiento.dni, L[i].nacimiento.eco);
		cont1++;
	}

do
{

pf = fopen("madridcentral.txt", "r");
	
//fprintf( pf, " \n\tNombre    : %s ", L[i].nombre);
//fprintf( pf," \n\tApellidos : %s ", L[i].apellido);
//fprintf( pf," \n\tDNI       : %s ", L[i].dni);
//fprintf( pf," \n\tMatricula : %s \n\n\n", L[i].matricula);
menu();
scanf("%i",&opcion);
fflush(stdin);
switch(opcion)
{
case 1:

registrar_vehiculos(lista, &nv);
printf("\n");
break;
case 2:
mostrar_vehiculos(nv,lista);
system("pause");
break;

case 3:
mostrar_vehiculos_aptos(&nv,lista);
system("pause");
break;

case 4:
mostrar_vehiculos_noaptos(&nv,lista);
system("pause");
break;

}

printf("\n\n");


} while(opcion <5 && opcion >0);

}

void menu()
{
	

printf("\n\n\n\n\t\tMADRID CENTRAL\n\n");
printf(" 1. Registrar vehiculo \n");
printf(" 2. Mostrar registro de coches y propietarios \n");
printf(" 3. Mostrar vehiculos aptos para circular en Madrid Central \n");
printf(" 4. Mostrar vehiculos no aptos para circular en Madrid Central \n");
printf(" 5. Salir \n\n");
printf("\nIngrese opcion : \n");
}



/// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void registrar_vehiculos(propietario L[], int *nv)
{
int i, ancho;
printf("\n Numero de vehiculos: ");
scanf("%i", nv); // numero de vehiculos que se deseean registrar
fflush(stdin);
for(i=0; i<*nv; i++)
{
printf("\nPROPIETARIO DEL COCHE\n\n");

printf( " \nNombre    : "); fgets(L[i].nombre,100,stdin); ancho = strlen (L[i].nombre); if (L[i].nombre [ancho - 1] == '\n') L[i].nombre [ancho - 1] = '\0'; //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
printf( " \nApellidos : "); fgets(L[i].apellido,100,stdin);ancho = strlen (L[i].apellido); if (L[i].apellido [ancho - 1] == '\n') L[i].apellido [ancho - 1] = '\0';
printf( " \nMatricula : "); fgets(L[i].matricula,20,stdin);ancho = strlen (L[i].matricula); if (L[i].matricula [ancho - 1] == '\n') L[i].matricula [ancho - 1] = '\0';
printf( " \nD N I     : "); fgets(L[i].dni,20,stdin);ancho = strlen (L[i].dni); if (L[i].dni [ancho - 1] == '\n') L[i].dni [ancho - 1] = '\0';
printf( " \nTipo de vehiculo: "); fgets(L[i].eco,20,stdin);ancho = strlen (L[i].eco); if (L[i].eco [ancho - 1] == '\n') L[i].eco [ancho - 1] = '\0';


}
}

void mostrar_vehiculos(int nv, propietario L[])
{
int i;
if(nv>0)
{
printf("\n\n\tMOSTRANDO LISTA DE VEHICULOS Y PROPIETARIOS\n");
for(i=0; i<nv; i++){
printf("\n\n");
printf( " \n\tNombre    : %s ", L[i].nombre);
printf( " \n\tApellidos : %s ", L[i].apellido);
printf( " \n\tDNI       : %s ", L[i].dni);
printf( " \n\tMatricula : %s \n\n\n", L[i].matricula);
printf("\n\n");

}
}else
printf("\n\tRegistro vacio..!");

}

void mostrar_vehiculos_aptos(int *nv, propietario L[])
{
int i;
//printf("result %i\n", strcmp(L[i].eco, "eco"));
//std::cout<<L[i].eco;

if((strcmp(L[i].eco, "eco") == 0 || strcmp(L[i].eco, "ECO") == 0)&& *nv>0 )
{
printf("\n\nCoches aptos para circular por Madrid Central\n");
for(i=0; i<*nv; i++){
printf( " \n\tNombre    : %s ", L[i].nombre);
printf( " \n\tApellidos : %s ", L[i].apellido);
printf( " \n\tDNI       : %s ", L[i].dni);
printf( " \n\tMatricula : %s ", L[i].matricula);
printf("\n");

}
}
else
printf("\n\tRegistro vacio..!");
}


void mostrar_vehiculos_noaptos(int *nv, propietario L[])
{

int i;
if( strcmp(L[i].eco, "eco")!= 0 || strcmp(L[i].eco, "eco") != 0 && *nv>0  )
{
printf("\n\nCoches no aptos para circular por Madrid Central\n");
for(i=0; i<*nv; i++){
printf("\n\n");
printf( " \n\tNombre    : %s ", L[i].nombre);
printf( " \n\tApellidos : %s ", L[i].apellido);
printf( " \n\tDNI       : %s ", L[i].dni);
printf( " \n\tMatricula : %s ", L[i].matricula);
printf("\n");

}
}
else
printf("\n\tRegistro vacio..!");
}

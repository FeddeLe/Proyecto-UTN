#include <stdio.h>
#include <stdlib.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

#include <unistd.h>

typedef struct Producto 
{
	char Nombre[50];
	float Precio;
	long int Stock;
}item;


int Log_In (char*,char*);
int Create_User (char*,char*);
int String_Compare (char*,char*);
int String_Lenght (char*);
item* Buscar_Producto(char*);
int Agregar_Producto (char*,float,long int);

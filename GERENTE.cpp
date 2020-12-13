#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef char cadena[60];

struct FECHA
{
	int dd;
	int mm;
	int aaaa;
};

struct USUARIOS
{
	char Veterinarios [10];
	char Password [10];
	cadena ApeYNomDeUsu;
};

struct VETERINARIO
{
	cadena ApeYNomDeVet;
	int Matricula;
	int DNIveterinario;
	char Telefono[25];
};

struct MASCOTA
{
	cadena ApeYNomDeMas;
	cadena Domicilio;
	int DNIdueno;
	char Localidad[25];
	FECHA FechaDeNacimiento;
	float Peso;
	char Telefono[25];
};

struct TURNOS
{
	int Matricula;
	FECHA FechaTurno;
	int DNIdueno;
	char Detalle[380];
};


main()
{
	int opcion;
	
	system("cls");
	
	InicioDeSesion;
	
	do
	{
		Menu(opcion);
		
		switch (opcion)
		{
			case 1:
				
				printf("registrar veterinario");
				
				//utilizar vector para 
				isdigit 0-9 true
				isalpha a-z/A-Z
				
				
				break;
				
			case 2:
				
				printf("registrar resepcionista");
				
				break;
				
			case 3:
				
				printf("atenciones por veterinario");
				
				break;
				
			case 4:
				
				printf("ranking de veterinarios por atenciones");
				
				break;
				
			case 5:
				
				printf("cierre de sesion");
				break;
		}
	}
	while(opcion!=0);
	
	printf("\n\n");
	system("pause");
	
}

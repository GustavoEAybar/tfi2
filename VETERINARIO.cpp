#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

typedef char cadena[60];

//si podemos agregar mas registros y archivos.dat

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

struct TURNOS // opcion 3 de verterinario
{
	int Matricula;
	FECHA FechaTurno;
	int DNIdueno;
	char Detalle[380];
};

void InicioDeSesion()
{
	
	int CoincidenciaUsuario;
	
	float ;
	
	cadena ;
		
	fopen; //usuarios y claves 
	
	do
	{
		reewine;
		
		printf("Usuario: ");
		_flushall();
		get(Usuario);
		
		printf("Clave:");
		_flushall();
		get(Clave);
		
		for (int i = 0 ; i < Cuentas; i++) //cuentas seria la cantidad de veterinarios
		{
			fread(); //usuarios y claves
			
			CoincidenciaUsuario=cmp(Usuario,Veterinarios);
			
			CoincidenciaClave=cmp(Clave,Password);
			
			if(CoincidenciaUsuario==1)
			{
				if(CoincidenciaClave==1)
				{
					printf("\n Bienbenido! \n");
					exit(1);
				}
			}
		}
		
		printf("el usuario o clave es incorrecto");
		printf("le quedan x de 3");
	}
	while(b!=1);
}

int menu()
{
	int opcion;
	
	printf("----------------------menu-------------------------------");
	printf("01 - visualisar liste de espera de turno");
	printf("02 - registrar evolucion de la mascota");
	printf("03 - salir");
	printf("opcion seleccionadad: ");
	scanf("%d", &opcion);
	
	return opcion;
	
}

void ListaDeEspera()
{
	fopen
	rewain
	do
	{
		fread
		
		puts("");
		puts("");
		puts("");
		puts("");
	}
	while(Mascota!=NULL)
}

void HistoriaClinica()//TIENE QUE MOSTRAR TODOS LOS TURNOS DEL DIA

	fopen
	rewine
	do
	{
		fread
		printf("matricula: %d",TURNOS.Matricula);
		printf("fecha: %s - %s - %s",FechaTurno->dd,FechaTurno->mm,FechaTurno->aaaa);
		printf("DNI del duaño",DNIdueno);
		printf("brebe detalle de la consulta: ", Detalle);//solo la ultima
			}
	while
	
}

main()
{
	
	
	system("cls");
	
	InicioDeSesion();
	
	do
	{
		menu(opcion);
		
		switch (opcion)
		{
			case 1:
				
				printf("---visualizar lista de espera de turnos---");
				
				ListaDeEspera();
				
				
				
				break;
				
			case 2:
				
				printf("registrar evolucion de la mascota");
				
				break;
				
			case 3:
				
				printf("cierre de sesion");
				break;
		}
	}
	while(opcion!=0);
	
	printf("\n\n");
	system("pause");
	
}

1 menu  
{
	2recepcionista
	{
		iniciar sesion
		{
			funcion que solicita la clave;
		}
		registrar mascota
		{
			
		}
		registrar turno
		{
			
		}
		listado de atenciones por veterinario y fecha
		{
			ingresa la fecha o el veterinario para ver algun turno libre
			
			
		}
		cerra la app
	}


	2veterinario
	{
		iniciar sesion
		{
			funcion que solicita la clave;
			{
				if (x >= A && x <= Z)
			}
		}
		visualisar lista de espera de turnos
		{
			
		}
		registrar evoluvion de la mascota
		{
			el veterinario escribe 380 caratere sobre la consulta
			{
				typedef char cadena [380];
				
				printf ("resumen de la consulta: ");
				get(historial);
			}
			
			ma=ma++
		}
		cerra la app
	}

	2gerente
	{
		registrar veterinario
		{
			funcion crear usuarios
		}
		registrar usuario asistente
		{
			funcion crear usuarios
		}
		atencioes por veterinarios
		{
			
		}
		ranking de veterinarios por atenciones
		{
			busqueda doc con mayor "m.a."
		}
		cerrar app
	}
}

/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "gestionRFC.h"


void
gestion_rfc_1(char *host)
{
	CLIENT *clnt;
	bool_t  *result_1;
	nodo_usuario  registrarusuariosistema_1_arg;
	char * *result_2;
	int  calcularrfc_1_arg;
	nodo_usuario  *result_3;
	int  listarusuario_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, gestion_RFC, gestion_RFC_version, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

    /***********************************************************************************************/

    nodo_usuario objUsuario;
	int op=0, aux;
	char opTamHamb[10];
	
	do
	{
		printf("\n\n======= M E N U ==========\n");
		printf("1. Registrar Usuario.\n");
        printf("2. Generar codigo RFC.\n");
        printf("3. Consultar usuario.\n");
		printf("4. Salir.\n");
		printf("==========    =============\n");
		
		printf("Seleccione una opcion: \n");
		scanf("%d", &op);
		
		switch(op)
		{
			case 1:
                
			printf("=== Registrar Usuario.===\n");
			printf("Digite el nombre del usuario: \n");
			scanf("%s", &objUsuario.nombre);
			printf("Digite el apelldio paterno del usuario: \n");
			scanf("%s", &objUsuario.apellidoPto);
            printf("Digite el apellido materno del usuario: \n");
			scanf("%s", &objUsuario.apellidoMto);
            printf("Digite la cedula del usuario: \n");
			scanf("%d", &objUsuario.cedula);
            printf("Digite el username: \n");
			scanf("%s", &objUsuario.username);
            printf("Digite la contraseña del usuario: \n");
			scanf("%s", &objUsuario.password);
            
            printf("Digite el dia de nacimiento del Usuario: ");
            scanf("%d",&objUsuario.dia_nac);
            printf("Digite el mes de nacimiento del Usuario: ");
            scanf("%d",&objUsuario.mes_nac);
            printf("Digite el año de nacimiento del Usuario: ");
            scanf("%d",&objUsuario.anio_nac);
            
            result_1 = registrarusuariosistema_1(&objUsuario, clnt);
            if (result_1 == (bool_t *) NULL) {
                clnt_perror (clnt, "call REGISTRAR USUARIO failed");
            }else if(*result_1 == TRUE) {
				printf("Usuario registrado exitosamente!!\n");
			}
					
			break;
			
			case 2:
                
                printf("=== Generar codigo RFC ===\n");
                int aux_cedula_1;
                printf("Digite la cedula del usuario: ");
                scanf("%d", &aux_cedula_1);
                
                result_2 = calcularrfc_1(&aux_cedula_1, clnt);
                if (result_2 == (char **) NULL) {
                    clnt_perror (clnt, "call CALCULAR CODIGO failed");
                }else {
                    printf("Codigo RFC: %s\n", result_2);
                }
                
			break;
            
            case 3:
                printf("=== Consultar usuario ===\n");
                int aux_cedula;
                printf("Digite la cedula del usuario: ");
                scanf("%d", &aux_cedula);
                
                result_3 = listarusuario_1(&aux_cedula, clnt);
                if (result_3 == (nodo_usuario *) NULL) {
                    clnt_perror (clnt, "call failed");
                }else {
                    printf("Nombre completo: %s %s %s\n", (*result_3).nombre, (*result_3).apellidoPto, (*result_3).apellidoMto);
                    printf("Cedula: %d\n", (*result_3).cedula);
                    printf("Nombre de usuario: %s\n", (*result_3).username);
                    printf("Contraseña: %s\n", (*result_3).password);
                    printf("Fecha de nacimiento: %d / %d / %d\n", (*result_3).dia_nac, (*result_3).mes_nac, (*result_3).anio_nac);
                    printf("Codigo RFC: %s\n", (*result_3).rfc);
                }
            break;

			case 4:
                printf("\nExit...\n");
			break;
			
			printf("Llega");
			
		}
    
	}while(op != 4);
    
    /***********************************************************************************************/

#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	gestion_rfc_1 (host);
exit (0);
}

/*Declaracion de datos a transferir entre el cliente y el servidor*/

/*Declaracion de constantes*/
const MAXSTR = 30;
const MAXRFC = 13;

/*Declaracion de la estructura que permite almacenar los datos de una hamburguesa*/
struct nodo_usuario
{
    char nombre[MAXSTR];
    char apellidoPto[MAXSTR];
    char apellidoMto[MAXSTR];
    int cedula;
    char username[MAXSTR];
    char password[MAXSTR];
    int dia_nac;
    int mes_nac;
    int anio_nac;
    int flag_rfc;
    char rfc[MAXRFC];
};

/*Definicion de las operaciones que se pueden realizar*/
program gestion_RFC{
	version gestion_RFC_version{
		bool registrarUsuarioSistema(nodo_usuario objUsuario)=1;
		string calcularRFC(int cedula)=2;
		nodo_usuario listarUsuario(int cedula)=3;
	}=1;
}=0x20000001;


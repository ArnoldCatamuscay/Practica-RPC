/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GESTIONRFC_H_RPCGEN
#define _GESTIONRFC_H_RPCGEN

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <rpc/rpc.h>

#ifdef __cplusplus
extern "C" {
#endif

#define MAXSTR 30
#define MAXRFC 13

struct nodo_usuario {
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
typedef struct nodo_usuario nodo_usuario;

#define gestion_RFC 0x20000001
#define gestion_RFC_version 1

#if defined(__STDC__) || defined(__cplusplus)
#define registrarUsuarioSistema 1
extern  bool_t * registrarusuariosistema_1(nodo_usuario *, CLIENT *);
extern  bool_t * registrarusuariosistema_1_svc(nodo_usuario *, struct svc_req *);
#define calcularRFC 2
extern  char ** calcularrfc_1(int *, CLIENT *);
extern  char ** calcularrfc_1_svc(int *, struct svc_req *);
#define listarUsuario 3
extern  nodo_usuario * listarusuario_1(int *, CLIENT *);
extern  nodo_usuario * listarusuario_1_svc(int *, struct svc_req *);
extern int gestion_rfc_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define registrarUsuarioSistema 1
extern  bool_t * registrarusuariosistema_1();
extern  bool_t * registrarusuariosistema_1_svc();
#define calcularRFC 2
extern  char ** calcularrfc_1();
extern  char ** calcularrfc_1_svc();
#define listarUsuario 3
extern  nodo_usuario * listarusuario_1();
extern  nodo_usuario * listarusuario_1_svc();
extern int gestion_rfc_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_nodo_usuario (XDR *, nodo_usuario*);

#else /* K&R C */
extern bool_t xdr_nodo_usuario ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GESTIONRFC_H_RPCGEN */

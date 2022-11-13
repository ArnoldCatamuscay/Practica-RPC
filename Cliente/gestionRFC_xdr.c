/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "gestionRFC.h"

bool_t
xdr_nodo_usuario (XDR *xdrs, nodo_usuario *objp)
{
	register int32_t *buf;

	int i;

	if (xdrs->x_op == XDR_ENCODE) {
		 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->apellidoPto, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->apellidoMto, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->cedula))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->username, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->password, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->dia_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mes_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->anio_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->flag_rfc))
				 return FALSE;

		} else {
		IXDR_PUT_LONG(buf, objp->dia_nac);
		IXDR_PUT_LONG(buf, objp->mes_nac);
		IXDR_PUT_LONG(buf, objp->anio_nac);
		IXDR_PUT_LONG(buf, objp->flag_rfc);
		}
		 if (!xdr_vector (xdrs, (char *)objp->rfc, MAXRFC,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->apellidoPto, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->apellidoMto, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_int (xdrs, &objp->cedula))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->username, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		 if (!xdr_vector (xdrs, (char *)objp->password, MAXSTR,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->dia_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->mes_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->anio_nac))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->flag_rfc))
				 return FALSE;

		} else {
		objp->dia_nac = IXDR_GET_LONG(buf);
		objp->mes_nac = IXDR_GET_LONG(buf);
		objp->anio_nac = IXDR_GET_LONG(buf);
		objp->flag_rfc = IXDR_GET_LONG(buf);
		}
		 if (!xdr_vector (xdrs, (char *)objp->rfc, MAXRFC,
			sizeof (char), (xdrproc_t) xdr_char))
			 return FALSE;
	 return TRUE;
	}

	 if (!xdr_vector (xdrs, (char *)objp->nombre, MAXSTR,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->apellidoPto, MAXSTR,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->apellidoMto, MAXSTR,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->cedula))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->username, MAXSTR,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->password, MAXSTR,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->dia_nac))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->mes_nac))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->anio_nac))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->flag_rfc))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->rfc, MAXRFC,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

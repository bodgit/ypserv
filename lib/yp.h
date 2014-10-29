/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _YP_H_RPCGEN
#define _YP_H_RPCGEN

#include <rpc/rpc.h>
#include <rpcsvc/yp_prot.h>

#ifdef __cplusplus
extern "C" {
#endif

#define YPMAXRECORD 1024
#define YPMAXMAP 64

enum ypxfrstat {
	YPXFR_SUCC = 1,
	YPXFR_AGE = 2,
	YPXFR_NOMAP = -1,
	YPXFR_NODOM = -2,
	YPXFR_RSRC = -3,
	YPXFR_RPC = -4,
	YPXFR_MADDR = -5,
	YPXFR_YPERR = -6,
	YPXFR_BADARGS = -7,
	YPXFR_DBM = -8,
	YPXFR_FILE = -9,
	YPXFR_SKEW = -10,
	YPXFR_CLEAR = -11,
	YPXFR_FORCE = -12,
	YPXFR_XFRERR = -13,
	YPXFR_REFUSED = -14
};
typedef enum ypxfrstat ypxfrstat;

typedef char *domainname;

typedef char *mapname;

typedef char *peername;

#if defined(HAVE_LIBTC)

typedef struct {
	char *dptr;
	int dsize;
} datum;

#endif

typedef struct
{
    struct
    {
        int (*encode)(ypresp_key_val *val, void *data);
        int (*close)(void *data);
    } u;
    void *data;
} xdr_ypall_cb_t;

struct ypresp_xfr {
	u_int transid;
	ypxfrstat xfrstat;
};
typedef struct ypresp_xfr ypresp_xfr;

#define YPBIND_ERR_ERR 1
#define YPBIND_ERR_NOSERV 2
#define YPBIND_ERR_RESC 3

#if defined(__STDC__) || defined(__cplusplus)
#define YPPROC_NULL 0
extern  enum clnt_stat ypproc_null_2(void *, void *, CLIENT *);
extern  bool_t ypproc_null_2_svc(void *, void *, struct svc_req *);
#define YPPROC_DOMAIN 1
extern  enum clnt_stat ypproc_domain_2(domainname *, bool_t *, CLIENT *);
extern  bool_t ypproc_domain_2_svc(domainname *, bool_t *, struct svc_req *);
#define YPPROC_DOMAIN_NONACK 2
extern  enum clnt_stat ypproc_domain_nonack_2(domainname *, bool_t *, CLIENT *);
extern  bool_t ypproc_domain_nonack_2_svc(domainname *, bool_t *, struct svc_req *);
#define YPPROC_MATCH 3
extern  enum clnt_stat ypproc_match_2(ypreq_key *, ypresp_val *, CLIENT *);
extern  bool_t ypproc_match_2_svc(ypreq_key *, ypresp_val *, struct svc_req *);
#define YPPROC_FIRST 4
extern  enum clnt_stat ypproc_first_2(ypreq_key *, ypresp_key_val *, CLIENT *);
extern  bool_t ypproc_first_2_svc(ypreq_nokey *, ypresp_key_val *, struct svc_req *);
#define YPPROC_NEXT 5
extern  enum clnt_stat ypproc_next_2(ypreq_key *, ypresp_key_val *, CLIENT *);
extern  bool_t ypproc_next_2_svc(ypreq_key *, ypresp_key_val *, struct svc_req *);
#define YPPROC_XFR 6
extern  enum clnt_stat ypproc_xfr_2(ypreq_xfr *, ypresp_xfr *, CLIENT *);
extern  bool_t ypproc_xfr_2_svc(ypreq_xfr *, ypresp_xfr *, struct svc_req *);
#define YPPROC_CLEAR 7
extern  enum clnt_stat ypproc_clear_2(void *, void *, CLIENT *);
extern  bool_t ypproc_clear_2_svc(void *, void *, struct svc_req *);
#define YPPROC_ALL 8
extern  enum clnt_stat ypproc_all_2(ypreq_nokey *, ypresp_all *, CLIENT *);
extern  bool_t ypproc_all_2_svc(ypreq_nokey *, ypresp_all *, struct svc_req *);
#define YPPROC_MASTER 9
extern  enum clnt_stat ypproc_master_2(ypreq_nokey *, ypresp_master *, CLIENT *);
extern  bool_t ypproc_master_2_svc(ypreq_nokey *, ypresp_master *, struct svc_req *);
#define YPPROC_ORDER 10
extern  enum clnt_stat ypproc_order_2(ypreq_nokey *, ypresp_order *, CLIENT *);
extern  bool_t ypproc_order_2_svc(ypreq_nokey *, ypresp_order *, struct svc_req *);
#define YPPROC_MAPLIST 11
extern  enum clnt_stat ypproc_maplist_2(domainname *, ypresp_maplist *, CLIENT *);
extern  bool_t ypproc_maplist_2_svc(domainname *, ypresp_maplist *, struct svc_req *);
extern int ypprog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define YPPROC_NULL 0
extern  enum clnt_stat ypproc_null_2();
extern  bool_t ypproc_null_2_svc();
#define YPPROC_DOMAIN 1
extern  enum clnt_stat ypproc_domain_2();
extern  bool_t ypproc_domain_2_svc();
#define YPPROC_DOMAIN_NONACK 2
extern  enum clnt_stat ypproc_domain_nonack_2();
extern  bool_t ypproc_domain_nonack_2_svc();
#define YPPROC_MATCH 3
extern  enum clnt_stat ypproc_match_2();
extern  bool_t ypproc_match_2_svc();
#define YPPROC_FIRST 4
extern  enum clnt_stat ypproc_first_2();
extern  bool_t ypproc_first_2_svc();
#define YPPROC_NEXT 5
extern  enum clnt_stat ypproc_next_2();
extern  bool_t ypproc_next_2_svc();
#define YPPROC_XFR 6
extern  enum clnt_stat ypproc_xfr_2();
extern  bool_t ypproc_xfr_2_svc();
#define YPPROC_CLEAR 7
extern  enum clnt_stat ypproc_clear_2();
extern  bool_t ypproc_clear_2_svc();
#define YPPROC_ALL 8
extern  enum clnt_stat ypproc_all_2();
extern  bool_t ypproc_all_2_svc();
#define YPPROC_MASTER 9
extern  enum clnt_stat ypproc_master_2();
extern  bool_t ypproc_master_2_svc();
#define YPPROC_ORDER 10
extern  enum clnt_stat ypproc_order_2();
extern  bool_t ypproc_order_2_svc();
#define YPPROC_MAPLIST 11
extern  enum clnt_stat ypproc_maplist_2();
extern  bool_t ypproc_maplist_2_svc();
extern int ypprog_2_freeresult ();
#endif /* K&R C */

#define YPPUSH_XFRRESPPROG 0x40000000
#define YPPUSH_XFRRESPVERS 1

#define YPPUSHPROC_NULL 0
extern  enum clnt_stat yppushproc_null_1(void *, void *, CLIENT *);
extern  bool_t yppushproc_null_1_svc(void *, void *, struct svc_req *);
#define YPPUSHPROC_XFRRESP 1
extern  enum clnt_stat yppushproc_xfrresp_1(yppushresp_xfr *, void *, CLIENT *);
extern  bool_t yppushproc_xfrresp_1_svc(yppushresp_xfr *, void *, struct svc_req *);
extern int yppush_xfrrespprog_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

extern  bool_t xdr_ypstat (XDR *, ypstat*);
extern  bool_t xdr_ypxfrstat (XDR *, ypxfrstat*);
extern  bool_t xdr_domainname (XDR *, domainname*);
extern  bool_t xdr_mapname (XDR *, mapname*);
extern  bool_t xdr_peername (XDR *, peername*);
extern  bool_t xdr_keydat (XDR *, keydat_t*);
extern  bool_t xdr_valdat (XDR *, valdat_t*);
extern  bool_t xdr_ypmap_parms (XDR *, ypmap_parms*);
extern  bool_t xdr_ypreq_key (XDR *, ypreq_key*);
extern  bool_t xdr_ypreq_nokey (XDR *, ypreq_nokey*);
extern  bool_t xdr_ypreq_xfr (XDR *, ypreq_xfr*);
extern  bool_t xdr_ypresp_val (XDR *, ypresp_val*);
extern  bool_t xdr_ypresp_key_val (XDR *, ypresp_key_val*);
extern  bool_t xdr_ypresp_master (XDR *, ypresp_master*);
extern  bool_t xdr_ypresp_order (XDR *, ypresp_order*);
extern  bool_t xdr_ypresp_all (XDR *, ypresp_all*);
extern  bool_t xdr_ypresp_xfr (XDR *, ypresp_xfr*);
extern  bool_t xdr_ypmaplist (XDR *, ypmaplist*);
extern  bool_t xdr_ypresp_maplist (XDR *, ypresp_maplist*);
extern  bool_t xdr_yppush_status (XDR *, yppush_status*);
extern  bool_t xdr_yppushresp_xfr (XDR *, yppushresp_xfr*);

extern  bool_t ypxfr_xdr_ypresp_all (XDR *xdrs, ypresp_all *objp);

#ifdef __cplusplus
}
#endif

#endif /* !_YP_H_RPCGEN */

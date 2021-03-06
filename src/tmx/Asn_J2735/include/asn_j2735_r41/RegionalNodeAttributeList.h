/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RegionalNodeAttributeList_H_
#define	_RegionalNodeAttributeList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Reg_NodeAttribute;

/* RegionalNodeAttributeList */
typedef struct RegionalNodeAttributeList {
	A_SEQUENCE_OF(struct Reg_NodeAttribute) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RegionalNodeAttributeList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RegionalNodeAttributeList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RegionalNodeAttribute.h"

#endif	/* _RegionalNodeAttributeList_H_ */
#include "asn_internal.h"

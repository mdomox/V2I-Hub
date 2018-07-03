/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#ifndef	_RoadSegmentList_H_
#define	_RoadSegmentList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RoadSegment;

/* RoadSegmentList */
typedef struct RoadSegmentList {
	A_SEQUENCE_OF(struct RoadSegment) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RoadSegmentList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadSegmentList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RoadSegment.h"

#endif	/* _RoadSegmentList_H_ */
#include "asn_internal.h"
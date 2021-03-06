/*
 * Generated by asn1c-0.9.27 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "../J2735_R41_Source_mod.ASN"
 * 	`asn1c -gen-PER -fcompound-names -fincludes-quoted`
 */

#include "WiperStatus.h"

static asn_TYPE_member_t asn_MBR_WiperStatus_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct WiperStatus, statusFront),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperStatusFront,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"statusFront"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct WiperStatus, rateFront),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rateFront"
		},
	{ ATF_POINTER, 2, offsetof(struct WiperStatus, statusRear),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperStatusRear,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"statusRear"
		},
	{ ATF_POINTER, 1, offsetof(struct WiperStatus, rateRear),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_WiperRate,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rateRear"
		},
};
static int asn_MAP_WiperStatus_oms_1[] = { 2, 3 };
static ber_tlv_tag_t asn_DEF_WiperStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_WiperStatus_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* statusFront */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rateFront */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* statusRear */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rateRear */
};
static asn_SEQUENCE_specifics_t asn_SPC_WiperStatus_specs_1 = {
	sizeof(struct WiperStatus),
	offsetof(struct WiperStatus, _asn_ctx),
	asn_MAP_WiperStatus_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_WiperStatus_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_WiperStatus = {
	"WiperStatus",
	"WiperStatus",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_WiperStatus_tags_1,
	sizeof(asn_DEF_WiperStatus_tags_1)
		/sizeof(asn_DEF_WiperStatus_tags_1[0]), /* 1 */
	asn_DEF_WiperStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_WiperStatus_tags_1)
		/sizeof(asn_DEF_WiperStatus_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_WiperStatus_1,
	4,	/* Elements count */
	&asn_SPC_WiperStatus_specs_1	/* Additional specs */
};


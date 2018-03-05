/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../ulp.asn1"
 * 	`asn1c -S ../../skeletons -pdu=ULP-PDU -pdu=SUPLINIT -fcompound-names -no-gen-OER`
 */

#ifndef	_WcdmaCellInformation_H_
#define	_WcdmaCellInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfo;
struct MeasuredResultsList;
struct TimingAdvance;

/* WcdmaCellInformation */
typedef struct WcdmaCellInformation {
	long	 refMCC;
	long	 refMNC;
	long	 refUC;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	long	*primaryScramblingCode	/* OPTIONAL */;
	struct MeasuredResultsList	*measuredResultsList	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	long	*cellParametersId	/* OPTIONAL */;
	struct TimingAdvance	*timingAdvance	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} WcdmaCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_WcdmaCellInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_WcdmaCellInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_WcdmaCellInformation_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"
#include "MeasuredResultsList.h"
#include "TimingAdvance.h"

#endif	/* _WcdmaCellInformation_H_ */
#include "asn_internal.h"
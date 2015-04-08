#ifndef __c3_testmodel_h__
#define __c3_testmodel_h__

/* Include files */
#include "sf_runtime/sfc_sf.h"
#include "sf_runtime/sfc_mex.h"
#include "rtwtypes.h"
#include "multiword_types.h"

/* Type Definitions */
#ifndef typedef_SFc3_testmodelInstanceStruct
#define typedef_SFc3_testmodelInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint32_T chartNumber;
  uint32_T instanceNumber;
  int32_T c3_sfEvent;
  uint8_T c3_tp_sell;
  uint8_T c3_tp_buy;
  boolean_T c3_isStable;
  uint8_T c3_is_active_c3_testmodel;
  uint8_T c3_is_c3_testmodel;
  real_T c3_avg;
  boolean_T c3_dataWrittenToVector[3];
  uint8_T c3_doSetSimStateSideEffects;
  const mxArray *c3_setSimStateSideEffectsInfo;
  real_T *c3_posFlag;
  real_T (*c3_ts)[6];
  real_T *c3_pd;
} SFc3_testmodelInstanceStruct;

#endif                                 /*typedef_SFc3_testmodelInstanceStruct*/

/* Named Constants */

/* Variable Declarations */
extern struct SfDebugInstanceStruct *sfGlobalDebugInstanceStruct;

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c3_testmodel_get_eml_resolved_functions_info(void);

/* Function Definitions */
extern void sf_c3_testmodel_get_check_sum(mxArray *plhs[]);
extern void c3_testmodel_method_dispatcher(SimStruct *S, int_T method, void
  *data);

#endif

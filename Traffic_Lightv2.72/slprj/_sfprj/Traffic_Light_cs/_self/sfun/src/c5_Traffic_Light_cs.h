#ifndef __c5_Traffic_Light_cs_h__
#define __c5_Traffic_Light_cs_h__

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_real_T*/

#ifndef typedef_c5_emxArray_real_T
#define typedef_c5_emxArray_real_T

typedef struct emxArray_real_T c5_emxArray_real_T;

#endif                                 /*typedef_c5_emxArray_real_T*/

#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T

struct emxArray_int32_T
{
  int32_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int32_T*/

#ifndef typedef_c5_emxArray_int32_T
#define typedef_c5_emxArray_int32_T

typedef struct emxArray_int32_T c5_emxArray_int32_T;

#endif                                 /*typedef_c5_emxArray_int32_T*/

#ifndef typedef_SFc5_Traffic_Light_csInstanceStruct
#define typedef_SFc5_Traffic_Light_csInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c5_sfEvent;
  boolean_T c5_doneDoubleBufferReInit;
  uint8_T c5_is_active_c5_Traffic_Light_cs;
  uint8_T c5_JITStateAnimation[1];
  uint8_T c5_JITTransitionAnimation[1];
  void *c5_RuntimeVar;
  uint32_T c5_mlFcnLineNumber;
  void *c5_fcnDataPtrs[37];
  char_T *c5_dataNames[37];
  uint32_T c5_numFcnVars;
  uint32_T c5_ssIds[37];
  uint32_T c5_statuses[37];
  void *c5_outMexFcns[37];
  void *c5_inMexFcns[37];
  real_T c5_Image[10368000];
  real_T c5_b_Image[10368000];
  real_T c5_Gray[3456000];
  real_T c5_R[3456000];
  real_T c5_G[3456000];
  real_T c5_B[3456000];
  boolean_T c5_XYR[3456000];
  boolean_T c5_bv[3456000];
  boolean_T c5_SearchRangeG[277221];
  boolean_T c5_SearchRangeR[271041];
  CovrtStateflowInstance *c5_covrtInstance;
  void *c5_fEmlrtCtx;
  real_T *c5_Dis;
  uint8_T (*c5_R_Ori)[3456000];
  real_T *c5_Light_State;
  uint8_T (*c5_G_Ori)[3456000];
  uint8_T (*c5_B_Ori)[3456000];
} SFc5_Traffic_Light_csInstanceStruct;

#endif                                 /*typedef_SFc5_Traffic_Light_csInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c5_Traffic_Light_cs_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c5_Traffic_Light_cs_get_check_sum(mxArray *plhs[]);
extern void c5_Traffic_Light_cs_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif

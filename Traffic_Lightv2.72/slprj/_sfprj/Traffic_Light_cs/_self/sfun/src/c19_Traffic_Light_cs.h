#ifndef __c19_Traffic_Light_cs_h__
#define __c19_Traffic_Light_cs_h__

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

#ifndef typedef_c19_emxArray_real_T
#define typedef_c19_emxArray_real_T

typedef struct emxArray_real_T c19_emxArray_real_T;

#endif                                 /*typedef_c19_emxArray_real_T*/

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

#ifndef typedef_c19_emxArray_int32_T
#define typedef_c19_emxArray_int32_T

typedef struct emxArray_int32_T c19_emxArray_int32_T;

#endif                                 /*typedef_c19_emxArray_int32_T*/

#ifndef typedef_SFc19_Traffic_Light_csInstanceStruct
#define typedef_SFc19_Traffic_Light_csInstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  int32_T c19_sfEvent;
  boolean_T c19_doneDoubleBufferReInit;
  uint8_T c19_is_active_c19_Traffic_Light_cs;
  uint8_T c19_JITStateAnimation[1];
  uint8_T c19_JITTransitionAnimation[1];
  void *c19_RuntimeVar;
  uint32_T c19_mlFcnLineNumber;
  void *c19_fcnDataPtrs[37];
  char_T *c19_dataNames[37];
  uint32_T c19_numFcnVars;
  uint32_T c19_ssIds[37];
  uint32_T c19_statuses[37];
  void *c19_outMexFcns[37];
  void *c19_inMexFcns[37];
  real_T c19_Image[10368000];
  real_T c19_b_Image[10368000];
  real_T c19_Gray[3456000];
  real_T c19_R[3456000];
  real_T c19_G[3456000];
  real_T c19_B[3456000];
  boolean_T c19_XYR[3456000];
  boolean_T c19_bv[3456000];
  boolean_T c19_SearchRangeR[661821];
  boolean_T c19_SearchRangeG[277221];
  CovrtStateflowInstance *c19_covrtInstance;
  void *c19_fEmlrtCtx;
  real_T *c19_Dis;
  uint8_T (*c19_R_Ori)[3456000];
  real_T *c19_Light_State;
  uint8_T (*c19_G_Ori)[3456000];
  uint8_T (*c19_B_Ori)[3456000];
} SFc19_Traffic_Light_csInstanceStruct;

#endif                                 /*typedef_SFc19_Traffic_Light_csInstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c19_Traffic_Light_cs_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c19_Traffic_Light_cs_get_check_sum(mxArray *plhs[]);
extern void c19_Traffic_Light_cs_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif

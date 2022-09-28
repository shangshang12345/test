/* Include files */

#include "Traffic_Light_cs_sfun.h"
#include "c19_Traffic_Light_cs.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtRSInfo c19_emlrtRSI = { 16,/* lineNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:656"              /* pathName */
};

static emlrtRSInfo c19_b_emlrtRSI = { 31,/* lineNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:656"              /* pathName */
};

static emlrtRSInfo c19_c_emlrtRSI = { 59,/* lineNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:656"              /* pathName */
};

static emlrtRSInfo c19_d_emlrtRSI = { 83,/* lineNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:656"              /* pathName */
};

static emlrtRSInfo c19_e_emlrtRSI = { 48,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c19_f_emlrtRSI = { 132,/* lineNo */
  "xgeqp3",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_g_emlrtRSI = { 33,/* lineNo */
  "polyfit",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\polyfun\\polyfit.m"/* pathName */
};

static emlrtRSInfo c19_h_emlrtRSI = { 44,/* lineNo */
  "polyfit",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\polyfun\\polyfit.m"/* pathName */
};

static emlrtRSInfo c19_i_emlrtRSI = { 35,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_j_emlrtRSI = { 39,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_k_emlrtRSI = { 46,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_l_emlrtRSI = { 57,/* lineNo */
  "xgeqp3",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_m_emlrtRSI = { 114,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_n_emlrtRSI = { 250,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_o_emlrtRSI = { 243,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_p_emlrtRSI = { 224,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_q_emlrtRSI = { 209,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_r_emlrtRSI = { 181,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_s_emlrtRSI = { 169,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c19_t_emlrtRSI = { 23,/* lineNo */
  "xnrm2",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c19_u_emlrtRSI = { 38,/* lineNo */
  "xnrm2",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c19_v_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c19_w_emlrtRSI = { 20,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_x_emlrtRSI = { 41,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_y_emlrtRSI = { 53,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_ab_emlrtRSI = { 68,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_bb_emlrtRSI = { 71,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_cb_emlrtRSI = { 81,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c19_db_emlrtRSI = { 31,/* lineNo */
  "xscal",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo c19_eb_emlrtRSI = { 18,/* lineNo */
  "xscal",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo c19_fb_emlrtRSI = { 75,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c19_gb_emlrtRSI = { 68,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c19_hb_emlrtRSI = { 50,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c19_ib_emlrtRSI = { 103,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c19_jb_emlrtRSI = { 64,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c19_kb_emlrtRSI = { 74,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c19_lb_emlrtRSI = { 37,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c19_mb_emlrtRSI = { 45,/* lineNo */
  "xgerc",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo c19_nb_emlrtRSI = { 45,/* lineNo */
  "xger",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo c19_ob_emlrtRSI = { 15,/* lineNo */
  "xger",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo c19_pb_emlrtRSI = { 41,/* lineNo */
  "xgerx",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c19_qb_emlrtRSI = { 54,/* lineNo */
  "xgerx",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c19_rb_emlrtRSI = { 131,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_sb_emlrtRSI = { 130,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_tb_emlrtRSI = { 79,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_ub_emlrtRSI = { 86,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_vb_emlrtRSI = { 96,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c19_wb_emlrtRSI = { 31,/* lineNo */
  "xunormqr",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo c19_xb_emlrtRSI = { 102,/* lineNo */
  "xunormqr",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo c19_yb_emlrtRSI = { 20,/* lineNo */
  "xzunormqr",                         /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo c19_ac_emlrtRSI = { 26,/* lineNo */
  "xzunormqr",                         /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo c19_bc_emlrtRSI = { 41,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c19_cc_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c19_dc_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c19_ec_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c19_emlrtRTEI = { 59,/* lineNo */
  15,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtRTEInfo c19_b_emlrtRTEI = { 83,/* lineNo */
  15,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtRTEInfo c19_c_emlrtRTEI = { 49,/* lineNo */
  5,                                   /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtRTEInfo c19_d_emlrtRTEI = { 96,/* lineNo */
  5,                                   /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtRTEInfo c19_e_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c19_f_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c19_g_emlrtRTEI = { 153,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtECInfo c19_emlrtECI = { -1,/* nDims */
  51,                                  /* lineNo */
  5,                                   /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtECInfo c19_b_emlrtECI = { -1,/* nDims */
  51,                                  /* lineNo */
  21,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtECInfo c19_c_emlrtECI = { -1,/* nDims */
  51,                                  /* lineNo */
  37,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtECInfo c19_d_emlrtECI = { -1,/* nDims */
  98,                                  /* lineNo */
  5,                                   /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtECInfo c19_e_emlrtECI = { -1,/* nDims */
  98,                                  /* lineNo */
  23,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtECInfo c19_f_emlrtECI = { -1,/* nDims */
  98,                                  /* lineNo */
  41,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656"              /* pName */
};

static emlrtBCInfo c19_emlrtBCI = { 1, /* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  10,                                  /* colNo */
  "RP_R",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_emlrtDCI = { 51,/* lineNo */
  10,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_b_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  26,                                  /* colNo */
  "RP_G",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_b_emlrtDCI = { 51,/* lineNo */
  26,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_c_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  42,                                  /* colNo */
  "RP_B",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_c_emlrtDCI = { 51,/* lineNo */
  42,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_d_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  74,                                  /* lineNo */
  10,                                  /* colNo */
  "GP_R",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_d_emlrtDCI = { 74,/* lineNo */
  10,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_e_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  74,                                  /* lineNo */
  26,                                  /* colNo */
  "GP_G",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_e_emlrtDCI = { 74,/* lineNo */
  26,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_f_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  74,                                  /* lineNo */
  42,                                  /* colNo */
  "GP_B",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_f_emlrtDCI = { 74,/* lineNo */
  42,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_g_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  98,                                  /* lineNo */
  10,                                  /* colNo */
  "BP_R",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_g_emlrtDCI = { 98,/* lineNo */
  10,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_h_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  98,                                  /* lineNo */
  28,                                  /* colNo */
  "BP_G",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_h_emlrtDCI = { 98,/* lineNo */
  28,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_i_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  98,                                  /* lineNo */
  46,                                  /* colNo */
  "BP_B",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c19_i_emlrtDCI = { 98,/* lineNo */
  46,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_j_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  49,                                  /* lineNo */
  10,                                  /* colNo */
  "Gray",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c19_j_emlrtDCI = { 49,/* lineNo */
  10,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_k_emlrtBCI = { 1,/* iFirst */
  1800,                                /* iLast */
  57,                                  /* lineNo */
  22,                                  /* colNo */
  "XYR",                               /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c19_k_emlrtDCI = { 57,/* lineNo */
  22,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_l_emlrtBCI = { 1,/* iFirst */
  1800,                                /* iLast */
  81,                                  /* lineNo */
  22,                                  /* colNo */
  "XYG",                               /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c19_l_emlrtDCI = { 81,/* lineNo */
  22,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c19_m_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  96,                                  /* lineNo */
  12,                                  /* colNo */
  "Gray",                              /* aName */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c19_m_emlrtDCI = { 96,/* lineNo */
  12,                                  /* colNo */
  "CAR_Main/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:656",             /* pName */
  1                                    /* checkKind */
};

static const char_T c19_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
  'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

static const char_T c19_cv1[12] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
  'm', 'e', 'm' };

/* Function Declarations */
static void initialize_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void initialize_params_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static void enable_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void disable_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c19_update_jit_animation_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static void c19_do_animation_call_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static void ext_mode_exec_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static void set_sim_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const mxArray *c19_st);
static void finalize_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void sf_gateway_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void mdl_start_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct *
  chartInstance);
static void c19_chartstep_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const emlrtStack *c19_sp);
static void initSimStructsc19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance);
static void c19_rgb2gray(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c19_X[10368000], real_T c19_I[3456000]);
static void c19_polyfit(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_p[6]);
static void c19_qrsolve(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_Y[6], int32_T *c19_rankR);
static void c19_xgeqp3(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_A[510], real_T c19_tau[6], int32_T
  c19_jpvt[6]);
static void c19_check_forloop_overflow_error
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const emlrtStack *c19_sp);
static int32_T c19_rankFromQR(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, real_T c19_A[510]);
static void c19_warning(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, int32_T c19_varargin_1, char_T c19_varargin_2[14]);
static void c19_LSQFromQR(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_A[510], real_T c19_tau[6], int32_T
  c19_jpvt[6], real_T c19_b_B[85], real_T c19_Y[6]);
static void c19_b_warning(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp);
static real_T c19_polyval(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c19_p[6], real_T c19_x);
static void c19_indexShapeCheck(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c19_eml_find(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, boolean_T c19_x[661821], c19_emxArray_int32_T *c19_i);
static void c19_b_indexShapeCheck(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c19_b_eml_find(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, boolean_T c19_x[277221], c19_emxArray_int32_T *c19_i);
static void c19_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_a__output_of_sprintf_, const char_T
  *c19_identifier, char_T c19_y[14]);
static void c19_b_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId,
  char_T c19_y[14]);
static real_T c19_c_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_b_Light_State, const char_T *c19_identifier);
static real_T c19_d_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static uint8_T c19_e_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_b_is_active_c19_Traffic_Light_cs, const
  char_T *c19_identifier);
static uint8_T c19_f_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId);
static const mxArray *c19_chart_data_browse_helper
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, int32_T c19_ssIdNumber);
static void c19_emxEnsureCapacity_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_real_T *c19_emxArray,
  int32_T c19_oldNumel, const emlrtRTEInfo *c19_srcLocation);
static void c19_emxInit_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_real_T **c19_pEmxArray,
  int32_T c19_numDimensions, const emlrtRTEInfo *c19_srcLocation);
static void c19_emxInit_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_int32_T **c19_pEmxArray,
  int32_T c19_numDimensions, const emlrtRTEInfo *c19_srcLocation);
static void c19_emxFree_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, c19_emxArray_real_T **c19_pEmxArray);
static void c19_emxFree_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, c19_emxArray_int32_T **c19_pEmxArray);
static void c19_emxEnsureCapacity_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_int32_T *c19_emxArray,
  int32_T c19_oldNumel, const emlrtRTEInfo *c19_srcLocation);
static void init_dsm_address_info(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c19_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c19_is_active_c19_Traffic_Light_cs = 0U;
}

static void initialize_params_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c19_update_jit_animation_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c19_do_animation_call_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  const mxArray *c19_st;
  const mxArray *c19_y = NULL;
  const mxArray *c19_b_y = NULL;
  const mxArray *c19_c_y = NULL;
  c19_st = NULL;
  c19_st = NULL;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_createcellmatrix(2, 1), false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", chartInstance->c19_Light_State, 0,
    0U, 0U, 0U, 0), false);
  sf_mex_setcell(c19_y, 0, c19_b_y);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y",
    &chartInstance->c19_is_active_c19_Traffic_Light_cs, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c19_y, 1, c19_c_y);
  sf_mex_assign(&c19_st, c19_y, false);
  return c19_st;
}

static void set_sim_state_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const mxArray *c19_st)
{
  const mxArray *c19_u;
  chartInstance->c19_doneDoubleBufferReInit = true;
  c19_u = sf_mex_dup(c19_st);
  *chartInstance->c19_Light_State = c19_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c19_u, 0)), "Light_State");
  chartInstance->c19_is_active_c19_Traffic_Light_cs = c19_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c19_u, 1)),
     "is_active_c19_Traffic_Light_cs");
  sf_mex_destroy(&c19_u);
  sf_mex_destroy(&c19_st);
}

static void finalize_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c19_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c19_covrtInstance);
}

static void sf_gateway_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  emlrtStack c19_st = { NULL,          /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c19_i;
  int32_T c19_i1;
  int32_T c19_i2;
  c19_st.tls = chartInstance->c19_fEmlrtCtx;
  chartInstance->c19_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c19_i = 0; c19_i < 3456000; c19_i++) {
    covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 3U, (real_T)
                      (*chartInstance->c19_B_Ori)[c19_i]);
  }

  for (c19_i1 = 0; c19_i1 < 3456000; c19_i1++) {
    covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 2U, (real_T)
                      (*chartInstance->c19_G_Ori)[c19_i1]);
  }

  for (c19_i2 = 0; c19_i2 < 3456000; c19_i2++) {
    covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 1U, (real_T)
                      (*chartInstance->c19_R_Ori)[c19_i2]);
  }

  covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 0U,
                    *chartInstance->c19_Dis);
  chartInstance->c19_sfEvent = CALL_EVENT;
  c19_chartstep_c19_Traffic_Light_cs(chartInstance, &c19_st);
  c19_do_animation_call_c19_Traffic_Light_cs(chartInstance);
  covrtSigUpdateFcn(chartInstance->c19_covrtInstance, 4U,
                    *chartInstance->c19_Light_State);
}

static void mdl_start_c19_Traffic_Light_cs(SFc19_Traffic_Light_csInstanceStruct *
  chartInstance)
{
  static const uint32_T c19_decisionTxtStartIdx = 0U;
  static const uint32_T c19_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c19_chart_data_browse_helper);
  chartInstance->c19_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c19_covrtInstance, 1U, 0U, 1U,
    131U);
  covrtChartInitFcn(chartInstance->c19_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c19_covrtInstance, 0U, 0U, false, false,
                    false, 0U, &c19_decisionTxtStartIdx, &c19_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c19_covrtInstance, 0U, 0, NULL, NULL, 0U,
                    NULL);
  covrtEmlInitFcn(chartInstance->c19_covrtInstance, "", 4U, 0U, 1U, 0U, 5U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 3199);
  covrtEmlIfInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 0U, 170, 180, 201,
                    3195);
  covrtEmlIfInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 1U, 1644, 1657, -1,
                    1684);
  covrtEmlIfInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 2U, 1756, 1794, -1,
                    1825);
  covrtEmlIfInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 3U, 2204, 2217, -1,
                    2244);
  covrtEmlIfInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 4U, 2316, 2354, -1,
                    2385);
  covrtEmlRelationalInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 0U, 173,
    180, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 1U, 1647,
    1657, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 2U, 1759,
    1794, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 3U, 2207,
    2217, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c19_covrtInstance, 4U, 0U, 4U, 2319,
    2354, -1, 5U);
}

static void c19_chartstep_c19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const emlrtStack *c19_sp)
{
  emlrtStack c19_st;
  emlrtStack c19_b_st;
  real_T c19_b_Dis;
  int32_T c19_i;
  int32_T c19_i1;
  int32_T c19_i2;
  int32_T c19_i3;
  int32_T c19_i4;
  int32_T c19_i5;
  int32_T c19_i6;
  int32_T c19_i7;
  int32_T c19_i8;
  real_T c19_b_Light_State;
  int32_T c19_i9;
  int32_T c19_i10;
  int32_T c19_i11;
  int32_T c19_i12;
  int32_T c19_i13;
  int32_T c19_i14;
  int32_T c19_i15;
  int32_T c19_i16;
  int32_T c19_i17;
  int32_T c19_i18;
  int32_T c19_i19;
  real_T c19_p[6];
  real_T c19_x;
  real_T c19_start;
  real_T c19_varargin_1;
  real_T c19_b_x;
  real_T c19_c_x;
  real_T c19_d_x;
  real_T c19_e_x;
  real_T c19_f_x;
  real_T c19_g_x;
  int32_T c19_i20;
  int32_T c19_i21;
  int32_T c19_i22;
  int32_T c19_trueCount;
  int32_T c19_b_i;
  c19_emxArray_real_T *c19_Mask;
  int32_T c19_i23;
  int32_T c19_partialTrueCount;
  int32_T c19_c_i;
  int32_T c19_b_trueCount;
  int32_T c19_d_i;
  real_T c19_d;
  int32_T c19_i24;
  int32_T c19_i25;
  int32_T c19_e_i;
  int32_T c19_c_trueCount;
  int32_T c19_f_i;
  real_T c19_d1;
  int32_T c19_i26;
  int32_T c19_i27;
  int32_T c19_g_i;
  int32_T c19_d_trueCount;
  int32_T c19_h_i;
  real_T c19_d2;
  int32_T c19_i28;
  int32_T c19_i29;
  int32_T c19_i_i;
  real_T c19_d3;
  int32_T c19_i30;
  int32_T c19_i31;
  int32_T c19_i32;
  int32_T c19_i33;
  real_T c19_d4;
  c19_emxArray_real_T *c19_r;
  int32_T c19_i34;
  c19_emxArray_int32_T *c19_ii;
  int32_T c19_i35;
  int32_T c19_loop_ub;
  int32_T c19_i36;
  int32_T c19_b_varargin_1;
  int32_T c19_c_varargin_1;
  real_T c19_n;
  int32_T c19_d_varargin_1;
  int32_T c19_e_varargin_1;
  real_T c19_b_n;
  int32_T c19_i37;
  int32_T c19_i38;
  int32_T c19_i39;
  int32_T c19_j_i;
  int32_T c19_k_i;
  int32_T c19_l_i;
  real_T c19_d5;
  int32_T c19_i40;
  int32_T c19_m_i;
  int32_T c19_n_i;
  real_T c19_d6;
  int32_T c19_i41;
  int32_T c19_o_i;
  real_T c19_d7;
  int32_T c19_i42;
  int32_T c19_i43;
  int32_T c19_i44;
  int32_T c19_i45;
  real_T c19_d8;
  c19_emxArray_real_T *c19_r1;
  int32_T c19_i46;
  c19_emxArray_int32_T *c19_b_ii;
  int32_T c19_i47;
  int32_T c19_b_loop_ub;
  int32_T c19_i48;
  int32_T c19_f_varargin_1;
  int32_T c19_g_varargin_1;
  real_T c19_c_n;
  int32_T c19_h_varargin_1;
  int32_T c19_i_varargin_1;
  real_T c19_d_n;
  int32_T c19_i49;
  int32_T c19_i50;
  int32_T c19_i51;
  int32_T c19_e_trueCount;
  int32_T c19_p_i;
  c19_emxArray_real_T *c19_Mask_B;
  int32_T c19_i52;
  int32_T c19_b_partialTrueCount;
  int32_T c19_q_i;
  int32_T c19_f_trueCount;
  int32_T c19_r_i;
  real_T c19_d9;
  int32_T c19_i53;
  int32_T c19_i54;
  int32_T c19_s_i;
  int32_T c19_g_trueCount;
  int32_T c19_t_i;
  real_T c19_d10;
  int32_T c19_i55;
  int32_T c19_i56;
  int32_T c19_u_i;
  int32_T c19_h_trueCount;
  int32_T c19_v_i;
  real_T c19_d11;
  int32_T c19_i57;
  int32_T c19_i58;
  int32_T c19_w_i;
  real_T c19_d12;
  int32_T c19_i59;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_b_st.prev = &c19_st;
  c19_b_st.tls = c19_st.tls;
  c19_b_Dis = *chartInstance->c19_Dis;
  covrtEmlFcnEval(chartInstance->c19_covrtInstance, 4U, 0, 0);
  for (c19_i = 0; c19_i < 10368000; c19_i++) {
    chartInstance->c19_Image[c19_i] = 0.0;
  }

  c19_i1 = 0;
  for (c19_i2 = 0; c19_i2 < 1920; c19_i2++) {
    for (c19_i4 = 0; c19_i4 < 1800; c19_i4++) {
      chartInstance->c19_Image[c19_i4 + c19_i1] = (real_T)
        (*chartInstance->c19_R_Ori)[c19_i4 + c19_i1];
    }

    c19_i1 += 1800;
  }

  c19_i3 = 0;
  for (c19_i5 = 0; c19_i5 < 1920; c19_i5++) {
    for (c19_i7 = 0; c19_i7 < 1800; c19_i7++) {
      chartInstance->c19_Image[(c19_i7 + c19_i3) + 3456000] = (real_T)
        (*chartInstance->c19_G_Ori)[c19_i7 + c19_i3];
    }

    c19_i3 += 1800;
  }

  c19_i6 = 0;
  for (c19_i8 = 0; c19_i8 < 1920; c19_i8++) {
    for (c19_i9 = 0; c19_i9 < 1800; c19_i9++) {
      chartInstance->c19_Image[(c19_i9 + c19_i6) + 6912000] = (real_T)
        (*chartInstance->c19_B_Ori)[c19_i9 + c19_i6];
    }

    c19_i6 += 1800;
  }

  c19_b_Light_State = -1.0;
  if (!covrtEmlIfEval(chartInstance->c19_covrtInstance, 4U, 0, 0,
                      covrtRelationalopUpdateFcn
                      (chartInstance->c19_covrtInstance, 4U, 0U, 0U, c19_b_Dis,
                       75.0, -1, 5U, c19_b_Dis >= 75.0))) {
    for (c19_i10 = 0; c19_i10 < 10368000; c19_i10++) {
      chartInstance->c19_b_Image[c19_i10] = chartInstance->c19_Image[c19_i10];
    }

    c19_st.site = &c19_emlrtRSI;
    c19_rgb2gray(chartInstance, chartInstance->c19_b_Image,
                 chartInstance->c19_Gray);
    c19_i11 = 0;
    for (c19_i12 = 0; c19_i12 < 1920; c19_i12++) {
      for (c19_i14 = 0; c19_i14 < 1800; c19_i14++) {
        chartInstance->c19_R[c19_i14 + c19_i11] = chartInstance->
          c19_Image[c19_i14 + c19_i11];
      }

      c19_i11 += 1800;
    }

    c19_i13 = 0;
    for (c19_i15 = 0; c19_i15 < 1920; c19_i15++) {
      for (c19_i17 = 0; c19_i17 < 1800; c19_i17++) {
        chartInstance->c19_G[c19_i17 + c19_i13] = chartInstance->c19_Image
          [(c19_i17 + c19_i13) + 3456000];
      }

      c19_i13 += 1800;
    }

    c19_i16 = 0;
    for (c19_i18 = 0; c19_i18 < 1920; c19_i18++) {
      for (c19_i19 = 0; c19_i19 < 1800; c19_i19++) {
        chartInstance->c19_B[c19_i19 + c19_i16] = chartInstance->c19_Image
          [(c19_i19 + c19_i16) + 6912000];
      }

      c19_i16 += 1800;
    }

    c19_st.site = &c19_b_emlrtRSI;
    c19_polyfit(chartInstance, &c19_st, c19_p);
    c19_x = c19_polyval(chartInstance, c19_p, c19_b_Dis);
    c19_start = c19_x;
    c19_start = muDoubleScalarCeil(c19_start);
    c19_varargin_1 = c19_start - 50.0;
    c19_b_x = c19_varargin_1;
    c19_c_x = c19_b_x;
    c19_d_x = c19_c_x;
    c19_e_x = c19_d_x;
    c19_f_x = c19_e_x;
    c19_g_x = c19_f_x;
    c19_start = muDoubleScalarMax(c19_g_x, 1.0);
    for (c19_i20 = 0; c19_i20 < 3456000; c19_i20++) {
      chartInstance->c19_XYR[c19_i20] = (chartInstance->c19_R[c19_i20] -
        chartInstance->c19_G[c19_i20] > 80.0);
    }

    for (c19_i21 = 0; c19_i21 < 3456000; c19_i21++) {
      chartInstance->c19_bv[c19_i21] = (chartInstance->c19_R[c19_i21] -
        chartInstance->c19_B[c19_i21] > 80.0);
    }

    for (c19_i22 = 0; c19_i22 < 3456000; c19_i22++) {
      chartInstance->c19_XYR[c19_i22] = ((!chartInstance->c19_XYR[c19_i22]) || (
        !chartInstance->c19_bv[c19_i22]));
    }

    c19_trueCount = 0;
    c19_b_i = 0;
    while (c19_b_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_b_i]) {
        c19_trueCount++;
      }

      c19_b_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_emxInit_real_T(chartInstance, c19_sp, &c19_Mask, 1, &c19_c_emlrtRTEI);
    c19_i23 = c19_Mask->size[0];
    c19_Mask->size[0] = c19_trueCount;
    c19_emxEnsureCapacity_real_T(chartInstance, c19_sp, c19_Mask, c19_i23,
      (emlrtRTEInfo *)NULL);
    c19_partialTrueCount = 0;
    c19_c_i = 0;
    while (c19_c_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_c_i]) {
        c19_d = (real_T)(c19_c_i + 1);
        c19_i24 = (int32_T)emlrtIntegerCheckR2012b(c19_d, &c19_j_emlrtDCI,
          c19_sp);
        c19_Mask->data[c19_partialTrueCount] = chartInstance->
          c19_Gray[emlrtDynamicBoundsCheckR2012b(c19_i24, 1, 3456000,
          &c19_j_emlrtBCI, c19_sp) - 1];
        c19_partialTrueCount++;
      }

      c19_c_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_b_trueCount = 0;
    c19_d_i = 0;
    while (c19_d_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_d_i]) {
        c19_b_trueCount++;
      }

      c19_d_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i25 = c19_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_b_trueCount, c19_i25, &c19_emlrtECI,
      c19_sp);
    c19_e_i = 0;
    while (c19_e_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_e_i]) {
        c19_d1 = (real_T)(c19_e_i + 1);
        c19_i26 = (int32_T)emlrtIntegerCheckR2012b(c19_d1, &c19_emlrtDCI, c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i26, 1, 3456000, &c19_emlrtBCI, c19_sp);
      }

      c19_e_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_c_trueCount = 0;
    c19_f_i = 0;
    while (c19_f_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_f_i]) {
        c19_c_trueCount++;
      }

      c19_f_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i27 = c19_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_c_trueCount, c19_i27, &c19_b_emlrtECI,
      c19_sp);
    c19_g_i = 0;
    while (c19_g_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_g_i]) {
        c19_d2 = (real_T)(c19_g_i + 1);
        c19_i28 = (int32_T)emlrtIntegerCheckR2012b(c19_d2, &c19_b_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i28, 1, 3456000, &c19_b_emlrtBCI,
          c19_sp);
      }

      c19_g_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_d_trueCount = 0;
    c19_h_i = 0;
    while (c19_h_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_h_i]) {
        c19_d_trueCount++;
      }

      c19_h_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i29 = c19_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_d_trueCount, c19_i29, &c19_c_emlrtECI,
      c19_sp);
    c19_i_i = 0;
    c19_emxFree_real_T(chartInstance, &c19_Mask);
    while (c19_i_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_i_i]) {
        c19_d3 = (real_T)(c19_i_i + 1);
        c19_i31 = (int32_T)emlrtIntegerCheckR2012b(c19_d3, &c19_c_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i31, 1, 3456000, &c19_c_emlrtBCI,
          c19_sp);
      }

      c19_i_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    if (covrtEmlIfEval(chartInstance->c19_covrtInstance, 4U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c19_covrtInstance, 4U, 0U, 1U, c19_start,
                        300.0, -1, 3U, c19_start <= 300.0))) {
      c19_start = 310.0;
    }

    for (c19_i30 = 0; c19_i30 < 1321; c19_i30++) {
      for (c19_i32 = 0; c19_i32 < 501; c19_i32++) {
        c19_d4 = c19_start + (real_T)(int32_T)(-300.0 + (real_T)c19_i32);
        c19_i34 = (int32_T)emlrtIntegerCheckR2012b(c19_d4, &c19_k_emlrtDCI,
          c19_sp);
        chartInstance->c19_SearchRangeR[c19_i32 + 501 * c19_i30] =
          chartInstance->c19_XYR[(emlrtDynamicBoundsCheckR2012b(c19_i34, 1, 1800,
          &c19_k_emlrtBCI, c19_sp) + 1800 * (299 + c19_i30)) - 1];
      }
    }

    c19_st.site = &c19_c_emlrtRSI;
    for (c19_i33 = 0; c19_i33 < 661821; c19_i33++) {
      chartInstance->c19_SearchRangeR[c19_i33] =
        !chartInstance->c19_SearchRangeR[c19_i33];
    }

    c19_emxInit_real_T(chartInstance, &c19_st, &c19_r, 1, (emlrtRTEInfo *)NULL);
    c19_emxInit_int32_T(chartInstance, &c19_st, &c19_ii, 1, &c19_e_emlrtRTEI);
    c19_b_st.site = &c19_bc_emlrtRSI;
    c19_eml_find(chartInstance, &c19_b_st, chartInstance->c19_SearchRangeR,
                 c19_ii);
    c19_i35 = c19_r->size[0];
    c19_r->size[0] = c19_ii->size[0];
    c19_emxEnsureCapacity_real_T(chartInstance, &c19_st, c19_r, c19_i35,
      &c19_emlrtRTEI);
    c19_loop_ub = c19_ii->size[0] - 1;
    for (c19_i36 = 0; c19_i36 <= c19_loop_ub; c19_i36++) {
      c19_r->data[c19_i36] = (real_T)c19_ii->data[c19_i36];
    }

    c19_emxFree_int32_T(chartInstance, &c19_ii);
    c19_b_varargin_1 = c19_r->size[0];
    c19_c_varargin_1 = c19_b_varargin_1;
    c19_n = (real_T)c19_c_varargin_1;
    c19_d_varargin_1 = c19_r->size[0];
    c19_e_varargin_1 = c19_d_varargin_1;
    c19_b_n = (real_T)c19_e_varargin_1;
    c19_emxFree_real_T(chartInstance, &c19_r);
    if (covrtEmlIfEval(chartInstance->c19_covrtInstance, 4U, 0, 2,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c19_covrtInstance, 4U, 0U, 2U, c19_n,
                        50.0, -1, 5U, c19_b_n >= 50.0))) {
      c19_b_Light_State = 1.0;
    }

    for (c19_i37 = 0; c19_i37 < 3456000; c19_i37++) {
      chartInstance->c19_XYR[c19_i37] = (chartInstance->c19_G[c19_i37] -
        chartInstance->c19_R[c19_i37] > 30.0);
    }

    for (c19_i38 = 0; c19_i38 < 3456000; c19_i38++) {
      chartInstance->c19_bv[c19_i38] = (chartInstance->c19_G[c19_i38] -
        chartInstance->c19_B[c19_i38] > 30.0);
    }

    for (c19_i39 = 0; c19_i39 < 3456000; c19_i39++) {
      chartInstance->c19_XYR[c19_i39] = ((!chartInstance->c19_XYR[c19_i39]) || (
        !chartInstance->c19_bv[c19_i39]));
    }

    c19_j_i = 0;
    while (c19_j_i <= 3455999) {
      c19_j_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_k_i = 0;
    while (c19_k_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_k_i]) {
        c19_d5 = (real_T)(c19_k_i + 1);
        c19_i40 = (int32_T)emlrtIntegerCheckR2012b(c19_d5, &c19_d_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i40, 1, 3456000, &c19_d_emlrtBCI,
          c19_sp);
      }

      c19_k_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_l_i = 0;
    while (c19_l_i <= 3455999) {
      c19_l_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_m_i = 0;
    while (c19_m_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_m_i]) {
        c19_d6 = (real_T)(c19_m_i + 1);
        c19_i41 = (int32_T)emlrtIntegerCheckR2012b(c19_d6, &c19_e_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i41, 1, 3456000, &c19_e_emlrtBCI,
          c19_sp);
      }

      c19_m_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_n_i = 0;
    while (c19_n_i <= 3455999) {
      c19_n_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_o_i = 0;
    while (c19_o_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_o_i]) {
        c19_d7 = (real_T)(c19_o_i + 1);
        c19_i43 = (int32_T)emlrtIntegerCheckR2012b(c19_d7, &c19_f_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i43, 1, 3456000, &c19_f_emlrtBCI,
          c19_sp);
      }

      c19_o_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    if (covrtEmlIfEval(chartInstance->c19_covrtInstance, 4U, 0, 3,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c19_covrtInstance, 4U, 0U, 3U, c19_start,
                        100.0, -1, 3U, c19_start <= 100.0))) {
      c19_start = 110.0;
    }

    for (c19_i42 = 0; c19_i42 < 921; c19_i42++) {
      for (c19_i44 = 0; c19_i44 < 301; c19_i44++) {
        c19_d8 = c19_start + (real_T)(int32_T)(-100.0 + (real_T)c19_i44);
        c19_i46 = (int32_T)emlrtIntegerCheckR2012b(c19_d8, &c19_l_emlrtDCI,
          c19_sp);
        chartInstance->c19_SearchRangeG[c19_i44 + 301 * c19_i42] =
          chartInstance->c19_XYR[(emlrtDynamicBoundsCheckR2012b(c19_i46, 1, 1800,
          &c19_l_emlrtBCI, c19_sp) + 1800 * (499 + c19_i42)) - 1];
      }
    }

    c19_st.site = &c19_d_emlrtRSI;
    for (c19_i45 = 0; c19_i45 < 277221; c19_i45++) {
      chartInstance->c19_SearchRangeG[c19_i45] =
        !chartInstance->c19_SearchRangeG[c19_i45];
    }

    c19_emxInit_real_T(chartInstance, &c19_st, &c19_r1, 1, (emlrtRTEInfo *)NULL);
    c19_emxInit_int32_T(chartInstance, &c19_st, &c19_b_ii, 1, &c19_e_emlrtRTEI);
    c19_b_st.site = &c19_bc_emlrtRSI;
    c19_b_eml_find(chartInstance, &c19_b_st, chartInstance->c19_SearchRangeG,
                   c19_b_ii);
    c19_i47 = c19_r1->size[0];
    c19_r1->size[0] = c19_b_ii->size[0];
    c19_emxEnsureCapacity_real_T(chartInstance, &c19_st, c19_r1, c19_i47,
      &c19_b_emlrtRTEI);
    c19_b_loop_ub = c19_b_ii->size[0] - 1;
    for (c19_i48 = 0; c19_i48 <= c19_b_loop_ub; c19_i48++) {
      c19_r1->data[c19_i48] = (real_T)c19_b_ii->data[c19_i48];
    }

    c19_emxFree_int32_T(chartInstance, &c19_b_ii);
    c19_f_varargin_1 = c19_r1->size[0];
    c19_g_varargin_1 = c19_f_varargin_1;
    c19_c_n = (real_T)c19_g_varargin_1;
    c19_h_varargin_1 = c19_r1->size[0];
    c19_i_varargin_1 = c19_h_varargin_1;
    c19_d_n = (real_T)c19_i_varargin_1;
    c19_emxFree_real_T(chartInstance, &c19_r1);
    if (covrtEmlIfEval(chartInstance->c19_covrtInstance, 4U, 0, 4,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c19_covrtInstance, 4U, 0U, 4U, c19_c_n,
                        50.0, -1, 5U, c19_d_n >= 50.0))) {
      c19_b_Light_State = 2.0;
    }

    for (c19_i49 = 0; c19_i49 < 3456000; c19_i49++) {
      chartInstance->c19_XYR[c19_i49] = (chartInstance->c19_B[c19_i49] -
        chartInstance->c19_R[c19_i49] > 10.0);
    }

    for (c19_i50 = 0; c19_i50 < 3456000; c19_i50++) {
      chartInstance->c19_bv[c19_i50] = (chartInstance->c19_B[c19_i50] -
        chartInstance->c19_G[c19_i50] > 10.0);
    }

    for (c19_i51 = 0; c19_i51 < 3456000; c19_i51++) {
      chartInstance->c19_XYR[c19_i51] = ((!chartInstance->c19_XYR[c19_i51]) || (
        !chartInstance->c19_bv[c19_i51]));
    }

    c19_e_trueCount = 0;
    c19_p_i = 0;
    while (c19_p_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_p_i]) {
        c19_e_trueCount++;
      }

      c19_p_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_emxInit_real_T(chartInstance, c19_sp, &c19_Mask_B, 1, &c19_d_emlrtRTEI);
    c19_i52 = c19_Mask_B->size[0];
    c19_Mask_B->size[0] = c19_e_trueCount;
    c19_emxEnsureCapacity_real_T(chartInstance, c19_sp, c19_Mask_B, c19_i52,
      (emlrtRTEInfo *)NULL);
    c19_b_partialTrueCount = 0;
    c19_q_i = 0;
    while (c19_q_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_q_i]) {
        c19_d9 = (real_T)(c19_q_i + 1);
        c19_i53 = (int32_T)emlrtIntegerCheckR2012b(c19_d9, &c19_m_emlrtDCI,
          c19_sp);
        c19_Mask_B->data[c19_b_partialTrueCount] = chartInstance->
          c19_Gray[emlrtDynamicBoundsCheckR2012b(c19_i53, 1, 3456000,
          &c19_m_emlrtBCI, c19_sp) - 1];
        c19_b_partialTrueCount++;
      }

      c19_q_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_f_trueCount = 0;
    c19_r_i = 0;
    while (c19_r_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_r_i]) {
        c19_f_trueCount++;
      }

      c19_r_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i54 = c19_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_f_trueCount, c19_i54, &c19_d_emlrtECI,
      c19_sp);
    c19_s_i = 0;
    while (c19_s_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_s_i]) {
        c19_d10 = (real_T)(c19_s_i + 1);
        c19_i55 = (int32_T)emlrtIntegerCheckR2012b(c19_d10, &c19_g_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i55, 1, 3456000, &c19_g_emlrtBCI,
          c19_sp);
      }

      c19_s_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_g_trueCount = 0;
    c19_t_i = 0;
    while (c19_t_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_t_i]) {
        c19_g_trueCount++;
      }

      c19_t_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i56 = c19_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_g_trueCount, c19_i56, &c19_e_emlrtECI,
      c19_sp);
    c19_u_i = 0;
    while (c19_u_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_u_i]) {
        c19_d11 = (real_T)(c19_u_i + 1);
        c19_i57 = (int32_T)emlrtIntegerCheckR2012b(c19_d11, &c19_h_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i57, 1, 3456000, &c19_h_emlrtBCI,
          c19_sp);
      }

      c19_u_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_h_trueCount = 0;
    c19_v_i = 0;
    while (c19_v_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_v_i]) {
        c19_h_trueCount++;
      }

      c19_v_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c19_i58 = c19_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c19_h_trueCount, c19_i58, &c19_f_emlrtECI,
      c19_sp);
    c19_w_i = 0;
    c19_emxFree_real_T(chartInstance, &c19_Mask_B);
    while (c19_w_i <= 3455999) {
      if (chartInstance->c19_XYR[c19_w_i]) {
        c19_d12 = (real_T)(c19_w_i + 1);
        c19_i59 = (int32_T)emlrtIntegerCheckR2012b(c19_d12, &c19_i_emlrtDCI,
          c19_sp);
        emlrtDynamicBoundsCheckR2012b(c19_i59, 1, 3456000, &c19_i_emlrtBCI,
          c19_sp);
      }

      c19_w_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  }

  *chartInstance->c19_Light_State = c19_b_Light_State;
}

static void initSimStructsc19_Traffic_Light_cs
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c19_Traffic_Light_cs_get_eml_resolved_functions_info(void)
{
  const mxArray *c19_nameCaptureInfo = NULL;
  c19_nameCaptureInfo = NULL;
  sf_mex_assign(&c19_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c19_nameCaptureInfo;
}

static void c19_rgb2gray(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c19_X[10368000], real_T c19_I[3456000])
{
  (void)chartInstance;
  rgb2gray_tbb_real64(c19_X, 3.456E+6, c19_I, true);
}

static void c19_polyfit(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_p[6])
{
  emlrtStack c19_st;
  int32_T c19_rr;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_st.site = &c19_g_emlrtRSI;
  c19_qrsolve(chartInstance, &c19_st, c19_p, &c19_rr);
  if (c19_rr <= 5) {
    c19_st.site = &c19_h_emlrtRSI;
    c19_b_warning(chartInstance, &c19_st);
  }
}

static void c19_qrsolve(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_Y[6], int32_T *c19_rankR)
{
  emlrtStack c19_st;
  real_T c19_A[510];
  real_T c19_tau[6];
  int32_T c19_jpvt[6];
  int32_T c19_i;
  real_T c19_b_A[510];
  int32_T c19_i1;
  real_T c19_dv[85];
  static real_T c19_dv1[85] = { 765.0, 762.0, 760.0, 759.0, 758.0, 756.0, 755.0,
    753.0, 751.0, 750.0, 748.0, 746.0, 744.0, 743.0, 742.0, 740.0, 738.0, 737.0,
    734.0, 732.0, 731.0, 729.0, 727.0, 725.0, 722.0, 720.0, 718.0, 716.0, 712.0,
    711.0, 707.0, 705.0, 702.0, 700.0, 695.0, 694.0, 690.0, 687.0, 682.0, 680.0,
    678.0, 671.0, 670.0, 666.0, 663.0, 656.0, 653.0, 650.0, 646.0, 640.0, 636.0,
    631.0, 627.0, 621.0, 616.0, 608.0, 602.0, 597.0, 592.0, 587.0, 577.0, 570.0,
    562.0, 551.0, 544.0, 536.0, 528.0, 516.0, 505.0, 495.0, 483.0, 473.0, 459.0,
    443.0, 429.0, 413.0, 395.0, 379.0, 358.0, 336.0, 312.0, 289.0, 262.0, 242.0,
    202.0 };

  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_st.site = &c19_i_emlrtRSI;
  c19_xgeqp3(chartInstance, &c19_st, c19_A, c19_tau, c19_jpvt);
  for (c19_i = 0; c19_i < 510; c19_i++) {
    c19_b_A[c19_i] = c19_A[c19_i];
  }

  c19_st.site = &c19_j_emlrtRSI;
  *c19_rankR = c19_rankFromQR(chartInstance, &c19_st, c19_b_A);
  for (c19_i1 = 0; c19_i1 < 85; c19_i1++) {
    c19_dv[c19_i1] = c19_dv1[c19_i1];
  }

  c19_st.site = &c19_k_emlrtRSI;
  c19_LSQFromQR(chartInstance, &c19_st, c19_A, c19_tau, c19_jpvt, c19_dv, c19_Y);
}

static void c19_xgeqp3(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_A[510], real_T c19_tau[6], int32_T
  c19_jpvt[6])
{
  emlrtStack c19_st;
  emlrtStack c19_b_st;
  int32_T c19_i;
  int32_T c19_i1;
  static real_T c19_b_A[510] = { 2.373046875E+9, 2.2643526711194296E+9,
    2.1596783352217593E+9, 2.0589113209464908E+9, 1.9619412024963202E+9,
    1.86865965446875E+9, 1.7789604316876798E+9, 1.6927393490350094E+9,
    1.6098942612822406E+9, 1.5303250429220703E+9, 1.453933568E+9,
    1.38062368994593E+9, 1.3103012214057593E+9, 1.2428739140729904E+9,
    1.1782514385203202E+9, 1.11634536403125E+9, 1.0570691384316797E+9,
    1.0003380679215101E+9, 9.4606929690623987E+8, 8.9418178782857025E+8,
    8.44596301E+8, 7.9723537443242979E+8, 7.5202330366976011E+8,
    7.0888612161949027E+8, 6.6775157838432E+8, 6.2854912109375E+8,
    5.9120987373567986E+8, 5.5566661698801E+8, 5.2185376805024034E+8,
    4.8970736047507E+8, 4.59165024E+8, 4.3016596437892991E+8, 4.0265094321376E+8,
    3.7656225778599024E+8, 3.5184372088832015E+8, 3.2844064065625E+8,
    3.0629980039967984E+8, 2.8536943843451005E+8, 2.6559922791424018E+8,
    2.4694025666157007E+8, 2.29345007E+8, 2.1276733558542991E+8,
    1.9716245323776004E+8, 1.8248690477249011E+8, 1.6869854883232006E+8,
    1.5575653771875E+8, 1.4362129722367993E+8, 1.3225450646101002E+8,
    1.2161907769824009E+8, 1.1167913618807003E+8, 1.024E+8,
    9.3748159851929963E+7, 8.5691258941760018E+7, 7.819807277899006E+7,
    7.1238489016320035E+7, 6.478348728125E+7, 5.8805119007679984E+7,
    5.3276487267510004E+7, 4.8171726602240033E+7, 4.3465982854570024E+7,
    3.9135393E+7, 3.5157064978429973E+7, 3.1509057525760006E+7,
    2.8170360005490012E+7, 2.5120872240320012E+7, 2.234138434375E+7,
    1.9813556551680014E+7, 1.7519899054010004E+7, 1.5443751826240007E+7,
    1.3569264461070007E+7, 1.1881376E+7, 1.0365794764930008E+7,
    9.0089781897600032E+6, 7.7981126519900048E+6, 6.7210933043200048E+6,
    5.7665039062500047E+6, 4.9235966556800045E+6, 4.1822720205100006E+6,
    3.5330585702400021E+6, 2.967092807570002E+6, 2.4760990000000023E+6,
    2.0523690114300025E+6, 1.6887421337600008E+6, 1.378584918490001E+6,
    1.1157710083200012E+6, 3.1640625E+7, 3.0475809840099994E+7,
    2.934345564159999E+7, 2.8242953648100007E+7, 2.71737008656E+7,
    2.61351000625E+7, 2.5126559769599997E+7, 2.4147494280099992E+7,
    2.3197323649600007E+7, 2.2275473696100004E+7, 2.1381376E+7, 2.05144679041E+7,
    1.9674192513599992E+7, 1.8859998696100004E+7, 1.8071341081600003E+7,
    1.73076800625E+7, 1.6568481793599997E+7, 1.5853218192100001E+7,
    1.5161366937599998E+7, 1.4492411472100003E+7, 1.3845841E+7,
    1.3221150488099998E+7, 1.2617840665600002E+7, 1.2035418024100004E+7,
    1.14733948176E+7, 1.09312890625E+7, 1.0408624537599998E+7, 9.9049307841E+6,
    9.419743105600005E+6, 8.9526025681E+6, 8.503056E+6, 8.0706559920999985E+6,
    7.6549608976E+6, 7.255534832100004E+6, 6.8719476736000022E+6,
    6.5037750625E+6, 6.1505984015999977E+6, 5.8120048561E+6,
    5.4875873536000028E+6, 5.1769445841000015E+6, 4.879681E+6,
    4.5954068160999985E+6, 4.3237380096E+6, 4.064296320100002E+6,
    3.8167092496000011E+6, 3.5806100625E+6, 3.3556377855999987E+6,
    3.1414372081000004E+6, 2.9376588816000018E+6, 2.7439591201000004E+6, 2.56E+6,
    2.3854493600999992E+6, 2.2199808016000004E+6, 2.0632736881000013E+6,
    1.9150131456000006E+6, 1.7748900625E+6, 1.6426010895999996E+6,
    1.5178486401E+6, 1.4003408896000008E+6, 1.2897917761000006E+6, 1.185921E+6,
    1.0884540240999993E+6, 997122.07360000012, 911662.13610000035,
    831816.96160000027, 757335.0625, 687970.71360000037, 623483.95210000011,
    563640.57760000019, 508212.15210000018, 456976.0, 409715.20810000028,
    366218.62560000009, 326280.86410000018, 289702.29760000017,
    256289.06250000017, 225853.05760000017, 198211.94410000002,
    173189.14560000008, 150613.84810000009, 130321.00000000009,
    112151.31210000011, 95951.257600000041, 81573.072100000049,
    68874.753600000055, 421875.0, 410172.40699999995, 398688.25599999988,
    387420.48900000006, 376367.048, 365525.875, 354894.91199999995,
    344472.10099999991, 334255.38400000008, 324242.70300000004, 314432.0,
    304821.217, 295408.29599999991, 286191.17900000006, 277167.808, 268336.125,
    259694.07199999996, 251239.59100000001, 242970.62399999998,
    234885.11300000004, 226981.0, 219256.22699999998, 211708.73600000003,
    204336.46900000004, 197137.36800000002, 190109.375, 183250.43199999997,
    176558.481, 170031.46400000007, 163667.323, 157464.0, 151419.43699999998,
    145531.576, 139798.35900000005, 134217.72800000003, 128787.625,
    123505.99199999997, 118370.77100000001, 113379.90400000004,
    108531.33300000003, 103823.0, 99252.84699999998, 94818.816,
    90518.849000000031, 86350.888000000021, 82312.875, 78402.751999999979,
    74618.46100000001, 70957.944000000032, 67419.143000000011, 64000.0,
    60698.456999999988, 57512.456000000006, 54439.939000000028,
    51478.848000000013, 48627.125, 45882.711999999992, 43243.551,
    40707.584000000017, 38272.753000000012, 35937.0, 33698.266999999985,
    31554.496000000003, 29503.629000000008, 27543.608000000007, 25672.375,
    23887.87200000001, 22188.041000000005, 20570.824000000004,
    19034.163000000004, 17576.0, 16194.277000000009, 14886.936000000003,
    13651.919000000005, 12487.168000000005, 11390.625000000005,
    10360.232000000005, 9393.931, 8489.6640000000025, 7645.3730000000032,
    6859.0000000000036, 6128.4870000000046, 5451.7760000000017,
    4826.809000000002, 4251.528000000003, 5625.0, 5520.49, 5416.9599999999991,
    5314.4100000000008, 5212.84, 5112.25, 5012.6399999999994, 4914.0099999999993,
    4816.3600000000006, 4719.6900000000005, 4624.0, 4529.29, 4435.5599999999995,
    4342.81, 4251.04, 4160.25, 4070.4399999999996, 3981.61, 3893.7599999999998,
    3806.8900000000003, 3721.0, 3636.0899999999997, 3552.1600000000003,
    3469.2100000000005, 3387.2400000000002, 3306.25, 3226.24, 3147.21,
    3069.1600000000008, 2992.09, 2916.0, 2840.89, 2766.76, 2693.6100000000006,
    2621.4400000000005, 2550.25, 2480.0399999999995, 2410.81, 2342.5600000000004,
    2275.2900000000004, 2209.0, 2143.6899999999996, 2079.36, 2016.0100000000004,
    1953.6400000000003, 1892.25, 1831.8399999999997, 1772.41, 1713.9600000000005,
    1656.4900000000002, 1600.0, 1544.4899999999998, 1489.96, 1436.4100000000005,
    1383.8400000000001, 1332.25, 1281.6399999999999, 1232.01, 1183.3600000000004,
    1135.6900000000003, 1089.0, 1043.2899999999997, 998.56000000000006,
    954.81000000000017, 912.04000000000019, 870.25, 829.44000000000028,
    789.61000000000013, 750.7600000000001, 712.8900000000001, 676.0,
    640.09000000000026, 605.16000000000008, 571.21000000000015,
    538.24000000000012, 506.25000000000017, 475.24000000000018,
    445.21000000000004, 416.16000000000008, 388.09000000000009,
    361.00000000000011, 334.89000000000016, 309.76000000000005,
    285.61000000000007, 262.44000000000011, 75.0, 74.3, 73.6, 72.9, 72.2, 71.5,
    70.8, 70.1, 69.4, 68.7, 68.0, 67.3, 66.6, 65.9, 65.2, 64.5, 63.8, 63.1, 62.4,
    61.7, 61.0, 60.3, 59.6, 58.900000000000006, 58.2, 57.5, 56.8, 56.1,
    55.400000000000006, 54.7, 54.0, 53.3, 52.6, 51.900000000000006, 51.2, 50.5,
    49.8, 49.1, 48.400000000000006, 47.7, 47.0, 46.3, 45.6, 44.900000000000006,
    44.2, 43.5, 42.8, 42.1, 41.400000000000006, 40.7, 40.0, 39.3, 38.6,
    37.900000000000006, 37.2, 36.5, 35.8, 35.1, 34.400000000000006, 33.7, 33.0,
    32.3, 31.6, 30.900000000000002, 30.200000000000003, 29.5, 28.800000000000004,
    28.1, 27.400000000000002, 26.700000000000003, 26.0, 25.300000000000004, 24.6,
    23.900000000000002, 23.200000000000003, 22.500000000000004,
    21.800000000000004, 21.1, 20.400000000000002, 19.700000000000003,
    19.000000000000004, 18.300000000000004, 17.6, 16.900000000000002,
    16.200000000000003, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
    1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

  ptrdiff_t c19_lda_t;
  ptrdiff_t c19_jpvt_t[6];
  ptrdiff_t c19_m_t;
  ptrdiff_t c19_n_t;
  ptrdiff_t c19_info_t;
  int32_T c19_info;
  int32_T c19_b_info;
  int32_T c19_c_info;
  boolean_T c19_p;
  boolean_T c19_b_p;
  int32_T c19_val;
  boolean_T c19_c_p;
  int32_T c19_k;
  int32_T c19_j;
  int32_T c19_b_k;
  int32_T c19_c_k;
  int32_T c19_b_j;
  int32_T c19_b_i;
  int32_T c19_d_k;
  const mxArray *c19_y = NULL;
  const mxArray *c19_b_y = NULL;
  int32_T c19_c_i;
  const mxArray *c19_c_y = NULL;
  const mxArray *c19_d_y = NULL;
  const mxArray *c19_e_y = NULL;
  static char_T c19_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'g', 'e', 'q', 'p', '3' };

  const mxArray *c19_f_y = NULL;
  (void)chartInstance;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_b_st.prev = &c19_st;
  c19_b_st.tls = c19_st.tls;
  c19_st.site = &c19_l_emlrtRSI;
  for (c19_i = 0; c19_i < 510; c19_i++) {
    c19_A[c19_i] = c19_b_A[c19_i];
  }

  for (c19_i1 = 0; c19_i1 < 6; c19_i1++) {
    c19_jpvt_t[c19_i1] = (ptrdiff_t)0;
  }

  c19_lda_t = (ptrdiff_t)85;
  c19_m_t = (ptrdiff_t)85;
  c19_n_t = (ptrdiff_t)6;
  c19_info_t = LAPACKE_dgeqp3(102, c19_m_t, c19_n_t, &c19_A[0], c19_lda_t,
    &c19_jpvt_t[0], &c19_tau[0]);
  c19_info = (int32_T)c19_info_t;
  c19_b_st.site = &c19_f_emlrtRSI;
  c19_b_info = c19_info;
  c19_c_info = c19_b_info;
  c19_p = (c19_c_info != 0);
  if (c19_p) {
    c19_b_p = true;
    c19_val = c19_b_info;
    c19_c_p = false;
    if (c19_val == -4) {
      c19_c_p = true;
    }

    if (!c19_c_p) {
      if (c19_b_info == -1010) {
        c19_b_y = NULL;
        sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        c19_d_y = NULL;
        sf_mex_assign(&c19_d_y, sf_mex_create("y", c19_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        sf_mex_call(&c19_b_st, "error", 0U, 2U, 14, c19_b_y, 14, sf_mex_call
                    (&c19_b_st, "getString", 1U, 1U, 14, sf_mex_call(&c19_b_st,
          "message", 1U, 1U, 14, c19_d_y)));
      } else {
        c19_y = NULL;
        sf_mex_assign(&c19_y, sf_mex_create("y", c19_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c19_c_y = NULL;
        sf_mex_assign(&c19_c_y, sf_mex_create("y", c19_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c19_e_y = NULL;
        sf_mex_assign(&c19_e_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2,
          1, 14), false);
        c19_f_y = NULL;
        sf_mex_assign(&c19_f_y, sf_mex_create("y", &c19_b_info, 6, 0U, 0U, 0U, 0),
                      false);
        sf_mex_call(&c19_b_st, "error", 0U, 2U, 14, c19_y, 14, sf_mex_call
                    (&c19_b_st, "getString", 1U, 1U, 14, sf_mex_call(&c19_b_st,
          "message", 1U, 3U, 14, c19_c_y, 14, c19_e_y, 14, c19_f_y)));
      }
    }
  } else {
    c19_b_p = false;
  }

  if (c19_b_p) {
    for (c19_j = 0; c19_j < 6; c19_j++) {
      c19_b_j = c19_j;
      for (c19_b_i = 0; c19_b_i < 85; c19_b_i++) {
        c19_c_i = c19_b_i;
        c19_A[c19_b_j * 85 + c19_c_i] = rtNaN;
      }
    }

    for (c19_c_k = 0; c19_c_k < 6; c19_c_k++) {
      c19_b_k = c19_c_k;
      c19_tau[c19_b_k] = rtNaN;
    }

    for (c19_d_k = 0; c19_d_k < 6; c19_d_k++) {
      c19_b_k = c19_d_k;
      c19_jpvt[c19_b_k] = c19_b_k + 1;
    }
  } else {
    for (c19_k = 0; c19_k < 6; c19_k++) {
      c19_b_k = c19_k;
      c19_jpvt[c19_b_k] = (int32_T)c19_jpvt_t[c19_b_k];
    }
  }
}

static void c19_check_forloop_overflow_error
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, const emlrtStack *c19_sp)
{
  const mxArray *c19_y = NULL;
  static char_T c19_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o',
    'p', '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c19_b_y = NULL;
  const mxArray *c19_c_y = NULL;
  static char_T c19_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", c19_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c19_sp, "error", 0U, 2U, 14, c19_y, 14, sf_mex_call(c19_sp,
    "getString", 1U, 1U, 14, sf_mex_call(c19_sp, "message", 1U, 2U, 14, c19_b_y,
    14, c19_c_y)));
}

static int32_T c19_rankFromQR(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, real_T c19_A[510])
{
  int32_T c19_r;
  emlrtStack c19_st;
  real_T c19_x;
  real_T c19_b_x;
  real_T c19_c_x;
  real_T c19_y;
  real_T c19_tol;
  boolean_T c19_exitg1;
  real_T c19_d_x;
  real_T c19_e_x;
  real_T c19_f_x;
  real_T c19_g_x;
  const mxArray *c19_b_y = NULL;
  real_T c19_c_y;
  static char_T c19_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c19_d_y = NULL;
  char_T c19_str[14];
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_r = 0;
  c19_x = c19_A[0];
  c19_b_x = c19_x;
  c19_c_x = c19_b_x;
  c19_y = muDoubleScalarAbs(c19_c_x);
  c19_tol = 1.8873791418627661E-13 * c19_y;
  c19_exitg1 = false;
  while ((!c19_exitg1) && (c19_r < 6)) {
    c19_d_x = c19_A[c19_r + 85 * c19_r];
    c19_e_x = c19_d_x;
    c19_g_x = c19_e_x;
    c19_c_y = muDoubleScalarAbs(c19_g_x);
    if (!(c19_c_y <= c19_tol)) {
      c19_r++;
    } else {
      c19_exitg1 = true;
    }
  }

  if (c19_r < 6) {
    c19_st.site = &c19_rb_emlrtRSI;
    c19_f_x = c19_tol;
    c19_b_y = NULL;
    sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_rfmt, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    c19_d_y = NULL;
    sf_mex_assign(&c19_d_y, sf_mex_create("y", &c19_f_x, 0, 0U, 0U, 0U, 0),
                  false);
    c19_emlrt_marshallIn(chartInstance, sf_mex_call(&c19_st, "sprintf", 1U, 2U,
      14, c19_b_y, 14, c19_d_y), "<output of sprintf>", c19_str);
    c19_st.site = &c19_sb_emlrtRSI;
    c19_warning(chartInstance, &c19_st, c19_r, c19_str);
  }

  return c19_r;
}

static void c19_warning(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, int32_T c19_varargin_1, char_T c19_varargin_2[14])
{
  const mxArray *c19_y = NULL;
  static char_T c19_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c19_b_y = NULL;
  static char_T c19_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c19_c_y = NULL;
  static char_T c19_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *c19_d_y = NULL;
  const mxArray *c19_e_y = NULL;
  (void)chartInstance;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", c19_msgID, 10, 0U, 1U, 0U, 2, 1, 32),
                false);
  c19_d_y = NULL;
  sf_mex_assign(&c19_d_y, sf_mex_create("y", &c19_varargin_1, 6, 0U, 0U, 0U, 0),
                false);
  c19_e_y = NULL;
  sf_mex_assign(&c19_e_y, sf_mex_create("y", c19_varargin_2, 10, 0U, 1U, 0U, 2,
    1, 14), false);
  sf_mex_call(c19_sp, "feval", 0U, 2U, 14, c19_y, 14, sf_mex_call(c19_sp,
    "feval", 1U, 4U, 14, c19_b_y, 14, c19_c_y, 14, c19_d_y, 14, c19_e_y));
}

static void c19_LSQFromQR(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, real_T c19_A[510], real_T c19_tau[6], int32_T
  c19_jpvt[6], real_T c19_b_B[85], real_T c19_Y[6])
{
  emlrtStack c19_st;
  emlrtStack c19_b_st;
  emlrtStack c19_c_st;
  int32_T c19_i;
  ptrdiff_t c19_nrc_t;
  ptrdiff_t c19_ncc_t;
  ptrdiff_t c19_nrf_t;
  ptrdiff_t c19_lda_t;
  ptrdiff_t c19_info_t;
  int32_T c19_info;
  int32_T c19_b_info;
  int32_T c19_c_info;
  boolean_T c19_p;
  boolean_T c19_b_p;
  int32_T c19_val;
  boolean_T c19_c_p;
  int32_T c19_i1;
  int32_T c19_b_i;
  int32_T c19_j;
  int32_T c19_c_i;
  const mxArray *c19_y = NULL;
  const mxArray *c19_b_y = NULL;
  int32_T c19_pj;
  real_T c19_x;
  const mxArray *c19_c_y = NULL;
  const mxArray *c19_d_y = NULL;
  real_T c19_e_y;
  real_T c19_z;
  const mxArray *c19_f_y = NULL;
  static char_T c19_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd',
    'o', 'r', 'm', 'q', 'r' };

  int32_T c19_i2;
  const mxArray *c19_g_y = NULL;
  int32_T c19_b;
  int32_T c19_b_b;
  boolean_T c19_overflow;
  int32_T c19_d_i;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_b_st.prev = &c19_st;
  c19_b_st.tls = c19_st.tls;
  c19_c_st.prev = &c19_b_st;
  c19_c_st.tls = c19_b_st.tls;
  for (c19_i = 0; c19_i < 6; c19_i++) {
    c19_Y[c19_i] = 0.0;
  }

  c19_st.site = &c19_tb_emlrtRSI;
  c19_b_st.site = &c19_wb_emlrtRSI;
  c19_nrc_t = (ptrdiff_t)85;
  c19_ncc_t = (ptrdiff_t)1;
  c19_nrf_t = (ptrdiff_t)6;
  c19_lda_t = (ptrdiff_t)85;
  c19_info_t = LAPACKE_dormqr(102, 'L', 'T', c19_nrc_t, c19_ncc_t, c19_nrf_t,
    &c19_A[0], c19_lda_t, &c19_tau[0], &c19_b_B[0], c19_nrc_t);
  c19_info = (int32_T)c19_info_t;
  c19_c_st.site = &c19_xb_emlrtRSI;
  c19_b_info = c19_info;
  c19_c_info = c19_b_info;
  c19_p = (c19_c_info != 0);
  if (c19_p) {
    c19_b_p = true;
    c19_val = c19_b_info;
    c19_c_p = false;
    if (c19_val == -7) {
      c19_c_p = true;
    } else if (c19_val == -9) {
      c19_c_p = true;
    } else {
      if (c19_val == -10) {
        c19_c_p = true;
      }
    }

    if (!c19_c_p) {
      if (c19_b_info == -1010) {
        c19_b_y = NULL;
        sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        c19_d_y = NULL;
        sf_mex_assign(&c19_d_y, sf_mex_create("y", c19_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        sf_mex_call(&c19_c_st, "error", 0U, 2U, 14, c19_b_y, 14, sf_mex_call
                    (&c19_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c19_c_st,
          "message", 1U, 1U, 14, c19_d_y)));
      } else {
        c19_y = NULL;
        sf_mex_assign(&c19_y, sf_mex_create("y", c19_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c19_c_y = NULL;
        sf_mex_assign(&c19_c_y, sf_mex_create("y", c19_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c19_f_y = NULL;
        sf_mex_assign(&c19_f_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2,
          1, 14), false);
        c19_g_y = NULL;
        sf_mex_assign(&c19_g_y, sf_mex_create("y", &c19_b_info, 6, 0U, 0U, 0U, 0),
                      false);
        sf_mex_call(&c19_c_st, "error", 0U, 2U, 14, c19_y, 14, sf_mex_call
                    (&c19_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c19_c_st,
          "message", 1U, 3U, 14, c19_c_y, 14, c19_f_y, 14, c19_g_y)));
      }
    }
  } else {
    c19_b_p = false;
  }

  if (c19_b_p) {
    for (c19_i1 = 0; c19_i1 < 85; c19_i1++) {
      c19_b_B[c19_i1] = rtNaN;
    }
  }

  c19_st.site = &c19_ub_emlrtRSI;
  for (c19_b_i = 0; c19_b_i < 6; c19_b_i++) {
    c19_c_i = c19_b_i;
    c19_Y[c19_jpvt[c19_c_i] - 1] = c19_b_B[c19_c_i];
  }

  for (c19_j = 5; c19_j >= 0; c19_j--) {
    c19_pj = c19_jpvt[c19_j] - 1;
    c19_x = c19_Y[c19_pj];
    c19_e_y = c19_A[c19_j + 85 * c19_j];
    c19_z = c19_x / c19_e_y;
    c19_Y[c19_pj] = c19_z;
    c19_i2 = c19_j;
    c19_st.site = &c19_vb_emlrtRSI;
    c19_b = c19_i2;
    c19_b_b = c19_b;
    if (1 > c19_b_b) {
      c19_overflow = false;
    } else {
      c19_overflow = (c19_b_b > 2147483646);
    }

    if (c19_overflow) {
      c19_b_st.site = &c19_v_emlrtRSI;
      c19_check_forloop_overflow_error(chartInstance, &c19_b_st);
    }

    for (c19_d_i = 1; c19_d_i - 1 < c19_i2; c19_d_i++) {
      c19_c_i = c19_d_i - 1;
      c19_Y[c19_jpvt[c19_c_i] - 1] -= c19_Y[c19_pj] * c19_A[c19_c_i + 85 * c19_j];
    }
  }
}

static void c19_b_warning(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp)
{
  const mxArray *c19_y = NULL;
  static char_T c19_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c19_b_y = NULL;
  static char_T c19_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c19_c_y = NULL;
  static char_T c19_msgID[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'o', 'l', 'y', 'f', 'i', 't', '_', 'R', 'e', 'p',
    'e', 'a', 't', 'e', 'd', 'P', 'o', 'i', 'n', 't', 's', 'O', 'r', 'R', 'e',
    's', 'c', 'a', 'l', 'e' };

  (void)chartInstance;
  c19_y = NULL;
  sf_mex_assign(&c19_y, sf_mex_create("y", c19_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c19_b_y = NULL;
  sf_mex_assign(&c19_b_y, sf_mex_create("y", c19_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c19_c_y = NULL;
  sf_mex_assign(&c19_c_y, sf_mex_create("y", c19_msgID, 10, 0U, 1U, 0U, 2, 1, 44),
                false);
  sf_mex_call(c19_sp, "feval", 0U, 2U, 14, c19_y, 14, sf_mex_call(c19_sp,
    "feval", 1U, 2U, 14, c19_b_y, 14, c19_c_y));
}

static real_T c19_polyval(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c19_p[6], real_T c19_x)
{
  real_T c19_y;
  int32_T c19_k;
  real_T c19_b_k;
  (void)chartInstance;
  c19_y = c19_p[0];
  for (c19_k = 0; c19_k < 5; c19_k++) {
    c19_b_k = (real_T)c19_k + 2.0;
    c19_y = c19_x * c19_y + c19_p[(int32_T)c19_b_k - 1];
  }

  return c19_y;
}

static void c19_indexShapeCheck(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c19_eml_find(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, boolean_T c19_x[661821], c19_emxArray_int32_T *c19_i)
{
  emlrtStack c19_st;
  int32_T c19_idx;
  int32_T c19_b_i;
  int32_T c19_ii;
  boolean_T c19_exitg1;
  boolean_T c19_b;
  int32_T c19_b_ii;
  int32_T c19_i1;
  int32_T c19_i2;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_st.site = &c19_cc_emlrtRSI;
  c19_idx = 0;
  c19_b_i = c19_i->size[0];
  c19_i->size[0] = 661821;
  c19_emxEnsureCapacity_int32_T(chartInstance, &c19_st, c19_i, c19_b_i,
    &c19_f_emlrtRTEI);
  c19_ii = 1;
  c19_exitg1 = false;
  while ((!c19_exitg1) && (c19_ii - 1 < 661821)) {
    c19_b_ii = c19_ii;
    if (c19_x[c19_b_ii - 1]) {
      c19_idx++;
      c19_i->data[c19_idx - 1] = c19_b_ii;
      if (c19_idx >= 661821) {
        c19_exitg1 = true;
      } else {
        c19_ii++;
      }
    } else {
      c19_ii++;
    }
  }

  c19_b = (1 > c19_idx);
  if (c19_b) {
    c19_i1 = 0;
  } else {
    c19_i1 = c19_idx;
  }

  c19_b_indexShapeCheck(chartInstance);
  c19_i2 = c19_i->size[0];
  c19_i->size[0] = c19_i1;
  c19_emxEnsureCapacity_int32_T(chartInstance, &c19_st, c19_i, c19_i2,
    &c19_g_emlrtRTEI);
}

static void c19_b_indexShapeCheck(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c19_b_eml_find(SFc19_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c19_sp, boolean_T c19_x[277221], c19_emxArray_int32_T *c19_i)
{
  emlrtStack c19_st;
  int32_T c19_idx;
  int32_T c19_b_i;
  int32_T c19_ii;
  boolean_T c19_exitg1;
  boolean_T c19_b;
  int32_T c19_b_ii;
  int32_T c19_i1;
  int32_T c19_i2;
  c19_st.prev = c19_sp;
  c19_st.tls = c19_sp->tls;
  c19_st.site = &c19_cc_emlrtRSI;
  c19_idx = 0;
  c19_b_i = c19_i->size[0];
  c19_i->size[0] = 277221;
  c19_emxEnsureCapacity_int32_T(chartInstance, &c19_st, c19_i, c19_b_i,
    &c19_f_emlrtRTEI);
  c19_ii = 1;
  c19_exitg1 = false;
  while ((!c19_exitg1) && (c19_ii - 1 < 277221)) {
    c19_b_ii = c19_ii;
    if (c19_x[c19_b_ii - 1]) {
      c19_idx++;
      c19_i->data[c19_idx - 1] = c19_b_ii;
      if (c19_idx >= 277221) {
        c19_exitg1 = true;
      } else {
        c19_ii++;
      }
    } else {
      c19_ii++;
    }
  }

  c19_b = (1 > c19_idx);
  if (c19_b) {
    c19_i1 = 0;
  } else {
    c19_i1 = c19_idx;
  }

  c19_b_indexShapeCheck(chartInstance);
  c19_i2 = c19_i->size[0];
  c19_i->size[0] = c19_i1;
  c19_emxEnsureCapacity_int32_T(chartInstance, &c19_st, c19_i, c19_i2,
    &c19_g_emlrtRTEI);
}

static void c19_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_a__output_of_sprintf_, const char_T
  *c19_identifier, char_T c19_y[14])
{
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = (const char *)c19_identifier;
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_a__output_of_sprintf_),
    &c19_thisId, c19_y);
  sf_mex_destroy(&c19_a__output_of_sprintf_);
}

static void c19_b_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId,
  char_T c19_y[14])
{
  char_T c19_b_cv[14];
  int32_T c19_i;
  (void)chartInstance;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), c19_b_cv, 1, 10, 0U, 1, 0U, 2,
                1, 14);
  for (c19_i = 0; c19_i < 14; c19_i++) {
    c19_y[c19_i] = c19_b_cv[c19_i];
  }

  sf_mex_destroy(&c19_u);
}

static real_T c19_c_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_b_Light_State, const char_T *c19_identifier)
{
  real_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = (const char *)c19_identifier;
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c19_b_Light_State),
    &c19_thisId);
  sf_mex_destroy(&c19_b_Light_State);
  return c19_y;
}

static real_T c19_d_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  real_T c19_y;
  real_T c19_d;
  (void)chartInstance;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_d, 1, 0, 0U, 0, 0U, 0);
  c19_y = c19_d;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static uint8_T c19_e_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_b_is_active_c19_Traffic_Light_cs, const
  char_T *c19_identifier)
{
  uint8_T c19_y;
  emlrtMsgIdentifier c19_thisId;
  c19_thisId.fIdentifier = (const char *)c19_identifier;
  c19_thisId.fParent = NULL;
  c19_thisId.bParentIsCell = false;
  c19_y = c19_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c19_b_is_active_c19_Traffic_Light_cs), &c19_thisId);
  sf_mex_destroy(&c19_b_is_active_c19_Traffic_Light_cs);
  return c19_y;
}

static uint8_T c19_f_emlrt_marshallIn(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c19_u, const emlrtMsgIdentifier *c19_parentId)
{
  uint8_T c19_y;
  uint8_T c19_b_u;
  (void)chartInstance;
  sf_mex_import(c19_parentId, sf_mex_dup(c19_u), &c19_b_u, 1, 3, 0U, 0, 0U, 0);
  c19_y = c19_b_u;
  sf_mex_destroy(&c19_u);
  return c19_y;
}

static const mxArray *c19_chart_data_browse_helper
  (SFc19_Traffic_Light_csInstanceStruct *chartInstance, int32_T c19_ssIdNumber)
{
  const mxArray *c19_mxData = NULL;
  real_T c19_d;
  real_T c19_d1;
  c19_mxData = NULL;
  switch (c19_ssIdNumber) {
   case 6U:
    c19_d = *chartInstance->c19_Dis;
    sf_mex_assign(&c19_mxData, sf_mex_create("mxData", &c19_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(&c19_mxData, sf_mex_create("mxData", *chartInstance->c19_R_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;

   case 5U:
    c19_d1 = *chartInstance->c19_Light_State;
    sf_mex_assign(&c19_mxData, sf_mex_create("mxData", &c19_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(&c19_mxData, sf_mex_create("mxData", *chartInstance->c19_G_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;

   case 8U:
    sf_mex_assign(&c19_mxData, sf_mex_create("mxData", *chartInstance->c19_B_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;
  }

  return c19_mxData;
}

static void c19_emxEnsureCapacity_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_real_T *c19_emxArray,
  int32_T c19_oldNumel, const emlrtRTEInfo *c19_srcLocation)
{
  int32_T c19_newNumel;
  int32_T c19_i;
  int32_T c19_newCapacity;
  void *c19_newData;
  (void)chartInstance;
  if (c19_oldNumel < 0) {
    c19_oldNumel = 0;
  }

  c19_newNumel = 1;
  for (c19_i = 0; c19_i < c19_emxArray->numDimensions; c19_i++) {
    c19_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c19_newNumel, (uint32_T)
      c19_emxArray->size[c19_i], c19_srcLocation, c19_sp);
  }

  if (c19_newNumel > c19_emxArray->allocatedSize) {
    c19_newCapacity = c19_emxArray->allocatedSize;
    if (c19_newCapacity < 16) {
      c19_newCapacity = 16;
    }

    while (c19_newCapacity < c19_newNumel) {
      if (c19_newCapacity > 1073741823) {
        c19_newCapacity = MAX_int32_T;
      } else {
        c19_newCapacity <<= 1;
      }
    }

    c19_newData = emlrtCallocMex((uint32_T)c19_newCapacity, sizeof(real_T));
    if (c19_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
    }

    if (c19_emxArray->data != NULL) {
      memcpy(c19_newData, c19_emxArray->data, sizeof(real_T) * (uint32_T)
             c19_oldNumel);
      if (c19_emxArray->canFreeData) {
        emlrtFreeMex(c19_emxArray->data);
      }
    }

    c19_emxArray->data = (real_T *)c19_newData;
    c19_emxArray->allocatedSize = c19_newCapacity;
    c19_emxArray->canFreeData = true;
  }
}

static void c19_emxInit_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_real_T **c19_pEmxArray,
  int32_T c19_numDimensions, const emlrtRTEInfo *c19_srcLocation)
{
  c19_emxArray_real_T *c19_emxArray;
  int32_T c19_i;
  (void)chartInstance;
  *c19_pEmxArray = (c19_emxArray_real_T *)emlrtMallocMex(sizeof
    (c19_emxArray_real_T));
  if ((void *)*c19_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
  }

  c19_emxArray = *c19_pEmxArray;
  c19_emxArray->data = (real_T *)NULL;
  c19_emxArray->numDimensions = c19_numDimensions;
  c19_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c19_numDimensions);
  if ((void *)c19_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
  }

  c19_emxArray->allocatedSize = 0;
  c19_emxArray->canFreeData = true;
  for (c19_i = 0; c19_i < c19_numDimensions; c19_i++) {
    c19_emxArray->size[c19_i] = 0;
  }
}

static void c19_emxInit_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_int32_T **c19_pEmxArray,
  int32_T c19_numDimensions, const emlrtRTEInfo *c19_srcLocation)
{
  c19_emxArray_int32_T *c19_emxArray;
  int32_T c19_i;
  (void)chartInstance;
  *c19_pEmxArray = (c19_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c19_emxArray_int32_T));
  if ((void *)*c19_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
  }

  c19_emxArray = *c19_pEmxArray;
  c19_emxArray->data = (int32_T *)NULL;
  c19_emxArray->numDimensions = c19_numDimensions;
  c19_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c19_numDimensions);
  if ((void *)c19_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
  }

  c19_emxArray->allocatedSize = 0;
  c19_emxArray->canFreeData = true;
  for (c19_i = 0; c19_i < c19_numDimensions; c19_i++) {
    c19_emxArray->size[c19_i] = 0;
  }
}

static void c19_emxFree_real_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, c19_emxArray_real_T **c19_pEmxArray)
{
  (void)chartInstance;
  if (*c19_pEmxArray != (c19_emxArray_real_T *)NULL) {
    if (((*c19_pEmxArray)->data != (real_T *)NULL) && (*c19_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c19_pEmxArray)->data);
    }

    emlrtFreeMex((*c19_pEmxArray)->size);
    emlrtFreeMex(*c19_pEmxArray);
    *c19_pEmxArray = (c19_emxArray_real_T *)NULL;
  }
}

static void c19_emxFree_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, c19_emxArray_int32_T **c19_pEmxArray)
{
  (void)chartInstance;
  if (*c19_pEmxArray != (c19_emxArray_int32_T *)NULL) {
    if (((*c19_pEmxArray)->data != (int32_T *)NULL) && (*c19_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c19_pEmxArray)->data);
    }

    emlrtFreeMex((*c19_pEmxArray)->size);
    emlrtFreeMex(*c19_pEmxArray);
    *c19_pEmxArray = (c19_emxArray_int32_T *)NULL;
  }
}

static void c19_emxEnsureCapacity_int32_T(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c19_sp, c19_emxArray_int32_T *c19_emxArray,
  int32_T c19_oldNumel, const emlrtRTEInfo *c19_srcLocation)
{
  int32_T c19_newNumel;
  int32_T c19_i;
  int32_T c19_newCapacity;
  void *c19_newData;
  (void)chartInstance;
  if (c19_oldNumel < 0) {
    c19_oldNumel = 0;
  }

  c19_newNumel = 1;
  for (c19_i = 0; c19_i < c19_emxArray->numDimensions; c19_i++) {
    c19_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c19_newNumel, (uint32_T)
      c19_emxArray->size[c19_i], c19_srcLocation, c19_sp);
  }

  if (c19_newNumel > c19_emxArray->allocatedSize) {
    c19_newCapacity = c19_emxArray->allocatedSize;
    if (c19_newCapacity < 16) {
      c19_newCapacity = 16;
    }

    while (c19_newCapacity < c19_newNumel) {
      if (c19_newCapacity > 1073741823) {
        c19_newCapacity = MAX_int32_T;
      } else {
        c19_newCapacity <<= 1;
      }
    }

    c19_newData = emlrtCallocMex((uint32_T)c19_newCapacity, sizeof(int32_T));
    if (c19_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c19_srcLocation, c19_sp);
    }

    if (c19_emxArray->data != NULL) {
      memcpy(c19_newData, c19_emxArray->data, sizeof(int32_T) * (uint32_T)
             c19_oldNumel);
      if (c19_emxArray->canFreeData) {
        emlrtFreeMex(c19_emxArray->data);
      }
    }

    c19_emxArray->data = (int32_T *)c19_newData;
    c19_emxArray->allocatedSize = c19_newCapacity;
    c19_emxArray->canFreeData = true;
  }
}

static void init_dsm_address_info(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc19_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  chartInstance->c19_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c19_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c19_Dis = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c19_R_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c19_Light_State = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c19_G_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c19_B_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c19_Traffic_Light_cs_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3858840124U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3245323274U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(472974167U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(636287471U);
}

mxArray *sf_c19_Traffic_Light_cs_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString("coder.internal.lapack.LAPACKApi"));
  return(mxcell3p);
}

mxArray *sf_c19_Traffic_Light_cs_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("rgb2gray_tbb_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c19_Traffic_Light_cs_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c19_Traffic_Light_cs(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyPpF4DyfTLTM0rig0sSS8DeAf"
    "sDRpPvHgUHyvRD7A8g4B85NP+A+JnF8YnJJZllqfHJhpbxIUWJaWmZyfEQXyYXI/wHABBZHmU="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c19_Traffic_Light_cs_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sboXQX7ucgu5HNsoeOlRCVG";
}

static void sf_opaque_initialize_c19_Traffic_Light_cs(void *chartInstanceVar)
{
  initialize_params_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
  initialize_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c19_Traffic_Light_cs(void *chartInstanceVar)
{
  enable_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c19_Traffic_Light_cs(void *chartInstanceVar)
{
  disable_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c19_Traffic_Light_cs(void *chartInstanceVar)
{
  sf_gateway_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c19_Traffic_Light_cs(SimStruct* S)
{
  return get_sim_state_c19_Traffic_Light_cs
    ((SFc19_Traffic_Light_csInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c19_Traffic_Light_cs(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c19_Traffic_Light_cs(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc19_Traffic_Light_csInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Traffic_Light_cs_optimization_info();
    }

    finalize_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c19_Traffic_Light_cs(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc19_Traffic_Light_cs((SFc19_Traffic_Light_csInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c19_Traffic_Light_cs_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [16] = {
    "eNrtVr1uE0EQPlshIgKSFEg0KEoHJQghoECE+IdYchITJyGd2eyNfSvv7R774yQVr0BHScFL0PA",
    "clHkFOlpmz3binO98caxEQmKl83nP33w738zcjL1CbdPDtYjXlyXPm8f7bbyKXn/dGuwLI1f/+Z",
    "z3aLD/jiBhwwZRJNTexCVICDugJbeGSVETbZkKY6INCgRFbCSVyWLTLLSciW7VCur49IeA0aAZS",
    "Mv9dbQl/rbgJ8gWWdNAnjJTQE0VwDeBkrYTVDnpnHmszFEpANrVNpwkQYNp2si5pTctNyziUDkG",
    "WhPaEPRYn/vWNMRAyRxnynRKdXMIlGHEGRGpagOimxBhgA3sRT5+bluDopIwGhBl1iEgPdB11o0",
    "5pYAkJ9P4wyETxEjFCK+EvOQMx31rcPRnU/rAJwQEfVtXQLqRZMJk579ZRaUVQQ45lOHQdrLZmv",
    "DJuuTvMzgClRm3dkn2QJEObIvMQ+OAVI7jbJ1VyTjMsBD2iXpLMX8a/MzqxcrRTYJ5gl20yIJBL",
    "LKmdxXrYXgz2WxYc5WZ98rYsJ9snQeL2So9mJSFM7YqFSXCuc6E7cqoDj3gMWuZGDIZ1mdNx0VK",
    "RqSDVetjkF2Jl6Tw2VguqNVGhiUst3K9voWdIt25c1hNGFBtQiHtvdU0AN9yQKHYmUx8XAqpz7T",
    "LVg5qkNM8lKfbVpSPpOqi0Amv/bkEl4NMYKg7GH2s3T2NZT4J5qKfixv2+SfeeZ+/e4k+P7RL3h",
    "+P8BRSeLyRe/LcheJF/Fzi3CI+KeBydmsjdve8yXYOt+zayLM/3z5+Pvi1+nVr6fT05+u88wtj5",
    "xfi787uR3G6ubg42D8cNqCz8uyNVYXDboz4NZfC/2CEf3mw14fy4P3BC0s79vnGlpawzXdK++9i",
    "vts5/hYT/g6fr7pOeBLFfU0rWvMHA9vtie2PMcf/csTf+Zx4LAye99fvN7PZ319L1kNavO4k4uX",
    "2ddYJTCsetGN1fHV/Vtdms++f38jRs5LQsxLPvxbBadaDFn36qrWrSLvNaKuvkuqL+q5a99PaeT",
    "ds96/4+T8u16/vMnNs7op2hRnn5k3Zzapv2nk+y/xP9jkvgV+e4Zzrxs/6P2ga/F8R4GP5",
    ""
  };

  static char newstr [1121] = "";
  newstr[0] = '\0';
  for (i = 0; i < 16; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c19_Traffic_Light_cs(SimStruct *S)
{
  const char* newstr = sf_c19_Traffic_Light_cs_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(2683777896U));
  ssSetChecksum1(S,(3612901216U));
  ssSetChecksum2(S,(256808736U));
  ssSetChecksum3(S,(1035853791U));
}

static void mdlRTW_c19_Traffic_Light_cs(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c19_Traffic_Light_cs(SimStruct *S)
{
  SFc19_Traffic_Light_csInstanceStruct *chartInstance;
  chartInstance = (SFc19_Traffic_Light_csInstanceStruct *)utMalloc(sizeof
    (SFc19_Traffic_Light_csInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc19_Traffic_Light_csInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c19_Traffic_Light_cs;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c19_Traffic_Light_cs;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c19_Traffic_Light_cs;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c19_Traffic_Light_cs;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c19_Traffic_Light_cs;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c19_Traffic_Light_cs;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c19_Traffic_Light_cs;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c19_Traffic_Light_cs;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c19_Traffic_Light_cs;
  chartInstance->chartInfo.mdlStart = mdlStart_c19_Traffic_Light_cs;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c19_Traffic_Light_cs;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c19_JITStateAnimation,
    chartInstance->c19_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c19_Traffic_Light_cs(chartInstance);
}

void c19_Traffic_Light_cs_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c19_Traffic_Light_cs(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c19_Traffic_Light_cs(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c19_Traffic_Light_cs(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c19_Traffic_Light_cs_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

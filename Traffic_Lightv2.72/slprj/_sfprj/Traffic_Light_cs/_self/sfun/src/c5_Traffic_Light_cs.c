/* Include files */

#include "Traffic_Light_cs_sfun.h"
#include "c5_Traffic_Light_cs.h"
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
static emlrtRSInfo c5_emlrtRSI = { 16, /* lineNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:921"              /* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 31,/* lineNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:921"              /* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 58,/* lineNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:921"              /* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 82,/* lineNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fcnName */
  "#Traffic_Light_cs:921"              /* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 48,/* lineNo */
  "rgb2gray",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\images\\rgb2gray.m"/* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 132,/* lineNo */
  "xgeqp3",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 33,/* lineNo */
  "polyfit",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\polyfun\\polyfit.m"/* pathName */
};

static emlrtRSInfo c5_h_emlrtRSI = { 44,/* lineNo */
  "polyfit",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\polyfun\\polyfit.m"/* pathName */
};

static emlrtRSInfo c5_i_emlrtRSI = { 35,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_j_emlrtRSI = { 39,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_k_emlrtRSI = { 46,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_l_emlrtRSI = { 57,/* lineNo */
  "xgeqp3",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_m_emlrtRSI = { 114,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_n_emlrtRSI = { 250,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_o_emlrtRSI = { 243,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_p_emlrtRSI = { 224,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_q_emlrtRSI = { 209,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_r_emlrtRSI = { 181,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_s_emlrtRSI = { 169,/* lineNo */
  "xzgeqp3",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzgeqp3.m"/* pathName */
};

static emlrtRSInfo c5_t_emlrtRSI = { 23,/* lineNo */
  "xnrm2",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c5_u_emlrtRSI = { 38,/* lineNo */
  "xnrm2",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xnrm2.m"/* pathName */
};

static emlrtRSInfo c5_v_emlrtRSI = { 21,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c5_w_emlrtRSI = { 20,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_x_emlrtRSI = { 41,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_y_emlrtRSI = { 53,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_ab_emlrtRSI = { 68,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_bb_emlrtRSI = { 71,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_cb_emlrtRSI = { 81,/* lineNo */
  "xzlarfg",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarfg.m"/* pathName */
};

static emlrtRSInfo c5_db_emlrtRSI = { 31,/* lineNo */
  "xscal",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xscal.m"/* pathName */
};

static emlrtRSInfo c5_eb_emlrtRSI = { 18,/* lineNo */
  "xscal",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xscal.m"/* pathName */
};

static emlrtRSInfo c5_fb_emlrtRSI = { 75,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c5_gb_emlrtRSI = { 68,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c5_hb_emlrtRSI = { 50,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c5_ib_emlrtRSI = { 103,/* lineNo */
  "xzlarf",                            /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzlarf.m"/* pathName */
};

static emlrtRSInfo c5_jb_emlrtRSI = { 64,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c5_kb_emlrtRSI = { 74,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c5_lb_emlrtRSI = { 37,/* lineNo */
  "xgemv",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgemv.m"/* pathName */
};

static emlrtRSInfo c5_mb_emlrtRSI = { 45,/* lineNo */
  "xgerc",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgerc.m"/* pathName */
};

static emlrtRSInfo c5_nb_emlrtRSI = { 45,/* lineNo */
  "xger",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xger.m"/* pathName */
};

static emlrtRSInfo c5_ob_emlrtRSI = { 15,/* lineNo */
  "xger",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xger.m"/* pathName */
};

static emlrtRSInfo c5_pb_emlrtRSI = { 41,/* lineNo */
  "xgerx",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c5_qb_emlrtRSI = { 54,/* lineNo */
  "xgerx",                             /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+refblas\\xgerx.m"/* pathName */
};

static emlrtRSInfo c5_rb_emlrtRSI = { 131,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_sb_emlrtRSI = { 130,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_tb_emlrtRSI = { 79,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_ub_emlrtRSI = { 86,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_vb_emlrtRSI = { 96,/* lineNo */
  "qrsolve",                           /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\qrsolve.m"/* pathName */
};

static emlrtRSInfo c5_wb_emlrtRSI = { 31,/* lineNo */
  "xunormqr",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo c5_xb_emlrtRSI = { 102,/* lineNo */
  "xunormqr",                          /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+lapack\\xunormqr.m"/* pathName */
};

static emlrtRSInfo c5_yb_emlrtRSI = { 20,/* lineNo */
  "xzunormqr",                         /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo c5_ac_emlrtRSI = { 26,/* lineNo */
  "xzunormqr",                         /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\+reflapack\\xzunormqr.m"/* pathName */
};

static emlrtRSInfo c5_bc_emlrtRSI = { 41,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_cc_emlrtRSI = { 153,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_dc_emlrtRSI = { 397,/* lineNo */
  "find",                              /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c5_ec_emlrtRSI = { 43,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRTEInfo c5_emlrtRTEI = { 58,/* lineNo */
  15,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtRTEInfo c5_b_emlrtRTEI = { 82,/* lineNo */
  15,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtRTEInfo c5_c_emlrtRTEI = { 49,/* lineNo */
  5,                                   /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtRTEInfo c5_d_emlrtRTEI = { 95,/* lineNo */
  5,                                   /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtRTEInfo c5_e_emlrtRTEI = { 33,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c5_f_emlrtRTEI = { 153,/* lineNo */
  13,                                  /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c5_g_emlrtRTEI = { 153,/* lineNo */
  9,                                   /* colNo */
  "find",                              /* fName */
  "D:\\MATLAB\\R2019b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtECInfo c5_emlrtECI = { -1, /* nDims */
  51,                                  /* lineNo */
  5,                                   /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtECInfo c5_b_emlrtECI = { -1,/* nDims */
  51,                                  /* lineNo */
  21,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtECInfo c5_c_emlrtECI = { -1,/* nDims */
  51,                                  /* lineNo */
  37,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtECInfo c5_d_emlrtECI = { -1,/* nDims */
  97,                                  /* lineNo */
  5,                                   /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtECInfo c5_e_emlrtECI = { -1,/* nDims */
  97,                                  /* lineNo */
  23,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtECInfo c5_f_emlrtECI = { -1,/* nDims */
  97,                                  /* lineNo */
  41,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921"              /* pName */
};

static emlrtBCInfo c5_emlrtBCI = { 1,  /* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  10,                                  /* colNo */
  "RP_R",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_emlrtDCI = { 51, /* lineNo */
  10,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_b_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  26,                                  /* colNo */
  "RP_G",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_b_emlrtDCI = { 51,/* lineNo */
  26,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_c_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  51,                                  /* lineNo */
  42,                                  /* colNo */
  "RP_B",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_c_emlrtDCI = { 51,/* lineNo */
  42,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_d_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  73,                                  /* lineNo */
  10,                                  /* colNo */
  "GP_R",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_d_emlrtDCI = { 73,/* lineNo */
  10,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_e_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  73,                                  /* lineNo */
  26,                                  /* colNo */
  "GP_G",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_e_emlrtDCI = { 73,/* lineNo */
  26,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_f_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  73,                                  /* lineNo */
  42,                                  /* colNo */
  "GP_B",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_f_emlrtDCI = { 73,/* lineNo */
  42,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_g_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  97,                                  /* lineNo */
  10,                                  /* colNo */
  "BP_R",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_g_emlrtDCI = { 97,/* lineNo */
  10,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_h_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  97,                                  /* lineNo */
  28,                                  /* colNo */
  "BP_G",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_h_emlrtDCI = { 97,/* lineNo */
  28,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_i_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  97,                                  /* lineNo */
  46,                                  /* colNo */
  "BP_B",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo c5_i_emlrtDCI = { 97,/* lineNo */
  46,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_j_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  49,                                  /* lineNo */
  10,                                  /* colNo */
  "Gray",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_j_emlrtDCI = { 49,/* lineNo */
  10,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_k_emlrtBCI = { 1,/* iFirst */
  1800,                                /* iLast */
  57,                                  /* lineNo */
  22,                                  /* colNo */
  "XYR",                               /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_k_emlrtDCI = { 57,/* lineNo */
  22,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_l_emlrtBCI = { 1,/* iFirst */
  1800,                                /* iLast */
  80,                                  /* lineNo */
  22,                                  /* colNo */
  "XYG",                               /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_l_emlrtDCI = { 80,/* lineNo */
  22,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_m_emlrtBCI = { 1,/* iFirst */
  3456000,                             /* iLast */
  95,                                  /* lineNo */
  12,                                  /* colNo */
  "Gray",                              /* aName */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_m_emlrtDCI = { 95,/* lineNo */
  12,                                  /* colNo */
  "CAR_Ahead/Decision/Function-Call Subsystem/Subsystem/MATLAB Function",/* fName */
  "#Traffic_Light_cs:921",             /* pName */
  1                                    /* checkKind */
};

static const char_T c5_cv[33] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
  'l', 'b', 'o', 'x', ':', 'L', 'A', 'P', 'A', 'C', 'K', 'C', 'a', 'l', 'l', 'E',
  'r', 'r', 'o', 'r', 'I', 'n', 'f', 'o' };

static const char_T c5_cv1[12] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'n', 'o',
  'm', 'e', 'm' };

/* Function Declarations */
static void initialize_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void initialize_params_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static void enable_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void disable_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c5_update_jit_animation_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static void c5_do_animation_call_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static void ext_mode_exec_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static void set_sim_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance, const mxArray *c5_st);
static void finalize_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void sf_gateway_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void mdl_start_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c5_chartstep_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp);
static void initSimStructsc5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance);
static void c5_rgb2gray(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c5_X[10368000], real_T c5_I[3456000]);
static void c5_polyfit(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, real_T c5_p[6]);
static void c5_qrsolve(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, real_T c5_Y[6], int32_T *c5_rankR);
static void c5_xgeqp3(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
                      emlrtStack *c5_sp, real_T c5_A[510], real_T c5_tau[6],
                      int32_T c5_jpvt[6]);
static void c5_check_forloop_overflow_error(SFc5_Traffic_Light_csInstanceStruct *
  chartInstance, const emlrtStack *c5_sp);
static int32_T c5_rankFromQR(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_A[510]);
static void c5_warning(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, int32_T c5_varargin_1, char_T c5_varargin_2[14]);
static void c5_LSQFromQR(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_A[510], real_T c5_tau[6], int32_T c5_jpvt[6],
  real_T c5_b_B[85], real_T c5_Y[6]);
static void c5_b_warning(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp);
static real_T c5_polyval(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c5_p[6], real_T c5_x);
static void c5_indexShapeCheck(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c5_eml_find(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_x[271041], c5_emxArray_int32_T *c5_i);
static void c5_b_indexShapeCheck(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void c5_b_eml_find(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_x[277221], c5_emxArray_int32_T *c5_i);
static void c5_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_a__output_of_sprintf_, const char_T
  *c5_identifier, char_T c5_y[14]);
static void c5_b_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  char_T c5_y[14]);
static real_T c5_c_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_b_Light_State, const char_T *c5_identifier);
static real_T c5_d_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint8_T c5_e_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_Traffic_Light_cs, const
  char_T *c5_identifier);
static uint8_T c5_f_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static const mxArray *c5_chart_data_browse_helper
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance, int32_T c5_ssIdNumber);
static void c5_emxEnsureCapacity_real_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxInit_real_T(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray, int32_T
  c5_numDimensions, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxInit_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation);
static void c5_emxFree_real_T(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  c5_emxArray_real_T **c5_pEmxArray);
static void c5_emxFree_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, c5_emxArray_int32_T **c5_pEmxArray);
static void c5_emxEnsureCapacity_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation);
static void init_dsm_address_info(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_is_active_c5_Traffic_Light_cs = 0U;
}

static void initialize_params_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void enable_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c5_update_jit_animation_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_do_animation_call_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(2, 1), false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", chartInstance->c5_Light_State, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_Traffic_Light_cs, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_Light_State = c5_c_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c5_u, 0)), "Light_State");
  chartInstance->c5_is_active_c5_Traffic_Light_cs = c5_e_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
     "is_active_c5_Traffic_Light_cs");
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void finalize_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c5_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void sf_gateway_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i2;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c5_i = 0; c5_i < 3456000; c5_i++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 3U, (real_T)
                      (*chartInstance->c5_B_Ori)[c5_i]);
  }

  for (c5_i1 = 0; c5_i1 < 3456000; c5_i1++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 2U, (real_T)
                      (*chartInstance->c5_G_Ori)[c5_i1]);
  }

  for (c5_i2 = 0; c5_i2 < 3456000; c5_i2++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U, (real_T)
                      (*chartInstance->c5_R_Ori)[c5_i2]);
  }

  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U, *chartInstance->c5_Dis);
  chartInstance->c5_sfEvent = CALL_EVENT;
  c5_chartstep_c5_Traffic_Light_cs(chartInstance, &c5_st);
  c5_do_animation_call_c5_Traffic_Light_cs(chartInstance);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 4U,
                    *chartInstance->c5_Light_State);
}

static void mdl_start_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  static const uint32_T c5_decisionTxtEndIdx = 0U;
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)c5_chart_data_browse_helper);
  chartInstance->c5_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    131U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 1U, 0U, 5U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 3190);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 170, 180, 201,
                    3186);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 1635, 1648, -1,
                    1675);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 1742, 1779, -1,
                    1810);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 2189, 2202, -1,
                    2229);
  covrtEmlIfInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 2301, 2339, -1,
                    2370);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U, 173,
    180, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 1U, 1638,
    1648, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 2U, 1745,
    1779, -1, 5U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 3U, 2192,
    2202, -1, 3U);
  covrtEmlRelationalInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 4U, 2304,
    2339, -1, 5U);
}

static void c5_chartstep_c5_Traffic_Light_cs(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp)
{
  emlrtStack c5_st;
  emlrtStack c5_b_st;
  real_T c5_b_Dis;
  int32_T c5_i;
  int32_T c5_i1;
  int32_T c5_i2;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  real_T c5_b_Light_State;
  int32_T c5_i9;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  real_T c5_p[6];
  real_T c5_x;
  real_T c5_start;
  real_T c5_varargin_1;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_d_x;
  real_T c5_e_x;
  real_T c5_f_x;
  real_T c5_g_x;
  int32_T c5_i20;
  int32_T c5_i21;
  int32_T c5_i22;
  int32_T c5_trueCount;
  int32_T c5_b_i;
  c5_emxArray_real_T *c5_Mask;
  int32_T c5_i23;
  int32_T c5_partialTrueCount;
  int32_T c5_c_i;
  int32_T c5_b_trueCount;
  int32_T c5_d_i;
  real_T c5_d;
  int32_T c5_i24;
  int32_T c5_i25;
  int32_T c5_e_i;
  int32_T c5_c_trueCount;
  int32_T c5_f_i;
  real_T c5_d1;
  int32_T c5_i26;
  int32_T c5_i27;
  int32_T c5_g_i;
  int32_T c5_d_trueCount;
  int32_T c5_h_i;
  real_T c5_d2;
  int32_T c5_i28;
  int32_T c5_i29;
  int32_T c5_i_i;
  real_T c5_d3;
  int32_T c5_i30;
  int32_T c5_i31;
  int32_T c5_i32;
  int32_T c5_i33;
  real_T c5_d4;
  c5_emxArray_real_T *c5_r;
  int32_T c5_i34;
  c5_emxArray_int32_T *c5_ii;
  int32_T c5_i35;
  int32_T c5_loop_ub;
  int32_T c5_i36;
  int32_T c5_b_varargin_1;
  int32_T c5_c_varargin_1;
  real_T c5_n;
  int32_T c5_d_varargin_1;
  int32_T c5_e_varargin_1;
  real_T c5_b_n;
  int32_T c5_i37;
  int32_T c5_i38;
  int32_T c5_i39;
  int32_T c5_j_i;
  int32_T c5_k_i;
  int32_T c5_l_i;
  real_T c5_d5;
  int32_T c5_i40;
  int32_T c5_m_i;
  int32_T c5_n_i;
  real_T c5_d6;
  int32_T c5_i41;
  int32_T c5_o_i;
  real_T c5_d7;
  int32_T c5_i42;
  int32_T c5_i43;
  int32_T c5_i44;
  int32_T c5_i45;
  real_T c5_d8;
  c5_emxArray_real_T *c5_r1;
  int32_T c5_i46;
  c5_emxArray_int32_T *c5_b_ii;
  int32_T c5_i47;
  int32_T c5_b_loop_ub;
  int32_T c5_i48;
  int32_T c5_f_varargin_1;
  int32_T c5_g_varargin_1;
  real_T c5_c_n;
  int32_T c5_h_varargin_1;
  int32_T c5_i_varargin_1;
  real_T c5_d_n;
  int32_T c5_i49;
  int32_T c5_i50;
  int32_T c5_i51;
  int32_T c5_e_trueCount;
  int32_T c5_p_i;
  c5_emxArray_real_T *c5_Mask_B;
  int32_T c5_i52;
  int32_T c5_b_partialTrueCount;
  int32_T c5_q_i;
  int32_T c5_f_trueCount;
  int32_T c5_r_i;
  real_T c5_d9;
  int32_T c5_i53;
  int32_T c5_i54;
  int32_T c5_s_i;
  int32_T c5_g_trueCount;
  int32_T c5_t_i;
  real_T c5_d10;
  int32_T c5_i55;
  int32_T c5_i56;
  int32_T c5_u_i;
  int32_T c5_h_trueCount;
  int32_T c5_v_i;
  real_T c5_d11;
  int32_T c5_i57;
  int32_T c5_i58;
  int32_T c5_w_i;
  real_T c5_d12;
  int32_T c5_i59;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_b_Dis = *chartInstance->c5_Dis;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  for (c5_i = 0; c5_i < 10368000; c5_i++) {
    chartInstance->c5_Image[c5_i] = 0.0;
  }

  c5_i1 = 0;
  for (c5_i2 = 0; c5_i2 < 1920; c5_i2++) {
    for (c5_i4 = 0; c5_i4 < 1800; c5_i4++) {
      chartInstance->c5_Image[c5_i4 + c5_i1] = (real_T)(*chartInstance->c5_R_Ori)
        [c5_i4 + c5_i1];
    }

    c5_i1 += 1800;
  }

  c5_i3 = 0;
  for (c5_i5 = 0; c5_i5 < 1920; c5_i5++) {
    for (c5_i7 = 0; c5_i7 < 1800; c5_i7++) {
      chartInstance->c5_Image[(c5_i7 + c5_i3) + 3456000] = (real_T)
        (*chartInstance->c5_G_Ori)[c5_i7 + c5_i3];
    }

    c5_i3 += 1800;
  }

  c5_i6 = 0;
  for (c5_i8 = 0; c5_i8 < 1920; c5_i8++) {
    for (c5_i9 = 0; c5_i9 < 1800; c5_i9++) {
      chartInstance->c5_Image[(c5_i9 + c5_i6) + 6912000] = (real_T)
        (*chartInstance->c5_B_Ori)[c5_i9 + c5_i6];
    }

    c5_i6 += 1800;
  }

  c5_b_Light_State = -1.0;
  if (!covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 0,
                      covrtRelationalopUpdateFcn(chartInstance->c5_covrtInstance,
        4U, 0U, 0U, c5_b_Dis, 75.0, -1, 5U, c5_b_Dis >= 75.0))) {
    for (c5_i10 = 0; c5_i10 < 10368000; c5_i10++) {
      chartInstance->c5_b_Image[c5_i10] = chartInstance->c5_Image[c5_i10];
    }

    c5_st.site = &c5_emlrtRSI;
    c5_rgb2gray(chartInstance, chartInstance->c5_b_Image, chartInstance->c5_Gray);
    c5_i11 = 0;
    for (c5_i12 = 0; c5_i12 < 1920; c5_i12++) {
      for (c5_i14 = 0; c5_i14 < 1800; c5_i14++) {
        chartInstance->c5_R[c5_i14 + c5_i11] = chartInstance->c5_Image[c5_i14 +
          c5_i11];
      }

      c5_i11 += 1800;
    }

    c5_i13 = 0;
    for (c5_i15 = 0; c5_i15 < 1920; c5_i15++) {
      for (c5_i17 = 0; c5_i17 < 1800; c5_i17++) {
        chartInstance->c5_G[c5_i17 + c5_i13] = chartInstance->c5_Image[(c5_i17 +
          c5_i13) + 3456000];
      }

      c5_i13 += 1800;
    }

    c5_i16 = 0;
    for (c5_i18 = 0; c5_i18 < 1920; c5_i18++) {
      for (c5_i19 = 0; c5_i19 < 1800; c5_i19++) {
        chartInstance->c5_B[c5_i19 + c5_i16] = chartInstance->c5_Image[(c5_i19 +
          c5_i16) + 6912000];
      }

      c5_i16 += 1800;
    }

    c5_st.site = &c5_b_emlrtRSI;
    c5_polyfit(chartInstance, &c5_st, c5_p);
    c5_x = c5_polyval(chartInstance, c5_p, c5_b_Dis);
    c5_start = c5_x;
    c5_start = muDoubleScalarCeil(c5_start);
    c5_varargin_1 = c5_start - 50.0;
    c5_b_x = c5_varargin_1;
    c5_c_x = c5_b_x;
    c5_d_x = c5_c_x;
    c5_e_x = c5_d_x;
    c5_f_x = c5_e_x;
    c5_g_x = c5_f_x;
    c5_start = muDoubleScalarMax(c5_g_x, 1.0);
    for (c5_i20 = 0; c5_i20 < 3456000; c5_i20++) {
      chartInstance->c5_XYR[c5_i20] = (chartInstance->c5_R[c5_i20] -
        chartInstance->c5_G[c5_i20] > 80.0);
    }

    for (c5_i21 = 0; c5_i21 < 3456000; c5_i21++) {
      chartInstance->c5_bv[c5_i21] = (chartInstance->c5_R[c5_i21] -
        chartInstance->c5_B[c5_i21] > 80.0);
    }

    for (c5_i22 = 0; c5_i22 < 3456000; c5_i22++) {
      chartInstance->c5_XYR[c5_i22] = ((!chartInstance->c5_XYR[c5_i22]) ||
        (!chartInstance->c5_bv[c5_i22]));
    }

    c5_trueCount = 0;
    c5_b_i = 0;
    while (c5_b_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_b_i]) {
        c5_trueCount++;
      }

      c5_b_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_emxInit_real_T(chartInstance, c5_sp, &c5_Mask, 1, &c5_c_emlrtRTEI);
    c5_i23 = c5_Mask->size[0];
    c5_Mask->size[0] = c5_trueCount;
    c5_emxEnsureCapacity_real_T(chartInstance, c5_sp, c5_Mask, c5_i23,
      (emlrtRTEInfo *)NULL);
    c5_partialTrueCount = 0;
    c5_c_i = 0;
    while (c5_c_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_c_i]) {
        c5_d = (real_T)(c5_c_i + 1);
        c5_i24 = (int32_T)emlrtIntegerCheckR2012b(c5_d, &c5_j_emlrtDCI, c5_sp);
        c5_Mask->data[c5_partialTrueCount] = chartInstance->
          c5_Gray[emlrtDynamicBoundsCheckR2012b(c5_i24, 1, 3456000,
          &c5_j_emlrtBCI, c5_sp) - 1];
        c5_partialTrueCount++;
      }

      c5_c_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_b_trueCount = 0;
    c5_d_i = 0;
    while (c5_d_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_d_i]) {
        c5_b_trueCount++;
      }

      c5_d_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i25 = c5_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_b_trueCount, c5_i25, &c5_emlrtECI, c5_sp);
    c5_e_i = 0;
    while (c5_e_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_e_i]) {
        c5_d1 = (real_T)(c5_e_i + 1);
        c5_i26 = (int32_T)emlrtIntegerCheckR2012b(c5_d1, &c5_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i26, 1, 3456000, &c5_emlrtBCI, c5_sp);
      }

      c5_e_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_c_trueCount = 0;
    c5_f_i = 0;
    while (c5_f_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_f_i]) {
        c5_c_trueCount++;
      }

      c5_f_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i27 = c5_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_c_trueCount, c5_i27, &c5_b_emlrtECI,
      c5_sp);
    c5_g_i = 0;
    while (c5_g_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_g_i]) {
        c5_d2 = (real_T)(c5_g_i + 1);
        c5_i28 = (int32_T)emlrtIntegerCheckR2012b(c5_d2, &c5_b_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i28, 1, 3456000, &c5_b_emlrtBCI, c5_sp);
      }

      c5_g_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_d_trueCount = 0;
    c5_h_i = 0;
    while (c5_h_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_h_i]) {
        c5_d_trueCount++;
      }

      c5_h_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i29 = c5_Mask->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_d_trueCount, c5_i29, &c5_c_emlrtECI,
      c5_sp);
    c5_i_i = 0;
    c5_emxFree_real_T(chartInstance, &c5_Mask);
    while (c5_i_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_i_i]) {
        c5_d3 = (real_T)(c5_i_i + 1);
        c5_i31 = (int32_T)emlrtIntegerCheckR2012b(c5_d3, &c5_c_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i31, 1, 3456000, &c5_c_emlrtBCI, c5_sp);
      }

      c5_i_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 1,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c5_covrtInstance, 4U, 0U, 1U, c5_start,
                        300.0, -1, 3U, c5_start <= 300.0))) {
      c5_start = 310.0;
    }

    for (c5_i30 = 0; c5_i30 < 541; c5_i30++) {
      for (c5_i32 = 0; c5_i32 < 501; c5_i32++) {
        c5_d4 = c5_start + (real_T)(int32_T)(-300.0 + (real_T)c5_i32);
        c5_i34 = (int32_T)emlrtIntegerCheckR2012b(c5_d4, &c5_k_emlrtDCI, c5_sp);
        chartInstance->c5_SearchRangeR[c5_i32 + 501 * c5_i30] =
          chartInstance->c5_XYR[(emlrtDynamicBoundsCheckR2012b(c5_i34, 1, 1800,
          &c5_k_emlrtBCI, c5_sp) + 1800 * (699 + c5_i30)) - 1];
      }
    }

    c5_st.site = &c5_c_emlrtRSI;
    for (c5_i33 = 0; c5_i33 < 271041; c5_i33++) {
      chartInstance->c5_SearchRangeR[c5_i33] = !chartInstance->
        c5_SearchRangeR[c5_i33];
    }

    c5_emxInit_real_T(chartInstance, &c5_st, &c5_r, 1, (emlrtRTEInfo *)NULL);
    c5_emxInit_int32_T(chartInstance, &c5_st, &c5_ii, 1, &c5_e_emlrtRTEI);
    c5_b_st.site = &c5_bc_emlrtRSI;
    c5_eml_find(chartInstance, &c5_b_st, chartInstance->c5_SearchRangeR, c5_ii);
    c5_i35 = c5_r->size[0];
    c5_r->size[0] = c5_ii->size[0];
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_st, c5_r, c5_i35,
      &c5_emlrtRTEI);
    c5_loop_ub = c5_ii->size[0] - 1;
    for (c5_i36 = 0; c5_i36 <= c5_loop_ub; c5_i36++) {
      c5_r->data[c5_i36] = (real_T)c5_ii->data[c5_i36];
    }

    c5_emxFree_int32_T(chartInstance, &c5_ii);
    c5_b_varargin_1 = c5_r->size[0];
    c5_c_varargin_1 = c5_b_varargin_1;
    c5_n = (real_T)c5_c_varargin_1;
    c5_d_varargin_1 = c5_r->size[0];
    c5_e_varargin_1 = c5_d_varargin_1;
    c5_b_n = (real_T)c5_e_varargin_1;
    c5_emxFree_real_T(chartInstance, &c5_r);
    if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 2,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c5_covrtInstance, 4U, 0U, 2U, c5_n, 1.0,
                        -1, 5U, c5_b_n >= 1.0))) {
      c5_b_Light_State = 1.0;
    }

    for (c5_i37 = 0; c5_i37 < 3456000; c5_i37++) {
      chartInstance->c5_XYR[c5_i37] = (chartInstance->c5_G[c5_i37] -
        chartInstance->c5_R[c5_i37] > 30.0);
    }

    for (c5_i38 = 0; c5_i38 < 3456000; c5_i38++) {
      chartInstance->c5_bv[c5_i38] = (chartInstance->c5_G[c5_i38] -
        chartInstance->c5_B[c5_i38] > 30.0);
    }

    for (c5_i39 = 0; c5_i39 < 3456000; c5_i39++) {
      chartInstance->c5_XYR[c5_i39] = ((!chartInstance->c5_XYR[c5_i39]) ||
        (!chartInstance->c5_bv[c5_i39]));
    }

    c5_j_i = 0;
    while (c5_j_i <= 3455999) {
      c5_j_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_k_i = 0;
    while (c5_k_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_k_i]) {
        c5_d5 = (real_T)(c5_k_i + 1);
        c5_i40 = (int32_T)emlrtIntegerCheckR2012b(c5_d5, &c5_d_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i40, 1, 3456000, &c5_d_emlrtBCI, c5_sp);
      }

      c5_k_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_l_i = 0;
    while (c5_l_i <= 3455999) {
      c5_l_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_m_i = 0;
    while (c5_m_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_m_i]) {
        c5_d6 = (real_T)(c5_m_i + 1);
        c5_i41 = (int32_T)emlrtIntegerCheckR2012b(c5_d6, &c5_e_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i41, 1, 3456000, &c5_e_emlrtBCI, c5_sp);
      }

      c5_m_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_n_i = 0;
    while (c5_n_i <= 3455999) {
      c5_n_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_o_i = 0;
    while (c5_o_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_o_i]) {
        c5_d7 = (real_T)(c5_o_i + 1);
        c5_i43 = (int32_T)emlrtIntegerCheckR2012b(c5_d7, &c5_f_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i43, 1, 3456000, &c5_f_emlrtBCI, c5_sp);
      }

      c5_o_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 3,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c5_covrtInstance, 4U, 0U, 3U, c5_start,
                        100.0, -1, 3U, c5_start <= 100.0))) {
      c5_start = 110.0;
    }

    for (c5_i42 = 0; c5_i42 < 921; c5_i42++) {
      for (c5_i44 = 0; c5_i44 < 301; c5_i44++) {
        c5_d8 = c5_start + (real_T)(int32_T)(-100.0 + (real_T)c5_i44);
        c5_i46 = (int32_T)emlrtIntegerCheckR2012b(c5_d8, &c5_l_emlrtDCI, c5_sp);
        chartInstance->c5_SearchRangeG[c5_i44 + 301 * c5_i42] =
          chartInstance->c5_XYR[(emlrtDynamicBoundsCheckR2012b(c5_i46, 1, 1800,
          &c5_l_emlrtBCI, c5_sp) + 1800 * (499 + c5_i42)) - 1];
      }
    }

    c5_st.site = &c5_d_emlrtRSI;
    for (c5_i45 = 0; c5_i45 < 277221; c5_i45++) {
      chartInstance->c5_SearchRangeG[c5_i45] = !chartInstance->
        c5_SearchRangeG[c5_i45];
    }

    c5_emxInit_real_T(chartInstance, &c5_st, &c5_r1, 1, (emlrtRTEInfo *)NULL);
    c5_emxInit_int32_T(chartInstance, &c5_st, &c5_b_ii, 1, &c5_e_emlrtRTEI);
    c5_b_st.site = &c5_bc_emlrtRSI;
    c5_b_eml_find(chartInstance, &c5_b_st, chartInstance->c5_SearchRangeG,
                  c5_b_ii);
    c5_i47 = c5_r1->size[0];
    c5_r1->size[0] = c5_b_ii->size[0];
    c5_emxEnsureCapacity_real_T(chartInstance, &c5_st, c5_r1, c5_i47,
      &c5_b_emlrtRTEI);
    c5_b_loop_ub = c5_b_ii->size[0] - 1;
    for (c5_i48 = 0; c5_i48 <= c5_b_loop_ub; c5_i48++) {
      c5_r1->data[c5_i48] = (real_T)c5_b_ii->data[c5_i48];
    }

    c5_emxFree_int32_T(chartInstance, &c5_b_ii);
    c5_f_varargin_1 = c5_r1->size[0];
    c5_g_varargin_1 = c5_f_varargin_1;
    c5_c_n = (real_T)c5_g_varargin_1;
    c5_h_varargin_1 = c5_r1->size[0];
    c5_i_varargin_1 = c5_h_varargin_1;
    c5_d_n = (real_T)c5_i_varargin_1;
    c5_emxFree_real_T(chartInstance, &c5_r1);
    if (covrtEmlIfEval(chartInstance->c5_covrtInstance, 4U, 0, 4,
                       covrtRelationalopUpdateFcn
                       (chartInstance->c5_covrtInstance, 4U, 0U, 4U, c5_c_n,
                        50.0, -1, 5U, c5_d_n >= 50.0))) {
      c5_b_Light_State = 2.0;
    }

    for (c5_i49 = 0; c5_i49 < 3456000; c5_i49++) {
      chartInstance->c5_XYR[c5_i49] = (chartInstance->c5_B[c5_i49] -
        chartInstance->c5_R[c5_i49] > 10.0);
    }

    for (c5_i50 = 0; c5_i50 < 3456000; c5_i50++) {
      chartInstance->c5_bv[c5_i50] = (chartInstance->c5_B[c5_i50] -
        chartInstance->c5_G[c5_i50] > 10.0);
    }

    for (c5_i51 = 0; c5_i51 < 3456000; c5_i51++) {
      chartInstance->c5_XYR[c5_i51] = ((!chartInstance->c5_XYR[c5_i51]) ||
        (!chartInstance->c5_bv[c5_i51]));
    }

    c5_e_trueCount = 0;
    c5_p_i = 0;
    while (c5_p_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_p_i]) {
        c5_e_trueCount++;
      }

      c5_p_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_emxInit_real_T(chartInstance, c5_sp, &c5_Mask_B, 1, &c5_d_emlrtRTEI);
    c5_i52 = c5_Mask_B->size[0];
    c5_Mask_B->size[0] = c5_e_trueCount;
    c5_emxEnsureCapacity_real_T(chartInstance, c5_sp, c5_Mask_B, c5_i52,
      (emlrtRTEInfo *)NULL);
    c5_b_partialTrueCount = 0;
    c5_q_i = 0;
    while (c5_q_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_q_i]) {
        c5_d9 = (real_T)(c5_q_i + 1);
        c5_i53 = (int32_T)emlrtIntegerCheckR2012b(c5_d9, &c5_m_emlrtDCI, c5_sp);
        c5_Mask_B->data[c5_b_partialTrueCount] = chartInstance->
          c5_Gray[emlrtDynamicBoundsCheckR2012b(c5_i53, 1, 3456000,
          &c5_m_emlrtBCI, c5_sp) - 1];
        c5_b_partialTrueCount++;
      }

      c5_q_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_f_trueCount = 0;
    c5_r_i = 0;
    while (c5_r_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_r_i]) {
        c5_f_trueCount++;
      }

      c5_r_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i54 = c5_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_f_trueCount, c5_i54, &c5_d_emlrtECI,
      c5_sp);
    c5_s_i = 0;
    while (c5_s_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_s_i]) {
        c5_d10 = (real_T)(c5_s_i + 1);
        c5_i55 = (int32_T)emlrtIntegerCheckR2012b(c5_d10, &c5_g_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i55, 1, 3456000, &c5_g_emlrtBCI, c5_sp);
      }

      c5_s_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_g_trueCount = 0;
    c5_t_i = 0;
    while (c5_t_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_t_i]) {
        c5_g_trueCount++;
      }

      c5_t_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i56 = c5_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_g_trueCount, c5_i56, &c5_e_emlrtECI,
      c5_sp);
    c5_u_i = 0;
    while (c5_u_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_u_i]) {
        c5_d11 = (real_T)(c5_u_i + 1);
        c5_i57 = (int32_T)emlrtIntegerCheckR2012b(c5_d11, &c5_h_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i57, 1, 3456000, &c5_h_emlrtBCI, c5_sp);
      }

      c5_u_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_h_trueCount = 0;
    c5_v_i = 0;
    while (c5_v_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_v_i]) {
        c5_h_trueCount++;
      }

      c5_v_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }

    c5_i58 = c5_Mask_B->size[0];
    emlrtSubAssignSizeCheck1dR2017a(c5_h_trueCount, c5_i58, &c5_f_emlrtECI,
      c5_sp);
    c5_w_i = 0;
    c5_emxFree_real_T(chartInstance, &c5_Mask_B);
    while (c5_w_i <= 3455999) {
      if (chartInstance->c5_XYR[c5_w_i]) {
        c5_d12 = (real_T)(c5_w_i + 1);
        c5_i59 = (int32_T)emlrtIntegerCheckR2012b(c5_d12, &c5_i_emlrtDCI, c5_sp);
        emlrtDynamicBoundsCheckR2012b(c5_i59, 1, 3456000, &c5_i_emlrtBCI, c5_sp);
      }

      c5_w_i++;
      _SF_MEX_LISTEN_FOR_CTRL_C(chartInstance->S);
    }
  }

  *chartInstance->c5_Light_State = c5_b_Light_State;
}

static void initSimStructsc5_Traffic_Light_cs
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c5_Traffic_Light_cs_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static void c5_rgb2gray(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c5_X[10368000], real_T c5_I[3456000])
{
  (void)chartInstance;
  rgb2gray_tbb_real64(c5_X, 3.456E+6, c5_I, true);
}

static void c5_polyfit(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, real_T c5_p[6])
{
  emlrtStack c5_st;
  int32_T c5_rr;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_g_emlrtRSI;
  c5_qrsolve(chartInstance, &c5_st, c5_p, &c5_rr);
  if (c5_rr <= 5) {
    c5_st.site = &c5_h_emlrtRSI;
    c5_b_warning(chartInstance, &c5_st);
  }
}

static void c5_qrsolve(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, real_T c5_Y[6], int32_T *c5_rankR)
{
  emlrtStack c5_st;
  real_T c5_A[510];
  real_T c5_tau[6];
  int32_T c5_jpvt[6];
  int32_T c5_i;
  real_T c5_b_A[510];
  int32_T c5_i1;
  real_T c5_dv[85];
  static real_T c5_dv1[85] = { 765.0, 762.0, 760.0, 759.0, 758.0, 756.0, 755.0,
    753.0, 751.0, 750.0, 748.0, 746.0, 744.0, 743.0, 742.0, 740.0, 738.0, 737.0,
    734.0, 732.0, 731.0, 729.0, 727.0, 725.0, 722.0, 720.0, 718.0, 716.0, 712.0,
    711.0, 707.0, 705.0, 702.0, 700.0, 695.0, 694.0, 690.0, 687.0, 682.0, 680.0,
    678.0, 671.0, 670.0, 666.0, 663.0, 656.0, 653.0, 650.0, 646.0, 640.0, 636.0,
    631.0, 627.0, 621.0, 616.0, 608.0, 602.0, 597.0, 592.0, 587.0, 577.0, 570.0,
    562.0, 551.0, 544.0, 536.0, 528.0, 516.0, 505.0, 495.0, 483.0, 473.0, 459.0,
    443.0, 429.0, 413.0, 395.0, 379.0, 358.0, 336.0, 312.0, 289.0, 262.0, 242.0,
    202.0 };

  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_i_emlrtRSI;
  c5_xgeqp3(chartInstance, &c5_st, c5_A, c5_tau, c5_jpvt);
  for (c5_i = 0; c5_i < 510; c5_i++) {
    c5_b_A[c5_i] = c5_A[c5_i];
  }

  c5_st.site = &c5_j_emlrtRSI;
  *c5_rankR = c5_rankFromQR(chartInstance, &c5_st, c5_b_A);
  for (c5_i1 = 0; c5_i1 < 85; c5_i1++) {
    c5_dv[c5_i1] = c5_dv1[c5_i1];
  }

  c5_st.site = &c5_k_emlrtRSI;
  c5_LSQFromQR(chartInstance, &c5_st, c5_A, c5_tau, c5_jpvt, c5_dv, c5_Y);
}

static void c5_xgeqp3(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
                      emlrtStack *c5_sp, real_T c5_A[510], real_T c5_tau[6],
                      int32_T c5_jpvt[6])
{
  emlrtStack c5_st;
  emlrtStack c5_b_st;
  int32_T c5_i;
  int32_T c5_i1;
  static real_T c5_b_A[510] = { 2.373046875E+9, 2.2643526711194296E+9,
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

  ptrdiff_t c5_lda_t;
  ptrdiff_t c5_jpvt_t[6];
  ptrdiff_t c5_m_t;
  ptrdiff_t c5_n_t;
  ptrdiff_t c5_info_t;
  int32_T c5_info;
  int32_T c5_b_info;
  int32_T c5_c_info;
  boolean_T c5_p;
  boolean_T c5_b_p;
  int32_T c5_val;
  boolean_T c5_c_p;
  int32_T c5_k;
  int32_T c5_j;
  int32_T c5_b_k;
  int32_T c5_c_k;
  int32_T c5_b_j;
  int32_T c5_b_i;
  int32_T c5_d_k;
  const mxArray *c5_y = NULL;
  const mxArray *c5_b_y = NULL;
  int32_T c5_c_i;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  static char_T c5_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'g',
    'e', 'q', 'p', '3' };

  const mxArray *c5_f_y = NULL;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_st.site = &c5_l_emlrtRSI;
  for (c5_i = 0; c5_i < 510; c5_i++) {
    c5_A[c5_i] = c5_b_A[c5_i];
  }

  for (c5_i1 = 0; c5_i1 < 6; c5_i1++) {
    c5_jpvt_t[c5_i1] = (ptrdiff_t)0;
  }

  c5_lda_t = (ptrdiff_t)85;
  c5_m_t = (ptrdiff_t)85;
  c5_n_t = (ptrdiff_t)6;
  c5_info_t = LAPACKE_dgeqp3(102, c5_m_t, c5_n_t, &c5_A[0], c5_lda_t,
    &c5_jpvt_t[0], &c5_tau[0]);
  c5_info = (int32_T)c5_info_t;
  c5_b_st.site = &c5_f_emlrtRSI;
  c5_b_info = c5_info;
  c5_c_info = c5_b_info;
  c5_p = (c5_c_info != 0);
  if (c5_p) {
    c5_b_p = true;
    c5_val = c5_b_info;
    c5_c_p = false;
    if (c5_val == -4) {
      c5_c_p = true;
    }

    if (!c5_c_p) {
      if (c5_b_info == -1010) {
        c5_b_y = NULL;
        sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        c5_d_y = NULL;
        sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        sf_mex_call(&c5_b_st, "error", 0U, 2U, 14, c5_b_y, 14, sf_mex_call
                    (&c5_b_st, "getString", 1U, 1U, 14, sf_mex_call(&c5_b_st,
          "message", 1U, 1U, 14, c5_d_y)));
      } else {
        c5_y = NULL;
        sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                      false);
        c5_c_y = NULL;
        sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c5_e_y = NULL;
        sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1,
          14), false);
        c5_f_y = NULL;
        sf_mex_assign(&c5_f_y, sf_mex_create("y", &c5_b_info, 6, 0U, 0U, 0U, 0),
                      false);
        sf_mex_call(&c5_b_st, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
                    (&c5_b_st, "getString", 1U, 1U, 14, sf_mex_call(&c5_b_st,
          "message", 1U, 3U, 14, c5_c_y, 14, c5_e_y, 14, c5_f_y)));
      }
    }
  } else {
    c5_b_p = false;
  }

  if (c5_b_p) {
    for (c5_j = 0; c5_j < 6; c5_j++) {
      c5_b_j = c5_j;
      for (c5_b_i = 0; c5_b_i < 85; c5_b_i++) {
        c5_c_i = c5_b_i;
        c5_A[c5_b_j * 85 + c5_c_i] = rtNaN;
      }
    }

    for (c5_c_k = 0; c5_c_k < 6; c5_c_k++) {
      c5_b_k = c5_c_k;
      c5_tau[c5_b_k] = rtNaN;
    }

    for (c5_d_k = 0; c5_d_k < 6; c5_d_k++) {
      c5_b_k = c5_d_k;
      c5_jpvt[c5_b_k] = c5_b_k + 1;
    }
  } else {
    for (c5_k = 0; c5_k < 6; c5_k++) {
      c5_b_k = c5_k;
      c5_jpvt[c5_b_k] = (int32_T)c5_jpvt_t[c5_b_k];
    }
  }
}

static void c5_check_forloop_overflow_error(SFc5_Traffic_Light_csInstanceStruct *
  chartInstance, const emlrtStack *c5_sp)
{
  const mxArray *c5_y = NULL;
  static char_T c5_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  static char_T c5_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  (void)chartInstance;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 34),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 5),
                false);
  sf_mex_call(c5_sp, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call(c5_sp,
    "getString", 1U, 1U, 14, sf_mex_call(c5_sp, "message", 1U, 2U, 14, c5_b_y,
    14, c5_c_y)));
}

static int32_T c5_rankFromQR(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_A[510])
{
  int32_T c5_r;
  emlrtStack c5_st;
  real_T c5_x;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_y;
  real_T c5_tol;
  boolean_T c5_exitg1;
  real_T c5_d_x;
  real_T c5_e_x;
  real_T c5_f_x;
  real_T c5_g_x;
  const mxArray *c5_b_y = NULL;
  real_T c5_c_y;
  static char_T c5_rfmt[6] = { '%', '1', '4', '.', '6', 'e' };

  const mxArray *c5_d_y = NULL;
  char_T c5_str[14];
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_r = 0;
  c5_x = c5_A[0];
  c5_b_x = c5_x;
  c5_c_x = c5_b_x;
  c5_y = muDoubleScalarAbs(c5_c_x);
  c5_tol = 1.8873791418627661E-13 * c5_y;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_r < 6)) {
    c5_d_x = c5_A[c5_r + 85 * c5_r];
    c5_e_x = c5_d_x;
    c5_g_x = c5_e_x;
    c5_c_y = muDoubleScalarAbs(c5_g_x);
    if (!(c5_c_y <= c5_tol)) {
      c5_r++;
    } else {
      c5_exitg1 = true;
    }
  }

  if (c5_r < 6) {
    c5_st.site = &c5_rb_emlrtRSI;
    c5_f_x = c5_tol;
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_rfmt, 10, 0U, 1U, 0U, 2, 1, 6),
                  false);
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_f_x, 0, 0U, 0U, 0U, 0), false);
    c5_emlrt_marshallIn(chartInstance, sf_mex_call(&c5_st, "sprintf", 1U, 2U, 14,
      c5_b_y, 14, c5_d_y), "<output of sprintf>", c5_str);
    c5_st.site = &c5_sb_emlrtRSI;
    c5_warning(chartInstance, &c5_st, c5_r, c5_str);
  }

  return c5_r;
}

static void c5_warning(SFc5_Traffic_Light_csInstanceStruct *chartInstance, const
  emlrtStack *c5_sp, int32_T c5_varargin_1, char_T c5_varargin_2[14])
{
  const mxArray *c5_y = NULL;
  static char_T c5_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c5_b_y = NULL;
  static char_T c5_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c5_c_y = NULL;
  static char_T c5_msgID[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  (void)chartInstance;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_msgID, 10, 0U, 1U, 0U, 2, 1, 32),
                false);
  c5_d_y = NULL;
  sf_mex_assign(&c5_d_y, sf_mex_create("y", &c5_varargin_1, 6, 0U, 0U, 0U, 0),
                false);
  c5_e_y = NULL;
  sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_varargin_2, 10, 0U, 1U, 0U, 2, 1,
    14), false);
  sf_mex_call(c5_sp, "feval", 0U, 2U, 14, c5_y, 14, sf_mex_call(c5_sp, "feval",
    1U, 4U, 14, c5_b_y, 14, c5_c_y, 14, c5_d_y, 14, c5_e_y));
}

static void c5_LSQFromQR(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_A[510], real_T c5_tau[6], int32_T c5_jpvt[6],
  real_T c5_b_B[85], real_T c5_Y[6])
{
  emlrtStack c5_st;
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  int32_T c5_i;
  ptrdiff_t c5_nrc_t;
  ptrdiff_t c5_ncc_t;
  ptrdiff_t c5_nrf_t;
  ptrdiff_t c5_lda_t;
  ptrdiff_t c5_info_t;
  int32_T c5_info;
  int32_T c5_b_info;
  int32_T c5_c_info;
  boolean_T c5_p;
  boolean_T c5_b_p;
  int32_T c5_val;
  boolean_T c5_c_p;
  int32_T c5_i1;
  int32_T c5_b_i;
  int32_T c5_j;
  int32_T c5_c_i;
  const mxArray *c5_y = NULL;
  const mxArray *c5_b_y = NULL;
  int32_T c5_pj;
  real_T c5_x;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  real_T c5_e_y;
  real_T c5_z;
  const mxArray *c5_f_y = NULL;
  static char_T c5_b_cv[14] = { 'L', 'A', 'P', 'A', 'C', 'K', 'E', '_', 'd', 'o',
    'r', 'm', 'q', 'r' };

  int32_T c5_i2;
  const mxArray *c5_g_y = NULL;
  int32_T c5_b;
  int32_T c5_b_b;
  boolean_T c5_overflow;
  int32_T c5_d_i;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  for (c5_i = 0; c5_i < 6; c5_i++) {
    c5_Y[c5_i] = 0.0;
  }

  c5_st.site = &c5_tb_emlrtRSI;
  c5_b_st.site = &c5_wb_emlrtRSI;
  c5_nrc_t = (ptrdiff_t)85;
  c5_ncc_t = (ptrdiff_t)1;
  c5_nrf_t = (ptrdiff_t)6;
  c5_lda_t = (ptrdiff_t)85;
  c5_info_t = LAPACKE_dormqr(102, 'L', 'T', c5_nrc_t, c5_ncc_t, c5_nrf_t, &c5_A
    [0], c5_lda_t, &c5_tau[0], &c5_b_B[0], c5_nrc_t);
  c5_info = (int32_T)c5_info_t;
  c5_c_st.site = &c5_xb_emlrtRSI;
  c5_b_info = c5_info;
  c5_c_info = c5_b_info;
  c5_p = (c5_c_info != 0);
  if (c5_p) {
    c5_b_p = true;
    c5_val = c5_b_info;
    c5_c_p = false;
    if (c5_val == -7) {
      c5_c_p = true;
    } else if (c5_val == -9) {
      c5_c_p = true;
    } else {
      if (c5_val == -10) {
        c5_c_p = true;
      }
    }

    if (!c5_c_p) {
      if (c5_b_info == -1010) {
        c5_b_y = NULL;
        sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        c5_d_y = NULL;
        sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1,
          12), false);
        sf_mex_call(&c5_c_st, "error", 0U, 2U, 14, c5_b_y, 14, sf_mex_call
                    (&c5_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c5_c_st,
          "message", 1U, 1U, 14, c5_d_y)));
      } else {
        c5_y = NULL;
        sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 33),
                      false);
        c5_c_y = NULL;
        sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1,
          33), false);
        c5_f_y = NULL;
        sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1,
          14), false);
        c5_g_y = NULL;
        sf_mex_assign(&c5_g_y, sf_mex_create("y", &c5_b_info, 6, 0U, 0U, 0U, 0),
                      false);
        sf_mex_call(&c5_c_st, "error", 0U, 2U, 14, c5_y, 14, sf_mex_call
                    (&c5_c_st, "getString", 1U, 1U, 14, sf_mex_call(&c5_c_st,
          "message", 1U, 3U, 14, c5_c_y, 14, c5_f_y, 14, c5_g_y)));
      }
    }
  } else {
    c5_b_p = false;
  }

  if (c5_b_p) {
    for (c5_i1 = 0; c5_i1 < 85; c5_i1++) {
      c5_b_B[c5_i1] = rtNaN;
    }
  }

  c5_st.site = &c5_ub_emlrtRSI;
  for (c5_b_i = 0; c5_b_i < 6; c5_b_i++) {
    c5_c_i = c5_b_i;
    c5_Y[c5_jpvt[c5_c_i] - 1] = c5_b_B[c5_c_i];
  }

  for (c5_j = 5; c5_j >= 0; c5_j--) {
    c5_pj = c5_jpvt[c5_j] - 1;
    c5_x = c5_Y[c5_pj];
    c5_e_y = c5_A[c5_j + 85 * c5_j];
    c5_z = c5_x / c5_e_y;
    c5_Y[c5_pj] = c5_z;
    c5_i2 = c5_j;
    c5_st.site = &c5_vb_emlrtRSI;
    c5_b = c5_i2;
    c5_b_b = c5_b;
    if (1 > c5_b_b) {
      c5_overflow = false;
    } else {
      c5_overflow = (c5_b_b > 2147483646);
    }

    if (c5_overflow) {
      c5_b_st.site = &c5_v_emlrtRSI;
      c5_check_forloop_overflow_error(chartInstance, &c5_b_st);
    }

    for (c5_d_i = 1; c5_d_i - 1 < c5_i2; c5_d_i++) {
      c5_c_i = c5_d_i - 1;
      c5_Y[c5_jpvt[c5_c_i] - 1] -= c5_Y[c5_pj] * c5_A[c5_c_i + 85 * c5_j];
    }
  }
}

static void c5_b_warning(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp)
{
  const mxArray *c5_y = NULL;
  static char_T c5_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  const mxArray *c5_b_y = NULL;
  static char_T c5_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  const mxArray *c5_c_y = NULL;
  static char_T c5_msgID[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'o', 'l', 'y', 'f', 'i', 't', '_', 'R', 'e', 'p',
    'e', 'a', 't', 'e', 'd', 'P', 'o', 'i', 'n', 't', 's', 'O', 'r', 'R', 'e',
    's', 'c', 'a', 'l', 'e' };

  (void)chartInstance;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_msgID, 10, 0U, 1U, 0U, 2, 1, 44),
                false);
  sf_mex_call(c5_sp, "feval", 0U, 2U, 14, c5_y, 14, sf_mex_call(c5_sp, "feval",
    1U, 2U, 14, c5_b_y, 14, c5_c_y));
}

static real_T c5_polyval(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  real_T c5_p[6], real_T c5_x)
{
  real_T c5_y;
  int32_T c5_k;
  real_T c5_b_k;
  (void)chartInstance;
  c5_y = c5_p[0];
  for (c5_k = 0; c5_k < 5; c5_k++) {
    c5_b_k = (real_T)c5_k + 2.0;
    c5_y = c5_x * c5_y + c5_p[(int32_T)c5_b_k - 1];
  }

  return c5_y;
}

static void c5_indexShapeCheck(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c5_eml_find(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_x[271041], c5_emxArray_int32_T *c5_i)
{
  emlrtStack c5_st;
  int32_T c5_idx;
  int32_T c5_b_i;
  int32_T c5_ii;
  boolean_T c5_exitg1;
  boolean_T c5_b;
  int32_T c5_b_ii;
  int32_T c5_i1;
  int32_T c5_i2;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_cc_emlrtRSI;
  c5_idx = 0;
  c5_b_i = c5_i->size[0];
  c5_i->size[0] = 271041;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_i, c5_b_i,
    &c5_f_emlrtRTEI);
  c5_ii = 1;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_ii - 1 < 271041)) {
    c5_b_ii = c5_ii;
    if (c5_x[c5_b_ii - 1]) {
      c5_idx++;
      c5_i->data[c5_idx - 1] = c5_b_ii;
      if (c5_idx >= 271041) {
        c5_exitg1 = true;
      } else {
        c5_ii++;
      }
    } else {
      c5_ii++;
    }
  }

  c5_b = (1 > c5_idx);
  if (c5_b) {
    c5_i1 = 0;
  } else {
    c5_i1 = c5_idx;
  }

  c5_b_indexShapeCheck(chartInstance);
  c5_i2 = c5_i->size[0];
  c5_i->size[0] = c5_i1;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_i, c5_i2,
    &c5_g_emlrtRTEI);
}

static void c5_b_indexShapeCheck(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c5_b_eml_find(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, boolean_T c5_x[277221], c5_emxArray_int32_T *c5_i)
{
  emlrtStack c5_st;
  int32_T c5_idx;
  int32_T c5_b_i;
  int32_T c5_ii;
  boolean_T c5_exitg1;
  boolean_T c5_b;
  int32_T c5_b_ii;
  int32_T c5_i1;
  int32_T c5_i2;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_cc_emlrtRSI;
  c5_idx = 0;
  c5_b_i = c5_i->size[0];
  c5_i->size[0] = 277221;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_i, c5_b_i,
    &c5_f_emlrtRTEI);
  c5_ii = 1;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_ii - 1 < 277221)) {
    c5_b_ii = c5_ii;
    if (c5_x[c5_b_ii - 1]) {
      c5_idx++;
      c5_i->data[c5_idx - 1] = c5_b_ii;
      if (c5_idx >= 277221) {
        c5_exitg1 = true;
      } else {
        c5_ii++;
      }
    } else {
      c5_ii++;
    }
  }

  c5_b = (1 > c5_idx);
  if (c5_b) {
    c5_i1 = 0;
  } else {
    c5_i1 = c5_idx;
  }

  c5_b_indexShapeCheck(chartInstance);
  c5_i2 = c5_i->size[0];
  c5_i->size[0] = c5_i1;
  c5_emxEnsureCapacity_int32_T(chartInstance, &c5_st, c5_i, c5_i2,
    &c5_g_emlrtRTEI);
}

static void c5_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_a__output_of_sprintf_, const char_T
  *c5_identifier, char_T c5_y[14])
{
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_a__output_of_sprintf_),
                        &c5_thisId, c5_y);
  sf_mex_destroy(&c5_a__output_of_sprintf_);
}

static void c5_b_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId,
  char_T c5_y[14])
{
  char_T c5_b_cv[14];
  int32_T c5_i;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), c5_b_cv, 1, 10, 0U, 1, 0U, 2, 1,
                14);
  for (c5_i = 0; c5_i < 14; c5_i++) {
    c5_y[c5_i] = c5_b_cv[c5_i];
  }

  sf_mex_destroy(&c5_u);
}

static real_T c5_c_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_b_Light_State, const char_T *c5_identifier)
{
  real_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_Light_State),
    &c5_thisId);
  sf_mex_destroy(&c5_b_Light_State);
  return c5_y;
}

static real_T c5_d_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_y;
  real_T c5_d;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint8_T c5_e_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_Traffic_Light_cs, const
  char_T *c5_identifier)
{
  uint8_T c5_y;
  emlrtMsgIdentifier c5_thisId;
  c5_thisId.fIdentifier = (const char *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_f_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_Traffic_Light_cs), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_Traffic_Light_cs);
  return c5_y;
}

static uint8_T c5_f_emlrt_marshallIn(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_y;
  uint8_T c5_b_u;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_b_u;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static const mxArray *c5_chart_data_browse_helper
  (SFc5_Traffic_Light_csInstanceStruct *chartInstance, int32_T c5_ssIdNumber)
{
  const mxArray *c5_mxData = NULL;
  real_T c5_d;
  real_T c5_d1;
  c5_mxData = NULL;
  switch (c5_ssIdNumber) {
   case 6U:
    c5_d = *chartInstance->c5_Dis;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 4U:
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", *chartInstance->c5_R_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;

   case 5U:
    c5_d1 = *chartInstance->c5_Light_State;
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", &c5_d1, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 7U:
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", *chartInstance->c5_G_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;

   case 8U:
    sf_mex_assign(&c5_mxData, sf_mex_create("mxData", *chartInstance->c5_B_Ori,
      3, 0U, 1U, 0U, 2, 1800, 1920), false);
    break;
  }

  return c5_mxData;
}

static void c5_emxEnsureCapacity_real_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_real_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation)
{
  int32_T c5_newNumel;
  int32_T c5_i;
  int32_T c5_newCapacity;
  void *c5_newData;
  (void)chartInstance;
  if (c5_oldNumel < 0) {
    c5_oldNumel = 0;
  }

  c5_newNumel = 1;
  for (c5_i = 0; c5_i < c5_emxArray->numDimensions; c5_i++) {
    c5_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c5_newNumel, (uint32_T)
      c5_emxArray->size[c5_i], c5_srcLocation, c5_sp);
  }

  if (c5_newNumel > c5_emxArray->allocatedSize) {
    c5_newCapacity = c5_emxArray->allocatedSize;
    if (c5_newCapacity < 16) {
      c5_newCapacity = 16;
    }

    while (c5_newCapacity < c5_newNumel) {
      if (c5_newCapacity > 1073741823) {
        c5_newCapacity = MAX_int32_T;
      } else {
        c5_newCapacity <<= 1;
      }
    }

    c5_newData = emlrtCallocMex((uint32_T)c5_newCapacity, sizeof(real_T));
    if (c5_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
    }

    if (c5_emxArray->data != NULL) {
      memcpy(c5_newData, c5_emxArray->data, sizeof(real_T) * (uint32_T)
             c5_oldNumel);
      if (c5_emxArray->canFreeData) {
        emlrtFreeMex(c5_emxArray->data);
      }
    }

    c5_emxArray->data = (real_T *)c5_newData;
    c5_emxArray->allocatedSize = c5_newCapacity;
    c5_emxArray->canFreeData = true;
  }
}

static void c5_emxInit_real_T(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, c5_emxArray_real_T **c5_pEmxArray, int32_T
  c5_numDimensions, const emlrtRTEInfo *c5_srcLocation)
{
  c5_emxArray_real_T *c5_emxArray;
  int32_T c5_i;
  (void)chartInstance;
  *c5_pEmxArray = (c5_emxArray_real_T *)emlrtMallocMex(sizeof(c5_emxArray_real_T));
  if ((void *)*c5_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
  }

  c5_emxArray = *c5_pEmxArray;
  c5_emxArray->data = (real_T *)NULL;
  c5_emxArray->numDimensions = c5_numDimensions;
  c5_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c5_numDimensions);
  if ((void *)c5_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
  }

  c5_emxArray->allocatedSize = 0;
  c5_emxArray->canFreeData = true;
  for (c5_i = 0; c5_i < c5_numDimensions; c5_i++) {
    c5_emxArray->size[c5_i] = 0;
  }
}

static void c5_emxInit_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T **c5_pEmxArray,
  int32_T c5_numDimensions, const emlrtRTEInfo *c5_srcLocation)
{
  c5_emxArray_int32_T *c5_emxArray;
  int32_T c5_i;
  (void)chartInstance;
  *c5_pEmxArray = (c5_emxArray_int32_T *)emlrtMallocMex(sizeof
    (c5_emxArray_int32_T));
  if ((void *)*c5_pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
  }

  c5_emxArray = *c5_pEmxArray;
  c5_emxArray->data = (int32_T *)NULL;
  c5_emxArray->numDimensions = c5_numDimensions;
  c5_emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
    c5_numDimensions);
  if ((void *)c5_emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
  }

  c5_emxArray->allocatedSize = 0;
  c5_emxArray->canFreeData = true;
  for (c5_i = 0; c5_i < c5_numDimensions; c5_i++) {
    c5_emxArray->size[c5_i] = 0;
  }
}

static void c5_emxFree_real_T(SFc5_Traffic_Light_csInstanceStruct *chartInstance,
  c5_emxArray_real_T **c5_pEmxArray)
{
  (void)chartInstance;
  if (*c5_pEmxArray != (c5_emxArray_real_T *)NULL) {
    if (((*c5_pEmxArray)->data != (real_T *)NULL) && (*c5_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c5_pEmxArray)->data);
    }

    emlrtFreeMex((*c5_pEmxArray)->size);
    emlrtFreeMex(*c5_pEmxArray);
    *c5_pEmxArray = (c5_emxArray_real_T *)NULL;
  }
}

static void c5_emxFree_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, c5_emxArray_int32_T **c5_pEmxArray)
{
  (void)chartInstance;
  if (*c5_pEmxArray != (c5_emxArray_int32_T *)NULL) {
    if (((*c5_pEmxArray)->data != (int32_T *)NULL) && (*c5_pEmxArray)
        ->canFreeData) {
      emlrtFreeMex((*c5_pEmxArray)->data);
    }

    emlrtFreeMex((*c5_pEmxArray)->size);
    emlrtFreeMex(*c5_pEmxArray);
    *c5_pEmxArray = (c5_emxArray_int32_T *)NULL;
  }
}

static void c5_emxEnsureCapacity_int32_T(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, c5_emxArray_int32_T *c5_emxArray,
  int32_T c5_oldNumel, const emlrtRTEInfo *c5_srcLocation)
{
  int32_T c5_newNumel;
  int32_T c5_i;
  int32_T c5_newCapacity;
  void *c5_newData;
  (void)chartInstance;
  if (c5_oldNumel < 0) {
    c5_oldNumel = 0;
  }

  c5_newNumel = 1;
  for (c5_i = 0; c5_i < c5_emxArray->numDimensions; c5_i++) {
    c5_newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)c5_newNumel, (uint32_T)
      c5_emxArray->size[c5_i], c5_srcLocation, c5_sp);
  }

  if (c5_newNumel > c5_emxArray->allocatedSize) {
    c5_newCapacity = c5_emxArray->allocatedSize;
    if (c5_newCapacity < 16) {
      c5_newCapacity = 16;
    }

    while (c5_newCapacity < c5_newNumel) {
      if (c5_newCapacity > 1073741823) {
        c5_newCapacity = MAX_int32_T;
      } else {
        c5_newCapacity <<= 1;
      }
    }

    c5_newData = emlrtCallocMex((uint32_T)c5_newCapacity, sizeof(int32_T));
    if (c5_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c5_srcLocation, c5_sp);
    }

    if (c5_emxArray->data != NULL) {
      memcpy(c5_newData, c5_emxArray->data, sizeof(int32_T) * (uint32_T)
             c5_oldNumel);
      if (c5_emxArray->canFreeData) {
        emlrtFreeMex(c5_emxArray->data);
      }
    }

    c5_emxArray->data = (int32_T *)c5_newData;
    c5_emxArray->allocatedSize = c5_newCapacity;
    c5_emxArray->canFreeData = true;
  }
}

static void init_dsm_address_info(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_Traffic_Light_csInstanceStruct
  *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_Dis = (real_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_R_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_Light_State = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c5_G_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c5_B_Ori = (uint8_T (*)[3456000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 3);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_Traffic_Light_cs_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1935732975U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(2242860101U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1995951512U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1947383896U);
}

mxArray *sf_c5_Traffic_Light_cs_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.Rgb2grayBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString("coder.internal.lapack.LAPACKApi"));
  return(mxcell3p);
}

mxArray *sf_c5_Traffic_Light_cs_jit_fallback_info(void)
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

mxArray *sf_c5_Traffic_Light_cs_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_Traffic_Light_cs(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiDmYGJgYAPRQMzEAAGsUD4jVIwRLs4CF1cA4pLKglSQeHFRsmcKkM5LzAXzE0s"
    "rPPPS8sHmWzAgzGfDYj4jkvmcUHEI+GBPmX4RB5B+ByT9LFj0cyPpF4DyfTLTM0rig0sSS8DeAf"
    "sDRpPvHgUHyvRD7A8g4B9ZNP+A+JnF8YnJJZllqfHJpvEhRYlpaZnJ8RBPJhcj+Q8AENMeLg=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_Traffic_Light_cs_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sJPZNEZK9ryM14eIFiLReTF";
}

static void sf_opaque_initialize_c5_Traffic_Light_cs(void *chartInstanceVar)
{
  initialize_params_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
  initialize_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_Traffic_Light_cs(void *chartInstanceVar)
{
  enable_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_Traffic_Light_cs(void *chartInstanceVar)
{
  disable_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_Traffic_Light_cs(void *chartInstanceVar)
{
  sf_gateway_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_Traffic_Light_cs(SimStruct* S)
{
  return get_sim_state_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_Traffic_Light_cs(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_terminate_c5_Traffic_Light_cs(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_Traffic_Light_csInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_Traffic_Light_cs_optimization_info();
    }

    finalize_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
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
  initSimStructsc5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_Traffic_Light_cs(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
      sf_get_chart_instance_ptr(S));
    initSimStructsc5_Traffic_Light_cs((SFc5_Traffic_Light_csInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_Traffic_Light_cs_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [16] = {
    "eNrtVk1u00AUdqJQtQJKF0hsqNQdLAGBBCtK8yMCaRuatEjdRFP7JR5lPGPmJ2kPwBZxB86AxII",
    "diA0b7sAFkLgAb+ykDY4dt41aCYmRJs5Mvve9X78Xp1DfdHAt435/w3EW8LmIu+jE68roXJjY8X",
    "3JuTM6f0AQN0GTSBIoZ+biJIAdUIIZTQWv865IhVHeBQncRWwopM5iUzQwjPJ+zXDX8qnXPnX9l",
    "i8M8zZQlnjbnB0hW2h0E3kqVIKrawCe9qUwPb/GSO/YYqmHZR/cvjLBLBcU6JYJrVlq0zBNQwbV",
    "Q3DrXGmCFqsT21qaaCjrw0w3raeqNQaKIGSU8FRvfaJaEGKANeyGHn5uG41OJWGuT6TeAJ8MQDV",
    "oP+IUHJKcVOEPB5QTLSQlrBqwshWctq3J0J5N4QGbERC0bUMC6YeCcp2d/1YNPa1ycsCgAgeml8",
    "3WgjfGJn+PwhBkZty6ZTEASXqwzTOVRgGpHkbZOq6SaZimAewR+czF/CnwMqsXK0e1COYJ2iiRB",
    "YPIybpqSzrA8GaymaBuKzPvlTFBnGyVB4vYqgOYlYVjtprLy4QxlQlri7ABA2ARa4VoMhsWs6bj",
    "QilC0sOq9TDItsTLgnt0KheuUVoEZSy3SqOxhZ0i3bgTWJ1rkF3iQtp7q1wfPMMAHcXOpCN1KaQ",
    "eVTZbOahRTvNQjuoaXhkK2UdHZ7z2Jy7YHGQCA9XD6GPt7ios81kwG/1c3LjP33NO+vy1U/T5sV",
    "zyeXeCp5DC40w8k3qXin/jSwm9Rbwp4LJy6xNy153Zcha3gvvr8O3nn+sPPn7//e7Vl2+7P/L0F",
    "6b0F6LvVu5T8WxzcXl0vj1uQMflOZiqCot9PmFXKYX/1gT/yuisXjT3t6r7L5/Io837D6Feo40d",
    "aNcivsUce4sJe8f3a7YTHoVRX1PSrXujgW3PxMRjzPI/nrB3ISceS6P7eP16Op/8zfVkPaTF62o",
    "iXvbcoD1fd6JBO1XH57dnbX0++Vh/M8ef1YQ/q9H86xCcZgPouI86bUm6Xep2YiddlfDvvHV/Vj",
    "nnkuX+FTv/x+Xi/TvNHCudU64w59y8LLl5/TvrPJ9n/if7nJPAr8yh56Lx8/4POgv+D3SIZMg=",
    ""
  };

  static char newstr [1125] = "";
  newstr[0] = '\0';
  for (i = 0; i < 16; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_Traffic_Light_cs(SimStruct *S)
{
  const char* newstr = sf_c5_Traffic_Light_cs_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(3162863556U));
  ssSetChecksum1(S,(3039969507U));
  ssSetChecksum2(S,(1368323019U));
  ssSetChecksum3(S,(3495282371U));
}

static void mdlRTW_c5_Traffic_Light_cs(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlStart_c5_Traffic_Light_cs(SimStruct *S)
{
  SFc5_Traffic_Light_csInstanceStruct *chartInstance;
  chartInstance = (SFc5_Traffic_Light_csInstanceStruct *)utMalloc(sizeof
    (SFc5_Traffic_Light_csInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_Traffic_Light_csInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_Traffic_Light_cs;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_Traffic_Light_cs;
  chartInstance->chartInfo.terminateChart =
    sf_opaque_terminate_c5_Traffic_Light_cs;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_Traffic_Light_cs;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c5_Traffic_Light_cs;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_Traffic_Light_cs;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_Traffic_Light_cs;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_Traffic_Light_cs;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_Traffic_Light_cs;
  chartInstance->chartInfo.mdlStart = mdlStart_c5_Traffic_Light_cs;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_Traffic_Light_cs;
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
    chartInstance->c5_JITStateAnimation,
    chartInstance->c5_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_start_c5_Traffic_Light_cs(chartInstance);
}

void c5_Traffic_Light_cs_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c5_Traffic_Light_cs(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_Traffic_Light_cs(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_Traffic_Light_cs(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_Traffic_Light_cs_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace SP {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    ANNOTATION_LABEL	= 5,
    KILL	= 6,
    EXTRACT_SUBREG	= 7,
    INSERT_SUBREG	= 8,
    IMPLICIT_DEF	= 9,
    SUBREG_TO_REG	= 10,
    COPY_TO_REGCLASS	= 11,
    DBG_VALUE	= 12,
    DBG_LABEL	= 13,
    REG_SEQUENCE	= 14,
    COPY	= 15,
    BUNDLE	= 16,
    LIFETIME_START	= 17,
    LIFETIME_END	= 18,
    STACKMAP	= 19,
    FENTRY_CALL	= 20,
    PATCHPOINT	= 21,
    LOAD_STACK_GUARD	= 22,
    STATEPOINT	= 23,
    LOCAL_ESCAPE	= 24,
    FAULTING_OP	= 25,
    PATCHABLE_OP	= 26,
    PATCHABLE_FUNCTION_ENTER	= 27,
    PATCHABLE_RET	= 28,
    PATCHABLE_FUNCTION_EXIT	= 29,
    PATCHABLE_TAIL_CALL	= 30,
    PATCHABLE_EVENT_CALL	= 31,
    PATCHABLE_TYPED_EVENT_CALL	= 32,
    ICALL_BRANCH_FUNNEL	= 33,
    G_ADD	= 34,
    G_SUB	= 35,
    G_MUL	= 36,
    G_SDIV	= 37,
    G_UDIV	= 38,
    G_SREM	= 39,
    G_UREM	= 40,
    G_AND	= 41,
    G_OR	= 42,
    G_XOR	= 43,
    G_IMPLICIT_DEF	= 44,
    G_PHI	= 45,
    G_FRAME_INDEX	= 46,
    G_GLOBAL_VALUE	= 47,
    G_EXTRACT	= 48,
    G_UNMERGE_VALUES	= 49,
    G_INSERT	= 50,
    G_MERGE_VALUES	= 51,
    G_BUILD_VECTOR	= 52,
    G_BUILD_VECTOR_TRUNC	= 53,
    G_CONCAT_VECTORS	= 54,
    G_PTRTOINT	= 55,
    G_INTTOPTR	= 56,
    G_BITCAST	= 57,
    G_INTRINSIC_TRUNC	= 58,
    G_INTRINSIC_ROUND	= 59,
    G_LOAD	= 60,
    G_SEXTLOAD	= 61,
    G_ZEXTLOAD	= 62,
    G_STORE	= 63,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 64,
    G_ATOMIC_CMPXCHG	= 65,
    G_ATOMICRMW_XCHG	= 66,
    G_ATOMICRMW_ADD	= 67,
    G_ATOMICRMW_SUB	= 68,
    G_ATOMICRMW_AND	= 69,
    G_ATOMICRMW_NAND	= 70,
    G_ATOMICRMW_OR	= 71,
    G_ATOMICRMW_XOR	= 72,
    G_ATOMICRMW_MAX	= 73,
    G_ATOMICRMW_MIN	= 74,
    G_ATOMICRMW_UMAX	= 75,
    G_ATOMICRMW_UMIN	= 76,
    G_BRCOND	= 77,
    G_BRINDIRECT	= 78,
    G_INTRINSIC	= 79,
    G_INTRINSIC_W_SIDE_EFFECTS	= 80,
    G_ANYEXT	= 81,
    G_TRUNC	= 82,
    G_CONSTANT	= 83,
    G_FCONSTANT	= 84,
    G_VASTART	= 85,
    G_VAARG	= 86,
    G_SEXT	= 87,
    G_ZEXT	= 88,
    G_SHL	= 89,
    G_LSHR	= 90,
    G_ASHR	= 91,
    G_ICMP	= 92,
    G_FCMP	= 93,
    G_SELECT	= 94,
    G_UADDO	= 95,
    G_UADDE	= 96,
    G_USUBO	= 97,
    G_USUBE	= 98,
    G_SADDO	= 99,
    G_SADDE	= 100,
    G_SSUBO	= 101,
    G_SSUBE	= 102,
    G_UMULO	= 103,
    G_SMULO	= 104,
    G_UMULH	= 105,
    G_SMULH	= 106,
    G_FADD	= 107,
    G_FSUB	= 108,
    G_FMUL	= 109,
    G_FMA	= 110,
    G_FDIV	= 111,
    G_FREM	= 112,
    G_FPOW	= 113,
    G_FEXP	= 114,
    G_FEXP2	= 115,
    G_FLOG	= 116,
    G_FLOG2	= 117,
    G_FLOG10	= 118,
    G_FNEG	= 119,
    G_FPEXT	= 120,
    G_FPTRUNC	= 121,
    G_FPTOSI	= 122,
    G_FPTOUI	= 123,
    G_SITOFP	= 124,
    G_UITOFP	= 125,
    G_FABS	= 126,
    G_GEP	= 127,
    G_PTR_MASK	= 128,
    G_BR	= 129,
    G_INSERT_VECTOR_ELT	= 130,
    G_EXTRACT_VECTOR_ELT	= 131,
    G_SHUFFLE_VECTOR	= 132,
    G_CTTZ	= 133,
    G_CTTZ_ZERO_UNDEF	= 134,
    G_CTLZ	= 135,
    G_CTLZ_ZERO_UNDEF	= 136,
    G_CTPOP	= 137,
    G_BSWAP	= 138,
    G_FCEIL	= 139,
    G_ADDRSPACE_CAST	= 140,
    G_BLOCK_ADDR	= 141,
    ADJCALLSTACKDOWN	= 142,
    ADJCALLSTACKUP	= 143,
    GETPCX	= 144,
    SELECT_CC_DFP_FCC	= 145,
    SELECT_CC_DFP_ICC	= 146,
    SELECT_CC_FP_FCC	= 147,
    SELECT_CC_FP_ICC	= 148,
    SELECT_CC_Int_FCC	= 149,
    SELECT_CC_Int_ICC	= 150,
    SELECT_CC_QFP_FCC	= 151,
    SELECT_CC_QFP_ICC	= 152,
    SET	= 153,
    ADDCCri	= 154,
    ADDCCrr	= 155,
    ADDCri	= 156,
    ADDCrr	= 157,
    ADDEri	= 158,
    ADDErr	= 159,
    ADDXC	= 160,
    ADDXCCC	= 161,
    ADDXri	= 162,
    ADDXrr	= 163,
    ADDri	= 164,
    ADDrr	= 165,
    ALIGNADDR	= 166,
    ALIGNADDRL	= 167,
    ANDCCri	= 168,
    ANDCCrr	= 169,
    ANDNCCri	= 170,
    ANDNCCrr	= 171,
    ANDNri	= 172,
    ANDNrr	= 173,
    ANDXNrr	= 174,
    ANDXri	= 175,
    ANDXrr	= 176,
    ANDri	= 177,
    ANDrr	= 178,
    ARRAY16	= 179,
    ARRAY32	= 180,
    ARRAY8	= 181,
    BA	= 182,
    BCOND	= 183,
    BCONDA	= 184,
    BINDri	= 185,
    BINDrr	= 186,
    BMASK	= 187,
    BPFCC	= 188,
    BPFCCA	= 189,
    BPFCCANT	= 190,
    BPFCCNT	= 191,
    BPGEZapn	= 192,
    BPGEZapt	= 193,
    BPGEZnapn	= 194,
    BPGEZnapt	= 195,
    BPGZapn	= 196,
    BPGZapt	= 197,
    BPGZnapn	= 198,
    BPGZnapt	= 199,
    BPICC	= 200,
    BPICCA	= 201,
    BPICCANT	= 202,
    BPICCNT	= 203,
    BPLEZapn	= 204,
    BPLEZapt	= 205,
    BPLEZnapn	= 206,
    BPLEZnapt	= 207,
    BPLZapn	= 208,
    BPLZapt	= 209,
    BPLZnapn	= 210,
    BPLZnapt	= 211,
    BPNZapn	= 212,
    BPNZapt	= 213,
    BPNZnapn	= 214,
    BPNZnapt	= 215,
    BPXCC	= 216,
    BPXCCA	= 217,
    BPXCCANT	= 218,
    BPXCCNT	= 219,
    BPZapn	= 220,
    BPZapt	= 221,
    BPZnapn	= 222,
    BPZnapt	= 223,
    BSHUFFLE	= 224,
    CALL	= 225,
    CALLri	= 226,
    CALLrr	= 227,
    CASAasi10	= 228,
    CASArr	= 229,
    CASXrr	= 230,
    CASrr	= 231,
    CBCOND	= 232,
    CBCONDA	= 233,
    CMASK16	= 234,
    CMASK32	= 235,
    CMASK8	= 236,
    CMPri	= 237,
    CMPrr	= 238,
    EDGE16	= 239,
    EDGE16L	= 240,
    EDGE16LN	= 241,
    EDGE16N	= 242,
    EDGE32	= 243,
    EDGE32L	= 244,
    EDGE32LN	= 245,
    EDGE32N	= 246,
    EDGE8	= 247,
    EDGE8L	= 248,
    EDGE8LN	= 249,
    EDGE8N	= 250,
    FABSD	= 251,
    FABSQ	= 252,
    FABSS	= 253,
    FADDD	= 254,
    FADDQ	= 255,
    FADDS	= 256,
    FALIGNADATA	= 257,
    FAND	= 258,
    FANDNOT1	= 259,
    FANDNOT1S	= 260,
    FANDNOT2	= 261,
    FANDNOT2S	= 262,
    FANDS	= 263,
    FBCOND	= 264,
    FBCONDA	= 265,
    FCHKSM16	= 266,
    FCMPD	= 267,
    FCMPEQ16	= 268,
    FCMPEQ32	= 269,
    FCMPGT16	= 270,
    FCMPGT32	= 271,
    FCMPLE16	= 272,
    FCMPLE32	= 273,
    FCMPNE16	= 274,
    FCMPNE32	= 275,
    FCMPQ	= 276,
    FCMPS	= 277,
    FDIVD	= 278,
    FDIVQ	= 279,
    FDIVS	= 280,
    FDMULQ	= 281,
    FDTOI	= 282,
    FDTOQ	= 283,
    FDTOS	= 284,
    FDTOX	= 285,
    FEXPAND	= 286,
    FHADDD	= 287,
    FHADDS	= 288,
    FHSUBD	= 289,
    FHSUBS	= 290,
    FITOD	= 291,
    FITOQ	= 292,
    FITOS	= 293,
    FLCMPD	= 294,
    FLCMPS	= 295,
    FLUSH	= 296,
    FLUSHW	= 297,
    FLUSHri	= 298,
    FLUSHrr	= 299,
    FMEAN16	= 300,
    FMOVD	= 301,
    FMOVD_FCC	= 302,
    FMOVD_ICC	= 303,
    FMOVD_XCC	= 304,
    FMOVQ	= 305,
    FMOVQ_FCC	= 306,
    FMOVQ_ICC	= 307,
    FMOVQ_XCC	= 308,
    FMOVRGEZD	= 309,
    FMOVRGEZQ	= 310,
    FMOVRGEZS	= 311,
    FMOVRGZD	= 312,
    FMOVRGZQ	= 313,
    FMOVRGZS	= 314,
    FMOVRLEZD	= 315,
    FMOVRLEZQ	= 316,
    FMOVRLEZS	= 317,
    FMOVRLZD	= 318,
    FMOVRLZQ	= 319,
    FMOVRLZS	= 320,
    FMOVRNZD	= 321,
    FMOVRNZQ	= 322,
    FMOVRNZS	= 323,
    FMOVRZD	= 324,
    FMOVRZQ	= 325,
    FMOVRZS	= 326,
    FMOVS	= 327,
    FMOVS_FCC	= 328,
    FMOVS_ICC	= 329,
    FMOVS_XCC	= 330,
    FMUL8SUX16	= 331,
    FMUL8ULX16	= 332,
    FMUL8X16	= 333,
    FMUL8X16AL	= 334,
    FMUL8X16AU	= 335,
    FMULD	= 336,
    FMULD8SUX16	= 337,
    FMULD8ULX16	= 338,
    FMULQ	= 339,
    FMULS	= 340,
    FNADDD	= 341,
    FNADDS	= 342,
    FNAND	= 343,
    FNANDS	= 344,
    FNEGD	= 345,
    FNEGQ	= 346,
    FNEGS	= 347,
    FNHADDD	= 348,
    FNHADDS	= 349,
    FNMULD	= 350,
    FNMULS	= 351,
    FNOR	= 352,
    FNORS	= 353,
    FNOT1	= 354,
    FNOT1S	= 355,
    FNOT2	= 356,
    FNOT2S	= 357,
    FNSMULD	= 358,
    FONE	= 359,
    FONES	= 360,
    FOR	= 361,
    FORNOT1	= 362,
    FORNOT1S	= 363,
    FORNOT2	= 364,
    FORNOT2S	= 365,
    FORS	= 366,
    FPACK16	= 367,
    FPACK32	= 368,
    FPACKFIX	= 369,
    FPADD16	= 370,
    FPADD16S	= 371,
    FPADD32	= 372,
    FPADD32S	= 373,
    FPADD64	= 374,
    FPMERGE	= 375,
    FPSUB16	= 376,
    FPSUB16S	= 377,
    FPSUB32	= 378,
    FPSUB32S	= 379,
    FQTOD	= 380,
    FQTOI	= 381,
    FQTOS	= 382,
    FQTOX	= 383,
    FSLAS16	= 384,
    FSLAS32	= 385,
    FSLL16	= 386,
    FSLL32	= 387,
    FSMULD	= 388,
    FSQRTD	= 389,
    FSQRTQ	= 390,
    FSQRTS	= 391,
    FSRA16	= 392,
    FSRA32	= 393,
    FSRC1	= 394,
    FSRC1S	= 395,
    FSRC2	= 396,
    FSRC2S	= 397,
    FSRL16	= 398,
    FSRL32	= 399,
    FSTOD	= 400,
    FSTOI	= 401,
    FSTOQ	= 402,
    FSTOX	= 403,
    FSUBD	= 404,
    FSUBQ	= 405,
    FSUBS	= 406,
    FXNOR	= 407,
    FXNORS	= 408,
    FXOR	= 409,
    FXORS	= 410,
    FXTOD	= 411,
    FXTOQ	= 412,
    FXTOS	= 413,
    FZERO	= 414,
    FZEROS	= 415,
    JMPLri	= 416,
    JMPLrr	= 417,
    LDArr	= 418,
    LDCSRri	= 419,
    LDCSRrr	= 420,
    LDCri	= 421,
    LDCrr	= 422,
    LDDArr	= 423,
    LDDCri	= 424,
    LDDCrr	= 425,
    LDDFArr	= 426,
    LDDFri	= 427,
    LDDFrr	= 428,
    LDDri	= 429,
    LDDrr	= 430,
    LDFArr	= 431,
    LDFSRri	= 432,
    LDFSRrr	= 433,
    LDFri	= 434,
    LDFrr	= 435,
    LDQFArr	= 436,
    LDQFri	= 437,
    LDQFrr	= 438,
    LDSBArr	= 439,
    LDSBri	= 440,
    LDSBrr	= 441,
    LDSHArr	= 442,
    LDSHri	= 443,
    LDSHrr	= 444,
    LDSTUBArr	= 445,
    LDSTUBri	= 446,
    LDSTUBrr	= 447,
    LDSWri	= 448,
    LDSWrr	= 449,
    LDUBArr	= 450,
    LDUBri	= 451,
    LDUBrr	= 452,
    LDUHArr	= 453,
    LDUHri	= 454,
    LDUHrr	= 455,
    LDXFSRri	= 456,
    LDXFSRrr	= 457,
    LDXri	= 458,
    LDXrr	= 459,
    LDri	= 460,
    LDrr	= 461,
    LEAX_ADDri	= 462,
    LEA_ADDri	= 463,
    LZCNT	= 464,
    MEMBARi	= 465,
    MOVDTOX	= 466,
    MOVFCCri	= 467,
    MOVFCCrr	= 468,
    MOVICCri	= 469,
    MOVICCrr	= 470,
    MOVRGEZri	= 471,
    MOVRGEZrr	= 472,
    MOVRGZri	= 473,
    MOVRGZrr	= 474,
    MOVRLEZri	= 475,
    MOVRLEZrr	= 476,
    MOVRLZri	= 477,
    MOVRLZrr	= 478,
    MOVRNZri	= 479,
    MOVRNZrr	= 480,
    MOVRRZri	= 481,
    MOVRRZrr	= 482,
    MOVSTOSW	= 483,
    MOVSTOUW	= 484,
    MOVWTOS	= 485,
    MOVXCCri	= 486,
    MOVXCCrr	= 487,
    MOVXTOD	= 488,
    MULSCCri	= 489,
    MULSCCrr	= 490,
    MULXri	= 491,
    MULXrr	= 492,
    NOP	= 493,
    ORCCri	= 494,
    ORCCrr	= 495,
    ORNCCri	= 496,
    ORNCCrr	= 497,
    ORNri	= 498,
    ORNrr	= 499,
    ORXNrr	= 500,
    ORXri	= 501,
    ORXrr	= 502,
    ORri	= 503,
    ORrr	= 504,
    PDIST	= 505,
    PDISTN	= 506,
    POPCrr	= 507,
    PWRPSRri	= 508,
    PWRPSRrr	= 509,
    RDASR	= 510,
    RDPR	= 511,
    RDPSR	= 512,
    RDTBR	= 513,
    RDWIM	= 514,
    RESTOREri	= 515,
    RESTORErr	= 516,
    RET	= 517,
    RETL	= 518,
    RETTri	= 519,
    RETTrr	= 520,
    SAVEri	= 521,
    SAVErr	= 522,
    SDIVCCri	= 523,
    SDIVCCrr	= 524,
    SDIVXri	= 525,
    SDIVXrr	= 526,
    SDIVri	= 527,
    SDIVrr	= 528,
    SETHIXi	= 529,
    SETHIi	= 530,
    SHUTDOWN	= 531,
    SIAM	= 532,
    SLLXri	= 533,
    SLLXrr	= 534,
    SLLri	= 535,
    SLLrr	= 536,
    SMACri	= 537,
    SMACrr	= 538,
    SMULCCri	= 539,
    SMULCCrr	= 540,
    SMULri	= 541,
    SMULrr	= 542,
    SRAXri	= 543,
    SRAXrr	= 544,
    SRAri	= 545,
    SRArr	= 546,
    SRLXri	= 547,
    SRLXrr	= 548,
    SRLri	= 549,
    SRLrr	= 550,
    STArr	= 551,
    STBAR	= 552,
    STBArr	= 553,
    STBri	= 554,
    STBrr	= 555,
    STCSRri	= 556,
    STCSRrr	= 557,
    STCri	= 558,
    STCrr	= 559,
    STDArr	= 560,
    STDCQri	= 561,
    STDCQrr	= 562,
    STDCri	= 563,
    STDCrr	= 564,
    STDFArr	= 565,
    STDFQri	= 566,
    STDFQrr	= 567,
    STDFri	= 568,
    STDFrr	= 569,
    STDri	= 570,
    STDrr	= 571,
    STFArr	= 572,
    STFSRri	= 573,
    STFSRrr	= 574,
    STFri	= 575,
    STFrr	= 576,
    STHArr	= 577,
    STHri	= 578,
    STHrr	= 579,
    STQFArr	= 580,
    STQFri	= 581,
    STQFrr	= 582,
    STXFSRri	= 583,
    STXFSRrr	= 584,
    STXri	= 585,
    STXrr	= 586,
    STri	= 587,
    STrr	= 588,
    SUBCCri	= 589,
    SUBCCrr	= 590,
    SUBCri	= 591,
    SUBCrr	= 592,
    SUBEri	= 593,
    SUBErr	= 594,
    SUBXri	= 595,
    SUBXrr	= 596,
    SUBri	= 597,
    SUBrr	= 598,
    SWAPArr	= 599,
    SWAPri	= 600,
    SWAPrr	= 601,
    TA1	= 602,
    TA3	= 603,
    TA5	= 604,
    TADDCCTVri	= 605,
    TADDCCTVrr	= 606,
    TADDCCri	= 607,
    TADDCCrr	= 608,
    TICCri	= 609,
    TICCrr	= 610,
    TLS_ADDXrr	= 611,
    TLS_ADDrr	= 612,
    TLS_CALL	= 613,
    TLS_LDXrr	= 614,
    TLS_LDrr	= 615,
    TRAPri	= 616,
    TRAPrr	= 617,
    TSUBCCTVri	= 618,
    TSUBCCTVrr	= 619,
    TSUBCCri	= 620,
    TSUBCCrr	= 621,
    TXCCri	= 622,
    TXCCrr	= 623,
    UDIVCCri	= 624,
    UDIVCCrr	= 625,
    UDIVXri	= 626,
    UDIVXrr	= 627,
    UDIVri	= 628,
    UDIVrr	= 629,
    UMACri	= 630,
    UMACrr	= 631,
    UMULCCri	= 632,
    UMULCCrr	= 633,
    UMULXHI	= 634,
    UMULri	= 635,
    UMULrr	= 636,
    UNIMP	= 637,
    V9FCMPD	= 638,
    V9FCMPED	= 639,
    V9FCMPEQ	= 640,
    V9FCMPES	= 641,
    V9FCMPQ	= 642,
    V9FCMPS	= 643,
    V9FMOVD_FCC	= 644,
    V9FMOVQ_FCC	= 645,
    V9FMOVS_FCC	= 646,
    V9MOVFCCri	= 647,
    V9MOVFCCrr	= 648,
    WRASRri	= 649,
    WRASRrr	= 650,
    WRPRri	= 651,
    WRPRrr	= 652,
    WRPSRri	= 653,
    WRPSRrr	= 654,
    WRTBRri	= 655,
    WRTBRrr	= 656,
    WRWIMri	= 657,
    WRWIMrr	= 658,
    XMULX	= 659,
    XMULXHI	= 660,
    XNORCCri	= 661,
    XNORCCrr	= 662,
    XNORXrr	= 663,
    XNORri	= 664,
    XNORrr	= 665,
    XORCCri	= 666,
    XORCCrr	= 667,
    XORXri	= 668,
    XORXrr	= 669,
    XORri	= 670,
    XORrr	= 671,
    INSTRUCTION_LIST_END = 672
  };

} // end SP namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end Sched namespace
} // end SP namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo46[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo48[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo68[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo69[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo127[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo128[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo129[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = ANNOTATION_LABEL
  { 6,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #6 = KILL
  { 7,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = EXTRACT_SUBREG
  { 8,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = INSERT_SUBREG
  { 9,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #9 = IMPLICIT_DEF
  { 10,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #10 = SUBREG_TO_REG
  { 11,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #11 = COPY_TO_REGCLASS
  { 12,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #12 = DBG_VALUE
  { 13,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #13 = DBG_LABEL
  { 14,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #14 = REG_SEQUENCE
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = COPY
  { 16,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #16 = BUNDLE
  { 17,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #17 = LIFETIME_START
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_END
  { 19,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #19 = STACKMAP
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = FENTRY_CALL
  { 21,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #21 = PATCHPOINT
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #22 = LOAD_STACK_GUARD
  { 23,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #23 = STATEPOINT
  { 24,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #24 = LOCAL_ESCAPE
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = FAULTING_OP
  { 26,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #26 = PATCHABLE_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_FUNCTION_ENTER
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_RET
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_FUNCTION_EXIT
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_TAIL_CALL
  { 31,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #31 = PATCHABLE_EVENT_CALL
  { 32,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = PATCHABLE_TYPED_EVENT_CALL
  { 33,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #33 = ICALL_BRANCH_FUNNEL
  { 34,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #34 = G_ADD
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #35 = G_SUB
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #36 = G_MUL
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #37 = G_SDIV
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #38 = G_UDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_SREM
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_UREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_AND
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #42 = G_OR
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #43 = G_XOR
  { 44,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #44 = G_IMPLICIT_DEF
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #45 = G_PHI
  { 46,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = G_FRAME_INDEX
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #47 = G_GLOBAL_VALUE
  { 48,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #48 = G_EXTRACT
  { 49,	2,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = G_UNMERGE_VALUES
  { 50,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #50 = G_INSERT
  { 51,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = G_MERGE_VALUES
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #52 = G_BUILD_VECTOR
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR_TRUNC
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #54 = G_CONCAT_VECTORS
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #55 = G_PTRTOINT
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_INTTOPTR
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = G_BITCAST
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #58 = G_INTRINSIC_TRUNC
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_ROUND
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #60 = G_LOAD
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_SEXTLOAD
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_ZEXTLOAD
  { 63,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #63 = G_STORE
  { 64,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #64 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 65,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #65 = G_ATOMIC_CMPXCHG
  { 66,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #66 = G_ATOMICRMW_XCHG
  { 67,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #67 = G_ATOMICRMW_ADD
  { 68,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #68 = G_ATOMICRMW_SUB
  { 69,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_ATOMICRMW_AND
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #70 = G_ATOMICRMW_NAND
  { 71,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #71 = G_ATOMICRMW_OR
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_XOR
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_MAX
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_MIN
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_UMAX
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_UMIN
  { 77,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #77 = G_BRCOND
  { 78,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #78 = G_BRINDIRECT
  { 79,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #79 = G_INTRINSIC
  { 80,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #80 = G_INTRINSIC_W_SIDE_EFFECTS
  { 81,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #81 = G_ANYEXT
  { 82,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #82 = G_TRUNC
  { 83,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #83 = G_CONSTANT
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #84 = G_FCONSTANT
  { 85,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #85 = G_VASTART
  { 86,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #86 = G_VAARG
  { 87,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #87 = G_SEXT
  { 88,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #88 = G_ZEXT
  { 89,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #89 = G_SHL
  { 90,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #90 = G_LSHR
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #91 = G_ASHR
  { 92,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #92 = G_ICMP
  { 93,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #93 = G_FCMP
  { 94,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #94 = G_SELECT
  { 95,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #95 = G_UADDO
  { 96,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #96 = G_UADDE
  { 97,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #97 = G_USUBO
  { 98,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #98 = G_USUBE
  { 99,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = G_SADDO
  { 100,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #100 = G_SADDE
  { 101,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = G_SSUBO
  { 102,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #102 = G_SSUBE
  { 103,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #103 = G_UMULO
  { 104,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #104 = G_SMULO
  { 105,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #105 = G_UMULH
  { 106,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #106 = G_SMULH
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #107 = G_FADD
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #108 = G_FSUB
  { 109,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #109 = G_FMUL
  { 110,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #110 = G_FMA
  { 111,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #111 = G_FDIV
  { 112,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #112 = G_FREM
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #113 = G_FPOW
  { 114,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #114 = G_FEXP
  { 115,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #115 = G_FEXP2
  { 116,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #116 = G_FLOG
  { 117,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #117 = G_FLOG2
  { 118,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #118 = G_FLOG10
  { 119,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #119 = G_FNEG
  { 120,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #120 = G_FPEXT
  { 121,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #121 = G_FPTRUNC
  { 122,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #122 = G_FPTOSI
  { 123,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #123 = G_FPTOUI
  { 124,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #124 = G_SITOFP
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #125 = G_UITOFP
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #126 = G_FABS
  { 127,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #127 = G_GEP
  { 128,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #128 = G_PTR_MASK
  { 129,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #129 = G_BR
  { 130,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #130 = G_INSERT_VECTOR_ELT
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #131 = G_EXTRACT_VECTOR_ELT
  { 132,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #132 = G_SHUFFLE_VECTOR
  { 133,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #133 = G_CTTZ
  { 134,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #134 = G_CTTZ_ZERO_UNDEF
  { 135,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #135 = G_CTLZ
  { 136,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #136 = G_CTLZ_ZERO_UNDEF
  { 137,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #137 = G_CTPOP
  { 138,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #138 = G_BSWAP
  { 139,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #139 = G_FCEIL
  { 140,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #140 = G_ADDRSPACE_CAST
  { 141,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #141 = G_BLOCK_ADDR
  { 142,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #142 = ADJCALLSTACKDOWN
  { 143,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #143 = ADJCALLSTACKUP
  { 144,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #144 = GETPCX
  { 145,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #145 = SELECT_CC_DFP_FCC
  { 146,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #146 = SELECT_CC_DFP_ICC
  { 147,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #147 = SELECT_CC_FP_FCC
  { 148,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #148 = SELECT_CC_FP_ICC
  { 149,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #149 = SELECT_CC_Int_FCC
  { 150,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #150 = SELECT_CC_Int_ICC
  { 151,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #151 = SELECT_CC_QFP_FCC
  { 152,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #152 = SELECT_CC_QFP_ICC
  { 153,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #153 = SET
  { 154,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #154 = ADDCCri
  { 155,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #155 = ADDCCrr
  { 156,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #156 = ADDCri
  { 157,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #157 = ADDCrr
  { 158,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #158 = ADDEri
  { 159,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #159 = ADDErr
  { 160,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #160 = ADDXC
  { 161,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #161 = ADDXCCC
  { 162,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #162 = ADDXri
  { 163,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #163 = ADDXrr
  { 164,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #164 = ADDri
  { 165,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #165 = ADDrr
  { 166,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #166 = ALIGNADDR
  { 167,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #167 = ALIGNADDRL
  { 168,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #168 = ANDCCri
  { 169,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #169 = ANDCCrr
  { 170,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #170 = ANDNCCri
  { 171,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #171 = ANDNCCrr
  { 172,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #172 = ANDNri
  { 173,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #173 = ANDNrr
  { 174,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #174 = ANDXNrr
  { 175,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #175 = ANDXri
  { 176,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #176 = ANDXrr
  { 177,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #177 = ANDri
  { 178,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #178 = ANDrr
  { 179,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #179 = ARRAY16
  { 180,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #180 = ARRAY32
  { 181,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #181 = ARRAY8
  { 182,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #182 = BA
  { 183,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #183 = BCOND
  { 184,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #184 = BCONDA
  { 185,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #185 = BINDri
  { 186,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #186 = BINDrr
  { 187,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #187 = BMASK
  { 188,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #188 = BPFCC
  { 189,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #189 = BPFCCA
  { 190,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #190 = BPFCCANT
  { 191,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #191 = BPFCCNT
  { 192,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #192 = BPGEZapn
  { 193,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #193 = BPGEZapt
  { 194,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #194 = BPGEZnapn
  { 195,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #195 = BPGEZnapt
  { 196,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #196 = BPGZapn
  { 197,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #197 = BPGZapt
  { 198,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #198 = BPGZnapn
  { 199,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #199 = BPGZnapt
  { 200,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #200 = BPICC
  { 201,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #201 = BPICCA
  { 202,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #202 = BPICCANT
  { 203,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #203 = BPICCNT
  { 204,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #204 = BPLEZapn
  { 205,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #205 = BPLEZapt
  { 206,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #206 = BPLEZnapn
  { 207,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #207 = BPLEZnapt
  { 208,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #208 = BPLZapn
  { 209,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #209 = BPLZapt
  { 210,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #210 = BPLZnapn
  { 211,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #211 = BPLZnapt
  { 212,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #212 = BPNZapn
  { 213,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #213 = BPNZapt
  { 214,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #214 = BPNZnapn
  { 215,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #215 = BPNZnapt
  { 216,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #216 = BPXCC
  { 217,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #217 = BPXCCA
  { 218,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #218 = BPXCCANT
  { 219,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #219 = BPXCCNT
  { 220,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #220 = BPZapn
  { 221,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #221 = BPZapt
  { 222,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #222 = BPZnapn
  { 223,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #223 = BPZnapt
  { 224,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #224 = BSHUFFLE
  { 225,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #225 = CALL
  { 226,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #226 = CALLri
  { 227,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #227 = CALLrr
  { 228,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #228 = CASAasi10
  { 229,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #229 = CASArr
  { 230,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #230 = CASXrr
  { 231,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #231 = CASrr
  { 232,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #232 = CBCOND
  { 233,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #233 = CBCONDA
  { 234,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #234 = CMASK16
  { 235,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #235 = CMASK32
  { 236,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #236 = CMASK8
  { 237,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #237 = CMPri
  { 238,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #238 = CMPrr
  { 239,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #239 = EDGE16
  { 240,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #240 = EDGE16L
  { 241,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #241 = EDGE16LN
  { 242,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #242 = EDGE16N
  { 243,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #243 = EDGE32
  { 244,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #244 = EDGE32L
  { 245,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #245 = EDGE32LN
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #246 = EDGE32N
  { 247,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #247 = EDGE8
  { 248,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #248 = EDGE8L
  { 249,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #249 = EDGE8LN
  { 250,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #250 = EDGE8N
  { 251,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #251 = FABSD
  { 252,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #252 = FABSQ
  { 253,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #253 = FABSS
  { 254,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #254 = FADDD
  { 255,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #255 = FADDQ
  { 256,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #256 = FADDS
  { 257,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #257 = FALIGNADATA
  { 258,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #258 = FAND
  { 259,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #259 = FANDNOT1
  { 260,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #260 = FANDNOT1S
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #261 = FANDNOT2
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #262 = FANDNOT2S
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #263 = FANDS
  { 264,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #264 = FBCOND
  { 265,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #265 = FBCONDA
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #266 = FCHKSM16
  { 267,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo51, -1 ,nullptr },  // Inst #267 = FCMPD
  { 268,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #268 = FCMPEQ16
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #269 = FCMPEQ32
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #270 = FCMPGT16
  { 271,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #271 = FCMPGT32
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #272 = FCMPLE16
  { 273,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #273 = FCMPLE32
  { 274,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #274 = FCMPNE16
  { 275,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #275 = FCMPNE32
  { 276,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo52, -1 ,nullptr },  // Inst #276 = FCMPQ
  { 277,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo53, -1 ,nullptr },  // Inst #277 = FCMPS
  { 278,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #278 = FDIVD
  { 279,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #279 = FDIVQ
  { 280,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #280 = FDIVS
  { 281,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #281 = FDMULQ
  { 282,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #282 = FDTOI
  { 283,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #283 = FDTOQ
  { 284,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #284 = FDTOS
  { 285,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #285 = FDTOX
  { 286,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #286 = FEXPAND
  { 287,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #287 = FHADDD
  { 288,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #288 = FHADDS
  { 289,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #289 = FHSUBD
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #290 = FHSUBS
  { 291,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #291 = FITOD
  { 292,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #292 = FITOQ
  { 293,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #293 = FITOS
  { 294,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #294 = FLCMPD
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #295 = FLCMPS
  { 296,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #296 = FLUSH
  { 297,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #297 = FLUSHW
  { 298,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #298 = FLUSHri
  { 299,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #299 = FLUSHrr
  { 300,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #300 = FMEAN16
  { 301,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #301 = FMOVD
  { 302,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #302 = FMOVD_FCC
  { 303,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #303 = FMOVD_ICC
  { 304,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #304 = FMOVD_XCC
  { 305,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #305 = FMOVQ
  { 306,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #306 = FMOVQ_FCC
  { 307,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #307 = FMOVQ_ICC
  { 308,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #308 = FMOVQ_XCC
  { 309,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #309 = FMOVRGEZD
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #310 = FMOVRGEZQ
  { 311,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #311 = FMOVRGEZS
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #312 = FMOVRGZD
  { 313,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #313 = FMOVRGZQ
  { 314,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #314 = FMOVRGZS
  { 315,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #315 = FMOVRLEZD
  { 316,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #316 = FMOVRLEZQ
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #317 = FMOVRLEZS
  { 318,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #318 = FMOVRLZD
  { 319,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #319 = FMOVRLZQ
  { 320,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #320 = FMOVRLZS
  { 321,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #321 = FMOVRNZD
  { 322,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #322 = FMOVRNZQ
  { 323,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #323 = FMOVRNZS
  { 324,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #324 = FMOVRZD
  { 325,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #325 = FMOVRZQ
  { 326,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #326 = FMOVRZS
  { 327,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #327 = FMOVS
  { 328,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #328 = FMOVS_FCC
  { 329,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #329 = FMOVS_ICC
  { 330,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #330 = FMOVS_XCC
  { 331,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #331 = FMUL8SUX16
  { 332,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #332 = FMUL8ULX16
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #333 = FMUL8X16
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #334 = FMUL8X16AL
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #335 = FMUL8X16AU
  { 336,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #336 = FMULD
  { 337,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #337 = FMULD8SUX16
  { 338,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #338 = FMULD8ULX16
  { 339,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #339 = FMULQ
  { 340,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #340 = FMULS
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #341 = FNADDD
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #342 = FNADDS
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #343 = FNAND
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #344 = FNANDS
  { 345,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #345 = FNEGD
  { 346,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #346 = FNEGQ
  { 347,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #347 = FNEGS
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #348 = FNHADDD
  { 349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #349 = FNHADDS
  { 350,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #350 = FNMULD
  { 351,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #351 = FNMULS
  { 352,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #352 = FNOR
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #353 = FNORS
  { 354,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #354 = FNOT1
  { 355,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #355 = FNOT1S
  { 356,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #356 = FNOT2
  { 357,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #357 = FNOT2S
  { 358,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #358 = FNSMULD
  { 359,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #359 = FONE
  { 360,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #360 = FONES
  { 361,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #361 = FOR
  { 362,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #362 = FORNOT1
  { 363,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #363 = FORNOT1S
  { 364,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #364 = FORNOT2
  { 365,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #365 = FORNOT2S
  { 366,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #366 = FORS
  { 367,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #367 = FPACK16
  { 368,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #368 = FPACK32
  { 369,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #369 = FPACKFIX
  { 370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #370 = FPADD16
  { 371,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #371 = FPADD16S
  { 372,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #372 = FPADD32
  { 373,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #373 = FPADD32S
  { 374,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #374 = FPADD64
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #375 = FPMERGE
  { 376,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #376 = FPSUB16
  { 377,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #377 = FPSUB16S
  { 378,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #378 = FPSUB32
  { 379,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #379 = FPSUB32S
  { 380,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #380 = FQTOD
  { 381,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #381 = FQTOI
  { 382,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #382 = FQTOS
  { 383,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #383 = FQTOX
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #384 = FSLAS16
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #385 = FSLAS32
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #386 = FSLL16
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #387 = FSLL32
  { 388,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #388 = FSMULD
  { 389,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #389 = FSQRTD
  { 390,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #390 = FSQRTQ
  { 391,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #391 = FSQRTS
  { 392,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #392 = FSRA16
  { 393,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #393 = FSRA32
  { 394,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #394 = FSRC1
  { 395,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #395 = FSRC1S
  { 396,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #396 = FSRC2
  { 397,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #397 = FSRC2S
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #398 = FSRL16
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #399 = FSRL32
  { 400,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #400 = FSTOD
  { 401,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #401 = FSTOI
  { 402,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #402 = FSTOQ
  { 403,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #403 = FSTOX
  { 404,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #404 = FSUBD
  { 405,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #405 = FSUBQ
  { 406,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #406 = FSUBS
  { 407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #407 = FXNOR
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #408 = FXNORS
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #409 = FXOR
  { 410,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #410 = FXORS
  { 411,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #411 = FXTOD
  { 412,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #412 = FXTOQ
  { 413,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #413 = FXTOS
  { 414,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #414 = FZERO
  { 415,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #415 = FZEROS
  { 416,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #416 = JMPLri
  { 417,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #417 = JMPLrr
  { 418,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #418 = LDArr
  { 419,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo40, -1 ,nullptr },  // Inst #419 = LDCSRri
  { 420,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo41, -1 ,nullptr },  // Inst #420 = LDCSRrr
  { 421,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #421 = LDCri
  { 422,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #422 = LDCrr
  { 423,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #423 = LDDArr
  { 424,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #424 = LDDCri
  { 425,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #425 = LDDCrr
  { 426,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #426 = LDDFArr
  { 427,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #427 = LDDFri
  { 428,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #428 = LDDFrr
  { 429,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #429 = LDDri
  { 430,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #430 = LDDrr
  { 431,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #431 = LDFArr
  { 432,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo40, -1 ,nullptr },  // Inst #432 = LDFSRri
  { 433,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #433 = LDFSRrr
  { 434,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #434 = LDFri
  { 435,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #435 = LDFrr
  { 436,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #436 = LDQFArr
  { 437,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #437 = LDQFri
  { 438,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #438 = LDQFrr
  { 439,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #439 = LDSBArr
  { 440,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #440 = LDSBri
  { 441,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #441 = LDSBrr
  { 442,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #442 = LDSHArr
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #443 = LDSHri
  { 444,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #444 = LDSHrr
  { 445,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #445 = LDSTUBArr
  { 446,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #446 = LDSTUBri
  { 447,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #447 = LDSTUBrr
  { 448,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #448 = LDSWri
  { 449,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #449 = LDSWrr
  { 450,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #450 = LDUBArr
  { 451,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #451 = LDUBri
  { 452,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #452 = LDUBrr
  { 453,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #453 = LDUHArr
  { 454,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #454 = LDUHri
  { 455,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #455 = LDUHrr
  { 456,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo40, -1 ,nullptr },  // Inst #456 = LDXFSRri
  { 457,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #457 = LDXFSRrr
  { 458,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #458 = LDXri
  { 459,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #459 = LDXrr
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #460 = LDri
  { 461,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #461 = LDrr
  { 462,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #462 = LEAX_ADDri
  { 463,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #463 = LEA_ADDri
  { 464,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #464 = LZCNT
  { 465,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #465 = MEMBARi
  { 466,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #466 = MOVDTOX
  { 467,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #467 = MOVFCCri
  { 468,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #468 = MOVFCCrr
  { 469,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #469 = MOVICCri
  { 470,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #470 = MOVICCrr
  { 471,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #471 = MOVRGEZri
  { 472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #472 = MOVRGEZrr
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #473 = MOVRGZri
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #474 = MOVRGZrr
  { 475,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #475 = MOVRLEZri
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #476 = MOVRLEZrr
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #477 = MOVRLZri
  { 478,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #478 = MOVRLZrr
  { 479,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #479 = MOVRNZri
  { 480,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #480 = MOVRNZrr
  { 481,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #481 = MOVRRZri
  { 482,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #482 = MOVRRZrr
  { 483,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #483 = MOVSTOSW
  { 484,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #484 = MOVSTOUW
  { 485,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #485 = MOVWTOS
  { 486,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #486 = MOVXCCri
  { 487,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #487 = MOVXCCrr
  { 488,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #488 = MOVXTOD
  { 489,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo36, -1 ,nullptr },  // Inst #489 = MULSCCri
  { 490,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #490 = MULSCCrr
  { 491,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #491 = MULXri
  { 492,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #492 = MULXrr
  { 493,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #493 = NOP
  { 494,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #494 = ORCCri
  { 495,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #495 = ORCCrr
  { 496,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #496 = ORNCCri
  { 497,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #497 = ORNCCrr
  { 498,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #498 = ORNri
  { 499,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #499 = ORNrr
  { 500,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #500 = ORXNrr
  { 501,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #501 = ORXri
  { 502,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #502 = ORXrr
  { 503,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #503 = ORri
  { 504,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #504 = ORrr
  { 505,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #505 = PDIST
  { 506,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #506 = PDISTN
  { 507,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #507 = POPCrr
  { 508,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo49, -1 ,nullptr },  // Inst #508 = PWRPSRri
  { 509,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo50, -1 ,nullptr },  // Inst #509 = PWRPSRrr
  { 510,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #510 = RDASR
  { 511,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #511 = RDPR
  { 512,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #512 = RDPSR
  { 513,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #513 = RDTBR
  { 514,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #514 = RDWIM
  { 515,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #515 = RESTOREri
  { 516,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #516 = RESTORErr
  { 517,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #517 = RET
  { 518,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #518 = RETL
  { 519,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #519 = RETTri
  { 520,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #520 = RETTrr
  { 521,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #521 = SAVEri
  { 522,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #522 = SAVErr
  { 523,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo36, -1 ,nullptr },  // Inst #523 = SDIVCCri
  { 524,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #524 = SDIVCCrr
  { 525,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #525 = SDIVXri
  { 526,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #526 = SDIVXrr
  { 527,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo36, -1 ,nullptr },  // Inst #527 = SDIVri
  { 528,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #528 = SDIVrr
  { 529,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #529 = SETHIXi
  { 530,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #530 = SETHIi
  { 531,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #531 = SHUTDOWN
  { 532,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #532 = SIAM
  { 533,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #533 = SLLXri
  { 534,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #534 = SLLXrr
  { 535,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #535 = SLLri
  { 536,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #536 = SLLrr
  { 537,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo103, -1 ,nullptr },  // Inst #537 = SMACri
  { 538,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo104, -1 ,nullptr },  // Inst #538 = SMACrr
  { 539,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo36, -1 ,nullptr },  // Inst #539 = SMULCCri
  { 540,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #540 = SMULCCrr
  { 541,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo36, -1 ,nullptr },  // Inst #541 = SMULri
  { 542,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #542 = SMULrr
  { 543,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #543 = SRAXri
  { 544,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #544 = SRAXrr
  { 545,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #545 = SRAri
  { 546,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #546 = SRArr
  { 547,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #547 = SRLXri
  { 548,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #548 = SRLXrr
  { 549,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #549 = SRLri
  { 550,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #550 = SRLrr
  { 551,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #551 = STArr
  { 552,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #552 = STBAR
  { 553,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #553 = STBArr
  { 554,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #554 = STBri
  { 555,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #555 = STBrr
  { 556,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo40, -1 ,nullptr },  // Inst #556 = STCSRri
  { 557,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo41, -1 ,nullptr },  // Inst #557 = STCSRrr
  { 558,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #558 = STCri
  { 559,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #559 = STCrr
  { 560,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #560 = STDArr
  { 561,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo40, -1 ,nullptr },  // Inst #561 = STDCQri
  { 562,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo41, -1 ,nullptr },  // Inst #562 = STDCQrr
  { 563,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #563 = STDCri
  { 564,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #564 = STDCrr
  { 565,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #565 = STDFArr
  { 566,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo40, -1 ,nullptr },  // Inst #566 = STDFQri
  { 567,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo41, -1 ,nullptr },  // Inst #567 = STDFQrr
  { 568,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #568 = STDFri
  { 569,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #569 = STDFrr
  { 570,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #570 = STDri
  { 571,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #571 = STDrr
  { 572,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #572 = STFArr
  { 573,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo40, -1 ,nullptr },  // Inst #573 = STFSRri
  { 574,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #574 = STFSRrr
  { 575,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #575 = STFri
  { 576,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #576 = STFrr
  { 577,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #577 = STHArr
  { 578,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #578 = STHri
  { 579,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #579 = STHrr
  { 580,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #580 = STQFArr
  { 581,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #581 = STQFri
  { 582,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #582 = STQFrr
  { 583,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo40, -1 ,nullptr },  // Inst #583 = STXFSRri
  { 584,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #584 = STXFSRrr
  { 585,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #585 = STXri
  { 586,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #586 = STXrr
  { 587,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #587 = STri
  { 588,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #588 = STrr
  { 589,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #589 = SUBCCri
  { 590,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #590 = SUBCCrr
  { 591,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #591 = SUBCri
  { 592,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #592 = SUBCrr
  { 593,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #593 = SUBEri
  { 594,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #594 = SUBErr
  { 595,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #595 = SUBXri
  { 596,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #596 = SUBXrr
  { 597,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #597 = SUBri
  { 598,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #598 = SUBrr
  { 599,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #599 = SWAPArr
  { 600,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #600 = SWAPri
  { 601,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #601 = SWAPrr
  { 602,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #602 = TA1
  { 603,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #603 = TA3
  { 604,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #604 = TA5
  { 605,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #605 = TADDCCTVri
  { 606,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #606 = TADDCCTVrr
  { 607,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #607 = TADDCCri
  { 608,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #608 = TADDCCrr
  { 609,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #609 = TICCri
  { 610,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #610 = TICCrr
  { 611,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #611 = TLS_ADDXrr
  { 612,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #612 = TLS_ADDrr
  { 613,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #613 = TLS_CALL
  { 614,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #614 = TLS_LDXrr
  { 615,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #615 = TLS_LDrr
  { 616,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #616 = TRAPri
  { 617,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #617 = TRAPrr
  { 618,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #618 = TSUBCCTVri
  { 619,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #619 = TSUBCCTVrr
  { 620,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #620 = TSUBCCri
  { 621,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #621 = TSUBCCrr
  { 622,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #622 = TXCCri
  { 623,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #623 = TXCCrr
  { 624,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo36, -1 ,nullptr },  // Inst #624 = UDIVCCri
  { 625,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #625 = UDIVCCrr
  { 626,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #626 = UDIVXri
  { 627,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #627 = UDIVXrr
  { 628,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo36, -1 ,nullptr },  // Inst #628 = UDIVri
  { 629,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #629 = UDIVrr
  { 630,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo103, -1 ,nullptr },  // Inst #630 = UMACri
  { 631,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo104, -1 ,nullptr },  // Inst #631 = UMACrr
  { 632,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo36, -1 ,nullptr },  // Inst #632 = UMULCCri
  { 633,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #633 = UMULCCrr
  { 634,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #634 = UMULXHI
  { 635,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo36, -1 ,nullptr },  // Inst #635 = UMULri
  { 636,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #636 = UMULrr
  { 637,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #637 = UNIMP
  { 638,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #638 = V9FCMPD
  { 639,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #639 = V9FCMPED
  { 640,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #640 = V9FCMPEQ
  { 641,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #641 = V9FCMPES
  { 642,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #642 = V9FCMPQ
  { 643,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #643 = V9FCMPS
  { 644,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #644 = V9FMOVD_FCC
  { 645,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #645 = V9FMOVQ_FCC
  { 646,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #646 = V9FMOVS_FCC
  { 647,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #647 = V9MOVFCCri
  { 648,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #648 = V9MOVFCCrr
  { 649,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #649 = WRASRri
  { 650,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #650 = WRASRrr
  { 651,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #651 = WRPRri
  { 652,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #652 = WRPRrr
  { 653,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo49, -1 ,nullptr },  // Inst #653 = WRPSRri
  { 654,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo50, -1 ,nullptr },  // Inst #654 = WRPSRrr
  { 655,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo49, -1 ,nullptr },  // Inst #655 = WRTBRri
  { 656,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo50, -1 ,nullptr },  // Inst #656 = WRTBRrr
  { 657,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo49, -1 ,nullptr },  // Inst #657 = WRWIMri
  { 658,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo50, -1 ,nullptr },  // Inst #658 = WRWIMrr
  { 659,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #659 = XMULX
  { 660,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #660 = XMULXHI
  { 661,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #661 = XNORCCri
  { 662,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #662 = XNORCCrr
  { 663,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #663 = XNORXrr
  { 664,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #664 = XNORri
  { 665,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #665 = XNORrr
  { 666,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo36, -1 ,nullptr },  // Inst #666 = XORCCri
  { 667,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #667 = XORCCrr
  { 668,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #668 = XORXri
  { 669,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #669 = XORXrr
  { 670,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #670 = XORri
  { 671,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #671 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', 'A', 'S', 'A', 'a', 's', 'i', '1', '0', 0,
  /* 19 */ 'T', 'A', '1', 0,
  /* 23 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 29 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 38 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 44 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 52 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 59 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 67 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 75 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 82 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 91 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 100 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 108 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 123 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 130 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 139 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 147 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 156 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 164 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 170 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 178 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 186 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 195 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 201 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 209 */ 'T', 'A', '3', 0,
  /* 213 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 221 */ 'T', 'A', '5', 0,
  /* 225 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 232 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 240 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 248 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 255 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 264 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 273 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 281 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 289 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 296 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 303 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 312 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 320 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 329 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 337 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 355 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 367 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 378 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 390 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 401 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 409 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 415 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 422 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 429 */ 'B', 'A', 0,
  /* 432 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 439 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 446 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 453 */ 'C', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 461 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 469 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 475 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 487 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 494 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 500 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 516 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 524 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 530 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 542 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 560 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 578 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 595 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 607 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 619 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 637 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 643 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 653 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 671 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 689 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 706 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 716 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 726 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 744 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 750 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 760 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 770 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 780 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 792 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 802 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 820 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 828 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 849 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 855 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 866 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 877 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 884 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 890 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 897 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 904 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 910 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 926 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 932 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 939 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 947 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 954 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 963 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 969 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 975 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 982 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 989 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 997 */ 'F', 'A', 'N', 'D', 0,
  /* 1002 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1008 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1025 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1033 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1039 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1055 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1068 */ 'C', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1075 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1082 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1091 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1109 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1115 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1121 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1127 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1133 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1141 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1149 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1156 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1173 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1179 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1186 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1192 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1198 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1208 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1218 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1227 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1236 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1245 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1253 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1261 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1269 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1282 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1290 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1298 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1306 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1313 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1322 */ 'F', 'O', 'N', 'E', 0,
  /* 1327 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1340 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1348 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1358 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1373 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1391 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1409 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1424 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1431 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1446 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1460 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1474 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1491 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1508 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1515 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1523 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1531 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1539 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 1545 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 1551 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1559 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1567 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1573 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1579 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1585 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1594 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1603 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1609 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1620 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1628 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1636 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1643 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1654 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1663 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1673 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1682 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1699 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1719 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1725 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1733 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1753 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1762 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1789 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1810 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1822 */ 'K', 'I', 'L', 'L', 0,
  /* 1827 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 1838 */ 'R', 'E', 'T', 'L', 0,
  /* 1843 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1850 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1856 */ 'S', 'I', 'A', 'M', 0,
  /* 1861 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1868 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1875 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1882 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 1888 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1898 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 1906 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 1914 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 1921 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 1938 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 1954 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 1963 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 1972 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 1980 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 1996 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 2003 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2020 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 2029 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2037 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2045 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2053 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2061 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2069 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2077 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 2083 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2092 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2100 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 2106 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2115 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2124 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2131 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2138 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 2144 */ 'N', 'O', 'P', 0,
  /* 2148 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2156 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2169 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2181 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2196 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2203 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 2209 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 2215 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 2224 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 2230 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 2237 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 2243 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 2249 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 2255 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 2261 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 2267 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 2275 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 2281 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 2288 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 2294 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 2300 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 2310 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 2320 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 2329 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 2338 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 2347 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 2355 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 2361 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 2367 */ 'G', '_', 'B', 'R', 0,
  /* 2372 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 2382 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2395 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2420 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2427 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2434 */ 'F', 'O', 'R', 0,
  /* 2438 */ 'F', 'N', 'O', 'R', 0,
  /* 2443 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 2449 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2464 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2481 */ 'F', 'X', 'O', 'R', 0,
  /* 2486 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2492 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2508 */ 'G', '_', 'O', 'R', 0,
  /* 2513 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2528 */ 'R', 'D', 'P', 'R', 0,
  /* 2533 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 2539 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 2545 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2556 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2563 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2573 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2580 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2589 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2598 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2607 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2614 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2624 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2631 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2640 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2649 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2658 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2665 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2671 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 2678 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2684 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2691 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2699 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 2706 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 2712 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 2719 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 2725 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 2734 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2751 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2766 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2772 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2778 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 2785 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 2792 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 2798 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 2804 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 2810 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 2818 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 2824 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 2832 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 2839 */ 'F', 'O', 'R', 'S', 0,
  /* 2844 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 2850 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 2857 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 2874 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 2880 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 2897 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 2903 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 2933 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 2960 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 2967 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 2973 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 2979 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 2989 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 2999 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 3008 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 3017 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 3026 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 3034 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3044 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3053 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3066 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3080 */ 'S', 'E', 'T', 0,
  /* 3084 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3108 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3129 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3149 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3158 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3167 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3176 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3188 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3199 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 3207 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 3215 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 3223 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 3229 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3240 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3251 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3262 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3272 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3287 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3296 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3306 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3323 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 3329 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3337 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3344 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3353 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3360 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 3371 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3378 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3385 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3392 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 3399 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3406 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 3415 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 3424 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3441 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3457 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 3464 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3478 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 3487 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 3493 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 3499 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 3507 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 3513 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 3519 */ 'C', 'O', 'P', 'Y', 0,
  /* 3524 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3531 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3538 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 3545 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 3553 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 3561 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 3567 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 3574 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 3580 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 3587 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 3593 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 3602 */ 'S', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3609 */ 'U', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3616 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 3623 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 3632 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3641 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3649 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 3660 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3667 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3676 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3685 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3694 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3703 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3711 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3720 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3728 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'i', 0,
  /* 3737 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3746 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3755 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3762 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3771 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 3778 */ 'L', 'D', 'D', 'C', 'r', 'i', 0,
  /* 3785 */ 'L', 'D', 'C', 'r', 'i', 0,
  /* 3791 */ 'S', 'T', 'D', 'C', 'r', 'i', 0,
  /* 3798 */ 'S', 'T', 'C', 'r', 'i', 0,
  /* 3804 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 3814 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 3825 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 3831 */ 'L', 'D', 'r', 'i', 0,
  /* 3836 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 3842 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 3849 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 3855 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 3862 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 3869 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 3879 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 3886 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 3893 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 3899 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 3906 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 3913 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 3920 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 3926 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 3933 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 3941 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 3947 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 3954 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 3961 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 3967 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 3974 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 3980 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 3987 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 3994 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 4002 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 4009 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 4015 */ 'T', 'R', 'A', 'P', 'r', 'i', 0,
  /* 4022 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 4029 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 4035 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'i', 0,
  /* 4043 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'i', 0,
  /* 4051 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 4059 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 4066 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 4072 */ 'W', 'R', 'P', 'R', 'r', 'i', 0,
  /* 4079 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 4087 */ 'L', 'D', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4095 */ 'S', 'T', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4103 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4111 */ 'S', 'T', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4119 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4128 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4137 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 4146 */ 'S', 'T', 'r', 'i', 0,
  /* 4151 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 4158 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4165 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4172 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4183 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4194 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 4201 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 4208 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 4215 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 4222 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 4228 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 4235 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 4242 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 4249 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 4256 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 4263 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 4269 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4277 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4285 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 4295 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 4305 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 4314 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 4323 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 4332 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 4341 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4350 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4359 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 4367 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 4375 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 4383 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 4390 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4400 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4410 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4419 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4428 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4437 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4445 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 4453 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 4460 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4468 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4478 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 4485 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 4491 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 4498 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4506 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4513 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4521 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4529 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4537 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 4544 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 4552 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 4559 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 4567 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 4575 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 4581 */ 'C', 'A', 'S', 'A', 'r', 'r', 0,
  /* 4588 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 4594 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 4601 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 4607 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 4614 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 4620 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 4629 */ 'S', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4636 */ 'U', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4643 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 4650 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 4659 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4668 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4676 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 4687 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4694 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4703 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4712 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4721 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4730 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4738 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4747 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4755 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'r', 0,
  /* 4764 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 4773 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 4782 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 4789 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 4798 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 4805 */ 'L', 'D', 'D', 'C', 'r', 'r', 0,
  /* 4812 */ 'L', 'D', 'C', 'r', 'r', 0,
  /* 4818 */ 'S', 'T', 'D', 'C', 'r', 'r', 0,
  /* 4825 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 4832 */ 'S', 'T', 'C', 'r', 'r', 0,
  /* 4838 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 4848 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 4854 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 4863 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 4869 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 4876 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 4882 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 4889 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 4896 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 4906 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 4913 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 4920 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 4926 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 4933 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 4940 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 4947 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 4953 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 4960 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 4968 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 4974 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 4981 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 4988 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 4994 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 5001 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 5007 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5014 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5021 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 5029 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 5036 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 5042 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 5050 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 5057 */ 'T', 'R', 'A', 'P', 'r', 'r', 0,
  /* 5064 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 5071 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 5077 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'r', 0,
  /* 5085 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'r', 0,
  /* 5093 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 5101 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 5108 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 5114 */ 'W', 'R', 'P', 'R', 'r', 'r', 0,
  /* 5121 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 5129 */ 'L', 'D', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5137 */ 'S', 'T', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5145 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5153 */ 'S', 'T', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5161 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5170 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5179 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 5188 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 5194 */ 'S', 'T', 'r', 'r', 0,
  /* 5199 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 5206 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5213 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5220 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5231 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5242 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 5249 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 5256 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 5263 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 5274 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 5284 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 5291 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 5298 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 5305 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 5312 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5320 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5327 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 5334 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 5340 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5348 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5356 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 5366 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 5376 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 5385 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 5394 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 5403 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 5412 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5421 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5430 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 5438 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 5446 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 5454 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 5461 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5471 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5481 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5490 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5499 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5508 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1547U, 1888U, 1980U, 1673U, 1654U, 1682U, 1822U, 1431U, 
    1446U, 1411U, 1460U, 2880U, 1348U, 1663U, 1269U, 3519U, 
    1306U, 3272U, 1055U, 2083U, 1810U, 3240U, 1156U, 3229U, 
    1327U, 2169U, 2156U, 2395U, 3066U, 3084U, 1733U, 1789U, 
    1762U, 1699U, 904U, 494U, 1850U, 3378U, 3385U, 1868U, 
    1875U, 1033U, 2508U, 2486U, 1409U, 1545U, 3464U, 1358U, 
    3034U, 2734U, 3287U, 2751U, 2449U, 828U, 2857U, 3251U, 
    2545U, 3296U, 802U, 1091U, 877U, 855U, 866U, 1340U, 
    2903U, 1474U, 1491U, 910U, 500U, 1039U, 1008U, 2513U, 
    2492U, 3441U, 1938U, 3424U, 1921U, 1082U, 3053U, 780U, 
    2933U, 3344U, 820U, 3188U, 3176U, 3262U, 1515U, 3337U, 
    3353U, 1719U, 2427U, 2420U, 2131U, 2124U, 3044U, 2053U, 
    1290U, 2037U, 1261U, 2045U, 1282U, 2029U, 1253U, 2069U, 
    2061U, 1531U, 1523U, 897U, 487U, 1843U, 469U, 3371U, 
    1861U, 3399U, 2196U, 178U, 1508U, 170U, 0U, 1424U, 
    3329U, 792U, 1585U, 1594U, 2106U, 2115U, 2658U, 2100U, 
    1609U, 2367U, 3129U, 3108U, 2464U, 3531U, 1391U, 3524U, 
    1373U, 2148U, 2092U, 1725U, 3306U, 2382U, 2003U, 2181U, 
    3457U, 542U, 653U, 578U, 689U, 619U, 726U, 560U, 
    671U, 3080U, 3633U, 4660U, 3771U, 4798U, 3862U, 4889U, 
    849U, 516U, 4215U, 5267U, 3808U, 4842U, 2372U, 1827U, 
    3641U, 4668U, 3694U, 4721U, 4002U, 5029U, 5042U, 4228U, 
    5284U, 3836U, 4863U, 401U, 156U, 422U, 429U, 1069U, 
    454U, 3842U, 4869U, 1603U, 524U, 432U, 3149U, 3199U, 
    4341U, 5412U, 4390U, 5461U, 4359U, 5430U, 4410U, 5481U, 
    637U, 439U, 3158U, 3207U, 4350U, 5421U, 4400U, 5471U, 
    4367U, 5438U, 4419U, 5490U, 4375U, 5446U, 4428U, 5499U, 
    744U, 446U, 3167U, 3215U, 4383U, 5454U, 4437U, 5508U, 
    1313U, 1748U, 3954U, 4981U, 9U, 4581U, 5327U, 5188U, 
    1068U, 453U, 281U, 108U, 415U, 4029U, 5071U, 248U, 
    1628U, 1963U, 1906U, 75U, 1620U, 1954U, 1898U, 409U, 
    1636U, 1972U, 1914U, 1173U, 2275U, 2897U, 926U, 2209U, 
    2678U, 475U, 997U, 29U, 2563U, 186U, 2614U, 2706U, 
    1075U, 461U, 303U, 1143U, 320U, 130U, 337U, 147U, 
    255U, 82U, 264U, 91U, 2269U, 2826U, 1186U, 2288U, 
    2967U, 2230U, 1567U, 2243U, 2792U, 3493U, 1025U, 932U, 
    2684U, 890U, 2671U, 1109U, 2249U, 2798U, 1149U, 2832U, 
    1539U, 3392U, 3933U, 4960U, 312U, 1192U, 532U, 643U, 
    750U, 2294U, 597U, 706U, 760U, 1198U, 2300U, 2979U, 
    1218U, 2320U, 2999U, 1208U, 2310U, 2989U, 1227U, 2329U, 
    3008U, 1236U, 2338U, 3017U, 1245U, 2347U, 3026U, 2973U, 
    609U, 716U, 770U, 390U, 367U, 346U, 1643U, 3360U, 
    969U, 378U, 355U, 2237U, 2772U, 947U, 2699U, 1002U, 
    2712U, 963U, 2224U, 2766U, 939U, 2691U, 975U, 2778U, 
    2438U, 2844U, 38U, 2573U, 195U, 2624U, 989U, 1322U, 
    2719U, 2434U, 44U, 2580U, 201U, 2631U, 2839U, 273U, 
    100U, 3478U, 240U, 2649U, 67U, 2598U, 213U, 1298U, 
    232U, 2640U, 59U, 2589U, 1115U, 1573U, 2804U, 3507U, 
    329U, 139U, 289U, 116U, 982U, 1179U, 2281U, 2960U, 
    225U, 52U, 23U, 2556U, 164U, 2607U, 296U, 123U, 
    1121U, 1579U, 2255U, 3513U, 884U, 2203U, 2665U, 2443U, 
    2850U, 2481U, 2874U, 1127U, 2261U, 2818U, 2077U, 2785U, 
    3967U, 4994U, 4485U, 4087U, 5129U, 3785U, 4812U, 4478U, 
    3778U, 4805U, 4498U, 3886U, 4913U, 3825U, 4848U, 4506U, 
    4103U, 5145U, 3893U, 4920U, 4521U, 3906U, 4933U, 4445U, 
    3567U, 4594U, 4544U, 3926U, 4953U, 4468U, 3593U, 4620U, 
    4194U, 5242U, 4460U, 3580U, 4607U, 4559U, 3947U, 4974U, 
    4119U, 5161U, 4222U, 5278U, 3831U, 4858U, 3814U, 3804U, 
    3223U, 3545U, 3499U, 3651U, 4678U, 3667U, 4694U, 4285U, 
    5356U, 4305U, 5376U, 4295U, 5366U, 4314U, 5385U, 4323U, 
    5394U, 4332U, 5403U, 3406U, 3415U, 2810U, 3762U, 4789U, 
    1133U, 3728U, 4755U, 4249U, 5305U, 2144U, 3713U, 4740U, 
    3703U, 4730U, 4009U, 5036U, 5050U, 4257U, 5314U, 4061U, 
    5103U, 3323U, 1996U, 4825U, 4137U, 5179U, 2533U, 2528U, 
    2539U, 2361U, 1882U, 3869U, 4896U, 3076U, 1838U, 4151U, 
    5199U, 3879U, 4906U, 3737U, 4764U, 4269U, 5340U, 4158U, 
    5206U, 3553U, 3538U, 2020U, 1856U, 4235U, 5291U, 3961U, 
    4988U, 3602U, 4629U, 3676U, 4703U, 3980U, 5007U, 4201U, 
    5249U, 3561U, 4575U, 4242U, 5298U, 3974U, 5001U, 4588U, 
    2355U, 4453U, 3574U, 4601U, 4095U, 5137U, 3798U, 4832U, 
    4491U, 4035U, 5077U, 3791U, 4818U, 4513U, 4043U, 5085U, 
    3899U, 4926U, 3849U, 4876U, 4537U, 4111U, 5153U, 3920U, 
    4947U, 4552U, 3941U, 4968U, 4529U, 3913U, 4940U, 4128U, 
    5170U, 4263U, 5334U, 4146U, 5194U, 3624U, 4651U, 3616U, 
    4643U, 3855U, 4882U, 4208U, 5256U, 3587U, 4614U, 4567U, 
    4022U, 5064U, 19U, 209U, 221U, 4183U, 5231U, 3632U, 
    4659U, 3660U, 4687U, 5263U, 4838U, 1753U, 5274U, 4854U, 
    4015U, 5057U, 4172U, 5220U, 3623U, 4650U, 3755U, 4782U, 
    3746U, 4773U, 4277U, 5348U, 4165U, 5213U, 3609U, 4636U, 
    3685U, 4712U, 1551U, 3987U, 5014U, 2138U, 1141U, 954U, 
    2215U, 2725U, 2267U, 2824U, 530U, 595U, 607U, 3649U, 
    4676U, 4079U, 5121U, 4072U, 5114U, 4138U, 5180U, 4051U, 
    5093U, 3994U, 5021U, 3487U, 1559U, 3711U, 4738U, 5312U, 
    4059U, 5101U, 3720U, 4747U, 4256U, 5320U, 4066U, 5108U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 672);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 672);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TLSSym = 4,
  bprtarget = 5,
  bprtarget16 = 6,
  brtarget = 7,
  calltarget = 8,
  f32imm = 9,
  f64imm = 10,
  getPCX = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i64imm = 15,
  i8imm = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  simm13Op = 23,
  type0 = 24,
  type1 = 25,
  type2 = 26,
  type3 = 27,
  type4 = 28,
  type5 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM


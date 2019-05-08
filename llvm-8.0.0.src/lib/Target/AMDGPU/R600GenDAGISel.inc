/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the R600 target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_SwitchOpcode /*99 cases */, 99|128,2/*355*/, TARGET_VAL(ISD::SRL),// ->360
/*     5*/    OPC_Scope, 11|128,1/*139*/, /*->147*/ // 2 children in Scope
/*     8*/      OPC_MoveChild0,
/*     9*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    12*/      OPC_RecordChild0, // #0 = $src
/*    13*/      OPC_MoveChild1,
/*    14*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    17*/      OPC_CheckChild0Integer, 32, 
/*    19*/      OPC_RecordChild1, // #1 = $width
/*    20*/      OPC_CheckType, MVT::i32,
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*    25*/      OPC_MoveParent,
/*    26*/      OPC_MoveChild1,
/*    27*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    30*/      OPC_CheckChild0Integer, 32, 
/*    32*/      OPC_CheckChild1Same, 1,
/*    34*/      OPC_CheckType, MVT::i32,
/*    36*/      OPC_MoveParent,
/*    37*/      OPC_CheckType, MVT::i32,
/*    39*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*    41*/      OPC_EmitInteger, MVT::i32, 0, 
/*    44*/      OPC_EmitInteger, MVT::i32, 0, 
/*    47*/      OPC_EmitInteger, MVT::i32, 0, 
/*    50*/      OPC_EmitInteger, MVT::i32, 0, 
/*    53*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    65*/      OPC_EmitInteger, MVT::i32, 0, 
/*    68*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*    75*/      OPC_EmitInteger, MVT::i32, 0, 
/*    78*/      OPC_EmitInteger, MVT::i32, 0, 
/*    81*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    93*/      OPC_EmitInteger, MVT::i32, 0, 
/*    96*/      OPC_EmitInteger, MVT::i32, 0, 
/*    99*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   111*/      OPC_EmitInteger, MVT::i32, 1, 
/*   114*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   117*/      OPC_EmitInteger, MVT::i32, 0, 
/*   120*/      OPC_EmitInteger, MVT::i32, 0, 
/*   123*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (srl:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   147*/    /*Scope*/ 82|128,1/*210*/, /*->359*/
/*   149*/      OPC_RecordChild0, // #0 = $src0
/*   150*/      OPC_RecordChild1, // #1 = $src1
/*   151*/      OPC_CheckChild1Type, MVT::i32,
/*   153*/      OPC_CheckType, MVT::i32,
/*   155*/      OPC_Scope, 100, /*->257*/ // 2 children in Scope
/*   157*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   159*/        OPC_EmitInteger, MVT::i32, 0, 
/*   162*/        OPC_EmitInteger, MVT::i32, 0, 
/*   165*/        OPC_EmitInteger, MVT::i32, 1, 
/*   168*/        OPC_EmitInteger, MVT::i32, 0, 
/*   171*/        OPC_EmitInteger, MVT::i32, 0, 
/*   174*/        OPC_EmitInteger, MVT::i32, 0, 
/*   177*/        OPC_EmitInteger, MVT::i32, 0, 
/*   180*/        OPC_EmitInteger, MVT::i32, 0, 
/*   183*/        OPC_EmitInteger, MVT::i32, 0, 
/*   186*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   198*/        OPC_EmitInteger, MVT::i32, 0, 
/*   201*/        OPC_EmitInteger, MVT::i32, 0, 
/*   204*/        OPC_EmitInteger, MVT::i32, 0, 
/*   207*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   219*/        OPC_EmitInteger, MVT::i32, 1, 
/*   222*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   225*/        OPC_EmitInteger, MVT::i32, 0, 
/*   228*/        OPC_EmitInteger, MVT::i32, 0, 
/*   231*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   257*/      /*Scope*/ 100, /*->358*/
/*   258*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   260*/        OPC_EmitInteger, MVT::i32, 0, 
/*   263*/        OPC_EmitInteger, MVT::i32, 0, 
/*   266*/        OPC_EmitInteger, MVT::i32, 1, 
/*   269*/        OPC_EmitInteger, MVT::i32, 0, 
/*   272*/        OPC_EmitInteger, MVT::i32, 0, 
/*   275*/        OPC_EmitInteger, MVT::i32, 0, 
/*   278*/        OPC_EmitInteger, MVT::i32, 0, 
/*   281*/        OPC_EmitInteger, MVT::i32, 0, 
/*   284*/        OPC_EmitInteger, MVT::i32, 0, 
/*   287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   299*/        OPC_EmitInteger, MVT::i32, 0, 
/*   302*/        OPC_EmitInteger, MVT::i32, 0, 
/*   305*/        OPC_EmitInteger, MVT::i32, 0, 
/*   308*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   320*/        OPC_EmitInteger, MVT::i32, 1, 
/*   323*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   326*/        OPC_EmitInteger, MVT::i32, 0, 
/*   329*/        OPC_EmitInteger, MVT::i32, 0, 
/*   332*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   358*/      0, /*End of Scope*/
/*   359*/    0, /*End of Scope*/
/*   360*/  /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::SRA),// ->719
/*   364*/    OPC_Scope, 11|128,1/*139*/, /*->506*/ // 2 children in Scope
/*   367*/      OPC_MoveChild0,
/*   368*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   371*/      OPC_RecordChild0, // #0 = $src
/*   372*/      OPC_MoveChild1,
/*   373*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   376*/      OPC_CheckChild0Integer, 32, 
/*   378*/      OPC_RecordChild1, // #1 = $width
/*   379*/      OPC_CheckType, MVT::i32,
/*   381*/      OPC_MoveParent,
/*   382*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   384*/      OPC_MoveParent,
/*   385*/      OPC_MoveChild1,
/*   386*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   389*/      OPC_CheckChild0Integer, 32, 
/*   391*/      OPC_CheckChild1Same, 1,
/*   393*/      OPC_CheckType, MVT::i32,
/*   395*/      OPC_MoveParent,
/*   396*/      OPC_CheckType, MVT::i32,
/*   398*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   400*/      OPC_EmitInteger, MVT::i32, 0, 
/*   403*/      OPC_EmitInteger, MVT::i32, 0, 
/*   406*/      OPC_EmitInteger, MVT::i32, 0, 
/*   409*/      OPC_EmitInteger, MVT::i32, 0, 
/*   412*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   424*/      OPC_EmitInteger, MVT::i32, 0, 
/*   427*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   434*/      OPC_EmitInteger, MVT::i32, 0, 
/*   437*/      OPC_EmitInteger, MVT::i32, 0, 
/*   440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   452*/      OPC_EmitInteger, MVT::i32, 0, 
/*   455*/      OPC_EmitInteger, MVT::i32, 0, 
/*   458*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   470*/      OPC_EmitInteger, MVT::i32, 1, 
/*   473*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   476*/      OPC_EmitInteger, MVT::i32, 0, 
/*   479*/      OPC_EmitInteger, MVT::i32, 0, 
/*   482*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sra:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   506*/    /*Scope*/ 82|128,1/*210*/, /*->718*/
/*   508*/      OPC_RecordChild0, // #0 = $src0
/*   509*/      OPC_RecordChild1, // #1 = $src1
/*   510*/      OPC_CheckChild1Type, MVT::i32,
/*   512*/      OPC_CheckType, MVT::i32,
/*   514*/      OPC_Scope, 100, /*->616*/ // 2 children in Scope
/*   516*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   518*/        OPC_EmitInteger, MVT::i32, 0, 
/*   521*/        OPC_EmitInteger, MVT::i32, 0, 
/*   524*/        OPC_EmitInteger, MVT::i32, 1, 
/*   527*/        OPC_EmitInteger, MVT::i32, 0, 
/*   530*/        OPC_EmitInteger, MVT::i32, 0, 
/*   533*/        OPC_EmitInteger, MVT::i32, 0, 
/*   536*/        OPC_EmitInteger, MVT::i32, 0, 
/*   539*/        OPC_EmitInteger, MVT::i32, 0, 
/*   542*/        OPC_EmitInteger, MVT::i32, 0, 
/*   545*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   557*/        OPC_EmitInteger, MVT::i32, 0, 
/*   560*/        OPC_EmitInteger, MVT::i32, 0, 
/*   563*/        OPC_EmitInteger, MVT::i32, 0, 
/*   566*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   578*/        OPC_EmitInteger, MVT::i32, 1, 
/*   581*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   584*/        OPC_EmitInteger, MVT::i32, 0, 
/*   587*/        OPC_EmitInteger, MVT::i32, 0, 
/*   590*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   616*/      /*Scope*/ 100, /*->717*/
/*   617*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   619*/        OPC_EmitInteger, MVT::i32, 0, 
/*   622*/        OPC_EmitInteger, MVT::i32, 0, 
/*   625*/        OPC_EmitInteger, MVT::i32, 1, 
/*   628*/        OPC_EmitInteger, MVT::i32, 0, 
/*   631*/        OPC_EmitInteger, MVT::i32, 0, 
/*   634*/        OPC_EmitInteger, MVT::i32, 0, 
/*   637*/        OPC_EmitInteger, MVT::i32, 0, 
/*   640*/        OPC_EmitInteger, MVT::i32, 0, 
/*   643*/        OPC_EmitInteger, MVT::i32, 0, 
/*   646*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   658*/        OPC_EmitInteger, MVT::i32, 0, 
/*   661*/        OPC_EmitInteger, MVT::i32, 0, 
/*   664*/        OPC_EmitInteger, MVT::i32, 0, 
/*   667*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   679*/        OPC_EmitInteger, MVT::i32, 1, 
/*   682*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   685*/        OPC_EmitInteger, MVT::i32, 0, 
/*   688*/        OPC_EmitInteger, MVT::i32, 0, 
/*   691*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   717*/      0, /*End of Scope*/
/*   718*/    0, /*End of Scope*/
/*   719*/  /*SwitchOpcode*/ 126, TARGET_VAL(AMDGPUISD::R600_EXPORT),// ->848
/*   722*/    OPC_RecordNode, // #0 = 'R600_EXPORT' chained node
/*   723*/    OPC_RecordChild1, // #1 = $src
/*   724*/    OPC_CheckChild1Type, MVT::v4f32,
/*   726*/    OPC_RecordChild2, // #2 = $base
/*   727*/    OPC_MoveChild2,
/*   728*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   731*/    OPC_CheckType, MVT::i32,
/*   733*/    OPC_MoveParent,
/*   734*/    OPC_RecordChild3, // #3 = $type
/*   735*/    OPC_MoveChild3,
/*   736*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   739*/    OPC_CheckType, MVT::i32,
/*   741*/    OPC_MoveParent,
/*   742*/    OPC_RecordChild4, // #4 = $swz_x
/*   743*/    OPC_MoveChild4,
/*   744*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   747*/    OPC_CheckType, MVT::i32,
/*   749*/    OPC_MoveParent,
/*   750*/    OPC_RecordChild5, // #5 = $swz_y
/*   751*/    OPC_MoveChild5,
/*   752*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   755*/    OPC_CheckType, MVT::i32,
/*   757*/    OPC_MoveParent,
/*   758*/    OPC_RecordChild6, // #6 = $swz_z
/*   759*/    OPC_MoveChild6,
/*   760*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   763*/    OPC_CheckType, MVT::i32,
/*   765*/    OPC_MoveParent,
/*   766*/    OPC_RecordChild7, // #7 = $swz_w
/*   767*/    OPC_MoveChild7,
/*   768*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   771*/    OPC_CheckType, MVT::i32,
/*   773*/    OPC_MoveParent,
/*   774*/    OPC_Scope, 35, /*->811*/ // 2 children in Scope
/*   776*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   778*/      OPC_EmitMergeInputChains1_0,
/*   779*/      OPC_EmitConvertToTarget, 3,
/*   781*/      OPC_EmitConvertToTarget, 2,
/*   783*/      OPC_EmitConvertToTarget, 4,
/*   785*/      OPC_EmitConvertToTarget, 5,
/*   787*/      OPC_EmitConvertToTarget, 6,
/*   789*/      OPC_EmitConvertToTarget, 7,
/*   791*/      OPC_EmitInteger, MVT::i32, 39, 
/*   794*/      OPC_EmitInteger, MVT::i32, 0, 
/*   797*/      OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (R600_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 39:{ *:[i32] }, 0:{ *:[i32] })
/*   811*/    /*Scope*/ 35, /*->847*/
/*   812*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   814*/      OPC_EmitMergeInputChains1_0,
/*   815*/      OPC_EmitConvertToTarget, 3,
/*   817*/      OPC_EmitConvertToTarget, 2,
/*   819*/      OPC_EmitConvertToTarget, 4,
/*   821*/      OPC_EmitConvertToTarget, 5,
/*   823*/      OPC_EmitConvertToTarget, 6,
/*   825*/      OPC_EmitConvertToTarget, 7,
/*   827*/      OPC_EmitInteger, MVT::i32, 83, 
/*   830*/      OPC_EmitInteger, MVT::i32, 0, 
/*   833*/      OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (EG_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 83:{ *:[i32] }, 0:{ *:[i32] })
/*   847*/    0, /*End of Scope*/
/*   848*/  /*SwitchOpcode*/ 84|128,8/*1108*/, TARGET_VAL(ISD::AND),// ->1960
/*   852*/    OPC_Scope, 37|128,2/*293*/, /*->1148*/ // 5 children in Scope
/*   855*/      OPC_RecordChild0, // #0 = $src
/*   856*/      OPC_MoveChild1,
/*   857*/      OPC_SwitchOpcode /*2 cases */, 8|128,1/*136*/, TARGET_VAL(ISD::ADD),// ->998
/*   862*/        OPC_MoveChild0,
/*   863*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   866*/        OPC_CheckChild0Integer, 1, 
/*   868*/        OPC_RecordChild1, // #1 = $width
/*   869*/        OPC_CheckChild1Type, MVT::i32,
/*   871*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   873*/        OPC_MoveParent,
/*   874*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   885*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*   887*/        OPC_MoveParent,
/*   888*/        OPC_CheckType, MVT::i32,
/*   890*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   892*/        OPC_EmitInteger, MVT::i32, 0, 
/*   895*/        OPC_EmitInteger, MVT::i32, 0, 
/*   898*/        OPC_EmitInteger, MVT::i32, 0, 
/*   901*/        OPC_EmitInteger, MVT::i32, 0, 
/*   904*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   916*/        OPC_EmitInteger, MVT::i32, 0, 
/*   919*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   926*/        OPC_EmitInteger, MVT::i32, 0, 
/*   929*/        OPC_EmitInteger, MVT::i32, 0, 
/*   932*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   944*/        OPC_EmitInteger, MVT::i32, 0, 
/*   947*/        OPC_EmitInteger, MVT::i32, 0, 
/*   950*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   962*/        OPC_EmitInteger, MVT::i32, 1, 
/*   965*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   968*/        OPC_EmitInteger, MVT::i32, 0, 
/*   971*/        OPC_EmitInteger, MVT::i32, 0, 
/*   974*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   998*/      /*SwitchOpcode*/ 17|128,1/*145*/, TARGET_VAL(ISD::XOR),// ->1147
/*  1002*/        OPC_MoveChild0,
/*  1003*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1006*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1017*/        OPC_RecordChild1, // #1 = $width
/*  1018*/        OPC_CheckChild1Type, MVT::i32,
/*  1020*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1022*/        OPC_MoveParent,
/*  1023*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1034*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1036*/        OPC_MoveParent,
/*  1037*/        OPC_CheckType, MVT::i32,
/*  1039*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1041*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1047*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1050*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1053*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1065*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1068*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1075*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1078*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1081*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1093*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1096*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1099*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1111*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1114*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1117*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1120*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1123*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1147*/      0, // EndSwitchOpcode
/*  1148*/    /*Scope*/ 38|128,2/*294*/, /*->1444*/
/*  1150*/      OPC_MoveChild0,
/*  1151*/      OPC_SwitchOpcode /*2 cases */, 9|128,1/*137*/, TARGET_VAL(ISD::ADD),// ->1293
/*  1156*/        OPC_MoveChild0,
/*  1157*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1160*/        OPC_CheckChild0Integer, 1, 
/*  1162*/        OPC_RecordChild1, // #0 = $width
/*  1163*/        OPC_CheckChild1Type, MVT::i32,
/*  1165*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1167*/        OPC_MoveParent,
/*  1168*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1179*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*  1181*/        OPC_MoveParent,
/*  1182*/        OPC_RecordChild1, // #1 = $src
/*  1183*/        OPC_CheckType, MVT::i32,
/*  1185*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1187*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1190*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1193*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1196*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1199*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1211*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1214*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1221*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1224*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1227*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1239*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1242*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1245*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1257*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1260*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1263*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1266*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1269*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1293*/      /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::XOR),// ->1443
/*  1297*/        OPC_MoveChild0,
/*  1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1301*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1312*/        OPC_RecordChild1, // #0 = $width
/*  1313*/        OPC_CheckChild1Type, MVT::i32,
/*  1315*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1317*/        OPC_MoveParent,
/*  1318*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1329*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1331*/        OPC_MoveParent,
/*  1332*/        OPC_RecordChild1, // #1 = $src
/*  1333*/        OPC_CheckType, MVT::i32,
/*  1335*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1337*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1340*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1343*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1346*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1349*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1361*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1364*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1371*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1374*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1377*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1389*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1392*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1395*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1407*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1410*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1413*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1416*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1419*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1443*/      0, // EndSwitchOpcode
/*  1444*/    /*Scope*/ 11|128,1/*139*/, /*->1585*/
/*  1446*/      OPC_RecordChild0, // #0 = $src
/*  1447*/      OPC_MoveChild1,
/*  1448*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1451*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1462*/      OPC_MoveChild1,
/*  1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1466*/      OPC_CheckChild0Integer, 32, 
/*  1468*/      OPC_RecordChild1, // #1 = $width
/*  1469*/      OPC_CheckType, MVT::i32,
/*  1471*/      OPC_MoveParent,
/*  1472*/      OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1474*/      OPC_MoveParent,
/*  1475*/      OPC_CheckType, MVT::i32,
/*  1477*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1479*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1482*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1485*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1488*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1491*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1503*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1506*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1513*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1516*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1519*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1531*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1534*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1537*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1549*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1552*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1555*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1558*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1561*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>) - Complexity = 20
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1585*/    /*Scope*/ 11|128,2/*267*/, /*->1854*/
/*  1587*/      OPC_MoveChild0,
/*  1588*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1591*/      OPC_Scope, 7|128,1/*135*/, /*->1729*/ // 2 children in Scope
/*  1594*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1605*/        OPC_MoveChild1,
/*  1606*/        OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1609*/        OPC_CheckChild0Integer, 32, 
/*  1611*/        OPC_RecordChild1, // #0 = $width
/*  1612*/        OPC_CheckType, MVT::i32,
/*  1614*/        OPC_MoveParent,
/*  1615*/        OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1617*/        OPC_MoveParent,
/*  1618*/        OPC_RecordChild1, // #1 = $src
/*  1619*/        OPC_CheckType, MVT::i32,
/*  1621*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1623*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1626*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1629*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1632*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1635*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1647*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1650*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1657*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1660*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1663*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1675*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1678*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1681*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1693*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1696*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1699*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1702*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1705*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 20
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1729*/      /*Scope*/ 123, /*->1853*/
/*  1730*/        OPC_RecordChild0, // #0 = $src
/*  1731*/        OPC_RecordChild1, // #1 = $rshift
/*  1732*/        OPC_CheckChild1Type, MVT::i32,
/*  1734*/        OPC_MoveParent,
/*  1735*/        OPC_RecordChild1, // #2 = $mask
/*  1736*/        OPC_MoveChild1,
/*  1737*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1740*/        OPC_CheckPredicate, 1, // Predicate_IMMZeroBasedBitfieldMask
/*  1742*/        OPC_MoveParent,
/*  1743*/        OPC_CheckType, MVT::i32,
/*  1745*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1747*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1750*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1753*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1756*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1759*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1771*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1774*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1777*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1789*/        OPC_EmitNodeXForm, 0, 2, // IMMPopCount
/*  1792*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*  1799*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1802*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1805*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1817*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1820*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1823*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1826*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1829*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$rshift), (imm:{ *:[i32] })<<P:Predicate_IMMZeroBasedBitfieldMask>>:$mask) - Complexity = 10
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, ?:{ *:[i32] }:$rshift, (MOV_IMM_I32:{ *:[i32] } (IMMPopCount:{ *:[i32] } ?:{ *:[i32] }:$mask)))
/*  1853*/      0, /*End of Scope*/
/*  1854*/    /*Scope*/ 104, /*->1959*/
/*  1855*/      OPC_RecordChild0, // #0 = $src0
/*  1856*/      OPC_RecordChild1, // #1 = $src1
/*  1857*/      OPC_CheckType, MVT::i32,
/*  1859*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1861*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1864*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1867*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1870*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1873*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1876*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1879*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1882*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1885*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1888*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1900*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1903*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1906*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1909*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1921*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1924*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1927*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1930*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1933*/      OPC_MorphNodeTo1, TARGET_VAL(R600::AND_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (and:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (AND_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*  1959*/    0, /*End of Scope*/
/*  1960*/  /*SwitchOpcode*/ 118|128,3/*502*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->2466
/*  1964*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  1965*/    OPC_Scope, 64|128,2/*320*/, /*->2288*/ // 4 children in Scope
/*  1968*/      OPC_CheckChild1Integer, 43|128,41/*5291*/, 
/*  1971*/      OPC_RecordChild2, // #1 = $src
/*  1972*/      OPC_RecordChild3, // #2 = $arraybase
/*  1973*/      OPC_MoveChild3,
/*  1974*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1977*/      OPC_MoveParent,
/*  1978*/      OPC_Scope, 76, /*->2056*/ // 4 children in Scope
/*  1980*/        OPC_CheckChild4Integer, 0, 
/*  1982*/        OPC_RecordChild5, // #3 = $mask
/*  1983*/        OPC_MoveChild5,
/*  1984*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1987*/        OPC_MoveParent,
/*  1988*/        OPC_Scope, 32, /*->2022*/ // 2 children in Scope
/*  1990*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  1992*/          OPC_EmitMergeInputChains1_0,
/*  1993*/          OPC_EmitInteger, MVT::i32, 0, 
/*  1996*/          OPC_EmitConvertToTarget, 2,
/*  1998*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2002*/          OPC_EmitConvertToTarget, 3,
/*  2004*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2007*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2010*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 32:{ *:[i32] }, 0:{ *:[i32] })
/*  2022*/        /*Scope*/ 32, /*->2055*/
/*  2023*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2025*/          OPC_EmitMergeInputChains1_0,
/*  2026*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2029*/          OPC_EmitConvertToTarget, 2,
/*  2031*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2035*/          OPC_EmitConvertToTarget, 3,
/*  2037*/          OPC_EmitInteger, MVT::i32, 64, 
/*  2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2043*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 64:{ *:[i32] }, 0:{ *:[i32] })
/*  2055*/        0, /*End of Scope*/
/*  2056*/      /*Scope*/ 76, /*->2133*/
/*  2057*/        OPC_CheckChild4Integer, 1, 
/*  2059*/        OPC_RecordChild5, // #3 = $mask
/*  2060*/        OPC_MoveChild5,
/*  2061*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2064*/        OPC_MoveParent,
/*  2065*/        OPC_Scope, 32, /*->2099*/ // 2 children in Scope
/*  2067*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2069*/          OPC_EmitMergeInputChains1_0,
/*  2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2073*/          OPC_EmitConvertToTarget, 2,
/*  2075*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2079*/          OPC_EmitConvertToTarget, 3,
/*  2081*/          OPC_EmitInteger, MVT::i32, 33, 
/*  2084*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2087*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 33:{ *:[i32] }, 0:{ *:[i32] })
/*  2099*/        /*Scope*/ 32, /*->2132*/
/*  2100*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2102*/          OPC_EmitMergeInputChains1_0,
/*  2103*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2106*/          OPC_EmitConvertToTarget, 2,
/*  2108*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2112*/          OPC_EmitConvertToTarget, 3,
/*  2114*/          OPC_EmitInteger, MVT::i32, 65, 
/*  2117*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2120*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 65:{ *:[i32] }, 0:{ *:[i32] })
/*  2132*/        0, /*End of Scope*/
/*  2133*/      /*Scope*/ 76, /*->2210*/
/*  2134*/        OPC_CheckChild4Integer, 2, 
/*  2136*/        OPC_RecordChild5, // #3 = $mask
/*  2137*/        OPC_MoveChild5,
/*  2138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2141*/        OPC_MoveParent,
/*  2142*/        OPC_Scope, 32, /*->2176*/ // 2 children in Scope
/*  2144*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2146*/          OPC_EmitMergeInputChains1_0,
/*  2147*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2150*/          OPC_EmitConvertToTarget, 2,
/*  2152*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2156*/          OPC_EmitConvertToTarget, 3,
/*  2158*/          OPC_EmitInteger, MVT::i32, 34, 
/*  2161*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2164*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 34:{ *:[i32] }, 0:{ *:[i32] })
/*  2176*/        /*Scope*/ 32, /*->2209*/
/*  2177*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2179*/          OPC_EmitMergeInputChains1_0,
/*  2180*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2183*/          OPC_EmitConvertToTarget, 2,
/*  2185*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2189*/          OPC_EmitConvertToTarget, 3,
/*  2191*/          OPC_EmitInteger, MVT::i32, 66, 
/*  2194*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2197*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 66:{ *:[i32] }, 0:{ *:[i32] })
/*  2209*/        0, /*End of Scope*/
/*  2210*/      /*Scope*/ 76, /*->2287*/
/*  2211*/        OPC_CheckChild4Integer, 3, 
/*  2213*/        OPC_RecordChild5, // #3 = $mask
/*  2214*/        OPC_MoveChild5,
/*  2215*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2218*/        OPC_MoveParent,
/*  2219*/        OPC_Scope, 32, /*->2253*/ // 2 children in Scope
/*  2221*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2223*/          OPC_EmitMergeInputChains1_0,
/*  2224*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2227*/          OPC_EmitConvertToTarget, 2,
/*  2229*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2233*/          OPC_EmitConvertToTarget, 3,
/*  2235*/          OPC_EmitInteger, MVT::i32, 35, 
/*  2238*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2241*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 35:{ *:[i32] }, 0:{ *:[i32] })
/*  2253*/        /*Scope*/ 32, /*->2286*/
/*  2254*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2256*/          OPC_EmitMergeInputChains1_0,
/*  2257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2260*/          OPC_EmitConvertToTarget, 2,
/*  2262*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2266*/          OPC_EmitConvertToTarget, 3,
/*  2268*/          OPC_EmitInteger, MVT::i32, 67, 
/*  2271*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2274*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5291:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 67:{ *:[i32] }, 0:{ *:[i32] })
/*  2286*/        0, /*End of Scope*/
/*  2287*/      0, /*End of Scope*/
/*  2288*/    /*Scope*/ 49, /*->2338*/
/*  2289*/      OPC_CheckChild1Integer, 25|128,41/*5273*/, 
/*  2292*/      OPC_RecordChild2, // #1 = $rw_gpr
/*  2293*/      OPC_RecordChild3, // #2 = $index_gpr
/*  2294*/      OPC_RecordChild4, // #3 = $rat_id
/*  2295*/      OPC_MoveChild4,
/*  2296*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2299*/      OPC_MoveParent,
/*  2300*/      OPC_Scope, 17, /*->2319*/ // 2 children in Scope
/*  2302*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/*  2304*/        OPC_EmitMergeInputChains1_0,
/*  2305*/        OPC_EmitConvertToTarget, 3,
/*  2307*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2310*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_cm), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 5273:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_cm R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2319*/      /*Scope*/ 17, /*->2337*/
/*  2320*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2322*/        OPC_EmitMergeInputChains1_0,
/*  2323*/        OPC_EmitConvertToTarget, 3,
/*  2325*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2328*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_eg), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 5273:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_eg R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2337*/      0, /*End of Scope*/
/*  2338*/    /*Scope*/ 11, /*->2350*/
/*  2339*/      OPC_CheckChild1Integer, 22|128,41/*5270*/, 
/*  2342*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2344*/      OPC_EmitMergeInputChains1_0,
/*  2345*/      OPC_MorphNodeTo0, TARGET_VAL(R600::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 5270:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*  2350*/    /*Scope*/ 114, /*->2465*/
/*  2351*/      OPC_CheckChild1Integer, 24|128,41/*5272*/, 
/*  2354*/      OPC_RecordChild2, // #1 = $src0
/*  2355*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2357*/      OPC_EmitMergeInputChains1_0,
/*  2358*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2361*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2364*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2367*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2370*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2373*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2376*/      OPC_EmitRegister, MVT::f32, R600::ZERO,
/*  2379*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2382*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2385*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2388*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2400*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2403*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2406*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2409*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2421*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2424*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2427*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2430*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2433*/      OPC_EmitNode1, TARGET_VAL(R600::KILLGT), 0|OPFL_Chain,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*  2459*/      OPC_MorphNodeTo0, TARGET_VAL(R600::MASK_WRITE), 0|OPFL_Chain,
                    1/*#Ops*/, 21, 
                // Src: (intrinsic_void 5272:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:{ *:[i32] } ZERO:{ *:[f32] }, ?:{ *:[f32] }:$src0))
/*  2465*/    0, /*End of Scope*/
/*  2466*/  /*SwitchOpcode*/ 15|128,116/*14863*/, TARGET_VAL(ISD::OR),// ->17333
/*  2470*/    OPC_Scope, 34|128,115/*14754*/, /*->17227*/ // 2 children in Scope
/*  2473*/      OPC_MoveChild0,
/*  2474*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2477*/      OPC_Scope, 93|128,5/*733*/, /*->3213*/ // 8 children in Scope
/*  2480*/        OPC_RecordChild0, // #0 = $y
/*  2481*/        OPC_Scope, 108|128,3/*492*/, /*->2976*/ // 2 children in Scope
/*  2484*/          OPC_RecordChild1, // #1 = $x
/*  2485*/          OPC_MoveParent,
/*  2486*/          OPC_MoveChild1,
/*  2487*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2490*/          OPC_Scope, 120, /*->2612*/ // 4 children in Scope
/*  2492*/            OPC_RecordChild0, // #2 = $z
/*  2493*/            OPC_MoveChild1,
/*  2494*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2497*/            OPC_CheckChild0Same, 1,
/*  2499*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2510*/            OPC_MoveParent,
/*  2511*/            OPC_MoveParent,
/*  2512*/            OPC_CheckType, MVT::i32,
/*  2514*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2519*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2522*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2525*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2528*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2540*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2543*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2546*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2558*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2561*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2564*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2576*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2579*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2588*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2612*/          /*Scope*/ 120, /*->2733*/
/*  2613*/            OPC_MoveChild0,
/*  2614*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2617*/            OPC_CheckChild0Same, 1,
/*  2619*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2630*/            OPC_MoveParent,
/*  2631*/            OPC_RecordChild1, // #2 = $z
/*  2632*/            OPC_MoveParent,
/*  2633*/            OPC_CheckType, MVT::i32,
/*  2635*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2637*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2640*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2643*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2646*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2649*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2661*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2664*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2667*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2682*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2685*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2697*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2700*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2703*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2706*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2709*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2733*/          /*Scope*/ 120, /*->2854*/
/*  2734*/            OPC_RecordChild0, // #2 = $z
/*  2735*/            OPC_MoveChild1,
/*  2736*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2739*/            OPC_CheckChild0Same, 0,
/*  2741*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2752*/            OPC_MoveParent,
/*  2753*/            OPC_MoveParent,
/*  2754*/            OPC_CheckType, MVT::i32,
/*  2756*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2758*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2761*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2782*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2785*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2788*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2800*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2803*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2806*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2818*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2821*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2824*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2827*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2830*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2854*/          /*Scope*/ 120, /*->2975*/
/*  2855*/            OPC_MoveChild0,
/*  2856*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2859*/            OPC_CheckChild0Same, 0,
/*  2861*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2872*/            OPC_MoveParent,
/*  2873*/            OPC_RecordChild1, // #2 = $z
/*  2874*/            OPC_MoveParent,
/*  2875*/            OPC_CheckType, MVT::i32,
/*  2877*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2879*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2882*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2885*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2888*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2891*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2903*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2906*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2909*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2921*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2924*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2939*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2975*/          0, /*End of Scope*/
/*  2976*/        /*Scope*/ 106|128,1/*234*/, /*->3212*/
/*  2978*/          OPC_MoveChild1,
/*  2979*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2982*/          OPC_RecordChild0, // #1 = $x
/*  2983*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2994*/          OPC_MoveParent,
/*  2995*/          OPC_MoveParent,
/*  2996*/          OPC_MoveChild1,
/*  2997*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3000*/          OPC_Scope, 104, /*->3106*/ // 2 children in Scope
/*  3002*/            OPC_RecordChild0, // #2 = $y
/*  3003*/            OPC_CheckChild1Same, 1,
/*  3005*/            OPC_MoveParent,
/*  3006*/            OPC_CheckType, MVT::i32,
/*  3008*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3010*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3013*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3016*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3019*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3022*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3034*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3037*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3040*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3070*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3073*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3076*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3079*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3082*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3106*/          /*Scope*/ 104, /*->3211*/
/*  3107*/            OPC_CheckChild0Same, 1,
/*  3109*/            OPC_RecordChild1, // #2 = $y
/*  3110*/            OPC_MoveParent,
/*  3111*/            OPC_CheckType, MVT::i32,
/*  3113*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3115*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3118*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3121*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3124*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3127*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3139*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3145*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3163*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3175*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3178*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3181*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3187*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3211*/          0, /*End of Scope*/
/*  3212*/        0, /*End of Scope*/
/*  3213*/      /*Scope*/ 107|128,1/*235*/, /*->3450*/
/*  3215*/        OPC_MoveChild0,
/*  3216*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3219*/        OPC_RecordChild0, // #0 = $x
/*  3220*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3231*/        OPC_MoveParent,
/*  3232*/        OPC_RecordChild1, // #1 = $z
/*  3233*/        OPC_MoveParent,
/*  3234*/        OPC_MoveChild1,
/*  3235*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3238*/        OPC_Scope, 104, /*->3344*/ // 2 children in Scope
/*  3240*/          OPC_RecordChild0, // #2 = $y
/*  3241*/          OPC_CheckChild1Same, 0,
/*  3243*/          OPC_MoveParent,
/*  3244*/          OPC_CheckType, MVT::i32,
/*  3246*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3248*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3251*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3254*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3260*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3272*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3275*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3278*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3290*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3293*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3296*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3308*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3311*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3314*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3317*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3320*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3344*/        /*Scope*/ 104, /*->3449*/
/*  3345*/          OPC_CheckChild0Same, 0,
/*  3347*/          OPC_RecordChild1, // #2 = $y
/*  3348*/          OPC_MoveParent,
/*  3349*/          OPC_CheckType, MVT::i32,
/*  3351*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3353*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3356*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3359*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3362*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3365*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3377*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3383*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3398*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3401*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3413*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3416*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3419*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3422*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3425*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3449*/        0, /*End of Scope*/
/*  3450*/      /*Scope*/ 39|128,14/*1831*/, /*->5283*/
/*  3452*/        OPC_RecordChild0, // #0 = $y
/*  3453*/        OPC_Scope, 72|128,9/*1224*/, /*->4680*/ // 2 children in Scope
/*  3456*/          OPC_RecordChild1, // #1 = $x
/*  3457*/          OPC_MoveParent,
/*  3458*/          OPC_MoveChild1,
/*  3459*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3462*/          OPC_Scope, 46|128,2/*302*/, /*->3767*/ // 4 children in Scope
/*  3465*/            OPC_RecordChild0, // #2 = $z
/*  3466*/            OPC_MoveChild1,
/*  3467*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3470*/            OPC_CheckChild0Same, 1,
/*  3472*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3483*/            OPC_MoveParent,
/*  3484*/            OPC_MoveParent,
/*  3485*/            OPC_CheckType, MVT::i64,
/*  3487*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3489*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3492*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3495*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3498*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3501*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3509*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3512*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3515*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3527*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3530*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3538*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3541*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3544*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3556*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3559*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3567*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3570*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3573*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3585*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3588*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3591*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3594*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3597*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3621*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3624*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3630*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3633*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3641*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3644*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3647*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3659*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3662*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3670*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3673*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3676*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3688*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3691*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  3699*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3702*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3705*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3717*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3720*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3723*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3726*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3729*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  3753*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3756*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  3767*/          /*Scope*/ 46|128,2/*302*/, /*->4071*/
/*  3769*/            OPC_MoveChild0,
/*  3770*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3773*/            OPC_CheckChild0Same, 1,
/*  3775*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3786*/            OPC_MoveParent,
/*  3787*/            OPC_RecordChild1, // #2 = $z
/*  3788*/            OPC_MoveParent,
/*  3789*/            OPC_CheckType, MVT::i64,
/*  3791*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3793*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3799*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3802*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3805*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3813*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3816*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3819*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3831*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3834*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3842*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3845*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3848*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3860*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3863*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3871*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3874*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3889*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3895*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3898*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3901*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3925*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3931*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3934*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3937*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3951*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3963*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3966*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3974*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3977*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3980*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3992*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3995*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4003*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4009*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4021*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4024*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4027*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4030*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4033*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4057*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4060*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4071*/          /*Scope*/ 46|128,2/*302*/, /*->4375*/
/*  4073*/            OPC_RecordChild0, // #2 = $z
/*  4074*/            OPC_MoveChild1,
/*  4075*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4078*/            OPC_CheckChild0Same, 0,
/*  4080*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4091*/            OPC_MoveParent,
/*  4092*/            OPC_MoveParent,
/*  4093*/            OPC_CheckType, MVT::i64,
/*  4095*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4097*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4100*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4103*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4106*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4117*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4120*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4149*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4164*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4167*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4175*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4178*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4181*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4193*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4196*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4199*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4202*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4205*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4229*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4232*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4235*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4238*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4241*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4252*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4255*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4270*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4278*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4281*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4284*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4296*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4299*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4307*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4310*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4313*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4325*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4328*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4331*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4334*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4337*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4361*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4364*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4375*/          /*Scope*/ 46|128,2/*302*/, /*->4679*/
/*  4377*/            OPC_MoveChild0,
/*  4378*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4381*/            OPC_CheckChild0Same, 0,
/*  4383*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4394*/            OPC_MoveParent,
/*  4395*/            OPC_RecordChild1, // #2 = $z
/*  4396*/            OPC_MoveParent,
/*  4397*/            OPC_CheckType, MVT::i64,
/*  4399*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4401*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4404*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4407*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4410*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4413*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4421*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4424*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4427*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4439*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4442*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4450*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4453*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4456*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4468*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4471*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4479*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4482*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4485*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4497*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4500*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4503*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4506*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4509*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4533*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4536*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4539*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4542*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4545*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4553*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4556*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4559*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4571*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4574*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4588*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4600*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4603*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4617*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4629*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4632*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4635*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4638*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4641*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4665*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4668*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4679*/          0, /*End of Scope*/
/*  4680*/        /*Scope*/ 88|128,4/*600*/, /*->5282*/
/*  4682*/          OPC_MoveChild1,
/*  4683*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4686*/          OPC_RecordChild0, // #1 = $x
/*  4687*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4698*/          OPC_MoveParent,
/*  4699*/          OPC_MoveParent,
/*  4700*/          OPC_MoveChild1,
/*  4701*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  4704*/          OPC_Scope, 30|128,2/*286*/, /*->4993*/ // 2 children in Scope
/*  4707*/            OPC_RecordChild0, // #2 = $y
/*  4708*/            OPC_CheckChild1Same, 1,
/*  4710*/            OPC_MoveParent,
/*  4711*/            OPC_CheckType, MVT::i64,
/*  4713*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4715*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4718*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4721*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4724*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4727*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  4735*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4738*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4741*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4753*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4756*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  4764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4782*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4785*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  4793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4811*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4823*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4847*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4850*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4856*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4859*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  4867*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4870*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4873*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4885*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4888*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  4896*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4899*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4914*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4917*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  4925*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4931*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4943*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4946*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4949*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4952*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4955*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4979*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4982*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4993*/          /*Scope*/ 30|128,2/*286*/, /*->5281*/
/*  4995*/            OPC_CheckChild0Same, 1,
/*  4997*/            OPC_RecordChild1, // #2 = $y
/*  4998*/            OPC_MoveParent,
/*  4999*/            OPC_CheckType, MVT::i64,
/*  5001*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5003*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5009*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5012*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5015*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  5023*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5026*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5029*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5041*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5044*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5070*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5073*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  5081*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5084*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5099*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5105*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5108*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5111*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5138*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5141*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5144*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5147*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  5155*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5158*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5161*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5173*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5176*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5190*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5202*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5205*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  5213*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5216*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5219*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5231*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5234*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5237*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5240*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5243*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5270*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5281*/          0, /*End of Scope*/
/*  5282*/        0, /*End of Scope*/
/*  5283*/      /*Scope*/ 89|128,4/*601*/, /*->5886*/
/*  5285*/        OPC_MoveChild0,
/*  5286*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5289*/        OPC_RecordChild0, // #0 = $x
/*  5290*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5301*/        OPC_MoveParent,
/*  5302*/        OPC_RecordChild1, // #1 = $z
/*  5303*/        OPC_MoveParent,
/*  5304*/        OPC_MoveChild1,
/*  5305*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5308*/        OPC_Scope, 30|128,2/*286*/, /*->5597*/ // 2 children in Scope
/*  5311*/          OPC_RecordChild0, // #2 = $y
/*  5312*/          OPC_CheckChild1Same, 0,
/*  5314*/          OPC_MoveParent,
/*  5315*/          OPC_CheckType, MVT::i64,
/*  5317*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5319*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5322*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5325*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5328*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5331*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5339*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5342*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5345*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5357*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5360*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5374*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5386*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5389*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5397*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5400*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5403*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5415*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5418*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5421*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5424*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5427*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5451*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5454*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5457*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5460*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5463*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5471*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5474*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5477*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5489*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5492*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5500*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5503*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5518*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5521*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5535*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5547*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5550*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5553*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5556*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5559*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5583*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5586*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5597*/        /*Scope*/ 30|128,2/*286*/, /*->5885*/
/*  5599*/          OPC_CheckChild0Same, 0,
/*  5601*/          OPC_RecordChild1, // #2 = $y
/*  5602*/          OPC_MoveParent,
/*  5603*/          OPC_CheckType, MVT::i64,
/*  5605*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5607*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5610*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5613*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5616*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5619*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5627*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5630*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5633*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5645*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5648*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5656*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5659*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5662*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5674*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5677*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5685*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5688*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5691*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5703*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5706*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5709*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5712*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5715*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5739*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5742*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5745*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5748*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5751*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5759*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5762*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5777*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5780*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5788*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5791*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5794*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5806*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5809*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5817*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5820*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5823*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5835*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5838*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5841*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5844*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5847*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5871*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5874*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5885*/        0, /*End of Scope*/
/*  5886*/      /*Scope*/ 18|128,19/*2450*/, /*->8338*/
/*  5888*/        OPC_RecordChild0, // #0 = $x
/*  5889*/        OPC_Scope, 30|128,13/*1694*/, /*->7586*/ // 2 children in Scope
/*  5892*/          OPC_RecordChild1, // #1 = $z
/*  5893*/          OPC_MoveParent,
/*  5894*/          OPC_MoveChild1,
/*  5895*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5898*/          OPC_Scope, 35|128,3/*419*/, /*->6320*/ // 4 children in Scope
/*  5901*/            OPC_RecordChild0, // #2 = $y
/*  5902*/            OPC_MoveChild1,
/*  5903*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  5906*/            OPC_Scope, 76|128,1/*204*/, /*->6113*/ // 2 children in Scope
/*  5909*/              OPC_CheckChild0Same, 0,
/*  5911*/              OPC_CheckChild1Same, 1,
/*  5913*/              OPC_MoveParent,
/*  5914*/              OPC_MoveParent,
/*  5915*/              OPC_CheckType, MVT::i32,
/*  5917*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5919*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5922*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5925*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5928*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5931*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5934*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5937*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5940*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5943*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5946*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5949*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5952*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5964*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5967*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5970*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5973*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5985*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5988*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5991*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5994*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5997*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6023*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6026*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6029*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6041*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6044*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6047*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6059*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6062*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6089*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6113*/            /*Scope*/ 76|128,1/*204*/, /*->6319*/
/*  6115*/              OPC_CheckChild0Same, 1,
/*  6117*/              OPC_CheckChild1Same, 0,
/*  6119*/              OPC_MoveParent,
/*  6120*/              OPC_MoveParent,
/*  6121*/              OPC_CheckType, MVT::i32,
/*  6123*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6125*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6128*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6131*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6134*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6137*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6143*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6146*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6149*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6152*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6155*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6158*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6176*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6179*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6191*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6194*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6197*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6200*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6203*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6229*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6232*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6235*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6247*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6250*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6265*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6268*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6271*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6283*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6286*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6289*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6292*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6295*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6319*/            0, /*End of Scope*/
/*  6320*/          /*Scope*/ 36|128,3/*420*/, /*->6742*/
/*  6322*/            OPC_MoveChild0,
/*  6323*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6326*/            OPC_Scope, 77|128,1/*205*/, /*->6534*/ // 2 children in Scope
/*  6329*/              OPC_CheckChild0Same, 0,
/*  6331*/              OPC_CheckChild1Same, 1,
/*  6333*/              OPC_MoveParent,
/*  6334*/              OPC_RecordChild1, // #2 = $y
/*  6335*/              OPC_MoveParent,
/*  6336*/              OPC_CheckType, MVT::i32,
/*  6338*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6340*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6343*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6346*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6349*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6352*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6355*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6358*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6361*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6364*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6373*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6391*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6394*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6406*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6409*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6412*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6415*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6418*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6444*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6447*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6450*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6480*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6483*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6486*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6498*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6501*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6504*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6507*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6510*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6534*/            /*Scope*/ 77|128,1/*205*/, /*->6741*/
/*  6536*/              OPC_CheckChild0Same, 1,
/*  6538*/              OPC_CheckChild1Same, 0,
/*  6540*/              OPC_MoveParent,
/*  6541*/              OPC_RecordChild1, // #2 = $y
/*  6542*/              OPC_MoveParent,
/*  6543*/              OPC_CheckType, MVT::i32,
/*  6545*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6547*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6550*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6553*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6556*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6559*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6562*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6565*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6568*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6571*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6574*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6577*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6580*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6592*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6595*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6598*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6601*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6613*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6616*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6619*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6622*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6625*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6675*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6687*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6690*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6693*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6705*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6708*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6711*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6714*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6717*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6741*/            0, /*End of Scope*/
/*  6742*/          /*Scope*/ 35|128,3/*419*/, /*->7163*/
/*  6744*/            OPC_RecordChild0, // #2 = $y
/*  6745*/            OPC_MoveChild1,
/*  6746*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6749*/            OPC_Scope, 76|128,1/*204*/, /*->6956*/ // 2 children in Scope
/*  6752*/              OPC_CheckChild0Same, 1,
/*  6754*/              OPC_CheckChild1Same, 0,
/*  6756*/              OPC_MoveParent,
/*  6757*/              OPC_MoveParent,
/*  6758*/              OPC_CheckType, MVT::i32,
/*  6760*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6762*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6765*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6768*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6771*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6774*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6777*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6780*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6783*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6786*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6807*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6810*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6813*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6816*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6828*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6831*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6834*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6837*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6840*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6866*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6869*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6887*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6902*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6905*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6908*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6920*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6923*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6929*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6932*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6956*/            /*Scope*/ 76|128,1/*204*/, /*->7162*/
/*  6958*/              OPC_CheckChild0Same, 0,
/*  6960*/              OPC_CheckChild1Same, 1,
/*  6962*/              OPC_MoveParent,
/*  6963*/              OPC_MoveParent,
/*  6964*/              OPC_CheckType, MVT::i32,
/*  6966*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6968*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6971*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6974*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6977*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6980*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6989*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6992*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6995*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6998*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7001*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7013*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7016*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7019*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7022*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7034*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7037*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7046*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7072*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7075*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7078*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7090*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7093*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7096*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7108*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7111*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7126*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7129*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7138*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7162*/            0, /*End of Scope*/
/*  7163*/          /*Scope*/ 36|128,3/*420*/, /*->7585*/
/*  7165*/            OPC_MoveChild0,
/*  7166*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7169*/            OPC_Scope, 77|128,1/*205*/, /*->7377*/ // 2 children in Scope
/*  7172*/              OPC_CheckChild0Same, 1,
/*  7174*/              OPC_CheckChild1Same, 0,
/*  7176*/              OPC_MoveParent,
/*  7177*/              OPC_RecordChild1, // #2 = $y
/*  7178*/              OPC_MoveParent,
/*  7179*/              OPC_CheckType, MVT::i32,
/*  7181*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7183*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7186*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7189*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7192*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7195*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7198*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7201*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7204*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7207*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7210*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7213*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7216*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7228*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7231*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7234*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7237*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7249*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7252*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7258*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7261*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7287*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7290*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7293*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7305*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7308*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7311*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7323*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7326*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7329*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7341*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7344*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7347*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7350*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7353*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7377*/            /*Scope*/ 77|128,1/*205*/, /*->7584*/
/*  7379*/              OPC_CheckChild0Same, 0,
/*  7381*/              OPC_CheckChild1Same, 1,
/*  7383*/              OPC_MoveParent,
/*  7384*/              OPC_RecordChild1, // #2 = $y
/*  7385*/              OPC_MoveParent,
/*  7386*/              OPC_CheckType, MVT::i32,
/*  7388*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7390*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7393*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7396*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7399*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7402*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7411*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7414*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7417*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7420*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7423*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7435*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7438*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7441*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7444*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7456*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7459*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7468*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7494*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7497*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7500*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7512*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7515*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7518*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7530*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7533*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7536*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7548*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7551*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7557*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7560*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7584*/            0, /*End of Scope*/
/*  7585*/          0, /*End of Scope*/
/*  7586*/        /*Scope*/ 109|128,5/*749*/, /*->8337*/
/*  7588*/          OPC_MoveChild1,
/*  7589*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7592*/          OPC_RecordChild0, // #1 = $x
/*  7593*/          OPC_RecordChild1, // #2 = $z
/*  7594*/          OPC_MoveParent,
/*  7595*/          OPC_MoveParent,
/*  7596*/          OPC_MoveChild1,
/*  7597*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  7600*/          OPC_Scope, 75|128,1/*203*/, /*->7806*/ // 3 children in Scope
/*  7603*/            OPC_CheckChild0Same, 1,
/*  7605*/            OPC_CheckChild1Same, 2,
/*  7607*/            OPC_MoveParent,
/*  7608*/            OPC_CheckType, MVT::i32,
/*  7610*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7612*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7615*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7618*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7621*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7624*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7630*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7633*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7636*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7639*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7642*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7645*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7657*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7660*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7663*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7678*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7684*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7687*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7690*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7716*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7719*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7722*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7734*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7737*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7740*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7752*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7755*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7758*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7770*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7773*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7776*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7779*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7782*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7806*/          /*Scope*/ 67|128,2/*323*/, /*->8131*/
/*  7808*/            OPC_CheckChild0Same, 2,
/*  7810*/            OPC_CheckChild1Same, 1,
/*  7812*/            OPC_MoveParent,
/*  7813*/            OPC_CheckType, MVT::i32,
/*  7815*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7823*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7826*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7829*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7835*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7838*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7841*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7844*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7847*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7850*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7862*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7865*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7868*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7871*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7883*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7886*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7889*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7892*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7895*/            OPC_Scope, 116, /*->8013*/ // 2 children in Scope
/*  7897*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7923*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7929*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7941*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7944*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7947*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7959*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7962*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7965*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7977*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7980*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7989*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8013*/            /*Scope*/ 116, /*->8130*/
/*  8014*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8046*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8058*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8061*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8064*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8076*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8079*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8082*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8094*/              OPC_EmitInteger, MVT::i32, 1, 
/*  8097*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8100*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8103*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8106*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8130*/            0, /*End of Scope*/
/*  8131*/          /*Scope*/ 75|128,1/*203*/, /*->8336*/
/*  8133*/            OPC_CheckChild0Same, 1,
/*  8135*/            OPC_CheckChild1Same, 2,
/*  8137*/            OPC_MoveParent,
/*  8138*/            OPC_CheckType, MVT::i32,
/*  8140*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8145*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8148*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8151*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8154*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8163*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8166*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8169*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8172*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8175*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8190*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8193*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8196*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8208*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8211*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8214*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8217*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8220*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8246*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8252*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8264*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8267*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8270*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8282*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8285*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8288*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8300*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8303*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8306*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8309*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8312*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8336*/          0, /*End of Scope*/
/*  8337*/        0, /*End of Scope*/
/*  8338*/      /*Scope*/ 110|128,5/*750*/, /*->9090*/
/*  8340*/        OPC_MoveChild0,
/*  8341*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  8344*/        OPC_RecordChild0, // #0 = $x
/*  8345*/        OPC_RecordChild1, // #1 = $z
/*  8346*/        OPC_MoveParent,
/*  8347*/        OPC_RecordChild1, // #2 = $y
/*  8348*/        OPC_MoveParent,
/*  8349*/        OPC_MoveChild1,
/*  8350*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  8353*/        OPC_Scope, 75|128,1/*203*/, /*->8559*/ // 3 children in Scope
/*  8356*/          OPC_CheckChild0Same, 0,
/*  8358*/          OPC_CheckChild1Same, 1,
/*  8360*/          OPC_MoveParent,
/*  8361*/          OPC_CheckType, MVT::i32,
/*  8363*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8365*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8374*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8377*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8383*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8386*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8389*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8392*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8410*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8413*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8416*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8419*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8431*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8434*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8437*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8440*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8443*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8469*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8472*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8475*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8487*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8490*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8493*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8505*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8508*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8511*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8523*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8526*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8535*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8559*/        /*Scope*/ 67|128,2/*323*/, /*->8884*/
/*  8561*/          OPC_CheckChild0Same, 1,
/*  8563*/          OPC_CheckChild1Same, 0,
/*  8565*/          OPC_MoveParent,
/*  8566*/          OPC_CheckType, MVT::i32,
/*  8568*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8570*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8573*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8576*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8579*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8582*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8585*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8588*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8591*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8594*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8597*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8600*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8603*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8615*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8618*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8621*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8636*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8642*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8645*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8648*/          OPC_Scope, 116, /*->8766*/ // 2 children in Scope
/*  8650*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8676*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8682*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8694*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8697*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8700*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8712*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8715*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8718*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8730*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8733*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8736*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8739*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8742*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8766*/          /*Scope*/ 116, /*->8883*/
/*  8767*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8811*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8814*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8817*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8829*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8835*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8847*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8850*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8856*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8859*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8883*/          0, /*End of Scope*/
/*  8884*/        /*Scope*/ 75|128,1/*203*/, /*->9089*/
/*  8886*/          OPC_CheckChild0Same, 0,
/*  8888*/          OPC_CheckChild1Same, 1,
/*  8890*/          OPC_MoveParent,
/*  8891*/          OPC_CheckType, MVT::i32,
/*  8893*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8895*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8898*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8901*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8904*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8907*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8910*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8913*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8916*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8919*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8922*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8925*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8928*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8940*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8943*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8946*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8949*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8961*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8964*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8967*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8970*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8973*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8999*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9002*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9005*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9017*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9020*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9023*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9035*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9038*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9041*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9053*/          OPC_EmitInteger, MVT::i32, 1, 
/*  9056*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9059*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9062*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9065*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  9089*/        0, /*End of Scope*/
/*  9090*/      /*Scope*/ 108|128,47/*6124*/, /*->15216*/
/*  9092*/        OPC_RecordChild0, // #0 = $x
/*  9093*/        OPC_Scope, 14|128,32/*4110*/, /*->13206*/ // 2 children in Scope
/*  9096*/          OPC_RecordChild1, // #1 = $z
/*  9097*/          OPC_MoveParent,
/*  9098*/          OPC_MoveChild1,
/*  9099*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  9102*/          OPC_Scope, 127|128,7/*1023*/, /*->10128*/ // 4 children in Scope
/*  9105*/            OPC_RecordChild0, // #2 = $y
/*  9106*/            OPC_MoveChild1,
/*  9107*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  9110*/            OPC_Scope, 122|128,3/*506*/, /*->9619*/ // 2 children in Scope
/*  9113*/              OPC_CheckChild0Same, 0,
/*  9115*/              OPC_CheckChild1Same, 1,
/*  9117*/              OPC_MoveParent,
/*  9118*/              OPC_MoveParent,
/*  9119*/              OPC_CheckType, MVT::i64,
/*  9121*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9123*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9126*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9129*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9138*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9141*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9144*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9147*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9150*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9153*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9161*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9164*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9167*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9170*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9182*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9185*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9193*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9196*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9199*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9202*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9214*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9217*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9220*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9223*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9226*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9252*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9258*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9270*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9273*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9281*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9284*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9287*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9299*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9302*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9310*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9313*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9316*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9328*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9331*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9334*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9337*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9340*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9364*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9373*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9376*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9379*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9382*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9391*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9394*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9411*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9423*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9426*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9434*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9437*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9440*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9443*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9455*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9458*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9461*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9464*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9467*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/*  9493*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9496*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9499*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9511*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9514*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/*  9522*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9525*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9528*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9540*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9543*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/*  9551*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9557*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9569*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9572*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9575*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9578*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9581*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/*  9605*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9608*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  9619*/            /*Scope*/ 122|128,3/*506*/, /*->10127*/
/*  9621*/              OPC_CheckChild0Same, 1,
/*  9623*/              OPC_CheckChild1Same, 0,
/*  9625*/              OPC_MoveParent,
/*  9626*/              OPC_MoveParent,
/*  9627*/              OPC_CheckType, MVT::i64,
/*  9629*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9631*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9634*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9637*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9640*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9643*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9646*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9649*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9652*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9655*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9658*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9661*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9675*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9678*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9690*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9693*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9701*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9704*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9707*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9710*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9722*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9725*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9728*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9731*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9734*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9760*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9763*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9766*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9778*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9781*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9807*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9810*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9818*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9821*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9824*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9836*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9839*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9848*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9872*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9875*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9878*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9887*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9890*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9893*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9896*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9899*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9902*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9910*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9913*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9916*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9919*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9931*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9934*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9942*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9945*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9948*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9951*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9963*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9966*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9969*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9972*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9975*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10019*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10022*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10033*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10036*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10048*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10051*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10062*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10077*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10086*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10089*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10113*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10116*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10127*/            0, /*End of Scope*/
/* 10128*/          /*Scope*/ 0|128,8/*1024*/, /*->11154*/
/* 10130*/            OPC_MoveChild0,
/* 10131*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 10134*/            OPC_Scope, 123|128,3/*507*/, /*->10644*/ // 2 children in Scope
/* 10137*/              OPC_CheckChild0Same, 0,
/* 10139*/              OPC_CheckChild1Same, 1,
/* 10141*/              OPC_MoveParent,
/* 10142*/              OPC_RecordChild1, // #2 = $y
/* 10143*/              OPC_MoveParent,
/* 10144*/              OPC_CheckType, MVT::i64,
/* 10146*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10148*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10151*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10154*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10157*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10163*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10166*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10169*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10172*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10175*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10178*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10189*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10195*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10207*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10210*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10221*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10224*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10227*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10239*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10242*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10245*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10251*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10277*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10283*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10295*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10298*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10309*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10312*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10324*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10327*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10338*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10341*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10353*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10356*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10359*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10362*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10365*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10389*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10392*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10395*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10398*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10401*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10407*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10416*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10419*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10430*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10436*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10448*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10451*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10462*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10465*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10480*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10483*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10486*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10492*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10518*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10524*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10536*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10539*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10550*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10553*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10565*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10568*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10579*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10582*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10594*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10597*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10600*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10603*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10606*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10630*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10633*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10644*/            /*Scope*/ 123|128,3/*507*/, /*->11153*/
/* 10646*/              OPC_CheckChild0Same, 1,
/* 10648*/              OPC_CheckChild1Same, 0,
/* 10650*/              OPC_MoveParent,
/* 10651*/              OPC_RecordChild1, // #2 = $y
/* 10652*/              OPC_MoveParent,
/* 10653*/              OPC_CheckType, MVT::i64,
/* 10655*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10657*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10660*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10663*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10666*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10669*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10672*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10675*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10678*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10681*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10684*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10687*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10695*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10698*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10701*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10704*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10716*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10719*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10727*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10730*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10733*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10736*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10748*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10751*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10754*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10757*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10760*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10789*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10792*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10804*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10807*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10833*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10836*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10844*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10847*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10850*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10862*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10865*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10868*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10874*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10898*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10901*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10904*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10907*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10910*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10916*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10925*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10928*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10936*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10939*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10942*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10945*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10957*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10960*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10968*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10971*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10974*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10977*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10989*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10992*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10998*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11001*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11045*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11048*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 11056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11074*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11077*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11085*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11088*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11091*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11103*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11106*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11109*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11115*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11139*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11142*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11153*/            0, /*End of Scope*/
/* 11154*/          /*Scope*/ 127|128,7/*1023*/, /*->12179*/
/* 11156*/            OPC_RecordChild0, // #2 = $y
/* 11157*/            OPC_MoveChild1,
/* 11158*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 11161*/            OPC_Scope, 122|128,3/*506*/, /*->11670*/ // 2 children in Scope
/* 11164*/              OPC_CheckChild0Same, 1,
/* 11166*/              OPC_CheckChild1Same, 0,
/* 11168*/              OPC_MoveParent,
/* 11169*/              OPC_MoveParent,
/* 11170*/              OPC_CheckType, MVT::i64,
/* 11172*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11174*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11177*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11180*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11183*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11189*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11195*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11198*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11201*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11204*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11212*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11215*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11233*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11236*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11244*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11247*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11250*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11265*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11268*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11271*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11274*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11277*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11303*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11309*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11321*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11324*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11332*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11338*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11350*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11353*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11361*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11364*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11367*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11379*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11382*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11385*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11388*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11391*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11415*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11418*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11430*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11436*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11439*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11442*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11445*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11453*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11456*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11462*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11474*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11477*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11485*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11488*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11491*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11494*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11506*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11509*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11512*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11515*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11518*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11544*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11550*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11562*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11565*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 11573*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11579*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11591*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11594*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11602*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11605*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11608*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11620*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11623*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11626*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11629*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11632*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11656*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11659*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11670*/            /*Scope*/ 122|128,3/*506*/, /*->12178*/
/* 11672*/              OPC_CheckChild0Same, 0,
/* 11674*/              OPC_CheckChild1Same, 1,
/* 11676*/              OPC_MoveParent,
/* 11677*/              OPC_MoveParent,
/* 11678*/              OPC_CheckType, MVT::i64,
/* 11680*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11682*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11685*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11688*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11691*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11694*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11697*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11700*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11703*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11706*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11709*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11712*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11723*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11729*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11741*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11744*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11755*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11758*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11761*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11773*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11776*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11779*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11782*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11785*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11811*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11814*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11817*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11829*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11832*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11843*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11846*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11858*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11861*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11872*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11875*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11887*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11890*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11893*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11896*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11899*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11923*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11926*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11935*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11938*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11941*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11944*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11947*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11950*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11953*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11964*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11970*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11982*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11985*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11996*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11999*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12002*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12014*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12017*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12020*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12023*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12026*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12052*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12055*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12058*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12070*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12073*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12084*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12087*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12099*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12102*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12113*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12116*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12128*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12131*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12134*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12137*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12140*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12164*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12167*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12178*/            0, /*End of Scope*/
/* 12179*/          /*Scope*/ 0|128,8/*1024*/, /*->13205*/
/* 12181*/            OPC_MoveChild0,
/* 12182*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 12185*/            OPC_Scope, 123|128,3/*507*/, /*->12695*/ // 2 children in Scope
/* 12188*/              OPC_CheckChild0Same, 1,
/* 12190*/              OPC_CheckChild1Same, 0,
/* 12192*/              OPC_MoveParent,
/* 12193*/              OPC_RecordChild1, // #2 = $y
/* 12194*/              OPC_MoveParent,
/* 12195*/              OPC_CheckType, MVT::i64,
/* 12197*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12199*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12202*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12205*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12208*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12211*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12214*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12217*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12220*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12223*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12226*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12229*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12237*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12240*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12243*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12258*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12261*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12269*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12272*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12275*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12278*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12290*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12293*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12296*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12299*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12302*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12328*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12331*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12334*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12346*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12349*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12357*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12360*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12363*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12375*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12378*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12386*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12389*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12392*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12407*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12416*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12440*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12443*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12446*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12449*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12452*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12455*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12458*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12461*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12464*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12467*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12470*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12478*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12481*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12484*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12487*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12499*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12502*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 12510*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12513*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12516*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12519*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12531*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12534*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12537*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12540*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12543*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12569*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12572*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12575*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12587*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12590*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12598*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12601*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12604*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12616*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12619*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12627*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12630*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12633*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12645*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12648*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12651*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12654*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12657*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12681*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12684*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12695*/            /*Scope*/ 123|128,3/*507*/, /*->13204*/
/* 12697*/              OPC_CheckChild0Same, 0,
/* 12699*/              OPC_CheckChild1Same, 1,
/* 12701*/              OPC_MoveParent,
/* 12702*/              OPC_RecordChild1, // #2 = $y
/* 12703*/              OPC_MoveParent,
/* 12704*/              OPC_CheckType, MVT::i64,
/* 12706*/              OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12708*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12711*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12714*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12717*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12723*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12729*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12732*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12735*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12738*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12746*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12749*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12755*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12767*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12770*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12778*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12781*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12784*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12787*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12799*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12802*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12805*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12808*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12811*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12837*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12843*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12855*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12858*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12866*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12884*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12887*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12895*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12898*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12901*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12916*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12925*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12949*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12952*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12955*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12958*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12964*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12970*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12973*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12976*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12979*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12987*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12990*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12996*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13008*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13011*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 13019*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13022*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13025*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13028*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13040*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13043*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13046*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13049*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13052*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13078*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13084*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13096*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13099*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 13107*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13113*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13125*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13128*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 13136*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13139*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13142*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13154*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13157*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13163*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13166*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13190*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13193*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13204*/            0, /*End of Scope*/
/* 13205*/          0, /*End of Scope*/
/* 13206*/        /*Scope*/ 87|128,15/*2007*/, /*->15215*/
/* 13208*/          OPC_MoveChild1,
/* 13209*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 13212*/          OPC_RecordChild0, // #1 = $x
/* 13213*/          OPC_RecordChild1, // #2 = $z
/* 13214*/          OPC_MoveParent,
/* 13215*/          OPC_MoveParent,
/* 13216*/          OPC_MoveChild1,
/* 13217*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 13220*/          OPC_Scope, 121|128,3/*505*/, /*->13728*/ // 3 children in Scope
/* 13223*/            OPC_CheckChild0Same, 1,
/* 13225*/            OPC_CheckChild1Same, 2,
/* 13227*/            OPC_MoveParent,
/* 13228*/            OPC_CheckType, MVT::i64,
/* 13230*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13232*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13235*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13244*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13247*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13250*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13253*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13256*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13259*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13262*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13270*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13273*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13276*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13279*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13291*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13294*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13302*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13305*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13308*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13311*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13323*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13326*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13329*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13332*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13335*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13361*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13364*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13367*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13379*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13382*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13390*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13393*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13396*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13408*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13411*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13419*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13422*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13425*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13437*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13440*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13443*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13446*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13449*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13473*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13476*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13479*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13482*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13485*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13488*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13491*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13494*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13497*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13500*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13503*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 13511*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13514*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13517*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13520*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13532*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13535*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 13543*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13546*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13549*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13552*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13564*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13567*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13570*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13573*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13576*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13608*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13620*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13623*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 13631*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13634*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13637*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13649*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13652*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 13660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13678*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13690*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13714*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13717*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13728*/          /*Scope*/ 81|128,7/*977*/, /*->14707*/
/* 13730*/            OPC_CheckChild0Same, 2,
/* 13732*/            OPC_CheckChild1Same, 1,
/* 13734*/            OPC_MoveParent,
/* 13735*/            OPC_CheckType, MVT::i64,
/* 13737*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13739*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13766*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13769*/            OPC_Scope, 82|128,3/*466*/, /*->14238*/ // 2 children in Scope
/* 13772*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13780*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13783*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13789*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13801*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13804*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13812*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13833*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13836*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13839*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13842*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13845*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13874*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13877*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13889*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13892*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13900*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13903*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13918*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13921*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13935*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13947*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13950*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13953*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13956*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13959*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13983*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13986*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13989*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13992*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13998*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14007*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14010*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14013*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 14021*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14024*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14030*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14042*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14045*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14053*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14074*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14077*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14080*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14086*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14115*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14118*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14130*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14133*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 14141*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14144*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14147*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14159*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14162*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14170*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14173*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14188*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14191*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14194*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14197*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14200*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14224*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14227*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14238*/            /*Scope*/ 82|128,3/*466*/, /*->14706*/
/* 14240*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14251*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14254*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14257*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14269*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14272*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14283*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14286*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14289*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14301*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14304*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14307*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14310*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14313*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14339*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14342*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14345*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14357*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14360*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14368*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14371*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14374*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14386*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14389*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14397*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14400*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14403*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14415*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14418*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14427*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14451*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14454*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14457*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14460*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14463*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14466*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14469*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14472*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14475*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14478*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14481*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14492*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14495*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14498*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14510*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14513*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14524*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14527*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14530*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14542*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14545*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14548*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14551*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14554*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14580*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14583*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14586*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14598*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14601*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 14609*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14612*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14615*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14627*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14630*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14638*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14641*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14644*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14656*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14659*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14662*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14665*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14668*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14692*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14695*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14706*/            0, /*End of Scope*/
/* 14707*/          /*Scope*/ 121|128,3/*505*/, /*->15214*/
/* 14709*/            OPC_CheckChild0Same, 1,
/* 14711*/            OPC_CheckChild1Same, 2,
/* 14713*/            OPC_MoveParent,
/* 14714*/            OPC_CheckType, MVT::i64,
/* 14716*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 14718*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 14721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14727*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14733*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14745*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14748*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14756*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14759*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14762*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14765*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14777*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14780*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14788*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14797*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14809*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14812*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14815*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14818*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14821*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14847*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14853*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14865*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14868*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14876*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14882*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14894*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14897*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14905*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14908*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14911*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14923*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14926*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14929*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14932*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14935*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14959*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14962*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14965*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14968*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14971*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14974*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14977*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14980*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14983*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14986*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14989*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15006*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15018*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15021*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 15029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15038*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15050*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15053*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15056*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15059*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15062*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15088*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15094*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15106*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15117*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15120*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15135*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 15146*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15149*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15164*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15167*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15170*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15173*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15176*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15200*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15203*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15214*/          0, /*End of Scope*/
/* 15215*/        0, /*End of Scope*/
/* 15216*/      /*Scope*/ 88|128,15/*2008*/, /*->17226*/
/* 15218*/        OPC_MoveChild0,
/* 15219*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 15222*/        OPC_RecordChild0, // #0 = $x
/* 15223*/        OPC_RecordChild1, // #1 = $z
/* 15224*/        OPC_MoveParent,
/* 15225*/        OPC_RecordChild1, // #2 = $y
/* 15226*/        OPC_MoveParent,
/* 15227*/        OPC_MoveChild1,
/* 15228*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 15231*/        OPC_Scope, 121|128,3/*505*/, /*->15739*/ // 3 children in Scope
/* 15234*/          OPC_CheckChild0Same, 0,
/* 15236*/          OPC_CheckChild1Same, 1,
/* 15238*/          OPC_MoveParent,
/* 15239*/          OPC_CheckType, MVT::i64,
/* 15241*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15243*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15246*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15249*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15258*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15261*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15270*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15273*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15281*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15284*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15287*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15290*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15302*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15305*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15316*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15322*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15334*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15337*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15340*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15343*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15346*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15378*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15390*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15393*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15419*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15422*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15436*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15448*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15451*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15460*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15484*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15487*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15490*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15493*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15499*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15508*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15511*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15514*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 15522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15525*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15528*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15531*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15543*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15546*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 15554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15563*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15575*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15578*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15587*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15613*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15616*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15619*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15631*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15634*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15648*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15660*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15663*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 15671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15677*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15689*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15692*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15695*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15698*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15701*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15725*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15728*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15739*/        /*Scope*/ 81|128,7/*977*/, /*->16718*/
/* 15741*/          OPC_CheckChild0Same, 1,
/* 15743*/          OPC_CheckChild1Same, 0,
/* 15745*/          OPC_MoveParent,
/* 15746*/          OPC_CheckType, MVT::i64,
/* 15748*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15750*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15762*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15765*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15777*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15780*/          OPC_Scope, 82|128,3/*466*/, /*->16249*/ // 2 children in Scope
/* 15783*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15797*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15800*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15812*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15815*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15823*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15826*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15832*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15844*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15847*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15856*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15885*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15888*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15900*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15903*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15911*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15914*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15917*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15929*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15932*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15940*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15943*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15946*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15958*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15961*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15964*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15967*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15970*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15994*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16009*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16012*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16015*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16018*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16021*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16024*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 16032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16038*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16041*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16053*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16056*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16064*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16067*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16070*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16073*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16085*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16088*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16097*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16123*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16126*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16129*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16141*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16144*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 16152*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16155*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16158*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16170*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16173*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16187*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16199*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16202*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16205*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16208*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16211*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16235*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16238*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16249*/          /*Scope*/ 82|128,3/*466*/, /*->16717*/
/* 16251*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16259*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16262*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16265*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16268*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16280*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16283*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16291*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16294*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16300*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16312*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16315*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16324*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16350*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16353*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16356*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16368*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16371*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16379*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16382*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16385*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16397*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16400*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16408*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16411*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16414*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16426*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16429*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16432*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16435*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16438*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16462*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16465*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16468*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16471*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16474*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16477*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16480*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16483*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16486*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16489*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16492*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 16500*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16503*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16506*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16509*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16521*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16524*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16532*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16535*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16538*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16553*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16556*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16559*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16562*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16565*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16591*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16594*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16597*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16609*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16612*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 16620*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16623*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16626*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16638*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16641*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16649*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16652*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16655*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16667*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16670*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16673*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16676*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16679*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16703*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16706*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16717*/          0, /*End of Scope*/
/* 16718*/        /*Scope*/ 121|128,3/*505*/, /*->17225*/
/* 16720*/          OPC_CheckChild0Same, 0,
/* 16722*/          OPC_CheckChild1Same, 1,
/* 16724*/          OPC_MoveParent,
/* 16725*/          OPC_CheckType, MVT::i64,
/* 16727*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 16729*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 16732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16738*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16741*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16744*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16756*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16759*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16767*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16770*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16773*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16776*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16788*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16791*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16799*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16802*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16805*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16808*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16820*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16823*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16832*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16861*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16864*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16876*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16879*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16890*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16893*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16905*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16908*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16916*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16919*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16922*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16934*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16937*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16946*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16970*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16985*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16997*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17000*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 17008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17011*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17017*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17029*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17032*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 17040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17049*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17061*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17064*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17073*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 17099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17105*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17117*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17120*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 17128*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17131*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17134*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17146*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17149*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 17157*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17163*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17175*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17178*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17181*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17187*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 17211*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17214*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 17225*/        0, /*End of Scope*/
/* 17226*/      0, /*End of Scope*/
/* 17227*/    /*Scope*/ 104, /*->17332*/
/* 17228*/      OPC_RecordChild0, // #0 = $src0
/* 17229*/      OPC_RecordChild1, // #1 = $src1
/* 17230*/      OPC_CheckType, MVT::i32,
/* 17232*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17240*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17255*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17261*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17297*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17306*/      OPC_MorphNodeTo1, TARGET_VAL(R600::OR_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (or:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (OR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 17332*/    0, /*End of Scope*/
/* 17333*/  /*SwitchOpcode*/ 25, TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->17361
/* 17336*/    OPC_RecordNode, // #0 = 'AMDGPUregister_load' chained node
/* 17337*/    OPC_RecordChild1, // #1 = $addr
/* 17338*/    OPC_RecordChild2, // #2 = $chan
/* 17339*/    OPC_MoveChild2,
/* 17340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17343*/    OPC_CheckType, MVT::i32,
/* 17345*/    OPC_MoveParent,
/* 17346*/    OPC_CheckType, MVT::i32,
/* 17348*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/* 17351*/    OPC_EmitMergeInputChains1_0,
/* 17352*/    OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain,
                  MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (AMDGPUregister_load:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterLoad:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17361*/  /*SwitchOpcode*/ 26, TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->17390
/* 17364*/    OPC_RecordNode, // #0 = 'AMDGPUregister_store' chained node
/* 17365*/    OPC_RecordChild1, // #1 = $val
/* 17366*/    OPC_CheckChild1Type, MVT::i32,
/* 17368*/    OPC_RecordChild2, // #2 = $addr
/* 17369*/    OPC_RecordChild3, // #3 = $chan
/* 17370*/    OPC_MoveChild3,
/* 17371*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17374*/    OPC_CheckType, MVT::i32,
/* 17376*/    OPC_MoveParent,
/* 17377*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/* 17380*/    OPC_EmitMergeInputChains1_0,
/* 17381*/    OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain,
                  4/*#Ops*/, 1, 4, 5, 3, 
              // Src: (AMDGPUregister_store i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17390*/  /*SwitchOpcode*/ 24|128,23/*2968*/, TARGET_VAL(ISD::SELECT_CC),// ->20362
/* 17394*/    OPC_RecordChild0, // #0 = $src0
/* 17395*/    OPC_Scope, 5|128,12/*1541*/, /*->18939*/ // 2 children in Scope
/* 17398*/      OPC_CheckChild0Type, MVT::f32,
/* 17400*/      OPC_Scope, 126|128,6/*894*/, /*->18297*/ // 2 children in Scope
/* 17403*/        OPC_RecordChild1, // #1 = $src1
/* 17404*/        OPC_Scope, 59|128,3/*443*/, /*->17850*/ // 2 children in Scope
/* 17407*/          OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17418*/          OPC_CheckChild3Integer, 0, 
/* 17420*/          OPC_MoveChild4,
/* 17421*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 17424*/          OPC_Scope, 105, /*->17531*/ // 4 children in Scope
/* 17426*/            OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 17428*/            OPC_MoveParent,
/* 17429*/            OPC_CheckType, MVT::i32,
/* 17431*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17433*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17436*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17439*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17451*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17454*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17457*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17460*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17475*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17478*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17481*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17493*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17496*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17499*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17502*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17505*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17531*/          /*Scope*/ 105, /*->17637*/
/* 17532*/            OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 17534*/            OPC_MoveParent,
/* 17535*/            OPC_CheckType, MVT::i32,
/* 17537*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17539*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17542*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17545*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17557*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17560*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17563*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17566*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17581*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17584*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17587*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17599*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17602*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17608*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17611*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17637*/          /*Scope*/ 105, /*->17743*/
/* 17638*/            OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 17640*/            OPC_MoveParent,
/* 17641*/            OPC_CheckType, MVT::i32,
/* 17643*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17648*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17651*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17669*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17672*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17690*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17693*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17705*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17708*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17711*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17714*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17717*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17743*/          /*Scope*/ 105, /*->17849*/
/* 17744*/            OPC_CheckPredicate, 5, // Predicate_COND_UNE_NE
/* 17746*/            OPC_MoveParent,
/* 17747*/            OPC_CheckType, MVT::i32,
/* 17749*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17754*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17757*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17769*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17772*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17775*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17778*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17793*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17796*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17811*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17817*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17820*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17823*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_UNE_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17849*/          0, /*End of Scope*/
/* 17850*/        /*Scope*/ 60|128,3/*444*/, /*->18296*/
/* 17852*/          OPC_MoveChild2,
/* 17853*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 17856*/          OPC_CheckPredicate, 6, // Predicate_FP_ONE
/* 17858*/          OPC_MoveParent,
/* 17859*/          OPC_MoveChild3,
/* 17860*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 17863*/          OPC_CheckPredicate, 7, // Predicate_FP_ZERO
/* 17865*/          OPC_MoveParent,
/* 17866*/          OPC_MoveChild4,
/* 17867*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 17870*/          OPC_Scope, 105, /*->17977*/ // 4 children in Scope
/* 17872*/            OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 17874*/            OPC_MoveParent,
/* 17875*/            OPC_CheckType, MVT::f32,
/* 17877*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17885*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17888*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17891*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17894*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17897*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17900*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17903*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17906*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17918*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17921*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17924*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17939*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17945*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17948*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17977*/          /*Scope*/ 105, /*->18083*/
/* 17978*/            OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 17980*/            OPC_MoveParent,
/* 17981*/            OPC_CheckType, MVT::f32,
/* 17983*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17985*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17988*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17991*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17994*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18009*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18012*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18024*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18027*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18030*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18033*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18045*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18048*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18051*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18054*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18057*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18083*/          /*Scope*/ 105, /*->18189*/
/* 18084*/            OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18086*/            OPC_MoveParent,
/* 18087*/            OPC_CheckType, MVT::f32,
/* 18089*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18097*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18100*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18103*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18106*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18109*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18112*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18115*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18118*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18130*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18133*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18136*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18139*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18151*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18154*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18157*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18160*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18163*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18189*/          /*Scope*/ 105, /*->18295*/
/* 18190*/            OPC_CheckPredicate, 5, // Predicate_COND_UNE_NE
/* 18192*/            OPC_MoveParent,
/* 18193*/            OPC_CheckType, MVT::f32,
/* 18195*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18197*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18200*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18203*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18206*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18209*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18212*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18215*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18218*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18221*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18224*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18236*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18239*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18242*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18245*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18257*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18260*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18263*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18266*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18269*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_UNE_NE>>) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18295*/          0, /*End of Scope*/
/* 18296*/        0, /*End of Scope*/
/* 18297*/      /*Scope*/ 127|128,4/*639*/, /*->18938*/
/* 18299*/        OPC_MoveChild1,
/* 18300*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18303*/        OPC_CheckPredicate, 7, // Predicate_FP_ZERO
/* 18305*/        OPC_MoveParent,
/* 18306*/        OPC_RecordChild2, // #1 = $src1
/* 18307*/        OPC_RecordChild3, // #2 = $src2
/* 18308*/        OPC_MoveChild4,
/* 18309*/        OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 18312*/        OPC_Scope, 103, /*->18417*/ // 6 children in Scope
/* 18314*/          OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 18316*/          OPC_MoveParent,
/* 18317*/          OPC_CheckType, MVT::f32,
/* 18319*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18321*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18324*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18333*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18345*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18348*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18351*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18363*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18366*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18369*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18381*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18384*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18387*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18390*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18393*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18417*/        /*Scope*/ 103, /*->18521*/
/* 18418*/          OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 18420*/          OPC_MoveParent,
/* 18421*/          OPC_CheckType, MVT::f32,
/* 18423*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18425*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18428*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18431*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18434*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18437*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18449*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18452*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18455*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18467*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18470*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18473*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18485*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18488*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18491*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18497*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18521*/        /*Scope*/ 103, /*->18625*/
/* 18522*/          OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18524*/          OPC_MoveParent,
/* 18525*/          OPC_CheckType, MVT::f32,
/* 18527*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18529*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18532*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18535*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18538*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18541*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18553*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18556*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18559*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18571*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18574*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18577*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18589*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18592*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18595*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18598*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18601*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18625*/        /*Scope*/ 103, /*->18729*/
/* 18626*/          OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 18628*/          OPC_MoveParent,
/* 18629*/          OPC_CheckType, MVT::f32,
/* 18631*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18633*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18636*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18639*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18645*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18663*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18675*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18678*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18681*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18693*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18696*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18699*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18702*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18705*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18729*/        /*Scope*/ 103, /*->18833*/
/* 18730*/          OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 18732*/          OPC_MoveParent,
/* 18733*/          OPC_CheckType, MVT::f32,
/* 18735*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18737*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18740*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18743*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18746*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18749*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18761*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18764*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18767*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18779*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18782*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18785*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18797*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18800*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18803*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18806*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18809*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18833*/        /*Scope*/ 103, /*->18937*/
/* 18834*/          OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18836*/          OPC_MoveParent,
/* 18837*/          OPC_CheckType, MVT::f32,
/* 18839*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18841*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18844*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18847*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18853*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18865*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18868*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18871*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18883*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18886*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18889*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18901*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18904*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18907*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18910*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18913*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18937*/        0, /*End of Scope*/
/* 18938*/      0, /*End of Scope*/
/* 18939*/    /*Scope*/ 12|128,11/*1420*/, /*->20361*/
/* 18941*/      OPC_CheckChild0Type, MVT::i32,
/* 18943*/      OPC_Scope, 13|128,5/*653*/, /*->19599*/ // 3 children in Scope
/* 18946*/        OPC_RecordChild1, // #1 = $src1
/* 18947*/        OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18958*/        OPC_CheckChild3Integer, 0, 
/* 18960*/        OPC_MoveChild4,
/* 18961*/        OPC_Scope, 105, /*->19068*/ // 6 children in Scope
/* 18963*/          OPC_CheckCondCode, ISD::SETEQ,
/* 18965*/          OPC_MoveParent,
/* 18966*/          OPC_CheckType, MVT::i32,
/* 18968*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18970*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18976*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18985*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18997*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19009*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19012*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19015*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19018*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19030*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19033*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19036*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19039*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19042*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19068*/        /*Scope*/ 105, /*->19174*/
/* 19069*/          OPC_CheckCondCode, ISD::SETGT,
/* 19071*/          OPC_MoveParent,
/* 19072*/          OPC_CheckType, MVT::i32,
/* 19074*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19076*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19079*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19082*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19085*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19088*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19091*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19094*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19097*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19100*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19103*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19115*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19118*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19121*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19124*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19136*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19139*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19148*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19174*/        /*Scope*/ 105, /*->19280*/
/* 19175*/          OPC_CheckCondCode, ISD::SETGE,
/* 19177*/          OPC_MoveParent,
/* 19178*/          OPC_CheckType, MVT::i32,
/* 19180*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19182*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19188*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19191*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19194*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19197*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19200*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19203*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19209*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19221*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19242*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19245*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19251*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19254*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19280*/        /*Scope*/ 105, /*->19386*/
/* 19281*/          OPC_CheckCondCode, ISD::SETNE,
/* 19283*/          OPC_MoveParent,
/* 19284*/          OPC_CheckType, MVT::i32,
/* 19286*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19288*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19291*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19294*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19297*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19300*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19303*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19306*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19309*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19312*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19315*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19333*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19336*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19348*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19351*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19354*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19357*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19360*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETNE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19386*/        /*Scope*/ 105, /*->19492*/
/* 19387*/          OPC_CheckCondCode, ISD::SETUGT,
/* 19389*/          OPC_MoveParent,
/* 19390*/          OPC_CheckType, MVT::i32,
/* 19392*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19394*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19397*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19400*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19403*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19406*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19409*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19412*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19415*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19418*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19421*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19436*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19439*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19442*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19454*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19457*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19460*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19463*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19466*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19492*/        /*Scope*/ 105, /*->19598*/
/* 19493*/          OPC_CheckCondCode, ISD::SETUGE,
/* 19495*/          OPC_MoveParent,
/* 19496*/          OPC_CheckType, MVT::i32,
/* 19498*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19506*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19509*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19512*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19515*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19518*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19521*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19524*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19527*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19545*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19548*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19560*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19563*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19566*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19569*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19572*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19598*/        0, /*End of Scope*/
/* 19599*/      /*Scope*/ 126|128,4/*638*/, /*->20239*/
/* 19601*/        OPC_CheckChild1Integer, 0, 
/* 19603*/        OPC_RecordChild2, // #1 = $src1
/* 19604*/        OPC_RecordChild3, // #2 = $src2
/* 19605*/        OPC_MoveChild4,
/* 19606*/        OPC_Scope, 61|128,2/*317*/, /*->19926*/ // 4 children in Scope
/* 19609*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 19612*/          OPC_Scope, 103, /*->19717*/ // 3 children in Scope
/* 19614*/            OPC_CheckPredicate, 8, // Predicate_COND_EQ
/* 19616*/            OPC_MoveParent,
/* 19617*/            OPC_CheckType, MVT::i32,
/* 19619*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19621*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19624*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19627*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19630*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19633*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19648*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19651*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19669*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19681*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19684*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19690*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19693*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19717*/          /*Scope*/ 103, /*->19821*/
/* 19718*/            OPC_CheckPredicate, 9, // Predicate_COND_SGE
/* 19720*/            OPC_MoveParent,
/* 19721*/            OPC_CheckType, MVT::i32,
/* 19723*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19725*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19728*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19731*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19734*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19737*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19749*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19752*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19755*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19767*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19770*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19773*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19785*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19788*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19797*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19821*/          /*Scope*/ 103, /*->19925*/
/* 19822*/            OPC_CheckPredicate, 10, // Predicate_COND_SGT
/* 19824*/            OPC_MoveParent,
/* 19825*/            OPC_CheckType, MVT::i32,
/* 19827*/            OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19832*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19835*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19838*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19841*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19856*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19859*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19871*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19874*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19889*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19895*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19898*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19901*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19925*/          0, /*End of Scope*/
/* 19926*/        /*Scope*/ 103, /*->20030*/
/* 19927*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19929*/          OPC_MoveParent,
/* 19930*/          OPC_CheckType, MVT::f32,
/* 19932*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19934*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19937*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19946*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19958*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19961*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19964*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19982*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19994*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19997*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20000*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20003*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20006*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20030*/        /*Scope*/ 103, /*->20134*/
/* 20031*/          OPC_CheckCondCode, ISD::SETGT,
/* 20033*/          OPC_MoveParent,
/* 20034*/          OPC_CheckType, MVT::f32,
/* 20036*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20038*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20041*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20044*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20047*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20050*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20062*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20065*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20068*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20080*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20083*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20086*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20098*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20101*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20104*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20107*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20110*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20134*/        /*Scope*/ 103, /*->20238*/
/* 20135*/          OPC_CheckCondCode, ISD::SETGE,
/* 20137*/          OPC_MoveParent,
/* 20138*/          OPC_CheckType, MVT::f32,
/* 20140*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20148*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20151*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20154*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20166*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20169*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20172*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20187*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20190*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20202*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20205*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20208*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20211*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20214*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20238*/        0, /*End of Scope*/
/* 20239*/      /*Scope*/ 120, /*->20360*/
/* 20240*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20251*/        OPC_RecordChild2, // #1 = $src1
/* 20252*/        OPC_RecordChild3, // #2 = $src2
/* 20253*/        OPC_MoveChild4,
/* 20254*/        OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 20257*/        OPC_CheckPredicate, 10, // Predicate_COND_SGT
/* 20259*/        OPC_MoveParent,
/* 20260*/        OPC_CheckType, MVT::i32,
/* 20262*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20264*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20267*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20270*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20273*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20276*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20288*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20291*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20294*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20306*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20309*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20312*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20324*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20327*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20330*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20333*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20336*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 20360*/      0, /*End of Scope*/
/* 20361*/    0, /*End of Scope*/
/* 20362*/  /*SwitchOpcode*/ 108|128,7/*1004*/, TARGET_VAL(ISD::LOAD),// ->21370
/* 20366*/    OPC_RecordMemRef,
/* 20367*/    OPC_RecordNode, // #0 = 'ld' chained node
/* 20368*/    OPC_RecordChild1, // #1 = $addr
/* 20369*/    OPC_CheckPredicate, 11, // Predicate_unindexedload
/* 20371*/    OPC_Scope, 24, /*->20397*/ // 4 children in Scope
/* 20373*/      OPC_CheckPredicate, 12, // Predicate_load
/* 20375*/      OPC_CheckPredicate, 13, // Predicate_load_private
/* 20377*/      OPC_CheckType, MVT::i32,
/* 20379*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20381*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #2 #3
/* 20384*/      OPC_EmitMergeInputChains1_0,
/* 20385*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20388*/      OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_private>> - Complexity = 13
                // Dst: (R600_RegisterLoad:{ *:[i32] } FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 20397*/    /*Scope*/ 66|128,3/*450*/, /*->20849*/
/* 20399*/      OPC_CheckChild1Type, MVT::i32,
/* 20401*/      OPC_CheckType, MVT::i32,
/* 20403*/      OPC_Scope, 50, /*->20455*/ // 12 children in Scope
/* 20405*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20407*/        OPC_Scope, 22, /*->20431*/ // 2 children in Scope
/* 20409*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20411*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_az_extloadi8
/* 20413*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20415*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20418*/          OPC_EmitMergeInputChains1_0,
/* 20419*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20422*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20431*/        /*Scope*/ 22, /*->20454*/
/* 20432*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20434*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_az_extloadi16
/* 20436*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20438*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20441*/          OPC_EmitMergeInputChains1_0,
/* 20442*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20445*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20454*/        0, /*End of Scope*/
/* 20455*/      /*Scope*/ 22, /*->20478*/
/* 20456*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20458*/        OPC_CheckPredicate, 16, // Predicate_vtx_id3_load
/* 20460*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20462*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20465*/        OPC_EmitMergeInputChains1_0,
/* 20466*/        OPC_EmitInteger, MVT::i8, 3, 
/* 20469*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20478*/      /*Scope*/ 50, /*->20529*/
/* 20479*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20481*/        OPC_Scope, 22, /*->20505*/ // 2 children in Scope
/* 20483*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20485*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi8
/* 20487*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20489*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20492*/          OPC_EmitMergeInputChains1_0,
/* 20493*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20496*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20505*/        /*Scope*/ 22, /*->20528*/
/* 20506*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20508*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi16
/* 20510*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20512*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20515*/          OPC_EmitMergeInputChains1_0,
/* 20516*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20519*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20528*/        0, /*End of Scope*/
/* 20529*/      /*Scope*/ 22, /*->20552*/
/* 20530*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20532*/        OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 20534*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20536*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20539*/        OPC_EmitMergeInputChains1_0,
/* 20540*/        OPC_EmitInteger, MVT::i8, 2, 
/* 20543*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20552*/      /*Scope*/ 50, /*->20603*/
/* 20553*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20555*/        OPC_Scope, 22, /*->20579*/ // 2 children in Scope
/* 20557*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20559*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi8
/* 20561*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20563*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20566*/          OPC_EmitMergeInputChains1_0,
/* 20567*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20570*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20579*/        /*Scope*/ 22, /*->20602*/
/* 20580*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20582*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi16
/* 20584*/          OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20586*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20589*/          OPC_EmitMergeInputChains1_0,
/* 20590*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20593*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20602*/        0, /*End of Scope*/
/* 20603*/      /*Scope*/ 22, /*->20626*/
/* 20604*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20606*/        OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 20608*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20610*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20613*/        OPC_EmitMergeInputChains1_0,
/* 20614*/        OPC_EmitInteger, MVT::i8, 1, 
/* 20617*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20626*/      /*Scope*/ 50, /*->20677*/
/* 20627*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20629*/        OPC_Scope, 22, /*->20653*/ // 2 children in Scope
/* 20631*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20633*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_az_extloadi8
/* 20635*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20637*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20640*/          OPC_EmitMergeInputChains1_0,
/* 20641*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20644*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20653*/        /*Scope*/ 22, /*->20676*/
/* 20654*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20656*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_az_extloadi16
/* 20658*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20660*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20663*/          OPC_EmitMergeInputChains1_0,
/* 20664*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20667*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20676*/        0, /*End of Scope*/
/* 20677*/      /*Scope*/ 22, /*->20700*/
/* 20678*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20680*/        OPC_CheckPredicate, 16, // Predicate_vtx_id3_load
/* 20682*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20684*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20687*/        OPC_EmitMergeInputChains1_0,
/* 20688*/        OPC_EmitInteger, MVT::i8, 3, 
/* 20691*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20700*/      /*Scope*/ 50, /*->20751*/
/* 20701*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20703*/        OPC_Scope, 22, /*->20727*/ // 2 children in Scope
/* 20705*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20707*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi8
/* 20709*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20711*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20714*/          OPC_EmitMergeInputChains1_0,
/* 20715*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20718*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20727*/        /*Scope*/ 22, /*->20750*/
/* 20728*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20730*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi16
/* 20732*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20734*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20737*/          OPC_EmitMergeInputChains1_0,
/* 20738*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20741*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20750*/        0, /*End of Scope*/
/* 20751*/      /*Scope*/ 22, /*->20774*/
/* 20752*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20754*/        OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 20756*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20758*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20761*/        OPC_EmitMergeInputChains1_0,
/* 20762*/        OPC_EmitInteger, MVT::i8, 2, 
/* 20765*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20774*/      /*Scope*/ 50, /*->20825*/
/* 20775*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20777*/        OPC_Scope, 22, /*->20801*/ // 2 children in Scope
/* 20779*/          OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20781*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi8
/* 20783*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20785*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20788*/          OPC_EmitMergeInputChains1_0,
/* 20789*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20792*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20801*/        /*Scope*/ 22, /*->20824*/
/* 20802*/          OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 20804*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi16
/* 20806*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20808*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20811*/          OPC_EmitMergeInputChains1_0,
/* 20812*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20815*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20824*/        0, /*End of Scope*/
/* 20825*/      /*Scope*/ 22, /*->20848*/
/* 20826*/        OPC_CheckPredicate, 12, // Predicate_load
/* 20828*/        OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 20830*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 20832*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20835*/        OPC_EmitMergeInputChains1_0,
/* 20836*/        OPC_EmitInteger, MVT::i8, 1, 
/* 20839*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20848*/      0, /*End of Scope*/
/* 20849*/    /*Scope*/ 45, /*->20895*/
/* 20850*/      OPC_CheckPredicate, 12, // Predicate_load
/* 20852*/      OPC_CheckPredicate, 20, // Predicate_load_local
/* 20854*/      OPC_CheckType, MVT::i32,
/* 20856*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20858*/      OPC_EmitMergeInputChains1_0,
/* 20859*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20862*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20874*/      OPC_EmitInteger, MVT::i32, 1, 
/* 20877*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20880*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20883*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 4
                // Dst: (LDS_READ_RET:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)
/* 20895*/    /*Scope*/ 88|128,3/*472*/, /*->21369*/
/* 20897*/      OPC_CheckChild1Type, MVT::i32,
/* 20899*/      OPC_Scope, 47, /*->20948*/ // 5 children in Scope
/* 20901*/        OPC_CheckPredicate, 21, // Predicate_sextload
/* 20903*/        OPC_CheckPredicate, 22, // Predicate_sextloadi8
/* 20905*/        OPC_CheckPredicate, 20, // Predicate_sextloadi8_local
/* 20907*/        OPC_CheckType, MVT::i32,
/* 20909*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20911*/        OPC_EmitMergeInputChains1_0,
/* 20912*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20915*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20927*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20930*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20933*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20936*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_BYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (LDS_BYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 20948*/      /*Scope*/ 47, /*->20996*/
/* 20949*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 20951*/        OPC_CheckPredicate, 15, // Predicate_az_extloadi8
/* 20953*/        OPC_CheckPredicate, 20, // Predicate_az_extloadi8_local
/* 20955*/        OPC_CheckType, MVT::i32,
/* 20957*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20959*/        OPC_EmitMergeInputChains1_0,
/* 20960*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20963*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20975*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20978*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20981*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20984*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_UBYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_local>> - Complexity = 4
                  // Dst: (LDS_UBYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 20996*/      /*Scope*/ 47, /*->21044*/
/* 20997*/        OPC_CheckPredicate, 21, // Predicate_sextload
/* 20999*/        OPC_CheckPredicate, 23, // Predicate_sextloadi16
/* 21001*/        OPC_CheckPredicate, 20, // Predicate_sextloadi16_local
/* 21003*/        OPC_CheckType, MVT::i32,
/* 21005*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21007*/        OPC_EmitMergeInputChains1_0,
/* 21008*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21011*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21023*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21026*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21029*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21032*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (LDS_SHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 21044*/      /*Scope*/ 47, /*->21092*/
/* 21045*/        OPC_CheckPredicate, 14, // Predicate_az_extload
/* 21047*/        OPC_CheckPredicate, 17, // Predicate_az_extloadi16
/* 21049*/        OPC_CheckPredicate, 20, // Predicate_az_extloadi16_local
/* 21051*/        OPC_CheckType, MVT::i32,
/* 21053*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21055*/        OPC_EmitMergeInputChains1_0,
/* 21056*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21059*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21071*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21074*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21077*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21080*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_USHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_local>> - Complexity = 4
                  // Dst: (LDS_USHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 21092*/      /*Scope*/ 18|128,2/*274*/, /*->21368*/
/* 21094*/        OPC_CheckPredicate, 12, // Predicate_load
/* 21096*/        OPC_Scope, 44, /*->21142*/ // 6 children in Scope
/* 21098*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_load
/* 21100*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21121
/* 21103*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21105*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21108*/            OPC_EmitMergeInputChains1_0,
/* 21109*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21112*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21121*/          /*SwitchType*/ 18, MVT::v4i32,// ->21141
/* 21123*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21125*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21128*/            OPC_EmitMergeInputChains1_0,
/* 21129*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21132*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21141*/          0, // EndSwitchType
/* 21142*/        /*Scope*/ 44, /*->21187*/
/* 21143*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 21145*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21166
/* 21148*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21150*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21153*/            OPC_EmitMergeInputChains1_0,
/* 21154*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21157*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21166*/          /*SwitchType*/ 18, MVT::v4i32,// ->21186
/* 21168*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21170*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21173*/            OPC_EmitMergeInputChains1_0,
/* 21174*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21177*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21186*/          0, // EndSwitchType
/* 21187*/        /*Scope*/ 44, /*->21232*/
/* 21188*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 21190*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21211
/* 21193*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21195*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21198*/            OPC_EmitMergeInputChains1_0,
/* 21199*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21202*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21211*/          /*SwitchType*/ 18, MVT::v4i32,// ->21231
/* 21213*/            OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21215*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21218*/            OPC_EmitMergeInputChains1_0,
/* 21219*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21222*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21231*/          0, // EndSwitchType
/* 21232*/        /*Scope*/ 44, /*->21277*/
/* 21233*/          OPC_CheckPredicate, 16, // Predicate_vtx_id3_load
/* 21235*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21256
/* 21238*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21240*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21243*/            OPC_EmitMergeInputChains1_0,
/* 21244*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21247*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21256*/          /*SwitchType*/ 18, MVT::v4i32,// ->21276
/* 21258*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21260*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21263*/            OPC_EmitMergeInputChains1_0,
/* 21264*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21267*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21276*/          0, // EndSwitchType
/* 21277*/        /*Scope*/ 44, /*->21322*/
/* 21278*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 21280*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21301
/* 21283*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21285*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21288*/            OPC_EmitMergeInputChains1_0,
/* 21289*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21292*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21301*/          /*SwitchType*/ 18, MVT::v4i32,// ->21321
/* 21303*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21305*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21308*/            OPC_EmitMergeInputChains1_0,
/* 21309*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21312*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21321*/          0, // EndSwitchType
/* 21322*/        /*Scope*/ 44, /*->21367*/
/* 21323*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 21325*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21346
/* 21328*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21330*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21333*/            OPC_EmitMergeInputChains1_0,
/* 21334*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21337*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21346*/          /*SwitchType*/ 18, MVT::v4i32,// ->21366
/* 21348*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21350*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21353*/            OPC_EmitMergeInputChains1_0,
/* 21354*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21357*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21366*/          0, // EndSwitchType
/* 21367*/        0, /*End of Scope*/
/* 21368*/      0, /*End of Scope*/
/* 21369*/    0, /*End of Scope*/
/* 21370*/  /*SwitchOpcode*/ 89|128,2/*345*/, TARGET_VAL(ISD::STORE),// ->21719
/* 21374*/    OPC_RecordMemRef,
/* 21375*/    OPC_RecordNode, // #0 = 'st' chained node
/* 21376*/    OPC_RecordChild1, // #1 = $val
/* 21377*/    OPC_Scope, 2|128,2/*258*/, /*->21638*/ // 3 children in Scope
/* 21380*/      OPC_CheckChild1Type, MVT::i32,
/* 21382*/      OPC_RecordChild2, // #2 = $addr
/* 21383*/      OPC_CheckPredicate, 24, // Predicate_unindexedstore
/* 21385*/      OPC_Scope, 84, /*->21471*/ // 2 children in Scope
/* 21387*/        OPC_CheckPredicate, 25, // Predicate_store
/* 21389*/        OPC_Scope, 20, /*->21411*/ // 2 children in Scope
/* 21391*/          OPC_CheckPredicate, 13, // Predicate_store_private
/* 21393*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21395*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #3 #4
/* 21398*/          OPC_EmitMergeInputChains1_0,
/* 21399*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21402*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain|OPFL_MemRefs,
                        4/*#Ops*/, 1, 3, 4, 5, 
                    // Src: (st i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_private>> - Complexity = 13
                    // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 21411*/        /*Scope*/ 58, /*->21470*/
/* 21412*/          OPC_CheckPredicate, 20, // Predicate_store_local
/* 21414*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21416*/          OPC_EmitMergeInputChains1_0,
/* 21417*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21420*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21432*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21435*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21447*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21450*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21453*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21456*/          OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                        9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                    // Src: (st R600_Reg32:{ *:[i32] }:$src1, R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 4
                    // Dst: (LDS_WRITE R600_Reg32:{ *:[iPTR] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 21470*/        0, /*End of Scope*/
/* 21471*/      /*Scope*/ 36|128,1/*164*/, /*->21637*/
/* 21473*/        OPC_CheckChild2Type, MVT::i32,
/* 21475*/        OPC_Scope, 126, /*->21603*/ // 2 children in Scope
/* 21477*/          OPC_CheckPredicate, 26, // Predicate_truncstore
/* 21479*/          OPC_Scope, 60, /*->21541*/ // 2 children in Scope
/* 21481*/            OPC_CheckPredicate, 27, // Predicate_truncstorei8
/* 21483*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8_local
/* 21485*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21487*/            OPC_EmitMergeInputChains1_0,
/* 21488*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21491*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21503*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21506*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21518*/            OPC_EmitInteger, MVT::i32, 1, 
/* 21521*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21524*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21527*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_BYTE_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (LDS_BYTE_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21541*/          /*Scope*/ 60, /*->21602*/
/* 21542*/            OPC_CheckPredicate, 28, // Predicate_truncstorei16
/* 21544*/            OPC_CheckPredicate, 20, // Predicate_truncstorei16_local
/* 21546*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21548*/            OPC_EmitMergeInputChains1_0,
/* 21549*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21552*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21564*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21567*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21579*/            OPC_EmitInteger, MVT::i32, 1, 
/* 21582*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21585*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21588*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_SHORT_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (LDS_SHORT_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21602*/          0, /*End of Scope*/
/* 21603*/        /*Scope*/ 32, /*->21636*/
/* 21604*/          OPC_CheckPredicate, 25, // Predicate_store
/* 21606*/          OPC_CheckPredicate, 29, // Predicate_store_global
/* 21608*/          OPC_Scope, 10, /*->21620*/ // 2 children in Scope
/* 21610*/            OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21612*/            OPC_EmitMergeInputChains1_0,
/* 21613*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD32), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32 i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21620*/          /*Scope*/ 14, /*->21635*/
/* 21621*/            OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21623*/            OPC_EmitMergeInputChains1_0,
/* 21624*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21627*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21635*/          0, /*End of Scope*/
/* 21636*/        0, /*End of Scope*/
/* 21637*/      0, /*End of Scope*/
/* 21638*/    /*Scope*/ 39, /*->21678*/
/* 21639*/      OPC_CheckChild1Type, MVT::v2i32,
/* 21641*/      OPC_RecordChild2, // #2 = $index_gpr
/* 21642*/      OPC_CheckChild2Type, MVT::i32,
/* 21644*/      OPC_CheckPredicate, 24, // Predicate_unindexedstore
/* 21646*/      OPC_CheckPredicate, 25, // Predicate_store
/* 21648*/      OPC_CheckPredicate, 29, // Predicate_store_global
/* 21650*/      OPC_Scope, 10, /*->21662*/ // 2 children in Scope
/* 21652*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21654*/        OPC_EmitMergeInputChains1_0,
/* 21655*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD64 v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21662*/      /*Scope*/ 14, /*->21677*/
/* 21663*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21665*/        OPC_EmitMergeInputChains1_0,
/* 21666*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21669*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21677*/      0, /*End of Scope*/
/* 21678*/    /*Scope*/ 39, /*->21718*/
/* 21679*/      OPC_CheckChild1Type, MVT::v4i32,
/* 21681*/      OPC_RecordChild2, // #2 = $index_gpr
/* 21682*/      OPC_CheckChild2Type, MVT::i32,
/* 21684*/      OPC_CheckPredicate, 24, // Predicate_unindexedstore
/* 21686*/      OPC_CheckPredicate, 25, // Predicate_store
/* 21688*/      OPC_CheckPredicate, 29, // Predicate_store_global
/* 21690*/      OPC_Scope, 10, /*->21702*/ // 2 children in Scope
/* 21692*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 21694*/        OPC_EmitMergeInputChains1_0,
/* 21695*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD128), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD128 v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21702*/      /*Scope*/ 14, /*->21717*/
/* 21703*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21705*/        OPC_EmitMergeInputChains1_0,
/* 21706*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21709*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21717*/      0, /*End of Scope*/
/* 21718*/    0, /*End of Scope*/
/* 21719*/  /*SwitchOpcode*/ 113|128,26/*3441*/, TARGET_VAL(ISD::XOR),// ->25164
/* 21723*/    OPC_Scope, 66|128,3/*450*/, /*->22176*/ // 5 children in Scope
/* 21726*/      OPC_RecordChild0, // #0 = $z
/* 21727*/      OPC_MoveChild1,
/* 21728*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 21731*/      OPC_Scope, 91|128,1/*219*/, /*->21953*/ // 2 children in Scope
/* 21734*/        OPC_RecordChild0, // #1 = $x
/* 21735*/        OPC_MoveChild1,
/* 21736*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 21739*/        OPC_Scope, 105, /*->21846*/ // 2 children in Scope
/* 21741*/          OPC_RecordChild0, // #2 = $y
/* 21742*/          OPC_CheckChild1Same, 0,
/* 21744*/          OPC_MoveParent,
/* 21745*/          OPC_MoveParent,
/* 21746*/          OPC_CheckType, MVT::i32,
/* 21748*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21762*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21777*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21780*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21792*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21795*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21798*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21810*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21813*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21816*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21819*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21822*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 21846*/        /*Scope*/ 105, /*->21952*/
/* 21847*/          OPC_CheckChild0Same, 0,
/* 21849*/          OPC_RecordChild1, // #2 = $y
/* 21850*/          OPC_MoveParent,
/* 21851*/          OPC_MoveParent,
/* 21852*/          OPC_CheckType, MVT::i32,
/* 21854*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21856*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21859*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21862*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21865*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21868*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21880*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21883*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21886*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21898*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21901*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21904*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21916*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21919*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21922*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21925*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21928*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 21952*/        0, /*End of Scope*/
/* 21953*/      /*Scope*/ 92|128,1/*220*/, /*->22175*/
/* 21955*/        OPC_MoveChild0,
/* 21956*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 21959*/        OPC_Scope, 106, /*->22067*/ // 2 children in Scope
/* 21961*/          OPC_RecordChild0, // #1 = $y
/* 21962*/          OPC_CheckChild1Same, 0,
/* 21964*/          OPC_MoveParent,
/* 21965*/          OPC_RecordChild1, // #2 = $x
/* 21966*/          OPC_MoveParent,
/* 21967*/          OPC_CheckType, MVT::i32,
/* 21969*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21971*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21974*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21977*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21980*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21983*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21995*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21998*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22001*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22013*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22016*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22019*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22031*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22034*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22037*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22043*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22067*/        /*Scope*/ 106, /*->22174*/
/* 22068*/          OPC_CheckChild0Same, 0,
/* 22070*/          OPC_RecordChild1, // #1 = $y
/* 22071*/          OPC_MoveParent,
/* 22072*/          OPC_RecordChild1, // #2 = $x
/* 22073*/          OPC_MoveParent,
/* 22074*/          OPC_CheckType, MVT::i32,
/* 22076*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22078*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22081*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22084*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22087*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22090*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22105*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22108*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22120*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22123*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22126*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22138*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22141*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22144*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22147*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22150*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22174*/        0, /*End of Scope*/
/* 22175*/      0, /*End of Scope*/
/* 22176*/    /*Scope*/ 56|128,3/*440*/, /*->22618*/
/* 22178*/      OPC_MoveChild0,
/* 22179*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 22182*/      OPC_Scope, 87|128,1/*215*/, /*->22400*/ // 2 children in Scope
/* 22185*/        OPC_RecordChild0, // #0 = $x
/* 22186*/        OPC_MoveChild1,
/* 22187*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22190*/        OPC_RecordChild0, // #1 = $y
/* 22191*/        OPC_RecordChild1, // #2 = $z
/* 22192*/        OPC_MoveParent,
/* 22193*/        OPC_MoveParent,
/* 22194*/        OPC_CheckType, MVT::i32,
/* 22196*/        OPC_Scope, 100, /*->22298*/ // 2 children in Scope
/* 22198*/          OPC_CheckChild1Same, 2,
/* 22200*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22202*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22205*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22208*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22211*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22214*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22226*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22229*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22232*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22244*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22247*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22250*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22262*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22265*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22268*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22271*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22274*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22298*/        /*Scope*/ 100, /*->22399*/
/* 22299*/          OPC_CheckChild1Same, 1,
/* 22301*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22303*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22306*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22309*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22312*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22315*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22333*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22345*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22348*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22351*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22363*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22366*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22369*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22375*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22399*/        0, /*End of Scope*/
/* 22400*/      /*Scope*/ 87|128,1/*215*/, /*->22617*/
/* 22402*/        OPC_MoveChild0,
/* 22403*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22406*/        OPC_RecordChild0, // #0 = $y
/* 22407*/        OPC_RecordChild1, // #1 = $z
/* 22408*/        OPC_MoveParent,
/* 22409*/        OPC_RecordChild1, // #2 = $x
/* 22410*/        OPC_MoveParent,
/* 22411*/        OPC_CheckType, MVT::i32,
/* 22413*/        OPC_Scope, 100, /*->22515*/ // 2 children in Scope
/* 22415*/          OPC_CheckChild1Same, 1,
/* 22417*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22419*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22422*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22425*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22428*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22431*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22443*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22446*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22449*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22461*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22464*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22467*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22479*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22482*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22485*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22488*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22491*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22515*/        /*Scope*/ 100, /*->22616*/
/* 22516*/          OPC_CheckChild1Same, 0,
/* 22518*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22520*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22523*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22526*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22529*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22532*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22544*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22547*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22550*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22562*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22565*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22568*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22580*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22583*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22586*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22589*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22592*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22616*/        0, /*End of Scope*/
/* 22617*/      0, /*End of Scope*/
/* 22618*/    /*Scope*/ 30|128,9/*1182*/, /*->23802*/
/* 22620*/      OPC_RecordChild0, // #0 = $z
/* 22621*/      OPC_MoveChild1,
/* 22622*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 22625*/      OPC_Scope, 73|128,4/*585*/, /*->23213*/ // 2 children in Scope
/* 22628*/        OPC_RecordChild0, // #1 = $x
/* 22629*/        OPC_MoveChild1,
/* 22630*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22633*/        OPC_Scope, 31|128,2/*287*/, /*->22923*/ // 2 children in Scope
/* 22636*/          OPC_RecordChild0, // #2 = $y
/* 22637*/          OPC_CheckChild1Same, 0,
/* 22639*/          OPC_MoveParent,
/* 22640*/          OPC_MoveParent,
/* 22641*/          OPC_CheckType, MVT::i64,
/* 22643*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22645*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 22648*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22651*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22654*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22657*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 22665*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22668*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22671*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22683*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22686*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 22694*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22697*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22700*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22712*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22715*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 22723*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22726*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22729*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22741*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22744*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22753*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 22777*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22780*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22783*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22786*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22789*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 22797*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22800*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22803*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22815*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22818*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 22826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22832*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22844*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22847*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 22855*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22861*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22873*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22876*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22879*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22882*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22885*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 22909*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22912*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 22923*/        /*Scope*/ 31|128,2/*287*/, /*->23212*/
/* 22925*/          OPC_CheckChild0Same, 0,
/* 22927*/          OPC_RecordChild1, // #2 = $y
/* 22928*/          OPC_MoveParent,
/* 22929*/          OPC_MoveParent,
/* 22930*/          OPC_CheckType, MVT::i64,
/* 22932*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22934*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 22937*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22943*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22946*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 22954*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22957*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22960*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22972*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22975*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 22983*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22986*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22989*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23001*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23004*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 23012*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23015*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23018*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23030*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23033*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23036*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23039*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23042*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23066*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23069*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23072*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23075*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23078*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 23086*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23089*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23092*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23104*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23107*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 23115*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23118*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23121*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23133*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23136*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23144*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23147*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23150*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23162*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23165*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23168*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23171*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23174*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23198*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23201*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23212*/        0, /*End of Scope*/
/* 23213*/      /*Scope*/ 74|128,4/*586*/, /*->23801*/
/* 23215*/        OPC_MoveChild0,
/* 23216*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 23219*/        OPC_Scope, 32|128,2/*288*/, /*->23510*/ // 2 children in Scope
/* 23222*/          OPC_RecordChild0, // #1 = $y
/* 23223*/          OPC_CheckChild1Same, 0,
/* 23225*/          OPC_MoveParent,
/* 23226*/          OPC_RecordChild1, // #2 = $x
/* 23227*/          OPC_MoveParent,
/* 23228*/          OPC_CheckType, MVT::i64,
/* 23230*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23232*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23235*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23238*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23241*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23244*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 23252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23258*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23270*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23273*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23281*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23284*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23287*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23299*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23302*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 23310*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23316*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23328*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23331*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23334*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23337*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23340*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23364*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23367*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23370*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23373*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23376*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 23384*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23387*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23390*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23402*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23405*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 23413*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23416*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23419*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23431*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23434*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23442*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23445*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23448*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23460*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23463*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23466*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23469*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23472*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23496*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23499*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23510*/        /*Scope*/ 32|128,2/*288*/, /*->23800*/
/* 23512*/          OPC_CheckChild0Same, 0,
/* 23514*/          OPC_RecordChild1, // #1 = $y
/* 23515*/          OPC_MoveParent,
/* 23516*/          OPC_RecordChild1, // #2 = $x
/* 23517*/          OPC_MoveParent,
/* 23518*/          OPC_CheckType, MVT::i64,
/* 23520*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23522*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23525*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23528*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23531*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23534*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 23542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23545*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23548*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23560*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23563*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23571*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23574*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23577*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23589*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23592*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 23600*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23603*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23606*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23618*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23621*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23624*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23627*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23630*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23654*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23663*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23666*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 23674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23677*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23680*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23692*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23695*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 23703*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23706*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23709*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23721*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23724*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23738*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23750*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23753*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23762*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23786*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23789*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23800*/        0, /*End of Scope*/
/* 23801*/      0, /*End of Scope*/
/* 23802*/    /*Scope*/ 20|128,9/*1172*/, /*->24976*/
/* 23804*/      OPC_MoveChild0,
/* 23805*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 23808*/      OPC_Scope, 69|128,4/*581*/, /*->24392*/ // 2 children in Scope
/* 23811*/        OPC_RecordChild0, // #0 = $x
/* 23812*/        OPC_MoveChild1,
/* 23813*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 23816*/        OPC_RecordChild0, // #1 = $y
/* 23817*/        OPC_RecordChild1, // #2 = $z
/* 23818*/        OPC_MoveParent,
/* 23819*/        OPC_MoveParent,
/* 23820*/        OPC_CheckType, MVT::i64,
/* 23822*/        OPC_Scope, 26|128,2/*282*/, /*->24107*/ // 2 children in Scope
/* 23825*/          OPC_CheckChild1Same, 2,
/* 23827*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23829*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23832*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23835*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23838*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23841*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 23849*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23852*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23855*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23867*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23870*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23878*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23881*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23884*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23896*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23899*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/* 23907*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23910*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23913*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23925*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23928*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23931*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23934*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23937*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23961*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23964*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23967*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23970*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23973*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 23981*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23984*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23987*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23999*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24002*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 24010*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24013*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24016*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24028*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24031*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/* 24039*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24042*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24045*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24057*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24060*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24063*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24066*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24069*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24093*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24096*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24107*/        /*Scope*/ 26|128,2/*282*/, /*->24391*/
/* 24109*/          OPC_CheckChild1Same, 1,
/* 24111*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24113*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24116*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24119*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24122*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24125*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 24133*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24136*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24139*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24151*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24154*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 24162*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24165*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24168*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24180*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24183*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 24191*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24194*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24197*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24209*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24212*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24215*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24218*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24221*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24245*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24251*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24254*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24257*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 24265*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24268*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24271*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24283*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24286*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 24294*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24297*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24300*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24312*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24315*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 24323*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24326*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24329*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24341*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24344*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24347*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24350*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24353*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24377*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24380*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24391*/        0, /*End of Scope*/
/* 24392*/      /*Scope*/ 69|128,4/*581*/, /*->24975*/
/* 24394*/        OPC_MoveChild0,
/* 24395*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24398*/        OPC_RecordChild0, // #0 = $y
/* 24399*/        OPC_RecordChild1, // #1 = $z
/* 24400*/        OPC_MoveParent,
/* 24401*/        OPC_RecordChild1, // #2 = $x
/* 24402*/        OPC_MoveParent,
/* 24403*/        OPC_CheckType, MVT::i64,
/* 24405*/        OPC_Scope, 26|128,2/*282*/, /*->24690*/ // 2 children in Scope
/* 24408*/          OPC_CheckChild1Same, 1,
/* 24410*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24412*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24415*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24418*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24421*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24424*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 24432*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24435*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24438*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24450*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24453*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/* 24461*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24464*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24467*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24479*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24482*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 24490*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24493*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24496*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24508*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24511*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24514*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24517*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24520*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24544*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24547*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24550*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24553*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24556*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 24564*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24567*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24570*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24582*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24585*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/* 24593*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24596*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24599*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24611*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24614*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 24622*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24625*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24628*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24640*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24643*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24646*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24649*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24652*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24676*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24679*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24690*/        /*Scope*/ 26|128,2/*282*/, /*->24974*/
/* 24692*/          OPC_CheckChild1Same, 0,
/* 24694*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24696*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24699*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24702*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24705*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24708*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 24716*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24719*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24722*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24734*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24737*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 24745*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24748*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24751*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24763*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24766*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 24774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24777*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24780*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24792*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24795*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24798*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24801*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24804*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24828*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24831*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24834*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24837*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24840*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 24848*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24851*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24854*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24866*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24869*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 24877*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24880*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24883*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24895*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24898*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 24906*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24909*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24912*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24924*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24927*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24930*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24933*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24936*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24960*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24963*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24974*/        0, /*End of Scope*/
/* 24975*/      0, /*End of Scope*/
/* 24976*/    /*Scope*/ 57|128,1/*185*/, /*->25163*/
/* 24978*/      OPC_RecordChild0, // #0 = $src0
/* 24979*/      OPC_CheckType, MVT::i32,
/* 24981*/      OPC_Scope, 77, /*->25060*/ // 2 children in Scope
/* 24983*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24994*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24996*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24999*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25002*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25005*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25008*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25011*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25014*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25017*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25029*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25032*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25035*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25038*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25041*/        OPC_MorphNodeTo1, TARGET_VAL(R600::NOT_INT), 0,
                      MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, -1:{ *:[i32] }) - Complexity = 8
                  // Dst: (NOT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 25060*/      /*Scope*/ 101, /*->25162*/
/* 25061*/        OPC_RecordChild1, // #1 = $src1
/* 25062*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25064*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25067*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25070*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25073*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25076*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25079*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25082*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25085*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25088*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25091*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25103*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25106*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25109*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25112*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25124*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25127*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25130*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25133*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25136*/        OPC_MorphNodeTo1, TARGET_VAL(R600::XOR_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (XOR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 25162*/      0, /*End of Scope*/
/* 25163*/    0, /*End of Scope*/
/* 25164*/  /*SwitchOpcode*/ 45, TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->25212
/* 25167*/    OPC_RecordChild0, // #0 = $src
/* 25168*/    OPC_CheckChild0Type, MVT::i32,
/* 25170*/    OPC_Scope, 12, /*->25184*/ // 2 children in Scope
/* 25172*/      OPC_CheckType, MVT::i32,
/* 25174*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/* 25177*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CONST_COPY), 0|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (CONST_ADDRESS:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src) - Complexity = 9
                // Dst: (CONST_COPY:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src)
/* 25184*/    /*Scope*/ 26, /*->25211*/
/* 25185*/      OPC_RecordChild1, // #1 = $buffer_id
/* 25186*/      OPC_MoveChild1,
/* 25187*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 25190*/      OPC_CheckType, MVT::i32,
/* 25192*/      OPC_MoveParent,
/* 25193*/      OPC_CheckType, MVT::v4i32,
/* 25195*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25197*/      OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/* 25200*/      OPC_EmitConvertToTarget, 1,
/* 25202*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                    MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (CONST_ADDRESS:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id) - Complexity = 15
                // Dst: (TEX_VTX_CONSTBUF:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id)
/* 25211*/    0, /*End of Scope*/
/* 25212*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->25469
/* 25216*/    OPC_RecordMemRef,
/* 25217*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/* 25218*/    OPC_RecordChild1, // #1 = $ptr
/* 25219*/    OPC_CheckChild1Type, MVT::i32,
/* 25221*/    OPC_CheckType, MVT::i32,
/* 25223*/    OPC_Scope, 63, /*->25288*/ // 3 children in Scope
/* 25225*/      OPC_CheckChild2Integer, 1, 
/* 25227*/      OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25229*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25231*/      OPC_EmitMergeInputChains1_0,
/* 25232*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25238*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25250*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25257*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25260*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25269*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25277*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25280*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_add_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25288*/    /*Scope*/ 72, /*->25361*/
/* 25289*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25300*/      OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25302*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25304*/      OPC_EmitMergeInputChains1_0,
/* 25305*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25311*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25323*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25330*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25333*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25342*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25350*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25353*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_add_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25361*/    /*Scope*/ 106, /*->25468*/
/* 25362*/      OPC_RecordChild2, // #2 = $data
/* 25363*/      OPC_Scope, 42, /*->25407*/ // 2 children in Scope
/* 25365*/        OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25367*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25369*/        OPC_EmitMergeInputChains1_0,
/* 25370*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 25376*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25379*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 25388*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_ADD_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 25396*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25399*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_add_global_noret>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_ADD_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25407*/      /*Scope*/ 59, /*->25467*/
/* 25408*/        OPC_CheckPredicate, 20, // Predicate_atomic_load_add_local
/* 25410*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25412*/        OPC_EmitMergeInputChains1_0,
/* 25413*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25416*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25428*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25431*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25443*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25446*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25449*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25452*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_ADD_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_add_local>> - Complexity = 4
                  // Dst: (LDS_ADD_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 25467*/      0, /*End of Scope*/
/* 25468*/    0, /*End of Scope*/
/* 25469*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->25726
/* 25473*/    OPC_RecordMemRef,
/* 25474*/    OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/* 25475*/    OPC_RecordChild1, // #1 = $ptr
/* 25476*/    OPC_CheckChild1Type, MVT::i32,
/* 25478*/    OPC_CheckType, MVT::i32,
/* 25480*/    OPC_Scope, 72, /*->25554*/ // 3 children in Scope
/* 25482*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25493*/      OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25495*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25497*/      OPC_EmitMergeInputChains1_0,
/* 25498*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25504*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25516*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25523*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25526*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25535*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25543*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25546*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_sub_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25554*/    /*Scope*/ 63, /*->25618*/
/* 25555*/      OPC_CheckChild2Integer, 1, 
/* 25557*/      OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25559*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25561*/      OPC_EmitMergeInputChains1_0,
/* 25562*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25568*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25580*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25587*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25590*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25599*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25607*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25610*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_sub_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25618*/    /*Scope*/ 106, /*->25725*/
/* 25619*/      OPC_RecordChild2, // #2 = $data
/* 25620*/      OPC_Scope, 42, /*->25664*/ // 2 children in Scope
/* 25622*/        OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25624*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25626*/        OPC_EmitMergeInputChains1_0,
/* 25627*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 25633*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25636*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 25645*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_SUB_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 25653*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25656*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_sub_global_noret>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_SUB_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25664*/      /*Scope*/ 59, /*->25724*/
/* 25665*/        OPC_CheckPredicate, 20, // Predicate_atomic_load_sub_local
/* 25667*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25669*/        OPC_EmitMergeInputChains1_0,
/* 25670*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25673*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25685*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25688*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25700*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25703*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25706*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25709*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SUB_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_sub_local>> - Complexity = 4
                  // Dst: (LDS_SUB_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 25724*/      0, /*End of Scope*/
/* 25725*/    0, /*End of Scope*/
/* 25726*/  /*SwitchOpcode*/ 25|128,2/*281*/, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->26011
/* 25730*/    OPC_RecordChild0, // #0 = $src
/* 25731*/    OPC_SwitchType /*2 cases */, 8|128,1/*136*/, MVT::i32,// ->25871
/* 25735*/      OPC_Scope, 82, /*->25819*/ // 2 children in Scope
/* 25737*/        OPC_CheckChild0Type, MVT::v4i32,
/* 25739*/        OPC_Scope, 15, /*->25756*/ // 5 children in Scope
/* 25741*/          OPC_CheckChild1Integer, 0, 
/* 25743*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25745*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25748*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub0:{ *:[i32] })
/* 25756*/        /*Scope*/ 15, /*->25772*/
/* 25757*/          OPC_CheckChild1Integer, 1, 
/* 25759*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25761*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25764*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub1:{ *:[i32] })
/* 25772*/        /*Scope*/ 15, /*->25788*/
/* 25773*/          OPC_CheckChild1Integer, 2, 
/* 25775*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25777*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 25780*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub2:{ *:[i32] })
/* 25788*/        /*Scope*/ 15, /*->25804*/
/* 25789*/          OPC_CheckChild1Integer, 3, 
/* 25791*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25793*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 25796*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub3:{ *:[i32] })
/* 25804*/        /*Scope*/ 13, /*->25818*/
/* 25805*/          OPC_RecordChild1, // #1 = $index
/* 25806*/          OPC_CheckChild1Type, MVT::i32,
/* 25808*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25810*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$index)
/* 25818*/        0, /*End of Scope*/
/* 25819*/      /*Scope*/ 50, /*->25870*/
/* 25820*/        OPC_CheckChild0Type, MVT::v2i32,
/* 25822*/        OPC_Scope, 15, /*->25839*/ // 3 children in Scope
/* 25824*/          OPC_CheckChild1Integer, 0, 
/* 25826*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25828*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25831*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub0:{ *:[i32] })
/* 25839*/        /*Scope*/ 15, /*->25855*/
/* 25840*/          OPC_CheckChild1Integer, 1, 
/* 25842*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25844*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25847*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub1:{ *:[i32] })
/* 25855*/        /*Scope*/ 13, /*->25869*/
/* 25856*/          OPC_RecordChild1, // #1 = $index
/* 25857*/          OPC_CheckChild1Type, MVT::i32,
/* 25859*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25861*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$index)
/* 25869*/        0, /*End of Scope*/
/* 25870*/      0, /*End of Scope*/
/* 25871*/    /*SwitchType*/ 8|128,1/*136*/, MVT::f32,// ->26010
/* 25874*/      OPC_Scope, 82, /*->25958*/ // 2 children in Scope
/* 25876*/        OPC_CheckChild0Type, MVT::v4f32,
/* 25878*/        OPC_Scope, 15, /*->25895*/ // 5 children in Scope
/* 25880*/          OPC_CheckChild1Integer, 0, 
/* 25882*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25884*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25887*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub0:{ *:[i32] })
/* 25895*/        /*Scope*/ 15, /*->25911*/
/* 25896*/          OPC_CheckChild1Integer, 1, 
/* 25898*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25900*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25903*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub1:{ *:[i32] })
/* 25911*/        /*Scope*/ 15, /*->25927*/
/* 25912*/          OPC_CheckChild1Integer, 2, 
/* 25914*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25916*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 25919*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub2:{ *:[i32] })
/* 25927*/        /*Scope*/ 15, /*->25943*/
/* 25928*/          OPC_CheckChild1Integer, 3, 
/* 25930*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25932*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 25935*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub3:{ *:[i32] })
/* 25943*/        /*Scope*/ 13, /*->25957*/
/* 25944*/          OPC_RecordChild1, // #1 = $index
/* 25945*/          OPC_CheckChild1Type, MVT::i32,
/* 25947*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25949*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[i32] }:$index)
/* 25957*/        0, /*End of Scope*/
/* 25958*/      /*Scope*/ 50, /*->26009*/
/* 25959*/        OPC_CheckChild0Type, MVT::v2f32,
/* 25961*/        OPC_Scope, 15, /*->25978*/ // 3 children in Scope
/* 25963*/          OPC_CheckChild1Integer, 0, 
/* 25965*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25967*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25970*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub0:{ *:[i32] })
/* 25978*/        /*Scope*/ 15, /*->25994*/
/* 25979*/          OPC_CheckChild1Integer, 1, 
/* 25981*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25983*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25986*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub1:{ *:[i32] })
/* 25994*/        /*Scope*/ 13, /*->26008*/
/* 25995*/          OPC_RecordChild1, // #1 = $index
/* 25996*/          OPC_CheckChild1Type, MVT::i32,
/* 25998*/          OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26000*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[i32] }:$index)
/* 26008*/        0, /*End of Scope*/
/* 26009*/      0, /*End of Scope*/
/* 26010*/    0, // EndSwitchType
/* 26011*/  /*SwitchOpcode*/ 35|128,4/*547*/, TARGET_VAL(ISD::ADD),// ->26562
/* 26015*/    OPC_Scope, 89|128,1/*217*/, /*->26235*/ // 2 children in Scope
/* 26018*/      OPC_MoveChild0,
/* 26019*/      OPC_SwitchOpcode /*2 cases */, 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->26127
/* 26023*/        OPC_RecordChild0, // #0 = $src0
/* 26024*/        OPC_RecordChild1, // #1 = $src1
/* 26025*/        OPC_MoveParent,
/* 26026*/        OPC_RecordChild1, // #2 = $src2
/* 26027*/        OPC_CheckType, MVT::i32,
/* 26029*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26031*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26034*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26037*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26040*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26043*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26055*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26058*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26061*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26073*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26076*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26079*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26091*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26094*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26097*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26100*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26103*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26127*/      /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->26234
/* 26130*/        OPC_RecordChild0, // #0 = $src0
/* 26131*/        OPC_RecordChild1, // #1 = $src1
/* 26132*/        OPC_MoveParent,
/* 26133*/        OPC_RecordChild1, // #2 = $src2
/* 26134*/        OPC_CheckType, MVT::i32,
/* 26136*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 26138*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26141*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26144*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26147*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26150*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26162*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26165*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26168*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26180*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26183*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26186*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26198*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26201*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26204*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26207*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26210*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26234*/      0, // EndSwitchOpcode
/* 26235*/    /*Scope*/ 68|128,2/*324*/, /*->26561*/
/* 26237*/      OPC_RecordChild0, // #0 = $src2
/* 26238*/      OPC_Scope, 87|128,1/*215*/, /*->26456*/ // 2 children in Scope
/* 26241*/        OPC_MoveChild1,
/* 26242*/        OPC_SwitchOpcode /*2 cases */, 103, TARGET_VAL(AMDGPUISD::MUL_U24),// ->26349
/* 26246*/          OPC_RecordChild0, // #1 = $src0
/* 26247*/          OPC_RecordChild1, // #2 = $src1
/* 26248*/          OPC_MoveParent,
/* 26249*/          OPC_CheckType, MVT::i32,
/* 26251*/          OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26253*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26256*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26259*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26262*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26265*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26277*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26280*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26283*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26295*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26298*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26301*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26313*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26316*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26322*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26325*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26349*/        /*SwitchOpcode*/ 103, TARGET_VAL(AMDGPUISD::MUL_I24),// ->26455
/* 26352*/          OPC_RecordChild0, // #1 = $src0
/* 26353*/          OPC_RecordChild1, // #2 = $src1
/* 26354*/          OPC_MoveParent,
/* 26355*/          OPC_CheckType, MVT::i32,
/* 26357*/          OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 26359*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26362*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26365*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26368*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26371*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26383*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26386*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26389*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26419*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26422*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26425*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26428*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26431*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26455*/        0, // EndSwitchOpcode
/* 26456*/      /*Scope*/ 103, /*->26560*/
/* 26457*/        OPC_RecordChild1, // #1 = $src1
/* 26458*/        OPC_CheckType, MVT::i32,
/* 26460*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26462*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26465*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26468*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26471*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26474*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26477*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26480*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26483*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26486*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26489*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26501*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26504*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26507*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26510*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26522*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26525*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26528*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26531*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26534*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ADD_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ADD_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 26560*/      0, /*End of Scope*/
/* 26561*/    0, /*End of Scope*/
/* 26562*/  /*SwitchOpcode*/ 15, TARGET_VAL(AMDGPUISD::CONST_DATA_PTR),// ->26580
/* 26565*/    OPC_RecordChild0, // #0 = $addr
/* 26566*/    OPC_MoveChild0,
/* 26567*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/* 26570*/    OPC_MoveParent,
/* 26571*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26573*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_GLOBAL_ADDR), 0,
                  MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (AMDGPUconstdata_ptr:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$addr) - Complexity = 6
              // Dst: (MOV_IMM_GLOBAL_ADDR:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$addr)
/* 26580*/  /*SwitchOpcode*/ 20, TARGET_VAL(AMDGPUISD::STORE_MSKOR),// ->26603
/* 26583*/    OPC_RecordMemRef,
/* 26584*/    OPC_RecordNode, // #0 = 'AMDGPUstore_mskor' chained node
/* 26585*/    OPC_RecordChild1, // #1 = $rw_gpr
/* 26586*/    OPC_CheckChild1Type, MVT::v4i32,
/* 26588*/    OPC_RecordChild2, // #2 = $index_gpr
/* 26589*/    OPC_CheckChild2Type, MVT::i32,
/* 26591*/    OPC_CheckPredicate, 29, // Predicate_mskor_global
/* 26593*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26595*/    OPC_EmitMergeInputChains1_0,
/* 26596*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_MSKOR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#Ops*/, 1, 2, 
              // Src: (AMDGPUstore_mskor v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_mskor_global>> - Complexity = 4
              // Dst: (RAT_MSKOR v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 26603*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_SWAP),// ->26719
/* 26606*/    OPC_RecordMemRef,
/* 26607*/    OPC_RecordNode, // #0 = 'atomic_swap' chained node
/* 26608*/    OPC_RecordChild1, // #1 = $ptr
/* 26609*/    OPC_CheckChild1Type, MVT::i32,
/* 26611*/    OPC_RecordChild2, // #2 = $data
/* 26612*/    OPC_CheckType, MVT::i32,
/* 26614*/    OPC_Scope, 42, /*->26658*/ // 2 children in Scope
/* 26616*/      OPC_CheckPredicate, 30, // Predicate_atomic_swap_global_noret
/* 26618*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26620*/      OPC_EmitMergeInputChains1_0,
/* 26621*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26627*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26630*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26639*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26647*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26650*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26658*/    /*Scope*/ 59, /*->26718*/
/* 26659*/      OPC_CheckPredicate, 20, // Predicate_atomic_swap_local
/* 26661*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26663*/      OPC_EmitMergeInputChains1_0,
/* 26664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26667*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26679*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26682*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26694*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26697*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26700*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26703*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_WRXCHG_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_swap_local>> - Complexity = 4
                // Dst: (LDS_WRXCHG_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26718*/    0, /*End of Scope*/
/* 26719*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->26835
/* 26722*/    OPC_RecordMemRef,
/* 26723*/    OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/* 26724*/    OPC_RecordChild1, // #1 = $ptr
/* 26725*/    OPC_CheckChild1Type, MVT::i32,
/* 26727*/    OPC_RecordChild2, // #2 = $data
/* 26728*/    OPC_CheckType, MVT::i32,
/* 26730*/    OPC_Scope, 42, /*->26774*/ // 2 children in Scope
/* 26732*/      OPC_CheckPredicate, 30, // Predicate_atomic_min_global_noret
/* 26734*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26736*/      OPC_EmitMergeInputChains1_0,
/* 26737*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26743*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26746*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26755*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26763*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26766*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_min_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26774*/    /*Scope*/ 59, /*->26834*/
/* 26775*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_min_local
/* 26777*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26779*/      OPC_EmitMergeInputChains1_0,
/* 26780*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26783*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26795*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26798*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26810*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26813*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26816*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26819*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_min_local>> - Complexity = 4
                // Dst: (LDS_MIN_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26834*/    0, /*End of Scope*/
/* 26835*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->26951
/* 26838*/    OPC_RecordMemRef,
/* 26839*/    OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/* 26840*/    OPC_RecordChild1, // #1 = $ptr
/* 26841*/    OPC_CheckChild1Type, MVT::i32,
/* 26843*/    OPC_RecordChild2, // #2 = $data
/* 26844*/    OPC_CheckType, MVT::i32,
/* 26846*/    OPC_Scope, 42, /*->26890*/ // 2 children in Scope
/* 26848*/      OPC_CheckPredicate, 30, // Predicate_atomic_umin_global_noret
/* 26850*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26852*/      OPC_EmitMergeInputChains1_0,
/* 26853*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26859*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26862*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26871*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26879*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26882*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_umin_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26890*/    /*Scope*/ 59, /*->26950*/
/* 26891*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_umin_local
/* 26893*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26895*/      OPC_EmitMergeInputChains1_0,
/* 26896*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26899*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26911*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26914*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26926*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26929*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26932*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26935*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umin_local>> - Complexity = 4
                // Dst: (LDS_MIN_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26950*/    0, /*End of Scope*/
/* 26951*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->27067
/* 26954*/    OPC_RecordMemRef,
/* 26955*/    OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/* 26956*/    OPC_RecordChild1, // #1 = $ptr
/* 26957*/    OPC_CheckChild1Type, MVT::i32,
/* 26959*/    OPC_RecordChild2, // #2 = $data
/* 26960*/    OPC_CheckType, MVT::i32,
/* 26962*/    OPC_Scope, 42, /*->27006*/ // 2 children in Scope
/* 26964*/      OPC_CheckPredicate, 30, // Predicate_atomic_max_global_noret
/* 26966*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26968*/      OPC_EmitMergeInputChains1_0,
/* 26969*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26975*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26978*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26987*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26995*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26998*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_max_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27006*/    /*Scope*/ 59, /*->27066*/
/* 27007*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_max_local
/* 27009*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27011*/      OPC_EmitMergeInputChains1_0,
/* 27012*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27015*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27027*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27030*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27042*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27045*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27048*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27051*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_max_local>> - Complexity = 4
                // Dst: (LDS_MAX_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27066*/    0, /*End of Scope*/
/* 27067*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->27183
/* 27070*/    OPC_RecordMemRef,
/* 27071*/    OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/* 27072*/    OPC_RecordChild1, // #1 = $ptr
/* 27073*/    OPC_CheckChild1Type, MVT::i32,
/* 27075*/    OPC_RecordChild2, // #2 = $data
/* 27076*/    OPC_CheckType, MVT::i32,
/* 27078*/    OPC_Scope, 42, /*->27122*/ // 2 children in Scope
/* 27080*/      OPC_CheckPredicate, 30, // Predicate_atomic_umax_global_noret
/* 27082*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27084*/      OPC_EmitMergeInputChains1_0,
/* 27085*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27091*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27094*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27103*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27111*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27114*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_umax_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27122*/    /*Scope*/ 59, /*->27182*/
/* 27123*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_umax_local
/* 27125*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27127*/      OPC_EmitMergeInputChains1_0,
/* 27128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27131*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27143*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27146*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27158*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27161*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27164*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27167*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umax_local>> - Complexity = 4
                // Dst: (LDS_MAX_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27182*/    0, /*End of Scope*/
/* 27183*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->27299
/* 27186*/    OPC_RecordMemRef,
/* 27187*/    OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/* 27188*/    OPC_RecordChild1, // #1 = $ptr
/* 27189*/    OPC_CheckChild1Type, MVT::i32,
/* 27191*/    OPC_RecordChild2, // #2 = $data
/* 27192*/    OPC_CheckType, MVT::i32,
/* 27194*/    OPC_Scope, 42, /*->27238*/ // 2 children in Scope
/* 27196*/      OPC_CheckPredicate, 30, // Predicate_atomic_and_global_noret
/* 27198*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27200*/      OPC_EmitMergeInputChains1_0,
/* 27201*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27207*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27210*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27219*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_AND_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27227*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27230*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_and_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_AND_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27238*/    /*Scope*/ 59, /*->27298*/
/* 27239*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_and_local
/* 27241*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27243*/      OPC_EmitMergeInputChains1_0,
/* 27244*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27247*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27259*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27262*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27274*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27277*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27280*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27283*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_AND_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_and_local>> - Complexity = 4
                // Dst: (LDS_AND_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27298*/    0, /*End of Scope*/
/* 27299*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->27415
/* 27302*/    OPC_RecordMemRef,
/* 27303*/    OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/* 27304*/    OPC_RecordChild1, // #1 = $ptr
/* 27305*/    OPC_CheckChild1Type, MVT::i32,
/* 27307*/    OPC_RecordChild2, // #2 = $data
/* 27308*/    OPC_CheckType, MVT::i32,
/* 27310*/    OPC_Scope, 42, /*->27354*/ // 2 children in Scope
/* 27312*/      OPC_CheckPredicate, 30, // Predicate_atomic_or_global_noret
/* 27314*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27316*/      OPC_EmitMergeInputChains1_0,
/* 27317*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27323*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27326*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27335*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_OR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27343*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27346*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_or_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_OR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27354*/    /*Scope*/ 59, /*->27414*/
/* 27355*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_or_local
/* 27357*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27359*/      OPC_EmitMergeInputChains1_0,
/* 27360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27363*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27375*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27378*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27390*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27393*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27396*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27399*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_OR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_or_local>> - Complexity = 4
                // Dst: (LDS_OR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27414*/    0, /*End of Scope*/
/* 27415*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->27531
/* 27418*/    OPC_RecordMemRef,
/* 27419*/    OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/* 27420*/    OPC_RecordChild1, // #1 = $ptr
/* 27421*/    OPC_CheckChild1Type, MVT::i32,
/* 27423*/    OPC_RecordChild2, // #2 = $data
/* 27424*/    OPC_CheckType, MVT::i32,
/* 27426*/    OPC_Scope, 42, /*->27470*/ // 2 children in Scope
/* 27428*/      OPC_CheckPredicate, 30, // Predicate_atomic_xor_global_noret
/* 27430*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27432*/      OPC_EmitMergeInputChains1_0,
/* 27433*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27439*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27442*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27451*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XOR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27459*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27462*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_xor_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XOR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27470*/    /*Scope*/ 59, /*->27530*/
/* 27471*/      OPC_CheckPredicate, 20, // Predicate_atomic_load_xor_local
/* 27473*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27475*/      OPC_EmitMergeInputChains1_0,
/* 27476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27479*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27491*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27494*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27506*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27509*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27512*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27515*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_XOR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_xor_local>> - Complexity = 4
                // Dst: (LDS_XOR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27530*/    0, /*End of Scope*/
/* 27531*/  /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->27679
/* 27535*/    OPC_RecordMemRef,
/* 27536*/    OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/* 27537*/    OPC_RecordChild1, // #1 = $ptr
/* 27538*/    OPC_CheckChild1Type, MVT::i32,
/* 27540*/    OPC_RecordChild2, // #2 = $cmp
/* 27541*/    OPC_RecordChild3, // #3 = $data
/* 27542*/    OPC_CheckType, MVT::i32,
/* 27544*/    OPC_Scope, 54, /*->27600*/ // 2 children in Scope
/* 27546*/      OPC_CheckPredicate, 30, // Predicate_atomic_cmp_swap_global_noret
/* 27548*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27550*/      OPC_EmitMergeInputChains1_0,
/* 27551*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #4
/* 27557*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 27560*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 4, 2, 5,  // Results = #6
/* 27569*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27572*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 6, 3, 7,  // Results = #8
/* 27581*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_CMPXCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 8, 1,  // Results = #9
/* 27589*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27592*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 9, 10, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$cmp, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_cmp_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_CMPXCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$cmp, sub3:{ *:[i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27600*/    /*Scope*/ 77, /*->27678*/
/* 27601*/      OPC_CheckPredicate, 31, // Predicate_atomic_cmp_swap_local
/* 27603*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27605*/      OPC_EmitMergeInputChains1_0,
/* 27606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27609*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27621*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27624*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27639*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27651*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27654*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27657*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27660*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_CMPST_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 12/*#Ops*/, 1, 4, 5, 2, 6, 7, 3, 8, 9, 10, 11, 12, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)<<P:Predicate_atomic_cmp_swap_local>> - Complexity = 4
                // Dst: (LDS_CMPST_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 27678*/    0, /*End of Scope*/
/* 27679*/  /*SwitchOpcode*/ 57, TARGET_VAL(ISD::BITCAST),// ->27739
/* 27682*/    OPC_RecordChild0, // #0 = $src0
/* 27683*/    OPC_SwitchType /*6 cases */, 7, MVT::i32,// ->27693
/* 27686*/      OPC_CheckChild0Type, MVT::f32,
/* 27688*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27690*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[i32] }:$src0
/* 27693*/    /*SwitchType*/ 7, MVT::f32,// ->27702
/* 27695*/      OPC_CheckChild0Type, MVT::i32,
/* 27697*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27699*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[f32] }:$src0
/* 27702*/    /*SwitchType*/ 7, MVT::v2i32,// ->27711
/* 27704*/      OPC_CheckChild0Type, MVT::v2f32,
/* 27706*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27708*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2i32] } R600_Reg64:{ *:[v2f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2i32] }:$src0
/* 27711*/    /*SwitchType*/ 7, MVT::v4i32,// ->27720
/* 27713*/      OPC_CheckChild0Type, MVT::v4f32,
/* 27715*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27717*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4i32] } R600_Reg128:{ *:[v4f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4i32] }:$src0
/* 27720*/    /*SwitchType*/ 7, MVT::v2f32,// ->27729
/* 27722*/      OPC_CheckChild0Type, MVT::v2i32,
/* 27724*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27726*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2f32] } R600_Reg64:{ *:[v2i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2f32] }:$src0
/* 27729*/    /*SwitchType*/ 7, MVT::v4f32,// ->27738
/* 27731*/      OPC_CheckChild0Type, MVT::v4i32,
/* 27733*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27735*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4f32] }:$src0
/* 27738*/    0, // EndSwitchType
/* 27739*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::DWORDADDR),// ->27750
/* 27742*/    OPC_RecordChild0, // #0 = $addr
/* 27743*/    OPC_CheckType, MVT::i32,
/* 27745*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27747*/    OPC_CompleteMatch, 1, 0, 
               // Src: (AMDGPUdwordaddr:{ *:[i32] } R600_Reg32:{ *:[i32] }:$addr) - Complexity = 3
               // Dst: R600_Reg32:{ *:[i32] }:$addr
/* 27750*/  /*SwitchOpcode*/ 9, TARGET_VAL(AMDGPUISD::DUMMY_CHAIN),// ->27762
/* 27753*/    OPC_RecordNode, // #0 = 'R600dummy_chain' chained node
/* 27754*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27756*/    OPC_EmitMergeInputChains1_0,
/* 27757*/    OPC_MorphNodeTo0, TARGET_VAL(R600::DUMMY_CHAIN), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (R600dummy_chain) - Complexity = 3
              // Dst: (DUMMY_CHAIN)
/* 27762*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SUB),// ->27869
/* 27765*/    OPC_RecordChild0, // #0 = $src0
/* 27766*/    OPC_RecordChild1, // #1 = $src1
/* 27767*/    OPC_CheckType, MVT::i32,
/* 27769*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27771*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27774*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27777*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27780*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27783*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27786*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27789*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27792*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27795*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27798*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27810*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27813*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27816*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27819*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27831*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27834*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27837*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27840*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27843*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUB_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUB_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27869*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMAX),// ->27976
/* 27872*/    OPC_RecordChild0, // #0 = $src0
/* 27873*/    OPC_RecordChild1, // #1 = $src1
/* 27874*/    OPC_CheckType, MVT::i32,
/* 27876*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27878*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27881*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27884*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27887*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27890*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27893*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27896*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27899*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27902*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27905*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27917*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27920*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27923*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27926*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27938*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27941*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27944*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27947*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27950*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27976*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMIN),// ->28083
/* 27979*/    OPC_RecordChild0, // #0 = $src0
/* 27980*/    OPC_RecordChild1, // #1 = $src1
/* 27981*/    OPC_CheckType, MVT::i32,
/* 27983*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27985*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27988*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27991*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27994*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27997*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28000*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28003*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28006*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28009*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28012*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28024*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28027*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28030*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28033*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28045*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28048*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28051*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28054*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28057*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28083*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMAX),// ->28190
/* 28086*/    OPC_RecordChild0, // #0 = $src0
/* 28087*/    OPC_RecordChild1, // #1 = $src1
/* 28088*/    OPC_CheckType, MVT::i32,
/* 28090*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28092*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28095*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28098*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28101*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28104*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28107*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28110*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28113*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28116*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28119*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28131*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28134*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28137*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28140*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28152*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28155*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28158*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28161*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28164*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28190*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMIN),// ->28297
/* 28193*/    OPC_RecordChild0, // #0 = $src0
/* 28194*/    OPC_RecordChild1, // #1 = $src1
/* 28195*/    OPC_CheckType, MVT::i32,
/* 28197*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28199*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28202*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28205*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28208*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28211*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28214*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28217*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28220*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28223*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28226*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28238*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28241*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28244*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28247*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28259*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28262*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28265*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28268*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28271*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28297*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_SINT),// ->28507
/* 28301*/    OPC_RecordChild0, // #0 = $src0
/* 28302*/    OPC_CheckChild0Type, MVT::f32,
/* 28304*/    OPC_CheckType, MVT::i32,
/* 28306*/    OPC_Scope, 66, /*->28374*/ // 2 children in Scope
/* 28308*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28310*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28313*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28316*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28319*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28322*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28325*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28328*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28331*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28343*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28346*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28355*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 28374*/    /*Scope*/ 2|128,1/*130*/, /*->28506*/
/* 28376*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28378*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28381*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28384*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28387*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28390*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28393*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28396*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28399*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28405*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28408*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28411*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28423*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28426*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28429*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28432*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28435*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 28454*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28457*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28460*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28463*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28475*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28478*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28481*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28484*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28487*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 28506*/    0, /*End of Scope*/
/* 28507*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_UINT),// ->28717
/* 28511*/    OPC_RecordChild0, // #0 = $src0
/* 28512*/    OPC_CheckChild0Type, MVT::f32,
/* 28514*/    OPC_CheckType, MVT::i32,
/* 28516*/    OPC_Scope, 66, /*->28584*/ // 2 children in Scope
/* 28518*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28520*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28523*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28526*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28532*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28535*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28538*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28541*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28553*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28556*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28559*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28562*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28565*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_uint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 28584*/    /*Scope*/ 2|128,1/*130*/, /*->28716*/
/* 28586*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28588*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28591*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28594*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28597*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28600*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28603*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28612*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28615*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28618*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28621*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28633*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28636*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28645*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 28664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28667*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28670*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28673*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28685*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28688*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28691*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28694*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28697*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 28716*/    0, /*End of Scope*/
/* 28717*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(ISD::SHL),// ->28931
/* 28721*/    OPC_RecordChild0, // #0 = $src0
/* 28722*/    OPC_RecordChild1, // #1 = $src1
/* 28723*/    OPC_CheckChild1Type, MVT::i32,
/* 28725*/    OPC_CheckType, MVT::i32,
/* 28727*/    OPC_Scope, 100, /*->28829*/ // 2 children in Scope
/* 28729*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28731*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28734*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28737*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28743*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28746*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28749*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28752*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28755*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28758*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28770*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28773*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28776*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28779*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28791*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28794*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28797*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28800*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28803*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28829*/    /*Scope*/ 100, /*->28930*/
/* 28830*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28832*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28835*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28838*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28841*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28844*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28847*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28850*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28853*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28856*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28859*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28871*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28874*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28877*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28880*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28892*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28895*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28898*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28901*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28904*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28930*/    0, /*End of Scope*/
/* 28931*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MUL),// ->29244
/* 28935*/    OPC_RecordChild0, // #0 = $src0
/* 28936*/    OPC_RecordChild1, // #1 = $src1
/* 28937*/    OPC_CheckType, MVT::i32,
/* 28939*/    OPC_Scope, 100, /*->29041*/ // 3 children in Scope
/* 28941*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28949*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28952*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28955*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28958*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28961*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28964*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28967*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28970*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28982*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28985*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28988*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28991*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29003*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29006*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29009*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29012*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29015*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29041*/    /*Scope*/ 100, /*->29142*/
/* 29042*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29050*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29056*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29059*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29062*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29065*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29068*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29071*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29083*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29086*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29089*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29092*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29104*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29107*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29110*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29113*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29116*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29142*/    /*Scope*/ 100, /*->29243*/
/* 29143*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 29145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29151*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29166*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29169*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29172*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29184*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29187*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29190*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29193*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29205*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29208*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29211*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29214*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29217*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29243*/    0, /*End of Scope*/
/* 29244*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHS),// ->29557
/* 29248*/    OPC_RecordChild0, // #0 = $src0
/* 29249*/    OPC_RecordChild1, // #1 = $src1
/* 29250*/    OPC_CheckType, MVT::i32,
/* 29252*/    OPC_Scope, 100, /*->29354*/ // 3 children in Scope
/* 29254*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29256*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29259*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29262*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29265*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29268*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29271*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29274*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29277*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29280*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29283*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29295*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29298*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29301*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29304*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29316*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29319*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29322*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29325*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29328*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29354*/    /*Scope*/ 100, /*->29455*/
/* 29355*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29357*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29363*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29366*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29369*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29372*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29375*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29378*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29381*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29384*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29396*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29399*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29405*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29417*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29420*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29423*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29426*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29429*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29455*/    /*Scope*/ 100, /*->29556*/
/* 29456*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 29458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29464*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29467*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29470*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29479*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29482*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29485*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29497*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29500*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29503*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29506*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29518*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29521*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29524*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29527*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29530*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29556*/    0, /*End of Scope*/
/* 29557*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHU),// ->29870
/* 29561*/    OPC_RecordChild0, // #0 = $src0
/* 29562*/    OPC_RecordChild1, // #1 = $src1
/* 29563*/    OPC_CheckType, MVT::i32,
/* 29565*/    OPC_Scope, 100, /*->29667*/ // 3 children in Scope
/* 29567*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29569*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29572*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29575*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29578*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29581*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29584*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29587*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29590*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29593*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29596*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29608*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29611*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29614*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29617*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29629*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29632*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29635*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29638*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29641*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29667*/    /*Scope*/ 100, /*->29768*/
/* 29668*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29670*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29673*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29676*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29679*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29682*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29685*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29688*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29691*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29694*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29697*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29709*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29712*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29715*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29718*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29730*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29733*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29736*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29739*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29742*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29768*/    /*Scope*/ 100, /*->29869*/
/* 29769*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 29771*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29774*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29777*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29780*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29783*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29786*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29789*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29792*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29795*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29798*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29810*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29813*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29816*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29819*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29831*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29834*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29837*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29840*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29843*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29869*/    0, /*End of Scope*/
/* 29870*/  /*SwitchOpcode*/ 63|128,3/*447*/, TARGET_VAL(AMDGPUISD::URECIP),// ->30321
/* 29874*/    OPC_RecordChild0, // #0 = $src0
/* 29875*/    OPC_CheckType, MVT::i32,
/* 29877*/    OPC_Scope, 66, /*->29945*/ // 3 children in Scope
/* 29879*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29881*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29884*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29887*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29890*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29893*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29896*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29899*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29902*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29914*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29917*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29920*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29923*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29926*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 29945*/    /*Scope*/ 66, /*->30012*/
/* 29946*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29948*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29951*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29954*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29957*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29960*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29963*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29966*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29969*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29981*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29984*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29987*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29990*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29993*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 30012*/    /*Scope*/ 50|128,2/*306*/, /*->30320*/
/* 30014*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 30016*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30019*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30022*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30025*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30028*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30031*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30034*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30037*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30040*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30043*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30046*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30049*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30052*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30055*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30058*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30061*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30064*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30067*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30070*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30073*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30076*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30079*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30091*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30094*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30097*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30100*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30103*/      OPC_EmitNode1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 30122*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30125*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30131*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30143*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30146*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30149*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30152*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30155*/      OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/* 30174*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30177*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30180*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30183*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30195*/      OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/* 30202*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/* 30209*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30212*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30215*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30218*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30230*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30233*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30236*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30239*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30242*/      OPC_EmitNode1, TARGET_VAL(R600::MUL_IEEE), 0,
                    MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/* 30268*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30271*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30274*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30277*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30289*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30292*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30295*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30298*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30301*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
                // Src: (AMDGPUurecip:{ *:[i32] } i32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (MUL_IEEE:{ *:[i32] } (RECIP_IEEE_cm:{ *:[i32] } (UINT_TO_FLT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0)), (MOV_IMM_I32:{ *:[i32] } 1333788672:{ *:[i32] })))
/* 30320*/    0, /*End of Scope*/
/* 30321*/  /*SwitchOpcode*/ 80|128,1/*208*/, TARGET_VAL(AMDGPUISD::MULHI_U24),// ->30533
/* 30325*/    OPC_RecordChild0, // #0 = $src0
/* 30326*/    OPC_RecordChild1, // #1 = $src1
/* 30327*/    OPC_CheckType, MVT::i32,
/* 30329*/    OPC_Scope, 100, /*->30431*/ // 2 children in Scope
/* 30331*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 30333*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30336*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30339*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30342*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30345*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30348*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30351*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30354*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30357*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30360*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30372*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30375*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30378*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30381*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30393*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30396*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30399*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30402*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30405*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT24_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 30431*/    /*Scope*/ 100, /*->30532*/
/* 30432*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 30434*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30437*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30440*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30443*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30446*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30449*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30452*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30455*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30461*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30473*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30476*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30479*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30482*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30494*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30497*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30500*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30503*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30506*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm24), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 30532*/    0, /*End of Scope*/
/* 30533*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_U32),// ->30641
/* 30536*/    OPC_RecordChild0, // #0 = $src0
/* 30537*/    OPC_RecordChild1, // #1 = $src1
/* 30538*/    OPC_RecordChild2, // #2 = $src2
/* 30539*/    OPC_CheckChild2Type, MVT::i32,
/* 30541*/    OPC_CheckType, MVT::i32,
/* 30543*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30545*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30548*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30551*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30554*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30557*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30569*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30572*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30575*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30587*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30590*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30593*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30605*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30608*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30611*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30614*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30617*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_u32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_UINT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30641*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_I32),// ->30749
/* 30644*/    OPC_RecordChild0, // #0 = $src0
/* 30645*/    OPC_RecordChild1, // #1 = $src1
/* 30646*/    OPC_RecordChild2, // #2 = $src2
/* 30647*/    OPC_CheckChild2Type, MVT::i32,
/* 30649*/    OPC_CheckType, MVT::i32,
/* 30651*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30653*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30656*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30659*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30662*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30665*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30677*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30680*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30683*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30695*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30698*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30701*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30713*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30716*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30719*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30722*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30725*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_i32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30749*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFI),// ->30857
/* 30752*/    OPC_RecordChild0, // #0 = $src0
/* 30753*/    OPC_RecordChild1, // #1 = $src1
/* 30754*/    OPC_RecordChild2, // #2 = $src2
/* 30755*/    OPC_CheckChild2Type, MVT::i32,
/* 30757*/    OPC_CheckType, MVT::i32,
/* 30759*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30761*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30764*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30767*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30770*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30773*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30785*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30788*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30791*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30803*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30806*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30809*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30821*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30824*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30827*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30830*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30833*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfi:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFI_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30857*/  /*SwitchOpcode*/ 92|128,2/*348*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->31209
/* 30861*/    OPC_RecordChild0, // #0 = $src
/* 30862*/    OPC_MoveChild1,
/* 30863*/    OPC_Scope, 109, /*->30974*/ // 3 children in Scope
/* 30865*/      OPC_CheckValueType, MVT::i1,
/* 30867*/      OPC_MoveParent,
/* 30868*/      OPC_CheckType, MVT::i32,
/* 30870*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30872*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30875*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30878*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30881*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30884*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30896*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 30899*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30902*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30905*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30917*/      OPC_EmitRegister, MVT::i32, R600::ONE_INT,
/* 30920*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30923*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30926*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30938*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30941*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30944*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30947*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30950*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i1:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, ONE_INT:{ *:[i32] })
/* 30974*/    /*Scope*/ 116, /*->31091*/
/* 30975*/      OPC_CheckValueType, MVT::i8,
/* 30977*/      OPC_MoveParent,
/* 30978*/      OPC_CheckType, MVT::i32,
/* 30980*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30982*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30985*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30988*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30991*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30994*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31006*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 31009*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31012*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31015*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31027*/      OPC_EmitInteger, MVT::i32, 8, 
/* 31030*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 31037*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31040*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31043*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31055*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31058*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31061*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31064*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31067*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i8:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 8:{ *:[i32] }))
/* 31091*/    /*Scope*/ 116, /*->31208*/
/* 31092*/      OPC_CheckValueType, MVT::i16,
/* 31094*/      OPC_MoveParent,
/* 31095*/      OPC_CheckType, MVT::i32,
/* 31097*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31099*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31102*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31111*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31123*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 31126*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31129*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31132*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31144*/      OPC_EmitInteger, MVT::i32, 16, 
/* 31147*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 31154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31160*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31172*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31175*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31178*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31181*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31184*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i16:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 16:{ *:[i32] }))
/* 31208*/    0, /*End of Scope*/
/* 31209*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BFM),// ->31316
/* 31212*/    OPC_RecordChild0, // #0 = $src0
/* 31213*/    OPC_RecordChild1, // #1 = $src1
/* 31214*/    OPC_CheckType, MVT::i32,
/* 31216*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31218*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31221*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31224*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31227*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31230*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31233*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31236*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31239*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31242*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31245*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31257*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31260*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31263*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31266*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31278*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31281*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31284*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31287*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31290*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFM_INT_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUbfm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BFM_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 31316*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_U24),// ->31424
/* 31319*/    OPC_RecordChild0, // #0 = $src0
/* 31320*/    OPC_RecordChild1, // #1 = $src1
/* 31321*/    OPC_RecordChild2, // #2 = $src2
/* 31322*/    OPC_CheckChild2Type, MVT::i32,
/* 31324*/    OPC_CheckType, MVT::i32,
/* 31326*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31328*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31331*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31334*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31337*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31340*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31352*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31355*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31358*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31370*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31373*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31376*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31388*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31391*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31394*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31397*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31400*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 31424*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::ROTR),// ->31531
/* 31427*/    OPC_RecordChild0, // #0 = $src0
/* 31428*/    OPC_RecordChild1, // #1 = $src1
/* 31429*/    OPC_CheckChild1Type, MVT::i32,
/* 31431*/    OPC_CheckType, MVT::i32,
/* 31433*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31435*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31438*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31441*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31444*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31447*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31459*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31462*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31465*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31477*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31480*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31483*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31495*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31498*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31501*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31504*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31507*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BIT_ALIGN_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1)
/* 31531*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->31638
/* 31534*/    OPC_RecordChild0, // #0 = $src0
/* 31535*/    OPC_RecordChild1, // #1 = $src1
/* 31536*/    OPC_CheckType, MVT::i32,
/* 31538*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31540*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31543*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31546*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31549*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31552*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31555*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31558*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31561*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31564*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31567*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31579*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31582*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31585*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31588*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31600*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31603*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31606*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31609*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31612*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 31638*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::CARRY),// ->31745
/* 31641*/    OPC_RecordChild0, // #0 = $src0
/* 31642*/    OPC_RecordChild1, // #1 = $src1
/* 31643*/    OPC_CheckType, MVT::i32,
/* 31645*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31647*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31650*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31653*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31656*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31659*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31662*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31665*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31668*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31671*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31674*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31686*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31689*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31692*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31695*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31707*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31710*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31713*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31716*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31719*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADDC_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUcarry:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (ADDC_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31745*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BORROW),// ->31852
/* 31748*/    OPC_RecordChild0, // #0 = $src0
/* 31749*/    OPC_RecordChild1, // #1 = $src1
/* 31750*/    OPC_CheckType, MVT::i32,
/* 31752*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31754*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31757*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31760*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31763*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31766*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31769*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31772*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31775*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31778*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31781*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31793*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31796*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31799*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31802*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31814*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31817*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31820*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31823*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31826*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUBB_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUborrow:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUBB_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31852*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FP_TO_FP16),// ->31926
/* 31855*/    OPC_RecordChild0, // #0 = $src0
/* 31856*/    OPC_CheckChild0Type, MVT::f32,
/* 31858*/    OPC_CheckType, MVT::i32,
/* 31860*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31862*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31865*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31868*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31871*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31874*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31877*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31880*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31883*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31895*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31898*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31901*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31904*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31907*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT32_TO_FLT16), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfp_to_f16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLT32_TO_FLT16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31926*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::CTPOP),// ->31998
/* 31929*/    OPC_RecordChild0, // #0 = $src0
/* 31930*/    OPC_CheckType, MVT::i32,
/* 31932*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31934*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31937*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31940*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31943*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31946*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31949*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31952*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31955*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31967*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31970*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31973*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31976*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31979*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BCNT_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ctpop:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (BCNT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 31998*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBH_U32),// ->32070
/* 32001*/    OPC_RecordChild0, // #0 = $src0
/* 32002*/    OPC_CheckType, MVT::i32,
/* 32004*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32006*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32009*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32012*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32015*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32018*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32021*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32024*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32027*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32039*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32042*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32045*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32048*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32051*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBH_UINT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbh_u32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBH_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 32070*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBL_B32),// ->32142
/* 32073*/    OPC_RecordChild0, // #0 = $src0
/* 32074*/    OPC_CheckType, MVT::i32,
/* 32076*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32078*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32081*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32084*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32087*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32090*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32093*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32096*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32099*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32111*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32114*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32117*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32120*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32123*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBL_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbl_b32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBL_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 32142*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_I24),// ->32250
/* 32145*/    OPC_RecordChild0, // #0 = $src0
/* 32146*/    OPC_RecordChild1, // #1 = $src1
/* 32147*/    OPC_RecordChild2, // #2 = $src2
/* 32148*/    OPC_CheckChild2Type, MVT::i32,
/* 32150*/    OPC_CheckType, MVT::i32,
/* 32152*/    OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 32154*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32157*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32160*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32163*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32166*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32178*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32181*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32184*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32196*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32199*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32202*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32214*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32217*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32220*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32223*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32226*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 32250*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->32357
/* 32253*/    OPC_RecordChild0, // #0 = $src0
/* 32254*/    OPC_RecordChild1, // #1 = $src1
/* 32255*/    OPC_CheckType, MVT::i32,
/* 32257*/    OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 32259*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32262*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32265*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32268*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32271*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32274*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32277*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32280*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32283*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32286*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32298*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32301*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32304*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32307*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32319*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32322*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32325*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32328*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32331*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 32357*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MULHI_I24),// ->32464
/* 32360*/    OPC_RecordChild0, // #0 = $src0
/* 32361*/    OPC_RecordChild1, // #1 = $src1
/* 32362*/    OPC_CheckType, MVT::i32,
/* 32364*/    OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 32366*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32369*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32372*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32375*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32378*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32381*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32384*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32387*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32390*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32393*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32405*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32408*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32411*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32414*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32426*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32429*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32432*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32435*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32438*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm24), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmulhi_i24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32464*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::ENDPGM),// ->32475
/* 32467*/    OPC_RecordNode, // #0 = 'AMDGPUendpgm' chained node
/* 32468*/    OPC_CaptureGlueInput,
/* 32469*/    OPC_EmitMergeInputChains1_0,
/* 32470*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#Ops*/, 
              // Src: (AMDGPUendpgm) - Complexity = 3
              // Dst: (RETURN)
/* 32475*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::Constant),// ->32492
/* 32478*/    OPC_RecordNode, // #0 = $val
/* 32479*/    OPC_CheckType, MVT::i32,
/* 32481*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32483*/    OPC_EmitConvertToTarget, 0,
/* 32485*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:{ *:[i32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_I32:{ *:[i32] } (imm:{ *:[i32] }):$val)
/* 32492*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->32509
/* 32495*/    OPC_RecordNode, // #0 = 'br' chained node
/* 32496*/    OPC_RecordChild1, // #1 = $target
/* 32497*/    OPC_MoveChild1,
/* 32498*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 32501*/    OPC_MoveParent,
/* 32502*/    OPC_EmitMergeInputChains1_0,
/* 32503*/    OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$target) - Complexity = 3
              // Dst: (BRANCH (bb:{ *:[Other] }):$target)
/* 32509*/  /*SwitchOpcode*/ 32, TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->32544
/* 32512*/    OPC_RecordNode, // #0 = 'IL_brcond' chained node
/* 32513*/    OPC_RecordChild1, // #1 = $target
/* 32514*/    OPC_MoveChild1,
/* 32515*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 32518*/    OPC_MoveParent,
/* 32519*/    OPC_RecordChild2, // #2 = $src0
/* 32520*/    OPC_Scope, 10, /*->32532*/ // 2 children in Scope
/* 32522*/      OPC_CheckChild2Type, MVT::i32,
/* 32524*/      OPC_EmitMergeInputChains1_0,
/* 32525*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_i32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_i32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0)
/* 32532*/    /*Scope*/ 10, /*->32543*/
/* 32533*/      OPC_CheckChild2Type, MVT::f32,
/* 32535*/      OPC_EmitMergeInputChains1_0,
/* 32536*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_f32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_f32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0)
/* 32543*/    0, /*End of Scope*/
/* 32544*/  /*SwitchOpcode*/ 83|128,5/*723*/, TARGET_VAL(ISD::FDIV),// ->33271
/* 32548*/    OPC_Scope, 85|128,1/*213*/, /*->32764*/ // 2 children in Scope
/* 32551*/      OPC_MoveChild0,
/* 32552*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 32555*/      OPC_CheckPredicate, 6, // Predicate_FP_ONE
/* 32557*/      OPC_MoveParent,
/* 32558*/      OPC_RecordChild1, // #0 = $src
/* 32559*/      OPC_CheckType, MVT::f32,
/* 32561*/      OPC_Scope, 66, /*->32629*/ // 3 children in Scope
/* 32563*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32565*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32568*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32571*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32574*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32577*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32580*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32583*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32586*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32598*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32601*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32604*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32607*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32610*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32629*/      /*Scope*/ 66, /*->32696*/
/* 32630*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32632*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32635*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32638*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32641*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32644*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32647*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32650*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32653*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32665*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32668*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32671*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32674*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32677*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32696*/      /*Scope*/ 66, /*->32763*/
/* 32697*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 32699*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32702*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32705*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32708*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32711*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32714*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32717*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32720*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32732*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32735*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32738*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32741*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32744*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32763*/      0, /*End of Scope*/
/* 32764*/    /*Scope*/ 120|128,3/*504*/, /*->33270*/
/* 32766*/      OPC_RecordChild0, // #0 = $src0
/* 32767*/      OPC_RecordChild1, // #1 = $src1
/* 32768*/      OPC_CheckType, MVT::f32,
/* 32770*/      OPC_Scope, 36|128,1/*164*/, /*->32937*/ // 3 children in Scope
/* 32773*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32775*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32778*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32781*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32784*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32787*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32790*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32793*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32796*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32799*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32802*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32814*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32817*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32820*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32823*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32826*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32829*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32832*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32835*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32847*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32850*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32853*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32856*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32859*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 32878*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32881*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32884*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32887*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32899*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32902*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32905*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32908*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32911*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_r600:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 32937*/      /*Scope*/ 36|128,1/*164*/, /*->33103*/
/* 32939*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32941*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32944*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32947*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32950*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32953*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32956*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32959*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32962*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32965*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32968*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32980*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32983*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32986*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32989*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32992*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32995*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32998*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33001*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33013*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33016*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33019*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33022*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33025*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 33044*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33047*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33050*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33053*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33065*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33068*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33071*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33074*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33077*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_eg:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 33103*/      /*Scope*/ 36|128,1/*164*/, /*->33269*/
/* 33105*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 33107*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33110*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33113*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33116*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33119*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33122*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33125*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33128*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33131*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33134*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33146*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33149*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33152*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33155*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33158*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33161*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33164*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33167*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33179*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33182*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33185*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33188*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33191*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 33210*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33213*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33216*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33219*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33231*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33234*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33237*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33240*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33243*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_cm:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 33269*/      0, /*End of Scope*/
/* 33270*/    0, /*End of Scope*/
/* 33271*/  /*SwitchOpcode*/ 39|128,3/*423*/, TARGET_VAL(AMDGPUISD::RCP),// ->33698
/* 33275*/    OPC_Scope, 83|128,1/*211*/, /*->33489*/ // 2 children in Scope
/* 33278*/      OPC_MoveChild0,
/* 33279*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 33282*/      OPC_RecordChild0, // #0 = $src
/* 33283*/      OPC_MoveParent,
/* 33284*/      OPC_CheckType, MVT::f32,
/* 33286*/      OPC_Scope, 66, /*->33354*/ // 3 children in Scope
/* 33288*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33290*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33293*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33296*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33299*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33302*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33305*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33308*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33311*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33323*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33326*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33329*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33332*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33335*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33354*/      /*Scope*/ 66, /*->33421*/
/* 33355*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33357*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33360*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33363*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33366*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33369*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33372*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33375*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33378*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33390*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33393*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33396*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33399*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33402*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33421*/      /*Scope*/ 66, /*->33488*/
/* 33422*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 33424*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33427*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33430*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33433*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33436*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33439*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33442*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33445*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33457*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33460*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33463*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33466*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33469*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33488*/      0, /*End of Scope*/
/* 33489*/    /*Scope*/ 78|128,1/*206*/, /*->33697*/
/* 33491*/      OPC_RecordChild0, // #0 = $src0
/* 33492*/      OPC_CheckType, MVT::f32,
/* 33494*/      OPC_Scope, 66, /*->33562*/ // 3 children in Scope
/* 33496*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33498*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33501*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33504*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33507*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33510*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33513*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33516*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33519*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33531*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33534*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33537*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33540*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33543*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33562*/      /*Scope*/ 66, /*->33629*/
/* 33563*/        OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33565*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33568*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33571*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33574*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33577*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33580*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33583*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33586*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33598*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33601*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33604*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33607*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33610*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33629*/      /*Scope*/ 66, /*->33696*/
/* 33630*/        OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 33632*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33635*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33638*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33641*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33644*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33647*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33650*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33653*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33665*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33668*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33671*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33674*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33677*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33696*/      0, /*End of Scope*/
/* 33697*/    0, /*End of Scope*/
/* 33698*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FADD),// ->33805
/* 33701*/    OPC_RecordChild0, // #0 = $src0
/* 33702*/    OPC_RecordChild1, // #1 = $src1
/* 33703*/    OPC_CheckType, MVT::f32,
/* 33705*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33707*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33710*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33713*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33716*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33719*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33722*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33725*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33728*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33731*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33734*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33746*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33749*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33752*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33755*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33767*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33770*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33773*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33776*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33779*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADD), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fadd:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (ADD:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 33805*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMUL),// ->33912
/* 33808*/    OPC_RecordChild0, // #0 = $src0
/* 33809*/    OPC_RecordChild1, // #1 = $src1
/* 33810*/    OPC_CheckType, MVT::f32,
/* 33812*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33814*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33817*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33820*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33823*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33826*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33829*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33832*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33835*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33838*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33841*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33853*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33856*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33859*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33862*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33874*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33877*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33880*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33883*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33886*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmul:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MUL_IEEE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 33912*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMAX_LEGACY),// ->34019
/* 33915*/    OPC_RecordChild0, // #0 = $src0
/* 33916*/    OPC_RecordChild1, // #1 = $src1
/* 33917*/    OPC_CheckType, MVT::f32,
/* 33919*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33921*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33924*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33927*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33930*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33933*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33936*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33939*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33942*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33945*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33948*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33960*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33963*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33966*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33969*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33981*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33984*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33987*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33990*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33993*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34019*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMIN_LEGACY),// ->34126
/* 34022*/    OPC_RecordChild0, // #0 = $src0
/* 34023*/    OPC_RecordChild1, // #1 = $src1
/* 34024*/    OPC_CheckType, MVT::f32,
/* 34026*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34028*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34031*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34034*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34037*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34040*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34043*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34046*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34049*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34052*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34055*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34067*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34070*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34073*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34076*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34088*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34091*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34094*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34097*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34100*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34126*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMAXNUM),// ->34233
/* 34129*/    OPC_RecordChild0, // #0 = $src0
/* 34130*/    OPC_RecordChild1, // #1 = $src1
/* 34131*/    OPC_CheckType, MVT::f32,
/* 34133*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34135*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34138*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34141*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34144*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34147*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34150*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34153*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34156*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34159*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34162*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34174*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34177*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34180*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34183*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34195*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34198*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34201*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34204*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34207*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmaxnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34233*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMINNUM),// ->34340
/* 34236*/    OPC_RecordChild0, // #0 = $src0
/* 34237*/    OPC_RecordChild1, // #1 = $src1
/* 34238*/    OPC_CheckType, MVT::f32,
/* 34240*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34242*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34245*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34248*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34251*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34254*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34257*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34260*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34263*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34266*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34269*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34281*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34284*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34287*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34290*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34302*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34305*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34308*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34311*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34314*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fminnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34340*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FRACT),// ->34412
/* 34343*/    OPC_RecordChild0, // #0 = $src0
/* 34344*/    OPC_CheckType, MVT::f32,
/* 34346*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34348*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34351*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34354*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34357*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34360*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34363*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34366*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34369*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34381*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34384*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34387*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34390*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34393*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34412*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FTRUNC),// ->34484
/* 34415*/    OPC_RecordChild0, // #0 = $src0
/* 34416*/    OPC_CheckType, MVT::f32,
/* 34418*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34420*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34423*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34426*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34429*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34432*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34435*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34438*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34441*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34453*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34456*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34459*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34462*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34465*/    OPC_MorphNodeTo1, TARGET_VAL(R600::TRUNC), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ftrunc:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (TRUNC:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34484*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FCEIL),// ->34556
/* 34487*/    OPC_RecordChild0, // #0 = $src0
/* 34488*/    OPC_CheckType, MVT::f32,
/* 34490*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34492*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34495*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34498*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34501*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34504*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34507*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34510*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34513*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34525*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34528*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34531*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34534*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34537*/    OPC_MorphNodeTo1, TARGET_VAL(R600::CEIL), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (CEIL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34556*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FRINT),// ->34628
/* 34559*/    OPC_RecordChild0, // #0 = $src0
/* 34560*/    OPC_CheckType, MVT::f32,
/* 34562*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34564*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34567*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34570*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34573*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34576*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34579*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34582*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34585*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34597*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34600*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34603*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34606*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34609*/    OPC_MorphNodeTo1, TARGET_VAL(R600::RNDNE), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (RNDNE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34628*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FFLOOR),// ->34700
/* 34631*/    OPC_RecordChild0, // #0 = $src0
/* 34632*/    OPC_CheckType, MVT::f32,
/* 34634*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34636*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34639*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34642*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34645*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34648*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34651*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34654*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34657*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34669*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34672*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34675*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34678*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34681*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLOOR), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLOOR:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34700*/  /*SwitchOpcode*/ 90|128,2/*346*/, TARGET_VAL(AMDGPUISD::DOT4),// ->35050
/* 34704*/    OPC_RecordChild0, // #0 = $src0_X
/* 34705*/    OPC_RecordChild1, // #1 = $src1_X
/* 34706*/    OPC_RecordChild2, // #2 = $src0_Y
/* 34707*/    OPC_RecordChild3, // #3 = $src1_Y
/* 34708*/    OPC_RecordChild4, // #4 = $src0_Z
/* 34709*/    OPC_RecordChild5, // #5 = $src1_Z
/* 34710*/    OPC_RecordChild6, // #6 = $src0_W
/* 34711*/    OPC_RecordChild7, // #7 = $src1_W
/* 34712*/    OPC_CheckType, MVT::f32,
/* 34714*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34716*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34719*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34722*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34725*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34728*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34731*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34734*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34737*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34740*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34743*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34755*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34758*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34761*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34764*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34776*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34779*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34782*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34785*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34788*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34791*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34794*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34797*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34800*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34803*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34806*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34818*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34821*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34824*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34827*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34839*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34842*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34845*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34848*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34851*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34854*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34857*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34860*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34863*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34866*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34869*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34881*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34884*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34887*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34890*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34902*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34905*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34908*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34911*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34914*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34917*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34920*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34923*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34926*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34929*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34932*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34944*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34947*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34950*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34953*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34965*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34968*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34971*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34974*/    OPC_MorphNodeTo1, TARGET_VAL(R600::DOT_4), 0,
                  MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
              // Src: (DOT4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W) - Complexity = 3
              // Dst: (DOT_4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W)
/* 35050*/  /*SwitchOpcode*/ 77|128,1/*205*/, TARGET_VAL(ISD::FMAD),// ->35259
/* 35054*/    OPC_RecordChild0, // #0 = $src0
/* 35055*/    OPC_RecordChild1, // #1 = $src1
/* 35056*/    OPC_RecordChild2, // #2 = $src2
/* 35057*/    OPC_CheckType, MVT::f32,
/* 35059*/    OPC_Scope, 98, /*->35159*/ // 2 children in Scope
/* 35061*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35063*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35066*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35069*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35072*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35075*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35087*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35090*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35093*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35111*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35123*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35126*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35129*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35132*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35135*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_r600), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 35159*/    /*Scope*/ 98, /*->35258*/
/* 35160*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35162*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35165*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35168*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35171*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35174*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35186*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35189*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35192*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35204*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35207*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35210*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35222*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35225*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35228*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35231*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35234*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_eg), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 35258*/    0, /*End of Scope*/
/* 35259*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FEXP2),// ->35469
/* 35263*/    OPC_RecordChild0, // #0 = $src0
/* 35264*/    OPC_CheckType, MVT::f32,
/* 35266*/    OPC_Scope, 66, /*->35334*/ // 3 children in Scope
/* 35268*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35270*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35282*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35288*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35291*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35303*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35306*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35309*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35312*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35315*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35334*/    /*Scope*/ 66, /*->35401*/
/* 35335*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35337*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35340*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35343*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35346*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35355*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35358*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35370*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35373*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35376*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35379*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35382*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35401*/    /*Scope*/ 66, /*->35468*/
/* 35402*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 35404*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35407*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35410*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35413*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35416*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35419*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35422*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35425*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35437*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35440*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35443*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35446*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35449*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35468*/    0, /*End of Scope*/
/* 35469*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FLOG2),// ->35679
/* 35473*/    OPC_RecordChild0, // #0 = $src0
/* 35474*/    OPC_CheckType, MVT::f32,
/* 35476*/    OPC_Scope, 66, /*->35544*/ // 3 children in Scope
/* 35478*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35480*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35483*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35486*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35489*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35492*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35495*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35498*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35501*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35513*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35516*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35522*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35525*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35544*/    /*Scope*/ 66, /*->35611*/
/* 35545*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35547*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35550*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35553*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35556*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35559*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35562*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35565*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35568*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35580*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35583*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35586*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35589*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35592*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35611*/    /*Scope*/ 66, /*->35678*/
/* 35612*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 35614*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35617*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35620*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35623*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35626*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35629*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35632*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35635*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35647*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35650*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35653*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35656*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35659*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35678*/    0, /*End of Scope*/
/* 35679*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ_CLAMP),// ->35889
/* 35683*/    OPC_RecordChild0, // #0 = $src0
/* 35684*/    OPC_CheckType, MVT::f32,
/* 35686*/    OPC_Scope, 66, /*->35754*/ // 3 children in Scope
/* 35688*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35690*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35693*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35696*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35699*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35702*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35705*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35708*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35711*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35723*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35726*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35729*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35732*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35735*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35754*/    /*Scope*/ 66, /*->35821*/
/* 35755*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35757*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35760*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35763*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35766*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35769*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35772*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35775*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35778*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35790*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35793*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35796*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35799*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35802*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35821*/    /*Scope*/ 66, /*->35888*/
/* 35822*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 35824*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35827*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35833*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35836*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35839*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35842*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35845*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35857*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35860*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35863*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35866*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35869*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35888*/    0, /*End of Scope*/
/* 35889*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ),// ->36099
/* 35893*/    OPC_RecordChild0, // #0 = $src0
/* 35894*/    OPC_CheckType, MVT::f32,
/* 35896*/    OPC_Scope, 66, /*->35964*/ // 3 children in Scope
/* 35898*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35900*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35903*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35906*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35909*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35912*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35915*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35918*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35921*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35933*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35936*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35939*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35942*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35945*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35964*/    /*Scope*/ 66, /*->36031*/
/* 35965*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35967*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35970*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35973*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35976*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35979*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35982*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35985*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35988*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36000*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36003*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36006*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36009*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36012*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 36031*/    /*Scope*/ 66, /*->36098*/
/* 36032*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 36034*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36037*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36040*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36043*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36046*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36049*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36052*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36055*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36067*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36070*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36073*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36076*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36079*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 36098*/    0, /*End of Scope*/
/* 36099*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::SINT_TO_FP),// ->36244
/* 36103*/    OPC_RecordChild0, // #0 = $src0
/* 36104*/    OPC_CheckChild0Type, MVT::i32,
/* 36106*/    OPC_CheckType, MVT::f32,
/* 36108*/    OPC_Scope, 66, /*->36176*/ // 2 children in Scope
/* 36110*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36112*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36115*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36118*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36121*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36124*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36127*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36130*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36133*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36145*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36148*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36157*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36176*/    /*Scope*/ 66, /*->36243*/
/* 36177*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36179*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36182*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36185*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36188*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36191*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36194*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36197*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36200*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36212*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36215*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36218*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36221*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36224*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36243*/    0, /*End of Scope*/
/* 36244*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::UINT_TO_FP),// ->36389
/* 36248*/    OPC_RecordChild0, // #0 = $src0
/* 36249*/    OPC_CheckChild0Type, MVT::i32,
/* 36251*/    OPC_CheckType, MVT::f32,
/* 36253*/    OPC_Scope, 66, /*->36321*/ // 2 children in Scope
/* 36255*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36257*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36260*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36263*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36266*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36269*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36272*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36275*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36278*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36290*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36293*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36296*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36299*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36302*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36321*/    /*Scope*/ 66, /*->36388*/
/* 36322*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36324*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36327*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36330*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36333*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36336*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36339*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36342*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36345*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36357*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36360*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36363*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36366*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36369*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36388*/    0, /*End of Scope*/
/* 36389*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::SIN_HW),// ->36668
/* 36393*/    OPC_RecordChild0, // #0 = $src0
/* 36394*/    OPC_CheckChild0Type, MVT::f32,
/* 36396*/    OPC_CheckType, MVT::f32,
/* 36398*/    OPC_Scope, 66, /*->36466*/ // 4 children in Scope
/* 36400*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36402*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36405*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36408*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36411*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36414*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36417*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36420*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36423*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36435*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36438*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36441*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36444*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36447*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36466*/    /*Scope*/ 66, /*->36533*/
/* 36467*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 36469*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36472*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36475*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36478*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36481*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36484*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36487*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36490*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36502*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36505*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36508*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36511*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36514*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36533*/    /*Scope*/ 66, /*->36600*/
/* 36534*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36536*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36542*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36545*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36548*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36551*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36554*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36557*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36569*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36572*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36575*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36578*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36581*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36600*/    /*Scope*/ 66, /*->36667*/
/* 36601*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 36603*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36612*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36615*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36618*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36621*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36624*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36636*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36639*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36642*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36648*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36667*/    0, /*End of Scope*/
/* 36668*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::COS_HW),// ->36947
/* 36672*/    OPC_RecordChild0, // #0 = $src0
/* 36673*/    OPC_CheckChild0Type, MVT::f32,
/* 36675*/    OPC_CheckType, MVT::f32,
/* 36677*/    OPC_Scope, 66, /*->36745*/ // 4 children in Scope
/* 36679*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36681*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36684*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36687*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36690*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36693*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36696*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36699*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36702*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36714*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36717*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36720*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36723*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36726*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36745*/    /*Scope*/ 66, /*->36812*/
/* 36746*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 36748*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36751*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36754*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36760*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36763*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36766*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36769*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36781*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36784*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36787*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36790*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36793*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36812*/    /*Scope*/ 66, /*->36879*/
/* 36813*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36815*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36818*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36824*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36827*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36833*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36836*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36848*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36851*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36854*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36857*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36860*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36879*/    /*Scope*/ 66, /*->36946*/
/* 36880*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 36882*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36885*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36888*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36891*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36894*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36897*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36900*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36903*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36915*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36918*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36921*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36924*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36927*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36946*/    0, /*End of Scope*/
/* 36947*/  /*SwitchOpcode*/ 103, TARGET_VAL(ISD::FMA),// ->37053
/* 36950*/    OPC_RecordChild0, // #0 = $src0
/* 36951*/    OPC_RecordChild1, // #1 = $src1
/* 36952*/    OPC_RecordChild2, // #2 = $src2
/* 36953*/    OPC_CheckType, MVT::f32,
/* 36955*/    OPC_CheckPatternPredicate, 6, // (Subtarget->hasFMA()) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36957*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36960*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36963*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36966*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36969*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36981*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36984*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36987*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36999*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37002*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37005*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37017*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37020*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37023*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37026*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37029*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FMA_eg), 0,
                  MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (fma:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
              // Dst: (FMA_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 37053*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::FP16_TO_FP),// ->37127
/* 37056*/    OPC_RecordChild0, // #0 = $src0
/* 37057*/    OPC_CheckChild0Type, MVT::i32,
/* 37059*/    OPC_CheckType, MVT::f32,
/* 37061*/    OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37063*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37066*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37069*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37072*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37075*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37078*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37081*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37084*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37096*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37099*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37102*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37105*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37108*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT16_TO_FLT32), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (f16_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FLT16_TO_FLT32:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 37127*/  /*SwitchOpcode*/ 119|128,3/*503*/, TARGET_VAL(ISD::FSQRT),// ->37634
/* 37131*/    OPC_RecordChild0, // #0 = $src
/* 37132*/    OPC_CheckType, MVT::f32,
/* 37134*/    OPC_Scope, 36|128,1/*164*/, /*->37301*/ // 3 children in Scope
/* 37137*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 37139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37142*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37145*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37160*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37166*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37178*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37181*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37184*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37187*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37190*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37193*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37196*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37199*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37211*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37214*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37217*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37220*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37223*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37242*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37245*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37248*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37251*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37263*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37266*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37269*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37272*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37275*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_r600:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37301*/    /*Scope*/ 36|128,1/*164*/, /*->37467*/
/* 37303*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 37305*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37308*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37311*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37314*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37317*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37320*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37323*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37326*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37332*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37344*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37347*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37350*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37353*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37356*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37359*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37362*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37365*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37377*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37380*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37383*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37386*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37389*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37408*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37411*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37414*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37417*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37429*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37432*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37435*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37438*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37441*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_eg:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37467*/    /*Scope*/ 36|128,1/*164*/, /*->37633*/
/* 37469*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 37471*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37474*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37477*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37480*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37483*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37486*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37489*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37492*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37495*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37498*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37510*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37513*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37516*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37522*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37525*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37528*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37531*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37543*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37546*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37549*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37552*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37555*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37574*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37577*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37580*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37583*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37595*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37598*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37601*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37604*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37607*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_cm:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37633*/    0, /*End of Scope*/
/* 37634*/  /*SwitchOpcode*/ 56|128,5/*696*/, TARGET_VAL(ISD::FPOW),// ->38334
/* 37638*/    OPC_RecordChild0, // #0 = $src0
/* 37639*/    OPC_RecordChild1, // #1 = $src1
/* 37640*/    OPC_CheckType, MVT::f32,
/* 37642*/    OPC_Scope, 100|128,1/*228*/, /*->37873*/ // 3 children in Scope
/* 37645*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 37647*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37650*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37653*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37656*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37659*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37662*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37665*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37668*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37671*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37674*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37677*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37680*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37683*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37686*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37698*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37701*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37704*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37707*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37710*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37713*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37716*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37719*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37731*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37734*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37743*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 37762*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37765*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37768*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37771*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37783*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37786*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37789*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37792*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37795*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 37821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37824*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37827*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37830*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37842*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37845*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37848*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37851*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37854*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_r600:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 37873*/    /*Scope*/ 100|128,1/*228*/, /*->38103*/
/* 37875*/      OPC_CheckPatternPredicate, 4, // (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 37877*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37880*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37883*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37886*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37889*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37892*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37895*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37898*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37901*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37904*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37907*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37910*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37913*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37916*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37928*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37931*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37934*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37946*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37949*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37961*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37964*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37967*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37970*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37973*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 37992*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37995*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37998*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38001*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38013*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38016*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38019*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38022*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38025*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 38051*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38054*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38057*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38060*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38072*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38075*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38078*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38081*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38084*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_eg:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 38103*/    /*Scope*/ 100|128,1/*228*/, /*->38333*/
/* 38105*/      OPC_CheckPatternPredicate, 3, // (true) && (Subtarget->hasCaymanISA())
/* 38107*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38110*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38113*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38116*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38119*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38122*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38125*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38134*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38137*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38140*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38143*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38146*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38158*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38161*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38164*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38167*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38170*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38173*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38176*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38179*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38191*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38194*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38197*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38200*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38203*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 38222*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38225*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38228*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38231*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38243*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38246*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38255*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 38281*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38284*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38287*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38290*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38302*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38305*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38308*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38311*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38314*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_cm:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 38333*/    0, /*End of Scope*/
/* 38334*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::ConstantFP),// ->38351
/* 38337*/    OPC_RecordNode, // #0 = $val
/* 38338*/    OPC_CheckType, MVT::f32,
/* 38340*/    OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38342*/    OPC_EmitConvertToTarget, 0,
/* 38344*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_F32), 0,
                  MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:{ *:[f32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_F32:{ *:[f32] } (fpimm:{ *:[f32] }):$val)
/* 38351*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FABS),// ->38364
/* 38354*/    OPC_RecordChild0, // #0 = $src0
/* 38355*/    OPC_CheckType, MVT::f32,
/* 38357*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FABS_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FABS_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 38364*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FNEG),// ->38377
/* 38367*/    OPC_RecordChild0, // #0 = $src0
/* 38368*/    OPC_CheckType, MVT::f32,
/* 38370*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FNEG_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FNEG_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 38377*/  /*SwitchOpcode*/ 68|128,4/*580*/, TARGET_VAL(ISD::FCOPYSIGN),// ->38961
/* 38381*/    OPC_RecordChild0, // #0 = $src0
/* 38382*/    OPC_RecordChild1, // #1 = $src1
/* 38383*/    OPC_Scope, 19|128,2/*275*/, /*->38661*/ // 2 children in Scope
/* 38386*/      OPC_CheckChild1Type, MVT::f32,
/* 38388*/      OPC_SwitchType /*2 cases */, 112, MVT::f32,// ->38503
/* 38391*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38393*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38396*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38399*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38406*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 38413*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38416*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38419*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38431*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38434*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38437*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38449*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38452*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38455*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38467*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38470*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38473*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38476*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38479*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, ?:{ *:[f32] }:$src1)
/* 38503*/      /*SwitchType*/ 26|128,1/*154*/, MVT::f64,// ->38660
/* 38506*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38508*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 38511*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38514*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 38522*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38525*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38528*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38531*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38538*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 38545*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38548*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38551*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38563*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38566*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 38574*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38577*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38580*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38592*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38595*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38598*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38610*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38613*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38616*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38619*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38622*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 38646*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38649*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 25, 26, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub1:{ *:[i32] }), ?:{ *:[f32] }:$src1), sub1:{ *:[i32] })
/* 38660*/      0, // EndSwitchType
/* 38661*/    /*Scope*/ 41|128,2/*297*/, /*->38960*/
/* 38663*/      OPC_CheckChild1Type, MVT::f64,
/* 38665*/      OPC_SwitchType /*2 cases */, 123, MVT::f32,// ->38791
/* 38668*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38670*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38673*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38676*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38683*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 38690*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38693*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38696*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38708*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38711*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38714*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38726*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38729*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 38737*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38740*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38743*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38755*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38758*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38761*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38764*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38767*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src1, sub1:{ *:[i32] }))
/* 38791*/      /*SwitchType*/ 37|128,1/*165*/, MVT::f64,// ->38959
/* 38794*/        OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38796*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 38799*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38802*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 38810*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38813*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38816*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38819*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38826*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 38833*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38836*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38839*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38851*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38854*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 38862*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38865*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38868*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38880*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38883*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19
/* 38891*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38894*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38897*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38909*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38912*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38915*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38918*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38921*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 38945*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38948*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 27, 28, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src1, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 38959*/      0, // EndSwitchType
/* 38960*/    0, /*End of Scope*/
/* 38961*/  /*SwitchOpcode*/ 36|128,2/*292*/, TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->39257
/* 38965*/    OPC_RecordChild0, // #0 = $vec
/* 38966*/    OPC_RecordChild1, // #1 = $elem
/* 38967*/    OPC_Scope, 36, /*->39005*/ // 10 children in Scope
/* 38969*/      OPC_CheckChild2Integer, 0, 
/* 38971*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->38988
/* 38974*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38976*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38979*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 38988*/      /*SwitchType*/ 14, MVT::v2i32,// ->39004
/* 38990*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38992*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38995*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 39004*/      0, // EndSwitchType
/* 39005*/    /*Scope*/ 36, /*->39042*/
/* 39006*/      OPC_CheckChild2Integer, 1, 
/* 39008*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->39025
/* 39011*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39013*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39016*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 39025*/      /*SwitchType*/ 14, MVT::v2i32,// ->39041
/* 39027*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39029*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39032*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 39041*/      0, // EndSwitchType
/* 39042*/    /*Scope*/ 18, /*->39061*/
/* 39043*/      OPC_CheckChild2Integer, 2, 
/* 39045*/      OPC_CheckType, MVT::v4i32,
/* 39047*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39049*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 39052*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub2:{ *:[i32] })
/* 39061*/    /*Scope*/ 18, /*->39080*/
/* 39062*/      OPC_CheckChild2Integer, 3, 
/* 39064*/      OPC_CheckType, MVT::v4i32,
/* 39066*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39068*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 39071*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub3:{ *:[i32] })
/* 39080*/    /*Scope*/ 31, /*->39112*/
/* 39081*/      OPC_RecordChild2, // #2 = $index
/* 39082*/      OPC_CheckChild2Type, MVT::i32,
/* 39084*/      OPC_SwitchType /*2 cases */, 11, MVT::v2i32,// ->39098
/* 39087*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39089*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 39098*/      /*SwitchType*/ 11, MVT::v4i32,// ->39111
/* 39100*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39102*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 39111*/      0, // EndSwitchType
/* 39112*/    /*Scope*/ 36, /*->39149*/
/* 39113*/      OPC_CheckChild2Integer, 0, 
/* 39115*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->39132
/* 39118*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39120*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 39123*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 39132*/      /*SwitchType*/ 14, MVT::v2f32,// ->39148
/* 39134*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39136*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 39139*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 39148*/      0, // EndSwitchType
/* 39149*/    /*Scope*/ 36, /*->39186*/
/* 39150*/      OPC_CheckChild2Integer, 1, 
/* 39152*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->39169
/* 39155*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39157*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39160*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 39169*/      /*SwitchType*/ 14, MVT::v2f32,// ->39185
/* 39171*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39173*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39176*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 39185*/      0, // EndSwitchType
/* 39186*/    /*Scope*/ 18, /*->39205*/
/* 39187*/      OPC_CheckChild2Integer, 2, 
/* 39189*/      OPC_CheckType, MVT::v4f32,
/* 39191*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39193*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 39196*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub2:{ *:[i32] })
/* 39205*/    /*Scope*/ 18, /*->39224*/
/* 39206*/      OPC_CheckChild2Integer, 3, 
/* 39208*/      OPC_CheckType, MVT::v4f32,
/* 39210*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39212*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 39215*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub3:{ *:[i32] })
/* 39224*/    /*Scope*/ 31, /*->39256*/
/* 39225*/      OPC_RecordChild2, // #2 = $index
/* 39226*/      OPC_CheckChild2Type, MVT::i32,
/* 39228*/      OPC_SwitchType /*2 cases */, 11, MVT::v2f32,// ->39242
/* 39231*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39233*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 39242*/      /*SwitchType*/ 11, MVT::v4f32,// ->39255
/* 39244*/        OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39246*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 39255*/      0, // EndSwitchType
/* 39256*/    0, /*End of Scope*/
/* 39257*/  /*SwitchOpcode*/ 96|128,18/*2400*/, TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->41661
/* 39261*/    OPC_Scope, 88|128,1/*216*/, /*->39480*/ // 11 children in Scope
/* 39264*/      OPC_CheckChild0Integer, 0, 
/* 39266*/      OPC_CheckChild0Type, MVT::i32,
/* 39268*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39269*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39271*/      OPC_RecordChild2, // #1 = $srcx
/* 39272*/      OPC_MoveChild2,
/* 39273*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39276*/      OPC_CheckType, MVT::i32,
/* 39278*/      OPC_MoveParent,
/* 39279*/      OPC_RecordChild3, // #2 = $srcy
/* 39280*/      OPC_MoveChild3,
/* 39281*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39284*/      OPC_CheckType, MVT::i32,
/* 39286*/      OPC_MoveParent,
/* 39287*/      OPC_RecordChild4, // #3 = $srcz
/* 39288*/      OPC_MoveChild4,
/* 39289*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39292*/      OPC_CheckType, MVT::i32,
/* 39294*/      OPC_MoveParent,
/* 39295*/      OPC_RecordChild5, // #4 = $srcw
/* 39296*/      OPC_MoveChild5,
/* 39297*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39300*/      OPC_CheckType, MVT::i32,
/* 39302*/      OPC_MoveParent,
/* 39303*/      OPC_RecordChild6, // #5 = $offsetx
/* 39304*/      OPC_MoveChild6,
/* 39305*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39308*/      OPC_CheckType, MVT::i32,
/* 39310*/      OPC_MoveParent,
/* 39311*/      OPC_RecordChild7, // #6 = $offsety
/* 39312*/      OPC_MoveChild7,
/* 39313*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39316*/      OPC_CheckType, MVT::i32,
/* 39318*/      OPC_MoveParent,
/* 39319*/      OPC_MoveChild, 8,
/* 39321*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39324*/      OPC_RecordNode, // #7 = $offsetz
/* 39325*/      OPC_CheckType, MVT::i32,
/* 39327*/      OPC_MoveParent,
/* 39328*/      OPC_MoveChild, 9,
/* 39330*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39333*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39334*/      OPC_CheckType, MVT::i32,
/* 39336*/      OPC_MoveParent,
/* 39337*/      OPC_MoveChild, 10,
/* 39339*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39342*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39343*/      OPC_CheckType, MVT::i32,
/* 39345*/      OPC_MoveParent,
/* 39346*/      OPC_MoveChild, 11,
/* 39348*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39351*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39352*/      OPC_CheckType, MVT::i32,
/* 39354*/      OPC_MoveParent,
/* 39355*/      OPC_MoveChild, 12,
/* 39357*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39360*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39361*/      OPC_CheckType, MVT::i32,
/* 39363*/      OPC_MoveParent,
/* 39364*/      OPC_MoveChild, 13,
/* 39366*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39369*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39370*/      OPC_CheckType, MVT::i32,
/* 39372*/      OPC_MoveParent,
/* 39373*/      OPC_MoveChild, 14,
/* 39375*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39378*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39379*/      OPC_CheckType, MVT::i32,
/* 39381*/      OPC_MoveParent,
/* 39382*/      OPC_MoveChild, 15,
/* 39384*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39387*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39388*/      OPC_CheckType, MVT::i32,
/* 39390*/      OPC_MoveParent,
/* 39391*/      OPC_MoveChild, 16,
/* 39393*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39396*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39397*/      OPC_CheckType, MVT::i32,
/* 39399*/      OPC_MoveParent,
/* 39400*/      OPC_MoveChild, 17,
/* 39402*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39405*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39406*/      OPC_CheckType, MVT::i32,
/* 39408*/      OPC_MoveParent,
/* 39409*/      OPC_MoveChild, 18,
/* 39411*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39414*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39415*/      OPC_CheckType, MVT::i32,
/* 39417*/      OPC_MoveParent,
/* 39418*/      OPC_CheckType, MVT::v4f32,
/* 39420*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39422*/      OPC_EmitConvertToTarget, 1,
/* 39424*/      OPC_EmitConvertToTarget, 2,
/* 39426*/      OPC_EmitConvertToTarget, 3,
/* 39428*/      OPC_EmitConvertToTarget, 4,
/* 39430*/      OPC_EmitConvertToTarget, 5,
/* 39432*/      OPC_EmitConvertToTarget, 6,
/* 39434*/      OPC_EmitConvertToTarget, 7,
/* 39436*/      OPC_EmitConvertToTarget, 8,
/* 39438*/      OPC_EmitConvertToTarget, 9,
/* 39440*/      OPC_EmitConvertToTarget, 10,
/* 39442*/      OPC_EmitConvertToTarget, 11,
/* 39444*/      OPC_EmitConvertToTarget, 12,
/* 39446*/      OPC_EmitConvertToTarget, 13,
/* 39448*/      OPC_EmitConvertToTarget, 14,
/* 39450*/      OPC_EmitConvertToTarget, 15,
/* 39452*/      OPC_EmitConvertToTarget, 16,
/* 39454*/      OPC_EmitConvertToTarget, 17,
/* 39456*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 0:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39480*/    /*Scope*/ 88|128,1/*216*/, /*->39698*/
/* 39482*/      OPC_CheckChild0Integer, 1, 
/* 39484*/      OPC_CheckChild0Type, MVT::i32,
/* 39486*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39487*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39489*/      OPC_RecordChild2, // #1 = $srcx
/* 39490*/      OPC_MoveChild2,
/* 39491*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39494*/      OPC_CheckType, MVT::i32,
/* 39496*/      OPC_MoveParent,
/* 39497*/      OPC_RecordChild3, // #2 = $srcy
/* 39498*/      OPC_MoveChild3,
/* 39499*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39502*/      OPC_CheckType, MVT::i32,
/* 39504*/      OPC_MoveParent,
/* 39505*/      OPC_RecordChild4, // #3 = $srcz
/* 39506*/      OPC_MoveChild4,
/* 39507*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39510*/      OPC_CheckType, MVT::i32,
/* 39512*/      OPC_MoveParent,
/* 39513*/      OPC_RecordChild5, // #4 = $srcw
/* 39514*/      OPC_MoveChild5,
/* 39515*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39518*/      OPC_CheckType, MVT::i32,
/* 39520*/      OPC_MoveParent,
/* 39521*/      OPC_RecordChild6, // #5 = $offsetx
/* 39522*/      OPC_MoveChild6,
/* 39523*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39526*/      OPC_CheckType, MVT::i32,
/* 39528*/      OPC_MoveParent,
/* 39529*/      OPC_RecordChild7, // #6 = $offsety
/* 39530*/      OPC_MoveChild7,
/* 39531*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39534*/      OPC_CheckType, MVT::i32,
/* 39536*/      OPC_MoveParent,
/* 39537*/      OPC_MoveChild, 8,
/* 39539*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39542*/      OPC_RecordNode, // #7 = $offsetz
/* 39543*/      OPC_CheckType, MVT::i32,
/* 39545*/      OPC_MoveParent,
/* 39546*/      OPC_MoveChild, 9,
/* 39548*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39551*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39552*/      OPC_CheckType, MVT::i32,
/* 39554*/      OPC_MoveParent,
/* 39555*/      OPC_MoveChild, 10,
/* 39557*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39560*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39561*/      OPC_CheckType, MVT::i32,
/* 39563*/      OPC_MoveParent,
/* 39564*/      OPC_MoveChild, 11,
/* 39566*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39569*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39570*/      OPC_CheckType, MVT::i32,
/* 39572*/      OPC_MoveParent,
/* 39573*/      OPC_MoveChild, 12,
/* 39575*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39578*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39579*/      OPC_CheckType, MVT::i32,
/* 39581*/      OPC_MoveParent,
/* 39582*/      OPC_MoveChild, 13,
/* 39584*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39587*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39588*/      OPC_CheckType, MVT::i32,
/* 39590*/      OPC_MoveParent,
/* 39591*/      OPC_MoveChild, 14,
/* 39593*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39596*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39597*/      OPC_CheckType, MVT::i32,
/* 39599*/      OPC_MoveParent,
/* 39600*/      OPC_MoveChild, 15,
/* 39602*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39605*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39606*/      OPC_CheckType, MVT::i32,
/* 39608*/      OPC_MoveParent,
/* 39609*/      OPC_MoveChild, 16,
/* 39611*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39614*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39615*/      OPC_CheckType, MVT::i32,
/* 39617*/      OPC_MoveParent,
/* 39618*/      OPC_MoveChild, 17,
/* 39620*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39623*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39624*/      OPC_CheckType, MVT::i32,
/* 39626*/      OPC_MoveParent,
/* 39627*/      OPC_MoveChild, 18,
/* 39629*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39632*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39633*/      OPC_CheckType, MVT::i32,
/* 39635*/      OPC_MoveParent,
/* 39636*/      OPC_CheckType, MVT::v4f32,
/* 39638*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39640*/      OPC_EmitConvertToTarget, 1,
/* 39642*/      OPC_EmitConvertToTarget, 2,
/* 39644*/      OPC_EmitConvertToTarget, 3,
/* 39646*/      OPC_EmitConvertToTarget, 4,
/* 39648*/      OPC_EmitConvertToTarget, 5,
/* 39650*/      OPC_EmitConvertToTarget, 6,
/* 39652*/      OPC_EmitConvertToTarget, 7,
/* 39654*/      OPC_EmitConvertToTarget, 8,
/* 39656*/      OPC_EmitConvertToTarget, 9,
/* 39658*/      OPC_EmitConvertToTarget, 10,
/* 39660*/      OPC_EmitConvertToTarget, 11,
/* 39662*/      OPC_EmitConvertToTarget, 12,
/* 39664*/      OPC_EmitConvertToTarget, 13,
/* 39666*/      OPC_EmitConvertToTarget, 14,
/* 39668*/      OPC_EmitConvertToTarget, 15,
/* 39670*/      OPC_EmitConvertToTarget, 16,
/* 39672*/      OPC_EmitConvertToTarget, 17,
/* 39674*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 1:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39698*/    /*Scope*/ 88|128,1/*216*/, /*->39916*/
/* 39700*/      OPC_CheckChild0Integer, 2, 
/* 39702*/      OPC_CheckChild0Type, MVT::i32,
/* 39704*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39705*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39707*/      OPC_RecordChild2, // #1 = $srcx
/* 39708*/      OPC_MoveChild2,
/* 39709*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39712*/      OPC_CheckType, MVT::i32,
/* 39714*/      OPC_MoveParent,
/* 39715*/      OPC_RecordChild3, // #2 = $srcy
/* 39716*/      OPC_MoveChild3,
/* 39717*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39720*/      OPC_CheckType, MVT::i32,
/* 39722*/      OPC_MoveParent,
/* 39723*/      OPC_RecordChild4, // #3 = $srcz
/* 39724*/      OPC_MoveChild4,
/* 39725*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39728*/      OPC_CheckType, MVT::i32,
/* 39730*/      OPC_MoveParent,
/* 39731*/      OPC_RecordChild5, // #4 = $srcw
/* 39732*/      OPC_MoveChild5,
/* 39733*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39736*/      OPC_CheckType, MVT::i32,
/* 39738*/      OPC_MoveParent,
/* 39739*/      OPC_RecordChild6, // #5 = $offsetx
/* 39740*/      OPC_MoveChild6,
/* 39741*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39744*/      OPC_CheckType, MVT::i32,
/* 39746*/      OPC_MoveParent,
/* 39747*/      OPC_RecordChild7, // #6 = $offsety
/* 39748*/      OPC_MoveChild7,
/* 39749*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39752*/      OPC_CheckType, MVT::i32,
/* 39754*/      OPC_MoveParent,
/* 39755*/      OPC_MoveChild, 8,
/* 39757*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39760*/      OPC_RecordNode, // #7 = $offsetz
/* 39761*/      OPC_CheckType, MVT::i32,
/* 39763*/      OPC_MoveParent,
/* 39764*/      OPC_MoveChild, 9,
/* 39766*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39769*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39770*/      OPC_CheckType, MVT::i32,
/* 39772*/      OPC_MoveParent,
/* 39773*/      OPC_MoveChild, 10,
/* 39775*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39778*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39779*/      OPC_CheckType, MVT::i32,
/* 39781*/      OPC_MoveParent,
/* 39782*/      OPC_MoveChild, 11,
/* 39784*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39787*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39788*/      OPC_CheckType, MVT::i32,
/* 39790*/      OPC_MoveParent,
/* 39791*/      OPC_MoveChild, 12,
/* 39793*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39796*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39797*/      OPC_CheckType, MVT::i32,
/* 39799*/      OPC_MoveParent,
/* 39800*/      OPC_MoveChild, 13,
/* 39802*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39805*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39806*/      OPC_CheckType, MVT::i32,
/* 39808*/      OPC_MoveParent,
/* 39809*/      OPC_MoveChild, 14,
/* 39811*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39814*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39815*/      OPC_CheckType, MVT::i32,
/* 39817*/      OPC_MoveParent,
/* 39818*/      OPC_MoveChild, 15,
/* 39820*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39823*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39824*/      OPC_CheckType, MVT::i32,
/* 39826*/      OPC_MoveParent,
/* 39827*/      OPC_MoveChild, 16,
/* 39829*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39832*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39833*/      OPC_CheckType, MVT::i32,
/* 39835*/      OPC_MoveParent,
/* 39836*/      OPC_MoveChild, 17,
/* 39838*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39841*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39842*/      OPC_CheckType, MVT::i32,
/* 39844*/      OPC_MoveParent,
/* 39845*/      OPC_MoveChild, 18,
/* 39847*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39850*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39851*/      OPC_CheckType, MVT::i32,
/* 39853*/      OPC_MoveParent,
/* 39854*/      OPC_CheckType, MVT::v4f32,
/* 39856*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39858*/      OPC_EmitConvertToTarget, 1,
/* 39860*/      OPC_EmitConvertToTarget, 2,
/* 39862*/      OPC_EmitConvertToTarget, 3,
/* 39864*/      OPC_EmitConvertToTarget, 4,
/* 39866*/      OPC_EmitConvertToTarget, 5,
/* 39868*/      OPC_EmitConvertToTarget, 6,
/* 39870*/      OPC_EmitConvertToTarget, 7,
/* 39872*/      OPC_EmitConvertToTarget, 8,
/* 39874*/      OPC_EmitConvertToTarget, 9,
/* 39876*/      OPC_EmitConvertToTarget, 10,
/* 39878*/      OPC_EmitConvertToTarget, 11,
/* 39880*/      OPC_EmitConvertToTarget, 12,
/* 39882*/      OPC_EmitConvertToTarget, 13,
/* 39884*/      OPC_EmitConvertToTarget, 14,
/* 39886*/      OPC_EmitConvertToTarget, 15,
/* 39888*/      OPC_EmitConvertToTarget, 16,
/* 39890*/      OPC_EmitConvertToTarget, 17,
/* 39892*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 2:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39916*/    /*Scope*/ 88|128,1/*216*/, /*->40134*/
/* 39918*/      OPC_CheckChild0Integer, 3, 
/* 39920*/      OPC_CheckChild0Type, MVT::i32,
/* 39922*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39923*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39925*/      OPC_RecordChild2, // #1 = $srcx
/* 39926*/      OPC_MoveChild2,
/* 39927*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39930*/      OPC_CheckType, MVT::i32,
/* 39932*/      OPC_MoveParent,
/* 39933*/      OPC_RecordChild3, // #2 = $srcy
/* 39934*/      OPC_MoveChild3,
/* 39935*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39938*/      OPC_CheckType, MVT::i32,
/* 39940*/      OPC_MoveParent,
/* 39941*/      OPC_RecordChild4, // #3 = $srcz
/* 39942*/      OPC_MoveChild4,
/* 39943*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39946*/      OPC_CheckType, MVT::i32,
/* 39948*/      OPC_MoveParent,
/* 39949*/      OPC_RecordChild5, // #4 = $srcw
/* 39950*/      OPC_MoveChild5,
/* 39951*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39954*/      OPC_CheckType, MVT::i32,
/* 39956*/      OPC_MoveParent,
/* 39957*/      OPC_RecordChild6, // #5 = $offsetx
/* 39958*/      OPC_MoveChild6,
/* 39959*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39962*/      OPC_CheckType, MVT::i32,
/* 39964*/      OPC_MoveParent,
/* 39965*/      OPC_RecordChild7, // #6 = $offsety
/* 39966*/      OPC_MoveChild7,
/* 39967*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39970*/      OPC_CheckType, MVT::i32,
/* 39972*/      OPC_MoveParent,
/* 39973*/      OPC_MoveChild, 8,
/* 39975*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39978*/      OPC_RecordNode, // #7 = $offsetz
/* 39979*/      OPC_CheckType, MVT::i32,
/* 39981*/      OPC_MoveParent,
/* 39982*/      OPC_MoveChild, 9,
/* 39984*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39987*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39988*/      OPC_CheckType, MVT::i32,
/* 39990*/      OPC_MoveParent,
/* 39991*/      OPC_MoveChild, 10,
/* 39993*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39996*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39997*/      OPC_CheckType, MVT::i32,
/* 39999*/      OPC_MoveParent,
/* 40000*/      OPC_MoveChild, 11,
/* 40002*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40005*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40006*/      OPC_CheckType, MVT::i32,
/* 40008*/      OPC_MoveParent,
/* 40009*/      OPC_MoveChild, 12,
/* 40011*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40014*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40015*/      OPC_CheckType, MVT::i32,
/* 40017*/      OPC_MoveParent,
/* 40018*/      OPC_MoveChild, 13,
/* 40020*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40023*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40024*/      OPC_CheckType, MVT::i32,
/* 40026*/      OPC_MoveParent,
/* 40027*/      OPC_MoveChild, 14,
/* 40029*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40032*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40033*/      OPC_CheckType, MVT::i32,
/* 40035*/      OPC_MoveParent,
/* 40036*/      OPC_MoveChild, 15,
/* 40038*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40041*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40042*/      OPC_CheckType, MVT::i32,
/* 40044*/      OPC_MoveParent,
/* 40045*/      OPC_MoveChild, 16,
/* 40047*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40050*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40051*/      OPC_CheckType, MVT::i32,
/* 40053*/      OPC_MoveParent,
/* 40054*/      OPC_MoveChild, 17,
/* 40056*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40059*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40060*/      OPC_CheckType, MVT::i32,
/* 40062*/      OPC_MoveParent,
/* 40063*/      OPC_MoveChild, 18,
/* 40065*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40068*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40069*/      OPC_CheckType, MVT::i32,
/* 40071*/      OPC_MoveParent,
/* 40072*/      OPC_CheckType, MVT::v4f32,
/* 40074*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40076*/      OPC_EmitConvertToTarget, 1,
/* 40078*/      OPC_EmitConvertToTarget, 2,
/* 40080*/      OPC_EmitConvertToTarget, 3,
/* 40082*/      OPC_EmitConvertToTarget, 4,
/* 40084*/      OPC_EmitConvertToTarget, 5,
/* 40086*/      OPC_EmitConvertToTarget, 6,
/* 40088*/      OPC_EmitConvertToTarget, 7,
/* 40090*/      OPC_EmitConvertToTarget, 8,
/* 40092*/      OPC_EmitConvertToTarget, 9,
/* 40094*/      OPC_EmitConvertToTarget, 10,
/* 40096*/      OPC_EmitConvertToTarget, 11,
/* 40098*/      OPC_EmitConvertToTarget, 12,
/* 40100*/      OPC_EmitConvertToTarget, 13,
/* 40102*/      OPC_EmitConvertToTarget, 14,
/* 40104*/      OPC_EmitConvertToTarget, 15,
/* 40106*/      OPC_EmitConvertToTarget, 16,
/* 40108*/      OPC_EmitConvertToTarget, 17,
/* 40110*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 3:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40134*/    /*Scope*/ 88|128,1/*216*/, /*->40352*/
/* 40136*/      OPC_CheckChild0Integer, 4, 
/* 40138*/      OPC_CheckChild0Type, MVT::i32,
/* 40140*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40141*/      OPC_CheckChild1Type, MVT::v4f32,
/* 40143*/      OPC_RecordChild2, // #1 = $srcx
/* 40144*/      OPC_MoveChild2,
/* 40145*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40148*/      OPC_CheckType, MVT::i32,
/* 40150*/      OPC_MoveParent,
/* 40151*/      OPC_RecordChild3, // #2 = $srcy
/* 40152*/      OPC_MoveChild3,
/* 40153*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40156*/      OPC_CheckType, MVT::i32,
/* 40158*/      OPC_MoveParent,
/* 40159*/      OPC_RecordChild4, // #3 = $srcz
/* 40160*/      OPC_MoveChild4,
/* 40161*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40164*/      OPC_CheckType, MVT::i32,
/* 40166*/      OPC_MoveParent,
/* 40167*/      OPC_RecordChild5, // #4 = $srcw
/* 40168*/      OPC_MoveChild5,
/* 40169*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40172*/      OPC_CheckType, MVT::i32,
/* 40174*/      OPC_MoveParent,
/* 40175*/      OPC_RecordChild6, // #5 = $offsetx
/* 40176*/      OPC_MoveChild6,
/* 40177*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40180*/      OPC_CheckType, MVT::i32,
/* 40182*/      OPC_MoveParent,
/* 40183*/      OPC_RecordChild7, // #6 = $offsety
/* 40184*/      OPC_MoveChild7,
/* 40185*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40188*/      OPC_CheckType, MVT::i32,
/* 40190*/      OPC_MoveParent,
/* 40191*/      OPC_MoveChild, 8,
/* 40193*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40196*/      OPC_RecordNode, // #7 = $offsetz
/* 40197*/      OPC_CheckType, MVT::i32,
/* 40199*/      OPC_MoveParent,
/* 40200*/      OPC_MoveChild, 9,
/* 40202*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40205*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40206*/      OPC_CheckType, MVT::i32,
/* 40208*/      OPC_MoveParent,
/* 40209*/      OPC_MoveChild, 10,
/* 40211*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40214*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40215*/      OPC_CheckType, MVT::i32,
/* 40217*/      OPC_MoveParent,
/* 40218*/      OPC_MoveChild, 11,
/* 40220*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40223*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40224*/      OPC_CheckType, MVT::i32,
/* 40226*/      OPC_MoveParent,
/* 40227*/      OPC_MoveChild, 12,
/* 40229*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40232*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40233*/      OPC_CheckType, MVT::i32,
/* 40235*/      OPC_MoveParent,
/* 40236*/      OPC_MoveChild, 13,
/* 40238*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40241*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40242*/      OPC_CheckType, MVT::i32,
/* 40244*/      OPC_MoveParent,
/* 40245*/      OPC_MoveChild, 14,
/* 40247*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40250*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40251*/      OPC_CheckType, MVT::i32,
/* 40253*/      OPC_MoveParent,
/* 40254*/      OPC_MoveChild, 15,
/* 40256*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40259*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40260*/      OPC_CheckType, MVT::i32,
/* 40262*/      OPC_MoveParent,
/* 40263*/      OPC_MoveChild, 16,
/* 40265*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40268*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40269*/      OPC_CheckType, MVT::i32,
/* 40271*/      OPC_MoveParent,
/* 40272*/      OPC_MoveChild, 17,
/* 40274*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40277*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40278*/      OPC_CheckType, MVT::i32,
/* 40280*/      OPC_MoveParent,
/* 40281*/      OPC_MoveChild, 18,
/* 40283*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40286*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40287*/      OPC_CheckType, MVT::i32,
/* 40289*/      OPC_MoveParent,
/* 40290*/      OPC_CheckType, MVT::v4f32,
/* 40292*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40294*/      OPC_EmitConvertToTarget, 1,
/* 40296*/      OPC_EmitConvertToTarget, 2,
/* 40298*/      OPC_EmitConvertToTarget, 3,
/* 40300*/      OPC_EmitConvertToTarget, 4,
/* 40302*/      OPC_EmitConvertToTarget, 5,
/* 40304*/      OPC_EmitConvertToTarget, 6,
/* 40306*/      OPC_EmitConvertToTarget, 7,
/* 40308*/      OPC_EmitConvertToTarget, 8,
/* 40310*/      OPC_EmitConvertToTarget, 9,
/* 40312*/      OPC_EmitConvertToTarget, 10,
/* 40314*/      OPC_EmitConvertToTarget, 11,
/* 40316*/      OPC_EmitConvertToTarget, 12,
/* 40318*/      OPC_EmitConvertToTarget, 13,
/* 40320*/      OPC_EmitConvertToTarget, 14,
/* 40322*/      OPC_EmitConvertToTarget, 15,
/* 40324*/      OPC_EmitConvertToTarget, 16,
/* 40326*/      OPC_EmitConvertToTarget, 17,
/* 40328*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 4:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40352*/    /*Scope*/ 88|128,1/*216*/, /*->40570*/
/* 40354*/      OPC_CheckChild0Integer, 5, 
/* 40356*/      OPC_CheckChild0Type, MVT::i32,
/* 40358*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40359*/      OPC_CheckChild1Type, MVT::v4f32,
/* 40361*/      OPC_RecordChild2, // #1 = $srcx
/* 40362*/      OPC_MoveChild2,
/* 40363*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40366*/      OPC_CheckType, MVT::i32,
/* 40368*/      OPC_MoveParent,
/* 40369*/      OPC_RecordChild3, // #2 = $srcy
/* 40370*/      OPC_MoveChild3,
/* 40371*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40374*/      OPC_CheckType, MVT::i32,
/* 40376*/      OPC_MoveParent,
/* 40377*/      OPC_RecordChild4, // #3 = $srcz
/* 40378*/      OPC_MoveChild4,
/* 40379*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40382*/      OPC_CheckType, MVT::i32,
/* 40384*/      OPC_MoveParent,
/* 40385*/      OPC_RecordChild5, // #4 = $srcw
/* 40386*/      OPC_MoveChild5,
/* 40387*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40390*/      OPC_CheckType, MVT::i32,
/* 40392*/      OPC_MoveParent,
/* 40393*/      OPC_RecordChild6, // #5 = $offsetx
/* 40394*/      OPC_MoveChild6,
/* 40395*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40398*/      OPC_CheckType, MVT::i32,
/* 40400*/      OPC_MoveParent,
/* 40401*/      OPC_RecordChild7, // #6 = $offsety
/* 40402*/      OPC_MoveChild7,
/* 40403*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40406*/      OPC_CheckType, MVT::i32,
/* 40408*/      OPC_MoveParent,
/* 40409*/      OPC_MoveChild, 8,
/* 40411*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40414*/      OPC_RecordNode, // #7 = $offsetz
/* 40415*/      OPC_CheckType, MVT::i32,
/* 40417*/      OPC_MoveParent,
/* 40418*/      OPC_MoveChild, 9,
/* 40420*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40423*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40424*/      OPC_CheckType, MVT::i32,
/* 40426*/      OPC_MoveParent,
/* 40427*/      OPC_MoveChild, 10,
/* 40429*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40432*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40433*/      OPC_CheckType, MVT::i32,
/* 40435*/      OPC_MoveParent,
/* 40436*/      OPC_MoveChild, 11,
/* 40438*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40441*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40442*/      OPC_CheckType, MVT::i32,
/* 40444*/      OPC_MoveParent,
/* 40445*/      OPC_MoveChild, 12,
/* 40447*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40450*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40451*/      OPC_CheckType, MVT::i32,
/* 40453*/      OPC_MoveParent,
/* 40454*/      OPC_MoveChild, 13,
/* 40456*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40459*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40460*/      OPC_CheckType, MVT::i32,
/* 40462*/      OPC_MoveParent,
/* 40463*/      OPC_MoveChild, 14,
/* 40465*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40468*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40469*/      OPC_CheckType, MVT::i32,
/* 40471*/      OPC_MoveParent,
/* 40472*/      OPC_MoveChild, 15,
/* 40474*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40477*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40478*/      OPC_CheckType, MVT::i32,
/* 40480*/      OPC_MoveParent,
/* 40481*/      OPC_MoveChild, 16,
/* 40483*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40486*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40487*/      OPC_CheckType, MVT::i32,
/* 40489*/      OPC_MoveParent,
/* 40490*/      OPC_MoveChild, 17,
/* 40492*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40495*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40496*/      OPC_CheckType, MVT::i32,
/* 40498*/      OPC_MoveParent,
/* 40499*/      OPC_MoveChild, 18,
/* 40501*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40504*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40505*/      OPC_CheckType, MVT::i32,
/* 40507*/      OPC_MoveParent,
/* 40508*/      OPC_CheckType, MVT::v4f32,
/* 40510*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40512*/      OPC_EmitConvertToTarget, 1,
/* 40514*/      OPC_EmitConvertToTarget, 2,
/* 40516*/      OPC_EmitConvertToTarget, 3,
/* 40518*/      OPC_EmitConvertToTarget, 4,
/* 40520*/      OPC_EmitConvertToTarget, 5,
/* 40522*/      OPC_EmitConvertToTarget, 6,
/* 40524*/      OPC_EmitConvertToTarget, 7,
/* 40526*/      OPC_EmitConvertToTarget, 8,
/* 40528*/      OPC_EmitConvertToTarget, 9,
/* 40530*/      OPC_EmitConvertToTarget, 10,
/* 40532*/      OPC_EmitConvertToTarget, 11,
/* 40534*/      OPC_EmitConvertToTarget, 12,
/* 40536*/      OPC_EmitConvertToTarget, 13,
/* 40538*/      OPC_EmitConvertToTarget, 14,
/* 40540*/      OPC_EmitConvertToTarget, 15,
/* 40542*/      OPC_EmitConvertToTarget, 16,
/* 40544*/      OPC_EmitConvertToTarget, 17,
/* 40546*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 5:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40570*/    /*Scope*/ 88|128,1/*216*/, /*->40788*/
/* 40572*/      OPC_CheckChild0Integer, 6, 
/* 40574*/      OPC_CheckChild0Type, MVT::i32,
/* 40576*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40577*/      OPC_CheckChild1Type, MVT::v4i32,
/* 40579*/      OPC_RecordChild2, // #1 = $srcx
/* 40580*/      OPC_MoveChild2,
/* 40581*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40584*/      OPC_CheckType, MVT::i32,
/* 40586*/      OPC_MoveParent,
/* 40587*/      OPC_RecordChild3, // #2 = $srcy
/* 40588*/      OPC_MoveChild3,
/* 40589*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40592*/      OPC_CheckType, MVT::i32,
/* 40594*/      OPC_MoveParent,
/* 40595*/      OPC_RecordChild4, // #3 = $srcz
/* 40596*/      OPC_MoveChild4,
/* 40597*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40600*/      OPC_CheckType, MVT::i32,
/* 40602*/      OPC_MoveParent,
/* 40603*/      OPC_RecordChild5, // #4 = $srcw
/* 40604*/      OPC_MoveChild5,
/* 40605*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40608*/      OPC_CheckType, MVT::i32,
/* 40610*/      OPC_MoveParent,
/* 40611*/      OPC_RecordChild6, // #5 = $offsetx
/* 40612*/      OPC_MoveChild6,
/* 40613*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40616*/      OPC_CheckType, MVT::i32,
/* 40618*/      OPC_MoveParent,
/* 40619*/      OPC_RecordChild7, // #6 = $offsety
/* 40620*/      OPC_MoveChild7,
/* 40621*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40624*/      OPC_CheckType, MVT::i32,
/* 40626*/      OPC_MoveParent,
/* 40627*/      OPC_MoveChild, 8,
/* 40629*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40632*/      OPC_RecordNode, // #7 = $offsetz
/* 40633*/      OPC_CheckType, MVT::i32,
/* 40635*/      OPC_MoveParent,
/* 40636*/      OPC_MoveChild, 9,
/* 40638*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40641*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40642*/      OPC_CheckType, MVT::i32,
/* 40644*/      OPC_MoveParent,
/* 40645*/      OPC_MoveChild, 10,
/* 40647*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40650*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40651*/      OPC_CheckType, MVT::i32,
/* 40653*/      OPC_MoveParent,
/* 40654*/      OPC_MoveChild, 11,
/* 40656*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40659*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40660*/      OPC_CheckType, MVT::i32,
/* 40662*/      OPC_MoveParent,
/* 40663*/      OPC_MoveChild, 12,
/* 40665*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40668*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40669*/      OPC_CheckType, MVT::i32,
/* 40671*/      OPC_MoveParent,
/* 40672*/      OPC_MoveChild, 13,
/* 40674*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40677*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40678*/      OPC_CheckType, MVT::i32,
/* 40680*/      OPC_MoveParent,
/* 40681*/      OPC_MoveChild, 14,
/* 40683*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40686*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40687*/      OPC_CheckType, MVT::i32,
/* 40689*/      OPC_MoveParent,
/* 40690*/      OPC_MoveChild, 15,
/* 40692*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40695*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40696*/      OPC_CheckType, MVT::i32,
/* 40698*/      OPC_MoveParent,
/* 40699*/      OPC_MoveChild, 16,
/* 40701*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40704*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40705*/      OPC_CheckType, MVT::i32,
/* 40707*/      OPC_MoveParent,
/* 40708*/      OPC_MoveChild, 17,
/* 40710*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40713*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40714*/      OPC_CheckType, MVT::i32,
/* 40716*/      OPC_MoveParent,
/* 40717*/      OPC_MoveChild, 18,
/* 40719*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40722*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40723*/      OPC_CheckType, MVT::i32,
/* 40725*/      OPC_MoveParent,
/* 40726*/      OPC_CheckType, MVT::v4f32,
/* 40728*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40730*/      OPC_EmitConvertToTarget, 1,
/* 40732*/      OPC_EmitConvertToTarget, 2,
/* 40734*/      OPC_EmitConvertToTarget, 3,
/* 40736*/      OPC_EmitConvertToTarget, 4,
/* 40738*/      OPC_EmitConvertToTarget, 5,
/* 40740*/      OPC_EmitConvertToTarget, 6,
/* 40742*/      OPC_EmitConvertToTarget, 7,
/* 40744*/      OPC_EmitConvertToTarget, 8,
/* 40746*/      OPC_EmitConvertToTarget, 9,
/* 40748*/      OPC_EmitConvertToTarget, 10,
/* 40750*/      OPC_EmitConvertToTarget, 11,
/* 40752*/      OPC_EmitConvertToTarget, 12,
/* 40754*/      OPC_EmitConvertToTarget, 13,
/* 40756*/      OPC_EmitConvertToTarget, 14,
/* 40758*/      OPC_EmitConvertToTarget, 15,
/* 40760*/      OPC_EmitConvertToTarget, 16,
/* 40762*/      OPC_EmitConvertToTarget, 17,
/* 40764*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LD), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 6:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LD:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40788*/    /*Scope*/ 88|128,1/*216*/, /*->41006*/
/* 40790*/      OPC_CheckChild0Integer, 7, 
/* 40792*/      OPC_CheckChild0Type, MVT::i32,
/* 40794*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40795*/      OPC_CheckChild1Type, MVT::v4i32,
/* 40797*/      OPC_RecordChild2, // #1 = $srcx
/* 40798*/      OPC_MoveChild2,
/* 40799*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40802*/      OPC_CheckType, MVT::i32,
/* 40804*/      OPC_MoveParent,
/* 40805*/      OPC_RecordChild3, // #2 = $srcy
/* 40806*/      OPC_MoveChild3,
/* 40807*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40810*/      OPC_CheckType, MVT::i32,
/* 40812*/      OPC_MoveParent,
/* 40813*/      OPC_RecordChild4, // #3 = $srcz
/* 40814*/      OPC_MoveChild4,
/* 40815*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40818*/      OPC_CheckType, MVT::i32,
/* 40820*/      OPC_MoveParent,
/* 40821*/      OPC_RecordChild5, // #4 = $srcw
/* 40822*/      OPC_MoveChild5,
/* 40823*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40826*/      OPC_CheckType, MVT::i32,
/* 40828*/      OPC_MoveParent,
/* 40829*/      OPC_RecordChild6, // #5 = $offsetx
/* 40830*/      OPC_MoveChild6,
/* 40831*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40834*/      OPC_CheckType, MVT::i32,
/* 40836*/      OPC_MoveParent,
/* 40837*/      OPC_RecordChild7, // #6 = $offsety
/* 40838*/      OPC_MoveChild7,
/* 40839*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40842*/      OPC_CheckType, MVT::i32,
/* 40844*/      OPC_MoveParent,
/* 40845*/      OPC_MoveChild, 8,
/* 40847*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40850*/      OPC_RecordNode, // #7 = $offsetz
/* 40851*/      OPC_CheckType, MVT::i32,
/* 40853*/      OPC_MoveParent,
/* 40854*/      OPC_MoveChild, 9,
/* 40856*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40859*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40860*/      OPC_CheckType, MVT::i32,
/* 40862*/      OPC_MoveParent,
/* 40863*/      OPC_MoveChild, 10,
/* 40865*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40868*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40869*/      OPC_CheckType, MVT::i32,
/* 40871*/      OPC_MoveParent,
/* 40872*/      OPC_MoveChild, 11,
/* 40874*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40877*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40878*/      OPC_CheckType, MVT::i32,
/* 40880*/      OPC_MoveParent,
/* 40881*/      OPC_MoveChild, 12,
/* 40883*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40886*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40887*/      OPC_CheckType, MVT::i32,
/* 40889*/      OPC_MoveParent,
/* 40890*/      OPC_MoveChild, 13,
/* 40892*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40895*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40896*/      OPC_CheckType, MVT::i32,
/* 40898*/      OPC_MoveParent,
/* 40899*/      OPC_MoveChild, 14,
/* 40901*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40904*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40905*/      OPC_CheckType, MVT::i32,
/* 40907*/      OPC_MoveParent,
/* 40908*/      OPC_MoveChild, 15,
/* 40910*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40913*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40914*/      OPC_CheckType, MVT::i32,
/* 40916*/      OPC_MoveParent,
/* 40917*/      OPC_MoveChild, 16,
/* 40919*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40922*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40923*/      OPC_CheckType, MVT::i32,
/* 40925*/      OPC_MoveParent,
/* 40926*/      OPC_MoveChild, 17,
/* 40928*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40931*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40932*/      OPC_CheckType, MVT::i32,
/* 40934*/      OPC_MoveParent,
/* 40935*/      OPC_MoveChild, 18,
/* 40937*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40940*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40941*/      OPC_CheckType, MVT::i32,
/* 40943*/      OPC_MoveParent,
/* 40944*/      OPC_CheckType, MVT::v4f32,
/* 40946*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40948*/      OPC_EmitConvertToTarget, 1,
/* 40950*/      OPC_EmitConvertToTarget, 2,
/* 40952*/      OPC_EmitConvertToTarget, 3,
/* 40954*/      OPC_EmitConvertToTarget, 4,
/* 40956*/      OPC_EmitConvertToTarget, 5,
/* 40958*/      OPC_EmitConvertToTarget, 6,
/* 40960*/      OPC_EmitConvertToTarget, 7,
/* 40962*/      OPC_EmitConvertToTarget, 8,
/* 40964*/      OPC_EmitConvertToTarget, 9,
/* 40966*/      OPC_EmitConvertToTarget, 10,
/* 40968*/      OPC_EmitConvertToTarget, 11,
/* 40970*/      OPC_EmitConvertToTarget, 12,
/* 40972*/      OPC_EmitConvertToTarget, 13,
/* 40974*/      OPC_EmitConvertToTarget, 14,
/* 40976*/      OPC_EmitConvertToTarget, 15,
/* 40978*/      OPC_EmitConvertToTarget, 16,
/* 40980*/      OPC_EmitConvertToTarget, 17,
/* 40982*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_TEXTURE_RESINFO), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 7:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_TEXTURE_RESINFO:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41006*/    /*Scope*/ 88|128,1/*216*/, /*->41224*/
/* 41008*/      OPC_CheckChild0Integer, 8, 
/* 41010*/      OPC_CheckChild0Type, MVT::i32,
/* 41012*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 41013*/      OPC_CheckChild1Type, MVT::v4f32,
/* 41015*/      OPC_RecordChild2, // #1 = $srcx
/* 41016*/      OPC_MoveChild2,
/* 41017*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41020*/      OPC_CheckType, MVT::i32,
/* 41022*/      OPC_MoveParent,
/* 41023*/      OPC_RecordChild3, // #2 = $srcy
/* 41024*/      OPC_MoveChild3,
/* 41025*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41028*/      OPC_CheckType, MVT::i32,
/* 41030*/      OPC_MoveParent,
/* 41031*/      OPC_RecordChild4, // #3 = $srcz
/* 41032*/      OPC_MoveChild4,
/* 41033*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41036*/      OPC_CheckType, MVT::i32,
/* 41038*/      OPC_MoveParent,
/* 41039*/      OPC_RecordChild5, // #4 = $srcw
/* 41040*/      OPC_MoveChild5,
/* 41041*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41044*/      OPC_CheckType, MVT::i32,
/* 41046*/      OPC_MoveParent,
/* 41047*/      OPC_RecordChild6, // #5 = $offsetx
/* 41048*/      OPC_MoveChild6,
/* 41049*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41052*/      OPC_CheckType, MVT::i32,
/* 41054*/      OPC_MoveParent,
/* 41055*/      OPC_RecordChild7, // #6 = $offsety
/* 41056*/      OPC_MoveChild7,
/* 41057*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41060*/      OPC_CheckType, MVT::i32,
/* 41062*/      OPC_MoveParent,
/* 41063*/      OPC_MoveChild, 8,
/* 41065*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41068*/      OPC_RecordNode, // #7 = $offsetz
/* 41069*/      OPC_CheckType, MVT::i32,
/* 41071*/      OPC_MoveParent,
/* 41072*/      OPC_MoveChild, 9,
/* 41074*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41077*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41078*/      OPC_CheckType, MVT::i32,
/* 41080*/      OPC_MoveParent,
/* 41081*/      OPC_MoveChild, 10,
/* 41083*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41086*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41087*/      OPC_CheckType, MVT::i32,
/* 41089*/      OPC_MoveParent,
/* 41090*/      OPC_MoveChild, 11,
/* 41092*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41095*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41096*/      OPC_CheckType, MVT::i32,
/* 41098*/      OPC_MoveParent,
/* 41099*/      OPC_MoveChild, 12,
/* 41101*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41104*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41105*/      OPC_CheckType, MVT::i32,
/* 41107*/      OPC_MoveParent,
/* 41108*/      OPC_MoveChild, 13,
/* 41110*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41113*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41114*/      OPC_CheckType, MVT::i32,
/* 41116*/      OPC_MoveParent,
/* 41117*/      OPC_MoveChild, 14,
/* 41119*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41122*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41123*/      OPC_CheckType, MVT::i32,
/* 41125*/      OPC_MoveParent,
/* 41126*/      OPC_MoveChild, 15,
/* 41128*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41131*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41132*/      OPC_CheckType, MVT::i32,
/* 41134*/      OPC_MoveParent,
/* 41135*/      OPC_MoveChild, 16,
/* 41137*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41140*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41141*/      OPC_CheckType, MVT::i32,
/* 41143*/      OPC_MoveParent,
/* 41144*/      OPC_MoveChild, 17,
/* 41146*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41149*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41150*/      OPC_CheckType, MVT::i32,
/* 41152*/      OPC_MoveParent,
/* 41153*/      OPC_MoveChild, 18,
/* 41155*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41158*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41159*/      OPC_CheckType, MVT::i32,
/* 41161*/      OPC_MoveParent,
/* 41162*/      OPC_CheckType, MVT::v4f32,
/* 41164*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41166*/      OPC_EmitConvertToTarget, 1,
/* 41168*/      OPC_EmitConvertToTarget, 2,
/* 41170*/      OPC_EmitConvertToTarget, 3,
/* 41172*/      OPC_EmitConvertToTarget, 4,
/* 41174*/      OPC_EmitConvertToTarget, 5,
/* 41176*/      OPC_EmitConvertToTarget, 6,
/* 41178*/      OPC_EmitConvertToTarget, 7,
/* 41180*/      OPC_EmitConvertToTarget, 8,
/* 41182*/      OPC_EmitConvertToTarget, 9,
/* 41184*/      OPC_EmitConvertToTarget, 10,
/* 41186*/      OPC_EmitConvertToTarget, 11,
/* 41188*/      OPC_EmitConvertToTarget, 12,
/* 41190*/      OPC_EmitConvertToTarget, 13,
/* 41192*/      OPC_EmitConvertToTarget, 14,
/* 41194*/      OPC_EmitConvertToTarget, 15,
/* 41196*/      OPC_EmitConvertToTarget, 16,
/* 41198*/      OPC_EmitConvertToTarget, 17,
/* 41200*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_H), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 8:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_H:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41224*/    /*Scope*/ 88|128,1/*216*/, /*->41442*/
/* 41226*/      OPC_CheckChild0Integer, 9, 
/* 41228*/      OPC_CheckChild0Type, MVT::i32,
/* 41230*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 41231*/      OPC_CheckChild1Type, MVT::v4f32,
/* 41233*/      OPC_RecordChild2, // #1 = $srcx
/* 41234*/      OPC_MoveChild2,
/* 41235*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41238*/      OPC_CheckType, MVT::i32,
/* 41240*/      OPC_MoveParent,
/* 41241*/      OPC_RecordChild3, // #2 = $srcy
/* 41242*/      OPC_MoveChild3,
/* 41243*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41246*/      OPC_CheckType, MVT::i32,
/* 41248*/      OPC_MoveParent,
/* 41249*/      OPC_RecordChild4, // #3 = $srcz
/* 41250*/      OPC_MoveChild4,
/* 41251*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41254*/      OPC_CheckType, MVT::i32,
/* 41256*/      OPC_MoveParent,
/* 41257*/      OPC_RecordChild5, // #4 = $srcw
/* 41258*/      OPC_MoveChild5,
/* 41259*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41262*/      OPC_CheckType, MVT::i32,
/* 41264*/      OPC_MoveParent,
/* 41265*/      OPC_RecordChild6, // #5 = $offsetx
/* 41266*/      OPC_MoveChild6,
/* 41267*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41270*/      OPC_CheckType, MVT::i32,
/* 41272*/      OPC_MoveParent,
/* 41273*/      OPC_RecordChild7, // #6 = $offsety
/* 41274*/      OPC_MoveChild7,
/* 41275*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41278*/      OPC_CheckType, MVT::i32,
/* 41280*/      OPC_MoveParent,
/* 41281*/      OPC_MoveChild, 8,
/* 41283*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41286*/      OPC_RecordNode, // #7 = $offsetz
/* 41287*/      OPC_CheckType, MVT::i32,
/* 41289*/      OPC_MoveParent,
/* 41290*/      OPC_MoveChild, 9,
/* 41292*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41295*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41296*/      OPC_CheckType, MVT::i32,
/* 41298*/      OPC_MoveParent,
/* 41299*/      OPC_MoveChild, 10,
/* 41301*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41304*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41305*/      OPC_CheckType, MVT::i32,
/* 41307*/      OPC_MoveParent,
/* 41308*/      OPC_MoveChild, 11,
/* 41310*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41313*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41314*/      OPC_CheckType, MVT::i32,
/* 41316*/      OPC_MoveParent,
/* 41317*/      OPC_MoveChild, 12,
/* 41319*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41322*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41323*/      OPC_CheckType, MVT::i32,
/* 41325*/      OPC_MoveParent,
/* 41326*/      OPC_MoveChild, 13,
/* 41328*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41331*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41332*/      OPC_CheckType, MVT::i32,
/* 41334*/      OPC_MoveParent,
/* 41335*/      OPC_MoveChild, 14,
/* 41337*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41340*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41341*/      OPC_CheckType, MVT::i32,
/* 41343*/      OPC_MoveParent,
/* 41344*/      OPC_MoveChild, 15,
/* 41346*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41349*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41350*/      OPC_CheckType, MVT::i32,
/* 41352*/      OPC_MoveParent,
/* 41353*/      OPC_MoveChild, 16,
/* 41355*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41358*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41359*/      OPC_CheckType, MVT::i32,
/* 41361*/      OPC_MoveParent,
/* 41362*/      OPC_MoveChild, 17,
/* 41364*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41367*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41368*/      OPC_CheckType, MVT::i32,
/* 41370*/      OPC_MoveParent,
/* 41371*/      OPC_MoveChild, 18,
/* 41373*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41376*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41377*/      OPC_CheckType, MVT::i32,
/* 41379*/      OPC_MoveParent,
/* 41380*/      OPC_CheckType, MVT::v4f32,
/* 41382*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41384*/      OPC_EmitConvertToTarget, 1,
/* 41386*/      OPC_EmitConvertToTarget, 2,
/* 41388*/      OPC_EmitConvertToTarget, 3,
/* 41390*/      OPC_EmitConvertToTarget, 4,
/* 41392*/      OPC_EmitConvertToTarget, 5,
/* 41394*/      OPC_EmitConvertToTarget, 6,
/* 41396*/      OPC_EmitConvertToTarget, 7,
/* 41398*/      OPC_EmitConvertToTarget, 8,
/* 41400*/      OPC_EmitConvertToTarget, 9,
/* 41402*/      OPC_EmitConvertToTarget, 10,
/* 41404*/      OPC_EmitConvertToTarget, 11,
/* 41406*/      OPC_EmitConvertToTarget, 12,
/* 41408*/      OPC_EmitConvertToTarget, 13,
/* 41410*/      OPC_EmitConvertToTarget, 14,
/* 41412*/      OPC_EmitConvertToTarget, 15,
/* 41414*/      OPC_EmitConvertToTarget, 16,
/* 41416*/      OPC_EmitConvertToTarget, 17,
/* 41418*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_V), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 9:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_V:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41442*/    /*Scope*/ 88|128,1/*216*/, /*->41660*/
/* 41444*/      OPC_CheckChild0Integer, 10, 
/* 41446*/      OPC_CheckChild0Type, MVT::i32,
/* 41448*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 41449*/      OPC_CheckChild1Type, MVT::v4i32,
/* 41451*/      OPC_RecordChild2, // #1 = $srcx
/* 41452*/      OPC_MoveChild2,
/* 41453*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41456*/      OPC_CheckType, MVT::i32,
/* 41458*/      OPC_MoveParent,
/* 41459*/      OPC_RecordChild3, // #2 = $srcy
/* 41460*/      OPC_MoveChild3,
/* 41461*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41464*/      OPC_CheckType, MVT::i32,
/* 41466*/      OPC_MoveParent,
/* 41467*/      OPC_RecordChild4, // #3 = $srcz
/* 41468*/      OPC_MoveChild4,
/* 41469*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41472*/      OPC_CheckType, MVT::i32,
/* 41474*/      OPC_MoveParent,
/* 41475*/      OPC_RecordChild5, // #4 = $srcw
/* 41476*/      OPC_MoveChild5,
/* 41477*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41480*/      OPC_CheckType, MVT::i32,
/* 41482*/      OPC_MoveParent,
/* 41483*/      OPC_RecordChild6, // #5 = $offsetx
/* 41484*/      OPC_MoveChild6,
/* 41485*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41488*/      OPC_CheckType, MVT::i32,
/* 41490*/      OPC_MoveParent,
/* 41491*/      OPC_RecordChild7, // #6 = $offsety
/* 41492*/      OPC_MoveChild7,
/* 41493*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41496*/      OPC_CheckType, MVT::i32,
/* 41498*/      OPC_MoveParent,
/* 41499*/      OPC_MoveChild, 8,
/* 41501*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41504*/      OPC_RecordNode, // #7 = $offsetz
/* 41505*/      OPC_CheckType, MVT::i32,
/* 41507*/      OPC_MoveParent,
/* 41508*/      OPC_MoveChild, 9,
/* 41510*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41513*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41514*/      OPC_CheckType, MVT::i32,
/* 41516*/      OPC_MoveParent,
/* 41517*/      OPC_MoveChild, 10,
/* 41519*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41522*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41523*/      OPC_CheckType, MVT::i32,
/* 41525*/      OPC_MoveParent,
/* 41526*/      OPC_MoveChild, 11,
/* 41528*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41531*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41532*/      OPC_CheckType, MVT::i32,
/* 41534*/      OPC_MoveParent,
/* 41535*/      OPC_MoveChild, 12,
/* 41537*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41540*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41541*/      OPC_CheckType, MVT::i32,
/* 41543*/      OPC_MoveParent,
/* 41544*/      OPC_MoveChild, 13,
/* 41546*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41549*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41550*/      OPC_CheckType, MVT::i32,
/* 41552*/      OPC_MoveParent,
/* 41553*/      OPC_MoveChild, 14,
/* 41555*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41558*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41559*/      OPC_CheckType, MVT::i32,
/* 41561*/      OPC_MoveParent,
/* 41562*/      OPC_MoveChild, 15,
/* 41564*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41567*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41568*/      OPC_CheckType, MVT::i32,
/* 41570*/      OPC_MoveParent,
/* 41571*/      OPC_MoveChild, 16,
/* 41573*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41576*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41577*/      OPC_CheckType, MVT::i32,
/* 41579*/      OPC_MoveParent,
/* 41580*/      OPC_MoveChild, 17,
/* 41582*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41585*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41586*/      OPC_CheckType, MVT::i32,
/* 41588*/      OPC_MoveParent,
/* 41589*/      OPC_MoveChild, 18,
/* 41591*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41594*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41595*/      OPC_CheckType, MVT::i32,
/* 41597*/      OPC_MoveParent,
/* 41598*/      OPC_CheckType, MVT::v4f32,
/* 41600*/      OPC_CheckPatternPredicate, 2, // (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41602*/      OPC_EmitConvertToTarget, 1,
/* 41604*/      OPC_EmitConvertToTarget, 2,
/* 41606*/      OPC_EmitConvertToTarget, 3,
/* 41608*/      OPC_EmitConvertToTarget, 4,
/* 41610*/      OPC_EmitConvertToTarget, 5,
/* 41612*/      OPC_EmitConvertToTarget, 6,
/* 41614*/      OPC_EmitConvertToTarget, 7,
/* 41616*/      OPC_EmitConvertToTarget, 8,
/* 41618*/      OPC_EmitConvertToTarget, 9,
/* 41620*/      OPC_EmitConvertToTarget, 10,
/* 41622*/      OPC_EmitConvertToTarget, 11,
/* 41624*/      OPC_EmitConvertToTarget, 12,
/* 41626*/      OPC_EmitConvertToTarget, 13,
/* 41628*/      OPC_EmitConvertToTarget, 14,
/* 41630*/      OPC_EmitConvertToTarget, 15,
/* 41632*/      OPC_EmitConvertToTarget, 16,
/* 41634*/      OPC_EmitConvertToTarget, 17,
/* 41636*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LDPTR), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 10:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LDPTR:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41660*/    0, /*End of Scope*/
/* 41661*/  /*SwitchOpcode*/ 26, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->41690
/* 41664*/    OPC_CheckChild0Integer, 18|128,41/*5266*/, 
/* 41667*/    OPC_RecordChild1, // #0 = $src0
/* 41668*/    OPC_Scope, 9, /*->41679*/ // 2 children in Scope
/* 41670*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 41672*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_r600_pseudo), 0,
                    MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5266:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 41679*/    /*Scope*/ 9, /*->41689*/
/* 41680*/      OPC_CheckPatternPredicate, 0, // (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41682*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_eg_pseudo), 0,
                    MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5266:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 41689*/    0, /*End of Scope*/
/* 41690*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 41692 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 139
  // #OPC_RecordNode                           = 145
  // #OPC_RecordChild                          = 385
  // #OPC_RecordMemRef                         = 14
  // #OPC_CaptureGlueInput                     = 1
  // #OPC_MoveChild                            = 285
  // #OPC_MoveParent                           = 376
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 90
  // #OPC_CheckPatternPredicate                = 359
  // #OPC_CheckPredicate                       = 145
  // #OPC_CheckOpcode                          = 279
  // #OPC_SwitchOpcode                         = 5
  // #OPC_CheckType                            = 406
  // #OPC_SwitchType                           = 16
  // #OPC_CheckChildType                       = 90
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 79
  // #OPC_CheckCondCode                        = 9
  // #OPC_CheckValueType                       = 3
  // #OPC_CheckComplexPat                      = 36
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 4758
  // #OPC_EmitStringInteger                    = 383
  // #OPC_EmitRegister                         = 342
  // #OPC_EmitConvertToTarget                  = 220
  // #OPC_EmitMergeInputChains                 = 94
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 428
  // #OPC_EmitNodeXForm                        = 1
  // #OPC_CompleteMatch                        = 7
  // #OPC_MorphNodeTo                          = 365

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 1: return (Subtarget->getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (true) && (Subtarget->hasCaymanISA());
  case 4: return (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA());
  case 5: return (Subtarget->getGeneration() == AMDGPUSubtarget::R700);
  case 6: return (Subtarget->hasFMA()) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_shl_oneuse
    // Predicate_add_oneuse
    // Predicate_xor_oneuse
    // Predicate_srl_oneuse
    SDNode *N = Node;
    (void)N;
 return N->hasOneUse(); 
  }
  case 1: { 
    // Predicate_IMMZeroBasedBitfieldMask
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

  return isMask_32(N->getZExtValue());

  }
  case 2: { 
    // Predicate_COND_OEQ
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOEQ || N->get() == ISD::SETEQ;
  }
  case 3: { 
    // Predicate_COND_OGT
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOGT || N->get() == ISD::SETGT;
  }
  case 4: { 
    // Predicate_COND_OGE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOGE || N->get() == ISD::SETGE;
  }
  case 5: { 
    // Predicate_COND_UNE_NE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETUNE || N->get() == ISD::SETNE;
  }
  case 6: { 
    // Predicate_FP_ONE
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->isExactlyValue(1.0);
  }
  case 7: { 
    // Predicate_FP_ZERO
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->getValueAPF().isZero();
  }
  case 8: { 
    // Predicate_COND_EQ
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETEQ || N->get() == ISD::SETUEQ;
  }
  case 9: { 
    // Predicate_COND_SGE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETGE;
  }
  case 10: { 
    // Predicate_COND_SGT
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETGT;
  }
  case 11: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 12: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 13: { 
    // Predicate_load_private
    // Predicate_store_private
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::PRIVATE_ADDRESS;

  }
  case 14: { 
    // Predicate_az_extload
    SDNode *N = Node;
    (void)N;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 15: { 
    // Predicate_az_extloadi8
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { 
    // Predicate_vtx_id3_az_extloadi8
    // Predicate_vtx_id3_az_extloadi16
    // Predicate_vtx_id3_load
    SDNode *N = Node;
    (void)N;
 return isConstantLoad(cast<LoadSDNode>(N), 0) ||
            (cast<LoadSDNode>(N)->getAddressSpace() == AMDGPUAS::PARAM_I_ADDRESS); 
  }
  case 17: { 
    // Predicate_az_extloadi16
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 18: { 
    // Predicate_vtx_id2_az_extloadi8
    // Predicate_vtx_id2_az_extloadi16
    // Predicate_vtx_id2_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
         isa<GlobalValue>(GetUnderlyingObject(
         LD->getMemOperand()->getValue(), CurDAG->getDataLayout()));

  }
  case 19: { 
    // Predicate_vtx_id1_az_extloadi8
    // Predicate_vtx_id1_az_extloadi16
    // Predicate_vtx_id1_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS ||
         (LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
           !isa<GlobalValue>(GetUnderlyingObject(
           LD->getMemOperand()->getValue(), CurDAG->getDataLayout())));

  }
  case 20: { 
    // Predicate_load_local
    // Predicate_sextloadi8_local
    // Predicate_az_extloadi8_local
    // Predicate_sextloadi16_local
    // Predicate_az_extloadi16_local
    // Predicate_store_local
    // Predicate_truncstorei8_local
    // Predicate_truncstorei16_local
    // Predicate_atomic_load_add_local
    // Predicate_atomic_load_sub_local
    // Predicate_atomic_swap_local
    // Predicate_atomic_load_min_local
    // Predicate_atomic_load_umin_local
    // Predicate_atomic_load_max_local
    // Predicate_atomic_load_umax_local
    // Predicate_atomic_load_and_local
    // Predicate_atomic_load_or_local
    // Predicate_atomic_load_xor_local
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::LOCAL_ADDRESS;

  }
  case 21: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 22: { 
    // Predicate_sextloadi8
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 23: { 
    // Predicate_sextloadi16
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 24: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 25: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 26: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 27: { 
    // Predicate_truncstorei8
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 28: { 
    // Predicate_truncstorei16
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 29: { 
    // Predicate_store_global
    // Predicate_mskor_global
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS;

  }
  case 30: { 
    // Predicate_atomic_add_global_noret
    // Predicate_atomic_sub_global_noret
    // Predicate_atomic_swap_global_noret
    // Predicate_atomic_min_global_noret
    // Predicate_atomic_umin_global_noret
    // Predicate_atomic_max_global_noret
    // Predicate_atomic_umax_global_noret
    // Predicate_atomic_and_global_noret
    // Predicate_atomic_or_global_noret
    // Predicate_atomic_xor_global_noret
    // Predicate_atomic_cmp_swap_global_noret
    SDNode *N = Node;
    (void)N;
return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS && (SDValue(N, 0).use_empty());
  }
  case 31: { 
    // Predicate_atomic_cmp_swap_local
    SDNode *N = Node;
    (void)N;

      AtomicSDNode *AN = cast<AtomicSDNode>(N);
      return AN->getAddressSpace() == AMDGPUAS::LOCAL_ADDRESS;

  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
  return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+1);
  return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 3:
    Result.resize(NextRes+2);
  return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // IMMPopCount
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(countPopulation(N->getZExtValue()), SDLoc(N),
                                   MVT::i32);

  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif

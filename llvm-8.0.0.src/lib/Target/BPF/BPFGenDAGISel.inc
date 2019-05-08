/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the BPF target                                *|
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
/*     0*/  OPC_SwitchOpcode /*29 cases */, 21|128,1/*149*/, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->154
/*     5*/    OPC_RecordNode, // #0 = 'intrinsic_w_chain' chained node
/*     6*/    OPC_Scope, 28, /*->36*/ // 4 children in Scope
/*     8*/      OPC_CheckChild1Integer, 30|128,10/*1310*/, 
/*    11*/      OPC_RecordChild2, // #1 = $pseudo
/*    12*/      OPC_MoveChild2,
/*    13*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    16*/      OPC_MoveParent,
/*    17*/      OPC_RecordChild3, // #2 = $imm
/*    18*/      OPC_MoveChild3,
/*    19*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_EmitMergeInputChains1_0,
/*    24*/      OPC_EmitConvertToTarget, 1,
/*    26*/      OPC_EmitConvertToTarget, 2,
/*    28*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_pseudo), 0|OPFL_Chain,
                    MVT::i64, 2/*#Ops*/, 3, 4, 
                // Src: (intrinsic_w_chain:{ *:[i64] } 1310:{ *:[iPTR] }, (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm) - Complexity = 14
                // Dst: (LD_pseudo:{ *:[i64] } (imm:{ *:[i64] }):$pseudo, (imm:{ *:[i64] }):$imm)
/*    36*/    /*Scope*/ 38, /*->75*/
/*    37*/      OPC_CheckChild1Integer, 27|128,10/*1307*/, 
/*    40*/      OPC_RecordChild2, // #1 = $skb
/*    41*/      OPC_CheckChild2Type, MVT::i64,
/*    43*/      OPC_RecordChild3, // #2 = $imm
/*    44*/      OPC_Scope, 18, /*->64*/ // 2 children in Scope
/*    46*/        OPC_MoveChild3,
/*    47*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    50*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    52*/        OPC_MoveParent,
/*    53*/        OPC_EmitMergeInputChains1_0,
/*    54*/        OPC_EmitConvertToTarget, 2,
/*    56*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1307:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*    64*/      /*Scope*/ 9, /*->74*/
/*    65*/        OPC_EmitMergeInputChains1_0,
/*    66*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_B), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1307:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_B:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*    74*/      0, /*End of Scope*/
/*    75*/    /*Scope*/ 38, /*->114*/
/*    76*/      OPC_CheckChild1Integer, 28|128,10/*1308*/, 
/*    79*/      OPC_RecordChild2, // #1 = $skb
/*    80*/      OPC_CheckChild2Type, MVT::i64,
/*    82*/      OPC_RecordChild3, // #2 = $imm
/*    83*/      OPC_Scope, 18, /*->103*/ // 2 children in Scope
/*    85*/        OPC_MoveChild3,
/*    86*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*    89*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*    91*/        OPC_MoveParent,
/*    92*/        OPC_EmitMergeInputChains1_0,
/*    93*/        OPC_EmitConvertToTarget, 2,
/*    95*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1308:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   103*/      /*Scope*/ 9, /*->113*/
/*   104*/        OPC_EmitMergeInputChains1_0,
/*   105*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_H), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1308:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_H:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   113*/      0, /*End of Scope*/
/*   114*/    /*Scope*/ 38, /*->153*/
/*   115*/      OPC_CheckChild1Integer, 29|128,10/*1309*/, 
/*   118*/      OPC_RecordChild2, // #1 = $skb
/*   119*/      OPC_CheckChild2Type, MVT::i64,
/*   121*/      OPC_RecordChild3, // #2 = $imm
/*   122*/      OPC_Scope, 18, /*->142*/ // 2 children in Scope
/*   124*/        OPC_MoveChild3,
/*   125*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   128*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   130*/        OPC_MoveParent,
/*   131*/        OPC_EmitMergeInputChains1_0,
/*   132*/        OPC_EmitConvertToTarget, 2,
/*   134*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_ABS_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1309:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 12
                  // Dst: (LD_ABS_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, (imm:{ *:[i64] }):$imm)
/*   142*/      /*Scope*/ 9, /*->152*/
/*   143*/        OPC_EmitMergeInputChains1_0,
/*   144*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_IND_W), 0|OPFL_Chain,
                      MVT::i64, 2/*#Ops*/, 1, 2, 
                  // Src: (intrinsic_w_chain:{ *:[i64] } 1309:{ *:[iPTR] }, GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val) - Complexity = 8
                  // Dst: (LD_IND_W:{ *:[i64] } GPR:{ *:[i64] }:$skb, GPR:{ *:[i64] }:$val)
/*   152*/      0, /*End of Scope*/
/*   153*/    0, /*End of Scope*/
/*   154*/  /*SwitchOpcode*/ 114|128,1/*242*/, TARGET_VAL(ISD::STORE),// ->400
/*   158*/    OPC_RecordMemRef,
/*   159*/    OPC_RecordNode, // #0 = 'st' chained node
/*   160*/    OPC_RecordChild1, // #1 = $src
/*   161*/    OPC_Scope, 41|128,1/*169*/, /*->333*/ // 2 children in Scope
/*   164*/      OPC_CheckChild1Type, MVT::i64,
/*   166*/      OPC_RecordChild2, // #2 = $addr
/*   167*/      OPC_CheckChild2Type, MVT::i64,
/*   169*/      OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*   171*/      OPC_Scope, 55, /*->228*/ // 3 children in Scope
/*   173*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   175*/        OPC_Scope, 16, /*->193*/ // 3 children in Scope
/*   177*/          OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*   179*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   181*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   184*/          OPC_EmitMergeInputChains1_0,
/*   185*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STW), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   193*/        /*Scope*/ 16, /*->210*/
/*   194*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   196*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   198*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   201*/          OPC_EmitMergeInputChains1_0,
/*   202*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   210*/        /*Scope*/ 16, /*->227*/
/*   211*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   213*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   215*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   218*/          OPC_EmitMergeInputChains1_0,
/*   219*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   227*/        0, /*End of Scope*/
/*   228*/      /*Scope*/ 14, /*->243*/
/*   229*/        OPC_CheckPredicate, 6, // Predicate_store
/*   231*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   234*/        OPC_EmitMergeInputChains1_0,
/*   235*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STD), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STD i64:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   243*/      /*Scope*/ 88, /*->332*/
/*   244*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   246*/        OPC_Scope, 27, /*->275*/ // 3 children in Scope
/*   248*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   250*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   252*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   255*/          OPC_EmitMergeInputChains1_0,
/*   256*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   259*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   267*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   275*/        /*Scope*/ 27, /*->303*/
/*   276*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   278*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   280*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   283*/          OPC_EmitMergeInputChains1_0,
/*   284*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   287*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   295*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   303*/        /*Scope*/ 27, /*->331*/
/*   304*/          OPC_CheckPredicate, 3, // Predicate_truncstorei32
/*   306*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   308*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*   311*/          OPC_EmitMergeInputChains1_0,
/*   312*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   315*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 5,  // Results = #6
/*   323*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STW32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 6, 3, 4, 
                    // Src: (st GPR:{ *:[i64] }:$src, ADDRri:{ *:[i64] }:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW32 (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] }), ADDRri:{ *:[i64] }:$dst)
/*   331*/        0, /*End of Scope*/
/*   332*/      0, /*End of Scope*/
/*   333*/    /*Scope*/ 65, /*->399*/
/*   334*/      OPC_CheckChild1Type, MVT::i32,
/*   336*/      OPC_RecordChild2, // #2 = $addr
/*   337*/      OPC_CheckChild2Type, MVT::i64,
/*   339*/      OPC_CheckPredicate, 1, // Predicate_unindexedstore
/*   341*/      OPC_Scope, 16, /*->359*/ // 2 children in Scope
/*   343*/        OPC_CheckPredicate, 6, // Predicate_store
/*   345*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   347*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   350*/        OPC_EmitMergeInputChains1_0,
/*   351*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::STW32), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 3, 4, 
                  // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   359*/      /*Scope*/ 38, /*->398*/
/*   360*/        OPC_CheckPredicate, 2, // Predicate_truncstore
/*   362*/        OPC_Scope, 16, /*->380*/ // 2 children in Scope
/*   364*/          OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*   366*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   368*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   371*/          OPC_EmitMergeInputChains1_0,
/*   372*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STH32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   380*/        /*Scope*/ 16, /*->397*/
/*   381*/          OPC_CheckPredicate, 5, // Predicate_truncstorei8
/*   383*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   385*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*   388*/          OPC_EmitMergeInputChains1_0,
/*   389*/          OPC_MorphNodeTo0, TARGET_VAL(BPF::STB32), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 1, 3, 4, 
                    // Src: (st i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB32 i32:{ *:[i32] }:$src, ADDRri:{ *:[i64] }:$addr)
/*   397*/        0, /*End of Scope*/
/*   398*/      0, /*End of Scope*/
/*   399*/    0, /*End of Scope*/
/*   400*/  /*SwitchOpcode*/ 58|128,3/*442*/, TARGET_VAL(ISD::LOAD),// ->846
/*   404*/    OPC_RecordMemRef,
/*   405*/    OPC_RecordNode, // #0 = 'ld' chained node
/*   406*/    OPC_RecordChild1, // #1 = $addr
/*   407*/    OPC_CheckChild1Type, MVT::i64,
/*   409*/    OPC_CheckPredicate, 7, // Predicate_unindexedload
/*   411*/    OPC_SwitchType /*2 cases */, 75|128,2/*331*/, MVT::i64,// ->746
/*   415*/      OPC_Scope, 55, /*->472*/ // 5 children in Scope
/*   417*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   419*/        OPC_Scope, 16, /*->437*/ // 3 children in Scope
/*   421*/          OPC_CheckPredicate, 9, // Predicate_zextloadi32
/*   423*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   425*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   428*/          OPC_EmitMergeInputChains1_0,
/*   429*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                    // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   437*/        /*Scope*/ 16, /*->454*/
/*   438*/          OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*   440*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   442*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   445*/          OPC_EmitMergeInputChains1_0,
/*   446*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   454*/        /*Scope*/ 16, /*->471*/
/*   455*/          OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*   457*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   459*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   462*/          OPC_EmitMergeInputChains1_0,
/*   463*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   471*/        0, /*End of Scope*/
/*   472*/      /*Scope*/ 14, /*->487*/
/*   473*/        OPC_CheckPredicate, 12, // Predicate_load
/*   475*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   478*/        OPC_EmitMergeInputChains1_0,
/*   479*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDD), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDD:{ *:[i64] } ADDRri:{ *:[i64] }:$addr)
/*   487*/      /*Scope*/ 55, /*->543*/
/*   488*/        OPC_CheckPredicate, 13, // Predicate_extload
/*   490*/        OPC_Scope, 16, /*->508*/ // 3 children in Scope
/*   492*/          OPC_CheckPredicate, 11, // Predicate_extloadi8
/*   494*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   496*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   499*/          OPC_EmitMergeInputChains1_0,
/*   500*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDB:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   508*/        /*Scope*/ 16, /*->525*/
/*   509*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*   511*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   513*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   516*/          OPC_EmitMergeInputChains1_0,
/*   517*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDH:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   525*/        /*Scope*/ 16, /*->542*/
/*   526*/          OPC_CheckPredicate, 9, // Predicate_extloadi32
/*   528*/          OPC_CheckPatternPredicate, 0, // (!Subtarget->getHasAlu32())
/*   530*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   533*/          OPC_EmitMergeInputChains1_0,
/*   534*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i64, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                    // Dst: (LDW:{ *:[i64] } ADDRri:{ *:[i64] }:$src)
/*   542*/        0, /*End of Scope*/
/*   543*/      /*Scope*/ 100, /*->644*/
/*   544*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   546*/        OPC_Scope, 31, /*->579*/ // 3 children in Scope
/*   548*/          OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*   550*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   552*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   555*/          OPC_EmitMergeInputChains1_0,
/*   556*/          OPC_EmitInteger, MVT::i64, 0, 
/*   559*/          OPC_EmitNode1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   567*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   570*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   579*/        /*Scope*/ 31, /*->611*/
/*   580*/          OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*   582*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   584*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   587*/          OPC_EmitMergeInputChains1_0,
/*   588*/          OPC_EmitInteger, MVT::i64, 0, 
/*   591*/          OPC_EmitNode1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   599*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   602*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   611*/        /*Scope*/ 31, /*->643*/
/*   612*/          OPC_CheckPredicate, 9, // Predicate_zextloadi32
/*   614*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   616*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   619*/          OPC_EmitMergeInputChains1_0,
/*   620*/          OPC_EmitInteger, MVT::i64, 0, 
/*   623*/          OPC_EmitNode1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   631*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   634*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   643*/        0, /*End of Scope*/
/*   644*/      /*Scope*/ 100, /*->745*/
/*   645*/        OPC_CheckPredicate, 13, // Predicate_extload
/*   647*/        OPC_Scope, 31, /*->680*/ // 3 children in Scope
/*   649*/          OPC_CheckPredicate, 11, // Predicate_extloadi8
/*   651*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   653*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   656*/          OPC_EmitMergeInputChains1_0,
/*   657*/          OPC_EmitInteger, MVT::i64, 0, 
/*   660*/          OPC_EmitNode1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   668*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   671*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   680*/        /*Scope*/ 31, /*->712*/
/*   681*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*   683*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   685*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   688*/          OPC_EmitMergeInputChains1_0,
/*   689*/          OPC_EmitInteger, MVT::i64, 0, 
/*   692*/          OPC_EmitNode1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   700*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   703*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   712*/        /*Scope*/ 31, /*->744*/
/*   713*/          OPC_CheckPredicate, 9, // Predicate_extloadi32
/*   715*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   717*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   720*/          OPC_EmitMergeInputChains1_0,
/*   721*/          OPC_EmitInteger, MVT::i64, 0, 
/*   724*/          OPC_EmitNode1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #5
/*   732*/          OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*   735*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0|OPFL_Chain,
                        MVT::i64, 3/*#Ops*/, 4, 5, 6, 
                    // Src: (ld:{ *:[i64] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                    // Dst: (SUBREG_TO_REG:{ *:[i64] } 0:{ *:[i64] }, (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$src), sub_32:{ *:[i32] })
/*   744*/        0, /*End of Scope*/
/*   745*/      0, /*End of Scope*/
/*   746*/    /*SwitchType*/ 97, MVT::i32,// ->845
/*   748*/      OPC_Scope, 16, /*->766*/ // 3 children in Scope
/*   750*/        OPC_CheckPredicate, 12, // Predicate_load
/*   752*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   754*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   757*/        OPC_EmitMergeInputChains1_0,
/*   758*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LDW32), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LDW32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   766*/      /*Scope*/ 38, /*->805*/
/*   767*/        OPC_CheckPredicate, 8, // Predicate_zextload
/*   769*/        OPC_Scope, 16, /*->787*/ // 2 children in Scope
/*   771*/          OPC_CheckPredicate, 10, // Predicate_zextloadi16
/*   773*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   775*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   778*/          OPC_EmitMergeInputChains1_0,
/*   779*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                    // Dst: (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   787*/        /*Scope*/ 16, /*->804*/
/*   788*/          OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*   790*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   792*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*   795*/          OPC_EmitMergeInputChains1_0,
/*   796*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                    // Dst: (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$addr)
/*   804*/        0, /*End of Scope*/
/*   805*/      /*Scope*/ 38, /*->844*/
/*   806*/        OPC_CheckPredicate, 13, // Predicate_extload
/*   808*/        OPC_Scope, 16, /*->826*/ // 2 children in Scope
/*   810*/          OPC_CheckPredicate, 11, // Predicate_extloadi8
/*   812*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   814*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   817*/          OPC_EmitMergeInputChains1_0,
/*   818*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDB32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                    // Dst: (LDB32:{ *:[i32] } ADDRri:{ *:[i64] }:$src)
/*   826*/        /*Scope*/ 16, /*->843*/
/*   827*/          OPC_CheckPredicate, 10, // Predicate_extloadi16
/*   829*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getHasAlu32())
/*   831*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*   834*/          OPC_EmitMergeInputChains1_0,
/*   835*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LDH32), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 2/*#Ops*/, 2, 3, 
                    // Src: (ld:{ *:[i32] } ADDRri:{ *:[i64] }:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                    // Dst: (LDH32:{ *:[i32] } ADDRri:{ *:[i64] }:$src)
/*   843*/        0, /*End of Scope*/
/*   844*/      0, /*End of Scope*/
/*   845*/    0, // EndSwitchType
/*   846*/  /*SwitchOpcode*/ 42, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->891
/*   849*/    OPC_RecordMemRef,
/*   850*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/*   851*/    OPC_RecordChild1, // #1 = $addr
/*   852*/    OPC_CheckChild1Type, MVT::i64,
/*   854*/    OPC_RecordChild2, // #2 = $val
/*   855*/    OPC_CheckType, MVT::i64,
/*   857*/    OPC_Scope, 15, /*->874*/ // 2 children in Scope
/*   859*/      OPC_CheckPredicate, 14, // Predicate_atomic_load_add_32
/*   861*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   864*/      OPC_EmitMergeInputChains1_0,
/*   865*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD32), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (XADD32:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   874*/    /*Scope*/ 15, /*->890*/
/*   875*/      OPC_CheckPredicate, 15, // Predicate_atomic_load_add_64
/*   877*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #3 #4
/*   880*/      OPC_EmitMergeInputChains1_0,
/*   881*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XADD64), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i64, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
                // Dst: (XADD64:{ *:[i64] } ADDRri:{ *:[i64] }:$addr, GPR:{ *:[i64] }:$val)
/*   890*/    0, /*End of Scope*/
/*   891*/  /*SwitchOpcode*/ 51|128,3/*435*/, TARGET_VAL(BPFISD::BR_CC),// ->1330
/*   895*/    OPC_RecordNode, // #0 = 'BPFbrcc' chained node
/*   896*/    OPC_CaptureGlueInput,
/*   897*/    OPC_RecordChild1, // #1 = $dst
/*   898*/    OPC_CheckChild1Type, MVT::i64,
/*   900*/    OPC_RecordChild2, // #2 = $imm
/*   901*/    OPC_Scope, 97|128,1/*225*/, /*->1129*/ // 2 children in Scope
/*   904*/      OPC_MoveChild2,
/*   905*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   908*/      OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*   910*/      OPC_MoveParent,
/*   911*/      OPC_MoveChild3,
/*   912*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   915*/      OPC_CheckType, MVT::i64,
/*   917*/      OPC_Scope, 20, /*->939*/ // 10 children in Scope
/*   919*/        OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*   921*/        OPC_MoveParent,
/*   922*/        OPC_RecordChild4, // #3 = $BrDst
/*   923*/        OPC_MoveChild4,
/*   924*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   927*/        OPC_MoveParent,
/*   928*/        OPC_EmitMergeInputChains1_0,
/*   929*/        OPC_EmitConvertToTarget, 2,
/*   931*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JEQ_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   939*/      /*Scope*/ 20, /*->960*/
/*   940*/        OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*   942*/        OPC_MoveParent,
/*   943*/        OPC_RecordChild4, // #3 = $BrDst
/*   944*/        OPC_MoveChild4,
/*   945*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   948*/        OPC_MoveParent,
/*   949*/        OPC_EmitMergeInputChains1_0,
/*   950*/        OPC_EmitConvertToTarget, 2,
/*   952*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JUGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   960*/      /*Scope*/ 20, /*->981*/
/*   961*/        OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*   963*/        OPC_MoveParent,
/*   964*/        OPC_RecordChild4, // #3 = $BrDst
/*   965*/        OPC_MoveChild4,
/*   966*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   969*/        OPC_MoveParent,
/*   970*/        OPC_EmitMergeInputChains1_0,
/*   971*/        OPC_EmitConvertToTarget, 2,
/*   973*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JUGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*   981*/      /*Scope*/ 20, /*->1002*/
/*   982*/        OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*   984*/        OPC_MoveParent,
/*   985*/        OPC_RecordChild4, // #3 = $BrDst
/*   986*/        OPC_MoveChild4,
/*   987*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*   990*/        OPC_MoveParent,
/*   991*/        OPC_EmitMergeInputChains1_0,
/*   992*/        OPC_EmitConvertToTarget, 2,
/*   994*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JNE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1002*/      /*Scope*/ 20, /*->1023*/
/*  1003*/        OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*  1005*/        OPC_MoveParent,
/*  1006*/        OPC_RecordChild4, // #3 = $BrDst
/*  1007*/        OPC_MoveChild4,
/*  1008*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1011*/        OPC_MoveParent,
/*  1012*/        OPC_EmitMergeInputChains1_0,
/*  1013*/        OPC_EmitConvertToTarget, 2,
/*  1015*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSGT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1023*/      /*Scope*/ 20, /*->1044*/
/*  1024*/        OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*  1026*/        OPC_MoveParent,
/*  1027*/        OPC_RecordChild4, // #3 = $BrDst
/*  1028*/        OPC_MoveChild4,
/*  1029*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1032*/        OPC_MoveParent,
/*  1033*/        OPC_EmitMergeInputChains1_0,
/*  1034*/        OPC_EmitConvertToTarget, 2,
/*  1036*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSGE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1044*/      /*Scope*/ 20, /*->1065*/
/*  1045*/        OPC_CheckPredicate, 22, // Predicate_BPF_CC_LTU
/*  1047*/        OPC_MoveParent,
/*  1048*/        OPC_RecordChild4, // #3 = $BrDst
/*  1049*/        OPC_MoveChild4,
/*  1050*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1053*/        OPC_MoveParent,
/*  1054*/        OPC_EmitMergeInputChains1_0,
/*  1055*/        OPC_EmitConvertToTarget, 2,
/*  1057*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JULT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1065*/      /*Scope*/ 20, /*->1086*/
/*  1066*/        OPC_CheckPredicate, 23, // Predicate_BPF_CC_LEU
/*  1068*/        OPC_MoveParent,
/*  1069*/        OPC_RecordChild4, // #3 = $BrDst
/*  1070*/        OPC_MoveChild4,
/*  1071*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1074*/        OPC_MoveParent,
/*  1075*/        OPC_EmitMergeInputChains1_0,
/*  1076*/        OPC_EmitConvertToTarget, 2,
/*  1078*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JULE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1086*/      /*Scope*/ 20, /*->1107*/
/*  1087*/        OPC_CheckPredicate, 24, // Predicate_BPF_CC_LT
/*  1089*/        OPC_MoveParent,
/*  1090*/        OPC_RecordChild4, // #3 = $BrDst
/*  1091*/        OPC_MoveChild4,
/*  1092*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1095*/        OPC_MoveParent,
/*  1096*/        OPC_EmitMergeInputChains1_0,
/*  1097*/        OPC_EmitConvertToTarget, 2,
/*  1099*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSLT_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1107*/      /*Scope*/ 20, /*->1128*/
/*  1108*/        OPC_CheckPredicate, 25, // Predicate_BPF_CC_LE
/*  1110*/        OPC_MoveParent,
/*  1111*/        OPC_RecordChild4, // #3 = $BrDst
/*  1112*/        OPC_MoveChild4,
/*  1113*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1116*/        OPC_MoveParent,
/*  1117*/        OPC_EmitMergeInputChains1_0,
/*  1118*/        OPC_EmitConvertToTarget, 2,
/*  1120*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_ri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 4, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 11
                  // Dst: (JSLE_ri i64:{ *:[i64] }:$dst, (imm:{ *:[i64] }):$imm, (bb:{ *:[Other] }):$BrDst)
/*  1128*/      0, /*End of Scope*/
/*  1129*/    /*Scope*/ 70|128,1/*198*/, /*->1329*/
/*  1131*/      OPC_MoveChild3,
/*  1132*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1135*/      OPC_CheckType, MVT::i64,
/*  1137*/      OPC_Scope, 18, /*->1157*/ // 10 children in Scope
/*  1139*/        OPC_CheckPredicate, 16, // Predicate_BPF_CC_EQ
/*  1141*/        OPC_MoveParent,
/*  1142*/        OPC_RecordChild4, // #3 = $BrDst
/*  1143*/        OPC_MoveChild4,
/*  1144*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1147*/        OPC_MoveParent,
/*  1148*/        OPC_EmitMergeInputChains1_0,
/*  1149*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JEQ_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_EQ>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JEQ_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1157*/      /*Scope*/ 18, /*->1176*/
/*  1158*/        OPC_CheckPredicate, 17, // Predicate_BPF_CC_GTU
/*  1160*/        OPC_MoveParent,
/*  1161*/        OPC_RecordChild4, // #3 = $BrDst
/*  1162*/        OPC_MoveChild4,
/*  1163*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1166*/        OPC_MoveParent,
/*  1167*/        OPC_EmitMergeInputChains1_0,
/*  1168*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JUGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1176*/      /*Scope*/ 18, /*->1195*/
/*  1177*/        OPC_CheckPredicate, 18, // Predicate_BPF_CC_GEU
/*  1179*/        OPC_MoveParent,
/*  1180*/        OPC_RecordChild4, // #3 = $BrDst
/*  1181*/        OPC_MoveChild4,
/*  1182*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1185*/        OPC_MoveParent,
/*  1186*/        OPC_EmitMergeInputChains1_0,
/*  1187*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JUGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JUGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1195*/      /*Scope*/ 18, /*->1214*/
/*  1196*/        OPC_CheckPredicate, 19, // Predicate_BPF_CC_NE
/*  1198*/        OPC_MoveParent,
/*  1199*/        OPC_RecordChild4, // #3 = $BrDst
/*  1200*/        OPC_MoveChild4,
/*  1201*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1204*/        OPC_MoveParent,
/*  1205*/        OPC_EmitMergeInputChains1_0,
/*  1206*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JNE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_NE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JNE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1214*/      /*Scope*/ 18, /*->1233*/
/*  1215*/        OPC_CheckPredicate, 20, // Predicate_BPF_CC_GT
/*  1217*/        OPC_MoveParent,
/*  1218*/        OPC_RecordChild4, // #3 = $BrDst
/*  1219*/        OPC_MoveChild4,
/*  1220*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1223*/        OPC_MoveParent,
/*  1224*/        OPC_EmitMergeInputChains1_0,
/*  1225*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSGT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1233*/      /*Scope*/ 18, /*->1252*/
/*  1234*/        OPC_CheckPredicate, 21, // Predicate_BPF_CC_GE
/*  1236*/        OPC_MoveParent,
/*  1237*/        OPC_RecordChild4, // #3 = $BrDst
/*  1238*/        OPC_MoveChild4,
/*  1239*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1242*/        OPC_MoveParent,
/*  1243*/        OPC_EmitMergeInputChains1_0,
/*  1244*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSGE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_GE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSGE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1252*/      /*Scope*/ 18, /*->1271*/
/*  1253*/        OPC_CheckPredicate, 22, // Predicate_BPF_CC_LTU
/*  1255*/        OPC_MoveParent,
/*  1256*/        OPC_RecordChild4, // #3 = $BrDst
/*  1257*/        OPC_MoveChild4,
/*  1258*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1261*/        OPC_MoveParent,
/*  1262*/        OPC_EmitMergeInputChains1_0,
/*  1263*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LTU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JULT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1271*/      /*Scope*/ 18, /*->1290*/
/*  1272*/        OPC_CheckPredicate, 23, // Predicate_BPF_CC_LEU
/*  1274*/        OPC_MoveParent,
/*  1275*/        OPC_RecordChild4, // #3 = $BrDst
/*  1276*/        OPC_MoveChild4,
/*  1277*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1280*/        OPC_MoveParent,
/*  1281*/        OPC_EmitMergeInputChains1_0,
/*  1282*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JULE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LEU>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JULE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1290*/      /*Scope*/ 18, /*->1309*/
/*  1291*/        OPC_CheckPredicate, 24, // Predicate_BPF_CC_LT
/*  1293*/        OPC_MoveParent,
/*  1294*/        OPC_RecordChild4, // #3 = $BrDst
/*  1295*/        OPC_MoveChild4,
/*  1296*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1299*/        OPC_MoveParent,
/*  1300*/        OPC_EmitMergeInputChains1_0,
/*  1301*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLT_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LT>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSLT_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1309*/      /*Scope*/ 18, /*->1328*/
/*  1310*/        OPC_CheckPredicate, 25, // Predicate_BPF_CC_LE
/*  1312*/        OPC_MoveParent,
/*  1313*/        OPC_RecordChild4, // #3 = $BrDst
/*  1314*/        OPC_MoveChild4,
/*  1315*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  1318*/        OPC_MoveParent,
/*  1319*/        OPC_EmitMergeInputChains1_0,
/*  1320*/        OPC_MorphNodeTo0, TARGET_VAL(BPF::JSLE_rr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (BPFbrcc i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (imm:{ *:[i64] })<<P:Predicate_BPF_CC_LE>>, (bb:{ *:[Other] }):$BrDst) - Complexity = 7
                  // Dst: (JSLE_rr i64:{ *:[i64] }:$dst, i64:{ *:[i64] }:$src, (bb:{ *:[Other] }):$BrDst)
/*  1328*/      0, /*End of Scope*/
/*  1329*/    0, /*End of Scope*/
/*  1330*/  /*SwitchOpcode*/ 11|128,1/*139*/, TARGET_VAL(ISD::SRL),// ->1473
/*  1334*/    OPC_Scope, 64, /*->1400*/ // 2 children in Scope
/*  1336*/      OPC_MoveChild0,
/*  1337*/      OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*  1340*/      OPC_RecordChild0, // #0 = $src
/*  1341*/      OPC_MoveParent,
/*  1342*/      OPC_CheckType, MVT::i64,
/*  1344*/      OPC_Scope, 26, /*->1372*/ // 2 children in Scope
/*  1346*/        OPC_CheckChild1Integer, 48, 
/*  1348*/        OPC_CheckChild1Type, MVT::i64,
/*  1350*/        OPC_Scope, 9, /*->1361*/ // 2 children in Scope
/*  1352*/          OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  1354*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1361*/        /*Scope*/ 9, /*->1371*/
/*  1362*/          OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  1364*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE16), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 48:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE16:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1371*/        0, /*End of Scope*/
/*  1372*/      /*Scope*/ 26, /*->1399*/
/*  1373*/        OPC_CheckChild1Integer, 32, 
/*  1375*/        OPC_CheckChild1Type, MVT::i64,
/*  1377*/        OPC_Scope, 9, /*->1388*/ // 2 children in Scope
/*  1379*/          OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  1381*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::BE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (BE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1388*/        /*Scope*/ 9, /*->1398*/
/*  1389*/          OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  1391*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::LE32), 0,
                        MVT::i64, 1/*#Ops*/, 0, 
                    // Src: (srl:{ *:[i64] } (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src), 32:{ *:[i64] }) - Complexity = 11
                    // Dst: (LE32:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  1398*/        0, /*End of Scope*/
/*  1399*/      0, /*End of Scope*/
/*  1400*/    /*Scope*/ 71, /*->1472*/
/*  1401*/      OPC_RecordChild0, // #0 = $src2
/*  1402*/      OPC_RecordChild1, // #1 = $imm
/*  1403*/      OPC_Scope, 40, /*->1445*/ // 3 children in Scope
/*  1405*/        OPC_MoveChild1,
/*  1406*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1409*/        OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->1427
/*  1412*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1414*/          OPC_MoveParent,
/*  1415*/          OPC_CheckType, MVT::i64,
/*  1417*/          OPC_EmitConvertToTarget, 1,
/*  1419*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (srl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SRL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1427*/        /*SwitchType*/ 15, MVT::i32,// ->1444
/*  1429*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1431*/          OPC_MoveParent,
/*  1432*/          OPC_CheckType, MVT::i32,
/*  1434*/          OPC_EmitConvertToTarget, 1,
/*  1436*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (srl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SRL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  1444*/        0, // EndSwitchType
/*  1445*/      /*Scope*/ 12, /*->1458*/
/*  1446*/        OPC_CheckChild1Type, MVT::i64,
/*  1448*/        OPC_CheckType, MVT::i64,
/*  1450*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SRL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1458*/      /*Scope*/ 12, /*->1471*/
/*  1459*/        OPC_CheckChild1Type, MVT::i32,
/*  1461*/        OPC_CheckType, MVT::i32,
/*  1463*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (srl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SRL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1471*/      0, /*End of Scope*/
/*  1472*/    0, /*End of Scope*/
/*  1473*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(BPFISD::SELECT_CC),// ->1687
/*  1477*/    OPC_CaptureGlueInput,
/*  1478*/    OPC_RecordChild0, // #0 = $lhs
/*  1479*/    OPC_Scope, 102, /*->1583*/ // 2 children in Scope
/*  1481*/      OPC_CheckChild0Type, MVT::i64,
/*  1483*/      OPC_RecordChild1, // #1 = $rhs
/*  1484*/      OPC_Scope, 53, /*->1539*/ // 2 children in Scope
/*  1486*/        OPC_MoveChild1,
/*  1487*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1490*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1492*/        OPC_MoveParent,
/*  1493*/        OPC_RecordChild2, // #2 = $imm
/*  1494*/        OPC_MoveChild2,
/*  1495*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1498*/        OPC_CheckType, MVT::i64,
/*  1500*/        OPC_MoveParent,
/*  1501*/        OPC_RecordChild3, // #3 = $src
/*  1502*/        OPC_RecordChild4, // #4 = $src2
/*  1503*/        OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->1521
/*  1506*/          OPC_EmitConvertToTarget, 1,
/*  1508*/          OPC_EmitConvertToTarget, 2,
/*  1510*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri:{ *:[i64] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] }):$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1521*/        /*SwitchType*/ 15, MVT::i32,// ->1538
/*  1523*/          OPC_EmitConvertToTarget, 1,
/*  1525*/          OPC_EmitConvertToTarget, 2,
/*  1527*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_64_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_64_32:{ *:[i32] } i64:{ *:[i64] }:$lhs, (imm:{ *:[i64] }):$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  1538*/        0, // EndSwitchType
/*  1539*/      /*Scope*/ 42, /*->1582*/
/*  1540*/        OPC_RecordChild2, // #2 = $imm
/*  1541*/        OPC_MoveChild2,
/*  1542*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1545*/        OPC_CheckType, MVT::i64,
/*  1547*/        OPC_MoveParent,
/*  1548*/        OPC_RecordChild3, // #3 = $src
/*  1549*/        OPC_RecordChild4, // #4 = $src2
/*  1550*/        OPC_SwitchType /*2 cases */, 13, MVT::i64,// ->1566
/*  1553*/          OPC_EmitConvertToTarget, 2,
/*  1555*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 6
                    // Dst: (Select:{ *:[i64] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1566*/        /*SwitchType*/ 13, MVT::i32,// ->1581
/*  1568*/          OPC_EmitConvertToTarget, 2,
/*  1570*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_64_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 6
                    // Dst: (Select_64_32:{ *:[i32] } i64:{ *:[i64] }:$lhs, i64:{ *:[i64] }:$rhs, (imm:{ *:[i64] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  1581*/        0, // EndSwitchType
/*  1582*/      0, /*End of Scope*/
/*  1583*/    /*Scope*/ 102, /*->1686*/
/*  1584*/      OPC_CheckChild0Type, MVT::i32,
/*  1586*/      OPC_RecordChild1, // #1 = $rhs
/*  1587*/      OPC_Scope, 53, /*->1642*/ // 2 children in Scope
/*  1589*/        OPC_MoveChild1,
/*  1590*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1593*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1595*/        OPC_MoveParent,
/*  1596*/        OPC_RecordChild2, // #2 = $imm
/*  1597*/        OPC_MoveChild2,
/*  1598*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1601*/        OPC_CheckType, MVT::i32,
/*  1603*/        OPC_MoveParent,
/*  1604*/        OPC_RecordChild3, // #3 = $src
/*  1605*/        OPC_RecordChild4, // #4 = $src2
/*  1606*/        OPC_SwitchType /*2 cases */, 15, MVT::i32,// ->1624
/*  1609*/          OPC_EmitConvertToTarget, 1,
/*  1611*/          OPC_EmitConvertToTarget, 2,
/*  1613*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_32:{ *:[i32] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] }):$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  1624*/        /*SwitchType*/ 15, MVT::i64,// ->1641
/*  1626*/          OPC_EmitConvertToTarget, 1,
/*  1628*/          OPC_EmitConvertToTarget, 2,
/*  1630*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_Ri_32_64), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 5, 6, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 10
                    // Dst: (Select_Ri_32_64:{ *:[i64] } i32:{ *:[i32] }:$lhs, (imm:{ *:[i32] }):$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1641*/        0, // EndSwitchType
/*  1642*/      /*Scope*/ 42, /*->1685*/
/*  1643*/        OPC_RecordChild2, // #2 = $imm
/*  1644*/        OPC_MoveChild2,
/*  1645*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1648*/        OPC_CheckType, MVT::i32,
/*  1650*/        OPC_MoveParent,
/*  1651*/        OPC_RecordChild3, // #3 = $src
/*  1652*/        OPC_RecordChild4, // #4 = $src2
/*  1653*/        OPC_SwitchType /*2 cases */, 13, MVT::i32,// ->1669
/*  1656*/          OPC_EmitConvertToTarget, 2,
/*  1658*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_32), 0|OPFL_GlueInput,
                        MVT::i32, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i32] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2) - Complexity = 6
                    // Dst: (Select_32:{ *:[i32] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$src2)
/*  1669*/        /*SwitchType*/ 13, MVT::i64,// ->1684
/*  1671*/          OPC_EmitConvertToTarget, 2,
/*  1673*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::Select_32_64), 0|OPFL_GlueInput,
                        MVT::i64, 5/*#Ops*/, 0, 1, 5, 3, 4, 
                    // Src: (BPFselectcc:{ *:[i64] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2) - Complexity = 6
                    // Dst: (Select_32_64:{ *:[i64] } i32:{ *:[i32] }:$lhs, i32:{ *:[i32] }:$rhs, (imm:{ *:[i32] }):$imm, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$src2)
/*  1684*/        0, // EndSwitchType
/*  1685*/      0, /*End of Scope*/
/*  1686*/    0, /*End of Scope*/
/*  1687*/  /*SwitchOpcode*/ 83, TARGET_VAL(ISD::ADD),// ->1773
/*  1690*/    OPC_Scope, 14, /*->1706*/ // 2 children in Scope
/*  1692*/      OPC_RecordNode, // #0 = $addr
/*  1693*/      OPC_CheckType, MVT::i64,
/*  1695*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  1698*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  1706*/    /*Scope*/ 65, /*->1772*/
/*  1707*/      OPC_RecordChild0, // #0 = $src2
/*  1708*/      OPC_RecordChild1, // #1 = $imm
/*  1709*/      OPC_Scope, 38, /*->1749*/ // 3 children in Scope
/*  1711*/        OPC_MoveChild1,
/*  1712*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1715*/        OPC_Scope, 15, /*->1732*/ // 2 children in Scope
/*  1717*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1719*/          OPC_MoveParent,
/*  1720*/          OPC_CheckType, MVT::i64,
/*  1722*/          OPC_EmitConvertToTarget, 1,
/*  1724*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (ADD_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1732*/        /*Scope*/ 15, /*->1748*/
/*  1733*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1735*/          OPC_MoveParent,
/*  1736*/          OPC_CheckType, MVT::i32,
/*  1738*/          OPC_EmitConvertToTarget, 1,
/*  1740*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (add:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (ADD_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  1748*/        0, /*End of Scope*/
/*  1749*/      /*Scope*/ 10, /*->1760*/
/*  1750*/        OPC_CheckType, MVT::i64,
/*  1752*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (ADD_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1760*/      /*Scope*/ 10, /*->1771*/
/*  1761*/        OPC_CheckType, MVT::i32,
/*  1763*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::ADD_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (ADD_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1771*/      0, /*End of Scope*/
/*  1772*/    0, /*End of Scope*/
/*  1773*/  /*SwitchOpcode*/ 83, TARGET_VAL(ISD::OR),// ->1859
/*  1776*/    OPC_Scope, 14, /*->1792*/ // 2 children in Scope
/*  1778*/      OPC_RecordNode, // #0 = $addr
/*  1779*/      OPC_CheckType, MVT::i64,
/*  1781*/      OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectFIAddr:$addr #1 #2
/*  1784*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::FI_ri), 0,
                    MVT::i64, 2/*#Ops*/, 1, 2, 
                // Src: FIri:{ *:[i64] }:$addr - Complexity = 9
                // Dst: (FI_ri:{ *:[i64] } FIri:{ *:[i64] }:$addr)
/*  1792*/    /*Scope*/ 65, /*->1858*/
/*  1793*/      OPC_RecordChild0, // #0 = $src2
/*  1794*/      OPC_RecordChild1, // #1 = $imm
/*  1795*/      OPC_Scope, 38, /*->1835*/ // 3 children in Scope
/*  1797*/        OPC_MoveChild1,
/*  1798*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1801*/        OPC_Scope, 15, /*->1818*/ // 2 children in Scope
/*  1803*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1805*/          OPC_MoveParent,
/*  1806*/          OPC_CheckType, MVT::i64,
/*  1808*/          OPC_EmitConvertToTarget, 1,
/*  1810*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (OR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1818*/        /*Scope*/ 15, /*->1834*/
/*  1819*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  1821*/          OPC_MoveParent,
/*  1822*/          OPC_CheckType, MVT::i32,
/*  1824*/          OPC_EmitConvertToTarget, 1,
/*  1826*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (or:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (OR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  1834*/        0, /*End of Scope*/
/*  1835*/      /*Scope*/ 10, /*->1846*/
/*  1836*/        OPC_CheckType, MVT::i64,
/*  1838*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (OR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  1846*/      /*Scope*/ 10, /*->1857*/
/*  1847*/        OPC_CheckType, MVT::i32,
/*  1849*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::OR_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (or:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (OR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  1857*/      0, /*End of Scope*/
/*  1858*/    0, /*End of Scope*/
/*  1859*/  /*SwitchOpcode*/ 22, TARGET_VAL(ISD::CALLSEQ_START),// ->1884
/*  1862*/    OPC_RecordNode, // #0 = 'BPFcallseq_start' chained node
/*  1863*/    OPC_RecordChild1, // #1 = $amt1
/*  1864*/    OPC_MoveChild1,
/*  1865*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1868*/    OPC_MoveParent,
/*  1869*/    OPC_RecordChild2, // #2 = $amt2
/*  1870*/    OPC_MoveChild2,
/*  1871*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1874*/    OPC_MoveParent,
/*  1875*/    OPC_EmitMergeInputChains1_0,
/*  1876*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_start (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKDOWN:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  1884*/  /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->1910
/*  1887*/    OPC_RecordNode, // #0 = 'BPFcallseq_end' chained node
/*  1888*/    OPC_CaptureGlueInput,
/*  1889*/    OPC_RecordChild1, // #1 = $amt1
/*  1890*/    OPC_MoveChild1,
/*  1891*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1894*/    OPC_MoveParent,
/*  1895*/    OPC_RecordChild2, // #2 = $amt2
/*  1896*/    OPC_MoveChild2,
/*  1897*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*  1900*/    OPC_MoveParent,
/*  1901*/    OPC_EmitMergeInputChains1_0,
/*  1902*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i64, 2/*#Ops*/, 1, 2, 
              // Src: (BPFcallseq_end (timm:{ *:[iPTR] }):$amt1, (timm:{ *:[iPTR] }):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:{ *:[i64] } (timm:{ *:[i64] }):$amt1, (timm:{ *:[i64] }):$amt2)
/*  1910*/  /*SwitchOpcode*/ 30, TARGET_VAL(BPFISD::MEMCPY),// ->1943
/*  1913*/    OPC_RecordNode, // #0 = 'BPFmemcpy' chained node
/*  1914*/    OPC_CaptureGlueInput,
/*  1915*/    OPC_RecordChild1, // #1 = $dst
/*  1916*/    OPC_RecordChild2, // #2 = $src
/*  1917*/    OPC_RecordChild3, // #3 = $len
/*  1918*/    OPC_MoveChild3,
/*  1919*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1922*/    OPC_MoveParent,
/*  1923*/    OPC_RecordChild4, // #4 = $align
/*  1924*/    OPC_MoveChild4,
/*  1925*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1928*/    OPC_MoveParent,
/*  1929*/    OPC_EmitMergeInputChains1_0,
/*  1930*/    OPC_EmitConvertToTarget, 3,
/*  1932*/    OPC_EmitConvertToTarget, 4,
/*  1934*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::MEMCPY), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  4/*#Ops*/, 1, 2, 5, 6, 
              // Src: (BPFmemcpy GPR:{ *:[i64] }:$dst, GPR:{ *:[i64] }:$src, (imm:{ *:[i64] }):$len, (imm:{ *:[i64] }):$align) - Complexity = 9
              // Dst: (MEMCPY GPR:{ *:[i64] }:$dst, GPR:{ *:[i64] }:$src, (imm:{ *:[i64] }):$len, (imm:{ *:[i64] }):$align)
/*  1943*/  /*SwitchOpcode*/ 92, TARGET_VAL(ISD::SUB),// ->2038
/*  1946*/    OPC_Scope, 23, /*->1971*/ // 2 children in Scope
/*  1948*/      OPC_CheckChild0Integer, 0, 
/*  1950*/      OPC_RecordChild1, // #0 = $src
/*  1951*/      OPC_SwitchType /*2 cases */, 7, MVT::i64,// ->1961
/*  1954*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_64), 0,
                      MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i64] } 0:{ *:[i64] }, i64:{ *:[i64] }:$src) - Complexity = 8
                  // Dst: (NEG_64:{ *:[i64] } i64:{ *:[i64] }:$src)
/*  1961*/      /*SwitchType*/ 7, MVT::i32,// ->1970
/*  1963*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::NEG_32), 0,
                      MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sub:{ *:[i32] } 0:{ *:[i32] }, i32:{ *:[i32] }:$src) - Complexity = 8
                  // Dst: (NEG_32:{ *:[i32] } i32:{ *:[i32] }:$src)
/*  1970*/      0, // EndSwitchType
/*  1971*/    /*Scope*/ 65, /*->2037*/
/*  1972*/      OPC_RecordChild0, // #0 = $src2
/*  1973*/      OPC_RecordChild1, // #1 = $imm
/*  1974*/      OPC_Scope, 38, /*->2014*/ // 3 children in Scope
/*  1976*/        OPC_MoveChild1,
/*  1977*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1980*/        OPC_Scope, 15, /*->1997*/ // 2 children in Scope
/*  1982*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  1984*/          OPC_MoveParent,
/*  1985*/          OPC_CheckType, MVT::i64,
/*  1987*/          OPC_EmitConvertToTarget, 1,
/*  1989*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SUB_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  1997*/        /*Scope*/ 15, /*->2013*/
/*  1998*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2000*/          OPC_MoveParent,
/*  2001*/          OPC_CheckType, MVT::i32,
/*  2003*/          OPC_EmitConvertToTarget, 1,
/*  2005*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (SUB_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2013*/        0, /*End of Scope*/
/*  2014*/      /*Scope*/ 10, /*->2025*/
/*  2015*/        OPC_CheckType, MVT::i64,
/*  2017*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (SUB_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2025*/      /*Scope*/ 10, /*->2036*/
/*  2026*/        OPC_CheckType, MVT::i32,
/*  2028*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SUB_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (SUB_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2036*/      0, /*End of Scope*/
/*  2037*/    0, /*End of Scope*/
/*  2038*/  /*SwitchOpcode*/ 100, TARGET_VAL(ISD::AND),// ->2141
/*  2041*/    OPC_Scope, 31, /*->2074*/ // 2 children in Scope
/*  2043*/      OPC_CheckAndImm, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*  2049*/      OPC_RecordChild0, // #0 = $src
/*  2050*/      OPC_CheckType, MVT::i64,
/*  2052*/      OPC_EmitInteger, MVT::i64, 32, 
/*  2055*/      OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1,  // Results = #2
/*  2063*/      OPC_EmitInteger, MVT::i64, 32, 
/*  2066*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                    MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src, 4294967295:{ *:[i64] }) - Complexity = 8
                // Dst: (SRL_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src, 32:{ *:[i64] }), 32:{ *:[i64] })
/*  2074*/    /*Scope*/ 65, /*->2140*/
/*  2075*/      OPC_RecordChild0, // #0 = $src2
/*  2076*/      OPC_RecordChild1, // #1 = $imm
/*  2077*/      OPC_Scope, 38, /*->2117*/ // 3 children in Scope
/*  2079*/        OPC_MoveChild1,
/*  2080*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2083*/        OPC_Scope, 15, /*->2100*/ // 2 children in Scope
/*  2085*/          OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2087*/          OPC_MoveParent,
/*  2088*/          OPC_CheckType, MVT::i64,
/*  2090*/          OPC_EmitConvertToTarget, 1,
/*  2092*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri), 0,
                        MVT::i64, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                    // Dst: (AND_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2100*/        /*Scope*/ 15, /*->2116*/
/*  2101*/          OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2103*/          OPC_MoveParent,
/*  2104*/          OPC_CheckType, MVT::i32,
/*  2106*/          OPC_EmitConvertToTarget, 1,
/*  2108*/          OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_ri_32), 0,
                        MVT::i32, 2/*#Ops*/, 0, 2, 
                    // Src: (and:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                    // Dst: (AND_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2116*/        0, /*End of Scope*/
/*  2117*/      /*Scope*/ 10, /*->2128*/
/*  2118*/        OPC_CheckType, MVT::i64,
/*  2120*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr), 0,
                      MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                  // Dst: (AND_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2128*/      /*Scope*/ 10, /*->2139*/
/*  2129*/        OPC_CheckType, MVT::i32,
/*  2131*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::AND_rr_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                  // Dst: (AND_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2139*/      0, /*End of Scope*/
/*  2140*/    0, /*End of Scope*/
/*  2141*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::SHL),// ->2215
/*  2144*/    OPC_RecordChild0, // #0 = $src2
/*  2145*/    OPC_RecordChild1, // #1 = $imm
/*  2146*/    OPC_Scope, 40, /*->2188*/ // 3 children in Scope
/*  2148*/      OPC_MoveChild1,
/*  2149*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2152*/      OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->2170
/*  2155*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2157*/        OPC_MoveParent,
/*  2158*/        OPC_CheckType, MVT::i64,
/*  2160*/        OPC_EmitConvertToTarget, 1,
/*  2162*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SLL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2170*/      /*SwitchType*/ 15, MVT::i32,// ->2187
/*  2172*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2174*/        OPC_MoveParent,
/*  2175*/        OPC_CheckType, MVT::i32,
/*  2177*/        OPC_EmitConvertToTarget, 1,
/*  2179*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (shl:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SLL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2187*/      0, // EndSwitchType
/*  2188*/    /*Scope*/ 12, /*->2201*/
/*  2189*/      OPC_CheckChild1Type, MVT::i64,
/*  2191*/      OPC_CheckType, MVT::i64,
/*  2193*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SLL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2201*/    /*Scope*/ 12, /*->2214*/
/*  2202*/      OPC_CheckChild1Type, MVT::i32,
/*  2204*/      OPC_CheckType, MVT::i32,
/*  2206*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SLL_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (SLL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2214*/    0, /*End of Scope*/
/*  2215*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::XOR),// ->2283
/*  2218*/    OPC_RecordChild0, // #0 = $src2
/*  2219*/    OPC_RecordChild1, // #1 = $imm
/*  2220*/    OPC_Scope, 38, /*->2260*/ // 3 children in Scope
/*  2222*/      OPC_MoveChild1,
/*  2223*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2226*/      OPC_Scope, 15, /*->2243*/ // 2 children in Scope
/*  2228*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2230*/        OPC_MoveParent,
/*  2231*/        OPC_CheckType, MVT::i64,
/*  2233*/        OPC_EmitConvertToTarget, 1,
/*  2235*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (XOR_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2243*/      /*Scope*/ 15, /*->2259*/
/*  2244*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2246*/        OPC_MoveParent,
/*  2247*/        OPC_CheckType, MVT::i32,
/*  2249*/        OPC_EmitConvertToTarget, 1,
/*  2251*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (XOR_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2259*/      0, /*End of Scope*/
/*  2260*/    /*Scope*/ 10, /*->2271*/
/*  2261*/      OPC_CheckType, MVT::i64,
/*  2263*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (XOR_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2271*/    /*Scope*/ 10, /*->2282*/
/*  2272*/      OPC_CheckType, MVT::i32,
/*  2274*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::XOR_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (XOR_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2282*/    0, /*End of Scope*/
/*  2283*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::SRA),// ->2357
/*  2286*/    OPC_RecordChild0, // #0 = $src2
/*  2287*/    OPC_RecordChild1, // #1 = $imm
/*  2288*/    OPC_Scope, 40, /*->2330*/ // 3 children in Scope
/*  2290*/      OPC_MoveChild1,
/*  2291*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2294*/      OPC_SwitchType /*2 cases */, 15, MVT::i64,// ->2312
/*  2297*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2299*/        OPC_MoveParent,
/*  2300*/        OPC_CheckType, MVT::i64,
/*  2302*/        OPC_EmitConvertToTarget, 1,
/*  2304*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRA_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2312*/      /*SwitchType*/ 15, MVT::i32,// ->2329
/*  2314*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2316*/        OPC_MoveParent,
/*  2317*/        OPC_CheckType, MVT::i32,
/*  2319*/        OPC_EmitConvertToTarget, 1,
/*  2321*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (SRA_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2329*/      0, // EndSwitchType
/*  2330*/    /*Scope*/ 12, /*->2343*/
/*  2331*/      OPC_CheckChild1Type, MVT::i64,
/*  2333*/      OPC_CheckType, MVT::i64,
/*  2335*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (SRA_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2343*/    /*Scope*/ 12, /*->2356*/
/*  2344*/      OPC_CheckChild1Type, MVT::i32,
/*  2346*/      OPC_CheckType, MVT::i32,
/*  2348*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (SRA_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2356*/    0, /*End of Scope*/
/*  2357*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::MUL),// ->2425
/*  2360*/    OPC_RecordChild0, // #0 = $src2
/*  2361*/    OPC_RecordChild1, // #1 = $imm
/*  2362*/    OPC_Scope, 38, /*->2402*/ // 3 children in Scope
/*  2364*/      OPC_MoveChild1,
/*  2365*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2368*/      OPC_Scope, 15, /*->2385*/ // 2 children in Scope
/*  2370*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2372*/        OPC_MoveParent,
/*  2373*/        OPC_CheckType, MVT::i64,
/*  2375*/        OPC_EmitConvertToTarget, 1,
/*  2377*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (MUL_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2385*/      /*Scope*/ 15, /*->2401*/
/*  2386*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2388*/        OPC_MoveParent,
/*  2389*/        OPC_CheckType, MVT::i32,
/*  2391*/        OPC_EmitConvertToTarget, 1,
/*  2393*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (MUL_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2401*/      0, /*End of Scope*/
/*  2402*/    /*Scope*/ 10, /*->2413*/
/*  2403*/      OPC_CheckType, MVT::i64,
/*  2405*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (MUL_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2413*/    /*Scope*/ 10, /*->2424*/
/*  2414*/      OPC_CheckType, MVT::i32,
/*  2416*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MUL_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (MUL_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2424*/    0, /*End of Scope*/
/*  2425*/  /*SwitchOpcode*/ 65, TARGET_VAL(ISD::UDIV),// ->2493
/*  2428*/    OPC_RecordChild0, // #0 = $src2
/*  2429*/    OPC_RecordChild1, // #1 = $imm
/*  2430*/    OPC_Scope, 38, /*->2470*/ // 3 children in Scope
/*  2432*/      OPC_MoveChild1,
/*  2433*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2436*/      OPC_Scope, 15, /*->2453*/ // 2 children in Scope
/*  2438*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2440*/        OPC_MoveParent,
/*  2441*/        OPC_CheckType, MVT::i64,
/*  2443*/        OPC_EmitConvertToTarget, 1,
/*  2445*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri), 0,
                      MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (udiv:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm) - Complexity = 7
                  // Dst: (DIV_ri:{ *:[i64] } GPR:{ *:[i64] }:$src2, (imm:{ *:[i64] }):$imm)
/*  2453*/      /*Scope*/ 15, /*->2469*/
/*  2454*/        OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2456*/        OPC_MoveParent,
/*  2457*/        OPC_CheckType, MVT::i32,
/*  2459*/        OPC_EmitConvertToTarget, 1,
/*  2461*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_ri_32), 0,
                      MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (udiv:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm) - Complexity = 7
                  // Dst: (DIV_ri_32:{ *:[i32] } GPR32:{ *:[i32] }:$src2, (imm:{ *:[i32] }):$imm)
/*  2469*/      0, /*End of Scope*/
/*  2470*/    /*Scope*/ 10, /*->2481*/
/*  2471*/      OPC_CheckType, MVT::i64,
/*  2473*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr), 0,
                    MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (DIV_rr:{ *:[i64] } i64:{ *:[i64] }:$src2, i64:{ *:[i64] }:$src)
/*  2481*/    /*Scope*/ 10, /*->2492*/
/*  2482*/      OPC_CheckType, MVT::i32,
/*  2484*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::DIV_rr_32), 0,
                    MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (udiv:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src) - Complexity = 3
                // Dst: (DIV_rr_32:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src)
/*  2492*/    0, /*End of Scope*/
/*  2493*/  /*SwitchOpcode*/ 15, TARGET_VAL(BPFISD::Wrapper),// ->2511
/*  2496*/    OPC_RecordChild0, // #0 = $in
/*  2497*/    OPC_MoveChild0,
/*  2498*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*  2501*/    OPC_MoveParent,
/*  2502*/    OPC_CheckType, MVT::i64,
/*  2504*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                  MVT::i64, 1/*#Ops*/, 0, 
              // Src: (BPFWrapper:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in) - Complexity = 6
              // Dst: (LD_imm64:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$in)
/*  2511*/  /*SwitchOpcode*/ 58, TARGET_VAL(BPFISD::CALL),// ->2572
/*  2514*/    OPC_RecordNode, // #0 = 'BPFcall' chained node
/*  2515*/    OPC_CaptureGlueInput,
/*  2516*/    OPC_RecordChild1, // #1 = $dst
/*  2517*/    OPC_Scope, 41, /*->2560*/ // 2 children in Scope
/*  2519*/      OPC_MoveChild1,
/*  2520*/      OPC_SwitchOpcode /*3 cases */, 9, TARGET_VAL(ISD::TargetGlobalAddress),// ->2533
/*  2524*/        OPC_MoveParent,
/*  2525*/        OPC_EmitMergeInputChains1_0,
/*  2526*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (BPFcall (tglobaladdr:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (tglobaladdr:{ *:[i64] }):$dst)
/*  2533*/      /*SwitchOpcode*/ 9, TARGET_VAL(ISD::TargetExternalSymbol),// ->2545
/*  2536*/        OPC_MoveParent,
/*  2537*/        OPC_EmitMergeInputChains1_0,
/*  2538*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (BPFcall (texternalsym:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (texternalsym:{ *:[i64] }):$dst)
/*  2545*/      /*SwitchOpcode*/ 11, TARGET_VAL(ISD::Constant),// ->2559
/*  2548*/        OPC_MoveParent,
/*  2549*/        OPC_EmitMergeInputChains1_0,
/*  2550*/        OPC_EmitConvertToTarget, 1,
/*  2552*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i64, 1/*#Ops*/, 2, 
                  // Src: (BPFcall (imm:{ *:[iPTR] }):$dst) - Complexity = 6
                  // Dst: (JAL:{ *:[i64] } (imm:{ *:[i64] }):$dst)
/*  2559*/      0, // EndSwitchOpcode
/*  2560*/    /*Scope*/ 10, /*->2571*/
/*  2561*/      OPC_CheckChild1Type, MVT::i64,
/*  2563*/      OPC_EmitMergeInputChains1_0,
/*  2564*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::JALX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    MVT::i64, 1/*#Ops*/, 1, 
                // Src: (BPFcall GPR:{ *:[i64] }:$dst) - Complexity = 3
                // Dst: (JALX:{ *:[i64] } GPR:{ *:[i64] }:$dst)
/*  2571*/    0, /*End of Scope*/
/*  2572*/  /*SwitchOpcode*/ 42, TARGET_VAL(ISD::Constant),// ->2617
/*  2575*/    OPC_RecordNode, // #0 = $imm
/*  2576*/    OPC_SwitchType /*2 cases */, 24, MVT::i64,// ->2603
/*  2579*/      OPC_Scope, 11, /*->2592*/ // 2 children in Scope
/*  2581*/        OPC_CheckPredicate, 0, // Predicate_i64immSExt32
/*  2583*/        OPC_EmitConvertToTarget, 0,
/*  2585*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i64] })<<P:Predicate_i64immSExt32>>:$imm - Complexity = 4
                  // Dst: (MOV_ri:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  2592*/      /*Scope*/ 9, /*->2602*/
/*  2593*/        OPC_EmitConvertToTarget, 0,
/*  2595*/        OPC_MorphNodeTo1, TARGET_VAL(BPF::LD_imm64), 0,
                      MVT::i64, 1/*#Ops*/, 1, 
                  // Src: (imm:{ *:[i64] }):$imm - Complexity = 3
                  // Dst: (LD_imm64:{ *:[i64] } (imm:{ *:[i64] }):$imm)
/*  2602*/      0, /*End of Scope*/
/*  2603*/    /*SwitchType*/ 11, MVT::i32,// ->2616
/*  2605*/      OPC_CheckPredicate, 0, // Predicate_i32immSExt32
/*  2607*/      OPC_EmitConvertToTarget, 0,
/*  2609*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::MOV_ri_32), 0,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:{ *:[i32] })<<P:Predicate_i32immSExt32>>:$imm - Complexity = 4
                // Dst: (MOV_ri_32:{ *:[i32] } (imm:{ *:[i32] }):$imm)
/*  2616*/    0, // EndSwitchType
/*  2617*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->2634
/*  2620*/    OPC_RecordNode, // #0 = 'br' chained node
/*  2621*/    OPC_RecordChild1, // #1 = $BrDst
/*  2622*/    OPC_MoveChild1,
/*  2623*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*  2626*/    OPC_MoveParent,
/*  2627*/    OPC_EmitMergeInputChains1_0,
/*  2628*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$BrDst) - Complexity = 3
              // Dst: (JMP (bb:{ *:[Other] }):$BrDst)
/*  2634*/  /*SwitchOpcode*/ 8, TARGET_VAL(BPFISD::RET_FLAG),// ->2645
/*  2637*/    OPC_RecordNode, // #0 = 'BPFretflag' chained node
/*  2638*/    OPC_CaptureGlueInput,
/*  2639*/    OPC_EmitMergeInputChains1_0,
/*  2640*/    OPC_MorphNodeTo0, TARGET_VAL(BPF::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (BPFretflag) - Complexity = 3
              // Dst: (RET)
/*  2645*/  /*SwitchOpcode*/ 25, TARGET_VAL(ISD::BSWAP),// ->2673
/*  2648*/    OPC_RecordChild0, // #0 = $src
/*  2649*/    OPC_CheckType, MVT::i64,
/*  2651*/    OPC_Scope, 9, /*->2662*/ // 2 children in Scope
/*  2653*/      OPC_CheckPatternPredicate, 2, // (CurDAG->getDataLayout().isLittleEndian())
/*  2655*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::BE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (BE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  2662*/    /*Scope*/ 9, /*->2672*/
/*  2663*/      OPC_CheckPatternPredicate, 3, // (!CurDAG->getDataLayout().isLittleEndian())
/*  2665*/      OPC_MorphNodeTo1, TARGET_VAL(BPF::LE64), 0,
                    MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:{ *:[i64] } GPR:{ *:[i64] }:$src) - Complexity = 3
                // Dst: (LE64:{ *:[i64] } GPR:{ *:[i64] }:$src)
/*  2672*/    0, /*End of Scope*/
/*  2673*/  /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TRUNCATE),// ->2688
/*  2676*/    OPC_RecordChild0, // #0 = $src
/*  2677*/    OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*  2680*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:{ *:[i32] } GPR:{ *:[i64] }:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:{ *:[i32] } GPR:{ *:[i64] }:$src, sub_32:{ *:[i32] })
/*  2688*/  /*SwitchOpcode*/ 19, TARGET_VAL(ISD::ANY_EXTEND),// ->2710
/*  2691*/    OPC_RecordChild0, // #0 = $src
/*  2692*/    OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  MVT::i64, 0/*#Ops*/,  // Results = #1
/*  2698*/    OPC_EmitInteger, MVT::i32, BPF::sub_32,
/*  2701*/    OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  MVT::i64, 3/*#Ops*/, 1, 0, 2, 
              // Src: (anyext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (INSERT_SUBREG:{ *:[i64] } (IMPLICIT_DEF:{ *:[i64] }), GPR32:{ *:[i32] }:$src, sub_32:{ *:[i32] })
/*  2710*/  /*SwitchOpcode*/ 30, TARGET_VAL(ISD::SIGN_EXTEND),// ->2743
/*  2713*/    OPC_RecordChild0, // #0 = $src
/*  2714*/    OPC_EmitNode1, TARGET_VAL(BPF::MOV_32_64), 0,
                  MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*  2721*/    OPC_EmitInteger, MVT::i64, 32, 
/*  2724*/    OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 1, 2,  // Results = #3
/*  2732*/    OPC_EmitInteger, MVT::i64, 32, 
/*  2735*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::SRA_ri), 0,
                  MVT::i64, 2/*#Ops*/, 3, 4, 
              // Src: (sext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (SRA_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } (MOV_32_64:{ *:[i64] } GPR32:{ *:[i32] }:$src), 32:{ *:[i64] }), 32:{ *:[i64] })
/*  2743*/  /*SwitchOpcode*/ 30, TARGET_VAL(ISD::ZERO_EXTEND),// ->2776
/*  2746*/    OPC_RecordChild0, // #0 = $src
/*  2747*/    OPC_EmitNode1, TARGET_VAL(BPF::MOV_32_64), 0,
                  MVT::i64, 1/*#Ops*/, 0,  // Results = #1
/*  2754*/    OPC_EmitInteger, MVT::i64, 32, 
/*  2757*/    OPC_EmitNode1, TARGET_VAL(BPF::SLL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 1, 2,  // Results = #3
/*  2765*/    OPC_EmitInteger, MVT::i64, 32, 
/*  2768*/    OPC_MorphNodeTo1, TARGET_VAL(BPF::SRL_ri), 0,
                  MVT::i64, 2/*#Ops*/, 3, 4, 
              // Src: (zext:{ *:[i64] } GPR32:{ *:[i32] }:$src) - Complexity = 3
              // Dst: (SRL_ri:{ *:[i64] } (SLL_ri:{ *:[i64] } (MOV_32_64:{ *:[i64] } GPR32:{ *:[i32] }:$src), 32:{ *:[i64] }), 32:{ *:[i64] })
/*  2776*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 2778 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 53
  // #OPC_RecordNode                           = 14
  // #OPC_RecordChild                          = 90
  // #OPC_RecordMemRef                         = 3
  // #OPC_CaptureGlueInput                     = 6
  // #OPC_MoveChild                            = 54
  // #OPC_MoveParent                           = 84
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 0
  // #OPC_CheckPatternPredicate                = 32
  // #OPC_CheckPredicate                       = 90
  // #OPC_CheckOpcode                          = 53
  // #OPC_SwitchOpcode                         = 2
  // #OPC_CheckType                            = 53
  // #OPC_SwitchType                           = 10
  // #OPC_CheckChildType                       = 21
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 7
  // #OPC_CheckCondCode                        = 0
  // #OPC_CheckValueType                       = 0
  // #OPC_CheckComplexPat                      = 32
  // #OPC_CheckAndImm                          = 1
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 12
  // #OPC_EmitStringInteger                    = 11
  // #OPC_EmitRegister                         = 0
  // #OPC_EmitConvertToTarget                  = 53
  // #OPC_EmitMergeInputChains                 = 66
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 15
  // #OPC_EmitNodeXForm                        = 0
  // #OPC_CompleteMatch                        = 0
  // #OPC_MorphNodeTo                          = 133

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
  case 0: return (!Subtarget->getHasAlu32());
  case 1: return (Subtarget->getHasAlu32());
  case 2: return (CurDAG->getDataLayout().isLittleEndian());
  case 3: return (!CurDAG->getDataLayout().isLittleEndian());
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
    // Predicate_i64immSExt32
    // Predicate_i32immSExt32
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return isInt<32>(N->getSExtValue()); 
  }
  case 1: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 2: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 3: { 
    // Predicate_truncstorei32
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 4: { 
    // Predicate_truncstorei16
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 5: { 
    // Predicate_truncstorei8
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 6: { 
    // Predicate_store
    SDNode *N = Node;
    (void)N;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 7: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 8: { 
    // Predicate_zextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::ZEXTLOAD) return false;
return true;

  }
  case 9: { 
    // Predicate_zextloadi32
    // Predicate_extloadi32
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 10: { 
    // Predicate_zextloadi16
    // Predicate_extloadi16
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 11: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getMemoryVT() != MVT::i8) return false;
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
    // Predicate_extload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::EXTLOAD) return false;
return true;

  }
  case 14: { 
    // Predicate_atomic_load_add_32
    SDNode *N = Node;
    (void)N;
if (cast<AtomicSDNode>(N)->getMemoryVT() != MVT::i32) return false;
return true;

  }
  case 15: { 
    // Predicate_atomic_load_add_64
    SDNode *N = Node;
    (void)N;
if (cast<AtomicSDNode>(N)->getMemoryVT() != MVT::i64) return false;
return true;

  }
  case 16: { 
    // Predicate_BPF_CC_EQ
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETEQ);
  }
  case 17: { 
    // Predicate_BPF_CC_GTU
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETUGT);
  }
  case 18: { 
    // Predicate_BPF_CC_GEU
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETUGE);
  }
  case 19: { 
    // Predicate_BPF_CC_NE
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETNE);
  }
  case 20: { 
    // Predicate_BPF_CC_GT
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETGT);
  }
  case 21: { 
    // Predicate_BPF_CC_GE
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETGE);
  }
  case 22: { 
    // Predicate_BPF_CC_LTU
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETULT);
  }
  case 23: { 
    // Predicate_BPF_CC_LEU
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETULE);
  }
  case 24: { 
    // Predicate_BPF_CC_LT
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETLT);
  }
  case 25: { 
    // Predicate_BPF_CC_LE
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;
return (N->getZExtValue() == ISD::SETLE);
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
  return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectFIAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
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

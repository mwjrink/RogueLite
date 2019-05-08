/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo,
                                bool matchingInlineAsm,
                                unsigned VariantID = 0);
#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint16_t {
  Feature_HasSIMD128 = (1ULL << 3),
  Feature_HasUnimplementedSIMD128 = (1ULL << 5),
  Feature_HasAtomics = (1ULL << 0),
  Feature_HasNontrappingFPToInt = (1ULL << 2),
  Feature_NotHasNontrappingFPToInt = (1ULL << 7),
  Feature_HasSignExt = (1ULL << 4),
  Feature_NotHasSignExt = (1ULL << 8),
  Feature_HasExceptionHandling = (1ULL << 1),
  Feature_NotHasExceptionHandling = (1ULL << 6),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasSIMD128: return "simd128";
  case Feature_HasUnimplementedSIMD128: return "unimplemented-simd128";
  case Feature_HasAtomics: return "atomics";
  case Feature_HasNontrappingFPToInt: return "nontrapping-fptoint";
  case Feature_NotHasNontrappingFPToInt: return "nontrapping-fptoint";
  case Feature_HasSignExt: return "sign-ext";
  case Feature_NotHasSignExt: return "sign-ext";
  case Feature_HasExceptionHandling: return "exception-handling";
  case Feature_NotHasExceptionHandling: return "exception-handling";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static const uint8_t TiedAsmOperandTable[][3] = { /* empty  */ {0, 0, 0} };

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addImmOperands,
  CVT_95_addBrListOperands,
  CVT_imm_95_0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_0,
  Convert__BrList1_0,
  Convert__Imm1_0__imm_95_0,
  Convert_NoOperands,
  Convert__Imm1_0__Imm1_1,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7,
  Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][33] = {
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__BrList1_0
  { CVT_95_addBrListOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__Imm1_0__Imm1_1
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_Done },
  // Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15
  { CVT_95_addImmOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 6, CVT_95_addImmOperands, 7, CVT_95_addImmOperands, 8, CVT_95_addImmOperands, 9, CVT_95_addImmOperands, 10, CVT_95_addImmOperands, 11, CVT_95_addImmOperands, 12, CVT_95_addImmOperands, 13, CVT_95_addImmOperands, 14, CVT_95_addImmOperands, 15, CVT_95_addImmOperands, 16, CVT_Done },
};

void WebAssemblyAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  unsigned OpIdx;
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    OpIdx = *(p + 1);
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied: {
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                          std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned TiedResOpnd = TiedAsmOperandTable[OpIdx][0];
      if (TiedResOpnd != (uint8_t) -1)
        Inst.addOperand(Inst.getOperand(TiedResOpnd));
      break;
    }
    case CVT_95_addImmOperands:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addBrListOperands:
      static_cast<WebAssemblyOperand&>(*Operands[OpIdx]).addBrListOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    }
  }
}

void WebAssemblyAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addBrListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  OptionalMatchClass = 1,
  MCK_LAST_TOKEN = OptionalMatchClass,
  MCK_EXCEPT_REF, // register class 'EXCEPT_REF'
  MCK_F32, // register class 'F32'
  MCK_F64, // register class 'F64'
  MCK_V128, // register class 'V128'
  MCK_I32, // register class 'I32'
  MCK_I64, // register class 'I64'
  MCK_LAST_REGISTER = MCK_I64,
  MCK_BrList, // user defined class 'BrListAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  NumMatchClassKinds
};

}

static unsigned getDiagKindFromRegisterClass(MatchClassKind RegisterClass) {
  return MCTargetAsmParser::Match_InvalidOperand;
}

static MatchClassKind matchTokenString(StringRef Name) {
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  return false;
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  WebAssemblyOperand &Operand = (WebAssemblyOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken() && Kind <= MCK_LAST_TOKEN)
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  switch (Kind) {
  default: break;
  // 'BrList' class
  case MCK_BrList: {
    DiagnosticPredicate DP(Operand.isBrList());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  // 'Imm' class
  case MCK_Imm: {
    DiagnosticPredicate DP(Operand.isImm());
    if (DP.isMatch())
      return MCTargetAsmParser::Match_Success;
    break;
    }
  } // end switch (Kind)

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case WebAssembly::FP32: OpKind = MCK_I32; break;
    case WebAssembly::FP64: OpKind = MCK_I64; break;
    case WebAssembly::SP32: OpKind = MCK_I32; break;
    case WebAssembly::SP64: OpKind = MCK_I64; break;
    case WebAssembly::I32_0: OpKind = MCK_I32; break;
    case WebAssembly::I64_0: OpKind = MCK_I64; break;
    case WebAssembly::F32_0: OpKind = MCK_F32; break;
    case WebAssembly::F64_0: OpKind = MCK_F64; break;
    case WebAssembly::V128_0: OpKind = MCK_V128; break;
    case WebAssembly::EXCEPT_REF_0: OpKind = MCK_EXCEPT_REF; break;
    }
    return isSubclass(OpKind, Kind) ? (unsigned)MCTargetAsmParser::Match_Success :
                                      getDiagKindFromRegisterClass(Kind);
  }

  if (Kind > MCK_LAST_TOKEN && Kind <= MCK_LAST_REGISTER)
    return getDiagKindFromRegisterClass(Kind);

  return MCTargetAsmParser::Match_InvalidOperand;
}

#ifndef NDEBUG
const char *getMatchClassName(MatchClassKind Kind) {
  switch (Kind) {
  case InvalidMatchClass: return "InvalidMatchClass";
  case OptionalMatchClass: return "OptionalMatchClass";
  case MCK_EXCEPT_REF: return "MCK_EXCEPT_REF";
  case MCK_F32: return "MCK_F32";
  case MCK_F64: return "MCK_F64";
  case MCK_V128: return "MCK_V128";
  case MCK_I32: return "MCK_I32";
  case MCK_I64: return "MCK_I64";
  case MCK_BrList: return "MCK_BrList";
  case MCK_Imm: return "MCK_Imm";
  case NumMatchClassKinds: return "NumMatchClassKinds";
  }
  llvm_unreachable("unhandled MatchClassKind!");
}

#endif // NDEBUG
uint64_t WebAssemblyAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[WebAssembly::FeatureSIMD128]))
    Features |= Feature_HasSIMD128;
  if ((FB[WebAssembly::FeatureUnimplementedSIMD128]))
    Features |= Feature_HasUnimplementedSIMD128;
  if ((FB[WebAssembly::FeatureAtomics]))
    Features |= Feature_HasAtomics;
  if ((FB[WebAssembly::FeatureNontrappingFPToInt]))
    Features |= Feature_HasNontrappingFPToInt;
  if ((!FB[WebAssembly::FeatureNontrappingFPToInt]))
    Features |= Feature_NotHasNontrappingFPToInt;
  if ((FB[WebAssembly::FeatureSignExt]))
    Features |= Feature_HasSignExt;
  if ((!FB[WebAssembly::FeatureSignExt]))
    Features |= Feature_NotHasSignExt;
  if ((FB[WebAssembly::FeatureExceptionHandling]))
    Features |= Feature_HasExceptionHandling;
  if ((!FB[WebAssembly::FeatureExceptionHandling]))
    Features |= Feature_NotHasExceptionHandling;
  return Features;
}

static bool checkAsmTiedOperandConstraints(const WebAssemblyAsmParser&AsmParser,
                               unsigned Kind,
                               const OperandVector &Operands,
                               uint64_t &ErrorInfo) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    case CVT_Tied: {
      unsigned OpIdx = *(p+1);
      assert(OpIdx < (size_t)(std::end(TiedAsmOperandTable) -
                              std::begin(TiedAsmOperandTable)) &&
             "Tied operand not found");
      unsigned OpndNum1 = TiedAsmOperandTable[OpIdx][1];
      unsigned OpndNum2 = TiedAsmOperandTable[OpIdx][2];
      if (OpndNum1 != OpndNum2) {
        auto &SrcOp1 = Operands[OpndNum1];
        auto &SrcOp2 = Operands[OpndNum2];
        if (SrcOp1->isReg() && SrcOp2->isReg()) {
          if (!AsmParser.regsEqual(*SrcOp1, *SrcOp2)) {
            ErrorInfo = OpndNum2;
            return false;
          }
        }
      }
      break;
    }
    default:
      break;
    }
  }
  return true;
}

static const char *const MnemonicTable =
    "\015atomic.notify\005block\002br\005br_if\010br_table\004call\015call_i"
    "ndirect\tcatch_all\004drop\004else\tend_block\014end_function\006end_if"
    "\010end_loop\007end_try\017except_ref.call\030except_ref.call_indirect\021"
    "except_ref.select\007f32.abs\007f32.add\010f32.call\021f32.call_indirec"
    "t\010f32.ceil\tf32.const\021f32.convert_i32_s\021f32.convert_i32_u\021f"
    "32.convert_i64_s\021f32.convert_i64_u\014f32.copysign\016f32.demote_f64"
    "\007f32.div\006f32.eq\tf32.floor\006f32.ge\006f32.gt\006f32.le\010f32.l"
    "oad\006f32.lt\007f32.max\007f32.min\007f32.mul\006f32.ne\013f32.nearest"
    "\007f32.neg\023f32.reinterpret_i32\nf32.select\010f32.sqrt\tf32.store\007"
    "f32.sub\tf32.trunc\tf32x4.abs\tf32x4.add\025f32x4.convert_i32x4_s\025f3"
    "2x4.convert_i32x4_u\tf32x4.div\010f32x4.eq\022f32x4.extract_lane\010f32"
    "x4.ge\010f32x4.gt\010f32x4.le\010f32x4.lt\tf32x4.max\tf32x4.min\tf32x4."
    "mul\010f32x4.ne\tf32x4.neg\022f32x4.replace_lane\013f32x4.splat\nf32x4."
    "sqrt\tf32x4.sub\007f64.abs\007f64.add\010f64.call\021f64.call_indirect\010"
    "f64.ceil\tf64.const\021f64.convert_i32_s\021f64.convert_i32_u\021f64.co"
    "nvert_i64_s\021f64.convert_i64_u\014f64.copysign\007f64.div\006f64.eq\t"
    "f64.floor\006f64.ge\006f64.gt\006f64.le\010f64.load\006f64.lt\007f64.ma"
    "x\007f64.min\007f64.mul\006f64.ne\013f64.nearest\007f64.neg\017f64.prom"
    "ote_f32\023f64.reinterpret_i64\nf64.select\010f64.sqrt\tf64.store\007f6"
    "4.sub\tf64.trunc\tf64x2.abs\tf64x2.add\025f64x2.convert_i64x2_s\025f64x"
    "2.convert_i64x2_u\tf64x2.div\010f64x2.eq\022f64x2.extract_lane\010f64x2"
    ".ge\010f64x2.gt\010f64x2.le\010f64x2.lt\tf64x2.max\tf64x2.min\tf64x2.mu"
    "l\010f64x2.ne\tf64x2.neg\022f64x2.replace_lane\013f64x2.splat\nf64x2.sq"
    "rt\tf64x2.sub\nglobal.get\nglobal.set\ti16x8.add\024i16x8.add_saturate_"
    "s\024i16x8.add_saturate_u\016i16x8.all_true\016i16x8.any_true\010i16x8."
    "eq\024i16x8.extract_lane_s\024i16x8.extract_lane_u\ni16x8.ge_s\ni16x8.g"
    "e_u\ni16x8.gt_s\ni16x8.gt_u\ni16x8.le_s\ni16x8.le_u\ni16x8.lt_s\ni16x8."
    "lt_u\ti16x8.mul\010i16x8.ne\ti16x8.neg\022i16x8.replace_lane\ti16x8.shl"
    "\013i16x8.shr_s\013i16x8.shr_u\013i16x8.splat\ti16x8.sub\024i16x8.sub_s"
    "aturate_s\024i16x8.sub_saturate_u\007i32.add\007i32.and\017i32.atomic.l"
    "oad\023i32.atomic.load16_u\022i32.atomic.load8_u\022i32.atomic.rmw.add\022"
    "i32.atomic.rmw.and\026i32.atomic.rmw.cmpxchg\021i32.atomic.rmw.or\022i3"
    "2.atomic.rmw.sub\023i32.atomic.rmw.xchg\022i32.atomic.rmw.xor\026i32.at"
    "omic.rmw16.add_u\026i32.atomic.rmw16.and_u\032i32.atomic.rmw16.cmpxchg_"
    "u\025i32.atomic.rmw16.or_u\026i32.atomic.rmw16.sub_u\027i32.atomic.rmw1"
    "6.xchg_u\026i32.atomic.rmw16.xor_u\025i32.atomic.rmw8.add_u\025i32.atom"
    "ic.rmw8.and_u\031i32.atomic.rmw8.cmpxchg_u\024i32.atomic.rmw8.or_u\025i"
    "32.atomic.rmw8.sub_u\026i32.atomic.rmw8.xchg_u\025i32.atomic.rmw8.xor_u"
    "\020i32.atomic.store\022i32.atomic.store16\021i32.atomic.store8\017i32."
    "atomic.wait\010i32.call\021i32.call_indirect\ti32.catch\007i32.clz\ti32"
    ".const\007i32.ctz\ti32.div_s\ti32.div_u\006i32.eq\007i32.eqz\016i32.ext"
    "end16_s\015i32.extend8_s\010i32.ge_s\010i32.ge_u\010i32.gt_s\010i32.gt_"
    "u\010i32.le_s\010i32.le_u\010i32.load\014i32.load16_s\014i32.load16_u\013"
    "i32.load8_s\013i32.load8_u\010i32.lt_s\010i32.lt_u\007i32.mul\006i32.ne"
    "\006i32.or\ni32.popcnt\023i32.reinterpret_f32\ti32.rem_s\ti32.rem_u\010"
    "i32.rotl\010i32.rotr\ni32.select\007i32.shl\ti32.shr_s\ti32.shr_u\ti32."
    "store\013i32.store16\ni32.store8\007i32.sub\017i32.trunc_f32_s\017i32.t"
    "runc_f32_u\017i32.trunc_f64_s\017i32.trunc_f64_u\023i32.trunc_sat_f32_s"
    "\023i32.trunc_sat_f32_u\023i32.trunc_sat_f64_s\023i32.trunc_sat_f64_u\014"
    "i32.wrap_i64\007i32.xor\ti32x4.add\016i32x4.all_true\016i32x4.any_true\010"
    "i32x4.eq\022i32x4.extract_lane\ni32x4.ge_s\ni32x4.ge_u\ni32x4.gt_s\ni32"
    "x4.gt_u\ni32x4.le_s\ni32x4.le_u\ni32x4.lt_s\ni32x4.lt_u\ti32x4.mul\010i"
    "32x4.ne\ti32x4.neg\022i32x4.replace_lane\ti32x4.shl\013i32x4.shr_s\013i"
    "32x4.shr_u\013i32x4.splat\ti32x4.sub\027i32x4.trunc_sat_f32x4_s\027i32x"
    "4.trunc_sat_f32x4_u\007i64.add\007i64.and\017i64.atomic.load\023i64.ato"
    "mic.load16_u\023i64.atomic.load32_u\022i64.atomic.load8_u\022i64.atomic"
    ".rmw.add\022i64.atomic.rmw.and\026i64.atomic.rmw.cmpxchg\021i64.atomic."
    "rmw.or\022i64.atomic.rmw.sub\023i64.atomic.rmw.xchg\022i64.atomic.rmw.x"
    "or\026i64.atomic.rmw16.add_u\026i64.atomic.rmw16.and_u\032i64.atomic.rm"
    "w16.cmpxchg_u\025i64.atomic.rmw16.or_u\026i64.atomic.rmw16.sub_u\027i64"
    ".atomic.rmw16.xchg_u\026i64.atomic.rmw16.xor_u\026i64.atomic.rmw32.add_"
    "u\026i64.atomic.rmw32.and_u\032i64.atomic.rmw32.cmpxchg_u\025i64.atomic"
    ".rmw32.or_u\026i64.atomic.rmw32.sub_u\027i64.atomic.rmw32.xchg_u\026i64"
    ".atomic.rmw32.xor_u\025i64.atomic.rmw8.add_u\025i64.atomic.rmw8.and_u\031"
    "i64.atomic.rmw8.cmpxchg_u\024i64.atomic.rmw8.or_u\025i64.atomic.rmw8.su"
    "b_u\026i64.atomic.rmw8.xchg_u\025i64.atomic.rmw8.xor_u\020i64.atomic.st"
    "ore\022i64.atomic.store16\022i64.atomic.store32\021i64.atomic.store8\017"
    "i64.atomic.wait\010i64.call\021i64.call_indirect\ti64.catch\007i64.clz\t"
    "i64.const\007i64.ctz\ti64.div_s\ti64.div_u\006i64.eq\007i64.eqz\016i64."
    "extend16_s\016i64.extend32_s\015i64.extend8_s\020i64.extend_i32_s\020i6"
    "4.extend_i32_u\010i64.ge_s\010i64.ge_u\010i64.gt_s\010i64.gt_u\010i64.l"
    "e_s\010i64.le_u\010i64.load\014i64.load16_s\014i64.load16_u\014i64.load"
    "32_s\014i64.load32_u\013i64.load8_s\013i64.load8_u\010i64.lt_s\010i64.l"
    "t_u\007i64.mul\006i64.ne\006i64.or\ni64.popcnt\023i64.reinterpret_f64\t"
    "i64.rem_s\ti64.rem_u\010i64.rotl\010i64.rotr\ni64.select\007i64.shl\ti6"
    "4.shr_s\ti64.shr_u\ti64.store\013i64.store16\013i64.store32\ni64.store8"
    "\007i64.sub\017i64.trunc_f32_s\017i64.trunc_f32_u\017i64.trunc_f64_s\017"
    "i64.trunc_f64_u\023i64.trunc_sat_f32_s\023i64.trunc_sat_f32_u\023i64.tr"
    "unc_sat_f64_s\023i64.trunc_sat_f64_u\007i64.xor\ti64x2.add\016i64x2.all"
    "_true\016i64x2.any_true\022i64x2.extract_lane\ti64x2.neg\022i64x2.repla"
    "ce_lane\ti64x2.shl\013i64x2.shr_s\013i64x2.shr_u\013i64x2.splat\ti64x2."
    "sub\027i64x2.trunc_sat_f64x2_s\027i64x2.trunc_sat_f64x2_u\ti8x16.add\024"
    "i8x16.add_saturate_s\024i8x16.add_saturate_u\016i8x16.all_true\016i8x16"
    ".any_true\010i8x16.eq\024i8x16.extract_lane_s\024i8x16.extract_lane_u\n"
    "i8x16.ge_s\ni8x16.ge_u\ni8x16.gt_s\ni8x16.gt_u\ni8x16.le_s\ni8x16.le_u\n"
    "i8x16.lt_s\ni8x16.lt_u\ti8x16.mul\010i8x16.ne\ti8x16.neg\022i8x16.repla"
    "ce_lane\ti8x16.shl\013i8x16.shr_s\013i8x16.shr_u\013i8x16.splat\ti8x16."
    "sub\024i8x16.sub_saturate_s\024i8x16.sub_saturate_u\002if\tlocal.get\tl"
    "ocal.set\tlocal.tee\004loop\013memory.grow\013memory.size\003nop\007ret"
    "hrow\006return\005throw\003try\013unreachable\010v128.and\016v128.bitse"
    "lect\tv128.call\022v128.call_indirect\nv128.const\tv128.load\010v128.no"
    "t\007v128.or\nv128.store\010v128.xor\015v8x16.shuffle";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint16_t RequiredFeatures;
    uint8_t Classes[16];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* atomic.notify */, WebAssembly::ATOMIC_NOTIFY_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 14 /* block */, WebAssembly::BLOCK_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 20 /* br */, WebAssembly::BR_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 23 /* br_if */, WebAssembly::BR_IF_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 29 /* br_table */, WebAssembly::BR_TABLE_I32_S, Convert__BrList1_0, 0, { MCK_BrList }, },
  { 29 /* br_table */, WebAssembly::BR_TABLE_I64_S, Convert__BrList1_0, 0, { MCK_BrList }, },
  { 38 /* call */, WebAssembly::CALL_VOID_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 43 /* call_indirect */, WebAssembly::CALL_INDIRECT_VOID_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 57 /* catch_all */, WebAssembly::CATCH_ALL_S, Convert_NoOperands, Feature_HasExceptionHandling, {  }, },
  { 67 /* drop */, WebAssembly::DROP_EXCEPT_REF_S, Convert_NoOperands, Feature_HasExceptionHandling, {  }, },
  { 67 /* drop */, WebAssembly::DROP_V128_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 67 /* drop */, WebAssembly::DROP_F32_S, Convert_NoOperands, 0, {  }, },
  { 67 /* drop */, WebAssembly::DROP_F64_S, Convert_NoOperands, 0, {  }, },
  { 67 /* drop */, WebAssembly::DROP_I32_S, Convert_NoOperands, 0, {  }, },
  { 67 /* drop */, WebAssembly::DROP_I64_S, Convert_NoOperands, 0, {  }, },
  { 72 /* else */, WebAssembly::ELSE_S, Convert_NoOperands, 0, {  }, },
  { 77 /* end_block */, WebAssembly::END_BLOCK_S, Convert_NoOperands, 0, {  }, },
  { 87 /* end_function */, WebAssembly::END_FUNCTION_S, Convert_NoOperands, 0, {  }, },
  { 100 /* end_if */, WebAssembly::END_IF_S, Convert_NoOperands, 0, {  }, },
  { 107 /* end_loop */, WebAssembly::END_LOOP_S, Convert_NoOperands, 0, {  }, },
  { 116 /* end_try */, WebAssembly::END_TRY_S, Convert_NoOperands, Feature_HasExceptionHandling, {  }, },
  { 124 /* except_ref.call */, WebAssembly::CALL_EXCEPT_REF_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 140 /* except_ref.call_indirect */, WebAssembly::CALL_INDIRECT_EXCEPT_REF_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 165 /* except_ref.select */, WebAssembly::SELECT_EXCEPT_REF_S, Convert_NoOperands, 0, {  }, },
  { 183 /* f32.abs */, WebAssembly::ABS_F32_S, Convert_NoOperands, 0, {  }, },
  { 191 /* f32.add */, WebAssembly::ADD_F32_S, Convert_NoOperands, 0, {  }, },
  { 199 /* f32.call */, WebAssembly::CALL_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 208 /* f32.call_indirect */, WebAssembly::CALL_INDIRECT_F32_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 226 /* f32.ceil */, WebAssembly::CEIL_F32_S, Convert_NoOperands, 0, {  }, },
  { 235 /* f32.const */, WebAssembly::CONST_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 245 /* f32.convert_i32_s */, WebAssembly::F32_CONVERT_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 263 /* f32.convert_i32_u */, WebAssembly::F32_CONVERT_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 281 /* f32.convert_i64_s */, WebAssembly::F32_CONVERT_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 299 /* f32.convert_i64_u */, WebAssembly::F32_CONVERT_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 317 /* f32.copysign */, WebAssembly::COPYSIGN_F32_S, Convert_NoOperands, 0, {  }, },
  { 330 /* f32.demote_f64 */, WebAssembly::F32_DEMOTE_F64_S, Convert_NoOperands, 0, {  }, },
  { 345 /* f32.div */, WebAssembly::DIV_F32_S, Convert_NoOperands, 0, {  }, },
  { 353 /* f32.eq */, WebAssembly::EQ_F32_S, Convert_NoOperands, 0, {  }, },
  { 360 /* f32.floor */, WebAssembly::FLOOR_F32_S, Convert_NoOperands, 0, {  }, },
  { 370 /* f32.ge */, WebAssembly::GE_F32_S, Convert_NoOperands, 0, {  }, },
  { 377 /* f32.gt */, WebAssembly::GT_F32_S, Convert_NoOperands, 0, {  }, },
  { 384 /* f32.le */, WebAssembly::LE_F32_S, Convert_NoOperands, 0, {  }, },
  { 391 /* f32.load */, WebAssembly::LOAD_F32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 400 /* f32.lt */, WebAssembly::LT_F32_S, Convert_NoOperands, 0, {  }, },
  { 407 /* f32.max */, WebAssembly::MAX_F32_S, Convert_NoOperands, 0, {  }, },
  { 415 /* f32.min */, WebAssembly::MIN_F32_S, Convert_NoOperands, 0, {  }, },
  { 423 /* f32.mul */, WebAssembly::MUL_F32_S, Convert_NoOperands, 0, {  }, },
  { 431 /* f32.ne */, WebAssembly::NE_F32_S, Convert_NoOperands, 0, {  }, },
  { 438 /* f32.nearest */, WebAssembly::NEAREST_F32_S, Convert_NoOperands, 0, {  }, },
  { 450 /* f32.neg */, WebAssembly::NEG_F32_S, Convert_NoOperands, 0, {  }, },
  { 458 /* f32.reinterpret_i32 */, WebAssembly::F32_REINTERPRET_I32_S, Convert_NoOperands, 0, {  }, },
  { 478 /* f32.select */, WebAssembly::SELECT_F32_S, Convert_NoOperands, 0, {  }, },
  { 489 /* f32.sqrt */, WebAssembly::SQRT_F32_S, Convert_NoOperands, 0, {  }, },
  { 498 /* f32.store */, WebAssembly::STORE_F32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 508 /* f32.sub */, WebAssembly::SUB_F32_S, Convert_NoOperands, 0, {  }, },
  { 516 /* f32.trunc */, WebAssembly::TRUNC_F32_S, Convert_NoOperands, 0, {  }, },
  { 526 /* f32x4.abs */, WebAssembly::ABS_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 536 /* f32x4.add */, WebAssembly::ADD_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 546 /* f32x4.convert_i32x4_s */, WebAssembly::sint_to_fp_v4f32_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 568 /* f32x4.convert_i32x4_u */, WebAssembly::uint_to_fp_v4f32_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 590 /* f32x4.div */, WebAssembly::DIV_v4f32_S, Convert_NoOperands, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, {  }, },
  { 600 /* f32x4.eq */, WebAssembly::EQ_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 609 /* f32x4.extract_lane */, WebAssembly::EXTRACT_LANE_v4f32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 628 /* f32x4.ge */, WebAssembly::GE_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 637 /* f32x4.gt */, WebAssembly::GT_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 646 /* f32x4.le */, WebAssembly::LE_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 655 /* f32x4.lt */, WebAssembly::LT_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 664 /* f32x4.max */, WebAssembly::MAX_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 674 /* f32x4.min */, WebAssembly::MIN_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 684 /* f32x4.mul */, WebAssembly::MUL_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 694 /* f32x4.ne */, WebAssembly::NE_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 703 /* f32x4.neg */, WebAssembly::NEG_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 713 /* f32x4.replace_lane */, WebAssembly::REPLACE_LANE_v4f32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 732 /* f32x4.splat */, WebAssembly::SPLAT_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 744 /* f32x4.sqrt */, WebAssembly::SQRT_v4f32_S, Convert_NoOperands, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, {  }, },
  { 755 /* f32x4.sub */, WebAssembly::SUB_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 765 /* f64.abs */, WebAssembly::ABS_F64_S, Convert_NoOperands, 0, {  }, },
  { 773 /* f64.add */, WebAssembly::ADD_F64_S, Convert_NoOperands, 0, {  }, },
  { 781 /* f64.call */, WebAssembly::CALL_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 790 /* f64.call_indirect */, WebAssembly::CALL_INDIRECT_F64_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 808 /* f64.ceil */, WebAssembly::CEIL_F64_S, Convert_NoOperands, 0, {  }, },
  { 817 /* f64.const */, WebAssembly::CONST_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 827 /* f64.convert_i32_s */, WebAssembly::F64_CONVERT_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 845 /* f64.convert_i32_u */, WebAssembly::F64_CONVERT_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 863 /* f64.convert_i64_s */, WebAssembly::F64_CONVERT_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 881 /* f64.convert_i64_u */, WebAssembly::F64_CONVERT_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 899 /* f64.copysign */, WebAssembly::COPYSIGN_F64_S, Convert_NoOperands, 0, {  }, },
  { 912 /* f64.div */, WebAssembly::DIV_F64_S, Convert_NoOperands, 0, {  }, },
  { 920 /* f64.eq */, WebAssembly::EQ_F64_S, Convert_NoOperands, 0, {  }, },
  { 927 /* f64.floor */, WebAssembly::FLOOR_F64_S, Convert_NoOperands, 0, {  }, },
  { 937 /* f64.ge */, WebAssembly::GE_F64_S, Convert_NoOperands, 0, {  }, },
  { 944 /* f64.gt */, WebAssembly::GT_F64_S, Convert_NoOperands, 0, {  }, },
  { 951 /* f64.le */, WebAssembly::LE_F64_S, Convert_NoOperands, 0, {  }, },
  { 958 /* f64.load */, WebAssembly::LOAD_F64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 967 /* f64.lt */, WebAssembly::LT_F64_S, Convert_NoOperands, 0, {  }, },
  { 974 /* f64.max */, WebAssembly::MAX_F64_S, Convert_NoOperands, 0, {  }, },
  { 982 /* f64.min */, WebAssembly::MIN_F64_S, Convert_NoOperands, 0, {  }, },
  { 990 /* f64.mul */, WebAssembly::MUL_F64_S, Convert_NoOperands, 0, {  }, },
  { 998 /* f64.ne */, WebAssembly::NE_F64_S, Convert_NoOperands, 0, {  }, },
  { 1005 /* f64.nearest */, WebAssembly::NEAREST_F64_S, Convert_NoOperands, 0, {  }, },
  { 1017 /* f64.neg */, WebAssembly::NEG_F64_S, Convert_NoOperands, 0, {  }, },
  { 1025 /* f64.promote_f32 */, WebAssembly::F64_PROMOTE_F32_S, Convert_NoOperands, 0, {  }, },
  { 1041 /* f64.reinterpret_i64 */, WebAssembly::F64_REINTERPRET_I64_S, Convert_NoOperands, 0, {  }, },
  { 1061 /* f64.select */, WebAssembly::SELECT_F64_S, Convert_NoOperands, 0, {  }, },
  { 1072 /* f64.sqrt */, WebAssembly::SQRT_F64_S, Convert_NoOperands, 0, {  }, },
  { 1081 /* f64.store */, WebAssembly::STORE_F64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1091 /* f64.sub */, WebAssembly::SUB_F64_S, Convert_NoOperands, 0, {  }, },
  { 1099 /* f64.trunc */, WebAssembly::TRUNC_F64_S, Convert_NoOperands, 0, {  }, },
  { 1109 /* f64x2.abs */, WebAssembly::ABS_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1119 /* f64x2.add */, WebAssembly::ADD_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1129 /* f64x2.convert_i64x2_s */, WebAssembly::sint_to_fp_v2f64_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1151 /* f64x2.convert_i64x2_u */, WebAssembly::uint_to_fp_v2f64_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1173 /* f64x2.div */, WebAssembly::DIV_v2f64_S, Convert_NoOperands, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, {  }, },
  { 1183 /* f64x2.eq */, WebAssembly::EQ_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1192 /* f64x2.extract_lane */, WebAssembly::EXTRACT_LANE_v2f64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1211 /* f64x2.ge */, WebAssembly::GE_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1220 /* f64x2.gt */, WebAssembly::GT_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1229 /* f64x2.le */, WebAssembly::LE_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1238 /* f64x2.lt */, WebAssembly::LT_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1247 /* f64x2.max */, WebAssembly::MAX_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1257 /* f64x2.min */, WebAssembly::MIN_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1267 /* f64x2.mul */, WebAssembly::MUL_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1277 /* f64x2.ne */, WebAssembly::NE_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1286 /* f64x2.neg */, WebAssembly::NEG_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1296 /* f64x2.replace_lane */, WebAssembly::REPLACE_LANE_v2f64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1315 /* f64x2.splat */, WebAssembly::SPLAT_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1327 /* f64x2.sqrt */, WebAssembly::SQRT_v2f64_S, Convert_NoOperands, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, {  }, },
  { 1338 /* f64x2.sub */, WebAssembly::SUB_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_EXCEPT_REF_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_V128_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1348 /* global.get */, WebAssembly::GLOBAL_GET_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_EXCEPT_REF_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_V128_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1359 /* global.set */, WebAssembly::GLOBAL_SET_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 1370 /* i16x8.add */, WebAssembly::ADD_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1380 /* i16x8.add_saturate_s */, WebAssembly::ADD_SAT_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1401 /* i16x8.add_saturate_u */, WebAssembly::ADD_SAT_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1422 /* i16x8.all_true */, WebAssembly::ALLTRUE_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1437 /* i16x8.any_true */, WebAssembly::ANYTRUE_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1452 /* i16x8.eq */, WebAssembly::EQ_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1461 /* i16x8.extract_lane_s */, WebAssembly::EXTRACT_LANE_v8i16_s_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1482 /* i16x8.extract_lane_u */, WebAssembly::EXTRACT_LANE_v8i16_u_S, Convert__Imm1_0, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm }, },
  { 1503 /* i16x8.ge_s */, WebAssembly::GE_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1514 /* i16x8.ge_u */, WebAssembly::GE_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1525 /* i16x8.gt_s */, WebAssembly::GT_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1536 /* i16x8.gt_u */, WebAssembly::GT_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1547 /* i16x8.le_s */, WebAssembly::LE_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1558 /* i16x8.le_u */, WebAssembly::LE_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1569 /* i16x8.lt_s */, WebAssembly::LT_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1580 /* i16x8.lt_u */, WebAssembly::LT_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1591 /* i16x8.mul */, WebAssembly::MUL_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1601 /* i16x8.ne */, WebAssembly::NE_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1610 /* i16x8.neg */, WebAssembly::NEG_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1620 /* i16x8.replace_lane */, WebAssembly::REPLACE_LANE_v8i16_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 1639 /* i16x8.shl */, WebAssembly::SHL_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1649 /* i16x8.shr_s */, WebAssembly::SHR_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1661 /* i16x8.shr_u */, WebAssembly::SHR_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1673 /* i16x8.splat */, WebAssembly::SPLAT_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1685 /* i16x8.sub */, WebAssembly::SUB_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1695 /* i16x8.sub_saturate_s */, WebAssembly::SUB_SAT_S_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1716 /* i16x8.sub_saturate_u */, WebAssembly::SUB_SAT_U_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 1737 /* i32.add */, WebAssembly::ADD_I32_S, Convert_NoOperands, 0, {  }, },
  { 1745 /* i32.and */, WebAssembly::AND_I32_S, Convert_NoOperands, 0, {  }, },
  { 1753 /* i32.atomic.load */, WebAssembly::ATOMIC_LOAD_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1769 /* i32.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1789 /* i32.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1808 /* i32.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1827 /* i32.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1846 /* i32.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1869 /* i32.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1887 /* i32.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1906 /* i32.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1926 /* i32.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1945 /* i32.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1968 /* i32.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 1991 /* i32.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2018 /* i32.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2040 /* i32.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2063 /* i32.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2087 /* i32.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2110 /* i32.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2132 /* i32.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2154 /* i32.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2180 /* i32.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2201 /* i32.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2223 /* i32.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2246 /* i32.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2268 /* i32.atomic.store */, WebAssembly::ATOMIC_STORE_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2285 /* i32.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2304 /* i32.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2322 /* i32.atomic.wait */, WebAssembly::ATOMIC_WAIT_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2338 /* i32.call */, WebAssembly::CALL_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 2347 /* i32.call_indirect */, WebAssembly::CALL_INDIRECT_I32_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 2365 /* i32.catch */, WebAssembly::CATCH_I32_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 2375 /* i32.clz */, WebAssembly::CLZ_I32_S, Convert_NoOperands, 0, {  }, },
  { 2383 /* i32.const */, WebAssembly::CONST_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 2393 /* i32.ctz */, WebAssembly::CTZ_I32_S, Convert_NoOperands, 0, {  }, },
  { 2401 /* i32.div_s */, WebAssembly::DIV_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2411 /* i32.div_u */, WebAssembly::DIV_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2421 /* i32.eq */, WebAssembly::EQ_I32_S, Convert_NoOperands, 0, {  }, },
  { 2428 /* i32.eqz */, WebAssembly::EQZ_I32_S, Convert_NoOperands, 0, {  }, },
  { 2436 /* i32.extend16_s */, WebAssembly::I32_EXTEND16_S_I32_S, Convert_NoOperands, Feature_HasSignExt, {  }, },
  { 2451 /* i32.extend8_s */, WebAssembly::I32_EXTEND8_S_I32_S, Convert_NoOperands, Feature_HasSignExt, {  }, },
  { 2465 /* i32.ge_s */, WebAssembly::GE_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2474 /* i32.ge_u */, WebAssembly::GE_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2483 /* i32.gt_s */, WebAssembly::GT_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2492 /* i32.gt_u */, WebAssembly::GT_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2501 /* i32.le_s */, WebAssembly::LE_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2510 /* i32.le_u */, WebAssembly::LE_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2519 /* i32.load */, WebAssembly::LOAD_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2528 /* i32.load16_s */, WebAssembly::LOAD16_S_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2541 /* i32.load16_u */, WebAssembly::LOAD16_U_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2554 /* i32.load8_s */, WebAssembly::LOAD8_S_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2566 /* i32.load8_u */, WebAssembly::LOAD8_U_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2578 /* i32.lt_s */, WebAssembly::LT_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2587 /* i32.lt_u */, WebAssembly::LT_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2596 /* i32.mul */, WebAssembly::MUL_I32_S, Convert_NoOperands, 0, {  }, },
  { 2604 /* i32.ne */, WebAssembly::NE_I32_S, Convert_NoOperands, 0, {  }, },
  { 2611 /* i32.or */, WebAssembly::OR_I32_S, Convert_NoOperands, 0, {  }, },
  { 2618 /* i32.popcnt */, WebAssembly::POPCNT_I32_S, Convert_NoOperands, 0, {  }, },
  { 2629 /* i32.reinterpret_f32 */, WebAssembly::I32_REINTERPRET_F32_S, Convert_NoOperands, 0, {  }, },
  { 2649 /* i32.rem_s */, WebAssembly::REM_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2659 /* i32.rem_u */, WebAssembly::REM_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2669 /* i32.rotl */, WebAssembly::ROTL_I32_S, Convert_NoOperands, 0, {  }, },
  { 2678 /* i32.rotr */, WebAssembly::ROTR_I32_S, Convert_NoOperands, 0, {  }, },
  { 2687 /* i32.select */, WebAssembly::SELECT_I32_S, Convert_NoOperands, 0, {  }, },
  { 2698 /* i32.shl */, WebAssembly::SHL_I32_S, Convert_NoOperands, 0, {  }, },
  { 2706 /* i32.shr_s */, WebAssembly::SHR_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 2716 /* i32.shr_u */, WebAssembly::SHR_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 2726 /* i32.store */, WebAssembly::STORE_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2736 /* i32.store16 */, WebAssembly::STORE16_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2748 /* i32.store8 */, WebAssembly::STORE8_I32_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 2759 /* i32.sub */, WebAssembly::SUB_I32_S, Convert_NoOperands, 0, {  }, },
  { 2767 /* i32.trunc_f32_s */, WebAssembly::I32_TRUNC_S_F32_S, Convert_NoOperands, 0, {  }, },
  { 2783 /* i32.trunc_f32_u */, WebAssembly::I32_TRUNC_U_F32_S, Convert_NoOperands, 0, {  }, },
  { 2799 /* i32.trunc_f64_s */, WebAssembly::I32_TRUNC_S_F64_S, Convert_NoOperands, 0, {  }, },
  { 2815 /* i32.trunc_f64_u */, WebAssembly::I32_TRUNC_U_F64_S, Convert_NoOperands, 0, {  }, },
  { 2831 /* i32.trunc_sat_f32_s */, WebAssembly::I32_TRUNC_S_SAT_F32_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 2851 /* i32.trunc_sat_f32_u */, WebAssembly::I32_TRUNC_U_SAT_F32_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 2871 /* i32.trunc_sat_f64_s */, WebAssembly::I32_TRUNC_S_SAT_F64_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 2891 /* i32.trunc_sat_f64_u */, WebAssembly::I32_TRUNC_U_SAT_F64_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 2911 /* i32.wrap_i64 */, WebAssembly::I32_WRAP_I64_S, Convert_NoOperands, 0, {  }, },
  { 2924 /* i32.xor */, WebAssembly::XOR_I32_S, Convert_NoOperands, 0, {  }, },
  { 2932 /* i32x4.add */, WebAssembly::ADD_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 2942 /* i32x4.all_true */, WebAssembly::ALLTRUE_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 2957 /* i32x4.any_true */, WebAssembly::ANYTRUE_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 2972 /* i32x4.eq */, WebAssembly::EQ_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 2981 /* i32x4.extract_lane */, WebAssembly::EXTRACT_LANE_v4i32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 3000 /* i32x4.ge_s */, WebAssembly::GE_S_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3011 /* i32x4.ge_u */, WebAssembly::GE_U_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3022 /* i32x4.gt_s */, WebAssembly::GT_S_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3033 /* i32x4.gt_u */, WebAssembly::GT_U_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3044 /* i32x4.le_s */, WebAssembly::LE_S_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3055 /* i32x4.le_u */, WebAssembly::LE_U_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3066 /* i32x4.lt_s */, WebAssembly::LT_S_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3077 /* i32x4.lt_u */, WebAssembly::LT_U_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3088 /* i32x4.mul */, WebAssembly::MUL_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3098 /* i32x4.ne */, WebAssembly::NE_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3107 /* i32x4.neg */, WebAssembly::NEG_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3117 /* i32x4.replace_lane */, WebAssembly::REPLACE_LANE_v4i32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 3136 /* i32x4.shl */, WebAssembly::SHL_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3146 /* i32x4.shr_s */, WebAssembly::SHR_S_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3158 /* i32x4.shr_u */, WebAssembly::SHR_U_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3170 /* i32x4.splat */, WebAssembly::SPLAT_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3182 /* i32x4.sub */, WebAssembly::SUB_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3192 /* i32x4.trunc_sat_f32x4_s */, WebAssembly::fp_to_sint_v4i32_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3216 /* i32x4.trunc_sat_f32x4_u */, WebAssembly::fp_to_uint_v4i32_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 3240 /* i64.add */, WebAssembly::ADD_I64_S, Convert_NoOperands, 0, {  }, },
  { 3248 /* i64.and */, WebAssembly::AND_I64_S, Convert_NoOperands, 0, {  }, },
  { 3256 /* i64.atomic.load */, WebAssembly::ATOMIC_LOAD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3272 /* i64.atomic.load16_u */, WebAssembly::ATOMIC_LOAD16_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3292 /* i64.atomic.load32_u */, WebAssembly::ATOMIC_LOAD32_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3312 /* i64.atomic.load8_u */, WebAssembly::ATOMIC_LOAD8_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3331 /* i64.atomic.rmw.add */, WebAssembly::ATOMIC_RMW_ADD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3350 /* i64.atomic.rmw.and */, WebAssembly::ATOMIC_RMW_AND_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3369 /* i64.atomic.rmw.cmpxchg */, WebAssembly::ATOMIC_RMW_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3392 /* i64.atomic.rmw.or */, WebAssembly::ATOMIC_RMW_OR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3410 /* i64.atomic.rmw.sub */, WebAssembly::ATOMIC_RMW_SUB_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3429 /* i64.atomic.rmw.xchg */, WebAssembly::ATOMIC_RMW_XCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3449 /* i64.atomic.rmw.xor */, WebAssembly::ATOMIC_RMW_XOR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3468 /* i64.atomic.rmw16.add_u */, WebAssembly::ATOMIC_RMW16_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3491 /* i64.atomic.rmw16.and_u */, WebAssembly::ATOMIC_RMW16_U_AND_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3514 /* i64.atomic.rmw16.cmpxchg_u */, WebAssembly::ATOMIC_RMW16_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3541 /* i64.atomic.rmw16.or_u */, WebAssembly::ATOMIC_RMW16_U_OR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3563 /* i64.atomic.rmw16.sub_u */, WebAssembly::ATOMIC_RMW16_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3586 /* i64.atomic.rmw16.xchg_u */, WebAssembly::ATOMIC_RMW16_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3610 /* i64.atomic.rmw16.xor_u */, WebAssembly::ATOMIC_RMW16_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3633 /* i64.atomic.rmw32.add_u */, WebAssembly::ATOMIC_RMW32_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3656 /* i64.atomic.rmw32.and_u */, WebAssembly::ATOMIC_RMW32_U_AND_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3679 /* i64.atomic.rmw32.cmpxchg_u */, WebAssembly::ATOMIC_RMW32_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3706 /* i64.atomic.rmw32.or_u */, WebAssembly::ATOMIC_RMW32_U_OR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3728 /* i64.atomic.rmw32.sub_u */, WebAssembly::ATOMIC_RMW32_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3751 /* i64.atomic.rmw32.xchg_u */, WebAssembly::ATOMIC_RMW32_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3775 /* i64.atomic.rmw32.xor_u */, WebAssembly::ATOMIC_RMW32_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3798 /* i64.atomic.rmw8.add_u */, WebAssembly::ATOMIC_RMW8_U_ADD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3820 /* i64.atomic.rmw8.and_u */, WebAssembly::ATOMIC_RMW8_U_AND_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3842 /* i64.atomic.rmw8.cmpxchg_u */, WebAssembly::ATOMIC_RMW8_U_CMPXCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3868 /* i64.atomic.rmw8.or_u */, WebAssembly::ATOMIC_RMW8_U_OR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3889 /* i64.atomic.rmw8.sub_u */, WebAssembly::ATOMIC_RMW8_U_SUB_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3911 /* i64.atomic.rmw8.xchg_u */, WebAssembly::ATOMIC_RMW8_U_XCHG_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3934 /* i64.atomic.rmw8.xor_u */, WebAssembly::ATOMIC_RMW8_U_XOR_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3956 /* i64.atomic.store */, WebAssembly::ATOMIC_STORE_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3973 /* i64.atomic.store16 */, WebAssembly::ATOMIC_STORE16_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 3992 /* i64.atomic.store32 */, WebAssembly::ATOMIC_STORE32_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4011 /* i64.atomic.store8 */, WebAssembly::ATOMIC_STORE8_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4029 /* i64.atomic.wait */, WebAssembly::ATOMIC_WAIT_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4045 /* i64.call */, WebAssembly::CALL_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 4054 /* i64.call_indirect */, WebAssembly::CALL_INDIRECT_I64_S, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 4072 /* i64.catch */, WebAssembly::CATCH_I64_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 4082 /* i64.clz */, WebAssembly::CLZ_I64_S, Convert_NoOperands, 0, {  }, },
  { 4090 /* i64.const */, WebAssembly::CONST_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 4100 /* i64.ctz */, WebAssembly::CTZ_I64_S, Convert_NoOperands, 0, {  }, },
  { 4108 /* i64.div_s */, WebAssembly::DIV_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4118 /* i64.div_u */, WebAssembly::DIV_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4128 /* i64.eq */, WebAssembly::EQ_I64_S, Convert_NoOperands, 0, {  }, },
  { 4135 /* i64.eqz */, WebAssembly::EQZ_I64_S, Convert_NoOperands, 0, {  }, },
  { 4143 /* i64.extend16_s */, WebAssembly::I64_EXTEND16_S_I64_S, Convert_NoOperands, Feature_HasSignExt, {  }, },
  { 4158 /* i64.extend32_s */, WebAssembly::I64_EXTEND32_S_I64_S, Convert_NoOperands, Feature_HasSignExt, {  }, },
  { 4173 /* i64.extend8_s */, WebAssembly::I64_EXTEND8_S_I64_S, Convert_NoOperands, Feature_HasSignExt, {  }, },
  { 4187 /* i64.extend_i32_s */, WebAssembly::I64_EXTEND_S_I32_S, Convert_NoOperands, 0, {  }, },
  { 4204 /* i64.extend_i32_u */, WebAssembly::I64_EXTEND_U_I32_S, Convert_NoOperands, 0, {  }, },
  { 4221 /* i64.ge_s */, WebAssembly::GE_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4230 /* i64.ge_u */, WebAssembly::GE_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4239 /* i64.gt_s */, WebAssembly::GT_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4248 /* i64.gt_u */, WebAssembly::GT_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4257 /* i64.le_s */, WebAssembly::LE_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4266 /* i64.le_u */, WebAssembly::LE_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4275 /* i64.load */, WebAssembly::LOAD_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4284 /* i64.load16_s */, WebAssembly::LOAD16_S_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4297 /* i64.load16_u */, WebAssembly::LOAD16_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4310 /* i64.load32_s */, WebAssembly::LOAD32_S_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4323 /* i64.load32_u */, WebAssembly::LOAD32_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4336 /* i64.load8_s */, WebAssembly::LOAD8_S_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4348 /* i64.load8_u */, WebAssembly::LOAD8_U_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4360 /* i64.lt_s */, WebAssembly::LT_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4369 /* i64.lt_u */, WebAssembly::LT_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4378 /* i64.mul */, WebAssembly::MUL_I64_S, Convert_NoOperands, 0, {  }, },
  { 4386 /* i64.ne */, WebAssembly::NE_I64_S, Convert_NoOperands, 0, {  }, },
  { 4393 /* i64.or */, WebAssembly::OR_I64_S, Convert_NoOperands, 0, {  }, },
  { 4400 /* i64.popcnt */, WebAssembly::POPCNT_I64_S, Convert_NoOperands, 0, {  }, },
  { 4411 /* i64.reinterpret_f64 */, WebAssembly::I64_REINTERPRET_F64_S, Convert_NoOperands, 0, {  }, },
  { 4431 /* i64.rem_s */, WebAssembly::REM_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4441 /* i64.rem_u */, WebAssembly::REM_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4451 /* i64.rotl */, WebAssembly::ROTL_I64_S, Convert_NoOperands, 0, {  }, },
  { 4460 /* i64.rotr */, WebAssembly::ROTR_I64_S, Convert_NoOperands, 0, {  }, },
  { 4469 /* i64.select */, WebAssembly::SELECT_I64_S, Convert_NoOperands, 0, {  }, },
  { 4480 /* i64.shl */, WebAssembly::SHL_I64_S, Convert_NoOperands, 0, {  }, },
  { 4488 /* i64.shr_s */, WebAssembly::SHR_S_I64_S, Convert_NoOperands, 0, {  }, },
  { 4498 /* i64.shr_u */, WebAssembly::SHR_U_I64_S, Convert_NoOperands, 0, {  }, },
  { 4508 /* i64.store */, WebAssembly::STORE_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4518 /* i64.store16 */, WebAssembly::STORE16_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4530 /* i64.store32 */, WebAssembly::STORE32_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4542 /* i64.store8 */, WebAssembly::STORE8_I64_S, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 4553 /* i64.sub */, WebAssembly::SUB_I64_S, Convert_NoOperands, 0, {  }, },
  { 4561 /* i64.trunc_f32_s */, WebAssembly::I64_TRUNC_S_F32_S, Convert_NoOperands, 0, {  }, },
  { 4577 /* i64.trunc_f32_u */, WebAssembly::I64_TRUNC_U_F32_S, Convert_NoOperands, 0, {  }, },
  { 4593 /* i64.trunc_f64_s */, WebAssembly::I64_TRUNC_S_F64_S, Convert_NoOperands, 0, {  }, },
  { 4609 /* i64.trunc_f64_u */, WebAssembly::I64_TRUNC_U_F64_S, Convert_NoOperands, 0, {  }, },
  { 4625 /* i64.trunc_sat_f32_s */, WebAssembly::I64_TRUNC_S_SAT_F32_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 4645 /* i64.trunc_sat_f32_u */, WebAssembly::I64_TRUNC_U_SAT_F32_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 4665 /* i64.trunc_sat_f64_s */, WebAssembly::I64_TRUNC_S_SAT_F64_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 4685 /* i64.trunc_sat_f64_u */, WebAssembly::I64_TRUNC_U_SAT_F64_S, Convert_NoOperands, Feature_HasNontrappingFPToInt, {  }, },
  { 4705 /* i64.xor */, WebAssembly::XOR_I64_S, Convert_NoOperands, 0, {  }, },
  { 4713 /* i64x2.add */, WebAssembly::ADD_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4723 /* i64x2.all_true */, WebAssembly::ALLTRUE_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4738 /* i64x2.any_true */, WebAssembly::ANYTRUE_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4753 /* i64x2.extract_lane */, WebAssembly::EXTRACT_LANE_v2i64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 4772 /* i64x2.neg */, WebAssembly::NEG_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4782 /* i64x2.replace_lane */, WebAssembly::REPLACE_LANE_v2i64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 4801 /* i64x2.shl */, WebAssembly::SHL_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4811 /* i64x2.shr_s */, WebAssembly::SHR_S_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4823 /* i64x2.shr_u */, WebAssembly::SHR_U_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4835 /* i64x2.splat */, WebAssembly::SPLAT_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4847 /* i64x2.sub */, WebAssembly::SUB_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4857 /* i64x2.trunc_sat_f64x2_s */, WebAssembly::fp_to_sint_v2i64_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4881 /* i64x2.trunc_sat_f64x2_u */, WebAssembly::fp_to_uint_v2i64_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4905 /* i8x16.add */, WebAssembly::ADD_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4915 /* i8x16.add_saturate_s */, WebAssembly::ADD_SAT_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4936 /* i8x16.add_saturate_u */, WebAssembly::ADD_SAT_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4957 /* i8x16.all_true */, WebAssembly::ALLTRUE_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4972 /* i8x16.any_true */, WebAssembly::ANYTRUE_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4987 /* i8x16.eq */, WebAssembly::EQ_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 4996 /* i8x16.extract_lane_s */, WebAssembly::EXTRACT_LANE_v16i8_s_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5017 /* i8x16.extract_lane_u */, WebAssembly::EXTRACT_LANE_v16i8_u_S, Convert__Imm1_0, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm }, },
  { 5038 /* i8x16.ge_s */, WebAssembly::GE_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5049 /* i8x16.ge_u */, WebAssembly::GE_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5060 /* i8x16.gt_s */, WebAssembly::GT_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5071 /* i8x16.gt_u */, WebAssembly::GT_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5082 /* i8x16.le_s */, WebAssembly::LE_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5093 /* i8x16.le_u */, WebAssembly::LE_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5104 /* i8x16.lt_s */, WebAssembly::LT_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5115 /* i8x16.lt_u */, WebAssembly::LT_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5126 /* i8x16.mul */, WebAssembly::MUL_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5136 /* i8x16.ne */, WebAssembly::NE_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5145 /* i8x16.neg */, WebAssembly::NEG_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5155 /* i8x16.replace_lane */, WebAssembly::REPLACE_LANE_v16i8_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5174 /* i8x16.shl */, WebAssembly::SHL_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5184 /* i8x16.shr_s */, WebAssembly::SHR_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5196 /* i8x16.shr_u */, WebAssembly::SHR_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5208 /* i8x16.splat */, WebAssembly::SPLAT_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5220 /* i8x16.sub */, WebAssembly::SUB_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5230 /* i8x16.sub_saturate_s */, WebAssembly::SUB_SAT_S_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5251 /* i8x16.sub_saturate_u */, WebAssembly::SUB_SAT_U_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5272 /* if */, WebAssembly::IF_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_EXCEPT_REF_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_V128_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5275 /* local.get */, WebAssembly::LOCAL_GET_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_EXCEPT_REF_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_V128_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5285 /* local.set */, WebAssembly::LOCAL_SET_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_EXCEPT_REF_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_V128_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_F32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_F64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5295 /* local.tee */, WebAssembly::LOCAL_TEE_I64_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5305 /* loop */, WebAssembly::LOOP_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5310 /* memory.grow */, WebAssembly::MEMORY_GROW_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5322 /* memory.size */, WebAssembly::MEMORY_SIZE_I32_S, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 5334 /* nop */, WebAssembly::NOP_S, Convert_NoOperands, 0, {  }, },
  { 5338 /* rethrow */, WebAssembly::RETHROW_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5346 /* return */, WebAssembly::RETURN_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_EXCEPT_REF_S, Convert_NoOperands, 0, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_F32_S, Convert_NoOperands, 0, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_F64_S, Convert_NoOperands, 0, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_I32_S, Convert_NoOperands, 0, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_I64_S, Convert_NoOperands, 0, {  }, },
  { 5346 /* return */, WebAssembly::RETURN_VOID_S, Convert_NoOperands, 0, {  }, },
  { 5353 /* throw */, WebAssembly::THROW_I32_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5353 /* throw */, WebAssembly::THROW_I64_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5359 /* try */, WebAssembly::TRY_S, Convert__Imm1_0, Feature_HasExceptionHandling, { MCK_Imm }, },
  { 5363 /* unreachable */, WebAssembly::UNREACHABLE_S, Convert_NoOperands, 0, {  }, },
  { 5375 /* v128.and */, WebAssembly::AND_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5375 /* v128.and */, WebAssembly::AND_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5375 /* v128.and */, WebAssembly::AND_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5375 /* v128.and */, WebAssembly::AND_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v2f64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v4f32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5384 /* v128.bitselect */, WebAssembly::BITSELECT_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v16i8_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v2f64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v2i64_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v4f32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v4i32_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5399 /* v128.call */, WebAssembly::CALL_v8i16_S, Convert__Imm1_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v16i8_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v2f64_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v2i64_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v4f32_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v4i32_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5409 /* v128.call_indirect */, WebAssembly::CALL_INDIRECT_v8i16_S, Convert__Imm1_0__imm_95_0, Feature_HasSIMD128, { MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v2f64_S, Convert__Imm1_0__Imm1_1, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v2i64_S, Convert__Imm1_0__Imm1_1, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v4f32_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v4i32_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v8i16_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 5428 /* v128.const */, WebAssembly::CONST_V128_v16i8_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, Feature_HasSIMD128|Feature_HasUnimplementedSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v16i8_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v2f64_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v2i64_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v4f32_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v4i32_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5439 /* v128.load */, WebAssembly::LOAD_v8i16_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5449 /* v128.not */, WebAssembly::NOT_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5449 /* v128.not */, WebAssembly::NOT_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5449 /* v128.not */, WebAssembly::NOT_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5449 /* v128.not */, WebAssembly::NOT_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5458 /* v128.or */, WebAssembly::OR_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5458 /* v128.or */, WebAssembly::OR_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5458 /* v128.or */, WebAssembly::OR_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5458 /* v128.or */, WebAssembly::OR_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v16i8_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v2f64_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v2i64_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v4f32_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v4i32_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5466 /* v128.store */, WebAssembly::STORE_v8i16_S, Convert__Imm1_1__Imm1_0, Feature_HasSIMD128, { MCK_Imm, MCK_Imm }, },
  { 5477 /* v128.xor */, WebAssembly::XOR_v16i8_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5477 /* v128.xor */, WebAssembly::XOR_v2i64_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5477 /* v128.xor */, WebAssembly::XOR_v4i32_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5477 /* v128.xor */, WebAssembly::XOR_v8i16_S, Convert_NoOperands, Feature_HasSIMD128, {  }, },
  { 5486 /* v8x16.shuffle */, WebAssembly::SHUFFLE_S, Convert__Imm1_0__Imm1_1__Imm1_2__Imm1_3__Imm1_4__Imm1_5__Imm1_6__Imm1_7__Imm1_8__Imm1_9__Imm1_10__Imm1_11__Imm1_12__Imm1_13__Imm1_14__Imm1_15, Feature_HasSIMD128, { MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm, MCK_Imm }, },
};

#include "llvm/Support/Debug.h"
#include "llvm/Support/Format.h"

unsigned WebAssemblyAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst,
                     uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 17) {
    ErrorInfo = 17;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((WebAssemblyOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  DEBUG_WITH_TYPE("asm-matcher", dbgs() << "AsmMatcher: found " <<
  std::distance(MnemonicRange.first, MnemonicRange.second) << 
  " encodings with mnemonic '" << Mnemonic << "'\n");

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    bool HasRequiredFeatures =
      (AvailableFeatures & it->RequiredFeatures) == it->RequiredFeatures;
    DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Trying to match opcode "
                                          << MII.getName(it->Opcode) << "\n");
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned FormalIdx = 0, ActualIdx = 1; FormalIdx != 16; ++FormalIdx) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[FormalIdx]);
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "  Matching formal operand class " << getMatchClassName(Formal)
                             << " against actual operand at index " << ActualIdx);
      if (ActualIdx < Operands.size())
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << " (";
                        Operands[ActualIdx]->print(dbgs()); dbgs() << "): ");
      else
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << ": ");
      if (ActualIdx >= Operands.size()) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "actual operand index out of range ");
        OperandsValid = (Formal == InvalidMatchClass) || isSubclass(Formal, OptionalMatchClass);
        if (!OperandsValid) ErrorInfo = ActualIdx;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[ActualIdx];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success) {
        DEBUG_WITH_TYPE("asm-matcher",
                        dbgs() << "match success using generic matcher\n");
        ++ActualIdx;
        continue;
      }
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag != Match_Success) {
        unsigned TargetDiag = validateTargetOperandClass(Actual, Formal);
        if (TargetDiag == Match_Success) {
          DEBUG_WITH_TYPE("asm-matcher",
                          dbgs() << "match success using target matcher\n");
          ++ActualIdx;
          continue;
        }
        // If the target matcher returned a specific error code use
        // that, else use the one from the generic matcher.
        if (TargetDiag != Match_InvalidOperand && HasRequiredFeatures)
          Diag = TargetDiag;
      }
      // If current formal operand wasn't matched and it is optional
      // then try to match next formal operand
      if (Diag == Match_InvalidOperand && isSubclass(Formal, OptionalMatchClass)) {
        DEBUG_WITH_TYPE("asm-matcher", dbgs() << "ignoring optional operand\n");
        continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= ActualIdx)) {
        if (HasRequiredFeatures && (ErrorInfo != ActualIdx || Diag != Match_InvalidOperand))
          RetCode = Diag;
        ErrorInfo = ActualIdx;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) {
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Opcode result: multiple "
                                               "operand mismatches, ignoring "
                                               "this opcode\n");
      continue;
    }
    if (!HasRequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      DEBUG_WITH_TYPE("asm-matcher", dbgs() << "Missing target features: "
                                            << format_hex(NewMissingFeatures, 18)
                                            << "\n");
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    Inst.setOpcode(it->Opcode);
    // We have a potential match but have not rendered the operands.
    // Check the target predicate to handle any context sensitive
    // constraints.
    // For example, Ties that are referenced multiple times must be
    // checked here to ensure the input is the same for each match
    // constraints. If we leave it any later the ties will have been
    // canonicalized
    unsigned MatchResult;
    if ((MatchResult = checkEarlyTargetMatchPredicate(Inst, Operands)) != Match_Success) {
      Inst.clear();
      DEBUG_WITH_TYPE(
          "asm-matcher",
          dbgs() << "Early target match predicate failed with diag code "
                 << MatchResult << "\n");
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (matchingInlineAsm) {
      convertToMapAndConstraints(it->ConvertFn, Operands);
      if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
        return Match_InvalidTiedOperand;

      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      DEBUG_WITH_TYPE("asm-matcher",
                      dbgs() << "Target match predicate failed with diag code "
                             << MatchResult << "\n");
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    if (!checkAsmTiedOperandConstraints(*this, it->ConvertFn, Operands, ErrorInfo))
      return Match_InvalidTiedOperand;

    DEBUG_WITH_TYPE(
        "asm-matcher",
        dbgs() << "Opcode result: complete match, selecting this opcode\n");
    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

#endif // GET_MATCHER_IMPLEMENTATION


#ifdef GET_MNEMONIC_SPELL_CHECKER
#undef GET_MNEMONIC_SPELL_CHECKER

static std::string WebAssemblyMnemonicSpellCheck(StringRef S, uint64_t FBS, unsigned VariantID) {
  const unsigned MaxEditDist = 2;
  std::vector<StringRef> Candidates;
  StringRef Prev = "";

  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }

  for (auto I = Start; I < End; I++) {
    // Ignore unsupported instructions.
    if ((FBS & I->RequiredFeatures) != I->RequiredFeatures)
      continue;

    StringRef T = I->getMnemonic();
    // Avoid recomputing the edit distance for the same string.
    if (T.equals(Prev))
      continue;

    Prev = T;
    unsigned Dist = S.edit_distance(T, false, MaxEditDist);
    if (Dist <= MaxEditDist)
      Candidates.push_back(T);
  }

  if (Candidates.empty())
    return "";

  std::string Res = ", did you mean: ";
  unsigned i = 0;
  for( ; i < Candidates.size() - 1; i++)
    Res += Candidates[i].str() + ", ";
  return Res + Candidates[i].str() + "?";
}

#endif // GET_MNEMONIC_SPELL_CHECKER


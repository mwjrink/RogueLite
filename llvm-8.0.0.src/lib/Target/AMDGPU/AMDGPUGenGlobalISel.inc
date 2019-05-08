/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the AMDGPU target                          *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 33;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MatcherState State;
  typedef ComplexRendererFns(AMDGPUInstructionSelector::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AMDGPUInstructionSelector::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr&) const;
  const ISelInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ISelInfo;
  static AMDGPUInstructionSelector::ComplexMatcherMemFn ComplexPredicateFns[];
  static AMDGPUInstructionSelector::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const int64_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI) const override;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, State(3),
ISelInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_isSICIBit = 3,
  Feature_isVIBit = 2,
  Feature_isGFX9Bit = 6,
  Feature_isCIVIBit = 7,
  Feature_HasFlatAddressSpaceBit = 8,
  Feature_HasFlatGlobalInstsBit = 9,
  Feature_HasUnpackedD16VMemBit = 20,
  Feature_HasPackedD16VMemBit = 21,
  Feature_D16PreservesUnusedBitsBit = 19,
  Feature_LDSRequiresM0InitBit = 31,
  Feature_NotLDSRequiresM0InitBit = 32,
  Feature_HasAddNoCarryInstsBit = 14,
  Feature_Has16BitInstsBit = 4,
  Feature_HasVOP3PInstsBit = 23,
  Feature_HasMadMixInstsBit = 15,
  Feature_has16BankLDSBit = 12,
  Feature_has32BankLDSBit = 11,
  Feature_HasFmaMixInstsBit = 16,
  Feature_HasDLInstsBit = 30,
  Feature_HasDotInstsBit = 17,
  Feature_EnableLateCFGStructurizeBit = 13,
  Feature_TruePredicateBit = 0,
  Feature_FP16DenormalsBit = 25,
  Feature_FP32DenormalsBit = 27,
  Feature_FP64DenormalsBit = 29,
  Feature_NoFP16DenormalsBit = 24,
  Feature_NoFP32DenormalsBit = 26,
  Feature_NoFP64DenormalsBit = 28,
  Feature_UnsafeFPMathBit = 22,
  Feature_isCIOnlyBit = 18,
  Feature_isVIOnlyBit = 5,
  Feature_isGCNBit = 1,
  Feature_isSIBit = 10,
};

PredicateBitset AMDGPUInstructionSelector::
computeAvailableModuleFeatures(const AMDGPUSubtarget *Subtarget) const {
  PredicateBitset Features;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isSICIBit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::VOLCANIC_ISLANDS)
    Features[Feature_isVIBit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::GFX9)
    Features[Feature_isGFX9Bit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isCIVIBit] = 1;
  if (Subtarget->hasFlatAddressSpace())
    Features[Feature_HasFlatAddressSpaceBit] = 1;
  if (Subtarget->hasFlatGlobalInsts())
    Features[Feature_HasFlatGlobalInstsBit] = 1;
  if (Subtarget->hasUnpackedD16VMem())
    Features[Feature_HasUnpackedD16VMemBit] = 1;
  if (!Subtarget->hasUnpackedD16VMem())
    Features[Feature_HasPackedD16VMemBit] = 1;
  if (Subtarget->hasD16LoadStore() && !Subtarget->isSRAMECCEnabled())
    Features[Feature_D16PreservesUnusedBitsBit] = 1;
  if (Subtarget->ldsRequiresM0Init())
    Features[Feature_LDSRequiresM0InitBit] = 1;
  if (!Subtarget->ldsRequiresM0Init())
    Features[Feature_NotLDSRequiresM0InitBit] = 1;
  if (Subtarget->hasAddNoCarry())
    Features[Feature_HasAddNoCarryInstsBit] = 1;
  if (Subtarget->has16BitInsts())
    Features[Feature_Has16BitInstsBit] = 1;
  if (Subtarget->hasVOP3PInsts())
    Features[Feature_HasVOP3PInstsBit] = 1;
  if (Subtarget->hasMadMixInsts())
    Features[Feature_HasMadMixInstsBit] = 1;
  if (Subtarget->getLDSBankCount() == 16)
    Features[Feature_has16BankLDSBit] = 1;
  if (Subtarget->getLDSBankCount() == 32)
    Features[Feature_has32BankLDSBit] = 1;
  if (Subtarget->hasFmaMixInsts())
    Features[Feature_HasFmaMixInstsBit] = 1;
  if (Subtarget->hasDLInsts())
    Features[Feature_HasDLInstsBit] = 1;
  if (Subtarget->hasDotInsts())
    Features[Feature_HasDotInstsBit] = 1;
  if (EnableLateStructurizeCFG)
    Features[Feature_EnableLateCFGStructurizeBit] = 1;
  if (true)
    Features[Feature_TruePredicateBit] = 1;
  if (Subtarget->hasFP16Denormals())
    Features[Feature_FP16DenormalsBit] = 1;
  if (Subtarget->hasFP32Denormals())
    Features[Feature_FP32DenormalsBit] = 1;
  if (Subtarget->hasFP64Denormals())
    Features[Feature_FP64DenormalsBit] = 1;
  if (!Subtarget->hasFP16Denormals())
    Features[Feature_NoFP16DenormalsBit] = 1;
  if (!Subtarget->hasFP32Denormals())
    Features[Feature_NoFP32DenormalsBit] = 1;
  if (!Subtarget->hasFP64Denormals())
    Features[Feature_NoFP64DenormalsBit] = 1;
  if (TM.Options.UnsafeFPMath)
    Features[Feature_UnsafeFPMathBit] = 1;
  if (Subtarget->getGeneration() ==AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isCIOnlyBit] = 1;
  if (Subtarget->getGeneration() ==AMDGPUSubtarget::VOLCANIC_ISLANDS)
    Features[Feature_isVIOnlyBit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::SOUTHERN_ISLANDS)
    Features[Feature_isGCNBit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
    Features[Feature_isSIBit] = 1;
  return Features;
}

PredicateBitset AMDGPUInstructionSelector::
computeAvailableFunctionFeatures(const AMDGPUSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  return Features;
}

// LLT Objects.
enum {
  GILLT_s1,
  GILLT_s16,
  GILLT_s32,
  GILLT_s64,
  GILLT_v2s16,
  GILLT_v2s32,
  GILLT_v2s64,
  GILLT_v4s16,
  GILLT_v4s32,
  GILLT_v8s32,
  GILLT_v16s32,
};
const static size_t NumTypeObjects = 11;
const static LLT TypeObjects[] = {
  LLT::scalar(1),
  LLT::scalar(16),
  LLT::scalar(32),
  LLT::scalar(64),
  LLT::vector(2, 16),
  LLT::vector(2, 32),
  LLT::vector(2, 64),
  LLT::vector(4, 16),
  LLT::vector(4, 32),
  LLT::vector(8, 32),
  LLT::vector(16, 32),
};

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_Has16BitInsts,
  GIFBS_isGCN,
  GIFBS_isSICI,
  GIFBS_Has16BitInsts_isVIOnly,
  GIFBS_TruePredicate_isCIVI,
  GIFBS_TruePredicate_isGCN,
  GIFBS_TruePredicate_isSI,
  GIFBS_TruePredicate_isSICI,
  GIFBS_TruePredicate_isVI,
};
const static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_Has16BitInstsBit, },
  {Feature_isGCNBit, },
  {Feature_isSICIBit, },
  {Feature_Has16BitInstsBit, Feature_isVIOnlyBit, },
  {Feature_TruePredicateBit, Feature_isCIVIBit, },
  {Feature_TruePredicateBit, Feature_isGCNBit, },
  {Feature_TruePredicateBit, Feature_isSIBit, },
  {Feature_TruePredicateBit, Feature_isSICIBit, },
  {Feature_TruePredicateBit, Feature_isVIBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
  GICP_gi_vcsrc,
  GICP_gi_vop3mods,
  GICP_gi_vop3mods0,
  GICP_gi_vop3omods,
  GICP_gi_vsrc0,
};
// See constructor for table contents

// PatFrag predicates.
enum {
  GIPFP_I64_Predicate_NegSubInlineConst16 = GIPFP_I64_Invalid + 1,
  GIPFP_I64_Predicate_NegSubInlineConst32,
};
bool AMDGPUInstructionSelector::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  switch (PredicateID) {
  case GIPFP_I64_Predicate_NegSubInlineConst16: {
    
  return Imm < -16 && Imm >= -64;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_NegSubInlineConst32: {
    
  return Imm < -16 && Imm >= -64;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AMDGPUInstructionSelector::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AMDGPUInstructionSelector::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AMDGPUInstructionSelector::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI) const {
  const MachineFunction &MF = *MI.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  (void)MRI;
  llvm_unreachable("Unknown predicate");
  return false;
}

AMDGPUInstructionSelector::ComplexMatcherMemFn
AMDGPUInstructionSelector::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
  &AMDGPUInstructionSelector::selectVCSRC, // gi_vcsrc
  &AMDGPUInstructionSelector::selectVOP3Mods, // gi_vop3mods
  &AMDGPUInstructionSelector::selectVOP3Mods0, // gi_vop3mods0
  &AMDGPUInstructionSelector::selectVOP3OMods, // gi_vop3omods
  &AMDGPUInstructionSelector::selectVSRC0, // gi_vsrc0
};

// Custom renderers.
enum {
  GICR_Invalid,
};
AMDGPUInstructionSelector::CustomRendererFn
AMDGPUInstructionSelector::CustomRenderers[] = {
  nullptr, // GICP_Invalid
};

bool AMDGPUInstructionSelector::selectImpl(MachineInstr &I, CodeGenCoverage &CoverageInfo) const {
  MachineFunction &MF = *I.getParent()->getParent();
  MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  NewMIVector OutMIs;
  State.MIs.clear();
  State.MIs.push_back(&I);

  if (executeMatchTable(*this, OutMIs, State, ISelInfo, getMatchTable(), TII, MRI, TRI, RBI, AvailableFeatures, CoverageInfo)) {
    return true;
  }

  return false;
}

const int64_t *AMDGPUInstructionSelector::getMatchTable() const {
  constexpr static int64_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/34, 140, /*)*//*default:*//*Label 29*/ 9870,
    /*TargetOpcode::G_ADD*//*Label 0*/ 111,
    /*TargetOpcode::G_SUB*//*Label 1*/ 308,
    /*TargetOpcode::G_MUL*//*Label 2*/ 339, 0, 0, 0, 0,
    /*TargetOpcode::G_AND*//*Label 3*/ 367,
    /*TargetOpcode::G_OR*//*Label 4*/ 398,
    /*TargetOpcode::G_XOR*//*Label 5*/ 2147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BITCAST*//*Label 6*/ 2251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_INTRINSIC*//*Label 7*/ 4461,
    /*TargetOpcode::G_INTRINSIC_W_SIDE_EFFECTS*//*Label 8*/ 6833, 0, 0,
    /*TargetOpcode::G_CONSTANT*//*Label 9*/ 7132, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_SHL*//*Label 10*/ 7189,
    /*TargetOpcode::G_LSHR*//*Label 11*/ 7220,
    /*TargetOpcode::G_ASHR*//*Label 12*/ 7251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FADD*//*Label 13*/ 7418,
    /*TargetOpcode::G_FSUB*//*Label 14*/ 7768,
    /*TargetOpcode::G_FMUL*//*Label 15*/ 7901,
    /*TargetOpcode::G_FMA*//*Label 16*/ 8251, 0, 0,
    /*TargetOpcode::G_FPOW*//*Label 17*/ 8497, 0,
    /*TargetOpcode::G_FEXP2*//*Label 18*/ 8570, 0,
    /*TargetOpcode::G_FLOG2*//*Label 19*/ 8667, 0, 0,
    /*TargetOpcode::G_FPEXT*//*Label 20*/ 8764,
    /*TargetOpcode::G_FPTRUNC*//*Label 21*/ 8861,
    /*TargetOpcode::G_FPTOSI*//*Label 22*/ 8958,
    /*TargetOpcode::G_FPTOUI*//*Label 23*/ 9192,
    /*TargetOpcode::G_SITOFP*//*Label 24*/ 9426,
    /*TargetOpcode::G_UITOFP*//*Label 25*/ 9556, 0, 0, 0,
    /*TargetOpcode::G_BR*//*Label 26*/ 9686, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_CTPOP*//*Label 27*/ 9701, 0,
    /*TargetOpcode::G_FCEIL*//*Label 28*/ 9728,
    // Label 0: @111
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 32*/ 307,
    /*GILLT_s16*//*Label 30*/ 120, 0,
    /*GILLT_s64*//*Label 31*/ 280,
    // Label 30: @120
    GIM_Try, /*On fail goto*//*Label 33*/ 279,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 34*/ 182, // Rule ID 975 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1), i16:{ *:[i16] }:$src2)  =>  (V_MAD_U16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 975,
        GIR_Done,
      // Label 34: @182
      GIM_Try, /*On fail goto*//*Label 35*/ 230, // Rule ID 976 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1), i16:{ *:[i16] }:$src2)  =>  (V_MAD_I16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_I16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 976,
        GIR_Done,
      // Label 35: @230
      GIM_Try, /*On fail goto*//*Label 36*/ 278, // Rule ID 2121 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } i16:{ *:[i16] }:$src2, (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1))  =>  (V_MAD_U16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2121,
        GIR_Done,
      // Label 36: @278
      GIM_Reject,
    // Label 33: @279
    GIM_Reject,
    // Label 31: @280
    GIM_Try, /*On fail goto*//*Label 37*/ 306, // Rule ID 670 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      // (add:{ *:[i64] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)  =>  (S_ADD_U64_PSEUDO:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_ADD_U64_PSEUDO,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 670,
      GIR_Done,
    // Label 37: @306
    GIM_Reject,
    // Label 32: @307
    GIM_Reject,
    // Label 1: @308
    GIM_Try, /*On fail goto*//*Label 38*/ 338, // Rule ID 671 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      // (sub:{ *:[i64] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)  =>  (S_SUB_U64_PSEUDO:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_SUB_U64_PSEUDO,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 671,
      GIR_Done,
    // Label 38: @338
    GIM_Reject,
    // Label 2: @339
    GIM_Try, /*On fail goto*//*Label 39*/ 366, // Rule ID 43 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // (mul:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (S_MUL_I32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_MUL_I32,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 43,
      GIR_Done,
    // Label 39: @366
    GIM_Reject,
    // Label 3: @367
    GIM_Try, /*On fail goto*//*Label 40*/ 397, // Rule ID 421 //
      GIM_CheckFeatures, GIFBS_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_AND_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_AND_B32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 421,
      GIR_Done,
    // Label 40: @397
    GIM_Reject,
    // Label 4: @398
    GIM_Try, /*On fail goto*//*Label 41*/ 2146,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 42*/ 2101,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_Try, /*On fail goto*//*Label 43*/ 519, // Rule ID 2068 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2068,
          GIR_Done,
        // Label 43: @519
        GIM_Try, /*On fail goto*//*Label 44*/ 620, // Rule ID 2069 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2069,
          GIR_Done,
        // Label 44: @620
        GIM_Try, /*On fail goto*//*Label 45*/ 721, // Rule ID 2070 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2070,
          GIR_Done,
        // Label 45: @721
        GIM_Try, /*On fail goto*//*Label 46*/ 822, // Rule ID 2071 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2071,
          GIR_Done,
        // Label 46: @822
        GIM_Try, /*On fail goto*//*Label 47*/ 923, // Rule ID 2064 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2064,
          GIR_Done,
        // Label 47: @923
        GIM_Try, /*On fail goto*//*Label 48*/ 1024, // Rule ID 2065 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2065,
          GIR_Done,
        // Label 48: @1024
        GIM_Try, /*On fail goto*//*Label 49*/ 1125, // Rule ID 2066 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2066,
          GIR_Done,
        // Label 49: @1125
        GIM_Try, /*On fail goto*//*Label 50*/ 1226, // Rule ID 2067 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2067,
          GIR_Done,
        // Label 50: @1226
        GIM_Try, /*On fail goto*//*Label 51*/ 1327, // Rule ID 2058 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2058,
          GIR_Done,
        // Label 51: @1327
        GIM_Try, /*On fail goto*//*Label 52*/ 1428, // Rule ID 2059 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2059,
          GIR_Done,
        // Label 52: @1428
        GIM_Try, /*On fail goto*//*Label 53*/ 1529, // Rule ID 2062 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2062,
          GIR_Done,
        // Label 53: @1529
        GIM_Try, /*On fail goto*//*Label 54*/ 1630, // Rule ID 2063 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2063,
          GIR_Done,
        // Label 54: @1630
        GIM_Try, /*On fail goto*//*Label 55*/ 1731, // Rule ID 821 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 821,
          GIR_Done,
        // Label 55: @1731
        GIM_Try, /*On fail goto*//*Label 56*/ 1832, // Rule ID 2057 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2057,
          GIR_Done,
        // Label 56: @1832
        GIM_Try, /*On fail goto*//*Label 57*/ 1933, // Rule ID 2060 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2060,
          GIR_Done,
        // Label 57: @1933
        GIM_Try, /*On fail goto*//*Label 58*/ 2034, // Rule ID 2061 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2061,
          GIR_Done,
        // Label 58: @2034
        GIM_Try, /*On fail goto*//*Label 59*/ 2067, // Rule ID 1983 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vsrc0,
          // (or:{ *:[i32] } (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0), VGPR_32:{ *:[i32] }:$src1)  =>  (V_OR_B32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 1983,
          GIR_Done,
        // Label 59: @2067
        GIM_Try, /*On fail goto*//*Label 60*/ 2100, // Rule ID 3255 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
          // (or:{ *:[i32] } VGPR_32:{ *:[i32] }:$src1, (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0))  =>  (V_OR_B32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 3255,
          GIR_Done,
        // Label 60: @2100
        GIM_Reject,
      // Label 42: @2101
      GIM_Try, /*On fail goto*//*Label 61*/ 2127, // Rule ID 1982 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (or:{ *:[i32] } SReg_32:{ *:[i32] }:$src0, SReg_32:{ *:[i32] }:$src1)  =>  (S_OR_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_OR_B32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1982,
        GIR_Done,
      // Label 61: @2127
      GIM_Try, /*On fail goto*//*Label 62*/ 2145, // Rule ID 423 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_OR_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e64,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 423,
        GIR_Done,
      // Label 62: @2145
      GIM_Reject,
    // Label 41: @2146
    GIM_Reject,
    // Label 5: @2147
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/2, 4, /*)*//*default:*//*Label 65*/ 2250,
    /*GILLT_s32*//*Label 63*/ 2155,
    /*GILLT_s64*//*Label 64*/ 2213,
    // Label 63: @2155
    GIM_Try, /*On fail goto*//*Label 66*/ 2212,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 67*/ 2193, // Rule ID 0 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] })  =>  (S_NOT_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_NOT_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 0,
        GIR_Done,
      // Label 67: @2193
      GIM_Try, /*On fail goto*//*Label 68*/ 2211, // Rule ID 425 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_XOR_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_XOR_B32_e64,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 425,
        GIR_Done,
      // Label 68: @2211
      GIM_Reject,
    // Label 66: @2212
    GIM_Reject,
    // Label 64: @2213
    GIM_Try, /*On fail goto*//*Label 69*/ 2249, // Rule ID 1 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:{ *:[i64] } i64:{ *:[i64] }:$src0, -1:{ *:[i64] })  =>  (S_NOT_B64:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_NOT_B64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1,
      GIR_Done,
    // Label 69: @2249
    GIM_Reject,
    // Label 65: @2250
    GIM_Reject,
    // Label 6: @2251
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 11, /*)*//*default:*//*Label 80*/ 4460,
    /*GILLT_s16*//*Label 70*/ 2267,
    /*GILLT_s32*//*Label 71*/ 2395,
    /*GILLT_s64*//*Label 72*/ 2668,
    /*GILLT_v2s16*//*Label 73*/ 3009,
    /*GILLT_v2s32*//*Label 74*/ 3214,
    /*GILLT_v2s64*//*Label 75*/ 3589,
    /*GILLT_v4s16*//*Label 76*/ 3760,
    /*GILLT_v4s32*//*Label 77*/ 4101,
    /*GILLT_v8s32*//*Label 78*/ 4272,
    /*GILLT_v16s32*//*Label 79*/ 4400,
    // Label 70: @2267
    GIM_Try, /*On fail goto*//*Label 81*/ 2394,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_Try, /*On fail goto*//*Label 82*/ 2303, // Rule ID 1629 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (bitconvert:{ *:[i16] } VGPR_32:{ *:[f16] }:$src0)  =>  VGPR_32:{ *:[i16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/2,
        // GIR_Coverage, 1629,
        GIR_Done,
      // Label 82: @2303
      GIM_Try, /*On fail goto*//*Label 83*/ 2333, // Rule ID 1630 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (bitconvert:{ *:[f16] } VGPR_32:{ *:[i16] }:$src0)  =>  VGPR_32:{ *:[f16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/2,
        // GIR_Coverage, 1630,
        GIR_Done,
      // Label 83: @2333
      GIM_Try, /*On fail goto*//*Label 84*/ 2363, // Rule ID 1631 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        // (bitconvert:{ *:[i16] } SReg_32:{ *:[f16] }:$src0)  =>  SReg_32:{ *:[i16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
        // GIR_Coverage, 1631,
        GIR_Done,
      // Label 84: @2363
      GIM_Try, /*On fail goto*//*Label 85*/ 2393, // Rule ID 1632 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        // (bitconvert:{ *:[f16] } SReg_32:{ *:[i16] }:$src0)  =>  SReg_32:{ *:[f16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
        // GIR_Coverage, 1632,
        GIR_Done,
      // Label 85: @2393
      GIM_Reject,
    // Label 81: @2394
    GIM_Reject,
    // Label 71: @2395
    GIM_Try, /*On fail goto*//*Label 86*/ 2429, // Rule ID 1633 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (bitconvert:{ *:[i32] } VGPR_32:{ *:[f32] }:$src0)  =>  VGPR_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/2,
      // GIR_Coverage, 1633,
      GIR_Done,
    // Label 86: @2429
    GIM_Try, /*On fail goto*//*Label 87*/ 2463, // Rule ID 1634 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (bitconvert:{ *:[f32] } VGPR_32:{ *:[i32] }:$src0)  =>  VGPR_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/2,
      // GIR_Coverage, 1634,
      GIR_Done,
    // Label 87: @2463
    GIM_Try, /*On fail goto*//*Label 88*/ 2497, // Rule ID 1635 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1635,
      GIR_Done,
    // Label 88: @2497
    GIM_Try, /*On fail goto*//*Label 89*/ 2531, // Rule ID 1636 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1636,
      GIR_Done,
    // Label 89: @2531
    GIM_Try, /*On fail goto*//*Label 90*/ 2565, // Rule ID 1638 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1638,
      GIR_Done,
    // Label 90: @2565
    GIM_Try, /*On fail goto*//*Label 91*/ 2599, // Rule ID 1640 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1640,
      GIR_Done,
    // Label 91: @2599
    GIM_Try, /*On fail goto*//*Label 92*/ 2633, // Rule ID 1644 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1644,
      GIR_Done,
    // Label 92: @2633
    GIM_Try, /*On fail goto*//*Label 93*/ 2667, // Rule ID 1646 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1646,
      GIR_Done,
    // Label 93: @2667
    GIM_Reject,
    // Label 72: @2668
    GIM_Try, /*On fail goto*//*Label 94*/ 2702, // Rule ID 1647 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1647,
      GIR_Done,
    // Label 94: @2702
    GIM_Try, /*On fail goto*//*Label 95*/ 2736, // Rule ID 1648 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1648,
      GIR_Done,
    // Label 95: @2736
    GIM_Try, /*On fail goto*//*Label 96*/ 2770, // Rule ID 1651 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1651,
      GIR_Done,
    // Label 96: @2770
    GIM_Try, /*On fail goto*//*Label 97*/ 2804, // Rule ID 1653 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1653,
      GIR_Done,
    // Label 97: @2804
    GIM_Try, /*On fail goto*//*Label 98*/ 2838, // Rule ID 1655 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1655,
      GIR_Done,
    // Label 98: @2838
    GIM_Try, /*On fail goto*//*Label 99*/ 2872, // Rule ID 1657 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1657,
      GIR_Done,
    // Label 99: @2872
    GIM_Try, /*On fail goto*//*Label 100*/ 2906, // Rule ID 1672 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1672,
      GIR_Done,
    // Label 100: @2906
    GIM_Try, /*On fail goto*//*Label 101*/ 2940, // Rule ID 1673 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1673,
      GIR_Done,
    // Label 101: @2940
    GIM_Try, /*On fail goto*//*Label 102*/ 2974, // Rule ID 1676 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1676,
      GIR_Done,
    // Label 102: @2974
    GIM_Try, /*On fail goto*//*Label 103*/ 3008, // Rule ID 1677 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1677,
      GIR_Done,
    // Label 103: @3008
    GIM_Reject,
    // Label 73: @3009
    GIM_Try, /*On fail goto*//*Label 104*/ 3043, // Rule ID 1637 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1637,
      GIR_Done,
    // Label 104: @3043
    GIM_Try, /*On fail goto*//*Label 105*/ 3077, // Rule ID 1639 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1639,
      GIR_Done,
    // Label 105: @3077
    GIM_Try, /*On fail goto*//*Label 106*/ 3111, // Rule ID 1641 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1641,
      GIR_Done,
    // Label 106: @3111
    GIM_Try, /*On fail goto*//*Label 107*/ 3145, // Rule ID 1642 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1642,
      GIR_Done,
    // Label 107: @3145
    GIM_Try, /*On fail goto*//*Label 108*/ 3179, // Rule ID 1643 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1643,
      GIR_Done,
    // Label 108: @3179
    GIM_Try, /*On fail goto*//*Label 109*/ 3213, // Rule ID 1645 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/4,
      // GIR_Coverage, 1645,
      GIR_Done,
    // Label 109: @3213
    GIM_Reject,
    // Label 74: @3214
    GIM_Try, /*On fail goto*//*Label 110*/ 3248, // Rule ID 1649 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1649,
      GIR_Done,
    // Label 110: @3248
    GIM_Try, /*On fail goto*//*Label 111*/ 3282, // Rule ID 1650 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1650,
      GIR_Done,
    // Label 111: @3282
    GIM_Try, /*On fail goto*//*Label 112*/ 3316, // Rule ID 1652 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1652,
      GIR_Done,
    // Label 112: @3316
    GIM_Try, /*On fail goto*//*Label 113*/ 3350, // Rule ID 1654 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1654,
      GIR_Done,
    // Label 113: @3350
    GIM_Try, /*On fail goto*//*Label 114*/ 3384, // Rule ID 1656 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1656,
      GIR_Done,
    // Label 114: @3384
    GIM_Try, /*On fail goto*//*Label 115*/ 3418, // Rule ID 1658 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1658,
      GIR_Done,
    // Label 115: @3418
    GIM_Try, /*On fail goto*//*Label 116*/ 3452, // Rule ID 1661 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1661,
      GIR_Done,
    // Label 116: @3452
    GIM_Try, /*On fail goto*//*Label 117*/ 3486, // Rule ID 1663 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1663,
      GIR_Done,
    // Label 117: @3486
    GIM_Try, /*On fail goto*//*Label 118*/ 3520, // Rule ID 1664 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1664,
      GIR_Done,
    // Label 118: @3520
    GIM_Try, /*On fail goto*//*Label 119*/ 3554, // Rule ID 1666 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1666,
      GIR_Done,
    // Label 119: @3554
    GIM_Try, /*On fail goto*//*Label 120*/ 3588, // Rule ID 1668 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1668,
      GIR_Done,
    // Label 120: @3588
    GIM_Reject,
    // Label 75: @3589
    GIM_Try, /*On fail goto*//*Label 121*/ 3623, // Rule ID 1680 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_128RegClassID,
      // (bitconvert:{ *:[v2i64] } SReg_128:{ *:[v4i32] }:$src0)  =>  SReg_128:{ *:[v2i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_128*/21,
      // GIR_Coverage, 1680,
      GIR_Done,
    // Label 121: @3623
    GIM_Try, /*On fail goto*//*Label 122*/ 3657, // Rule ID 1682 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v4f32] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1682,
      GIR_Done,
    // Label 122: @3657
    GIM_Try, /*On fail goto*//*Label 123*/ 3691, // Rule ID 1683 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v4i32] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1683,
      GIR_Done,
    // Label 123: @3691
    GIM_Try, /*On fail goto*//*Label 124*/ 3725, // Rule ID 1686 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2i64] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v2i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1686,
      GIR_Done,
    // Label 124: @3725
    GIM_Try, /*On fail goto*//*Label 125*/ 3759, // Rule ID 1687 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v2i64] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1687,
      GIR_Done,
    // Label 125: @3759
    GIM_Reject,
    // Label 76: @3760
    GIM_Try, /*On fail goto*//*Label 126*/ 3794, // Rule ID 1659 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1659,
      GIR_Done,
    // Label 126: @3794
    GIM_Try, /*On fail goto*//*Label 127*/ 3828, // Rule ID 1660 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1660,
      GIR_Done,
    // Label 127: @3828
    GIM_Try, /*On fail goto*//*Label 128*/ 3862, // Rule ID 1662 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1662,
      GIR_Done,
    // Label 128: @3862
    GIM_Try, /*On fail goto*//*Label 129*/ 3896, // Rule ID 1665 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1665,
      GIR_Done,
    // Label 129: @3896
    GIM_Try, /*On fail goto*//*Label 130*/ 3930, // Rule ID 1667 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1667,
      GIR_Done,
    // Label 130: @3930
    GIM_Try, /*On fail goto*//*Label 131*/ 3964, // Rule ID 1669 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1669,
      GIR_Done,
    // Label 131: @3964
    GIM_Try, /*On fail goto*//*Label 132*/ 3998, // Rule ID 1670 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1670,
      GIR_Done,
    // Label 132: @3998
    GIM_Try, /*On fail goto*//*Label 133*/ 4032, // Rule ID 1671 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1671,
      GIR_Done,
    // Label 133: @4032
    GIM_Try, /*On fail goto*//*Label 134*/ 4066, // Rule ID 1674 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1674,
      GIR_Done,
    // Label 134: @4066
    GIM_Try, /*On fail goto*//*Label 135*/ 4100, // Rule ID 1675 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/14,
      // GIR_Coverage, 1675,
      GIR_Done,
    // Label 135: @4100
    GIM_Reject,
    // Label 77: @4101
    GIM_Try, /*On fail goto*//*Label 136*/ 4135, // Rule ID 1678 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } VReg_128:{ *:[v4f32] }:$src0)  =>  VReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1678,
      GIR_Done,
    // Label 136: @4135
    GIM_Try, /*On fail goto*//*Label 137*/ 4169, // Rule ID 1679 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4f32] } VReg_128:{ *:[v4i32] }:$src0)  =>  VReg_128:{ *:[v4f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1679,
      GIR_Done,
    // Label 137: @4169
    GIM_Try, /*On fail goto*//*Label 138*/ 4203, // Rule ID 1681 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } SReg_128:{ *:[v2i64] }:$src0)  =>  SReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_128*/21,
      // GIR_Coverage, 1681,
      GIR_Done,
    // Label 138: @4203
    GIM_Try, /*On fail goto*//*Label 139*/ 4237, // Rule ID 1684 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4f32] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v4f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1684,
      GIR_Done,
    // Label 139: @4237
    GIM_Try, /*On fail goto*//*Label 140*/ 4271, // Rule ID 1685 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/20,
      // GIR_Coverage, 1685,
      GIR_Done,
    // Label 140: @4271
    GIM_Reject,
    // Label 78: @4272
    GIM_Try, /*On fail goto*//*Label 141*/ 4399,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_Try, /*On fail goto*//*Label 142*/ 4308, // Rule ID 1688 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_256RegClassID,
        // (bitconvert:{ *:[v8i32] } SReg_256:{ *:[v8f32] }:$src0)  =>  SReg_256:{ *:[v8i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_256*/26,
        // GIR_Coverage, 1688,
        GIR_Done,
      // Label 142: @4308
      GIM_Try, /*On fail goto*//*Label 143*/ 4338, // Rule ID 1689 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_256RegClassID,
        // (bitconvert:{ *:[v8f32] } SReg_256:{ *:[v8i32] }:$src0)  =>  SReg_256:{ *:[v8f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_256*/26,
        // GIR_Coverage, 1689,
        GIR_Done,
      // Label 143: @4338
      GIM_Try, /*On fail goto*//*Label 144*/ 4368, // Rule ID 1690 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_256RegClassID,
        // (bitconvert:{ *:[v8i32] } VReg_256:{ *:[v8f32] }:$src0)  =>  VReg_256:{ *:[v8i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_256*/25,
        // GIR_Coverage, 1690,
        GIR_Done,
      // Label 144: @4368
      GIM_Try, /*On fail goto*//*Label 145*/ 4398, // Rule ID 1691 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_256RegClassID,
        // (bitconvert:{ *:[v8f32] } VReg_256:{ *:[v8i32] }:$src0)  =>  VReg_256:{ *:[v8f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_256*/25,
        // GIR_Coverage, 1691,
        GIR_Done,
      // Label 145: @4398
      GIM_Reject,
    // Label 141: @4399
    GIM_Reject,
    // Label 79: @4400
    GIM_Try, /*On fail goto*//*Label 146*/ 4459,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_512RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_512RegClassID,
      GIM_Try, /*On fail goto*//*Label 147*/ 4436, // Rule ID 1692 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        // (bitconvert:{ *:[v16i32] } VReg_512:{ *:[v16f32] }:$src0)  =>  VReg_512:{ *:[v16i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_512*/29,
        // GIR_Coverage, 1692,
        GIR_Done,
      // Label 147: @4436
      GIM_Try, /*On fail goto*//*Label 148*/ 4458, // Rule ID 1693 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        // (bitconvert:{ *:[v16f32] } VReg_512:{ *:[v16i32] }:$src0)  =>  VReg_512:{ *:[v16f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_512*/29,
        // GIR_Coverage, 1693,
        GIR_Done,
      // Label 148: @4458
      GIM_Reject,
    // Label 146: @4459
    GIM_Reject,
    // Label 80: @4460
    GIM_Reject,
    // Label 7: @4461
    GIM_Try, /*On fail goto*//*Label 149*/ 4551,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 150*/ 4494, // Rule ID 10 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_getpc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1000:{ *:[iPTR] })  =>  (S_GETPC_B64:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_GETPC_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 10,
        GIR_Done,
      // Label 150: @4494
      GIM_Try, /*On fail goto*//*Label 151*/ 4522, // Rule ID 672 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_groupstaticsize,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 485:{ *:[iPTR] })  =>  (GET_GROUPSTATICSIZE:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GET_GROUPSTATICSIZE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 672,
        GIR_Done,
      // Label 151: @4522
      GIM_Try, /*On fail goto*//*Label 152*/ 4550, // Rule ID 679 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_ps_live,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i1] } 966:{ *:[iPTR] })  =>  (SI_PS_LIVE:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_PS_LIVE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 679,
        GIR_Done,
      // Label 152: @4550
      GIM_Reject,
    // Label 149: @4551
    GIM_Try, /*On fail goto*//*Label 153*/ 4986,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 154*/ 4592, // Rule ID 2 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_wqm_vote,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i1] } 1053:{ *:[iPTR] }, i1:{ *:[i1] }:$src0)  =>  (S_WQM_B64:{ *:[i1] }:{ *:[i1] } i1:{ *:[i1] }:$src0)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_WQM_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2,
        GIR_Done,
      // Label 154: @4592
      GIM_Try, /*On fail goto*//*Label 155*/ 4628, // Rule ID 329 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_readfirstlane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 988:{ *:[iPTR] }, i32:{ *:[i32] }:$src0)  =>  (V_READFIRSTLANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_READFIRSTLANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 329,
        GIR_Done,
      // Label 155: @4628
      GIM_Try, /*On fail goto*//*Label 156*/ 4679, // Rule ID 364 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i32] } 483:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I32_F64_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 364,
        GIR_Done,
      // Label 156: @4679
      GIM_Try, /*On fail goto*//*Label 157*/ 4730, // Rule ID 365 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 484:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F64_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 365,
        GIR_Done,
      // Label 157: @4730
      GIM_Try, /*On fail goto*//*Label 158*/ 4781, // Rule ID 367 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i32] } 483:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I32_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 367,
        GIR_Done,
      // Label 158: @4781
      GIM_Try, /*On fail goto*//*Label 159*/ 4832, // Rule ID 368 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f32] } 484:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 368,
        GIR_Done,
      // Label 159: @4832
      GIM_Try, /*On fail goto*//*Label 160*/ 4883, // Rule ID 369 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_log_clamp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f32] } 958:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_CLAMP_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_CLAMP_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 369,
        GIR_Done,
      // Label 160: @4883
      GIM_Try, /*On fail goto*//*Label 161*/ 4934, // Rule ID 389 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f16] } 484:{ *:[iPTR] }, (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 389,
        GIR_Done,
      // Label 161: @4934
      GIM_Try, /*On fail goto*//*Label 162*/ 4985, // Rule ID 390 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i16] } 483:{ *:[iPTR] }, (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I16_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 390,
        GIR_Done,
      // Label 162: @4985
      GIM_Reject,
    // Label 153: @4986
    GIM_Try, /*On fail goto*//*Label 163*/ 5818,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 164*/ 5061, // Rule ID 1988 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cvt_pkrtz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[v2f16] } 458:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_CVT_PKRTZ_F16_F32_e64:{ *:[v2f16] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_PKRTZ_F16_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1988,
        GIR_Done,
      // Label 164: @5061
      GIM_Try, /*On fail goto*//*Label 165*/ 5131, // Rule ID 1989 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f64] } 141:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MAX_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1989,
        GIR_Done,
      // Label 165: @5131
      GIM_Try, /*On fail goto*//*Label 166*/ 5201, // Rule ID 1992 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f64] } 149:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MIN_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1992,
        GIR_Done,
      // Label 166: @5201
      GIM_Try, /*On fail goto*//*Label 167*/ 5271, // Rule ID 3256 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 141:{ *:[iPTR] }, (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods))  =>  (V_MAX_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3256,
        GIR_Done,
      // Label 167: @5271
      GIM_Try, /*On fail goto*//*Label 168*/ 5341, // Rule ID 3257 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 149:{ *:[iPTR] }, (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods))  =>  (V_MIN_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 3257,
        GIR_Done,
      // Label 168: @5341
      GIM_Try, /*On fail goto*//*Label 169*/ 5394, // Rule ID 1980 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 141:{ *:[iPTR] }, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0), VGPR_32:{ *:[f32] }:$src1)  =>  (V_MAX_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1980,
        GIR_Done,
      // Label 169: @5394
      GIM_Try, /*On fail goto*//*Label 170*/ 5447, // Rule ID 1990 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 149:{ *:[iPTR] }, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0), VGPR_32:{ *:[f32] }:$src1)  =>  (V_MIN_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1990,
        GIR_Done,
      // Label 170: @5447
      GIM_Try, /*On fail goto*//*Label 171*/ 5500, // Rule ID 1981 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 141:{ *:[iPTR] }, VGPR_32:{ *:[f32] }:$src1, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0))  =>  (V_MAX_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1981,
        GIR_Done,
      // Label 171: @5500
      GIM_Try, /*On fail goto*//*Label 172*/ 5553, // Rule ID 1991 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 149:{ *:[iPTR] }, VGPR_32:{ *:[f32] }:$src1, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0))  =>  (V_MIN_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1991,
        GIR_Done,
      // Label 172: @5553
      GIM_Try, /*On fail goto*//*Label 173*/ 5597, // Rule ID 426 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_readlane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 989:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_READLANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_READLANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 426,
        GIR_Done,
      // Label 173: @5597
      GIM_Try, /*On fail goto*//*Label 174*/ 5641, // Rule ID 668 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_set_inactive,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1016:{ *:[iPTR] }, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$inactive)  =>  (V_SET_INACTIVE_B32:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$inactive)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SET_INACTIVE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // inactive
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 668,
        GIR_Done,
      // Label 174: @5641
      GIM_Try, /*On fail goto*//*Label 175*/ 5685, // Rule ID 669 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_set_inactive,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1016:{ *:[iPTR] }, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$inactive)  =>  (V_SET_INACTIVE_B64:{ *:[i64] } i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$inactive)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SET_INACTIVE_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // inactive
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 669,
        GIR_Done,
      // Label 175: @5685
      GIM_Try, /*On fail goto*//*Label 176*/ 5729, // Rule ID 678 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_if_break,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s1,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 488:{ *:[iPTR] }, i1:{ *:[i1] }:$vcc, i64:{ *:[i64] }:$src)  =>  (SI_IF_BREAK:{ *:[i64] }:{ *:[i1] } i1:{ *:[i1] }:$vcc, i64:{ *:[i64] }:$src)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_IF_BREAK,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // vcc
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 678,
        GIR_Done,
      // Label 176: @5729
      GIM_Try, /*On fail goto*//*Label 177*/ 5773, // Rule ID 428 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mbcnt_lo,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 961:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MBCNT_LO_U32_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MBCNT_LO_U32_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 428,
        GIR_Done,
      // Label 177: @5773
      GIM_Try, /*On fail goto*//*Label 178*/ 5817, // Rule ID 429 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mbcnt_hi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 960:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MBCNT_HI_U32_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MBCNT_HI_U32_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 429,
        GIR_Done,
      // Label 178: @5817
      GIM_Reject,
    // Label 163: @5818
    GIM_Try, /*On fail goto*//*Label 179*/ 6832,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 180*/ 5875, // Rule ID 427 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_writelane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1054:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$vdst_in)  =>  (V_WRITELANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$vdst_in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_WRITELANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vdst_in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 427,
        GIR_Done,
      // Label 180: @5875
      GIM_Try, /*On fail goto*//*Label 181*/ 5930, // Rule ID 986 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1011:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 986,
        GIR_Done,
      // Label 181: @5930
      GIM_Try, /*On fail goto*//*Label 182*/ 5985, // Rule ID 987 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_hi_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1009:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_HI_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_HI_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 987,
        GIR_Done,
      // Label 182: @5985
      GIM_Try, /*On fail goto*//*Label 183*/ 6040, // Rule ID 988 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_u16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1010:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_U16:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 988,
        GIR_Done,
      // Label 183: @6040
      GIM_Try, /*On fail goto*//*Label 184*/ 6095, // Rule ID 989 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_msad_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 965:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_MSAD_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MSAD_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 989,
        GIR_Done,
      // Label 184: @6095
      GIM_Try, /*On fail goto*//*Label 185*/ 6150, // Rule ID 990 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mqsad_pk_u16_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 963:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2)  =>  (V_MQSAD_PK_U16_U8:{ *:[i64] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MQSAD_PK_U16_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 990,
        GIR_Done,
      // Label 185: @6150
      GIM_Try, /*On fail goto*//*Label 186*/ 6205, // Rule ID 991 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_qsad_pk_u16_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 967:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2)  =>  (V_QSAD_PK_U16_U8:{ *:[i64] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_QSAD_PK_U16_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 991,
        GIR_Done,
      // Label 186: @6205
      GIM_Try, /*On fail goto*//*Label 187*/ 6260, // Rule ID 992 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mqsad_u32_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 964:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2)  =>  (V_MQSAD_U32_U8:{ *:[v4i32] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MQSAD_U32_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 992,
        GIR_Done,
      // Label 187: @6260
      GIM_Try, /*On fail goto*//*Label 188*/ 6345, // Rule ID 466 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubeid,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 449:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBEID_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBEID_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 466,
        GIR_Done,
      // Label 188: @6345
      GIM_Try, /*On fail goto*//*Label 189*/ 6430, // Rule ID 467 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubesc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 451:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBESC_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBESC_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 467,
        GIR_Done,
      // Label 189: @6430
      GIM_Try, /*On fail goto*//*Label 190*/ 6515, // Rule ID 468 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubetc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 452:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBETC_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBETC_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 468,
        GIR_Done,
      // Label 190: @6515
      GIM_Try, /*On fail goto*//*Label 191*/ 6600, // Rule ID 469 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubema,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 450:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBEMA_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBEMA_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 469,
        GIR_Done,
      // Label 191: @6600
      GIM_Try, /*On fail goto*//*Label 192*/ 6681, // Rule ID 484 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cvt_pk_u8_f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[i32] } 455:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp), (VOP3Mods:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CVT_PK_U8_F32:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, i32:{ *:[i32] }:$src2, i1:{ *:[i1] }:$clamp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_PK_U8_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 484,
        GIR_Done,
      // Label 192: @6681
      GIM_Try, /*On fail goto*//*Label 193*/ 6731, // Rule ID 454 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_lerp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 957:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_LERP_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LERP_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 454,
        GIR_Done,
      // Label 193: @6731
      GIM_Try, /*On fail goto*//*Label 194*/ 6781, // Rule ID 473 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_alignbit,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 425:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_ALIGNBIT_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ALIGNBIT_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 473,
        GIR_Done,
      // Label 194: @6781
      GIM_Try, /*On fail goto*//*Label 195*/ 6831, // Rule ID 474 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_alignbyte,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 426:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_ALIGNBYTE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ALIGNBYTE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 474,
        GIR_Done,
      // Label 195: @6831
      GIM_Reject,
    // Label 179: @6832
    GIM_Reject,
    // Label 8: @6833
    GIM_Try, /*On fail goto*//*Label 196*/ 6853, // Rule ID 61 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_barrier,
      // (intrinsic_void 993:{ *:[iPTR] })  =>  (S_BARRIER)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_BARRIER,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 61,
      GIR_Done,
    // Label 196: @6853
    GIM_Try, /*On fail goto*//*Label 197*/ 6873, // Rule ID 525 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_inv,
      // (intrinsic_void 995:{ *:[iPTR] })  =>  (S_DCACHE_INV)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_INV,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 525,
      GIR_Done,
    // Label 197: @6873
    GIM_Try, /*On fail goto*//*Label 198*/ 6893, // Rule ID 526 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isCIVI,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_inv_vol,
      // (intrinsic_void 996:{ *:[iPTR] })  =>  (S_DCACHE_INV_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_INV_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 526,
      GIR_Done,
    // Label 198: @6893
    GIM_Try, /*On fail goto*//*Label 199*/ 6913, // Rule ID 527 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isVI,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_wb,
      // (intrinsic_void 997:{ *:[iPTR] })  =>  (S_DCACHE_WB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_WB,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 527,
      GIR_Done,
    // Label 199: @6913
    GIM_Try, /*On fail goto*//*Label 200*/ 6933, // Rule ID 528 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isVI,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_wb_vol,
      // (intrinsic_void 998:{ *:[iPTR] })  =>  (S_DCACHE_WB_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_WB_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 528,
      GIR_Done,
    // Label 200: @6933
    GIM_Try, /*On fail goto*//*Label 201*/ 6953, // Rule ID 658 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isSI,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1_sc,
      // (intrinsic_void 445:{ *:[iPTR] })  =>  (BUFFER_WBINVL1_SC)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1_SC,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 658,
      GIR_Done,
    // Label 201: @6953
    GIM_Try, /*On fail goto*//*Label 202*/ 6973, // Rule ID 659 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1,
      // (intrinsic_void 444:{ *:[iPTR] })  =>  (BUFFER_WBINVL1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 659,
      GIR_Done,
    // Label 202: @6973
    GIM_Try, /*On fail goto*//*Label 203*/ 6993, // Rule ID 660 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isCIVI,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1_vol,
      // (intrinsic_void 446:{ *:[iPTR] })  =>  (BUFFER_WBINVL1_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 660,
      GIR_Done,
    // Label 203: @6993
    GIM_Try, /*On fail goto*//*Label 204*/ 7013, // Rule ID 673 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_wave_barrier,
      // (intrinsic_void 1045:{ *:[iPTR] })  =>  (WAVE_BARRIER)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::WAVE_BARRIER,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 673,
      GIR_Done,
    // Label 204: @7013
    GIM_Try, /*On fail goto*//*Label 205*/ 7033, // Rule ID 680 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_unreachable,
      // (intrinsic_void 1043:{ *:[iPTR] })  =>  (SI_MASKED_UNREACHABLE)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_MASKED_UNREACHABLE,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 680,
      GIR_Done,
    // Label 205: @7033
    GIM_Try, /*On fail goto*//*Label 206*/ 7131,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 207*/ 7070, // Rule ID 524 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_memtime,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 1004:{ *:[iPTR] })  =>  (S_MEMTIME:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MEMTIME,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 524,
        GIR_Done,
      // Label 207: @7070
      GIM_Try, /*On fail goto*//*Label 208*/ 7102, // Rule ID 529 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isVI,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_memrealtime,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 1003:{ *:[iPTR] })  =>  (S_MEMREALTIME:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MEMREALTIME,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 529,
        GIR_Done,
      // Label 208: @7102
      GIM_Try, /*On fail goto*//*Label 209*/ 7130, // Rule ID 677 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_end_cf,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
        // (intrinsic_void 473:{ *:[iPTR] }, i64:{ *:[i64] }:$saved)  =>  (SI_END_CF i64:{ *:[i64] }:$saved)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_END_CF,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // saved
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 677,
        GIR_Done,
      // Label 209: @7130
      GIM_Reject,
    // Label 206: @7131
    GIM_Reject,
    // Label 9: @7132
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 212*/ 7188,
    /*GILLT_s16*//*Label 210*/ 7140,
    /*GILLT_s32*//*Label 211*/ 7164,
    // Label 210: @7140
    GIM_Try, /*On fail goto*//*Label 213*/ 7163, // Rule ID 834 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i16] }):$imm  =>  (S_MOV_B32:{ *:[i16] } (imm:{ *:[i16] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MOV_B32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 834,
      GIR_Done,
    // Label 213: @7163
    GIM_Reject,
    // Label 211: @7164
    GIM_Try, /*On fail goto*//*Label 214*/ 7187, // Rule ID 1718 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i32] }):$imm  =>  (S_MOV_B32:{ *:[i32] } (imm:{ *:[i32] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MOV_B32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1718,
      GIR_Done,
    // Label 214: @7187
    GIM_Reject,
    // Label 212: @7188
    GIM_Reject,
    // Label 10: @7189
    GIM_Try, /*On fail goto*//*Label 215*/ 7219, // Rule ID 443 //
      GIM_CheckFeatures, GIFBS_isSICI,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (shl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_LSHL_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_LSHL_B32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 443,
      GIR_Done,
    // Label 215: @7219
    GIM_Reject,
    // Label 11: @7220
    GIM_Try, /*On fail goto*//*Label 216*/ 7250, // Rule ID 439 //
      GIM_CheckFeatures, GIFBS_isSICI,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (srl:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_LSHR_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_LSHR_B32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 439,
      GIR_Done,
    // Label 216: @7250
    GIM_Reject,
    // Label 12: @7251
    GIM_Try, /*On fail goto*//*Label 217*/ 7417,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 218*/ 7372,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_Try, /*On fail goto*//*Label 219*/ 7304, // Rule ID 1985 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isSICI,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vsrc0,
          // (sra:{ *:[i32] } (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0), VGPR_32:{ *:[i32] }:$src1)  =>  (V_ASHR_I32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ASHR_I32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 1985,
          GIR_Done,
        // Label 219: @7304
        GIM_Try, /*On fail goto*//*Label 220*/ 7337, // Rule ID 1986 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
          // (sra:{ *:[i32] } VGPR_32:{ *:[i32] }:$src1, (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0))  =>  (V_ASHRREV_I32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ASHRREV_I32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 1986,
          GIR_Done,
        // Label 220: @7337
        GIM_Try, /*On fail goto*//*Label 221*/ 7371, // Rule ID 1987 //
          GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vcsrc,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vcsrc,
          // (sra:{ *:[i32] } (sd_vcsrc:{ *:[i32] } i32:{ *:[i32] }:$src0), (sd_vcsrc:{ *:[i32] } i32:{ *:[i32] }:$src1))  =>  (V_ASHRREV_I32_e64:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ASHRREV_I32_e64,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 1987,
          GIR_Done,
        // Label 221: @7371
        GIM_Reject,
      // Label 218: @7372
      GIM_Try, /*On fail goto*//*Label 222*/ 7398, // Rule ID 1984 //
        GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (sra:{ *:[i32] } SReg_32:{ *:[i32] }:$src0, SReg_32:{ *:[i32] }:$src1)  =>  (S_ASHR_I32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_ASHR_I32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1984,
        GIR_Done,
      // Label 222: @7398
      GIM_Try, /*On fail goto*//*Label 223*/ 7416, // Rule ID 441 //
        GIM_CheckFeatures, GIFBS_isSICI,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (sra:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_ASHR_I32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_ASHR_I32_e64,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 441,
        GIR_Done,
      // Label 223: @7416
      GIM_Reject,
    // Label 217: @7417
    GIM_Reject,
    // Label 13: @7418
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 227*/ 7767,
    /*GILLT_s16*//*Label 224*/ 7427,
    /*GILLT_s32*//*Label 225*/ 7539,
    /*GILLT_s64*//*Label 226*/ 7655,
    // Label 224: @7427
    GIM_Try, /*On fail goto*//*Label 228*/ 7538,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 229*/ 7489, // Rule ID 445 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 445,
        GIR_Done,
      // Label 229: @7489
      GIM_Try, /*On fail goto*//*Label 230*/ 7537, // Rule ID 2005 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2005,
        GIR_Done,
      // Label 230: @7537
      GIM_Reject,
    // Label 228: @7538
    GIM_Reject,
    // Label 225: @7539
    GIM_Try, /*On fail goto*//*Label 231*/ 7654,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 232*/ 7603, // Rule ID 396 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 396,
        GIR_Done,
      // Label 232: @7603
      GIM_Try, /*On fail goto*//*Label 233*/ 7653, // Rule ID 1998 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1998,
        GIR_Done,
      // Label 233: @7653
      GIM_Reject,
    // Label 231: @7654
    GIM_Reject,
    // Label 226: @7655
    GIM_Try, /*On fail goto*//*Label 234*/ 7766,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 235*/ 7717, // Rule ID 456 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 456,
        GIR_Done,
      // Label 235: @7717
      GIM_Try, /*On fail goto*//*Label 236*/ 7765, // Rule ID 2011 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2011,
        GIR_Done,
      // Label 236: @7765
      GIM_Reject,
    // Label 234: @7766
    GIM_Reject,
    // Label 227: @7767
    GIM_Reject,
    // Label 14: @7768
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 239*/ 7900,
    /*GILLT_s16*//*Label 237*/ 7776,
    /*GILLT_s32*//*Label 238*/ 7837,
    // Label 237: @7776
    GIM_Try, /*On fail goto*//*Label 240*/ 7836, // Rule ID 446 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      // (fsub:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_SUB_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SUB_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 446,
      GIR_Done,
    // Label 240: @7836
    GIM_Reject,
    // Label 238: @7837
    GIM_Try, /*On fail goto*//*Label 241*/ 7899, // Rule ID 397 //
      GIM_CheckFeatures, GIFBS_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      // (fsub:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_SUB_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SUB_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 397,
      GIR_Done,
    // Label 241: @7899
    GIM_Reject,
    // Label 239: @7900
    GIM_Reject,
    // Label 15: @7901
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 245*/ 8250,
    /*GILLT_s16*//*Label 242*/ 7910,
    /*GILLT_s32*//*Label 243*/ 8022,
    /*GILLT_s64*//*Label 244*/ 8138,
    // Label 242: @7910
    GIM_Try, /*On fail goto*//*Label 246*/ 8021,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 247*/ 7972, // Rule ID 447 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 447,
        GIR_Done,
      // Label 247: @7972
      GIM_Try, /*On fail goto*//*Label 248*/ 8020, // Rule ID 2006 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2006,
        GIR_Done,
      // Label 248: @8020
      GIM_Reject,
    // Label 246: @8021
    GIM_Reject,
    // Label 243: @8022
    GIM_Try, /*On fail goto*//*Label 249*/ 8137,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 250*/ 8086, // Rule ID 399 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 399,
        GIR_Done,
      // Label 250: @8086
      GIM_Try, /*On fail goto*//*Label 251*/ 8136, // Rule ID 2000 //
        GIM_CheckFeatures, GIFBS_isGCN,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2000,
        GIR_Done,
      // Label 251: @8136
      GIM_Reject,
    // Label 249: @8137
    GIM_Reject,
    // Label 244: @8138
    GIM_Try, /*On fail goto*//*Label 252*/ 8249,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 253*/ 8200, // Rule ID 457 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 457,
        GIR_Done,
      // Label 253: @8200
      GIM_Try, /*On fail goto*//*Label 254*/ 8248, // Rule ID 2012 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2012,
        GIR_Done,
      // Label 254: @8248
      GIM_Reject,
    // Label 252: @8249
    GIM_Reject,
    // Label 245: @8250
    GIM_Reject,
    // Label 16: @8251
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 258*/ 8496,
    /*GILLT_s16*//*Label 255*/ 8260,
    /*GILLT_s32*//*Label 256*/ 8340,
    /*GILLT_s64*//*Label 257*/ 8418,
    // Label 255: @8260
    GIM_Try, /*On fail goto*//*Label 259*/ 8339, // Rule ID 494 //
      GIM_CheckFeatures, GIFBS_Has16BitInsts_isVIOnly,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F16:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f16:{ *:[f16] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F16,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 494,
      GIR_Done,
    // Label 259: @8339
    GIM_Reject,
    // Label 256: @8340
    GIM_Try, /*On fail goto*//*Label 260*/ 8417, // Rule ID 453 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 453,
      GIR_Done,
    // Label 260: @8417
    GIM_Reject,
    // Label 257: @8418
    GIM_Try, /*On fail goto*//*Label 261*/ 8495, // Rule ID 455 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f64:{ *:[f64] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 455,
      GIR_Done,
    // Label 261: @8495
    GIM_Reject,
    // Label 258: @8496
    GIM_Reject,
    // Label 17: @8497
    GIM_Try, /*On fail goto*//*Label 262*/ 8569, // Rule ID 1726 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)  =>  (V_EXP_F32_e32:{ *:[f32] } (V_MUL_LEGACY_F32_e32:{ *:[i16] } f32:{ *:[f32] }:$src1, (V_LOG_F32_e32:{ *:[i16] } f32:{ *:[f32] }:$src0)))
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/GILLT_s16,
      GIR_BuildMI, /*InsnID*/2, /*Opcode*/AMDGPU::V_LOG_F32_e32,
      GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/1, /*TempRegFlags*/RegState::Define,
      GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_ConstrainSelectedInstOperands, /*InsnID*/2,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_MUL_LEGACY_F32_e32,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/1, /*TempRegFlags*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F32_e32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1726,
      GIR_Done,
    // Label 262: @8569
    GIM_Reject,
    // Label 18: @8570
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 265*/ 8666,
    /*GILLT_s16*//*Label 263*/ 8578,
    /*GILLT_s32*//*Label 264*/ 8622,
    // Label 263: @8578
    GIM_Try, /*On fail goto*//*Label 266*/ 8621, // Rule ID 386 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fexp2:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_EXP_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 386,
      GIR_Done,
    // Label 266: @8621
    GIM_Reject,
    // Label 264: @8622
    GIM_Try, /*On fail goto*//*Label 267*/ 8665, // Rule ID 353 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fexp2:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_EXP_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 353,
      GIR_Done,
    // Label 267: @8665
    GIM_Reject,
    // Label 265: @8666
    GIM_Reject,
    // Label 19: @8667
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 270*/ 8763,
    /*GILLT_s16*//*Label 268*/ 8675,
    /*GILLT_s32*//*Label 269*/ 8719,
    // Label 268: @8675
    GIM_Try, /*On fail goto*//*Label 271*/ 8718, // Rule ID 385 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (flog2:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 385,
      GIR_Done,
    // Label 271: @8718
    GIM_Reject,
    // Label 269: @8719
    GIM_Try, /*On fail goto*//*Label 272*/ 8762, // Rule ID 354 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (flog2:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 354,
      GIR_Done,
    // Label 272: @8762
    GIM_Reject,
    // Label 270: @8763
    GIM_Reject,
    // Label 20: @8764
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/2, 4, /*)*//*default:*//*Label 275*/ 8860,
    /*GILLT_s32*//*Label 273*/ 8772,
    /*GILLT_s64*//*Label 274*/ 8816,
    // Label 273: @8772
    GIM_Try, /*On fail goto*//*Label 276*/ 8815, // Rule ID 337 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpextend:{ *:[f32] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_F16_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 337,
      GIR_Done,
    // Label 276: @8815
    GIM_Reject,
    // Label 274: @8816
    GIM_Try, /*On fail goto*//*Label 277*/ 8859, // Rule ID 341 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpextend:{ *:[f64] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_F32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 341,
      GIR_Done,
    // Label 277: @8859
    GIM_Reject,
    // Label 275: @8860
    GIM_Reject,
    // Label 21: @8861
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 3, /*)*//*default:*//*Label 280*/ 8957,
    /*GILLT_s16*//*Label 278*/ 8869,
    /*GILLT_s32*//*Label 279*/ 8913,
    // Label 278: @8869
    GIM_Try, /*On fail goto*//*Label 281*/ 8912, // Rule ID 336 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpround:{ *:[f16] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_F32_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 336,
      GIR_Done,
    // Label 281: @8912
    GIM_Reject,
    // Label 279: @8913
    GIM_Try, /*On fail goto*//*Label 282*/ 8956, // Rule ID 340 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpround:{ *:[f32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_F64_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 340,
      GIR_Done,
    // Label 282: @8956
    GIM_Reject,
    // Label 280: @8957
    GIM_Reject,
    // Label 22: @8958
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 3, /*)*//*default:*//*Label 286*/ 9191,
    /*GILLT_s1*//*Label 283*/ 8967,
    /*GILLT_s16*//*Label 284*/ 9060,
    /*GILLT_s32*//*Label 285*/ 9104,
    // Label 283: @8967
    GIM_Try, /*On fail goto*//*Label 287*/ 9013, // Rule ID 1768 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_sint:{ *:[i1] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F32_e64:{ *:[i1] } 0:{ *:[i32] }, 3212836864:{ *:[i32] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f32] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/3212836864,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1768,
      GIR_Done,
    // Label 287: @9013
    GIM_Try, /*On fail goto*//*Label 288*/ 9059, // Rule ID 1770 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_sint:{ *:[i1] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F64_e64:{ *:[i1] } 0:{ *:[i32] }, -4616189618054758400:{ *:[i64] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f64] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/-4616189618054758400,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1770,
      GIR_Done,
    // Label 288: @9059
    GIM_Reject,
    // Label 284: @9060
    GIM_Try, /*On fail goto*//*Label 289*/ 9103, // Rule ID 381 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I16_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 381,
      GIR_Done,
    // Label 289: @9103
    GIM_Reject,
    // Label 285: @9104
    GIM_Try, /*On fail goto*//*Label 290*/ 9147, // Rule ID 330 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 330,
      GIR_Done,
    // Label 290: @9147
    GIM_Try, /*On fail goto*//*Label 291*/ 9190, // Rule ID 335 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I32_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 335,
      GIR_Done,
    // Label 291: @9190
    GIM_Reject,
    // Label 286: @9191
    GIM_Reject,
    // Label 23: @9192
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 3, /*)*//*default:*//*Label 295*/ 9425,
    /*GILLT_s1*//*Label 292*/ 9201,
    /*GILLT_s16*//*Label 293*/ 9294,
    /*GILLT_s32*//*Label 294*/ 9338,
    // Label 292: @9201
    GIM_Try, /*On fail goto*//*Label 296*/ 9247, // Rule ID 1767 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_uint:{ *:[i1] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F32_e64:{ *:[i1] } 0:{ *:[i32] }, 1065353216:{ *:[i32] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f32] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/1065353216,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1767,
      GIR_Done,
    // Label 296: @9247
    GIM_Try, /*On fail goto*//*Label 297*/ 9293, // Rule ID 1769 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_uint:{ *:[i1] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F64_e64:{ *:[i1] } 0:{ *:[i32] }, 4607182418800017408:{ *:[i64] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f64] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/4607182418800017408,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1769,
      GIR_Done,
    // Label 297: @9293
    GIM_Reject,
    // Label 293: @9294
    GIM_Try, /*On fail goto*//*Label 298*/ 9337, // Rule ID 380 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U16_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 380,
      GIR_Done,
    // Label 298: @9337
    GIM_Reject,
    // Label 294: @9338
    GIM_Try, /*On fail goto*//*Label 299*/ 9381, // Rule ID 334 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U32_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 334,
      GIR_Done,
    // Label 299: @9381
    GIM_Try, /*On fail goto*//*Label 300*/ 9424, // Rule ID 346 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 346,
      GIR_Done,
    // Label 300: @9424
    GIM_Reject,
    // Label 295: @9425
    GIM_Reject,
    // Label 24: @9426
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 304*/ 9555,
    /*GILLT_s16*//*Label 301*/ 9435,
    /*GILLT_s32*//*Label 302*/ 9475,
    /*GILLT_s64*//*Label 303*/ 9515,
    // Label 301: @9435
    GIM_Try, /*On fail goto*//*Label 305*/ 9474, // Rule ID 379 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f16] } (VOP3OMods:{ *:[i16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_I16_e64:{ *:[f16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_I16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 379,
      GIR_Done,
    // Label 305: @9474
    GIM_Reject,
    // Label 302: @9475
    GIM_Try, /*On fail goto*//*Label 306*/ 9514, // Rule ID 332 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f32] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_I32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_I32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 332,
      GIR_Done,
    // Label 306: @9514
    GIM_Reject,
    // Label 303: @9515
    GIM_Try, /*On fail goto*//*Label 307*/ 9554, // Rule ID 331 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f64] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_I32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_I32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 331,
      GIR_Done,
    // Label 307: @9554
    GIM_Reject,
    // Label 304: @9555
    GIM_Reject,
    // Label 25: @9556
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 311*/ 9685,
    /*GILLT_s16*//*Label 308*/ 9565,
    /*GILLT_s32*//*Label 309*/ 9605,
    /*GILLT_s64*//*Label 310*/ 9645,
    // Label 308: @9565
    GIM_Try, /*On fail goto*//*Label 312*/ 9604, // Rule ID 378 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f16] } (VOP3OMods:{ *:[i16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_U16_e64:{ *:[f16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_U16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 378,
      GIR_Done,
    // Label 312: @9604
    GIM_Reject,
    // Label 309: @9605
    GIM_Try, /*On fail goto*//*Label 313*/ 9644, // Rule ID 333 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f32] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_U32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_U32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 333,
      GIR_Done,
    // Label 313: @9644
    GIM_Reject,
    // Label 310: @9645
    GIM_Try, /*On fail goto*//*Label 314*/ 9684, // Rule ID 347 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f64] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_U32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_U32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 347,
      GIR_Done,
    // Label 314: @9684
    GIM_Reject,
    // Label 311: @9685
    GIM_Reject,
    // Label 26: @9686
    GIM_Try, /*On fail goto*//*Label 315*/ 9700, // Rule ID 60 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      // MIs[0] simm16
      GIM_CheckIsMBB, /*MI*/0, /*Op*/0,
      // (br (bb:{ *:[Other] }):$simm16)  =>  (S_BRANCH (bb:{ *:[Other] }):$simm16)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_BRANCH,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 60,
      GIR_Done,
    // Label 315: @9700
    GIM_Reject,
    // Label 27: @9701
    GIM_Try, /*On fail goto*//*Label 316*/ 9727, // Rule ID 4 //
      GIM_CheckFeatures, GIFBS_TruePredicate_isGCN,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // (ctpop:{ *:[i32] } i32:{ *:[i32] }:$src0)  =>  (S_BCNT1_I32_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_BCNT1_I32_B32,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 4,
      GIR_Done,
    // Label 316: @9727
    GIM_Reject,
    // Label 28: @9728
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/1, 4, /*)*//*default:*//*Label 320*/ 9869,
    /*GILLT_s16*//*Label 317*/ 9737,
    /*GILLT_s32*//*Label 318*/ 9781,
    /*GILLT_s64*//*Label 319*/ 9825,
    // Label 317: @9737
    GIM_Try, /*On fail goto*//*Label 321*/ 9780, // Rule ID 392 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 392,
      GIR_Done,
    // Label 321: @9780
    GIM_Reject,
    // Label 318: @9781
    GIM_Try, /*On fail goto*//*Label 322*/ 9824, // Rule ID 350 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 350,
      GIR_Done,
    // Label 322: @9824
    GIM_Reject,
    // Label 319: @9825
    GIM_Try, /*On fail goto*//*Label 323*/ 9868, // Rule ID 375 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 375,
      GIR_Done,
    // Label 323: @9868
    GIM_Reject,
    // Label 320: @9869
    GIM_Reject,
    // Label 29: @9870
    GIM_Reject,
    };
  return MatchTable0;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AMDGPUSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AMDGPUSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT

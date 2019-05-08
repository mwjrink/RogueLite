/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace AMDGPU {
enum {
  Feature16BitInsts = 0,
  FeatureAddNoCarryInsts = 1,
  FeatureApertureRegs = 2,
  FeatureAutoWaitcntBeforeBarrier = 3,
  FeatureCIInsts = 4,
  FeatureCodeObjectV3 = 5,
  FeatureDLInsts = 6,
  FeatureDPP = 7,
  FeatureDX10Clamp = 8,
  FeatureDebuggerEmitPrologue = 9,
  FeatureDebuggerInsertNops = 10,
  FeatureDisable = 11,
  FeatureDotInsts = 12,
  FeatureDumpCode = 13,
  FeatureDumpCodeLower = 14,
  FeatureEnableDS128 = 15,
  FeatureEnableHugePrivateBuffer = 16,
  FeatureEnableLoadStoreOpt = 17,
  FeatureEnablePRTStrictNull = 18,
  FeatureEnableSIScheduler = 19,
  FeatureEnableUnsafeDSOffsetFolding = 20,
  FeatureFMA = 21,
  FeatureFP16Denormals = 22,
  FeatureFP32Denormals = 23,
  FeatureFP64 = 24,
  FeatureFP64Denormals = 25,
  FeatureFP64FP16Denormals = 26,
  FeatureFPExceptions = 27,
  FeatureFastFMAF32 = 28,
  FeatureFlatAddressSpace = 29,
  FeatureFlatForGlobal = 30,
  FeatureFlatGlobalInsts = 31,
  FeatureFlatInstOffsets = 32,
  FeatureFlatScratchInsts = 33,
  FeatureFmaMixInsts = 34,
  FeatureGCN = 35,
  FeatureGCN3Encoding = 36,
  FeatureGFX9 = 37,
  FeatureGFX9Insts = 38,
  FeatureISAVersion6_0_0 = 39,
  FeatureISAVersion6_0_1 = 40,
  FeatureISAVersion7_0_0 = 41,
  FeatureISAVersion7_0_1 = 42,
  FeatureISAVersion7_0_2 = 43,
  FeatureISAVersion7_0_3 = 44,
  FeatureISAVersion7_0_4 = 45,
  FeatureISAVersion8_0_1 = 46,
  FeatureISAVersion8_0_2 = 47,
  FeatureISAVersion8_0_3 = 48,
  FeatureISAVersion8_1_0 = 49,
  FeatureISAVersion9_0_0 = 50,
  FeatureISAVersion9_0_2 = 51,
  FeatureISAVersion9_0_4 = 52,
  FeatureISAVersion9_0_6 = 53,
  FeatureISAVersion9_0_9 = 54,
  FeatureIntClamp = 55,
  FeatureInv2PiInlineImm = 56,
  FeatureLDSBankCount16 = 57,
  FeatureLDSBankCount32 = 58,
  FeatureLocalMemorySize0 = 59,
  FeatureLocalMemorySize32768 = 60,
  FeatureLocalMemorySize65536 = 61,
  FeatureMIMG_R128 = 62,
  FeatureMadMixInsts = 63,
  FeatureMaxPrivateElementSize4 = 64,
  FeatureMaxPrivateElementSize8 = 65,
  FeatureMaxPrivateElementSize16 = 66,
  FeatureMovrel = 67,
  FeaturePromoteAlloca = 68,
  FeatureR128A16 = 69,
  FeatureSDWA = 70,
  FeatureSDWAMac = 71,
  FeatureSDWAOmod = 72,
  FeatureSDWAOutModsVOPC = 73,
  FeatureSDWAScalar = 74,
  FeatureSDWASdst = 75,
  FeatureSGPRInitBug = 76,
  FeatureSMemRealTime = 77,
  FeatureSRAMECC = 78,
  FeatureScalarAtomics = 79,
  FeatureScalarStores = 80,
  FeatureSeaIslands = 81,
  FeatureSouthernIslands = 82,
  FeatureTrapHandler = 83,
  FeatureTrigReducedRange = 84,
  FeatureUnalignedBufferAccess = 85,
  FeatureUnalignedScratchAccess = 86,
  FeatureUnpackedD16VMem = 87,
  FeatureVGPRIndexMode = 88,
  FeatureVIInsts = 89,
  FeatureVOP3P = 90,
  FeatureVolcanicIslands = 91,
  FeatureWavefrontSize16 = 92,
  FeatureWavefrontSize32 = 93,
  FeatureWavefrontSize64 = 94,
  FeatureXNACK = 95,
  HalfRate64Ops = 96,
};
} // end namespace AMDGPU
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[] = {
  { "16-bit-insts", "Has i16/f16 instructions", { AMDGPU::Feature16BitInsts }, { } },
  { "DumpCode", "Dump MachineInstrs in the CodeEmitter", { AMDGPU::FeatureDumpCode }, { } },
  { "GFX9", "GFX9 GPU generation", { AMDGPU::FeatureGFX9 }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize65536, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureFlatAddressSpace, AMDGPU::FeatureGCN, AMDGPU::FeatureGCN3Encoding, AMDGPU::FeatureCIInsts, AMDGPU::FeatureVIInsts, AMDGPU::Feature16BitInsts, AMDGPU::FeatureSMemRealTime, AMDGPU::FeatureScalarStores, AMDGPU::FeatureInv2PiInlineImm, AMDGPU::FeatureApertureRegs, AMDGPU::FeatureGFX9Insts, AMDGPU::FeatureVOP3P, AMDGPU::FeatureVGPRIndexMode, AMDGPU::FeatureFastFMAF32, AMDGPU::FeatureDPP, AMDGPU::FeatureIntClamp, AMDGPU::FeatureSDWA, AMDGPU::FeatureSDWAOmod, AMDGPU::FeatureSDWAScalar, AMDGPU::FeatureSDWASdst, AMDGPU::FeatureFlatInstOffsets, AMDGPU::FeatureFlatGlobalInsts, AMDGPU::FeatureFlatScratchInsts, AMDGPU::FeatureAddNoCarryInsts, AMDGPU::FeatureScalarAtomics, AMDGPU::FeatureR128A16 } },
  { "SEA_ISLANDS", "SEA_ISLANDS GPU generation", { AMDGPU::FeatureSeaIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize65536, AMDGPU::FeatureMIMG_R128, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureGCN, AMDGPU::FeatureFlatAddressSpace, AMDGPU::FeatureCIInsts, AMDGPU::FeatureMovrel, AMDGPU::FeatureTrigReducedRange } },
  { "SOUTHERN_ISLANDS", "SOUTHERN_ISLANDS GPU generation", { AMDGPU::FeatureSouthernIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize32768, AMDGPU::FeatureMIMG_R128, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureGCN, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureMovrel, AMDGPU::FeatureTrigReducedRange } },
  { "VOLCANIC_ISLANDS", "VOLCANIC_ISLANDS GPU generation", { AMDGPU::FeatureVolcanicIslands }, { AMDGPU::FeatureFP64, AMDGPU::FeatureLocalMemorySize65536, AMDGPU::FeatureMIMG_R128, AMDGPU::FeatureWavefrontSize64, AMDGPU::FeatureFlatAddressSpace, AMDGPU::FeatureGCN, AMDGPU::FeatureGCN3Encoding, AMDGPU::FeatureCIInsts, AMDGPU::FeatureVIInsts, AMDGPU::Feature16BitInsts, AMDGPU::FeatureSMemRealTime, AMDGPU::FeatureVGPRIndexMode, AMDGPU::FeatureMovrel, AMDGPU::FeatureScalarStores, AMDGPU::FeatureInv2PiInlineImm, AMDGPU::FeatureSDWA, AMDGPU::FeatureSDWAOutModsVOPC, AMDGPU::FeatureSDWAMac, AMDGPU::FeatureDPP, AMDGPU::FeatureIntClamp, AMDGPU::FeatureTrigReducedRange } },
  { "add-no-carry-insts", "Have VALU add/sub instructions without carry out", { AMDGPU::FeatureAddNoCarryInsts }, { } },
  { "amdgpu-debugger-emit-prologue", "Emit debugger prologue", { AMDGPU::FeatureDebuggerEmitPrologue }, { } },
  { "amdgpu-debugger-insert-nops", "Insert one nop instruction for each high level source statement", { AMDGPU::FeatureDebuggerInsertNops }, { } },
  { "aperture-regs", "Has Memory Aperture Base and Size Registers", { AMDGPU::FeatureApertureRegs }, { } },
  { "auto-waitcnt-before-barrier", "Hardware automatically inserts waitcnt before barrier", { AMDGPU::FeatureAutoWaitcntBeforeBarrier }, { } },
  { "ci-insts", "Additional instructions for CI+", { AMDGPU::FeatureCIInsts }, { } },
  { "code-object-v3", "Generate code object version 3", { AMDGPU::FeatureCodeObjectV3 }, { } },
  { "dl-insts", "Has v_fmac_f32 and v_xnor_b32 instructions", { AMDGPU::FeatureDLInsts }, { } },
  { "dot-insts", "Has v_dot* instructions", { AMDGPU::FeatureDotInsts }, { } },
  { "dpp", "Support DPP (Data Parallel Primitives) extension", { AMDGPU::FeatureDPP }, { } },
  { "dumpcode", "Dump MachineInstrs in the CodeEmitter", { AMDGPU::FeatureDumpCodeLower }, { } },
  { "dx10-clamp", "clamp modifier clamps NaNs to 0.0", { AMDGPU::FeatureDX10Clamp }, { } },
  { "enable-ds128", "Use ds_{read|write}_b128", { AMDGPU::FeatureEnableDS128 }, { } },
  { "enable-prt-strict-null", "Enable zeroing of result registers for sparse texture fetches", { AMDGPU::FeatureEnablePRTStrictNull }, { } },
  { "fast-fmaf", "Assuming f32 fma is at least as fast as mul + add", { AMDGPU::FeatureFastFMAF32 }, { } },
  { "flat-address-space", "Support flat address space", { AMDGPU::FeatureFlatAddressSpace }, { } },
  { "flat-for-global", "Force to generate flat instruction for global", { AMDGPU::FeatureFlatForGlobal }, { } },
  { "flat-global-insts", "Have global_* flat memory instructions", { AMDGPU::FeatureFlatGlobalInsts }, { } },
  { "flat-inst-offsets", "Flat instructions have immediate offset addressing mode", { AMDGPU::FeatureFlatInstOffsets }, { } },
  { "flat-scratch-insts", "Have scratch_* flat memory instructions", { AMDGPU::FeatureFlatScratchInsts }, { } },
  { "fma-mix-insts", "Has v_fma_mix_f32, v_fma_mixlo_f16, v_fma_mixhi_f16 instructions", { AMDGPU::FeatureFmaMixInsts }, { } },
  { "fmaf", "Enable single precision FMA (not as fast as mul+add, but fused)", { AMDGPU::FeatureFMA }, { } },
  { "fp-exceptions", "Enable floating point exceptions", { AMDGPU::FeatureFPExceptions }, { } },
  { "fp16-denormals", "Enable half precision denormal handling", { AMDGPU::FeatureFP16Denormals }, { AMDGPU::FeatureFP64FP16Denormals } },
  { "fp32-denormals", "Enable single precision denormal handling", { AMDGPU::FeatureFP32Denormals }, { } },
  { "fp64", "Enable double precision operations", { AMDGPU::FeatureFP64 }, { } },
  { "fp64-denormals", "Enable double and half precision denormal handling", { AMDGPU::FeatureFP64Denormals }, { AMDGPU::FeatureFP64, AMDGPU::FeatureFP64FP16Denormals } },
  { "fp64-fp16-denormals", "Enable double and half precision denormal handling", { AMDGPU::FeatureFP64FP16Denormals }, { AMDGPU::FeatureFP64 } },
  { "gcn", "GCN or newer GPU", { AMDGPU::FeatureGCN }, { } },
  { "gcn3-encoding", "Encoding format for VI", { AMDGPU::FeatureGCN3Encoding }, { } },
  { "gfx9-insts", "Additional instructions for GFX9+", { AMDGPU::FeatureGFX9Insts }, { } },
  { "half-rate-64-ops", "Most fp64 instructions are half rate instead of quarter", { AMDGPU::HalfRate64Ops }, { } },
  { "huge-private-buffer", "Enable private/scratch buffer sizes greater than 128 GB", { AMDGPU::FeatureEnableHugePrivateBuffer }, { } },
  { "int-clamp-insts", "Support clamp for integer destination", { AMDGPU::FeatureIntClamp }, { } },
  { "inv-2pi-inline-imm", "Has 1 / (2 * pi) as inline immediate", { AMDGPU::FeatureInv2PiInlineImm }, { } },
  { "isaver6.0.0", "Instruction set version number", { AMDGPU::FeatureISAVersion6_0_0 }, { AMDGPU::FeatureSouthernIslands, AMDGPU::FeatureFastFMAF32, AMDGPU::HalfRate64Ops, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver6.0.1", "Instruction set version number", { AMDGPU::FeatureISAVersion6_0_1 }, { AMDGPU::FeatureSouthernIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver7.0.0", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_0 }, { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver7.0.1", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_1 }, { AMDGPU::FeatureSeaIslands, AMDGPU::HalfRate64Ops, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureFastFMAF32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver7.0.2", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_2 }, { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount16, AMDGPU::FeatureFastFMAF32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver7.0.3", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_3 }, { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount16, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver7.0.4", "Instruction set version number", { AMDGPU::FeatureISAVersion7_0_4 }, { AMDGPU::FeatureSeaIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver8.0.1", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_1 }, { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureFastFMAF32, AMDGPU::HalfRate64Ops, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureXNACK, AMDGPU::FeatureUnpackedD16VMem, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver8.0.2", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_2 }, { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureSGPRInitBug, AMDGPU::FeatureUnpackedD16VMem, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver8.0.3", "Instruction set version number", { AMDGPU::FeatureISAVersion8_0_3 }, { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureUnpackedD16VMem, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver8.1.0", "Instruction set version number", { AMDGPU::FeatureISAVersion8_1_0 }, { AMDGPU::FeatureVolcanicIslands, AMDGPU::FeatureLDSBankCount16, AMDGPU::FeatureXNACK, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver9.0.0", "Instruction set version number", { AMDGPU::FeatureISAVersion9_0_0 }, { AMDGPU::FeatureGFX9, AMDGPU::FeatureMadMixInsts, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver9.0.2", "Instruction set version number", { AMDGPU::FeatureISAVersion9_0_2 }, { AMDGPU::FeatureGFX9, AMDGPU::FeatureMadMixInsts, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureXNACK, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver9.0.4", "Instruction set version number", { AMDGPU::FeatureISAVersion9_0_4 }, { AMDGPU::FeatureGFX9, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureFmaMixInsts, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver9.0.6", "Instruction set version number", { AMDGPU::FeatureISAVersion9_0_6 }, { AMDGPU::FeatureGFX9, AMDGPU::HalfRate64Ops, AMDGPU::FeatureFmaMixInsts, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureDLInsts, AMDGPU::FeatureDotInsts, AMDGPU::FeatureSRAMECC, AMDGPU::FeatureCodeObjectV3 } },
  { "isaver9.0.9", "Instruction set version number", { AMDGPU::FeatureISAVersion9_0_9 }, { AMDGPU::FeatureGFX9, AMDGPU::FeatureMadMixInsts, AMDGPU::FeatureLDSBankCount32, AMDGPU::FeatureXNACK, AMDGPU::FeatureCodeObjectV3 } },
  { "ldsbankcount16", "The number of LDS banks per compute unit.", { AMDGPU::FeatureLDSBankCount16 }, { } },
  { "ldsbankcount32", "The number of LDS banks per compute unit.", { AMDGPU::FeatureLDSBankCount32 }, { } },
  { "load-store-opt", "Enable SI load/store optimizer pass", { AMDGPU::FeatureEnableLoadStoreOpt }, { } },
  { "localmemorysize0", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize0 }, { } },
  { "localmemorysize32768", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize32768 }, { } },
  { "localmemorysize65536", "The size of local memory in bytes", { AMDGPU::FeatureLocalMemorySize65536 }, { } },
  { "mad-mix-insts", "Has v_mad_mix_f32, v_mad_mixlo_f16, v_mad_mixhi_f16 instructions", { AMDGPU::FeatureMadMixInsts }, { } },
  { "max-private-element-size-16", "Maximum private access size may be 16", { AMDGPU::FeatureMaxPrivateElementSize16 }, { } },
  { "max-private-element-size-4", "Maximum private access size may be 4", { AMDGPU::FeatureMaxPrivateElementSize4 }, { } },
  { "max-private-element-size-8", "Maximum private access size may be 8", { AMDGPU::FeatureMaxPrivateElementSize8 }, { } },
  { "mimg-r128", "Support 128-bit texture resources", { AMDGPU::FeatureMIMG_R128 }, { } },
  { "movrel", "Has v_movrel*_b32 instructions", { AMDGPU::FeatureMovrel }, { } },
  { "promote-alloca", "Enable promote alloca pass", { AMDGPU::FeaturePromoteAlloca }, { } },
  { "r128-a16", "Support 16 bit coordindates/gradients/lod/clamp/mip types on gfx9", { AMDGPU::FeatureR128A16 }, { } },
  { "s-memrealtime", "Has s_memrealtime instruction", { AMDGPU::FeatureSMemRealTime }, { } },
  { "scalar-atomics", "Has atomic scalar memory instructions", { AMDGPU::FeatureScalarAtomics }, { } },
  { "scalar-stores", "Has store scalar memory instructions", { AMDGPU::FeatureScalarStores }, { } },
  { "sdwa", "Support SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWA }, { } },
  { "sdwa-mav", "Support v_mac_f32/f16 with SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWAMac }, { } },
  { "sdwa-omod", "Support OMod with SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWAOmod }, { } },
  { "sdwa-out-mods-vopc", "Support clamp for VOPC with SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWAOutModsVOPC }, { } },
  { "sdwa-scalar", "Support scalar register with SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWAScalar }, { } },
  { "sdwa-sdst", "Support scalar dst for VOPC with SDWA (Sub-DWORD Addressing) extension", { AMDGPU::FeatureSDWASdst }, { } },
  { "sgpr-init-bug", "VI SGPR initialization bug requiring a fixed SGPR allocation size", { AMDGPU::FeatureSGPRInitBug }, { } },
  { "si-scheduler", "Enable SI Machine Scheduler", { AMDGPU::FeatureEnableSIScheduler }, { } },
  { "sram-ecc", "Enable SRAM ECC", { AMDGPU::FeatureSRAMECC }, { } },
  { "trap-handler", "Trap handler support", { AMDGPU::FeatureTrapHandler }, { } },
  { "trig-reduced-range", "Requires use of fract on arguments to trig instructions", { AMDGPU::FeatureTrigReducedRange }, { } },
  { "unaligned-buffer-access", "Support unaligned global loads and stores", { AMDGPU::FeatureUnalignedBufferAccess }, { } },
  { "unaligned-scratch-access", "Support unaligned scratch loads and stores", { AMDGPU::FeatureUnalignedScratchAccess }, { } },
  { "unpacked-d16-vmem", "Has unpacked d16 vmem instructions", { AMDGPU::FeatureUnpackedD16VMem }, { } },
  { "unsafe-ds-offset-folding", "Force using DS instruction immediate offsets on SI", { AMDGPU::FeatureEnableUnsafeDSOffsetFolding }, { } },
  { "vgpr-index-mode", "Has VGPR mode register indexing", { AMDGPU::FeatureVGPRIndexMode }, { } },
  { "vi-insts", "Additional instructions for VI+", { AMDGPU::FeatureVIInsts }, { } },
  { "vop3p", "Has VOP3P packed instructions", { AMDGPU::FeatureVOP3P }, { } },
  { "wavefrontsize16", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize16 }, { } },
  { "wavefrontsize32", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize32 }, { } },
  { "wavefrontsize64", "The number of threads per wavefront", { AMDGPU::FeatureWavefrontSize64 }, { } },
  { "xnack", "Enable XNACK support", { AMDGPU::FeatureXNACK }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[] = {
  { "bonaire", "Select the bonaire processor", { AMDGPU::FeatureISAVersion7_0_4 }, { } },
  { "carrizo", "Select the carrizo processor", { AMDGPU::FeatureISAVersion8_0_1 }, { } },
  { "fiji", "Select the fiji processor", { AMDGPU::FeatureISAVersion8_0_3 }, { } },
  { "generic", "Select the generic processor", { AMDGPU::FeatureGCN, AMDGPU::FeatureWavefrontSize64 }, { } },
  { "gfx600", "Select the gfx600 processor", { AMDGPU::FeatureISAVersion6_0_0 }, { } },
  { "gfx601", "Select the gfx601 processor", { AMDGPU::FeatureISAVersion6_0_1 }, { } },
  { "gfx700", "Select the gfx700 processor", { AMDGPU::FeatureISAVersion7_0_0 }, { } },
  { "gfx701", "Select the gfx701 processor", { AMDGPU::FeatureISAVersion7_0_1 }, { } },
  { "gfx702", "Select the gfx702 processor", { AMDGPU::FeatureISAVersion7_0_2 }, { } },
  { "gfx703", "Select the gfx703 processor", { AMDGPU::FeatureISAVersion7_0_3 }, { } },
  { "gfx704", "Select the gfx704 processor", { AMDGPU::FeatureISAVersion7_0_4 }, { } },
  { "gfx801", "Select the gfx801 processor", { AMDGPU::FeatureISAVersion8_0_1 }, { } },
  { "gfx802", "Select the gfx802 processor", { AMDGPU::FeatureISAVersion8_0_2 }, { } },
  { "gfx803", "Select the gfx803 processor", { AMDGPU::FeatureISAVersion8_0_3 }, { } },
  { "gfx810", "Select the gfx810 processor", { AMDGPU::FeatureISAVersion8_1_0 }, { } },
  { "gfx900", "Select the gfx900 processor", { AMDGPU::FeatureISAVersion9_0_0 }, { } },
  { "gfx902", "Select the gfx902 processor", { AMDGPU::FeatureISAVersion9_0_2 }, { } },
  { "gfx904", "Select the gfx904 processor", { AMDGPU::FeatureISAVersion9_0_4 }, { } },
  { "gfx906", "Select the gfx906 processor", { AMDGPU::FeatureISAVersion9_0_6 }, { } },
  { "gfx909", "Select the gfx909 processor", { AMDGPU::FeatureISAVersion9_0_9 }, { } },
  { "hainan", "Select the hainan processor", { AMDGPU::FeatureISAVersion6_0_1 }, { } },
  { "hawaii", "Select the hawaii processor", { AMDGPU::FeatureISAVersion7_0_1 }, { } },
  { "iceland", "Select the iceland processor", { AMDGPU::FeatureISAVersion8_0_2 }, { } },
  { "kabini", "Select the kabini processor", { AMDGPU::FeatureISAVersion7_0_3 }, { } },
  { "kaveri", "Select the kaveri processor", { AMDGPU::FeatureISAVersion7_0_0 }, { } },
  { "mullins", "Select the mullins processor", { AMDGPU::FeatureISAVersion7_0_3 }, { } },
  { "oland", "Select the oland processor", { AMDGPU::FeatureISAVersion6_0_1 }, { } },
  { "pitcairn", "Select the pitcairn processor", { AMDGPU::FeatureISAVersion6_0_1 }, { } },
  { "polaris10", "Select the polaris10 processor", { AMDGPU::FeatureISAVersion8_0_3 }, { } },
  { "polaris11", "Select the polaris11 processor", { AMDGPU::FeatureISAVersion8_0_3 }, { } },
  { "stoney", "Select the stoney processor", { AMDGPU::FeatureISAVersion8_1_0 }, { } },
  { "tahiti", "Select the tahiti processor", { AMDGPU::FeatureISAVersion6_0_0 }, { } },
  { "tonga", "Select the tonga processor", { AMDGPU::FeatureISAVersion8_0_2 }, { } },
  { "verde", "Select the verde processor", { AMDGPU::FeatureISAVersion6_0_1 }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 5,  1}, // #1
  { 6,  1}, // #2
  { 3,  1}, // #3
  { 2,  1}, // #4
  { 1,  1}, // #5
  { 4,  1}, // #6
  { 4,  1}, // #7
  { 5,  1}, // #8
  { 5,  2} // #9
}; // AMDGPUWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 Write32Bit_WriteSALU_WriteFloatFMA
  {80,  0}, // #2 WriteVMEM
  { 5,  0}, // #3 WriteLDS_WriteSMEM
  { 4,  0}, // #4 WriteExport_WriteQuarterRate32_WriteDouble
  { 8,  0}, // #5 WriteBranch_WriteDoubleAdd
  { 1,  0}, // #6 Write32Bit_WriteFloatFMA
  { 1,  0}, // #7 WriteSALU
  { 2,  0}, // #8 Write64Bit_WriteDoubleAdd
  {16,  0}, // #9 WriteFloatFMA_WriteDouble
  {16,  0}, // #10 WriteFloatFMA_WriteDouble
  { 1,  0}, // #11 WriteSALU
  { 4,  0}, // #12 WriteQuarterRate32_WriteDouble
  { 1,  0}, // #13 WriteSALU
  { 2,  0}, // #14 Write64Bit
  { 2,  0}, // #15 Write64Bit
  {500,  0} // #16 WriteBarrier
}; // AMDGPUWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // AMDGPUReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIQuarterSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_Write32Bit") 1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false,  2, 1,  2, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteLDS")   1, false, false,  3, 1,  3, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteExport") 1, false, false,  4, 1,  4, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteBranch") 1, false, false,  5, 1,  5, 1,  0, 0}, // #5
  {DBGFIELD("NullALU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("NullALU_WriteSALU")  1, false, false,  6, 1,  1, 1,  0, 0}, // #7
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false,  3, 1,  3, 1,  0, 0}, // #8
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false,  1, 1,  5, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_Write64Bit") 1, false, false,  1, 1,  8, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false,  1, 1,  4, 1,  0, 0}, // #12
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false,  1, 1,  9, 1,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDouble") 1, false, false,  1, 1,  9, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false,  7, 2, 10, 2,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false,  7, 2, 10, 2,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteQuarterRate32_WriteSALU") 2, false, false,  7, 2, 12, 2,  0, 0}, // #17
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false,  9, 1, 14, 2,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false,  5, 1, 16, 1,  0, 0}, // #19
  {DBGFIELD("COPY")               16382, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("Write32Bit")         1, false, false,  1, 1,  1, 1,  0, 0}, // #21
  {DBGFIELD("Write64Bit")         1, false, false,  1, 1,  8, 1,  0, 0}, // #22
  {DBGFIELD("WriteSALU")          1, false, false,  6, 1,  1, 1,  0, 0}, // #23
}; // SIQuarterSpeedModelSchedClasses

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc SIFullSpeedModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("NullALU_Write32Bit") 1, false, false,  1, 1,  1, 1,  0, 0}, // #1
  {DBGFIELD("NullALU_WriteVMEM")  1, false, false,  2, 1,  2, 1,  0, 0}, // #2
  {DBGFIELD("NullALU_WriteLDS")   1, false, false,  3, 1,  3, 1,  0, 0}, // #3
  {DBGFIELD("NullALU_WriteExport") 1, false, false,  4, 1,  4, 1,  0, 0}, // #4
  {DBGFIELD("NullALU_WriteBranch") 1, false, false,  5, 1,  5, 1,  0, 0}, // #5
  {DBGFIELD("NullALU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("NullALU_WriteSALU")  1, false, false,  6, 1,  1, 1,  0, 0}, // #7
  {DBGFIELD("NullALU_WriteSMEM")  1, false, false,  3, 1,  3, 1,  0, 0}, // #8
  {DBGFIELD("NullALU_Write32Bit_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #9
  {DBGFIELD("NullALU_WriteDoubleAdd") 1, false, false,  1, 1,  8, 1,  0, 0}, // #10
  {DBGFIELD("NullALU_Write64Bit") 1, false, false,  1, 1,  8, 1,  0, 0}, // #11
  {DBGFIELD("NullALU_WriteQuarterRate32") 1, false, false,  1, 1,  4, 1,  0, 0}, // #12
  {DBGFIELD("NullALU_WriteFloatFMA") 1, false, false,  1, 1,  1, 1,  0, 0}, // #13
  {DBGFIELD("NullALU_WriteDouble") 1, false, false,  1, 1,  4, 1,  0, 0}, // #14
  {DBGFIELD("NullALU_WriteFloatFMA_WriteSALU") 2, false, false,  7, 2,  6, 2,  0, 0}, // #15
  {DBGFIELD("NullALU_WriteDouble_WriteSALU") 2, false, false,  7, 2, 12, 2,  0, 0}, // #16
  {DBGFIELD("NullALU_WriteQuarterRate32_WriteSALU") 2, false, false,  7, 2, 12, 2,  0, 0}, // #17
  {DBGFIELD("NullALU_Write64Bit_Write64Bit") 2, false, false,  9, 1, 14, 2,  0, 0}, // #18
  {DBGFIELD("NullALU_WriteBarrier") 1, false, false,  5, 1, 16, 1,  0, 0}, // #19
  {DBGFIELD("COPY")               16382, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("Write32Bit")         1, false, false,  1, 1,  1, 1,  0, 0}, // #21
  {DBGFIELD("Write64Bit")         1, false, false,  1, 1,  8, 1,  0, 0}, // #22
  {DBGFIELD("WriteSALU")          1, false, false,  6, 1,  1, 1,  0, 0}, // #23
}; // SIFullSpeedModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned SIQuarterSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIQuarterSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 7, nullptr}, // #2
  {"HWLGKM",          1, 0, 31, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 15, nullptr}, // #6
};

static const llvm::MCSchedModel SIQuarterSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  SIQuarterSpeedModelProcResources,
  SIQuarterSpeedModelSchedClasses,
  7,
  24,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

static const unsigned SIFullSpeedModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc SIFullSpeedModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"HWBranch",        1, 0, 1, nullptr}, // #1
  {"HWExport",        1, 0, 7, nullptr}, // #2
  {"HWLGKM",          1, 0, 31, nullptr}, // #3
  {"HWSALU",          1, 0, 1, nullptr}, // #4
  {"HWVALU",          1, 0, 1, nullptr}, // #5
  {"HWVMEM",          1, 0, 15, nullptr}, // #6
};

static const llvm::MCSchedModel SIFullSpeedModel = {
  1, // IssueWidth
  1, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  20, // MispredictPenalty
  true, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  SIFullSpeedModelProcResources,
  SIFullSpeedModelSchedClasses,
  7,
  24,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of sched model for CPU subtype.
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[] = {
  { "bonaire", (const void *)&SIQuarterSpeedModel },
  { "carrizo", (const void *)&SIQuarterSpeedModel },
  { "fiji", (const void *)&SIQuarterSpeedModel },
  { "generic", (const void *)&NoSchedModel },
  { "gfx600", (const void *)&SIFullSpeedModel },
  { "gfx601", (const void *)&SIQuarterSpeedModel },
  { "gfx700", (const void *)&SIQuarterSpeedModel },
  { "gfx701", (const void *)&SIFullSpeedModel },
  { "gfx702", (const void *)&SIQuarterSpeedModel },
  { "gfx703", (const void *)&SIQuarterSpeedModel },
  { "gfx704", (const void *)&SIQuarterSpeedModel },
  { "gfx801", (const void *)&SIQuarterSpeedModel },
  { "gfx802", (const void *)&SIQuarterSpeedModel },
  { "gfx803", (const void *)&SIQuarterSpeedModel },
  { "gfx810", (const void *)&SIQuarterSpeedModel },
  { "gfx900", (const void *)&SIQuarterSpeedModel },
  { "gfx902", (const void *)&SIQuarterSpeedModel },
  { "gfx904", (const void *)&SIQuarterSpeedModel },
  { "gfx906", (const void *)&SIQuarterSpeedModel },
  { "gfx909", (const void *)&SIQuarterSpeedModel },
  { "hainan", (const void *)&SIQuarterSpeedModel },
  { "hawaii", (const void *)&SIFullSpeedModel },
  { "iceland", (const void *)&SIQuarterSpeedModel },
  { "kabini", (const void *)&SIQuarterSpeedModel },
  { "kaveri", (const void *)&SIQuarterSpeedModel },
  { "mullins", (const void *)&SIQuarterSpeedModel },
  { "oland", (const void *)&SIQuarterSpeedModel },
  { "pitcairn", (const void *)&SIQuarterSpeedModel },
  { "polaris10", (const void *)&SIQuarterSpeedModel },
  { "polaris11", (const void *)&SIQuarterSpeedModel },
  { "stoney", (const void *)&SIQuarterSpeedModel },
  { "tahiti", (const void *)&SIFullSpeedModel },
  { "tonga", (const void *)&SIQuarterSpeedModel },
  { "verde", (const void *)&SIQuarterSpeedModel },
};

#undef DBGFIELD
namespace AMDGPU_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  switch (SchedClass) {
  case 20: // COPY
    if (CPUID == 1) { // SIQuarterSpeedModel
      return 23; // WriteSALU
    }
    if (CPUID == 2) { // SIFullSpeedModel
      return 23; // WriteSALU
    }
    break;
  };
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace AMDGPU_MC

struct AMDGPUGenMCSubtargetInfo : public MCSubtargetInfo {
  AMDGPUGenMCSubtargetInfo(const Triple &TT, 
    StringRef CPU, StringRef FS, ArrayRef<SubtargetFeatureKV> PF,
    ArrayRef<SubtargetFeatureKV> PD,
    const SubtargetInfoKV *ProcSched,
    const MCWriteProcResEntry *WPR,
    const MCWriteLatencyEntry *WL,
    const MCReadAdvanceEntry *RA, const InstrStage *IS,
    const unsigned *OC, const unsigned *FP) :
      MCSubtargetInfo(TT, CPU, FS, PF, PD, ProcSched,
                      WPR, WL, RA, IS, OC, FP) { }

  unsigned resolveVariantSchedClass(unsigned SchedClass,
      const MCInst *MI, unsigned CPUID) const override {
    return AMDGPU_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createAMDGPUMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new AMDGPUGenMCSubtargetInfo(TT, CPU, FS, AMDGPUFeatureKV, AMDGPUSubTypeKV, 
                      AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                      nullptr, nullptr, nullptr);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AMDGPUSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[AMDGPU::Feature16BitInsts]) Has16BitInsts = true;
  if (Bits[AMDGPU::FeatureAddNoCarryInsts]) AddNoCarryInsts = true;
  if (Bits[AMDGPU::FeatureApertureRegs]) HasApertureRegs = true;
  if (Bits[AMDGPU::FeatureAutoWaitcntBeforeBarrier]) AutoWaitcntBeforeBarrier = true;
  if (Bits[AMDGPU::FeatureCIInsts]) CIInsts = true;
  if (Bits[AMDGPU::FeatureCodeObjectV3]) CodeObjectV3 = true;
  if (Bits[AMDGPU::FeatureDLInsts]) HasDLInsts = true;
  if (Bits[AMDGPU::FeatureDPP]) HasDPP = true;
  if (Bits[AMDGPU::FeatureDX10Clamp]) DX10Clamp = true;
  if (Bits[AMDGPU::FeatureDebuggerEmitPrologue]) DebuggerEmitPrologue = true;
  if (Bits[AMDGPU::FeatureDebuggerInsertNops]) DebuggerInsertNops = true;
  if (Bits[AMDGPU::FeatureDisable]) FeatureDisable = true;
  if (Bits[AMDGPU::FeatureDotInsts]) HasDotInsts = true;
  if (Bits[AMDGPU::FeatureDumpCode]) DumpCode = true;
  if (Bits[AMDGPU::FeatureDumpCodeLower]) DumpCode = true;
  if (Bits[AMDGPU::FeatureEnableDS128]) EnableDS128 = true;
  if (Bits[AMDGPU::FeatureEnableHugePrivateBuffer]) EnableHugePrivateBuffer = true;
  if (Bits[AMDGPU::FeatureEnableLoadStoreOpt]) EnableLoadStoreOpt = true;
  if (Bits[AMDGPU::FeatureEnablePRTStrictNull]) EnablePRTStrictNull = true;
  if (Bits[AMDGPU::FeatureEnableSIScheduler]) EnableSIScheduler = true;
  if (Bits[AMDGPU::FeatureEnableUnsafeDSOffsetFolding]) EnableUnsafeDSOffsetFolding = true;
  if (Bits[AMDGPU::FeatureFMA]) FMA = true;
  if (Bits[AMDGPU::FeatureFP16Denormals]) FP64FP16Denormals = true;
  if (Bits[AMDGPU::FeatureFP32Denormals]) FP32Denormals = true;
  if (Bits[AMDGPU::FeatureFP64]) FP64 = true;
  if (Bits[AMDGPU::FeatureFP64Denormals]) FP64FP16Denormals = true;
  if (Bits[AMDGPU::FeatureFP64FP16Denormals]) FP64FP16Denormals = true;
  if (Bits[AMDGPU::FeatureFPExceptions]) FPExceptions = true;
  if (Bits[AMDGPU::FeatureFastFMAF32]) FastFMAF32 = true;
  if (Bits[AMDGPU::FeatureFlatAddressSpace]) FlatAddressSpace = true;
  if (Bits[AMDGPU::FeatureFlatForGlobal]) FlatForGlobal = true;
  if (Bits[AMDGPU::FeatureFlatGlobalInsts]) FlatGlobalInsts = true;
  if (Bits[AMDGPU::FeatureFlatInstOffsets]) FlatInstOffsets = true;
  if (Bits[AMDGPU::FeatureFlatScratchInsts]) FlatScratchInsts = true;
  if (Bits[AMDGPU::FeatureFmaMixInsts]) HasFmaMixInsts = true;
  if (Bits[AMDGPU::FeatureGCN]) IsGCN = true;
  if (Bits[AMDGPU::FeatureGCN3Encoding]) GCN3Encoding = true;
  if (Bits[AMDGPU::FeatureGFX9] && Gen < GCNSubtarget::GFX9) Gen = GCNSubtarget::GFX9;
  if (Bits[AMDGPU::FeatureGFX9Insts]) GFX9Insts = true;
  if (Bits[AMDGPU::FeatureISAVersion6_0_0] && IsaVersion < ISAVersion6_0_0) IsaVersion = ISAVersion6_0_0;
  if (Bits[AMDGPU::FeatureISAVersion6_0_1] && IsaVersion < ISAVersion6_0_1) IsaVersion = ISAVersion6_0_1;
  if (Bits[AMDGPU::FeatureISAVersion7_0_0] && IsaVersion < ISAVersion7_0_0) IsaVersion = ISAVersion7_0_0;
  if (Bits[AMDGPU::FeatureISAVersion7_0_1] && IsaVersion < ISAVersion7_0_1) IsaVersion = ISAVersion7_0_1;
  if (Bits[AMDGPU::FeatureISAVersion7_0_2] && IsaVersion < ISAVersion7_0_2) IsaVersion = ISAVersion7_0_2;
  if (Bits[AMDGPU::FeatureISAVersion7_0_3] && IsaVersion < ISAVersion7_0_3) IsaVersion = ISAVersion7_0_3;
  if (Bits[AMDGPU::FeatureISAVersion7_0_4] && IsaVersion < ISAVersion7_0_4) IsaVersion = ISAVersion7_0_4;
  if (Bits[AMDGPU::FeatureISAVersion8_0_1] && IsaVersion < ISAVersion8_0_1) IsaVersion = ISAVersion8_0_1;
  if (Bits[AMDGPU::FeatureISAVersion8_0_2] && IsaVersion < ISAVersion8_0_2) IsaVersion = ISAVersion8_0_2;
  if (Bits[AMDGPU::FeatureISAVersion8_0_3] && IsaVersion < ISAVersion8_0_3) IsaVersion = ISAVersion8_0_3;
  if (Bits[AMDGPU::FeatureISAVersion8_1_0] && IsaVersion < ISAVersion8_1_0) IsaVersion = ISAVersion8_1_0;
  if (Bits[AMDGPU::FeatureISAVersion9_0_0] && IsaVersion < ISAVersion9_0_0) IsaVersion = ISAVersion9_0_0;
  if (Bits[AMDGPU::FeatureISAVersion9_0_2] && IsaVersion < ISAVersion9_0_2) IsaVersion = ISAVersion9_0_2;
  if (Bits[AMDGPU::FeatureISAVersion9_0_4] && IsaVersion < ISAVersion9_0_4) IsaVersion = ISAVersion9_0_4;
  if (Bits[AMDGPU::FeatureISAVersion9_0_6] && IsaVersion < ISAVersion9_0_6) IsaVersion = ISAVersion9_0_6;
  if (Bits[AMDGPU::FeatureISAVersion9_0_9] && IsaVersion < ISAVersion9_0_9) IsaVersion = ISAVersion9_0_9;
  if (Bits[AMDGPU::FeatureIntClamp]) HasIntClamp = true;
  if (Bits[AMDGPU::FeatureInv2PiInlineImm]) HasInv2PiInlineImm = true;
  if (Bits[AMDGPU::FeatureLDSBankCount16] && LDSBankCount < 16) LDSBankCount = 16;
  if (Bits[AMDGPU::FeatureLDSBankCount32] && LDSBankCount < 32) LDSBankCount = 32;
  if (Bits[AMDGPU::FeatureLocalMemorySize0] && LocalMemorySize < 0) LocalMemorySize = 0;
  if (Bits[AMDGPU::FeatureLocalMemorySize32768] && LocalMemorySize < 32768) LocalMemorySize = 32768;
  if (Bits[AMDGPU::FeatureLocalMemorySize65536] && LocalMemorySize < 65536) LocalMemorySize = 65536;
  if (Bits[AMDGPU::FeatureMIMG_R128]) MIMG_R128 = true;
  if (Bits[AMDGPU::FeatureMadMixInsts]) HasMadMixInsts = true;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize4] && MaxPrivateElementSize < 4) MaxPrivateElementSize = 4;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize8] && MaxPrivateElementSize < 8) MaxPrivateElementSize = 8;
  if (Bits[AMDGPU::FeatureMaxPrivateElementSize16] && MaxPrivateElementSize < 16) MaxPrivateElementSize = 16;
  if (Bits[AMDGPU::FeatureMovrel]) HasMovrel = true;
  if (Bits[AMDGPU::FeaturePromoteAlloca]) EnablePromoteAlloca = true;
  if (Bits[AMDGPU::FeatureR128A16]) HasR128A16 = true;
  if (Bits[AMDGPU::FeatureSDWA]) HasSDWA = true;
  if (Bits[AMDGPU::FeatureSDWAMac]) HasSDWAMac = true;
  if (Bits[AMDGPU::FeatureSDWAOmod]) HasSDWAOmod = true;
  if (Bits[AMDGPU::FeatureSDWAOutModsVOPC]) HasSDWAOutModsVOPC = true;
  if (Bits[AMDGPU::FeatureSDWAScalar]) HasSDWAScalar = true;
  if (Bits[AMDGPU::FeatureSDWASdst]) HasSDWASdst = true;
  if (Bits[AMDGPU::FeatureSGPRInitBug]) SGPRInitBug = true;
  if (Bits[AMDGPU::FeatureSMemRealTime]) HasSMemRealTime = true;
  if (Bits[AMDGPU::FeatureSRAMECC]) EnableSRAMECC = true;
  if (Bits[AMDGPU::FeatureScalarAtomics]) HasScalarAtomics = true;
  if (Bits[AMDGPU::FeatureScalarStores]) HasScalarStores = true;
  if (Bits[AMDGPU::FeatureSeaIslands] && Gen < GCNSubtarget::SEA_ISLANDS) Gen = GCNSubtarget::SEA_ISLANDS;
  if (Bits[AMDGPU::FeatureSouthernIslands] && Gen < GCNSubtarget::SOUTHERN_ISLANDS) Gen = GCNSubtarget::SOUTHERN_ISLANDS;
  if (Bits[AMDGPU::FeatureTrapHandler]) TrapHandler = true;
  if (Bits[AMDGPU::FeatureTrigReducedRange]) HasTrigReducedRange = true;
  if (Bits[AMDGPU::FeatureUnalignedBufferAccess]) UnalignedBufferAccess = true;
  if (Bits[AMDGPU::FeatureUnalignedScratchAccess]) UnalignedScratchAccess = true;
  if (Bits[AMDGPU::FeatureUnpackedD16VMem]) HasUnpackedD16VMem = true;
  if (Bits[AMDGPU::FeatureVGPRIndexMode]) HasVGPRIndexMode = true;
  if (Bits[AMDGPU::FeatureVIInsts]) VIInsts = true;
  if (Bits[AMDGPU::FeatureVOP3P]) HasVOP3PInsts = true;
  if (Bits[AMDGPU::FeatureVolcanicIslands] && Gen < GCNSubtarget::VOLCANIC_ISLANDS) Gen = GCNSubtarget::VOLCANIC_ISLANDS;
  if (Bits[AMDGPU::FeatureWavefrontSize16] && WavefrontSize < 16) WavefrontSize = 16;
  if (Bits[AMDGPU::FeatureWavefrontSize32] && WavefrontSize < 32) WavefrontSize = 32;
  if (Bits[AMDGPU::FeatureWavefrontSize64] && WavefrontSize < 64) WavefrontSize = 64;
  if (Bits[AMDGPU::FeatureXNACK]) EnableXNACK = true;
  if (Bits[AMDGPU::HalfRate64Ops]) HalfRate64Ops = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace AMDGPU_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct AMDGPUGenSubtargetInfo : public TargetSubtargetInfo {
  explicit AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV AMDGPUFeatureKV[];
extern const llvm::SubtargetFeatureKV AMDGPUSubTypeKV[];
extern const llvm::SubtargetInfoKV AMDGPUProcSchedKV[];
extern const llvm::MCWriteProcResEntry AMDGPUWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry AMDGPUWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry AMDGPUReadAdvanceTable[];
AMDGPUGenSubtargetInfo::AMDGPUGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(AMDGPUFeatureKV, 96), makeArrayRef(AMDGPUSubTypeKV, 34), 
                        AMDGPUProcSchedKV, AMDGPUWriteProcResTable, AMDGPUWriteLatencyTable, AMDGPUReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned AMDGPUGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {

  const SIInstrInfo *TII =
    static_cast<const SIInstrInfo*>(SchedModel->getInstrInfo());
  (void)TII;

  switch (SchedClass) {
  case 20: // COPY
    if (SchedModel->getProcessorID() == 1) { // SIQuarterSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 21; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 22; // Write64Bit
      return 23; // WriteSALU
    }
    if (SchedModel->getProcessorID() == 2) { // SIFullSpeedModel
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) <= 32)
        return 21; // Write32Bit
      if (TII->isVGPRCopy(*MI) && TII->getOpSize(*MI, 0) > 32)
        return 22; // Write64Bit
      return 23; // WriteSALU
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // AMDGPUGenSubtargetInfo::resolveSchedClass

unsigned AMDGPUGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return AMDGPU_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // AMDGPUGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


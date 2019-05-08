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
namespace PPC {
enum {
  DeprecatedDST = 0,
  Directive32 = 1,
  Directive64 = 2,
  Directive440 = 3,
  Directive601 = 4,
  Directive602 = 5,
  Directive603 = 6,
  Directive604 = 7,
  Directive620 = 8,
  Directive750 = 9,
  Directive970 = 10,
  Directive7400 = 11,
  DirectiveA2 = 12,
  DirectiveE500 = 13,
  DirectiveE500mc = 14,
  DirectiveE5500 = 15,
  DirectivePwr3 = 16,
  DirectivePwr4 = 17,
  DirectivePwr5 = 18,
  DirectivePwr5x = 19,
  DirectivePwr6 = 20,
  DirectivePwr6x = 21,
  DirectivePwr7 = 22,
  DirectivePwr8 = 23,
  DirectivePwr9 = 24,
  Feature64Bit = 25,
  Feature64BitRegs = 26,
  FeatureAltivec = 27,
  FeatureBPERMD = 28,
  FeatureBookE = 29,
  FeatureCMPB = 30,
  FeatureCRBits = 31,
  FeatureDirectMove = 32,
  FeatureE500 = 33,
  FeatureExtDiv = 34,
  FeatureFCPSGN = 35,
  FeatureFPCVT = 36,
  FeatureFPRND = 37,
  FeatureFPU = 38,
  FeatureFRE = 39,
  FeatureFRES = 40,
  FeatureFRSQRTE = 41,
  FeatureFRSQRTES = 42,
  FeatureFSqrt = 43,
  FeatureFloat128 = 44,
  FeatureFusion = 45,
  FeatureHTM = 46,
  FeatureHardFloat = 47,
  FeatureICBT = 48,
  FeatureISA3_0 = 49,
  FeatureISEL = 50,
  FeatureInvariantFunctionDescriptors = 51,
  FeatureLDBRX = 52,
  FeatureLFIWAX = 53,
  FeatureLongCall = 54,
  FeatureMFOCRF = 55,
  FeatureMFTB = 56,
  FeatureMSYNC = 57,
  FeatureP8Altivec = 58,
  FeatureP8Crypto = 59,
  FeatureP8Vector = 60,
  FeatureP9Altivec = 61,
  FeatureP9Vector = 62,
  FeaturePOPCNTD = 63,
  FeaturePPC4xx = 64,
  FeaturePPC6xx = 65,
  FeaturePartwordAtomic = 66,
  FeatureQPX = 67,
  FeatureRecipPrec = 68,
  FeatureSPE = 69,
  FeatureSTFIWX = 70,
  FeatureSecurePlt = 71,
  FeatureSlowPOPCNTD = 72,
  FeatureVSX = 73,
};
} // end namespace PPC
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV PPCFeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", { PPC::Feature64Bit }, { } },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", { PPC::Feature64BitRegs }, { } },
  { "altivec", "Enable Altivec instructions", { PPC::FeatureAltivec }, { PPC::FeatureFPU } },
  { "booke", "Enable Book E instructions", { PPC::FeatureBookE }, { PPC::FeatureICBT } },
  { "bpermd", "Enable the bpermd instruction", { PPC::FeatureBPERMD }, { } },
  { "cmpb", "Enable the cmpb instruction", { PPC::FeatureCMPB }, { } },
  { "crbits", "Use condition-register bits individually", { PPC::FeatureCRBits }, { } },
  { "crypto", "Enable POWER8 Crypto instructions", { PPC::FeatureP8Crypto }, { PPC::FeatureP8Altivec } },
  { "direct-move", "Enable Power8 direct move instructions", { PPC::FeatureDirectMove }, { PPC::FeatureVSX } },
  { "e500", "Enable E500/E500mc instructions", { PPC::FeatureE500 }, { } },
  { "extdiv", "Enable extended divide instructions", { PPC::FeatureExtDiv }, { } },
  { "fcpsgn", "Enable the fcpsgn instruction", { PPC::FeatureFCPSGN }, { PPC::FeatureFPU } },
  { "float128", "Enable the __float128 data type for IEEE-754R Binary128.", { PPC::FeatureFloat128 }, { PPC::FeatureVSX } },
  { "fpcvt", "Enable fc[ft]* (unsigned and single-precision) and lfiwzx instructions", { PPC::FeatureFPCVT }, { PPC::FeatureFPU } },
  { "fprnd", "Enable the fri[mnpz] instructions", { PPC::FeatureFPRND }, { PPC::FeatureFPU } },
  { "fpu", "Enable classic FPU instructions", { PPC::FeatureFPU }, { PPC::FeatureHardFloat } },
  { "fre", "Enable the fre instruction", { PPC::FeatureFRE }, { PPC::FeatureFPU } },
  { "fres", "Enable the fres instruction", { PPC::FeatureFRES }, { PPC::FeatureFPU } },
  { "frsqrte", "Enable the frsqrte instruction", { PPC::FeatureFRSQRTE }, { PPC::FeatureFPU } },
  { "frsqrtes", "Enable the frsqrtes instruction", { PPC::FeatureFRSQRTES }, { PPC::FeatureFPU } },
  { "fsqrt", "Enable the fsqrt instruction", { PPC::FeatureFSqrt }, { PPC::FeatureFPU } },
  { "fusion", "Target supports add/load integer fusion.", { PPC::FeatureFusion }, { } },
  { "hard-float", "Enable floating-point instructions", { PPC::FeatureHardFloat }, { } },
  { "htm", "Enable Hardware Transactional Memory instructions", { PPC::FeatureHTM }, { } },
  { "icbt", "Enable icbt instruction", { PPC::FeatureICBT }, { } },
  { "invariant-function-descriptors", "Assume function descriptors are invariant", { PPC::FeatureInvariantFunctionDescriptors }, { } },
  { "isa-v30-instructions", "Enable instructions added in ISA 3.0.", { PPC::FeatureISA3_0 }, { } },
  { "isel", "Enable the isel instruction", { PPC::FeatureISEL }, { } },
  { "ldbrx", "Enable the ldbrx instruction", { PPC::FeatureLDBRX }, { } },
  { "lfiwax", "Enable the lfiwax instruction", { PPC::FeatureLFIWAX }, { PPC::FeatureFPU } },
  { "longcall", "Always use indirect calls", { PPC::FeatureLongCall }, { } },
  { "mfocrf", "Enable the MFOCRF instruction", { PPC::FeatureMFOCRF }, { } },
  { "msync", "Has only the msync instruction instead of sync", { PPC::FeatureMSYNC }, { PPC::FeatureBookE } },
  { "partword-atomics", "Enable l[bh]arx and st[bh]cx.", { PPC::FeaturePartwordAtomic }, { } },
  { "popcntd", "Enable the popcnt[dw] instructions", { PPC::FeaturePOPCNTD }, { } },
  { "power8-altivec", "Enable POWER8 Altivec instructions", { PPC::FeatureP8Altivec }, { PPC::FeatureAltivec } },
  { "power8-vector", "Enable POWER8 vector instructions", { PPC::FeatureP8Vector }, { PPC::FeatureVSX, PPC::FeatureP8Altivec } },
  { "power9-altivec", "Enable POWER9 Altivec instructions", { PPC::FeatureP9Altivec }, { PPC::FeatureISA3_0, PPC::FeatureP8Altivec } },
  { "power9-vector", "Enable POWER9 vector instructions", { PPC::FeatureP9Vector }, { PPC::FeatureISA3_0, PPC::FeatureP8Vector, PPC::FeatureP9Altivec } },
  { "ppc4xx", "Enable PPC 4xx instructions", { PPC::FeaturePPC4xx }, { } },
  { "ppc6xx", "Enable PPC 6xx instructions", { PPC::FeaturePPC6xx }, { } },
  { "qpx", "Enable QPX instructions", { PPC::FeatureQPX }, { PPC::FeatureFPU } },
  { "recipprec", "Assume higher precision reciprocal estimates", { PPC::FeatureRecipPrec }, { } },
  { "secure-plt", "Enable secure plt mode", { PPC::FeatureSecurePlt }, { } },
  { "slow-popcntd", "Has slow popcnt[dw] instructions", { PPC::FeatureSlowPOPCNTD }, { } },
  { "spe", "Enable SPE instructions", { PPC::FeatureSPE }, { PPC::FeatureHardFloat } },
  { "stfiwx", "Enable the stfiwx instruction", { PPC::FeatureSTFIWX }, { PPC::FeatureFPU } },
  { "vsx", "Enable VSX instructions", { PPC::FeatureVSX }, { PPC::FeatureAltivec } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[] = {
  { "440", "Select the 440 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "450", "Select the 450 processor", { PPC::Directive440, PPC::FeatureISEL, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMSYNC, PPC::FeatureMFTB }, { } },
  { "601", "Select the 601 processor", { PPC::Directive601, PPC::FeatureFPU }, { } },
  { "602", "Select the 602 processor", { PPC::Directive602, PPC::FeatureFPU, PPC::FeatureMFTB }, { } },
  { "603", "Select the 603 processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603e", "Select the 603e processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "603ev", "Select the 603ev processor", { PPC::Directive603, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604", "Select the 604 processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "604e", "Select the 604e processor", { PPC::Directive604, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "620", "Select the 620 processor", { PPC::Directive620, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7400", "Select the 7400 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "7450", "Select the 7450 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "750", "Select the 750 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "970", "Select the 970 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2", "Select the a2 processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "a2q", "Select the a2q processor", { PPC::DirectiveA2, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeatureSlowPOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureQPX, PPC::FeatureMFTB }, { } },
  { "e500", "Select the e500 processor", { PPC::DirectiveE500, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "e500mc", "Select the e500mc processor", { PPC::DirectiveE500mc, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "e5500", "Select the e5500 processor", { PPC::DirectiveE5500, PPC::FeatureMFOCRF, PPC::Feature64Bit, PPC::FeatureSTFIWX, PPC::FeatureICBT, PPC::FeatureBookE, PPC::FeatureISEL, PPC::FeatureMFTB }, { } },
  { "g3", "Select the g3 processor", { PPC::Directive750, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4", "Select the g4 processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g4+", "Select the g4+ processor", { PPC::Directive7400, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFTB }, { } },
  { "g5", "Select the g5 processor", { PPC::Directive970, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureSTFIWX, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "generic", "Select the generic processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc", "Select the ppc processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc32", "Select the ppc32 processor", { PPC::Directive32, PPC::FeatureHardFloat, PPC::FeatureMFTB }, { } },
  { "ppc64", "Select the ppc64 processor", { PPC::Directive64, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "ppc64le", "Select the ppc64le processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr3", "Select the pwr3 processor", { PPC::DirectivePwr3, PPC::FeatureAltivec, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureMFOCRF, PPC::FeatureSTFIWX, PPC::Feature64Bit }, { } },
  { "pwr4", "Select the pwr4 processor", { PPC::DirectivePwr4, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB }, { } },
  { "pwr5", "Select the pwr5 processor", { PPC::DirectivePwr5, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr5x", "Select the pwr5x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureSTFIWX, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6", "Select the pwr6 processor", { PPC::DirectivePwr6, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr6x", "Select the pwr6x processor", { PPC::DirectivePwr5x, PPC::FeatureAltivec, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureCMPB, PPC::FeatureFPRND, PPC::Feature64Bit, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr7", "Select the pwr7 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST }, { } },
  { "pwr8", "Select the pwr8 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion }, { } },
  { "pwr9", "Select the pwr9 processor", { PPC::DirectivePwr7, PPC::FeatureAltivec, PPC::FeatureVSX, PPC::FeatureMFOCRF, PPC::FeatureFCPSGN, PPC::FeatureFSqrt, PPC::FeatureFRE, PPC::FeatureFRES, PPC::FeatureFRSQRTE, PPC::FeatureFRSQRTES, PPC::FeatureRecipPrec, PPC::FeatureSTFIWX, PPC::FeatureLFIWAX, PPC::FeatureFPRND, PPC::FeatureFPCVT, PPC::FeatureISEL, PPC::FeaturePOPCNTD, PPC::FeatureCMPB, PPC::FeatureLDBRX, PPC::Feature64Bit, PPC::FeatureBPERMD, PPC::FeatureExtDiv, PPC::FeatureMFTB, PPC::DeprecatedDST, PPC::DirectivePwr8, PPC::FeatureP8Altivec, PPC::FeatureP8Vector, PPC::FeatureP8Crypto, PPC::FeatureHTM, PPC::FeatureDirectMove, PPC::FeatureICBT, PPC::FeaturePartwordAtomic, PPC::FeatureFusion, PPC::DirectivePwr9, PPC::FeatureP9Altivec, PPC::FeatureP9Vector, PPC::FeatureISA3_0 }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "PPC440Itineraries"
namespace PPC440ItinerariesFU {
  const unsigned P440_DISS1 = 1 << 0;
  const unsigned P440_DISS2 = 1 << 1;
  const unsigned P440_FRACC = 1 << 2;
  const unsigned P440_IRACC = 1 << 3;
  const unsigned P440_IEXE1 = 1 << 4;
  const unsigned P440_IEXE2 = 1 << 5;
  const unsigned P440_IWB = 1 << 6;
  const unsigned P440_LRACC = 1 << 7;
  const unsigned P440_JEXE1 = 1 << 8;
  const unsigned P440_JEXE2 = 1 << 9;
  const unsigned P440_JWB = 1 << 10;
  const unsigned P440_AGEN = 1 << 11;
  const unsigned P440_CRD = 1 << 12;
  const unsigned P440_LWB = 1 << 13;
  const unsigned P440_FEXE1 = 1 << 14;
  const unsigned P440_FEXE2 = 1 << 15;
  const unsigned P440_FEXE3 = 1 << 16;
  const unsigned P440_FEXE4 = 1 << 17;
  const unsigned P440_FEXE5 = 1 << 18;
  const unsigned P440_FEXE6 = 1 << 19;
  const unsigned P440_FWB = 1 << 20;
  const unsigned P440_LWARX_Hold = 1 << 21;
} // end namespace PPC440ItinerariesFU

// Pipeline forwarding paths for itineraries "PPC440Itineraries"
namespace PPC440ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned P440_GPR_Bypass = 1 << 0;
  const unsigned P440_FPR_Bypass = 1 << 1;
} // end namespace PPC440ItinerariesBypass

// Functional units for "G3Itineraries"
namespace G3ItinerariesFU {
  const unsigned G3_IU1 = 1 << 0;
  const unsigned G3_IU2 = 1 << 1;
  const unsigned G3_FPU1 = 1 << 2;
  const unsigned G3_BPU = 1 << 3;
  const unsigned G3_SRU = 1 << 4;
  const unsigned G3_SLU = 1 << 5;
} // end namespace G3ItinerariesFU

// Functional units for "G4Itineraries"
namespace G4ItinerariesFU {
  const unsigned G4_IU1 = 1 << 0;
  const unsigned G4_IU2 = 1 << 1;
  const unsigned G4_SLU = 1 << 2;
  const unsigned G4_SRU = 1 << 3;
  const unsigned G4_BPU = 1 << 4;
  const unsigned G4_FPU1 = 1 << 5;
  const unsigned G4_VIU1 = 1 << 6;
  const unsigned G4_VIU2 = 1 << 7;
  const unsigned G4_VPU = 1 << 8;
  const unsigned G4_VFPU = 1 << 9;
} // end namespace G4ItinerariesFU

// Functional units for "G4PlusItineraries"
namespace G4PlusItinerariesFU {
  const unsigned G4P_IU1 = 1 << 0;
  const unsigned G4P_IU2 = 1 << 1;
  const unsigned G4P_IU3 = 1 << 2;
  const unsigned G4P_IU4 = 1 << 3;
  const unsigned G4P_BPU = 1 << 4;
  const unsigned G4P_SLU = 1 << 5;
  const unsigned G4P_FPU1 = 1 << 6;
  const unsigned G4P_VFPU = 1 << 7;
  const unsigned G4P_VIU1 = 1 << 8;
  const unsigned G4P_VIU2 = 1 << 9;
  const unsigned G4P_VPU = 1 << 10;
} // end namespace G4PlusItinerariesFU

// Functional units for "G5Itineraries"
namespace G5ItinerariesFU {
  const unsigned G5_IU1 = 1 << 0;
  const unsigned G5_IU2 = 1 << 1;
  const unsigned G5_SLU = 1 << 2;
  const unsigned G5_BPU = 1 << 3;
  const unsigned G5_FPU1 = 1 << 4;
  const unsigned G5_FPU2 = 1 << 5;
  const unsigned G5_VFPU = 1 << 6;
  const unsigned G5_VIU1 = 1 << 7;
  const unsigned G5_VIU2 = 1 << 8;
  const unsigned G5_VPU = 1 << 9;
} // end namespace G5ItinerariesFU

// Functional units for "PPCA2Itineraries"
namespace PPCA2ItinerariesFU {
  const unsigned A2_XU = 1 << 0;
  const unsigned A2_FU = 1 << 1;
} // end namespace PPCA2ItinerariesFU

// Functional units for "PPCE500Itineraries"
namespace PPCE500ItinerariesFU {
  const unsigned E500_DIS0 = 1 << 0;
  const unsigned E500_DIS1 = 1 << 1;
  const unsigned E500_SU0 = 1 << 2;
  const unsigned E500_SU1 = 1 << 3;
  const unsigned E500_BU = 1 << 4;
  const unsigned E500_MU = 1 << 5;
  const unsigned E500_LSU_0 = 1 << 6;
} // end namespace PPCE500ItinerariesFU

// Pipeline forwarding paths for itineraries "PPCE500Itineraries"
namespace PPCE500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500_CR_Bypass = 1 << 0;
  const unsigned E500_GPR_Bypass = 1 << 1;
  const unsigned E500_DivBypass = 1 << 2;
} // end namespace PPCE500ItinerariesBypass

// Functional units for "PPCE500mcItineraries"
namespace PPCE500mcItinerariesFU {
  const unsigned E500mc_DIS0 = 1 << 0;
  const unsigned E500mc_DIS1 = 1 << 1;
  const unsigned E500mc_SFX0 = 1 << 2;
  const unsigned E500mc_SFX1 = 1 << 3;
  const unsigned E500mc_BU = 1 << 4;
  const unsigned E500mc_CFX_DivBypass = 1 << 5;
  const unsigned E500mc_CFX_0 = 1 << 6;
  const unsigned E500mc_LSU_0 = 1 << 7;
  const unsigned E500mc_FPU_0 = 1 << 8;
} // end namespace PPCE500mcItinerariesFU

// Pipeline forwarding paths for itineraries "PPCE500mcItineraries"
namespace PPCE500mcItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E500mc_CR_Bypass = 1 << 0;
  const unsigned E500mc_GPR_Bypass = 1 << 1;
  const unsigned E500mc_FPR_Bypass = 1 << 2;
} // end namespace PPCE500mcItinerariesBypass

// Functional units for "PPCE5500Itineraries"
namespace PPCE5500ItinerariesFU {
  const unsigned E5500_DIS0 = 1 << 0;
  const unsigned E5500_DIS1 = 1 << 1;
  const unsigned E5500_SFX0 = 1 << 2;
  const unsigned E5500_SFX1 = 1 << 3;
  const unsigned E5500_BU = 1 << 4;
  const unsigned E5500_CFX_DivBypass = 1 << 5;
  const unsigned E5500_CFX_0 = 1 << 6;
  const unsigned E5500_CFX_1 = 1 << 7;
  const unsigned E5500_LSU_0 = 1 << 8;
  const unsigned E5500_FPU_0 = 1 << 9;
} // end namespace PPCE5500ItinerariesFU

// Pipeline forwarding paths for itineraries "PPCE5500Itineraries"
namespace PPCE5500ItinerariesBypass {
  const unsigned NoBypass = 0;
  const unsigned E5500_CR_Bypass = 1 << 0;
  const unsigned E5500_GPR_Bypass = 1 << 1;
  const unsigned E5500_FPR_Bypass = 1 << 2;
} // end namespace PPCE5500ItinerariesBypass

// Functional units for "P8Itineraries"
namespace P8ItinerariesFU {
  const unsigned P8_DU1 = 1 << 0;
  const unsigned P8_DU2 = 1 << 1;
  const unsigned P8_DU3 = 1 << 2;
  const unsigned P8_DU4 = 1 << 3;
  const unsigned P8_DU5 = 1 << 4;
  const unsigned P8_DU6 = 1 << 5;
  const unsigned P8_DU7 = 1 << 6;
  const unsigned P8_DU8 = 1 << 7;
  const unsigned P8_LU1 = 1 << 8;
  const unsigned P8_LU2 = 1 << 9;
  const unsigned P8_LSU1 = 1 << 10;
  const unsigned P8_LSU2 = 1 << 11;
  const unsigned P8_FXU1 = 1 << 12;
  const unsigned P8_FXU2 = 1 << 13;
  const unsigned P8_FPU1 = 1 << 14;
  const unsigned P8_FPU2 = 1 << 15;
  const unsigned P8_CRU = 1 << 16;
  const unsigned P8_BRU = 1 << 17;
} // end namespace P8ItinerariesFU

// Functional units for "P7Itineraries"
namespace P7ItinerariesFU {
  const unsigned P7_DU1 = 1 << 0;
  const unsigned P7_DU2 = 1 << 1;
  const unsigned P7_DU3 = 1 << 2;
  const unsigned P7_DU4 = 1 << 3;
  const unsigned P7_DU5 = 1 << 4;
  const unsigned P7_DU6 = 1 << 5;
  const unsigned P7_LS1 = 1 << 6;
  const unsigned P7_LS2 = 1 << 7;
  const unsigned P7_FX1 = 1 << 8;
  const unsigned P7_FX2 = 1 << 9;
  const unsigned P7_VS1 = 1 << 10;
  const unsigned P7_VS2 = 1 << 11;
  const unsigned P7_CRU = 1 << 12;
  const unsigned P7_BRU = 1 << 13;
} // end namespace P7ItinerariesFU

extern const llvm::InstrStage PPCStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_AGEN, 1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_CRD, 1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1-5
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC | PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1 | PPC440ItinerariesFU::P440_JEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2 | PPC440ItinerariesFU::P440_JEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB | PPC440ItinerariesFU::P440_JWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6-10
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-15
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 16-20
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 21-25
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 33, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 26-30
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31-39
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 25, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-48
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE3, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE4, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE5, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE6, -1, (llvm::InstrStage::ReservationKinds)0 },   { 13, PPC440ItinerariesFU::P440_FWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 49-57
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_FEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_JEXE2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_FEXE3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_LWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_JWB, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-73
  { 1, PPC440ItinerariesFU::P440_DISS1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPC440ItinerariesFU::P440_LWARX_Hold, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_AGEN, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_CRD, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_LWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74-80
  { 1, PPC440ItinerariesFU::P440_DISS1 | PPC440ItinerariesFU::P440_DISS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IRACC, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE1, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPC440ItinerariesFU::P440_IEXE2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPC440ItinerariesFU::P440_IWB, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81-85
  { 3, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 86
  { 1, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, G3ItinerariesFU::G3_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 2, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 19, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 31, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 17, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94
  { 2, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 95
  { 2, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96
  { 34, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 97
  { 3, G3ItinerariesFU::G3_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98
  { 3, G3ItinerariesFU::G3_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 99
  { 5, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 100
  { 6, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101
  { 3, G3ItinerariesFU::G3_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 102
  { 8, G3ItinerariesFU::G3_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 103
  { 2, G3ItinerariesFU::G3_IU1 | G3ItinerariesFU::G3_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 104
  { 8, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105
  { 1, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 106
  { 1, G4ItinerariesFU::G4_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107
  { 4, G4ItinerariesFU::G4_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 108
  { 1, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 109
  { 2, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110
  { 19, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 111
  { 1, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 112
  { 31, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 113
  { 1, G4ItinerariesFU::G4_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114
  { 3, G4ItinerariesFU::G4_VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 115
  { 17, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116
  { 2, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 117
  { 3, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118
  { 34, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 119
  { 3, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 120
  { 3, G4ItinerariesFU::G4_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 121
  { 5, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 6, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123
  { 3, G4ItinerariesFU::G4_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 124
  { 1, G4ItinerariesFU::G4_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125
  { 5, G4ItinerariesFU::G4_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 126
  { 8, G4ItinerariesFU::G4_SRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127
  { 2, G4ItinerariesFU::G4_IU1 | G4ItinerariesFU::G4_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 128
  { 35, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129
  { 1, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 130
  { 1, G4PlusItinerariesFU::G4P_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131
  { 4, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 132
  { 2, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133
  { 3, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 134
  { 23, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135
  { 5, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 136
  { 35, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137
  { 1, G4PlusItinerariesFU::G4P_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 138
  { 4, G4PlusItinerariesFU::G4P_VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 139
  { 21, G4PlusItinerariesFU::G4P_FPU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140
  { 3, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 141
  { 0, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 142
  { 4, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143
  { 37, G4PlusItinerariesFU::G4P_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 144
  { 4, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145
  { 5, G4PlusItinerariesFU::G4P_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 146
  { 2, G4PlusItinerariesFU::G4P_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147
  { 2, G4PlusItinerariesFU::G4P_IU1 | G4PlusItinerariesFU::G4P_IU2 | G4PlusItinerariesFU::G4P_IU3 | G4PlusItinerariesFU::G4P_IU4, -1, (llvm::InstrStage::ReservationKinds)0 }, // 148
  { 2, G4PlusItinerariesFU::G4P_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 149
  { 35, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150
  { 2, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 151
  { 1, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152
  { 8, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 153
  { 3, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 154
  { 4, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155
  { 3, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 156
  { 68, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 36, G5ItinerariesFU::G5_IU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 6, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 33, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 8, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 2, G5ItinerariesFU::G5_VIU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 5, G5ItinerariesFU::G5_VIU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163
  { 40, G5ItinerariesFU::G5_FPU1 | G5ItinerariesFU::G5_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 164
  { 40, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165
  { 11, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 166
  { 5, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167
  { 64, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 168
  { 7, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 169
  { 2, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170
  { 3, G5ItinerariesFU::G5_BPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 171
  { 2, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 172
  { 3, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 173
  { 6, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174
  { 10, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 175
  { 8, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176
  { 5, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 177
  { 4, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 178
  { 3, G5ItinerariesFU::G5_VPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179
  { 4, G5ItinerariesFU::G5_SLU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 180
  { 1, G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 181
  { 1, G5ItinerariesFU::G5_IU1 | G5ItinerariesFU::G5_IU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 182
  { 2, G5ItinerariesFU::G5_VFPU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183
  { 1, PPCA2ItinerariesFU::A2_XU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 184
  { 1, PPCA2ItinerariesFU::A2_FU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 186-187
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_SU0 | PPCE500ItinerariesFU::E500_SU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 188-189
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 190-191
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_MU, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500ItinerariesFU::E500_MU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-194
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 6, PPCE500ItinerariesFU::E500_MU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 195-196
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 32, PPCE500ItinerariesFU::E500_MU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 197-198
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500ItinerariesFU::E500_MU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 199-200
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_SU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 201-202
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 29, PPCE500ItinerariesFU::E500_MU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 203-204
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500ItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 205-206
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_SU0 | PPCE500ItinerariesFU::E500_SU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 207-209
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500ItinerariesFU::E500_SU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 210-211
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500ItinerariesFU::E500_SU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500ItinerariesFU::E500_SU0 | PPCE500ItinerariesFU::E500_SU1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500ItinerariesFU::E500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 216-217
  { 1, PPCE500ItinerariesFU::E500_DIS0 | PPCE500ItinerariesFU::E500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500ItinerariesFU::E500_SU0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 218-219
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 220-221
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_SFX0 | PPCE500mcItinerariesFU::E500mc_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 222-223
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 14, PPCE500mcItinerariesFU::E500mc_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226-228
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500mc_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229-230
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, PPCE500mcItinerariesFU::E500mc_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231-232
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500mc_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 233-234
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 38, PPCE500mcItinerariesFU::E500mc_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 235-236
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE500mcItinerariesFU::E500mc_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 237-238
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_SFX0 | PPCE500mcItinerariesFU::E500mc_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-241
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE500mcItinerariesFU::E500mc_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 242-243
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 8, PPCE500mcItinerariesFU::E500mc_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 244-245
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE500mcItinerariesFU::E500mc_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 246-247
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500mc_SFX0 | PPCE500mcItinerariesFU::E500mc_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-249
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 250-251
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-253
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE500mcItinerariesFU::E500mc_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 254-255
  { 1, PPCE500mcItinerariesFU::E500mc_DIS0 | PPCE500mcItinerariesFU::E500mc_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE500mcItinerariesFU::E500mc_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-257
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 258-259
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 260-261
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_BU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 262-263
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 26, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 264-266
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_CFX_DivBypass, -1, (llvm::InstrStage::ReservationKinds)0 }, // 267-269
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 270-271
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 31, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 272-273
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 16, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 274-275
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 3, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 276-277
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_LSU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-285
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 286-287
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 5, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 4, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-291
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 7, PPCE5500ItinerariesFU::E5500_FPU_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 292-293
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_CFX_0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 294-295
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_CFX_1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 296-298
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0 | PPCE5500ItinerariesFU::E5500_SFX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 299-300
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, PPCE5500ItinerariesFU::E5500_LSU_0, 0, (llvm::InstrStage::ReservationKinds)0 }, // 301-302
  { 1, PPCE5500ItinerariesFU::E5500_DIS0 | PPCE5500ItinerariesFU::E5500_DIS1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 2, PPCE5500ItinerariesFU::E5500_SFX0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 303-304
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 305-306
  { 1, P8ItinerariesFU::P8_DU7 | P8ItinerariesFU::P8_DU8, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 307-308
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 309-310
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 311-312
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 313-314
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 315-316
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 23, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 317-318
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 15, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 319-320
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 321-322
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 323-325
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 326-328
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 329-333
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 334-337
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 338-344
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 345-346
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 347-350
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 351-354
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 355-359
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 360-368
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2 | P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 369-372
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 373-374
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 375-376
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 377-378
  { 1, P8ItinerariesFU::P8_DU1 | P8ItinerariesFU::P8_DU2 | P8ItinerariesFU::P8_DU3 | P8ItinerariesFU::P8_DU4 | P8ItinerariesFU::P8_DU5 | P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 379-381
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FPU1 | P8ItinerariesFU::P8_FPU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 382-386
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 387-394
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 395-398
  { 1, P8ItinerariesFU::P8_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU5, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_FXU1 | P8ItinerariesFU::P8_FXU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 399-407
  { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P8ItinerariesFU::P8_LU1 | P8ItinerariesFU::P8_LU2 | P8ItinerariesFU::P8_LSU1 | P8ItinerariesFU::P8_LSU2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 408-410
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2 | P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 411-412
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 413-414
  { 1, P7ItinerariesFU::P7_DU5 | P7ItinerariesFU::P7_DU6, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 415-416
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 417-418
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 419-420
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 421-422
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 68, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 423-425
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 36, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 426-428
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 429-430
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 431-432
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 433-435
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_BRU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 436-438
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 439-443
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 444-447
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 448-454
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 455-458
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 459-463
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 464-471
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_CRU, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 472-477
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 478-479
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 480-481
  { 1, P7ItinerariesFU::P7_DU1 | P7ItinerariesFU::P7_DU2 | P7ItinerariesFU::P7_DU3 | P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 482-484
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_VS1 | P7ItinerariesFU::P7_VS2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 485-489
  { 1, P7ItinerariesFU::P7_DU1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_DU4, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_LS1 | P7ItinerariesFU::P7_LS2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 },   { 1, P7ItinerariesFU::P7_FX1 | P7ItinerariesFU::P7_FX2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 490-496
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned PPCOperandCycles[] = {
  0, // No itinerary
  2,   0,   0, // 1-3
  2,   0,   0, // 4-6
  4,   0, // 7-8
  2,   0,   0, // 9-11
  4,   0,   0, // 12-14
  1,   1, // 15-16
  5,   1,   1, // 17-19
  36,   0,   0, // 20-22
  6,   0,   0, // 23-25
  31,   0,   0, // 26-28
  6,   0,   0, // 29-31
  6,   0,   0, // 32-34
  1,   1,   1, // 35-37
  19,   0,   0, // 38-40
  6,   0,   0,   0, // 41-44
  4,   1,   1, // 45-47
  2,   0,   0,   0, // 48-51
  4,   1,   1, // 52-54
  5,   2,   1,   1, // 55-58
  5,   2,   1,   1, // 59-62
  5,   1,   1, // 63-65
  5,   2,   1,   1, // 66-69
  5,   2,   1,   1, // 70-73
  4,   1,   1, // 74-76
  4,   1,   1, // 77-79
  4,   1,   1, // 80-82
  4,   1,   1, // 83-85
  4,   0,   0, // 86-88
  4,   0,   0, // 89-91
  4,   0, // 92-93
  6,   0, // 94-95
  3,   0,   0, // 96-98
  3,   0, // 99-100
  2,   0, // 101-102
  6,   0, // 103-104
  6,   0, // 105-106
  3,   0,   0, // 107-109
  2,   0, // 110-111
  5,   0, // 112-113
  4,   0,   0, // 114-116
  4,   0,   0, // 117-119
  4,   0,   0, // 120-122
  1,   1,   1, // 123-125
  2,   1,   1,   1, // 126-129
  4,   0, // 130-131
  2,   0,   0, // 132-134
  2,   0,   0, // 135-137
  4,   1,   1, // 138-140
  2,   1,   1,   1, // 141-144
  2,   1,   1,   1, // 145-148
  4,   1,   1, // 149-151
  4,   1,   1, // 152-154
  2,   0, // 155-156
  6,   0, // 157-158
  3,   0,   0, // 159-161
  3,   0,   0, // 162-164
  2,   0,   0, // 165-167
  2,   0, // 168-169
  6,   0,   0, // 170-172
  6,   0,   0, // 173-175
  2,   0,   0, // 176-178
  2,   0,   0, // 179-181
  2,   0,   0, // 182-184
  2,   0,   0, // 185-187
  4,   0,   0, // 188-190
  4,   0,   0, // 191-193
  4,   0, // 194-195
  6,   0, // 196-197
  5,   1,   1, // 198-200
  2,   0,   0, // 201-203
  4,   0,   0, // 204-206
  4,   0,   0, // 207-209
  2,   0,   0, // 210-212
  6,   0,   0, // 213-215
  2,   0,   0, // 216-218
  2,   0,   0,   0, // 219-222
  6,   0, // 223-224
  1,   1,   1, // 225-227
  5,   1,   1, // 228-230
  6,   0,   0, // 231-233
  4,   0,   0, // 234-236
  4,   0,   0, // 237-239
  4,   0,   0, // 240-242
  6,   0,   0, // 243-245
  6,   0,   0, // 246-248
  6,   0,   0,   0, // 249-252
  6,   0,   0, // 253-255
  4,   0,   0, // 256-258
  4,   0,   0, // 259-261
  6,   0,   0, // 262-264
  6,   0,   0, // 265-267
  6,   0,   0,   0, // 268-271
  5,   1,   1, // 272-274
  6,   0,   0, // 275-277
  5,   1,   1, // 278-280
  5,   1,   1, // 281-283
  5,   1,   1, // 284-286
  1,   1, // 287-288
  4,   1,   1, // 289-291
  5,   1,   1, // 292-294
  4,   1,   1, // 295-297
  4,   1,   1, // 298-300
  5,   1,   1, // 301-303
  5,   2,   1,   1, // 304-307
  5,   2,   1,   1, // 308-311
  6,   0, // 312-313
  4,   1,   1, // 314-316
  4,   1,   1, // 317-319
  4,   1,   1, // 320-322
  6,   0, // 323-324
  5,   1,   1, // 325-327
  5,   1,   1, // 328-330
  5,   1,   1, // 331-333
  5,   1,   1, // 334-336
  4,   1,   1, // 337-339
  4,   1,   1, // 340-342
  5,   1,   1, // 343-345
  1,   1,   1, // 346-348
  1,   1,   1, // 349-351
  4,   1,   1, // 352-354
  5,   1,   1, // 355-357
  4,   1,   1, // 358-360
  1,   1,   1, // 361-363
  1,   1,   1, // 364-366
  5,   1,   1, // 367-369
  6,   0, // 370-371
  2,   0,   0, // 372-374
  6,   0, // 375-376
  6,   0, // 377-378
  3,   0, // 379-380
  2,   0, // 381-382
  6,   0, // 383-384
  36,   0,   0, // 385-387
  36,   0,   0, // 388-390
  36,   0,   0, // 391-393
  36,   0,   0, // 394-396
  4,   0,   0, // 397-399
  2,   0,   0, // 400-402
  6,   0,   0, // 403-405
  4,   0,   0, // 406-408
  3,   0,   0, // 409-411
  3,   0,   0, // 412-414
  2,   0,   0, // 415-417
  2,   0,   0, // 418-420
  2,   0,   0, // 421-423
  3,   0,   0, // 424-426
  4,   0, // 427-428
  31,   0,   0, // 429-431
  31,   0,   0, // 432-434
  31,   0,   0, // 435-437
  19,   0,   0, // 438-440
  19,   0,   0, // 441-443
  19,   0,   0, // 444-446
  19,   0,   0, // 447-449
  31,   0,   0, // 450-452
  5,   2,   1,   1, // 453-456
  5,   2,   1,   1, // 457-460
  2,   1,   1,   1, // 461-464
  2,   1,   1,   1, // 465-468
  2,   1,   1,   1, // 469-472
  5,   2,   1,   1, // 473-476
  5,   2,   1,   1, // 477-480
  5,   2,   1,   1, // 481-484
  5,   2,   1,   1, // 485-488
  4,   0, // 489-490
  4,   0, // 491-492
  5,   1,   1, // 493-495
  1,   1,   1, // 496-498
  2,   0,   0, // 499-501
  5,   1,   1, // 502-504
  1,   1,   1, // 505-507
  4,   0, // 508-509
  4,   0, // 510-511
  5,   1,   1, // 512-514
  1,   1,   1, // 515-517
  5,   1,   1, // 518-520
  1,   1,   1, // 521-523
  2,   0, // 524-525
  5,   0, // 526-527
  6,   0, // 528-529
  6,   0, // 530-531
  2,   0,   0, // 532-534
  2,   0, // 535-536
  1,   1, // 537-538
  6, // 539
  1,   0,   0, // 540-542
  2,   0,   0, // 543-545
  6,   0,   0, // 546-548
  2,   0,   0, // 549-551
  1,   0,   0, // 552-554
  1,   0,   0, // 555-557
  6,   0,   0, // 558-560
  71,   0,   0, // 561-563
  39,   0,   0, // 564-566
  6,   0,   0, // 567-569
  72,   0,   0, // 570-572
  5,   0,   0, // 573-575
  6,   0,   0, // 576-578
  0,   0,   0, // 579-581
  2,   0,   0, // 582-584
  59,   0,   0, // 585-587
  6,   0,   0,   0, // 588-591
  69,   0,   0, // 592-594
  65,   0,   0, // 595-597
  16,   0,   0, // 598-600
  2,   0,   0,   0, // 601-604
  16, // 605
  82,   0,   0, // 606-608
  6,   8,   0,   0, // 609-612
  6,   8,   0,   0, // 613-616
  6,   0,   0, // 617-619
  6,   0,   0, // 620-622
  7,   0,   0, // 623-625
  7,   9,   0,   0, // 626-629
  7,   9,   0,   0, // 630-633
  6,   0,   0, // 634-636
  6,   8,   0,   0, // 637-640
  6,   8,   0,   0, // 641-644
  5,   0,   0, // 645-647
  1,   0,   0, // 648-650
  6,   0, // 651-652
  6,   0, // 653-654
  4,   0, // 655-656
  1,   0, // 657-658
  4,   0, // 659-660
  6,   0, // 661-662
  16,   0, // 663-664
  5,   0,   0, // 665-667
  5,   0,   0, // 668-670
  6,   0,   0, // 671-673
  0,   0,   0, // 674-676
  2,   0,   0,   0, // 677-680
  16, // 681
  2,   0,   0, // 682-684
  2,   0,   0, // 685-687
  2,   0,   0, // 688-690
  82,   0,   0, // 691-693
  2,   0,   0,   0, // 694-697
  2,   0,   0,   0, // 698-701
  0,   0,   0, // 702-704
  82,   0,   0, // 705-707
  2,   0, // 708-709
  2,   0, // 710-711
  6,   0, // 712-713
  2,   0,   0, // 714-716
  2,   0, // 717-718
  2,   0, // 719-720
  5,   0,   0, // 721-723
  5,   0,   0, // 724-726
  2,   0,   0, // 727-729
  2,   0,   0, // 730-732
  2,   0,   0, // 733-735
  2,   0,   0, // 736-738
  2,   0,   0, // 739-741
  1,   0,   0, // 742-744
  5,   0,   0, // 745-747
  1,   0,   0, // 748-750
  6,   0,   0, // 751-753
  6,   0, // 754-755
  6,   0,   0, // 756-758
  2,   0,   0, // 759-761
  2,   0,   0, // 762-764
  2,   0,   0, // 765-767
  1,   0, // 768-769
  1,   0,   0, // 770-772
  1,   0,   0, // 773-775
  2,   0,   0, // 776-778
  6,   0,   0, // 779-781
  2,   0,   0, // 782-784
  2,   0,   0,   0, // 785-788
  6,   0, // 789-790
  0,   0,   0, // 791-793
  6,   0,   0, // 794-796
  5,   0,   0, // 797-799
  5,   0,   0, // 800-802
  5,   0,   0, // 803-805
  6,   0,   0, // 806-808
  6,   0,   0, // 809-811
  6,   0,   0, // 812-814
  6,   0,   0,   0, // 815-818
  6,   0,   0, // 819-821
  5,   0,   0, // 822-824
  5,   0,   0, // 825-827
  6,   0,   0, // 828-830
  6,   0,   0, // 831-833
  6,   0,   0,   0, // 834-837
  6,   0,   0, // 838-840
  5,   0,   0, // 841-843
  6,   0,   0, // 844-846
  6,   0,   0, // 847-849
  7,   0,   0, // 850-852
  1,   0,   0, // 853-855
  16,   0,   0, // 856-858
  6,   0,   0, // 859-861
  82,   0,   0, // 862-864
  16, // 865
  6, // 866
  7,   0,   0, // 867-869
  6,   8,   0,   0, // 870-873
  6,   8,   0,   0, // 874-877
  6,   0, // 878-879
  82,   0,   0, // 880-882
  82,   0,   0, // 883-885
  6,   0,   0, // 886-888
  6,   0, // 889-890
  7,   0,   0, // 891-893
  7,   0,   0, // 894-896
  7,   0,   0, // 897-899
  7,   0,   0, // 900-902
  6,   8,   0,   0, // 903-906
  6,   8,   0,   0, // 907-910
  7,   0,   0, // 911-913
  0,   0,   0, // 914-916
  0,   0,   0, // 917-919
  0,   0,   0, // 920-922
  6,   0,   0, // 923-925
  0,   0,   0, // 926-928
  0,   0,   0, // 929-931
  6,   0,   0, // 932-934
  6,   0, // 935-936
  2,   0,   0, // 937-939
  4,   0, // 940-941
  6,   0, // 942-943
  4,   0, // 944-945
  16,   0, // 946-947
  6,   0, // 948-949
  39,   0,   0, // 950-952
  39,   0,   0, // 953-955
  71,   0,   0, // 956-958
  71,   0,   0, // 959-961
  39,   0,   0, // 962-964
  71,   0,   0, // 965-967
  39,   0,   0, // 968-970
  71,   0,   0, // 971-973
  1,   0,   0, // 974-976
  2,   0,   0, // 977-979
  6,   0,   0, // 980-982
  5,   0,   0, // 983-985
  2,   0,   0, // 986-988
  2,   0,   0, // 989-991
  2,   0,   0, // 992-994
  2,   0,   0, // 995-997
  2,   0,   0, // 998-1000
  6,   0, // 1001-1002
  2,   0,   0, // 1003-1005
  2,   0,   0, // 1006-1008
  72,   0,   0, // 1009-1011
  72,   0,   0, // 1012-1014
  69,   0,   0, // 1015-1017
  69,   0,   0, // 1018-1020
  69,   0,   0, // 1021-1023
  65,   0,   0, // 1024-1026
  69,   0,   0, // 1027-1029
  65,   0,   0, // 1030-1032
  65,   0,   0, // 1033-1035
  65,   0,   0, // 1036-1038
  72,   0,   0, // 1039-1041
  59,   0,   0, // 1042-1044
  59,   0,   0, // 1045-1047
  59,   0,   0, // 1048-1050
  59,   0,   0, // 1051-1053
  72,   0,   0, // 1054-1056
  7,   9,   0,   0, // 1057-1060
  7,   9,   0,   0, // 1061-1064
  2,   0,   0,   0, // 1065-1068
  2,   0,   0,   0, // 1069-1072
  2,   0,   0,   0, // 1073-1076
  6,   8,   0,   0, // 1077-1080
  6,   8,   0,   0, // 1081-1084
  6,   0,   0, // 1085-1087
  6,   0,   0, // 1088-1090
  7,   9,   0,   0, // 1091-1094
  7,   9,   0,   0, // 1095-1098
  6,   0,   0, // 1099-1101
  6,   0,   0, // 1102-1104
  6,   0,   0, // 1105-1107
  0,   0,   0, // 1108-1110
  1,   0,   0, // 1111-1113
  6,   0,   0, // 1114-1116
  0,   0,   0, // 1117-1119
  6,   0,   0, // 1120-1122
  16, // 1123
  6,   0,   0, // 1124-1126
  0,   0,   0, // 1127-1129
  7,   0,   0, // 1130-1132
  0,   0,   0, // 1133-1135
  6,   0, // 1136-1137
  6,   0, // 1138-1139
  1,   0,   0, // 1140-1142
  16,   0, // 1143-1144
  6, // 1145
  1,   0,   0, // 1146-1148
  4,   1,   1, // 1149-1151
  4,   1,   1, // 1152-1154
  4,   1, // 1155-1156
  5,   1,   1, // 1157-1159
  4,   1,   1, // 1160-1162
  6,   1, // 1163-1164
  6,   1, // 1165-1166
  17,   1,   1, // 1167-1169
  9,   1,   1, // 1170-1172
  35,   1,   1, // 1173-1175
  7,   1,   1, // 1176-1178
  4,   1,   1, // 1179-1181
  7,   1,   1, // 1182-1184
  6,   1, // 1185-1186
  32,   1,   1, // 1187-1189
  6,   1, // 1190-1191
  4,   1,   1,   1, // 1192-1195
  6,   1,   1, // 1196-1198
  6,   1, // 1199-1200
  6,   1, // 1201-1202
  6,   1, // 1203-1204
  6,   1, // 1205-1206
  6,   1, // 1207-1208
  7,   1, // 1209-1210
  4,   1, // 1211-1212
  4,   1,   1, // 1213-1215
  8,   1, // 1216-1217
  4,   1, // 1218-1219
  7,   1, // 1220-1221
  8,   1, // 1222-1223
  7,   1, // 1224-1225
  7,   1, // 1226-1227
  7,   1, // 1228-1229
  4,   1, // 1230-1231
  5,   1, // 1232-1233
  4,   1, // 1234-1235
  5,   1, // 1236-1237
  7,   1,   1, // 1238-1240
  7,   1,   1, // 1241-1243
  7,   1,   1, // 1244-1246
  4,   1,   1, // 1247-1249
  4,   1,   1, // 1250-1252
  6,   1, // 1253-1254
  6,   1, // 1255-1256
  6,   1, // 1257-1258
  5,   1, // 1259-1260
  4,   1,   1, // 1261-1263
  4,   1, // 1264-1265
  5,   1,   1, // 1266-1268
  5,   1, // 1269-1270
  4,   1,   1, // 1271-1273
  4,   1,   1, // 1274-1276
  5,   1,   1, // 1277-1279
  4,   1,   1, // 1280-1282
  4,   1,   1, // 1283-1285
  4,   1, // 1286-1287
  4,   1,   1, // 1288-1290
  4,   1, // 1291-1292
  4,   1, // 1293-1294
  6,   1, // 1295-1296
  4,   1,   1, // 1297-1299
  8,   1, // 1300-1301
  4,   1,   1, // 1302-1304
  4,   1,   1, // 1305-1307
  4,   1,   1, // 1308-1310
  4,   1,   1, // 1311-1313
  4,   1,   1,   1, // 1314-1317
  4,   1, // 1318-1319
  6,   1, // 1320-1321
  6,   1, // 1322-1323
  4,   1,   1, // 1324-1326
  4,   1,   1, // 1327-1329
  7,   1,   1, // 1330-1332
  7,   1,   1, // 1333-1335
  7,   1,   1, // 1336-1338
  7,   1,   1, // 1339-1341
  7,   1,   1, // 1342-1344
  6,   1, // 1345-1346
  4,   1,   1, // 1347-1349
  6,   1, // 1350-1351
  6,   1, // 1352-1353
  6,   1, // 1354-1355
  6,   1, // 1356-1357
  6,   1, // 1358-1359
  6,   1,   1, // 1360-1362
  7,   1, // 1363-1364
  6,   1, // 1365-1366
  6,   1, // 1367-1368
  4,   1, // 1369-1370
  6,   1, // 1371-1372
  6,   1, // 1373-1374
  4,   1, // 1375-1376
  6,   1, // 1377-1378
  6,   1, // 1379-1380
  6,   1, // 1381-1382
  6,   1, // 1383-1384
  7,   1, // 1385-1386
  6,   1, // 1387-1388
  6,   1, // 1389-1390
  4,   1, // 1391-1392
  4,   1,   1, // 1393-1395
  7,   1, // 1396-1397
  4,   1, // 1398-1399
  7,   1, // 1400-1401
  4,   1, // 1402-1403
  7,   1, // 1404-1405
  5,   1, // 1406-1407
  4,   1, // 1408-1409
  17,   1,   1, // 1410-1412
  17,   1,   1, // 1413-1415
  17,   1,   1, // 1416-1418
  17,   1,   1, // 1419-1421
  4,   1,   1, // 1422-1424
  4,   1,   1, // 1425-1427
  4,   1, // 1428-1429
  4,   1,   1, // 1430-1432
  4,   1,   1, // 1433-1435
  4,   1,   1, // 1436-1438
  8,   1, // 1439-1440
  35,   1,   1, // 1441-1443
  35,   1,   1, // 1444-1446
  35,   1,   1, // 1447-1449
  32,   1,   1, // 1450-1452
  32,   1,   1, // 1453-1455
  32,   1,   1, // 1456-1458
  32,   1,   1, // 1459-1461
  35,   1,   1, // 1462-1464
  6,   1, // 1465-1466
  6,   1, // 1467-1468
  6,   1, // 1469-1470
  6,   1, // 1471-1472
  4,   1, // 1473-1474
  4,   1, // 1475-1476
  6,   1, // 1477-1478
  6,   1, // 1479-1480
  4,   1,   1, // 1481-1483
  4,   1,   1, // 1484-1486
  7,   1,   1, // 1487-1489
  6,   1, // 1490-1491
  6,   1, // 1492-1493
  4,   1, // 1494-1495
  6,   1, // 1496-1497
  6,   1, // 1498-1499
  7,   1, // 1500-1501
  5,   1, // 1502-1503
  4,   1, // 1504-1505
  4,   1, // 1506-1507
  4,   1,   1, // 1508-1510
  5,   1, // 1511-1512
  6,   1, // 1513-1514
  4,   1,   1, // 1515-1517
  4,   1,   1, // 1518-1520
  4,   1, // 1521-1522
  5,   1,   1, // 1523-1525
  4,   1,   1, // 1526-1528
  6,   1, // 1529-1530
  6,   1, // 1531-1532
  17,   1,   1, // 1533-1535
  13,   1,   1, // 1536-1538
  71,   1,   1, // 1539-1541
  11,   1,   1, // 1542-1544
  11,   1,   1, // 1545-1547
  6,   1, // 1548-1549
  41,   1,   1, // 1550-1552
  13,   1,   1,   1, // 1553-1556
  6,   1, // 1557-1558
  4,   1,   1,   1, // 1559-1562
  6,   1,   1, // 1563-1565
  6,   1, // 1566-1567
  6,   1, // 1568-1569
  7,   1,   1, // 1570-1572
  7,   1,   1, // 1573-1575
  7,   1,   1, // 1576-1578
  6,   1, // 1579-1580
  6,   1, // 1581-1582
  6,   1, // 1583-1584
  7,   1, // 1585-1586
  4,   1, // 1587-1588
  4,   1,   1, // 1589-1591
  8,   1, // 1592-1593
  4,   1, // 1594-1595
  11, // 1596
  7,   1, // 1597-1598
  8,   1, // 1599-1600
  7,   1, // 1601-1602
  7,   1, // 1603-1604
  7,   1, // 1605-1606
  4,   1, // 1607-1608
  11,   1,   1, // 1609-1611
  5,   1, // 1612-1613
  4,   1, // 1614-1615
  5,   1, // 1616-1617
  7,   1,   1, // 1618-1620
  7,   1,   1, // 1621-1623
  7,   1,   1, // 1624-1626
  6,   1,   1, // 1627-1629
  6,   1,   1, // 1630-1632
  4,   1,   1, // 1633-1635
  4,   1,   1, // 1636-1638
  6,   1, // 1639-1640
  6,   1, // 1641-1642
  6,   1, // 1643-1644
  5,   1, // 1645-1646
  4,   1, // 1647-1648
  11,   1,   1, // 1649-1651
  11, // 1652
  5,   1,   1, // 1653-1655
  5,   1, // 1656-1657
  11,   1,   1, // 1658-1660
  11,   1,   1, // 1661-1663
  4,   1,   1, // 1664-1666
  5,   1,   1, // 1667-1669
  4,   1,   1, // 1670-1672
  4,   1,   1, // 1673-1675
  4,   1, // 1676-1677
  4,   1,   1, // 1678-1680
  4,   1, // 1681-1682
  4,   1, // 1683-1684
  6,   1, // 1685-1686
  4,   1,   1, // 1687-1689
  8,   1, // 1690-1691
  4,   1,   1, // 1692-1694
  4,   1,   1, // 1695-1697
  4,   1,   1, // 1698-1700
  11,   1,   1, // 1701-1703
  4,   1,   1, // 1704-1706
  4,   1,   1,   1, // 1707-1710
  4,   1, // 1711-1712
  6,   1, // 1713-1714
  6,   1, // 1715-1716
  11,   1,   1, // 1717-1719
  7,   1,   1, // 1720-1722
  7,   1,   1, // 1723-1725
  7,   1,   1, // 1726-1728
  11,   1,   1, // 1729-1731
  13,   1,   1, // 1732-1734
  13,   1,   1,   1, // 1735-1738
  11,   1,   1, // 1739-1741
  7,   1,   1, // 1742-1744
  7,   1,   1, // 1745-1747
  11,   1,   1, // 1748-1750
  13,   1,   1, // 1751-1753
  13,   1,   1,   1, // 1754-1757
  6,   1, // 1758-1759
  11,   1,   1, // 1760-1762
  6,   1, // 1763-1764
  6,   1, // 1765-1766
  7,   1,   1, // 1767-1769
  6,   1, // 1770-1771
  6,   1, // 1772-1773
  6,   1, // 1774-1775
  6,   1,   1, // 1776-1778
  7,   1, // 1779-1780
  7,   1,   1, // 1781-1783
  6,   1, // 1784-1785
  6,   1, // 1786-1787
  4,   1, // 1788-1789
  6,   1, // 1790-1791
  6,   1, // 1792-1793
  4,   1, // 1794-1795
  7,   1,   1, // 1796-1798
  7,   1,   1, // 1799-1801
  7,   1,   1, // 1802-1804
  7,   1,   1, // 1805-1807
  6,   1, // 1808-1809
  6,   1, // 1810-1811
  7,   1,   1, // 1812-1814
  6,   1,   1, // 1815-1817
  6,   1, // 1818-1819
  6,   1, // 1820-1821
  7,   1, // 1822-1823
  6,   1, // 1824-1825
  6,   1,   1, // 1826-1828
  6,   1, // 1829-1830
  4,   1, // 1831-1832
  4,   1,   1, // 1833-1835
  7,   1, // 1836-1837
  4,   1, // 1838-1839
  7,   1, // 1840-1841
  4,   1, // 1842-1843
  7,   1, // 1844-1845
  5,   1, // 1846-1847
  4,   1, // 1848-1849
  17,   1,   1, // 1850-1852
  17,   1,   1, // 1853-1855
  17,   1,   1, // 1856-1858
  17,   1,   1, // 1859-1861
  4,   1,   1, // 1862-1864
  4,   1,   1, // 1865-1867
  11,   1,   1, // 1868-1870
  4,   1, // 1871-1872
  11, // 1873
  11,   1,   1, // 1874-1876
  4,   1,   1, // 1877-1879
  4,   1,   1, // 1880-1882
  4,   1,   1, // 1883-1885
  11, // 1886
  8,   1, // 1887-1888
  71,   1,   1, // 1889-1891
  71,   1,   1, // 1892-1894
  71,   1,   1, // 1895-1897
  41,   1,   1, // 1898-1900
  41,   1,   1, // 1901-1903
  41,   1,   1, // 1904-1906
  41,   1,   1, // 1907-1909
  71,   1,   1, // 1910-1912
  7,   1,   1, // 1913-1915
  7,   1,   1, // 1916-1918
  6,   1,   1, // 1919-1921
  6,   1, // 1922-1923
  6,   1, // 1924-1925
  6,   1, // 1926-1927
  6,   1, // 1928-1929
  7,   1,   1, // 1930-1932
  7,   1,   1, // 1933-1935
  4,   1, // 1936-1937
  4,   1, // 1938-1939
  6,   1, // 1940-1941
  6,   1, // 1942-1943
  4,   1,   1, // 1944-1946
  6,   1, // 1947-1948
  6,   1, // 1949-1950
  4,   1, // 1951-1952
  6,   1, // 1953-1954
  6,   1, // 1955-1956
  7,   1,   1, // 1957-1959
  6,   1,   1, // 1960-1962
  7,   1, // 1963-1964
  5,   1, // 1965-1966
  4,   1, // 1967-1968
  4,   1, // 1969-1970
  4,   1,   1, // 1971-1973
  5,   1, // 1974-1975
  6,   1, // 1976-1977
  5,   2,   2, // 1978-1980
  5,   2,   2, // 1981-1983
  5,   2, // 1984-1985
  6,   2,   2, // 1986-1988
  5,   2,   2, // 1989-1991
  7,   2, // 1992-1993
  7,   2, // 1994-1995
  7,   2, // 1996-1997
  30,   2,   2, // 1998-2000
  20,   2,   2, // 2001-2003
  11,   2,   2, // 2004-2006
  39,   2,   2, // 2007-2009
  11,   2,   2, // 2010-2012
  11,   2,   2, // 2013-2015
  7,   2, // 2016-2017
  5,   2,   2, // 2018-2020
  24,   2,   2, // 2021-2023
  11,   2,   2,   2, // 2024-2027
  7,   2, // 2028-2029
  5,   2,   2,   2, // 2030-2033
  7,   2,   2, // 2034-2036
  7,   2, // 2037-2038
  7,   2, // 2039-2040
  7,   2, // 2041-2042
  7,   2, // 2043-2044
  7,   2, // 2045-2046
  8,   2,   2, // 2047-2049
  8,   2,   2, // 2050-2052
  8,   2,   2, // 2053-2055
  7,   2, // 2056-2057
  7,   2, // 2058-2059
  7,   2, // 2060-2061
  8,   2, // 2062-2063
  9,   2,   2, // 2064-2066
  5,   2, // 2067-2068
  5,   2,   2, // 2069-2071
  9,   2, // 2072-2073
  5, // 2074
  11, // 2075
  9,   2, // 2076-2077
  8,   2, // 2078-2079
  8,   2, // 2080-2081
  5, // 2082
  11,   2,   2, // 2083-2085
  6,   2, // 2086-2087
  5, // 2088
  8,   2,   2, // 2089-2091
  8,   2,   2, // 2092-2094
  8,   2,   2, // 2095-2097
  7,   2,   2, // 2098-2100
  7,   2,   2, // 2101-2103
  6,   2,   2, // 2104-2106
  5,   2,   2, // 2107-2109
  6,   2,   2, // 2110-2112
  7,   2, // 2113-2114
  7,   2, // 2115-2116
  7,   2, // 2117-2118
  7,   2, // 2119-2120
  7,   2, // 2121-2122
  6,   2, // 2123-2124
  5, // 2125
  11,   2,   2, // 2126-2128
  11, // 2129
  6,   2,   2, // 2130-2132
  6,   2, // 2133-2134
  11,   2,   2, // 2135-2137
  11,   2,   2, // 2138-2140
  5,   2,   2, // 2141-2143
  6,   2,   2, // 2144-2146
  5,   2,   2, // 2147-2149
  6,   2,   2, // 2150-2152
  5,   2,   2, // 2153-2155
  5,   2,   2, // 2156-2158
  5,   2, // 2159-2160
  5,   2,   2, // 2161-2163
  5,   2, // 2164-2165
  5, // 2166
  7,   2, // 2167-2168
  6,   2,   2, // 2169-2171
  5,   2,   2, // 2172-2174
  5,   2,   2, // 2175-2177
  9,   2, // 2178-2179
  5,   2,   2, // 2180-2182
  5,   2,   2, // 2183-2185
  5,   2,   2, // 2186-2188
  11,   2,   2, // 2189-2191
  6,   2,   2, // 2192-2194
  5,   2,   2,   2, // 2195-2198
  5, // 2199
  7,   2, // 2200-2201
  7,   2, // 2202-2203
  11,   2,   2, // 2204-2206
  9,   2,   2, // 2207-2209
  8,   2,   2, // 2210-2212
  8,   2,   2, // 2213-2215
  8,   2,   2, // 2216-2218
  11,   2,   2, // 2219-2221
  11,   2,   2, // 2222-2224
  11,   2,   2,   2, // 2225-2228
  11,   2,   2, // 2229-2231
  8,   2,   2, // 2232-2234
  8,   2,   2, // 2235-2237
  9,   2,   2, // 2238-2240
  11,   2,   2, // 2241-2243
  11,   2,   2, // 2244-2246
  11,   2,   2,   2, // 2247-2250
  7,   2, // 2251-2252
  11,   2,   2, // 2253-2255
  7,   2, // 2256-2257
  7,   2, // 2258-2259
  8,   2,   2, // 2260-2262
  7,   2, // 2263-2264
  7,   2, // 2265-2266
  7,   2, // 2267-2268
  7,   2,   2, // 2269-2271
  7,   2, // 2272-2273
  7,   2, // 2274-2275
  8,   2, // 2276-2277
  8,   2,   2, // 2278-2280
  7,   2, // 2281-2282
  7,   2, // 2283-2284
  5, // 2285
  7,   2, // 2286-2287
  7,   2, // 2288-2289
  7,   2, // 2290-2291
  7,   2, // 2292-2293
  5, // 2294
  8,   2,   2, // 2295-2297
  8,   2,   2, // 2298-2300
  8,   2,   2, // 2301-2303
  8,   2,   2, // 2304-2306
  7,   2, // 2307-2308
  7,   2, // 2309-2310
  8,   2,   2, // 2311-2313
  7,   2,   2, // 2314-2316
  7,   2, // 2317-2318
  7,   2, // 2319-2320
  7,   2, // 2321-2322
  8,   2, // 2323-2324
  7,   2, // 2325-2326
  7,   2,   2, // 2327-2329
  7,   2, // 2330-2331
  5, // 2332
  5,   2,   2, // 2333-2335
  8,   2, // 2336-2337
  5, // 2338
  8,   2, // 2339-2340
  5, // 2341
  6,   2, // 2342-2343
  5, // 2344
  20,   2,   2, // 2345-2347
  20,   2,   2, // 2348-2350
  30,   2,   2, // 2351-2353
  30,   2,   2, // 2354-2356
  20,   2,   2, // 2357-2359
  30,   2,   2, // 2360-2362
  20,   2,   2, // 2363-2365
  30,   2,   2, // 2366-2368
  5,   2,   2, // 2369-2371
  5,   2,   2, // 2372-2374
  11,   2,   2, // 2375-2377
  5,   2, // 2378-2379
  11, // 2380
  11,   2,   2, // 2381-2383
  6,   2,   2, // 2384-2386
  5,   2,   2, // 2387-2389
  5,   2,   2, // 2390-2392
  5,   2,   2, // 2393-2395
  6,   2,   2, // 2396-2398
  11, // 2399
  9,   2, // 2400-2401
  5,   2,   2, // 2402-2404
  6,   2,   2, // 2405-2407
  39,   2,   2, // 2408-2410
  39,   2,   2, // 2411-2413
  39,   2,   2, // 2414-2416
  24,   2,   2, // 2417-2419
  24,   2,   2, // 2420-2422
  24,   2,   2, // 2423-2425
  24,   2,   2, // 2426-2428
  39,   2,   2, // 2429-2431
  8,   2,   2, // 2432-2434
  8,   2,   2, // 2435-2437
  7,   2,   2, // 2438-2440
  7,   2, // 2441-2442
  7,   2, // 2443-2444
  7,   2, // 2445-2446
  7,   2, // 2447-2448
  7,   2, // 2449-2450
  7,   2, // 2451-2452
  8,   2,   2, // 2453-2455
  8,   2,   2, // 2456-2458
  5,   2, // 2459-2460
  5,   2, // 2461-2462
  7,   2, // 2463-2464
  7,   2, // 2465-2466
  5,   2,   2, // 2467-2469
  7,   2, // 2470-2471
  7,   2, // 2472-2473
  5,   2, // 2474-2475
  7,   2, // 2476-2477
  7,   2, // 2478-2479
  8,   2,   2, // 2480-2482
  7,   2,   2, // 2483-2485
  5, // 2486
  5, // 2487
  5,   2,   2, // 2488-2490
  6,   2, // 2491-2492
  7,   2, // 2493-2494
  1,   1,   1, // 2495-2497
  1,   1,   1, // 2498-2500
  3,   1,   1, // 2501-2503
  6,   1,   1, // 2504-2506
  1,   1,   1, // 2507-2509
  3,   1,   1, // 2510-2512
  2,   1,   1, // 2513-2515
  2,   1,   1, // 2516-2518
  23,   1,   1, // 2519-2521
  15,   1,   1, // 2522-2524
  5,   1,   1, // 2525-2527
  33,   1,   1, // 2528-2530
  8,   1,   1, // 2531-2533
  5,   1,   1, // 2534-2536
  2,   1,   1, // 2537-2539
  7,   1,   1, // 2540-2542
  1,   1,   1, // 2543-2545
  1,   1,   1, // 2546-2548
  27,   1,   1, // 2549-2551
  5,   1,   1,   1, // 2552-2555
  44,   1,   1, // 2556-2558
  32,   1,   1, // 2559-2561
  1,   1,   1,   1, // 2562-2565
  3,   1,   1, // 2566-2568
  2,   2,   1,   1, // 2569-2572
  3,   3,   1,   1, // 2573-2576
  3,   1,   1, // 2577-2579
  2,   2,   1,   1, // 2580-2583
  3,   3,   1,   1, // 2584-2587
  3,   1,   1, // 2588-2590
  3,   3,   1,   1, // 2591-2594
  3,   3,   1,   1, // 2595-2598
  3,   1,   1, // 2599-2601
  4,   4,   1,   1, // 2602-2605
  4,   4,   1,   1, // 2606-2609
  2,   1,   1, // 2610-2612
  3,   1,   1, // 2613-2615
  4,   1,   1, // 2616-2618
  3,   1,   1, // 2619-2621
  3,   1, // 2622-2623
  6,   1, // 2624-2625
  3,   1, // 2626-2627
  4,   1, // 2628-2629
  4,   1,   1, // 2630-2632
  4,   1,   1, // 2633-2635
  4,   1,   1, // 2636-2638
  3,   1,   1, // 2639-2641
  1,   1,   1, // 2642-2644
  2,   1,   1,   1, // 2645-2648
  1,   1,   1, // 2649-2651
  1,   1,   1, // 2652-2654
  1,   1,   1, // 2655-2657
  1,   1,   1, // 2658-2660
  2,   1,   1,   1, // 2661-2664
  2,   1,   1,   1, // 2665-2668
  1,   1,   1, // 2669-2671
  1,   1, // 2672-2673
  1,   1, // 2674-2675
  6,   1,   1, // 2676-2678
  2,   1,   1, // 2679-2681
  6,   1,   1, // 2682-2684
  3,   1,   1, // 2685-2687
  4,   1, // 2688-2689
  1,   1,   1, // 2690-2692
  1,   1, // 2693-2694
  1,   1, // 2695-2696
  8,   1,   1, // 2697-2699
  6,   1,   1, // 2700-2702
  6,   1,   1, // 2703-2705
  8,   1,   1, // 2706-2708
  1,   1,   1, // 2709-2711
  1,   1,   1, // 2712-2714
  1,   1,   1, // 2715-2717
  2,   1,   1, // 2718-2720
  1,   1,   1, // 2721-2723
  1,   1,   1, // 2724-2726
  1,   1,   1, // 2727-2729
  3,   1,   1, // 2730-2732
  3,   1, // 2733-2734
  6,   1,   1, // 2735-2737
  3,   1,   1, // 2738-2740
  4,   1, // 2741-2742
  2,   1,   1, // 2743-2745
  1,   1,   1, // 2746-2748
  1,   1,   1, // 2749-2751
  1,   1,   1, // 2752-2754
  3,   1, // 2755-2756
  3,   1, // 2757-2758
  3,   1,   1, // 2759-2761
  1,   1,   1, // 2762-2764
  5,   1,   1, // 2765-2767
  1,   1,   1, // 2768-2770
  1,   1,   1,   1, // 2771-2774
  6,   1,   1, // 2775-2777
  4,   1, // 2778-2779
  1,   1,   1, // 2780-2782
  2,   1,   1, // 2783-2785
  6,   1,   1, // 2786-2788
  2,   1,   1, // 2789-2791
  6,   1,   1, // 2792-2794
  8,   1,   1, // 2795-2797
  6,   1,   1, // 2798-2800
  2,   1,   1, // 2801-2803
  4,   1,   1, // 2804-2806
  4,   1,   1, // 2807-2809
  4,   1,   1, // 2810-2812
  4,   1,   1, // 2813-2815
  5,   1,   1, // 2816-2818
  5,   1,   1, // 2819-2821
  5,   1,   1,   1, // 2822-2825
  6,   1,   1, // 2826-2828
  5,   1,   1, // 2829-2831
  4,   1,   1, // 2832-2834
  4,   1,   1, // 2835-2837
  4,   1,   1, // 2838-2840
  5,   1,   1, // 2841-2843
  5,   1,   1, // 2844-2846
  5,   1,   1,   1, // 2847-2850
  6,   1,   1, // 2851-2853
  2,   1,   1, // 2854-2856
  3,   1,   1, // 2857-2859
  6,   1,   1, // 2860-2862
  2,   1,   1, // 2863-2865
  8,   1,   1, // 2866-2868
  6,   1,   1, // 2869-2871
  6,   1,   1, // 2872-2874
  6,   1,   1, // 2875-2877
  6,   1,   1, // 2878-2880
  6,   1,   1, // 2881-2883
  6,   1,   1, // 2884-2886
  2,   1,   1, // 2887-2889
  2,   1,   1, // 2890-2892
  3,   1,   1, // 2893-2895
  2,   1,   1, // 2896-2898
  3,   1,   1, // 2899-2901
  2,   1,   1, // 2902-2904
  3,   1,   1, // 2905-2907
  2,   1,   1, // 2908-2910
  3,   1,   1, // 2911-2913
  2,   2,   1,   1, // 2914-2917
  3,   3,   1,   1, // 2918-2921
  4,   1, // 2922-2923
  1,   1,   1, // 2924-2926
  1,   1,   1, // 2927-2929
  2,   1,   1, // 2930-2932
  3,   1,   1, // 2933-2935
  3,   1,   1, // 2936-2938
  4,   1, // 2939-2940
  3,   1,   1, // 2941-2943
  3,   1,   1, // 2944-2946
  3,   1,   1, // 2947-2949
  3,   1,   1, // 2950-2952
  4,   4,   1,   1, // 2953-2956
  4,   4,   1,   1, // 2957-2960
  3,   1,   1, // 2961-2963
  1,   1,   1, // 2964-2966
  1,   1,   1, // 2967-2969
  2,   1,   1, // 2970-2972
  2,   1,   1, // 2973-2975
  1,   1,   1, // 2976-2978
  1,   1,   1, // 2979-2981
  2,   1,   1, // 2982-2984
  4,   1, // 2985-2986
  1,   1,   1, // 2987-2989
  4,   1, // 2990-2991
  15,   1,   1, // 2992-2994
  15,   1,   1, // 2995-2997
  23,   1,   1, // 2998-3000
  23,   1,   1, // 3001-3003
  15,   1,   1, // 3004-3006
  23,   1,   1, // 3007-3009
  15,   1,   1, // 3010-3012
  23,   1,   1, // 3013-3015
  3,   1, // 3016-3017
  1,   1,   1, // 3018-3020
  5,   1,   1, // 3021-3023
  3,   1,   1, // 3024-3026
  1,   1,   1, // 3027-3029
  1,   1,   1, // 3030-3032
  1,   1,   1, // 3033-3035
  1,   1,   1, // 3036-3038
  1,   1,   1, // 3039-3041
  6,   1, // 3042-3043
  1,   1,   1, // 3044-3046
  1,   1,   1, // 3047-3049
  33,   1,   1, // 3050-3052
  33,   1,   1, // 3053-3055
  44,   1,   1, // 3056-3058
  44,   1,   1, // 3059-3061
  44,   1,   1, // 3062-3064
  32,   1,   1, // 3065-3067
  44,   1,   1, // 3068-3070
  32,   1,   1, // 3071-3073
  32,   1,   1, // 3074-3076
  32,   1,   1, // 3077-3079
  33,   1,   1, // 3080-3082
  27,   1,   1, // 3083-3085
  27,   1,   1, // 3086-3088
  27,   1,   1, // 3089-3091
  27,   1,   1, // 3092-3094
  33,   1,   1, // 3095-3097
  3,   3,   1,   1, // 3098-3101
  3,   3,   1,   1, // 3102-3105
  2,   1,   1,   1, // 3106-3109
  2,   1,   1,   1, // 3110-3113
  2,   1,   1,   1, // 3114-3117
  2,   2,   1,   1, // 3118-3121
  3,   3,   1,   1, // 3122-3125
  2,   2,   1,   1, // 3126-3129
  3,   3,   1,   1, // 3130-3133
  3,   3,   1,   1, // 3134-3137
  3,   3,   1,   1, // 3138-3141
  6,   1,   1, // 3142-3144
  3,   1,   1, // 3145-3147
  3,   1,   1, // 3148-3150
  2,   1,   1, // 3151-3153
  1,   1,   1, // 3154-3156
  1,   1,   1, // 3157-3159
  2,   1,   1, // 3160-3162
  7,   1,   1, // 3163-3165
  2,   1,   1, // 3166-3168
  1,   1,   1, // 3169-3171
  3,   1,   1, // 3172-3174
  2,   1,   1, // 3175-3177
  1,   1,   1, // 3178-3180
  3,   1,   1, // 3181-3183
  1,   1,   1, // 3184-3186
  4,   1, // 3187-3188
  1,   1,   1, // 3189-3191
  1,   1,   1, // 3192-3194
  1,   1,   1, // 3195-3197
  3,   1,   1, // 3198-3200
  6,   1,   1, // 3201-3203
  1,   1,   1, // 3204-3206
  3,   1,   1, // 3207-3209
  2,   1,   1, // 3210-3212
  2,   1,   1, // 3213-3215
  68,   1,   1, // 3216-3218
  36,   1,   1, // 3219-3221
  5,   1,   1, // 3222-3224
  33,   1,   1, // 3225-3227
  8,   1,   1, // 3228-3230
  5,   1,   1, // 3231-3233
  2,   1,   1, // 3234-3236
  7,   1,   1, // 3237-3239
  1,   1,   1, // 3240-3242
  1,   1,   1, // 3243-3245
  27,   1,   1, // 3246-3248
  5,   1,   1,   1, // 3249-3252
  44,   1,   1, // 3253-3255
  32,   1,   1, // 3256-3258
  1,   1,   1,   1, // 3259-3262
  3,   1,   1, // 3263-3265
  2,   2,   1,   1, // 3266-3269
  3,   3,   1,   1, // 3270-3273
  3,   1,   1, // 3274-3276
  2,   2,   1,   1, // 3277-3280
  3,   3,   1,   1, // 3281-3284
  3,   1,   1, // 3285-3287
  3,   3,   1,   1, // 3288-3291
  3,   3,   1,   1, // 3292-3295
  3,   1,   1, // 3296-3298
  4,   4,   1,   1, // 3299-3302
  4,   4,   1,   1, // 3303-3306
  2,   1,   1, // 3307-3309
  3,   1,   1, // 3310-3312
  4,   1,   1, // 3313-3315
  3,   1,   1, // 3316-3318
  3,   1, // 3319-3320
  6,   1, // 3321-3322
  3,   1, // 3323-3324
  4,   1, // 3325-3326
  4,   1,   1, // 3327-3329
  4,   1,   1, // 3330-3332
  4,   1,   1, // 3333-3335
  3,   1,   1, // 3336-3338
  1,   1,   1, // 3339-3341
  2,   1,   1,   1, // 3342-3345
  1,   1,   1, // 3346-3348
  1,   1,   1, // 3349-3351
  1,   1,   1, // 3352-3354
  1,   1,   1, // 3355-3357
  2,   1,   1,   1, // 3358-3361
  2,   1,   1,   1, // 3362-3365
  1,   1,   1, // 3366-3368
  1,   1,   1, // 3369-3371
  1,   1, // 3372-3373
  1,   1, // 3374-3375
  6,   1,   1, // 3376-3378
  2,   1,   1, // 3379-3381
  6,   1,   1, // 3382-3384
  3,   1,   1, // 3385-3387
  4,   1, // 3388-3389
  1,   1,   1, // 3390-3392
  1,   1, // 3393-3394
  1,   1, // 3395-3396
  8,   1,   1, // 3397-3399
  6,   1,   1, // 3400-3402
  6,   1,   1, // 3403-3405
  8,   1,   1, // 3406-3408
  1,   1,   1, // 3409-3411
  1,   1,   1, // 3412-3414
  1,   1,   1, // 3415-3417
  2,   1,   1, // 3418-3420
  1,   1,   1, // 3421-3423
  1,   1,   1, // 3424-3426
  1,   1,   1, // 3427-3429
  3,   1,   1, // 3430-3432
  3,   1, // 3433-3434
  6,   1,   1, // 3435-3437
  3,   1,   1, // 3438-3440
  4,   1, // 3441-3442
  2,   1,   1, // 3443-3445
  1,   1,   1, // 3446-3448
  1,   1,   1, // 3449-3451
  1,   1,   1, // 3452-3454
  3,   1, // 3455-3456
  3,   1, // 3457-3458
  3,   1,   1, // 3459-3461
  1,   1,   1, // 3462-3464
  5,   1,   1, // 3465-3467
  1,   1,   1, // 3468-3470
  1,   1,   1,   1, // 3471-3474
  6,   1,   1, // 3475-3477
  4,   1, // 3478-3479
  1,   1,   1, // 3480-3482
  2,   1,   1, // 3483-3485
  6,   1,   1, // 3486-3488
  2,   1,   1, // 3489-3491
  6,   1,   1, // 3492-3494
  8,   1,   1, // 3495-3497
  6,   1,   1, // 3498-3500
  2,   1,   1, // 3501-3503
  4,   1,   1, // 3504-3506
  4,   1,   1, // 3507-3509
  4,   1,   1, // 3510-3512
  4,   1,   1, // 3513-3515
  5,   1,   1, // 3516-3518
  5,   1,   1, // 3519-3521
  5,   1,   1,   1, // 3522-3525
  6,   1,   1, // 3526-3528
  5,   1,   1, // 3529-3531
  4,   1,   1, // 3532-3534
  4,   1,   1, // 3535-3537
  4,   1,   1, // 3538-3540
  5,   1,   1, // 3541-3543
  5,   1,   1, // 3544-3546
  5,   1,   1,   1, // 3547-3550
  6,   1,   1, // 3551-3553
  2,   1,   1, // 3554-3556
  3,   1,   1, // 3557-3559
  6,   1,   1, // 3560-3562
  2,   1,   1, // 3563-3565
  8,   1,   1, // 3566-3568
  6,   1,   1, // 3569-3571
  6,   1,   1, // 3572-3574
  6,   1,   1, // 3575-3577
  6,   1,   1, // 3578-3580
  6,   1,   1, // 3581-3583
  6,   1,   1, // 3584-3586
  2,   1,   1, // 3587-3589
  2,   1,   1, // 3590-3592
  3,   1,   1, // 3593-3595
  2,   1,   1, // 3596-3598
  3,   1,   1, // 3599-3601
  2,   1,   1, // 3602-3604
  3,   1,   1, // 3605-3607
  2,   1,   1, // 3608-3610
  3,   1,   1, // 3611-3613
  2,   2,   1,   1, // 3614-3617
  3,   3,   1,   1, // 3618-3621
  4,   1, // 3622-3623
  1,   1,   1, // 3624-3626
  1,   1,   1, // 3627-3629
  2,   1,   1, // 3630-3632
  3,   1,   1, // 3633-3635
  3,   1,   1, // 3636-3638
  4,   1, // 3639-3640
  3,   1,   1, // 3641-3643
  3,   1,   1, // 3644-3646
  3,   1,   1, // 3647-3649
  3,   1,   1, // 3650-3652
  4,   4,   1,   1, // 3653-3656
  4,   4,   1,   1, // 3657-3660
  3,   1,   1, // 3661-3663
  1,   1,   1, // 3664-3666
  1,   1,   1, // 3667-3669
  1,   1,   1, // 3670-3672
  2,   1,   1, // 3673-3675
  2,   1,   1, // 3676-3678
  1,   1,   1, // 3679-3681
  1,   1,   1, // 3682-3684
  2,   1,   1, // 3685-3687
  4,   1, // 3688-3689
  1,   1,   1, // 3690-3692
  4,   1, // 3693-3694
  36,   1,   1, // 3695-3697
  36,   1,   1, // 3698-3700
  68,   1,   1, // 3701-3703
  68,   1,   1, // 3704-3706
  36,   1,   1, // 3707-3709
  68,   1,   1, // 3710-3712
  36,   1,   1, // 3713-3715
  68,   1,   1, // 3716-3718
  3,   1, // 3719-3720
  1,   1,   1, // 3721-3723
  5,   1,   1, // 3724-3726
  3,   1,   1, // 3727-3729
  1,   1,   1, // 3730-3732
  1,   1,   1, // 3733-3735
  1,   1,   1, // 3736-3738
  1,   1,   1, // 3739-3741
  1,   1,   1, // 3742-3744
  6,   1, // 3745-3746
  1,   1,   1, // 3747-3749
  1,   1,   1, // 3750-3752
  33,   1,   1, // 3753-3755
  33,   1,   1, // 3756-3758
  44,   1,   1, // 3759-3761
  44,   1,   1, // 3762-3764
  44,   1,   1, // 3765-3767
  32,   1,   1, // 3768-3770
  44,   1,   1, // 3771-3773
  32,   1,   1, // 3774-3776
  32,   1,   1, // 3777-3779
  32,   1,   1, // 3780-3782
  33,   1,   1, // 3783-3785
  27,   1,   1, // 3786-3788
  27,   1,   1, // 3789-3791
  27,   1,   1, // 3792-3794
  27,   1,   1, // 3795-3797
  33,   1,   1, // 3798-3800
  3,   3,   1,   1, // 3801-3804
  3,   3,   1,   1, // 3805-3808
  2,   1,   1,   1, // 3809-3812
  2,   1,   1,   1, // 3813-3816
  2,   1,   1,   1, // 3817-3820
  2,   2,   1,   1, // 3821-3824
  3,   3,   1,   1, // 3825-3828
  2,   2,   1,   1, // 3829-3832
  3,   3,   1,   1, // 3833-3836
  3,   3,   1,   1, // 3837-3840
  3,   3,   1,   1, // 3841-3844
  6,   1,   1, // 3845-3847
  3,   1,   1, // 3848-3850
  3,   1,   1, // 3851-3853
  2,   1,   1, // 3854-3856
  1,   1,   1, // 3857-3859
  1,   1,   1, // 3860-3862
  2,   1,   1, // 3863-3865
  7,   1,   1, // 3866-3868
  2,   1,   1, // 3869-3871
  1,   1,   1, // 3872-3874
  3,   1,   1, // 3875-3877
  2,   1,   1, // 3878-3880
  1,   1,   1, // 3881-3883
  3,   1,   1, // 3884-3886
  1,   1,   1, // 3887-3889
  4,   1, // 3890-3891
  1,   1,   1, // 3892-3894
  0 // End operand cycles
};
extern const unsigned PPCForwardingPaths[] = {
 0, // No itinerary
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 1-3
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 4-6
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 7-8
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 9-11
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 12-14
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 15-16
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 17-19
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 20-22
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 23-25
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 26-28
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 29-31
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 32-34
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 35-37
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 38-40
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 41-44
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 45-47
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::NoBypass, // 48-51
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 52-54
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 55-58
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 59-62
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 63-65
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 66-69
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 70-73
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 74-76
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 77-79
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 80-82
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 83-85
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 86-88
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 89-91
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 92-93
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 94-95
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 96-98
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 99-100
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 101-102
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 103-104
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 105-106
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 107-109
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 110-111
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 112-113
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 114-116
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 117-119
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 120-122
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 123-125
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 126-129
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 130-131
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 132-134
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 135-137
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 138-140
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 141-144
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 145-148
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 149-151
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 152-154
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 155-156
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 157-158
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 159-161
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 162-164
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 165-167
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 168-169
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 170-172
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 173-175
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 176-178
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 179-181
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 182-184
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 185-187
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 188-190
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 191-193
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 194-195
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 196-197
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 198-200
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 201-203
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 204-206
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 207-209
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 210-212
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 213-215
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 216-218
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::NoBypass, // 219-222
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 223-224
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 225-227
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 228-230
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 231-233
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 234-236
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 237-239
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 240-242
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 243-245
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 246-248
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 249-252
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 253-255
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 256-258
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 259-261
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 262-264
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 265-267
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 268-271
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 272-274
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 275-277
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 278-280
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 281-283
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 284-286
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 287-288
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 289-291
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 292-294
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 295-297
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 298-300
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 301-303
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 304-307
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 308-311
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 312-313
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 314-316
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 317-319
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 320-322
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 323-324
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 325-327
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 328-330
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 331-333
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 334-336
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 337-339
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 340-342
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 343-345
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 346-348
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 349-351
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 352-354
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 355-357
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 358-360
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 361-363
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 364-366
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 367-369
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 370-371
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 372-374
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 375-376
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 377-378
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 379-380
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 381-382
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 383-384
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 385-387
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 388-390
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 391-393
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 394-396
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 397-399
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 400-402
PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 403-405
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 406-408
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 409-411
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 412-414
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 415-417
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 418-420
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 421-423
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 424-426
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 427-428
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 429-431
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 432-434
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 435-437
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 438-440
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 441-443
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 444-446
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 447-449
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_FPR_Bypass, PPC440ItinerariesBypass::P440_FPR_Bypass, // 450-452
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 453-456
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 457-460
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 461-464
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 465-468
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 469-472
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 473-476
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0,  0, // 477-480
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 481-484
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 485-488
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 489-490
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 491-492
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 493-495
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 496-498
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 499-501
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 502-504
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 505-507
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 508-509
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 510-511
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 512-514
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass,  0, // 515-517
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 518-520
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 521-523
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 524-525
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 526-527
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 528-529
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 530-531
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 532-534
PPC440ItinerariesBypass::P440_GPR_Bypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 535-536
PPC440ItinerariesBypass::NoBypass, PPC440ItinerariesBypass::P440_GPR_Bypass, // 537-538
 0, // 539
 0,  0,  0, // 540-542
 0,  0,  0, // 543-545
 0,  0,  0, // 546-548
 0,  0,  0, // 549-551
 0,  0,  0, // 552-554
 0,  0,  0, // 555-557
 0,  0,  0, // 558-560
 0,  0,  0, // 561-563
 0,  0,  0, // 564-566
 0,  0,  0, // 567-569
 0,  0,  0, // 570-572
 0,  0,  0, // 573-575
 0,  0,  0, // 576-578
 0,  0,  0, // 579-581
 0,  0,  0, // 582-584
 0,  0,  0, // 585-587
 0,  0,  0,  0, // 588-591
 0,  0,  0, // 592-594
 0,  0,  0, // 595-597
 0,  0,  0, // 598-600
 0,  0,  0,  0, // 601-604
 0, // 605
 0,  0,  0, // 606-608
 0,  0,  0,  0, // 609-612
 0,  0,  0,  0, // 613-616
 0,  0,  0, // 617-619
 0,  0,  0, // 620-622
 0,  0,  0, // 623-625
 0,  0,  0,  0, // 626-629
 0,  0,  0,  0, // 630-633
 0,  0,  0, // 634-636
 0,  0,  0,  0, // 637-640
 0,  0,  0,  0, // 641-644
 0,  0,  0, // 645-647
 0,  0,  0, // 648-650
 0,  0, // 651-652
 0,  0, // 653-654
 0,  0, // 655-656
 0,  0, // 657-658
 0,  0, // 659-660
 0,  0, // 661-662
 0,  0, // 663-664
 0,  0,  0, // 665-667
 0,  0,  0, // 668-670
 0,  0,  0, // 671-673
 0,  0,  0, // 674-676
 0,  0,  0,  0, // 677-680
 0, // 681
 0,  0,  0, // 682-684
 0,  0,  0, // 685-687
 0,  0,  0, // 688-690
 0,  0,  0, // 691-693
 0,  0,  0,  0, // 694-697
 0,  0,  0,  0, // 698-701
 0,  0,  0, // 702-704
 0,  0,  0, // 705-707
 0,  0, // 708-709
 0,  0, // 710-711
 0,  0, // 712-713
 0,  0,  0, // 714-716
 0,  0, // 717-718
 0,  0, // 719-720
 0,  0,  0, // 721-723
 0,  0,  0, // 724-726
 0,  0,  0, // 727-729
 0,  0,  0, // 730-732
 0,  0,  0, // 733-735
 0,  0,  0, // 736-738
 0,  0,  0, // 739-741
 0,  0,  0, // 742-744
 0,  0,  0, // 745-747
 0,  0,  0, // 748-750
 0,  0,  0, // 751-753
 0,  0, // 754-755
 0,  0,  0, // 756-758
 0,  0,  0, // 759-761
 0,  0,  0, // 762-764
 0,  0,  0, // 765-767
 0,  0, // 768-769
 0,  0,  0, // 770-772
 0,  0,  0, // 773-775
 0,  0,  0, // 776-778
 0,  0,  0, // 779-781
 0,  0,  0, // 782-784
 0,  0,  0,  0, // 785-788
 0,  0, // 789-790
 0,  0,  0, // 791-793
 0,  0,  0, // 794-796
 0,  0,  0, // 797-799
 0,  0,  0, // 800-802
 0,  0,  0, // 803-805
 0,  0,  0, // 806-808
 0,  0,  0, // 809-811
 0,  0,  0, // 812-814
 0,  0,  0,  0, // 815-818
 0,  0,  0, // 819-821
 0,  0,  0, // 822-824
 0,  0,  0, // 825-827
 0,  0,  0, // 828-830
 0,  0,  0, // 831-833
 0,  0,  0,  0, // 834-837
 0,  0,  0, // 838-840
 0,  0,  0, // 841-843
 0,  0,  0, // 844-846
 0,  0,  0, // 847-849
 0,  0,  0, // 850-852
 0,  0,  0, // 853-855
 0,  0,  0, // 856-858
 0,  0,  0, // 859-861
 0,  0,  0, // 862-864
 0, // 865
 0, // 866
 0,  0,  0, // 867-869
 0,  0,  0,  0, // 870-873
 0,  0,  0,  0, // 874-877
 0,  0, // 878-879
 0,  0,  0, // 880-882
 0,  0,  0, // 883-885
 0,  0,  0, // 886-888
 0,  0, // 889-890
 0,  0,  0, // 891-893
 0,  0,  0, // 894-896
 0,  0,  0, // 897-899
 0,  0,  0, // 900-902
 0,  0,  0,  0, // 903-906
 0,  0,  0,  0, // 907-910
 0,  0,  0, // 911-913
 0,  0,  0, // 914-916
 0,  0,  0, // 917-919
 0,  0,  0, // 920-922
 0,  0,  0, // 923-925
 0,  0,  0, // 926-928
 0,  0,  0, // 929-931
 0,  0,  0, // 932-934
 0,  0, // 935-936
 0,  0,  0, // 937-939
 0,  0, // 940-941
 0,  0, // 942-943
 0,  0, // 944-945
 0,  0, // 946-947
 0,  0, // 948-949
 0,  0,  0, // 950-952
 0,  0,  0, // 953-955
 0,  0,  0, // 956-958
 0,  0,  0, // 959-961
 0,  0,  0, // 962-964
 0,  0,  0, // 965-967
 0,  0,  0, // 968-970
 0,  0,  0, // 971-973
 0,  0,  0, // 974-976
 0,  0,  0, // 977-979
 0,  0,  0, // 980-982
 0,  0,  0, // 983-985
 0,  0,  0, // 986-988
 0,  0,  0, // 989-991
 0,  0,  0, // 992-994
 0,  0,  0, // 995-997
 0,  0,  0, // 998-1000
 0,  0, // 1001-1002
 0,  0,  0, // 1003-1005
 0,  0,  0, // 1006-1008
 0,  0,  0, // 1009-1011
 0,  0,  0, // 1012-1014
 0,  0,  0, // 1015-1017
 0,  0,  0, // 1018-1020
 0,  0,  0, // 1021-1023
 0,  0,  0, // 1024-1026
 0,  0,  0, // 1027-1029
 0,  0,  0, // 1030-1032
 0,  0,  0, // 1033-1035
 0,  0,  0, // 1036-1038
 0,  0,  0, // 1039-1041
 0,  0,  0, // 1042-1044
 0,  0,  0, // 1045-1047
 0,  0,  0, // 1048-1050
 0,  0,  0, // 1051-1053
 0,  0,  0, // 1054-1056
 0,  0,  0,  0, // 1057-1060
 0,  0,  0,  0, // 1061-1064
 0,  0,  0,  0, // 1065-1068
 0,  0,  0,  0, // 1069-1072
 0,  0,  0,  0, // 1073-1076
 0,  0,  0,  0, // 1077-1080
 0,  0,  0,  0, // 1081-1084
 0,  0,  0, // 1085-1087
 0,  0,  0, // 1088-1090
 0,  0,  0,  0, // 1091-1094
 0,  0,  0,  0, // 1095-1098
 0,  0,  0, // 1099-1101
 0,  0,  0, // 1102-1104
 0,  0,  0, // 1105-1107
 0,  0,  0, // 1108-1110
 0,  0,  0, // 1111-1113
 0,  0,  0, // 1114-1116
 0,  0,  0, // 1117-1119
 0,  0,  0, // 1120-1122
 0, // 1123
 0,  0,  0, // 1124-1126
 0,  0,  0, // 1127-1129
 0,  0,  0, // 1130-1132
 0,  0,  0, // 1133-1135
 0,  0, // 1136-1137
 0,  0, // 1138-1139
 0,  0,  0, // 1140-1142
 0,  0, // 1143-1144
 0, // 1145
 0,  0,  0, // 1146-1148
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1149-1151
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1152-1154
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1155-1156
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1157-1159
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1160-1162
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1163-1164
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1165-1166
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1167-1169
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1170-1172
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1173-1175
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1176-1178
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1179-1181
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1182-1184
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1185-1186
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1187-1189
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1190-1191
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1192-1195
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1196-1198
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1199-1200
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1201-1202
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1203-1204
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1205-1206
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1207-1208
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1209-1210
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1211-1212
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass,  0, // 1213-1215
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1216-1217
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1218-1219
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1220-1221
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1222-1223
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1224-1225
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1226-1227
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1228-1229
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1230-1231
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1232-1233
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1234-1235
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1236-1237
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1238-1240
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1241-1243
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1244-1246
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1247-1249
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1250-1252
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1253-1254
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1255-1256
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1257-1258
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1259-1260
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1261-1263
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1264-1265
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1266-1268
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1269-1270
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1271-1273
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1274-1276
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1277-1279
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1280-1282
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1283-1285
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1286-1287
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass,  0, // 1288-1290
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1291-1292
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1293-1294
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1295-1296
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1297-1299
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1300-1301
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass,  0, // 1302-1304
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1305-1307
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1308-1310
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1311-1313
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1314-1317
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1318-1319
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1320-1321
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1322-1323
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1324-1326
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1327-1329
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1330-1332
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1333-1335
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1336-1338
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1339-1341
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1342-1344
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1345-1346
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1347-1349
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1350-1351
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1352-1353
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1354-1355
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1356-1357
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1358-1359
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1360-1362
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1363-1364
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1365-1366
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1367-1368
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1369-1370
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1371-1372
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1373-1374
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1375-1376
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1377-1378
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1379-1380
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1381-1382
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1383-1384
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1385-1386
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1387-1388
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1389-1390
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1391-1392
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1393-1395
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1396-1397
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1398-1399
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1400-1401
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1402-1403
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1404-1405
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1406-1407
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1408-1409
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1410-1412
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1413-1415
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1416-1418
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1419-1421
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass,  0, // 1422-1424
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1425-1427
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1428-1429
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1430-1432
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1433-1435
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1436-1438
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1439-1440
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1441-1443
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1444-1446
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1447-1449
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1450-1452
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1453-1455
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1456-1458
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1459-1461
PPCE500ItinerariesBypass::E500_DivBypass,  0,  0, // 1462-1464
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1465-1466
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1467-1468
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1469-1470
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1471-1472
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1473-1474
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1475-1476
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1477-1478
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1479-1480
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1481-1483
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1484-1486
PPCE500ItinerariesBypass::NoBypass,  0,  0, // 1487-1489
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1490-1491
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1492-1493
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1494-1495
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1496-1497
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1498-1499
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1500-1501
PPCE500ItinerariesBypass::NoBypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1502-1503
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_CR_Bypass, // 1504-1505
PPCE500ItinerariesBypass::E500_CR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1506-1507
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1508-1510
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1511-1512
PPCE500ItinerariesBypass::E500_GPR_Bypass, PPCE500ItinerariesBypass::E500_GPR_Bypass, // 1513-1514
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1515-1517
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1518-1520
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1521-1522
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1523-1525
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1526-1528
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1529-1530
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1531-1532
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1533-1535
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1536-1538
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1539-1541
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1542-1544
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1545-1547
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1548-1549
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1550-1552
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1553-1556
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1557-1558
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1559-1562
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1563-1565
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1566-1567
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1568-1569
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1570-1572
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1573-1575
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1576-1578
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1579-1580
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1581-1582
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1583-1584
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1585-1586
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1587-1588
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass,  0, // 1589-1591
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1592-1593
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1594-1595
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1596
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1597-1598
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1599-1600
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1601-1602
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1603-1604
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1605-1606
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1607-1608
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 1609-1611
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1612-1613
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1614-1615
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1616-1617
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1618-1620
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1621-1623
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1624-1626
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1627-1629
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1630-1632
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1633-1635
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1636-1638
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1639-1640
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1641-1642
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1643-1644
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1645-1646
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1647-1648
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 1649-1651
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1652
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1653-1655
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1656-1657
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1658-1660
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1661-1663
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1664-1666
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1667-1669
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1670-1672
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1673-1675
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1676-1677
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass,  0, // 1678-1680
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1681-1682
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1683-1684
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1685-1686
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1687-1689
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1690-1691
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass,  0, // 1692-1694
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1695-1697
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1698-1700
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1701-1703
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1704-1706
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1707-1710
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1711-1712
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1713-1714
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1715-1716
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1717-1719
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1720-1722
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1723-1725
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1726-1728
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1729-1731
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1732-1734
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1735-1738
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1739-1741
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1742-1744
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1745-1747
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1748-1750
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1751-1753
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1754-1757
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1758-1759
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1760-1762
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1763-1764
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1765-1766
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1767-1769
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1770-1771
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1772-1773
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1774-1775
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1776-1778
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1779-1780
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1781-1783
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1784-1785
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1786-1787
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1788-1789
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1790-1791
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1792-1793
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1794-1795
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1796-1798
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1799-1801
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1802-1804
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1805-1807
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1808-1809
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1810-1811
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1812-1814
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1815-1817
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1818-1819
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1820-1821
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1822-1823
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1824-1825
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1826-1828
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1829-1830
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1831-1832
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1833-1835
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1836-1837
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1838-1839
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1840-1841
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1842-1843
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1844-1845
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1846-1847
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1848-1849
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1850-1852
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1853-1855
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1856-1858
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1859-1861
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass,  0, // 1862-1864
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1865-1867
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1868-1870
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1871-1872
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1873
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::NoBypass, // 1874-1876
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1877-1879
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1880-1882
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1883-1885
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1886
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1887-1888
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1889-1891
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1892-1894
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1895-1897
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1898-1900
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1901-1903
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1904-1906
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1907-1909
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, // 1910-1912
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1913-1915
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1916-1918
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1919-1921
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1922-1923
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1924-1925
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1926-1927
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1928-1929
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1930-1932
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1933-1935
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1936-1937
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1938-1939
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1940-1941
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1942-1943
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1944-1946
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1947-1948
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1949-1950
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1951-1952
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1953-1954
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1955-1956
PPCE500mcItinerariesBypass::E500mc_FPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1957-1959
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1960-1962
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1963-1964
PPCE500mcItinerariesBypass::NoBypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1965-1966
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_CR_Bypass, // 1967-1968
PPCE500mcItinerariesBypass::E500mc_CR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1969-1970
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1971-1973
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1974-1975
PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, PPCE500mcItinerariesBypass::E500mc_GPR_Bypass, // 1976-1977
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1978-1980
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1981-1983
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1984-1985
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1986-1988
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 1989-1991
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1992-1993
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1994-1995
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1996-1997
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 1998-2000
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2001-2003
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2004-2006
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2007-2009
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2010-2012
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2013-2015
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2016-2017
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2018-2020
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2021-2023
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2024-2027
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2028-2029
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2030-2033
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2034-2036
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2037-2038
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2039-2040
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2041-2042
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2043-2044
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2045-2046
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2047-2049
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2050-2052
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2053-2055
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2056-2057
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2058-2059
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2060-2061
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2062-2063
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2064-2066
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2067-2068
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 2069-2071
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2072-2073
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2074
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2075
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2076-2077
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2078-2079
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2080-2081
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2082
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 2083-2085
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2086-2087
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2088
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2089-2091
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2092-2094
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2095-2097
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2098-2100
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2101-2103
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2104-2106
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2107-2109
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2110-2112
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2113-2114
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2115-2116
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2117-2118
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2119-2120
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2121-2122
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2123-2124
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2125
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 2126-2128
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2129
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2130-2132
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2133-2134
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2135-2137
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2138-2140
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2141-2143
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2144-2146
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2147-2149
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2150-2152
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2153-2155
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2156-2158
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2159-2160
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 2161-2163
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2164-2165
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2166
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2167-2168
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2169-2171
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2172-2174
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2175-2177
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2178-2179
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 2180-2182
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2183-2185
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2186-2188
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2189-2191
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2192-2194
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2195-2198
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2199
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2200-2201
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2202-2203
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2204-2206
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2207-2209
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2210-2212
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2213-2215
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2216-2218
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2219-2221
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2222-2224
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2225-2228
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2229-2231
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2232-2234
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2235-2237
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2238-2240
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2241-2243
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2244-2246
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2247-2250
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2251-2252
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2253-2255
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2256-2257
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2258-2259
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2260-2262
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2263-2264
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2265-2266
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2267-2268
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2269-2271
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2272-2273
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2274-2275
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2276-2277
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2278-2280
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2281-2282
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2283-2284
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2285
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2286-2287
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2288-2289
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2290-2291
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2292-2293
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2294
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2295-2297
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2298-2300
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2301-2303
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2304-2306
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2307-2308
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2309-2310
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2311-2313
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2314-2316
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2317-2318
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2319-2320
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2321-2322
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2323-2324
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2325-2326
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2327-2329
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2330-2331
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2332
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2333-2335
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2336-2337
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2338
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2339-2340
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2341
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2342-2343
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2344
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2345-2347
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2348-2350
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2351-2353
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2354-2356
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2357-2359
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2360-2362
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2363-2365
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2366-2368
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass,  0, // 2369-2371
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2372-2374
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2375-2377
PPCE5500ItinerariesBypass::E5500_CR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2378-2379
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2380
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::NoBypass, // 2381-2383
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2384-2386
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2387-2389
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2390-2392
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2393-2395
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2396-2398
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2399
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_CR_Bypass, // 2400-2401
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2402-2404
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2405-2407
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2408-2410
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2411-2413
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2414-2416
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2417-2419
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2420-2422
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2423-2425
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2426-2428
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_FPR_Bypass, // 2429-2431
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2432-2434
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2435-2437
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2438-2440
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2441-2442
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2443-2444
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2445-2446
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2447-2448
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2449-2450
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2451-2452
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2453-2455
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2456-2458
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2459-2460
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2461-2462
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2463-2464
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2465-2466
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2467-2469
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2470-2471
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2472-2473
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2474-2475
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2476-2477
PPCE5500ItinerariesBypass::NoBypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2478-2479
PPCE5500ItinerariesBypass::E5500_FPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2480-2482
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2483-2485
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2486
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2487
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2488-2490
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2491-2492
PPCE5500ItinerariesBypass::E5500_GPR_Bypass, PPCE5500ItinerariesBypass::E5500_GPR_Bypass, // 2493-2494
 0,  0,  0, // 2495-2497
 0,  0,  0, // 2498-2500
 0,  0,  0, // 2501-2503
 0,  0,  0, // 2504-2506
 0,  0,  0, // 2507-2509
 0,  0,  0, // 2510-2512
 0,  0,  0, // 2513-2515
 0,  0,  0, // 2516-2518
 0,  0,  0, // 2519-2521
 0,  0,  0, // 2522-2524
 0,  0,  0, // 2525-2527
 0,  0,  0, // 2528-2530
 0,  0,  0, // 2531-2533
 0,  0,  0, // 2534-2536
 0,  0,  0, // 2537-2539
 0,  0,  0, // 2540-2542
 0,  0,  0, // 2543-2545
 0,  0,  0, // 2546-2548
 0,  0,  0, // 2549-2551
 0,  0,  0,  0, // 2552-2555
 0,  0,  0, // 2556-2558
 0,  0,  0, // 2559-2561
 0,  0,  0,  0, // 2562-2565
 0,  0,  0, // 2566-2568
 0,  0,  0,  0, // 2569-2572
 0,  0,  0,  0, // 2573-2576
 0,  0,  0, // 2577-2579
 0,  0,  0,  0, // 2580-2583
 0,  0,  0,  0, // 2584-2587
 0,  0,  0, // 2588-2590
 0,  0,  0,  0, // 2591-2594
 0,  0,  0,  0, // 2595-2598
 0,  0,  0, // 2599-2601
 0,  0,  0,  0, // 2602-2605
 0,  0,  0,  0, // 2606-2609
 0,  0,  0, // 2610-2612
 0,  0,  0, // 2613-2615
 0,  0,  0, // 2616-2618
 0,  0,  0, // 2619-2621
 0,  0, // 2622-2623
 0,  0, // 2624-2625
 0,  0, // 2626-2627
 0,  0, // 2628-2629
 0,  0,  0, // 2630-2632
 0,  0,  0, // 2633-2635
 0,  0,  0, // 2636-2638
 0,  0,  0, // 2639-2641
 0,  0,  0, // 2642-2644
 0,  0,  0,  0, // 2645-2648
 0,  0,  0, // 2649-2651
 0,  0,  0, // 2652-2654
 0,  0,  0, // 2655-2657
 0,  0,  0, // 2658-2660
 0,  0,  0,  0, // 2661-2664
 0,  0,  0,  0, // 2665-2668
 0,  0,  0, // 2669-2671
 0,  0, // 2672-2673
 0,  0, // 2674-2675
 0,  0,  0, // 2676-2678
 0,  0,  0, // 2679-2681
 0,  0,  0, // 2682-2684
 0,  0,  0, // 2685-2687
 0,  0, // 2688-2689
 0,  0,  0, // 2690-2692
 0,  0, // 2693-2694
 0,  0, // 2695-2696
 0,  0,  0, // 2697-2699
 0,  0,  0, // 2700-2702
 0,  0,  0, // 2703-2705
 0,  0,  0, // 2706-2708
 0,  0,  0, // 2709-2711
 0,  0,  0, // 2712-2714
 0,  0,  0, // 2715-2717
 0,  0,  0, // 2718-2720
 0,  0,  0, // 2721-2723
 0,  0,  0, // 2724-2726
 0,  0,  0, // 2727-2729
 0,  0,  0, // 2730-2732
 0,  0, // 2733-2734
 0,  0,  0, // 2735-2737
 0,  0,  0, // 2738-2740
 0,  0, // 2741-2742
 0,  0,  0, // 2743-2745
 0,  0,  0, // 2746-2748
 0,  0,  0, // 2749-2751
 0,  0,  0, // 2752-2754
 0,  0, // 2755-2756
 0,  0, // 2757-2758
 0,  0,  0, // 2759-2761
 0,  0,  0, // 2762-2764
 0,  0,  0, // 2765-2767
 0,  0,  0, // 2768-2770
 0,  0,  0,  0, // 2771-2774
 0,  0,  0, // 2775-2777
 0,  0, // 2778-2779
 0,  0,  0, // 2780-2782
 0,  0,  0, // 2783-2785
 0,  0,  0, // 2786-2788
 0,  0,  0, // 2789-2791
 0,  0,  0, // 2792-2794
 0,  0,  0, // 2795-2797
 0,  0,  0, // 2798-2800
 0,  0,  0, // 2801-2803
 0,  0,  0, // 2804-2806
 0,  0,  0, // 2807-2809
 0,  0,  0, // 2810-2812
 0,  0,  0, // 2813-2815
 0,  0,  0, // 2816-2818
 0,  0,  0, // 2819-2821
 0,  0,  0,  0, // 2822-2825
 0,  0,  0, // 2826-2828
 0,  0,  0, // 2829-2831
 0,  0,  0, // 2832-2834
 0,  0,  0, // 2835-2837
 0,  0,  0, // 2838-2840
 0,  0,  0, // 2841-2843
 0,  0,  0, // 2844-2846
 0,  0,  0,  0, // 2847-2850
 0,  0,  0, // 2851-2853
 0,  0,  0, // 2854-2856
 0,  0,  0, // 2857-2859
 0,  0,  0, // 2860-2862
 0,  0,  0, // 2863-2865
 0,  0,  0, // 2866-2868
 0,  0,  0, // 2869-2871
 0,  0,  0, // 2872-2874
 0,  0,  0, // 2875-2877
 0,  0,  0, // 2878-2880
 0,  0,  0, // 2881-2883
 0,  0,  0, // 2884-2886
 0,  0,  0, // 2887-2889
 0,  0,  0, // 2890-2892
 0,  0,  0, // 2893-2895
 0,  0,  0, // 2896-2898
 0,  0,  0, // 2899-2901
 0,  0,  0, // 2902-2904
 0,  0,  0, // 2905-2907
 0,  0,  0, // 2908-2910
 0,  0,  0, // 2911-2913
 0,  0,  0,  0, // 2914-2917
 0,  0,  0,  0, // 2918-2921
 0,  0, // 2922-2923
 0,  0,  0, // 2924-2926
 0,  0,  0, // 2927-2929
 0,  0,  0, // 2930-2932
 0,  0,  0, // 2933-2935
 0,  0,  0, // 2936-2938
 0,  0, // 2939-2940
 0,  0,  0, // 2941-2943
 0,  0,  0, // 2944-2946
 0,  0,  0, // 2947-2949
 0,  0,  0, // 2950-2952
 0,  0,  0,  0, // 2953-2956
 0,  0,  0,  0, // 2957-2960
 0,  0,  0, // 2961-2963
 0,  0,  0, // 2964-2966
 0,  0,  0, // 2967-2969
 0,  0,  0, // 2970-2972
 0,  0,  0, // 2973-2975
 0,  0,  0, // 2976-2978
 0,  0,  0, // 2979-2981
 0,  0,  0, // 2982-2984
 0,  0, // 2985-2986
 0,  0,  0, // 2987-2989
 0,  0, // 2990-2991
 0,  0,  0, // 2992-2994
 0,  0,  0, // 2995-2997
 0,  0,  0, // 2998-3000
 0,  0,  0, // 3001-3003
 0,  0,  0, // 3004-3006
 0,  0,  0, // 3007-3009
 0,  0,  0, // 3010-3012
 0,  0,  0, // 3013-3015
 0,  0, // 3016-3017
 0,  0,  0, // 3018-3020
 0,  0,  0, // 3021-3023
 0,  0,  0, // 3024-3026
 0,  0,  0, // 3027-3029
 0,  0,  0, // 3030-3032
 0,  0,  0, // 3033-3035
 0,  0,  0, // 3036-3038
 0,  0,  0, // 3039-3041
 0,  0, // 3042-3043
 0,  0,  0, // 3044-3046
 0,  0,  0, // 3047-3049
 0,  0,  0, // 3050-3052
 0,  0,  0, // 3053-3055
 0,  0,  0, // 3056-3058
 0,  0,  0, // 3059-3061
 0,  0,  0, // 3062-3064
 0,  0,  0, // 3065-3067
 0,  0,  0, // 3068-3070
 0,  0,  0, // 3071-3073
 0,  0,  0, // 3074-3076
 0,  0,  0, // 3077-3079
 0,  0,  0, // 3080-3082
 0,  0,  0, // 3083-3085
 0,  0,  0, // 3086-3088
 0,  0,  0, // 3089-3091
 0,  0,  0, // 3092-3094
 0,  0,  0, // 3095-3097
 0,  0,  0,  0, // 3098-3101
 0,  0,  0,  0, // 3102-3105
 0,  0,  0,  0, // 3106-3109
 0,  0,  0,  0, // 3110-3113
 0,  0,  0,  0, // 3114-3117
 0,  0,  0,  0, // 3118-3121
 0,  0,  0,  0, // 3122-3125
 0,  0,  0,  0, // 3126-3129
 0,  0,  0,  0, // 3130-3133
 0,  0,  0,  0, // 3134-3137
 0,  0,  0,  0, // 3138-3141
 0,  0,  0, // 3142-3144
 0,  0,  0, // 3145-3147
 0,  0,  0, // 3148-3150
 0,  0,  0, // 3151-3153
 0,  0,  0, // 3154-3156
 0,  0,  0, // 3157-3159
 0,  0,  0, // 3160-3162
 0,  0,  0, // 3163-3165
 0,  0,  0, // 3166-3168
 0,  0,  0, // 3169-3171
 0,  0,  0, // 3172-3174
 0,  0,  0, // 3175-3177
 0,  0,  0, // 3178-3180
 0,  0,  0, // 3181-3183
 0,  0,  0, // 3184-3186
 0,  0, // 3187-3188
 0,  0,  0, // 3189-3191
 0,  0,  0, // 3192-3194
 0,  0,  0, // 3195-3197
 0,  0,  0, // 3198-3200
 0,  0,  0, // 3201-3203
 0,  0,  0, // 3204-3206
 0,  0,  0, // 3207-3209
 0,  0,  0, // 3210-3212
 0,  0,  0, // 3213-3215
 0,  0,  0, // 3216-3218
 0,  0,  0, // 3219-3221
 0,  0,  0, // 3222-3224
 0,  0,  0, // 3225-3227
 0,  0,  0, // 3228-3230
 0,  0,  0, // 3231-3233
 0,  0,  0, // 3234-3236
 0,  0,  0, // 3237-3239
 0,  0,  0, // 3240-3242
 0,  0,  0, // 3243-3245
 0,  0,  0, // 3246-3248
 0,  0,  0,  0, // 3249-3252
 0,  0,  0, // 3253-3255
 0,  0,  0, // 3256-3258
 0,  0,  0,  0, // 3259-3262
 0,  0,  0, // 3263-3265
 0,  0,  0,  0, // 3266-3269
 0,  0,  0,  0, // 3270-3273
 0,  0,  0, // 3274-3276
 0,  0,  0,  0, // 3277-3280
 0,  0,  0,  0, // 3281-3284
 0,  0,  0, // 3285-3287
 0,  0,  0,  0, // 3288-3291
 0,  0,  0,  0, // 3292-3295
 0,  0,  0, // 3296-3298
 0,  0,  0,  0, // 3299-3302
 0,  0,  0,  0, // 3303-3306
 0,  0,  0, // 3307-3309
 0,  0,  0, // 3310-3312
 0,  0,  0, // 3313-3315
 0,  0,  0, // 3316-3318
 0,  0, // 3319-3320
 0,  0, // 3321-3322
 0,  0, // 3323-3324
 0,  0, // 3325-3326
 0,  0,  0, // 3327-3329
 0,  0,  0, // 3330-3332
 0,  0,  0, // 3333-3335
 0,  0,  0, // 3336-3338
 0,  0,  0, // 3339-3341
 0,  0,  0,  0, // 3342-3345
 0,  0,  0, // 3346-3348
 0,  0,  0, // 3349-3351
 0,  0,  0, // 3352-3354
 0,  0,  0, // 3355-3357
 0,  0,  0,  0, // 3358-3361
 0,  0,  0,  0, // 3362-3365
 0,  0,  0, // 3366-3368
 0,  0,  0, // 3369-3371
 0,  0, // 3372-3373
 0,  0, // 3374-3375
 0,  0,  0, // 3376-3378
 0,  0,  0, // 3379-3381
 0,  0,  0, // 3382-3384
 0,  0,  0, // 3385-3387
 0,  0, // 3388-3389
 0,  0,  0, // 3390-3392
 0,  0, // 3393-3394
 0,  0, // 3395-3396
 0,  0,  0, // 3397-3399
 0,  0,  0, // 3400-3402
 0,  0,  0, // 3403-3405
 0,  0,  0, // 3406-3408
 0,  0,  0, // 3409-3411
 0,  0,  0, // 3412-3414
 0,  0,  0, // 3415-3417
 0,  0,  0, // 3418-3420
 0,  0,  0, // 3421-3423
 0,  0,  0, // 3424-3426
 0,  0,  0, // 3427-3429
 0,  0,  0, // 3430-3432
 0,  0, // 3433-3434
 0,  0,  0, // 3435-3437
 0,  0,  0, // 3438-3440
 0,  0, // 3441-3442
 0,  0,  0, // 3443-3445
 0,  0,  0, // 3446-3448
 0,  0,  0, // 3449-3451
 0,  0,  0, // 3452-3454
 0,  0, // 3455-3456
 0,  0, // 3457-3458
 0,  0,  0, // 3459-3461
 0,  0,  0, // 3462-3464
 0,  0,  0, // 3465-3467
 0,  0,  0, // 3468-3470
 0,  0,  0,  0, // 3471-3474
 0,  0,  0, // 3475-3477
 0,  0, // 3478-3479
 0,  0,  0, // 3480-3482
 0,  0,  0, // 3483-3485
 0,  0,  0, // 3486-3488
 0,  0,  0, // 3489-3491
 0,  0,  0, // 3492-3494
 0,  0,  0, // 3495-3497
 0,  0,  0, // 3498-3500
 0,  0,  0, // 3501-3503
 0,  0,  0, // 3504-3506
 0,  0,  0, // 3507-3509
 0,  0,  0, // 3510-3512
 0,  0,  0, // 3513-3515
 0,  0,  0, // 3516-3518
 0,  0,  0, // 3519-3521
 0,  0,  0,  0, // 3522-3525
 0,  0,  0, // 3526-3528
 0,  0,  0, // 3529-3531
 0,  0,  0, // 3532-3534
 0,  0,  0, // 3535-3537
 0,  0,  0, // 3538-3540
 0,  0,  0, // 3541-3543
 0,  0,  0, // 3544-3546
 0,  0,  0,  0, // 3547-3550
 0,  0,  0, // 3551-3553
 0,  0,  0, // 3554-3556
 0,  0,  0, // 3557-3559
 0,  0,  0, // 3560-3562
 0,  0,  0, // 3563-3565
 0,  0,  0, // 3566-3568
 0,  0,  0, // 3569-3571
 0,  0,  0, // 3572-3574
 0,  0,  0, // 3575-3577
 0,  0,  0, // 3578-3580
 0,  0,  0, // 3581-3583
 0,  0,  0, // 3584-3586
 0,  0,  0, // 3587-3589
 0,  0,  0, // 3590-3592
 0,  0,  0, // 3593-3595
 0,  0,  0, // 3596-3598
 0,  0,  0, // 3599-3601
 0,  0,  0, // 3602-3604
 0,  0,  0, // 3605-3607
 0,  0,  0, // 3608-3610
 0,  0,  0, // 3611-3613
 0,  0,  0,  0, // 3614-3617
 0,  0,  0,  0, // 3618-3621
 0,  0, // 3622-3623
 0,  0,  0, // 3624-3626
 0,  0,  0, // 3627-3629
 0,  0,  0, // 3630-3632
 0,  0,  0, // 3633-3635
 0,  0,  0, // 3636-3638
 0,  0, // 3639-3640
 0,  0,  0, // 3641-3643
 0,  0,  0, // 3644-3646
 0,  0,  0, // 3647-3649
 0,  0,  0, // 3650-3652
 0,  0,  0,  0, // 3653-3656
 0,  0,  0,  0, // 3657-3660
 0,  0,  0, // 3661-3663
 0,  0,  0, // 3664-3666
 0,  0,  0, // 3667-3669
 0,  0,  0, // 3670-3672
 0,  0,  0, // 3673-3675
 0,  0,  0, // 3676-3678
 0,  0,  0, // 3679-3681
 0,  0,  0, // 3682-3684
 0,  0,  0, // 3685-3687
 0,  0, // 3688-3689
 0,  0,  0, // 3690-3692
 0,  0, // 3693-3694
 0,  0,  0, // 3695-3697
 0,  0,  0, // 3698-3700
 0,  0,  0, // 3701-3703
 0,  0,  0, // 3704-3706
 0,  0,  0, // 3707-3709
 0,  0,  0, // 3710-3712
 0,  0,  0, // 3713-3715
 0,  0,  0, // 3716-3718
 0,  0, // 3719-3720
 0,  0,  0, // 3721-3723
 0,  0,  0, // 3724-3726
 0,  0,  0, // 3727-3729
 0,  0,  0, // 3730-3732
 0,  0,  0, // 3733-3735
 0,  0,  0, // 3736-3738
 0,  0,  0, // 3739-3741
 0,  0,  0, // 3742-3744
 0,  0, // 3745-3746
 0,  0,  0, // 3747-3749
 0,  0,  0, // 3750-3752
 0,  0,  0, // 3753-3755
 0,  0,  0, // 3756-3758
 0,  0,  0, // 3759-3761
 0,  0,  0, // 3762-3764
 0,  0,  0, // 3765-3767
 0,  0,  0, // 3768-3770
 0,  0,  0, // 3771-3773
 0,  0,  0, // 3774-3776
 0,  0,  0, // 3777-3779
 0,  0,  0, // 3780-3782
 0,  0,  0, // 3783-3785
 0,  0,  0, // 3786-3788
 0,  0,  0, // 3789-3791
 0,  0,  0, // 3792-3794
 0,  0,  0, // 3795-3797
 0,  0,  0, // 3798-3800
 0,  0,  0,  0, // 3801-3804
 0,  0,  0,  0, // 3805-3808
 0,  0,  0,  0, // 3809-3812
 0,  0,  0,  0, // 3813-3816
 0,  0,  0,  0, // 3817-3820
 0,  0,  0,  0, // 3821-3824
 0,  0,  0,  0, // 3825-3828
 0,  0,  0,  0, // 3829-3832
 0,  0,  0,  0, // 3833-3836
 0,  0,  0,  0, // 3837-3840
 0,  0,  0,  0, // 3841-3844
 0,  0,  0, // 3845-3847
 0,  0,  0, // 3848-3850
 0,  0,  0, // 3851-3853
 0,  0,  0, // 3854-3856
 0,  0,  0, // 3857-3859
 0,  0,  0, // 3860-3862
 0,  0,  0, // 3863-3865
 0,  0,  0, // 3866-3868
 0,  0,  0, // 3869-3871
 0,  0,  0, // 3872-3874
 0,  0,  0, // 3875-3877
 0,  0,  0, // 3878-3880
 0,  0,  0, // 3881-3883
 0,  0,  0, // 3884-3886
 0,  0,  0, // 3887-3889
 0,  0, // 3890-3891
 0,  0,  0, // 3892-3894
 0 // End bypass tables
};

static const llvm::InstrItinerary PPC440Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 6, 0, 0 }, // 1 IIC_LdStSync
  { 1, 6, 11, 1, 4 }, // 2 IIC_IntSimple
  { 1, 6, 11, 4, 7 }, // 3 IIC_IntGeneral
  { 1, 11, 16, 7, 9 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 6, 11, 9, 12 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 11, 16, 12, 15 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 16, 21, 15, 17 }, // 12 IIC_LdStDCBF
  { 1, 21, 26, 17, 20 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 26, 31, 20, 23 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 31, 40, 23, 26 }, // 17 IIC_FPAddSub
  { 1, 40, 49, 26, 29 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 31, 40, 29, 32 }, // 20 IIC_FPCompare
  { 1, 31, 40, 32, 35 }, // 21 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 22 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 23 IIC_VecComplex
  { 1, 21, 26, 35, 38 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 49, 58, 38, 41 }, // 26 IIC_FPDivS
  { 1, 31, 40, 41, 45 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 16, 21, 45, 48 }, // 30 IIC_LdStICBI
  { 1, 6, 11, 48, 52 }, // 31 IIC_IntISEL
  { 1, 58, 74, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 74, 81, 52, 55 }, // 33 IIC_LdStLWARX
  { 1, 21, 26, 55, 59 }, // 34 IIC_LdStLoadUpd
  { 1, 21, 26, 59, 63 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 21, 26, 63, 66 }, // 39 IIC_LdStLFD
  { 1, 16, 21, 66, 70 }, // 40 IIC_LdStLFDU
  { 1, 16, 21, 70, 74 }, // 41 IIC_LdStLFDUX
  { 1, 16, 21, 74, 77 }, // 42 IIC_LdStLHA
  { 1, 16, 21, 77, 80 }, // 43 IIC_LdStLHAU
  { 1, 16, 21, 80, 83 }, // 44 IIC_LdStLHAUX
  { 1, 16, 21, 83, 86 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 11, 16, 86, 89 }, // 48 IIC_BrMCR
  { 1, 11, 16, 89, 92 }, // 49 IIC_BrMCRX
  { 1, 11, 16, 92, 94 }, // 50 IIC_SprMFCR
  { 1, 81, 86, 94, 96 }, // 51 IIC_SprMFSPR
  { 1, 11, 16, 96, 99 }, // 52 IIC_IntMFFS
  { 1, 11, 16, 99, 101 }, // 53 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 1, 11, 16, 101, 103 }, // 56 IIC_SprMFSR
  { 1, 81, 86, 103, 105 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 81, 86, 105, 107 }, // 59 IIC_SprMTSPR
  { 1, 11, 16, 107, 110 }, // 60 IIC_IntMTFSB0
  { 1, 11, 16, 110, 112 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 1, 81, 86, 112, 114 }, // 64 IIC_SprMTSR
  { 1, 11, 16, 114, 117 }, // 65 IIC_IntMulHW
  { 1, 11, 16, 117, 120 }, // 66 IIC_IntMulHWU
  { 1, 11, 16, 120, 123 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 1, 16, 21, 123, 126 }, // 69 IIC_LdStSTFD
  { 1, 16, 21, 126, 130 }, // 70 IIC_LdStSTFDU
  { 1, 11, 16, 130, 132 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 6, 11, 132, 135 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 6, 11, 135, 138 }, // 82 IIC_IntShift
  { 1, 74, 81, 138, 141 }, // 83 IIC_LdStSTWCX
  { 1, 21, 26, 141, 145 }, // 84 IIC_LdStSTU
  { 1, 21, 26, 145, 149 }, // 85 IIC_LdStSTUX
  { 1, 21, 26, 149, 152 }, // 86 IIC_LdStSTD
  { 1, 74, 81, 152, 155 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 11, 16, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 11, 16, 155, 157 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 81, 86, 157, 159 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 11, 16, 159, 162 }, // 100 MTFSB0_MTFSB1
  { 1, 11, 16, 162, 165 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 6, 11, 165, 168 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 11, 16, 168, 170 }, // 104 TW_TWI
  { 1, 31, 40, 170, 173 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 31, 40, 173, 176 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 6, 11, 176, 179 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 0, 0, 0, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 6, 11, 179, 182 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 6, 11, 182, 185 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 6, 11, 185, 188 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 11, 16, 188, 191 }, // 117 MCRF
  { 1, 11, 16, 191, 194 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 11, 16, 194, 196 }, // 120 RFEBB
  { 1, 81, 86, 196, 198 }, // 121 TBEGIN_TRECHKPT
  { 1, 21, 26, 198, 201 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 6, 11, 201, 204 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 0, 0, 0, 0, 0 }, // 126 MFOCRF_MFOCRF8
  { 1, 11, 16, 204, 207 }, // 127 MTOCRF_MTOCRF8
  { 1, 11, 16, 207, 210 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 6, 11, 210, 213 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 31, 40, 213, 216 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 6, 11, 216, 219 }, // 131 SRAW_SRAWI
  { 1, 6, 11, 219, 223 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 81, 86, 223, 225 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 21, 26, 225, 228 }, // 135 MFVSCR
  { 1, 21, 26, 228, 231 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 31, 40, 231, 234 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 11, 16, 234, 237 }, // 144 MULHD_MULHW_MULLW
  { 1, 11, 16, 237, 240 }, // 145 MULHDU_MULHWU
  { 1, 11, 16, 240, 243 }, // 146 MULLI_MULLI8
  { 1, 31, 40, 243, 246 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 31, 40, 246, 249 }, // 148 FADD_FSUB
  { 1, 31, 40, 249, 253 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 31, 40, 253, 256 }, // 151 FSELDo_FSELSo
  { 1, 11, 16, 256, 259 }, // 152 MULHDUo_MULHWUo
  { 1, 11, 16, 259, 262 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 31, 40, 262, 265 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 31, 40, 265, 268 }, // 156 FADDo_FSUBo
  { 1, 31, 40, 268, 272 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 21, 26, 272, 275 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 0, 0, 0, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 31, 40, 275, 278 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 21, 26, 278, 281 }, // 170 LXVL_LXVLL
  { 1, 21, 26, 281, 284 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 21, 26, 284, 287 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 16, 21, 287, 289 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 16, 21, 289, 292 }, // 177 ICBI_ICBIEP
  { 1, 21, 26, 292, 295 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 74, 81, 295, 298 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 58, 74, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 11, 16, 0, 0 }, // 185 TLBSYNC
  { 1, 1, 6, 0, 0 }, // 186 SYNC
  { 1, 16, 21, 298, 301 }, // 187 LMW
  { 1, 21, 26, 301, 304 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 21, 26, 304, 308 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 21, 26, 308, 312 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 81, 86, 312, 314 }, // 197 TEND
  { 1, 74, 81, 314, 317 }, // 198 STBCX_STHCX_STWCX
  { 1, 74, 81, 317, 320 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 16, 21, 320, 323 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 81, 86, 323, 325 }, // 204 TCHECK
  { 1, 21, 26, 325, 328 }, // 205 LFIWAX
  { 1, 21, 26, 328, 331 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 21, 26, 331, 334 }, // 208 LFSX_LFS
  { 1, 21, 26, 334, 337 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 16, 21, 337, 340 }, // 211 LHAU_LHAU8
  { 1, 16, 21, 340, 343 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 21, 26, 343, 346 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 16, 21, 346, 349 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 21, 26, 349, 352 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 21, 26, 352, 355 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 21, 26, 355, 358 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 16, 21, 358, 361 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 21, 26, 361, 364 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 16, 21, 364, 367 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 21, 26, 367, 370 }, // 224 STXVL_STXVLL
  { 1, 81, 86, 370, 372 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 6, 11, 372, 375 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 81, 86, 375, 377 }, // 229 MFTB_MFTB8
  { 1, 81, 86, 377, 379 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 11, 16, 379, 381 }, // 231 MFMSR
  { 1, 11, 16, 381, 383 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 81, 86, 383, 385 }, // 234 MTSPR_MTSPR8
  { 1, 26, 31, 385, 388 }, // 235 DIVW_DIVWU_MODSW
  { 1, 26, 31, 388, 391 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 26, 31, 391, 394 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 26, 31, 394, 397 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 11, 16, 397, 400 }, // 243 MTCRF_MTCRF8
  { 1, 6, 11, 400, 403 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 31, 40, 403, 406 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 11, 16, 406, 409 }, // 246 MCRFS
  { 1, 11, 16, 409, 412 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 11, 16, 412, 415 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 6, 11, 415, 418 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 6, 11, 418, 421 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 6, 11, 421, 424 }, // 253 SRAWIo_SRAWo
  { 1, 11, 16, 424, 427 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 11, 16, 427, 429 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 40, 49, 429, 432 }, // 258 FDIV
  { 1, 40, 49, 432, 435 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 40, 49, 435, 438 }, // 268 XSDIVDP
  { 1, 49, 58, 438, 441 }, // 269 FDIVS
  { 1, 49, 58, 441, 444 }, // 270 FDIVSo
  { 1, 49, 58, 444, 447 }, // 271 XSDIVSP
  { 1, 49, 58, 447, 450 }, // 272 XVDIVSP
  { 1, 40, 49, 450, 453 }, // 273 XVDIVDP
  { 1, 16, 21, 453, 457 }, // 274 LFSU
  { 1, 16, 21, 457, 461 }, // 275 LFSUX
  { 1, 16, 21, 461, 465 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 21, 26, 465, 469 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 21, 26, 469, 473 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 21, 26, 473, 477 }, // 279 LBZU_LBZU8
  { 1, 21, 26, 477, 481 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 1, 16, 21, 481, 485 }, // 283 LFDU
  { 1, 16, 21, 485, 489 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 11, 16, 489, 491 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 11, 16, 491, 493 }, // 287 ADDPCIS
  { 1, 21, 26, 493, 496 }, // 288 LDAT_LWAT
  { 1, 21, 26, 496, 499 }, // 289 STDAT_STWAT
  { 1, 6, 11, 499, 502 }, // 290 BRINC
  { 0, 0, 0, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 0, 0, 0, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 21, 26, 502, 505 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 21, 26, 505, 508 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 11, 16, 508, 510 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 1, 11, 16, 510, 512 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 21, 26, 512, 515 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 21, 26, 515, 518 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 21, 26, 518, 521 }, // 300 LFDEPX
  { 1, 16, 21, 521, 524 }, // 301 STFDEPX
  { 1, 11, 16, 524, 526 }, // 302 MFSR_MFSRIN
  { 1, 81, 86, 526, 528 }, // 303 MTSR_MTSRIN
  { 1, 81, 86, 528, 530 }, // 304 MFDCR
  { 1, 81, 86, 530, 532 }, // 305 MTDCR
  { 1, 6, 11, 532, 535 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 11, 16, 535, 537 }, // 308 WRTEE_WRTEEI
  { 1, 1, 6, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 16, 21, 537, 539 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 86, 87, 0, 0 }, // 1 IIC_LdStSync
  { 1, 87, 88, 0, 0 }, // 2 IIC_IntSimple
  { 1, 87, 88, 0, 0 }, // 3 IIC_IntGeneral
  { 1, 88, 89, 0, 0 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 87, 88, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 89, 90, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 86, 87, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 90, 91, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 91, 92, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 92, 93, 0, 0 }, // 17 IIC_FPAddSub
  { 1, 93, 94, 0, 0 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 92, 93, 0, 0 }, // 20 IIC_FPCompare
  { 1, 92, 93, 0, 0 }, // 21 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 22 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 23 IIC_VecComplex
  { 1, 90, 91, 0, 0 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 94, 95, 0, 0 }, // 26 IIC_FPDivS
  { 1, 95, 96, 0, 0 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 86, 87, 0, 0 }, // 30 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 31 IIC_IntISEL
  { 1, 96, 97, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 86, 87, 0, 0 }, // 33 IIC_LdStLWARX
  { 1, 90, 91, 0, 0 }, // 34 IIC_LdStLoadUpd
  { 1, 90, 91, 0, 0 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 90, 91, 0, 0 }, // 39 IIC_LdStLFD
  { 1, 90, 91, 0, 0 }, // 40 IIC_LdStLFDU
  { 1, 90, 91, 0, 0 }, // 41 IIC_LdStLFDUX
  { 1, 90, 91, 0, 0 }, // 42 IIC_LdStLHA
  { 1, 90, 91, 0, 0 }, // 43 IIC_LdStLHAU
  { 1, 90, 91, 0, 0 }, // 44 IIC_LdStLHAUX
  { 1, 97, 98, 0, 0 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 89, 90, 0, 0 }, // 48 IIC_BrMCR
  { 1, 89, 90, 0, 0 }, // 49 IIC_BrMCRX
  { 1, 89, 90, 0, 0 }, // 50 IIC_SprMFCR
  { 1, 98, 99, 0, 0 }, // 51 IIC_SprMFSPR
  { 1, 92, 93, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 89, 90, 0, 0 }, // 53 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 1, 98, 99, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 98, 99, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 96, 97, 0, 0 }, // 59 IIC_SprMTSPR
  { 1, 99, 100, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 89, 90, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 1, 96, 97, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 100, 101, 0, 0 }, // 65 IIC_IntMulHW
  { 1, 101, 102, 0, 0 }, // 66 IIC_IntMulHWU
  { 1, 102, 103, 0, 0 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 1, 90, 91, 0, 0 }, // 69 IIC_LdStSTFD
  { 1, 90, 91, 0, 0 }, // 70 IIC_LdStSTFDU
  { 1, 96, 97, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 87, 88, 0, 0 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 87, 88, 0, 0 }, // 82 IIC_IntShift
  { 1, 103, 104, 0, 0 }, // 83 IIC_LdStSTWCX
  { 1, 90, 91, 0, 0 }, // 84 IIC_LdStSTU
  { 1, 90, 91, 0, 0 }, // 85 IIC_LdStSTUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 98, 99, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 104, 105, 0, 0 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 96, 97, 0, 0 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 99, 100, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 1, 92, 93, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 87, 88, 0, 0 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 104, 105, 0, 0 }, // 104 TW_TWI
  { 1, 92, 93, 0, 0 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 92, 93, 0, 0 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 87, 88, 0, 0 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 0, 0, 0, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 87, 88, 0, 0 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 87, 88, 0, 0 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 87, 88, 0, 0 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 89, 90, 0, 0 }, // 117 MCRF
  { 1, 89, 90, 0, 0 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 88, 89, 0, 0 }, // 120 RFEBB
  { 1, 96, 97, 0, 0 }, // 121 TBEGIN_TRECHKPT
  { 1, 90, 91, 0, 0 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 87, 88, 0, 0 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 0, 0, 0, 0, 0 }, // 126 MFOCRF_MFOCRF8
  { 1, 89, 90, 0, 0 }, // 127 MTOCRF_MTOCRF8
  { 1, 89, 90, 0, 0 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 87, 88, 0, 0 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 92, 93, 0, 0 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 87, 88, 0, 0 }, // 131 SRAW_SRAWI
  { 0, 0, 0, 0, 0 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 96, 97, 0, 0 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 90, 91, 0, 0 }, // 135 MFVSCR
  { 1, 90, 91, 0, 0 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 92, 93, 0, 0 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 100, 101, 0, 0 }, // 144 MULHD_MULHW_MULLW
  { 1, 101, 102, 0, 0 }, // 145 MULHDU_MULHWU
  { 1, 102, 103, 0, 0 }, // 146 MULLI_MULLI8
  { 1, 92, 93, 0, 0 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 92, 93, 0, 0 }, // 148 FADD_FSUB
  { 1, 95, 96, 0, 0 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 92, 93, 0, 0 }, // 151 FSELDo_FSELSo
  { 1, 101, 102, 0, 0 }, // 152 MULHDUo_MULHWUo
  { 1, 100, 101, 0, 0 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 92, 93, 0, 0 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 92, 93, 0, 0 }, // 156 FADDo_FSUBo
  { 1, 95, 96, 0, 0 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 90, 91, 0, 0 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 0, 0, 0, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 92, 93, 0, 0 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 90, 91, 0, 0 }, // 170 LXVL_LXVLL
  { 1, 90, 91, 0, 0 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 90, 91, 0, 0 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 86, 87, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 86, 87, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 90, 91, 0, 0 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 86, 87, 0, 0 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 96, 97, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 98, 99, 0, 0 }, // 185 TLBSYNC
  { 1, 86, 87, 0, 0 }, // 186 SYNC
  { 1, 97, 98, 0, 0 }, // 187 LMW
  { 1, 90, 91, 0, 0 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 90, 91, 0, 0 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 90, 91, 0, 0 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 96, 97, 0, 0 }, // 197 TEND
  { 1, 103, 104, 0, 0 }, // 198 STBCX_STHCX_STWCX
  { 0, 0, 0, 0, 0 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 90, 91, 0, 0 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 96, 97, 0, 0 }, // 204 TCHECK
  { 1, 90, 91, 0, 0 }, // 205 LFIWAX
  { 1, 90, 91, 0, 0 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 90, 91, 0, 0 }, // 208 LFSX_LFS
  { 1, 90, 91, 0, 0 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 90, 91, 0, 0 }, // 211 LHAU_LHAU8
  { 1, 90, 91, 0, 0 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 90, 91, 0, 0 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 90, 91, 0, 0 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 90, 91, 0, 0 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 0, 0, 0, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 90, 91, 0, 0 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 97, 98, 0, 0 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 90, 91, 0, 0 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 90, 91, 0, 0 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 90, 91, 0, 0 }, // 224 STXVL_STXVLL
  { 1, 96, 97, 0, 0 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 87, 88, 0, 0 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 98, 99, 0, 0 }, // 229 MFTB_MFTB8
  { 1, 98, 99, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 89, 90, 0, 0 }, // 231 MFMSR
  { 1, 89, 90, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 96, 97, 0, 0 }, // 234 MTSPR_MTSPR8
  { 1, 91, 92, 0, 0 }, // 235 DIVW_DIVWU_MODSW
  { 1, 91, 92, 0, 0 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 91, 92, 0, 0 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 91, 92, 0, 0 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 89, 90, 0, 0 }, // 243 MTCRF_MTCRF8
  { 1, 87, 88, 0, 0 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 92, 93, 0, 0 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 89, 90, 0, 0 }, // 246 MCRFS
  { 1, 92, 93, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 99, 100, 0, 0 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 87, 88, 0, 0 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 87, 88, 0, 0 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 87, 88, 0, 0 }, // 253 SRAWIo_SRAWo
  { 1, 92, 93, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 89, 90, 0, 0 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 93, 94, 0, 0 }, // 258 FDIV
  { 1, 93, 94, 0, 0 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 93, 94, 0, 0 }, // 268 XSDIVDP
  { 1, 94, 95, 0, 0 }, // 269 FDIVS
  { 1, 94, 95, 0, 0 }, // 270 FDIVSo
  { 1, 94, 95, 0, 0 }, // 271 XSDIVSP
  { 1, 94, 95, 0, 0 }, // 272 XVDIVSP
  { 1, 93, 94, 0, 0 }, // 273 XVDIVDP
  { 1, 90, 91, 0, 0 }, // 274 LFSU
  { 1, 90, 91, 0, 0 }, // 275 LFSUX
  { 1, 90, 91, 0, 0 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 90, 91, 0, 0 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 90, 91, 0, 0 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 90, 91, 0, 0 }, // 279 LBZU_LBZU8
  { 1, 90, 91, 0, 0 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 1, 90, 91, 0, 0 }, // 283 LFDU
  { 1, 90, 91, 0, 0 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 88, 89, 0, 0 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 88, 89, 0, 0 }, // 287 ADDPCIS
  { 1, 90, 91, 0, 0 }, // 288 LDAT_LWAT
  { 1, 90, 91, 0, 0 }, // 289 STDAT_STWAT
  { 1, 87, 88, 0, 0 }, // 290 BRINC
  { 0, 0, 0, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 0, 0, 0, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 90, 91, 0, 0 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 90, 91, 0, 0 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 88, 89, 0, 0 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 1, 96, 97, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 90, 91, 0, 0 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 90, 91, 0, 0 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 90, 91, 0, 0 }, // 300 LFDEPX
  { 1, 90, 91, 0, 0 }, // 301 STFDEPX
  { 1, 98, 99, 0, 0 }, // 302 MFSR_MFSRIN
  { 1, 96, 97, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 98, 99, 0, 0 }, // 304 MFDCR
  { 1, 96, 97, 0, 0 }, // 305 MTDCR
  { 1, 87, 88, 0, 0 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 89, 90, 0, 0 }, // 308 WRTEE_WRTEEI
  { 1, 86, 87, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 86, 87, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 105, 106, 0, 0 }, // 1 IIC_LdStSync
  { 1, 106, 107, 0, 0 }, // 2 IIC_IntSimple
  { 1, 106, 107, 0, 0 }, // 3 IIC_IntGeneral
  { 1, 107, 108, 0, 0 }, // 4 IIC_BrB
  { 1, 108, 109, 0, 0 }, // 5 IIC_VecFP
  { 1, 106, 107, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 109, 110, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 110, 111, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 110, 111, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 111, 112, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 112, 113, 0, 0 }, // 17 IIC_FPAddSub
  { 1, 113, 114, 0, 0 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 112, 113, 0, 0 }, // 20 IIC_FPCompare
  { 1, 112, 113, 0, 0 }, // 21 IIC_FPGeneral
  { 1, 114, 115, 0, 0 }, // 22 IIC_VecGeneral
  { 1, 115, 116, 0, 0 }, // 23 IIC_VecComplex
  { 1, 110, 111, 0, 0 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 116, 117, 0, 0 }, // 26 IIC_FPDivS
  { 1, 112, 113, 0, 0 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 110, 111, 0, 0 }, // 30 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 31 IIC_IntISEL
  { 1, 117, 118, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 118, 119, 0, 0 }, // 33 IIC_LdStLWARX
  { 1, 110, 111, 0, 0 }, // 34 IIC_LdStLoadUpd
  { 1, 110, 111, 0, 0 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 110, 111, 0, 0 }, // 39 IIC_LdStLFD
  { 1, 110, 111, 0, 0 }, // 40 IIC_LdStLFDU
  { 1, 110, 111, 0, 0 }, // 41 IIC_LdStLFDUX
  { 1, 110, 111, 0, 0 }, // 42 IIC_LdStLHA
  { 1, 110, 111, 0, 0 }, // 43 IIC_LdStLHAU
  { 1, 110, 111, 0, 0 }, // 44 IIC_LdStLHAUX
  { 1, 119, 120, 0, 0 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 109, 110, 0, 0 }, // 48 IIC_BrMCR
  { 1, 109, 110, 0, 0 }, // 49 IIC_BrMCRX
  { 1, 109, 110, 0, 0 }, // 50 IIC_SprMFCR
  { 1, 120, 121, 0, 0 }, // 51 IIC_SprMFSPR
  { 1, 121, 122, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 109, 110, 0, 0 }, // 53 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 1, 120, 121, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 109, 110, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 117, 118, 0, 0 }, // 59 IIC_SprMTSPR
  { 1, 121, 122, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 109, 110, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 1, 117, 118, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 122, 123, 0, 0 }, // 65 IIC_IntMulHW
  { 1, 123, 124, 0, 0 }, // 66 IIC_IntMulHWU
  { 1, 124, 125, 0, 0 }, // 67 IIC_IntMulLI
  { 1, 125, 126, 0, 0 }, // 68 IIC_VecPerm
  { 1, 110, 111, 0, 0 }, // 69 IIC_LdStSTFD
  { 1, 110, 111, 0, 0 }, // 70 IIC_LdStSTFDU
  { 1, 117, 118, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 106, 107, 0, 0 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 106, 107, 0, 0 }, // 82 IIC_IntShift
  { 1, 126, 127, 0, 0 }, // 83 IIC_LdStSTWCX
  { 1, 110, 111, 0, 0 }, // 84 IIC_LdStSTU
  { 1, 110, 111, 0, 0 }, // 85 IIC_LdStSTUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 127, 128, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 128, 129, 0, 0 }, // 94 IIC_IntTrapW
  { 1, 114, 115, 0, 0 }, // 95 IIC_VecFPCompare
  { 1, 114, 115, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 1, 108, 109, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 125, 126, 0, 0 }, // 98 XXSEL
  { 1, 117, 118, 0, 0 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 121, 122, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 1, 121, 122, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 106, 107, 0, 0 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 128, 129, 0, 0 }, // 104 TW_TWI
  { 1, 112, 113, 0, 0 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 1, 108, 109, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 1, 108, 109, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 112, 113, 0, 0 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 106, 107, 0, 0 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 114, 115, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 106, 107, 0, 0 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 106, 107, 0, 0 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 106, 107, 0, 0 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 109, 110, 0, 0 }, // 117 MCRF
  { 1, 109, 110, 0, 0 }, // 118 MCRXRX
  { 1, 108, 109, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 107, 108, 0, 0 }, // 120 RFEBB
  { 1, 117, 118, 0, 0 }, // 121 TBEGIN_TRECHKPT
  { 1, 110, 111, 0, 0 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 106, 107, 0, 0 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 0, 0, 0, 0, 0 }, // 126 MFOCRF_MFOCRF8
  { 1, 109, 110, 0, 0 }, // 127 MTOCRF_MTOCRF8
  { 1, 109, 110, 0, 0 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 106, 107, 0, 0 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 112, 113, 0, 0 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 106, 107, 0, 0 }, // 131 SRAW_SRAWI
  { 0, 0, 0, 0, 0 }, // 132 ISEL_ISEL8
  { 1, 108, 109, 0, 0 }, // 133 XSIEXPDP
  { 1, 117, 118, 0, 0 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 110, 111, 0, 0 }, // 135 MFVSCR
  { 1, 110, 111, 0, 0 }, // 136 MTVSCR
  { 1, 114, 115, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 114, 115, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 108, 109, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 112, 113, 0, 0 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 108, 109, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 114, 115, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 122, 123, 0, 0 }, // 144 MULHD_MULHW_MULLW
  { 1, 123, 124, 0, 0 }, // 145 MULHDU_MULHWU
  { 1, 124, 125, 0, 0 }, // 146 MULLI_MULLI8
  { 1, 112, 113, 0, 0 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 112, 113, 0, 0 }, // 148 FADD_FSUB
  { 1, 112, 113, 0, 0 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 1, 108, 109, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 112, 113, 0, 0 }, // 151 FSELDo_FSELSo
  { 1, 123, 124, 0, 0 }, // 152 MULHDUo_MULHWUo
  { 1, 122, 123, 0, 0 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 112, 113, 0, 0 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 112, 113, 0, 0 }, // 156 FADDo_FSUBo
  { 1, 112, 113, 0, 0 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 1, 108, 109, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 110, 111, 0, 0 }, // 159 LVSL_LVSR
  { 1, 125, 126, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 108, 109, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 114, 115, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 112, 113, 0, 0 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 108, 109, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 108, 109, 0, 0 }, // 165 BCDCTSQo
  { 1, 108, 109, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 108, 109, 0, 0 }, // 167 BCDCFSQo
  { 1, 108, 109, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 1, 108, 109, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 110, 111, 0, 0 }, // 170 LXVL_LXVLL
  { 1, 110, 111, 0, 0 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 110, 111, 0, 0 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 110, 111, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 110, 111, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 110, 111, 0, 0 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 118, 119, 0, 0 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 117, 118, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 127, 128, 0, 0 }, // 185 TLBSYNC
  { 1, 105, 106, 0, 0 }, // 186 SYNC
  { 1, 119, 120, 0, 0 }, // 187 LMW
  { 1, 110, 111, 0, 0 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 110, 111, 0, 0 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 110, 111, 0, 0 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 117, 118, 0, 0 }, // 197 TEND
  { 1, 126, 127, 0, 0 }, // 198 STBCX_STHCX_STWCX
  { 0, 0, 0, 0, 0 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 110, 111, 0, 0 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 117, 118, 0, 0 }, // 204 TCHECK
  { 1, 110, 111, 0, 0 }, // 205 LFIWAX
  { 1, 110, 111, 0, 0 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 110, 111, 0, 0 }, // 208 LFSX_LFS
  { 1, 110, 111, 0, 0 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 110, 111, 0, 0 }, // 211 LHAU_LHAU8
  { 1, 110, 111, 0, 0 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 110, 111, 0, 0 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 110, 111, 0, 0 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 110, 111, 0, 0 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 0, 0, 0, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 110, 111, 0, 0 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 119, 120, 0, 0 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 110, 111, 0, 0 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 110, 111, 0, 0 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 110, 111, 0, 0 }, // 224 STXVL_STXVLL
  { 1, 117, 118, 0, 0 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 106, 107, 0, 0 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 109, 110, 0, 0 }, // 229 MFTB_MFTB8
  { 1, 120, 121, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 109, 110, 0, 0 }, // 231 MFMSR
  { 1, 109, 110, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 117, 118, 0, 0 }, // 234 MTSPR_MTSPR8
  { 1, 111, 112, 0, 0 }, // 235 DIVW_DIVWU_MODSW
  { 1, 111, 112, 0, 0 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 111, 112, 0, 0 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 111, 112, 0, 0 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 109, 110, 0, 0 }, // 243 MTCRF_MTCRF8
  { 1, 106, 107, 0, 0 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 112, 113, 0, 0 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 109, 110, 0, 0 }, // 246 MCRFS
  { 1, 121, 122, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 121, 122, 0, 0 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 106, 107, 0, 0 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 106, 107, 0, 0 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 106, 107, 0, 0 }, // 253 SRAWIo_SRAWo
  { 1, 121, 122, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 109, 110, 0, 0 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 113, 114, 0, 0 }, // 258 FDIV
  { 1, 113, 114, 0, 0 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 113, 114, 0, 0 }, // 268 XSDIVDP
  { 1, 116, 117, 0, 0 }, // 269 FDIVS
  { 1, 116, 117, 0, 0 }, // 270 FDIVSo
  { 1, 116, 117, 0, 0 }, // 271 XSDIVSP
  { 1, 116, 117, 0, 0 }, // 272 XVDIVSP
  { 1, 113, 114, 0, 0 }, // 273 XVDIVDP
  { 1, 110, 111, 0, 0 }, // 274 LFSU
  { 1, 110, 111, 0, 0 }, // 275 LFSUX
  { 1, 110, 111, 0, 0 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 110, 111, 0, 0 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 110, 111, 0, 0 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 110, 111, 0, 0 }, // 279 LBZU_LBZU8
  { 1, 110, 111, 0, 0 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 1, 110, 111, 0, 0 }, // 283 LFDU
  { 1, 110, 111, 0, 0 }, // 284 LFDUX
  { 1, 108, 109, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 107, 108, 0, 0 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 107, 108, 0, 0 }, // 287 ADDPCIS
  { 1, 110, 111, 0, 0 }, // 288 LDAT_LWAT
  { 1, 110, 111, 0, 0 }, // 289 STDAT_STWAT
  { 1, 106, 107, 0, 0 }, // 290 BRINC
  { 1, 114, 115, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 115, 116, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 110, 111, 0, 0 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 110, 111, 0, 0 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 107, 108, 0, 0 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 1, 117, 118, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 110, 111, 0, 0 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 110, 111, 0, 0 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 110, 111, 0, 0 }, // 300 LFDEPX
  { 1, 110, 111, 0, 0 }, // 301 STFDEPX
  { 1, 120, 121, 0, 0 }, // 302 MFSR_MFSRIN
  { 1, 117, 118, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 120, 121, 0, 0 }, // 304 MFDCR
  { 1, 117, 118, 0, 0 }, // 305 MTDCR
  { 1, 106, 107, 0, 0 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 109, 110, 0, 0 }, // 308 WRTEE_WRTEEI
  { 1, 105, 106, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 110, 111, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 129, 130, 0, 0 }, // 1 IIC_LdStSync
  { 1, 130, 131, 0, 0 }, // 2 IIC_IntSimple
  { 1, 130, 131, 0, 0 }, // 3 IIC_IntGeneral
  { 1, 131, 132, 0, 0 }, // 4 IIC_BrB
  { 1, 132, 133, 0, 0 }, // 5 IIC_VecFP
  { 1, 130, 131, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 133, 134, 0, 0 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 134, 135, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 134, 135, 0, 0 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 135, 136, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 136, 137, 0, 0 }, // 17 IIC_FPAddSub
  { 1, 137, 138, 0, 0 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 136, 137, 0, 0 }, // 20 IIC_FPCompare
  { 1, 136, 137, 0, 0 }, // 21 IIC_FPGeneral
  { 1, 138, 139, 0, 0 }, // 22 IIC_VecGeneral
  { 1, 139, 140, 0, 0 }, // 23 IIC_VecComplex
  { 1, 134, 135, 0, 0 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 140, 141, 0, 0 }, // 26 IIC_FPDivS
  { 1, 136, 137, 0, 0 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 141, 142, 0, 0 }, // 30 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 31 IIC_IntISEL
  { 1, 142, 143, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 134, 135, 0, 0 }, // 33 IIC_LdStLWARX
  { 1, 134, 135, 0, 0 }, // 34 IIC_LdStLoadUpd
  { 1, 134, 135, 0, 0 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 143, 144, 0, 0 }, // 39 IIC_LdStLFD
  { 1, 143, 144, 0, 0 }, // 40 IIC_LdStLFDU
  { 1, 143, 144, 0, 0 }, // 41 IIC_LdStLFDUX
  { 1, 134, 135, 0, 0 }, // 42 IIC_LdStLHA
  { 1, 134, 135, 0, 0 }, // 43 IIC_LdStLHAU
  { 1, 134, 135, 0, 0 }, // 44 IIC_LdStLHAUX
  { 1, 144, 145, 0, 0 }, // 45 IIC_LdStLMW
  { 1, 134, 135, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 133, 134, 0, 0 }, // 48 IIC_BrMCR
  { 1, 133, 134, 0, 0 }, // 49 IIC_BrMCRX
  { 1, 133, 134, 0, 0 }, // 50 IIC_SprMFCR
  { 1, 145, 146, 0, 0 }, // 51 IIC_SprMFSPR
  { 1, 136, 137, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 141, 142, 0, 0 }, // 53 IIC_SprMFMSR
  { 0, 0, 0, 0, 0 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 1, 145, 146, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 146, 147, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 133, 134, 0, 0 }, // 59 IIC_SprMTSPR
  { 1, 136, 137, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 133, 134, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 1, 133, 134, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 145, 146, 0, 0 }, // 65 IIC_IntMulHW
  { 1, 145, 146, 0, 0 }, // 66 IIC_IntMulHWU
  { 1, 141, 142, 0, 0 }, // 67 IIC_IntMulLI
  { 1, 147, 148, 0, 0 }, // 68 IIC_VecPerm
  { 1, 134, 135, 0, 0 }, // 69 IIC_LdStSTFD
  { 1, 134, 135, 0, 0 }, // 70 IIC_LdStSTFDU
  { 1, 130, 131, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 130, 131, 0, 0 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 148, 149, 0, 0 }, // 82 IIC_IntShift
  { 1, 134, 135, 0, 0 }, // 83 IIC_LdStSTWCX
  { 1, 134, 135, 0, 0 }, // 84 IIC_LdStSTU
  { 1, 134, 135, 0, 0 }, // 85 IIC_LdStSTUX
  { 1, 134, 135, 0, 0 }, // 86 IIC_LdStSTD
  { 1, 134, 135, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 134, 135, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 148, 149, 0, 0 }, // 94 IIC_IntTrapW
  { 1, 149, 150, 0, 0 }, // 95 IIC_VecFPCompare
  { 1, 138, 139, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 1, 132, 133, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 147, 148, 0, 0 }, // 98 XXSEL
  { 1, 133, 134, 0, 0 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 136, 137, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 1, 136, 137, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 130, 131, 0, 0 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 148, 149, 0, 0 }, // 104 TW_TWI
  { 1, 136, 137, 0, 0 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 1, 132, 133, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 1, 132, 133, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 136, 137, 0, 0 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 130, 131, 0, 0 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 138, 139, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 130, 131, 0, 0 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 130, 131, 0, 0 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 130, 131, 0, 0 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 133, 134, 0, 0 }, // 117 MCRF
  { 1, 133, 134, 0, 0 }, // 118 MCRXRX
  { 1, 132, 133, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 131, 132, 0, 0 }, // 120 RFEBB
  { 1, 133, 134, 0, 0 }, // 121 TBEGIN_TRECHKPT
  { 1, 134, 135, 0, 0 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 130, 131, 0, 0 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 0, 0, 0, 0, 0 }, // 126 MFOCRF_MFOCRF8
  { 1, 133, 134, 0, 0 }, // 127 MTOCRF_MTOCRF8
  { 1, 133, 134, 0, 0 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 130, 131, 0, 0 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 136, 137, 0, 0 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 148, 149, 0, 0 }, // 131 SRAW_SRAWI
  { 0, 0, 0, 0, 0 }, // 132 ISEL_ISEL8
  { 1, 132, 133, 0, 0 }, // 133 XSIEXPDP
  { 1, 133, 134, 0, 0 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 134, 135, 0, 0 }, // 135 MFVSCR
  { 1, 134, 135, 0, 0 }, // 136 MTVSCR
  { 1, 149, 150, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 138, 139, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 132, 133, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 136, 137, 0, 0 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 132, 133, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 138, 139, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 145, 146, 0, 0 }, // 144 MULHD_MULHW_MULLW
  { 1, 145, 146, 0, 0 }, // 145 MULHDU_MULHWU
  { 1, 141, 142, 0, 0 }, // 146 MULLI_MULLI8
  { 1, 136, 137, 0, 0 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 136, 137, 0, 0 }, // 148 FADD_FSUB
  { 1, 136, 137, 0, 0 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 1, 132, 133, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 136, 137, 0, 0 }, // 151 FSELDo_FSELSo
  { 1, 145, 146, 0, 0 }, // 152 MULHDUo_MULHWUo
  { 1, 145, 146, 0, 0 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 136, 137, 0, 0 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 136, 137, 0, 0 }, // 156 FADDo_FSUBo
  { 1, 136, 137, 0, 0 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 1, 132, 133, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 134, 135, 0, 0 }, // 159 LVSL_LVSR
  { 1, 147, 148, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 132, 133, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 138, 139, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 136, 137, 0, 0 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 132, 133, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 132, 133, 0, 0 }, // 165 BCDCTSQo
  { 1, 132, 133, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 132, 133, 0, 0 }, // 167 BCDCFSQo
  { 1, 132, 133, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 1, 132, 133, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 134, 135, 0, 0 }, // 170 LXVL_LXVLL
  { 1, 134, 135, 0, 0 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 143, 144, 0, 0 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 134, 135, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 141, 142, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 134, 135, 0, 0 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 134, 135, 0, 0 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 142, 143, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 134, 135, 0, 0 }, // 185 TLBSYNC
  { 1, 129, 130, 0, 0 }, // 186 SYNC
  { 1, 144, 145, 0, 0 }, // 187 LMW
  { 1, 143, 144, 0, 0 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 134, 135, 0, 0 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 134, 135, 0, 0 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 133, 134, 0, 0 }, // 197 TEND
  { 1, 134, 135, 0, 0 }, // 198 STBCX_STHCX_STWCX
  { 1, 134, 135, 0, 0 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 134, 135, 0, 0 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 1, 134, 135, 0, 0 }, // 203 LWA_LWA_32
  { 1, 133, 134, 0, 0 }, // 204 TCHECK
  { 1, 143, 144, 0, 0 }, // 205 LFIWAX
  { 1, 143, 144, 0, 0 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 143, 144, 0, 0 }, // 208 LFSX_LFS
  { 1, 143, 144, 0, 0 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 134, 135, 0, 0 }, // 211 LHAU_LHAU8
  { 1, 134, 135, 0, 0 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 143, 144, 0, 0 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 134, 135, 0, 0 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 134, 135, 0, 0 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 134, 135, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 134, 135, 0, 0 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 144, 145, 0, 0 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 134, 135, 0, 0 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 134, 135, 0, 0 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 134, 135, 0, 0 }, // 224 STXVL_STXVLL
  { 1, 133, 134, 0, 0 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 130, 131, 0, 0 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 146, 147, 0, 0 }, // 229 MFTB_MFTB8
  { 1, 145, 146, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 141, 142, 0, 0 }, // 231 MFMSR
  { 1, 133, 134, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 133, 134, 0, 0 }, // 234 MTSPR_MTSPR8
  { 1, 135, 136, 0, 0 }, // 235 DIVW_DIVWU_MODSW
  { 1, 135, 136, 0, 0 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 135, 136, 0, 0 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 135, 136, 0, 0 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 133, 134, 0, 0 }, // 243 MTCRF_MTCRF8
  { 1, 130, 131, 0, 0 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 136, 137, 0, 0 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 133, 134, 0, 0 }, // 246 MCRFS
  { 1, 136, 137, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 136, 137, 0, 0 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 130, 131, 0, 0 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 130, 131, 0, 0 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 148, 149, 0, 0 }, // 253 SRAWIo_SRAWo
  { 1, 136, 137, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 133, 134, 0, 0 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 137, 138, 0, 0 }, // 258 FDIV
  { 1, 137, 138, 0, 0 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 137, 138, 0, 0 }, // 268 XSDIVDP
  { 1, 140, 141, 0, 0 }, // 269 FDIVS
  { 1, 140, 141, 0, 0 }, // 270 FDIVSo
  { 1, 140, 141, 0, 0 }, // 271 XSDIVSP
  { 1, 140, 141, 0, 0 }, // 272 XVDIVSP
  { 1, 137, 138, 0, 0 }, // 273 XVDIVDP
  { 1, 143, 144, 0, 0 }, // 274 LFSU
  { 1, 143, 144, 0, 0 }, // 275 LFSUX
  { 1, 134, 135, 0, 0 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 134, 135, 0, 0 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 134, 135, 0, 0 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 134, 135, 0, 0 }, // 279 LBZU_LBZU8
  { 1, 134, 135, 0, 0 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 1, 143, 144, 0, 0 }, // 283 LFDU
  { 1, 143, 144, 0, 0 }, // 284 LFDUX
  { 1, 132, 133, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 131, 132, 0, 0 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 131, 132, 0, 0 }, // 287 ADDPCIS
  { 1, 134, 135, 0, 0 }, // 288 LDAT_LWAT
  { 1, 134, 135, 0, 0 }, // 289 STDAT_STWAT
  { 1, 130, 131, 0, 0 }, // 290 BRINC
  { 1, 138, 139, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 139, 140, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 134, 135, 0, 0 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 134, 135, 0, 0 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 131, 132, 0, 0 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 1, 130, 131, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 134, 135, 0, 0 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 134, 135, 0, 0 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 143, 144, 0, 0 }, // 300 LFDEPX
  { 1, 134, 135, 0, 0 }, // 301 STFDEPX
  { 1, 145, 146, 0, 0 }, // 302 MFSR_MFSRIN
  { 1, 133, 134, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 145, 146, 0, 0 }, // 304 MFDCR
  { 1, 133, 134, 0, 0 }, // 305 MTDCR
  { 1, 130, 131, 0, 0 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 133, 134, 0, 0 }, // 308 WRTEE_WRTEEI
  { 1, 129, 130, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 134, 135, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 150, 151, 0, 0 }, // 1 IIC_LdStSync
  { 1, 151, 152, 0, 0 }, // 2 IIC_IntSimple
  { 1, 151, 152, 0, 0 }, // 3 IIC_IntGeneral
  { 1, 152, 153, 0, 0 }, // 4 IIC_BrB
  { 1, 153, 154, 0, 0 }, // 5 IIC_VecFP
  { 1, 154, 155, 0, 0 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 155, 156, 0, 0 }, // 10 IIC_BrCR
  { 1, 156, 157, 0, 0 }, // 11 IIC_LdStLD
  { 1, 156, 157, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 156, 157, 0, 0 }, // 13 IIC_LdStLoad
  { 1, 157, 158, 0, 0 }, // 14 IIC_IntDivD
  { 1, 158, 159, 0, 0 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 159, 160, 0, 0 }, // 17 IIC_FPAddSub
  { 1, 160, 161, 0, 0 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 161, 162, 0, 0 }, // 20 IIC_FPCompare
  { 1, 159, 160, 0, 0 }, // 21 IIC_FPGeneral
  { 1, 162, 163, 0, 0 }, // 22 IIC_VecGeneral
  { 1, 163, 164, 0, 0 }, // 23 IIC_VecComplex
  { 1, 156, 157, 0, 0 }, // 24 IIC_LdStStore
  { 1, 151, 152, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 160, 161, 0, 0 }, // 26 IIC_FPDivS
  { 1, 159, 160, 0, 0 }, // 27 IIC_FPFused
  { 1, 164, 165, 0, 0 }, // 28 IIC_FPSqrtD
  { 1, 164, 165, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 165, 166, 0, 0 }, // 30 IIC_LdStICBI
  { 0, 0, 0, 0, 0 }, // 31 IIC_IntISEL
  { 1, 165, 166, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 166, 167, 0, 0 }, // 33 IIC_LdStLWARX
  { 1, 156, 157, 0, 0 }, // 34 IIC_LdStLoadUpd
  { 1, 156, 157, 0, 0 }, // 35 IIC_LdStLoadUpdX
  { 1, 166, 167, 0, 0 }, // 36 IIC_LdStLDARX
  { 1, 156, 157, 0, 0 }, // 37 IIC_LdStLDU
  { 1, 156, 157, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 156, 157, 0, 0 }, // 39 IIC_LdStLFD
  { 1, 167, 168, 0, 0 }, // 40 IIC_LdStLFDU
  { 1, 167, 168, 0, 0 }, // 41 IIC_LdStLFDUX
  { 1, 167, 168, 0, 0 }, // 42 IIC_LdStLHA
  { 1, 167, 168, 0, 0 }, // 43 IIC_LdStLHAU
  { 1, 167, 168, 0, 0 }, // 44 IIC_LdStLHAUX
  { 1, 168, 169, 0, 0 }, // 45 IIC_LdStLMW
  { 1, 167, 168, 0, 0 }, // 46 IIC_LdStLWA
  { 1, 169, 170, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 170, 171, 0, 0 }, // 48 IIC_BrMCR
  { 1, 171, 172, 0, 0 }, // 49 IIC_BrMCRX
  { 1, 172, 173, 0, 0 }, // 50 IIC_SprMFCR
  { 1, 173, 174, 0, 0 }, // 51 IIC_SprMFSPR
  { 1, 174, 175, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 173, 174, 0, 0 }, // 53 IIC_SprMFMSR
  { 1, 172, 173, 0, 0 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 1, 156, 157, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 175, 176, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 176, 177, 0, 0 }, // 59 IIC_SprMTSPR
  { 1, 159, 160, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 156, 157, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 1, 156, 157, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 177, 178, 0, 0 }, // 65 IIC_IntMulHW
  { 1, 177, 178, 0, 0 }, // 66 IIC_IntMulHWU
  { 1, 178, 179, 0, 0 }, // 67 IIC_IntMulLI
  { 1, 179, 180, 0, 0 }, // 68 IIC_VecPerm
  { 1, 180, 181, 0, 0 }, // 69 IIC_LdStSTFD
  { 1, 180, 181, 0, 0 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 1, 181, 182, 0, 0 }, // 72 IIC_IntRFID
  { 1, 151, 152, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 178, 179, 0, 0 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 151, 152, 0, 0 }, // 82 IIC_IntShift
  { 1, 166, 167, 0, 0 }, // 83 IIC_LdStSTWCX
  { 1, 156, 157, 0, 0 }, // 84 IIC_LdStSTU
  { 1, 156, 157, 0, 0 }, // 85 IIC_LdStSTUX
  { 1, 156, 157, 0, 0 }, // 86 IIC_LdStSTD
  { 1, 166, 167, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 1, 182, 183, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 156, 157, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 182, 183, 0, 0 }, // 94 IIC_IntTrapW
  { 1, 183, 184, 0, 0 }, // 95 IIC_VecFPCompare
  { 1, 162, 163, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 1, 153, 154, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 179, 180, 0, 0 }, // 98 XXSEL
  { 1, 176, 177, 0, 0 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 159, 160, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 1, 174, 175, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 154, 155, 0, 0 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 1, 182, 183, 0, 0 }, // 103 TD_TDI
  { 1, 182, 183, 0, 0 }, // 104 TW_TWI
  { 1, 161, 162, 0, 0 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 1, 153, 154, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 1, 153, 154, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 161, 162, 0, 0 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 151, 152, 0, 0 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 1, 151, 152, 0, 0 }, // 110 SLD_SRD_SRAD
  { 1, 151, 152, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 162, 163, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 154, 155, 0, 0 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 151, 152, 0, 0 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 151, 152, 0, 0 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 170, 171, 0, 0 }, // 117 MCRF
  { 1, 171, 172, 0, 0 }, // 118 MCRXRX
  { 1, 153, 154, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 152, 153, 0, 0 }, // 120 RFEBB
  { 1, 176, 177, 0, 0 }, // 121 TBEGIN_TRECHKPT
  { 1, 156, 157, 0, 0 }, // 122 WAIT
  { 1, 151, 152, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 178, 179, 0, 0 }, // 124 RLWIMI_RLWIMI8
  { 1, 151, 152, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 172, 173, 0, 0 }, // 126 MFOCRF_MFOCRF8
  { 1, 171, 172, 0, 0 }, // 127 MTOCRF_MTOCRF8
  { 1, 155, 156, 0, 0 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 151, 152, 0, 0 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 159, 160, 0, 0 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 151, 152, 0, 0 }, // 131 SRAW_SRAWI
  { 0, 0, 0, 0, 0 }, // 132 ISEL_ISEL8
  { 1, 153, 154, 0, 0 }, // 133 XSIEXPDP
  { 1, 176, 177, 0, 0 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 156, 157, 0, 0 }, // 135 MFVSCR
  { 1, 156, 157, 0, 0 }, // 136 MTVSCR
  { 1, 183, 184, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 162, 163, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 153, 154, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 161, 162, 0, 0 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 153, 154, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 162, 163, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 1, 169, 170, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 177, 178, 0, 0 }, // 144 MULHD_MULHW_MULLW
  { 1, 177, 178, 0, 0 }, // 145 MULHDU_MULHWU
  { 1, 178, 179, 0, 0 }, // 146 MULLI_MULLI8
  { 1, 159, 160, 0, 0 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 159, 160, 0, 0 }, // 148 FADD_FSUB
  { 1, 159, 160, 0, 0 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 1, 153, 154, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 159, 160, 0, 0 }, // 151 FSELDo_FSELSo
  { 1, 177, 178, 0, 0 }, // 152 MULHDUo_MULHWUo
  { 1, 177, 178, 0, 0 }, // 153 MULHDo_MULHWo_MULLWo
  { 1, 169, 170, 0, 0 }, // 154 MULLDo
  { 1, 159, 160, 0, 0 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 159, 160, 0, 0 }, // 156 FADDo_FSUBo
  { 1, 159, 160, 0, 0 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 1, 153, 154, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 156, 157, 0, 0 }, // 159 LVSL_LVSR
  { 1, 179, 180, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 153, 154, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 162, 163, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 161, 162, 0, 0 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 153, 154, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 153, 154, 0, 0 }, // 165 BCDCTSQo
  { 1, 153, 154, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 153, 154, 0, 0 }, // 167 BCDCFSQo
  { 1, 153, 154, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 1, 153, 154, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 156, 157, 0, 0 }, // 170 LXVL_LXVLL
  { 1, 156, 157, 0, 0 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 156, 157, 0, 0 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 156, 157, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 165, 166, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 156, 157, 0, 0 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 166, 167, 0, 0 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 1, 156, 157, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 1, 166, 167, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 165, 166, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 156, 157, 0, 0 }, // 185 TLBSYNC
  { 1, 150, 151, 0, 0 }, // 186 SYNC
  { 1, 168, 169, 0, 0 }, // 187 LMW
  { 1, 156, 157, 0, 0 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 156, 157, 0, 0 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 156, 157, 0, 0 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 176, 177, 0, 0 }, // 197 TEND
  { 1, 166, 167, 0, 0 }, // 198 STBCX_STHCX_STWCX
  { 1, 166, 167, 0, 0 }, // 199 STDCX
  { 1, 156, 157, 0, 0 }, // 200 LDMX
  { 1, 167, 168, 0, 0 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 1, 167, 168, 0, 0 }, // 203 LWA_LWA_32
  { 1, 176, 177, 0, 0 }, // 204 TCHECK
  { 1, 156, 157, 0, 0 }, // 205 LFIWAX
  { 1, 156, 157, 0, 0 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 156, 157, 0, 0 }, // 208 LFSX_LFS
  { 1, 156, 157, 0, 0 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 167, 168, 0, 0 }, // 211 LHAU_LHAU8
  { 1, 167, 168, 0, 0 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 156, 157, 0, 0 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 180, 181, 0, 0 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 156, 157, 0, 0 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 156, 157, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 156, 157, 0, 0 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 168, 169, 0, 0 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 156, 157, 0, 0 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 180, 181, 0, 0 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 156, 157, 0, 0 }, // 224 STXVL_STXVLL
  { 1, 176, 177, 0, 0 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 151, 152, 0, 0 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 175, 176, 0, 0 }, // 229 MFTB_MFTB8
  { 1, 173, 174, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 173, 174, 0, 0 }, // 231 MFMSR
  { 1, 156, 157, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 176, 177, 0, 0 }, // 234 MTSPR_MTSPR8
  { 1, 158, 159, 0, 0 }, // 235 DIVW_DIVWU_MODSW
  { 1, 158, 159, 0, 0 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 157, 158, 0, 0 }, // 237 DIVD_DIVDU
  { 1, 157, 158, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 158, 159, 0, 0 }, // 239 DIVWUo_DIVWo
  { 1, 157, 158, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 158, 159, 0, 0 }, // 241 DIVWEo_DIVWEUo
  { 1, 157, 158, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 171, 172, 0, 0 }, // 243 MTCRF_MTCRF8
  { 1, 151, 152, 0, 0 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 159, 160, 0, 0 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 170, 171, 0, 0 }, // 246 MCRFS
  { 1, 174, 175, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 159, 160, 0, 0 }, // 248 MTFSFb
  { 1, 151, 152, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 1, 151, 152, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 178, 179, 0, 0 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 151, 152, 0, 0 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 151, 152, 0, 0 }, // 253 SRAWIo_SRAWo
  { 1, 174, 175, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 172, 173, 0, 0 }, // 255 MFCR_MFCR8
  { 1, 151, 152, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 1, 151, 152, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 160, 161, 0, 0 }, // 258 FDIV
  { 1, 160, 161, 0, 0 }, // 259 FDIVo
  { 1, 164, 165, 0, 0 }, // 260 XSSQRTDP
  { 1, 164, 165, 0, 0 }, // 261 FSQRT
  { 1, 164, 165, 0, 0 }, // 262 XVSQRTDP
  { 1, 164, 165, 0, 0 }, // 263 XVSQRTSP
  { 1, 164, 165, 0, 0 }, // 264 FSQRTo
  { 1, 164, 165, 0, 0 }, // 265 XSSQRTSP
  { 1, 164, 165, 0, 0 }, // 266 FSQRTS
  { 1, 164, 165, 0, 0 }, // 267 FSQRTSo
  { 1, 160, 161, 0, 0 }, // 268 XSDIVDP
  { 1, 160, 161, 0, 0 }, // 269 FDIVS
  { 1, 160, 161, 0, 0 }, // 270 FDIVSo
  { 1, 160, 161, 0, 0 }, // 271 XSDIVSP
  { 1, 160, 161, 0, 0 }, // 272 XVDIVSP
  { 1, 160, 161, 0, 0 }, // 273 XVDIVDP
  { 1, 167, 168, 0, 0 }, // 274 LFSU
  { 1, 167, 168, 0, 0 }, // 275 LFSUX
  { 1, 180, 181, 0, 0 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 156, 157, 0, 0 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 156, 157, 0, 0 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 156, 157, 0, 0 }, // 279 LBZU_LBZU8
  { 1, 156, 157, 0, 0 }, // 280 LBZUX_LBZUX8
  { 1, 156, 157, 0, 0 }, // 281 LDU
  { 1, 156, 157, 0, 0 }, // 282 LDUX
  { 1, 167, 168, 0, 0 }, // 283 LFDU
  { 1, 167, 168, 0, 0 }, // 284 LFDUX
  { 1, 153, 154, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 152, 153, 0, 0 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 152, 153, 0, 0 }, // 287 ADDPCIS
  { 1, 156, 157, 0, 0 }, // 288 LDAT_LWAT
  { 1, 156, 157, 0, 0 }, // 289 STDAT_STWAT
  { 1, 151, 152, 0, 0 }, // 290 BRINC
  { 1, 162, 163, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 163, 164, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 156, 157, 0, 0 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 156, 157, 0, 0 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 152, 153, 0, 0 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 1, 181, 182, 0, 0 }, // 297 RFID
  { 1, 156, 157, 0, 0 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 156, 157, 0, 0 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 156, 157, 0, 0 }, // 300 LFDEPX
  { 1, 180, 181, 0, 0 }, // 301 STFDEPX
  { 1, 156, 157, 0, 0 }, // 302 MFSR_MFSRIN
  { 1, 156, 157, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 173, 174, 0, 0 }, // 304 MFDCR
  { 1, 176, 177, 0, 0 }, // 305 MTDCR
  { 1, 151, 152, 0, 0 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 156, 157, 0, 0 }, // 308 WRTEE_WRTEEI
  { 1, 150, 151, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 156, 157, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary PPCA2Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 184, 185, 539, 540 }, // 1 IIC_LdStSync
  { 1, 184, 185, 540, 543 }, // 2 IIC_IntSimple
  { 1, 184, 185, 543, 546 }, // 3 IIC_IntGeneral
  { 1, 184, 185, 546, 549 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 184, 185, 549, 552 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 184, 185, 552, 555 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 184, 185, 555, 558 }, // 12 IIC_LdStDCBF
  { 1, 184, 185, 558, 561 }, // 13 IIC_LdStLoad
  { 1, 184, 185, 561, 564 }, // 14 IIC_IntDivD
  { 1, 184, 185, 564, 567 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 185, 186, 567, 570 }, // 17 IIC_FPAddSub
  { 1, 185, 186, 570, 573 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 185, 186, 573, 576 }, // 20 IIC_FPCompare
  { 1, 185, 186, 576, 579 }, // 21 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 22 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 23 IIC_VecComplex
  { 1, 184, 185, 579, 582 }, // 24 IIC_LdStStore
  { 1, 184, 185, 582, 585 }, // 25 IIC_IntRotateDI
  { 1, 185, 186, 585, 588 }, // 26 IIC_FPDivS
  { 1, 185, 186, 588, 592 }, // 27 IIC_FPFused
  { 1, 185, 186, 592, 595 }, // 28 IIC_FPSqrtD
  { 1, 185, 186, 595, 598 }, // 29 IIC_FPSqrtS
  { 1, 184, 185, 598, 601 }, // 30 IIC_LdStICBI
  { 1, 184, 185, 601, 605 }, // 31 IIC_IntISEL
  { 1, 184, 185, 605, 606 }, // 32 IIC_SprISYNC
  { 1, 184, 185, 606, 609 }, // 33 IIC_LdStLWARX
  { 1, 184, 185, 609, 613 }, // 34 IIC_LdStLoadUpd
  { 1, 184, 185, 613, 617 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 1, 184, 185, 617, 620 }, // 37 IIC_LdStLDU
  { 1, 184, 185, 620, 623 }, // 38 IIC_LdStLDUX
  { 1, 184, 185, 623, 626 }, // 39 IIC_LdStLFD
  { 1, 184, 185, 626, 630 }, // 40 IIC_LdStLFDU
  { 1, 184, 185, 630, 634 }, // 41 IIC_LdStLFDUX
  { 1, 184, 185, 634, 637 }, // 42 IIC_LdStLHA
  { 1, 184, 185, 637, 641 }, // 43 IIC_LdStLHAU
  { 1, 184, 185, 641, 645 }, // 44 IIC_LdStLHAUX
  { 0, 0, 0, 0, 0 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 184, 185, 645, 648 }, // 48 IIC_BrMCR
  { 1, 184, 185, 648, 651 }, // 49 IIC_BrMCRX
  { 1, 184, 185, 651, 653 }, // 50 IIC_SprMFCR
  { 1, 184, 185, 653, 655 }, // 51 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 184, 185, 655, 657 }, // 53 IIC_SprMFMSR
  { 1, 184, 185, 657, 659 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 184, 185, 659, 661 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 184, 185, 661, 663 }, // 59 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 184, 185, 663, 665 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 184, 185, 665, 668 }, // 65 IIC_IntMulHW
  { 1, 184, 185, 668, 671 }, // 66 IIC_IntMulHWU
  { 1, 184, 185, 671, 674 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 1, 184, 185, 674, 677 }, // 69 IIC_LdStSTFD
  { 1, 184, 185, 677, 681 }, // 70 IIC_LdStSTFDU
  { 1, 184, 185, 681, 682 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 1, 184, 185, 682, 685 }, // 73 IIC_IntRotateD
  { 1, 184, 185, 685, 688 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 184, 185, 688, 691 }, // 82 IIC_IntShift
  { 1, 184, 185, 691, 694 }, // 83 IIC_LdStSTWCX
  { 1, 184, 185, 694, 698 }, // 84 IIC_LdStSTU
  { 1, 184, 185, 698, 702 }, // 85 IIC_LdStSTUX
  { 1, 184, 185, 702, 705 }, // 86 IIC_LdStSTD
  { 1, 184, 185, 705, 708 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 1, 184, 185, 708, 710 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 184, 185, 710, 712 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 184, 185, 712, 714 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 0, 0, 0, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 0, 0, 0, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 184, 185, 714, 717 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 1, 184, 185, 717, 719 }, // 103 TD_TDI
  { 1, 184, 185, 719, 721 }, // 104 TW_TWI
  { 1, 185, 186, 721, 724 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 185, 186, 724, 727 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 184, 185, 727, 730 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 1, 184, 185, 730, 733 }, // 110 SLD_SRD_SRAD
  { 1, 184, 185, 733, 736 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 0, 0, 0, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 184, 185, 736, 739 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 184, 185, 739, 742 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 184, 185, 742, 745 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 184, 185, 745, 748 }, // 117 MCRF
  { 1, 184, 185, 748, 751 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 184, 185, 751, 754 }, // 120 RFEBB
  { 1, 184, 185, 754, 756 }, // 121 TBEGIN_TRECHKPT
  { 1, 184, 185, 756, 759 }, // 122 WAIT
  { 1, 184, 185, 759, 762 }, // 123 RLDCL_RLDCR
  { 1, 184, 185, 762, 765 }, // 124 RLWIMI_RLWIMI8
  { 1, 184, 185, 765, 768 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 184, 185, 768, 770 }, // 126 MFOCRF_MFOCRF8
  { 1, 184, 185, 770, 773 }, // 127 MTOCRF_MTOCRF8
  { 1, 184, 185, 773, 776 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 184, 185, 776, 779 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 185, 186, 779, 782 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 184, 185, 782, 785 }, // 131 SRAW_SRAWI
  { 1, 184, 185, 785, 789 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 184, 185, 789, 791 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 184, 185, 791, 794 }, // 135 MFVSCR
  { 1, 184, 185, 794, 797 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 185, 186, 797, 800 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 184, 185, 800, 803 }, // 144 MULHD_MULHW_MULLW
  { 1, 184, 185, 803, 806 }, // 145 MULHDU_MULHWU
  { 1, 184, 185, 806, 809 }, // 146 MULLI_MULLI8
  { 1, 185, 186, 809, 812 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 185, 186, 812, 815 }, // 148 FADD_FSUB
  { 1, 185, 186, 815, 819 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 185, 186, 819, 822 }, // 151 FSELDo_FSELSo
  { 1, 184, 185, 822, 825 }, // 152 MULHDUo_MULHWUo
  { 1, 184, 185, 825, 828 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 185, 186, 828, 831 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 185, 186, 831, 834 }, // 156 FADDo_FSUBo
  { 1, 185, 186, 834, 838 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 184, 185, 838, 841 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 0, 0, 0, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 185, 186, 841, 844 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 184, 185, 844, 847 }, // 170 LXVL_LXVLL
  { 1, 184, 185, 847, 850 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 184, 185, 850, 853 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 184, 185, 853, 856 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 184, 185, 856, 859 }, // 177 ICBI_ICBIEP
  { 1, 184, 185, 859, 862 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 184, 185, 862, 865 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 1, 184, 185, 865, 866 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 0, 0, 0, 0, 0 }, // 185 TLBSYNC
  { 1, 184, 185, 866, 867 }, // 186 SYNC
  { 0, 0, 0, 0, 0 }, // 187 LMW
  { 1, 184, 185, 867, 870 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 184, 185, 870, 874 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 184, 185, 874, 878 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 184, 185, 878, 880 }, // 197 TEND
  { 1, 184, 185, 880, 883 }, // 198 STBCX_STHCX_STWCX
  { 1, 184, 185, 883, 886 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 184, 185, 886, 889 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 184, 185, 889, 891 }, // 204 TCHECK
  { 1, 184, 185, 891, 894 }, // 205 LFIWAX
  { 1, 184, 185, 894, 897 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 184, 185, 897, 900 }, // 208 LFSX_LFS
  { 1, 184, 185, 900, 903 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 184, 185, 903, 907 }, // 211 LHAU_LHAU8
  { 1, 184, 185, 907, 911 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 184, 185, 911, 914 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 184, 185, 914, 917 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 184, 185, 917, 920 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 184, 185, 920, 923 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 184, 185, 923, 926 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 0, 0, 0, 0, 0 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 184, 185, 926, 929 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 184, 185, 929, 932 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 184, 185, 932, 935 }, // 224 STXVL_STXVLL
  { 1, 184, 185, 935, 937 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 184, 185, 937, 940 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 1, 184, 185, 940, 942 }, // 229 MFTB_MFTB8
  { 1, 184, 185, 942, 944 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 184, 185, 944, 946 }, // 231 MFMSR
  { 1, 184, 185, 946, 948 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 184, 185, 948, 950 }, // 234 MTSPR_MTSPR8
  { 1, 184, 185, 950, 953 }, // 235 DIVW_DIVWU_MODSW
  { 1, 184, 185, 953, 956 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 184, 185, 956, 959 }, // 237 DIVD_DIVDU
  { 1, 184, 185, 959, 962 }, // 238 DIVDE_DIVDEU
  { 1, 184, 185, 962, 965 }, // 239 DIVWUo_DIVWo
  { 1, 184, 185, 965, 968 }, // 240 DIVDo_DIVDUo
  { 1, 184, 185, 968, 971 }, // 241 DIVWEo_DIVWEUo
  { 1, 184, 185, 971, 974 }, // 242 DIVDEo_DIVDEUo
  { 1, 184, 185, 974, 977 }, // 243 MTCRF_MTCRF8
  { 1, 184, 185, 977, 980 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 185, 186, 980, 983 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 184, 185, 983, 986 }, // 246 MCRFS
  { 0, 0, 0, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 0, 0, 0, 0, 0 }, // 248 MTFSFb
  { 1, 184, 185, 986, 989 }, // 249 RLDCLo_RLDCRo
  { 1, 184, 185, 989, 992 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 184, 185, 992, 995 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 184, 185, 995, 998 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 184, 185, 998, 1001 }, // 253 SRAWIo_SRAWo
  { 0, 0, 0, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 184, 185, 1001, 1003 }, // 255 MFCR_MFCR8
  { 1, 184, 185, 1003, 1006 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 1, 184, 185, 1006, 1009 }, // 257 SRADo_SLDo_SRDo
  { 1, 185, 186, 1009, 1012 }, // 258 FDIV
  { 1, 185, 186, 1012, 1015 }, // 259 FDIVo
  { 1, 185, 186, 1015, 1018 }, // 260 XSSQRTDP
  { 1, 185, 186, 1018, 1021 }, // 261 FSQRT
  { 1, 185, 186, 1021, 1024 }, // 262 XVSQRTDP
  { 1, 185, 186, 1024, 1027 }, // 263 XVSQRTSP
  { 1, 185, 186, 1027, 1030 }, // 264 FSQRTo
  { 1, 185, 186, 1030, 1033 }, // 265 XSSQRTSP
  { 1, 185, 186, 1033, 1036 }, // 266 FSQRTS
  { 1, 185, 186, 1036, 1039 }, // 267 FSQRTSo
  { 1, 185, 186, 1039, 1042 }, // 268 XSDIVDP
  { 1, 185, 186, 1042, 1045 }, // 269 FDIVS
  { 1, 185, 186, 1045, 1048 }, // 270 FDIVSo
  { 1, 185, 186, 1048, 1051 }, // 271 XSDIVSP
  { 1, 185, 186, 1051, 1054 }, // 272 XVDIVSP
  { 1, 185, 186, 1054, 1057 }, // 273 XVDIVDP
  { 1, 184, 185, 1057, 1061 }, // 274 LFSU
  { 1, 184, 185, 1061, 1065 }, // 275 LFSUX
  { 1, 184, 185, 1065, 1069 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 184, 185, 1069, 1073 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 184, 185, 1073, 1077 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 184, 185, 1077, 1081 }, // 279 LBZU_LBZU8
  { 1, 184, 185, 1081, 1085 }, // 280 LBZUX_LBZUX8
  { 1, 184, 185, 1085, 1088 }, // 281 LDU
  { 1, 184, 185, 1088, 1091 }, // 282 LDUX
  { 1, 184, 185, 1091, 1095 }, // 283 LFDU
  { 1, 184, 185, 1095, 1099 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 184, 185, 1099, 1102 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 184, 185, 1102, 1105 }, // 287 ADDPCIS
  { 1, 184, 185, 1105, 1108 }, // 288 LDAT_LWAT
  { 1, 184, 185, 1108, 1111 }, // 289 STDAT_STWAT
  { 1, 184, 185, 1111, 1114 }, // 290 BRINC
  { 0, 0, 0, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 0, 0, 0, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 184, 185, 1114, 1117 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 184, 185, 1117, 1120 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 184, 185, 1120, 1123 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 1, 184, 185, 1123, 1124 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 184, 185, 1124, 1127 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 184, 185, 1127, 1130 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 184, 185, 1130, 1133 }, // 300 LFDEPX
  { 1, 184, 185, 1133, 1136 }, // 301 STFDEPX
  { 0, 0, 0, 0, 0 }, // 302 MFSR_MFSRIN
  { 0, 0, 0, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 184, 185, 1136, 1138 }, // 304 MFDCR
  { 1, 184, 185, 1138, 1140 }, // 305 MTDCR
  { 1, 184, 185, 1140, 1143 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 184, 185, 1143, 1145 }, // 308 WRTEE_WRTEEI
  { 1, 184, 185, 1145, 1146 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 184, 185, 1146, 1149 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary PPCE500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 186, 188, 0, 0 }, // 1 IIC_LdStSync
  { 1, 188, 190, 1149, 1152 }, // 2 IIC_IntSimple
  { 1, 188, 190, 1152, 1155 }, // 3 IIC_IntGeneral
  { 1, 190, 192, 1155, 1157 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 188, 190, 1157, 1160 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 190, 192, 1160, 1163 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 186, 188, 1163, 1165 }, // 12 IIC_LdStDCBF
  { 1, 186, 188, 1165, 1167 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 192, 195, 1167, 1170 }, // 15 IIC_IntDivW
  { 1, 195, 197, 1170, 1173 }, // 16 IIC_FPDGeneral
  { 0, 0, 0, 0, 0 }, // 17 IIC_FPAddSub
  { 1, 197, 199, 1173, 1176 }, // 18 IIC_FPDivD
  { 1, 199, 201, 1176, 1179 }, // 19 IIC_FPSGeneral
  { 0, 0, 0, 0, 0 }, // 20 IIC_FPCompare
  { 0, 0, 0, 0, 0 }, // 21 IIC_FPGeneral
  { 1, 201, 203, 1179, 1182 }, // 22 IIC_VecGeneral
  { 1, 199, 201, 1182, 1185 }, // 23 IIC_VecComplex
  { 1, 186, 188, 1185, 1187 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 203, 205, 1187, 1190 }, // 26 IIC_FPDivS
  { 0, 0, 0, 0, 0 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 186, 188, 1190, 1192 }, // 30 IIC_LdStICBI
  { 1, 188, 190, 1192, 1196 }, // 31 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 205, 207, 1196, 1199 }, // 33 IIC_LdStLWARX
  { 2, 207, 210, 1199, 1201 }, // 34 IIC_LdStLoadUpd
  { 2, 207, 210, 1201, 1203 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 0, 0, 0, 0, 0 }, // 39 IIC_LdStLFD
  { 0, 0, 0, 0, 0 }, // 40 IIC_LdStLFDU
  { 0, 0, 0, 0, 0 }, // 41 IIC_LdStLFDUX
  { 1, 186, 188, 1203, 1205 }, // 42 IIC_LdStLHA
  { 1, 207, 210, 1205, 1207 }, // 43 IIC_LdStLHAU
  { 1, 207, 210, 1207, 1209 }, // 44 IIC_LdStLHAUX
  { 1, 186, 188, 1209, 1211 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 190, 192, 1211, 1213 }, // 48 IIC_BrMCR
  { 1, 188, 190, 1213, 1216 }, // 49 IIC_BrMCRX
  { 1, 210, 212, 1216, 1218 }, // 50 IIC_SprMFCR
  { 1, 188, 190, 1218, 1220 }, // 51 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 52 IIC_IntMFFS
  { 1, 212, 214, 1220, 1222 }, // 53 IIC_SprMFMSR
  { 1, 210, 212, 1222, 1224 }, // 54 IIC_SprMFCRF
  { 1, 212, 214, 1224, 1226 }, // 55 IIC_SprMFPMR
  { 1, 212, 214, 1226, 1228 }, // 56 IIC_SprMFSR
  { 1, 212, 214, 1228, 1230 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 188, 190, 1230, 1232 }, // 59 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntMTFSB0
  { 1, 214, 216, 1232, 1234 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 1, 201, 203, 1234, 1236 }, // 63 IIC_SprMTPMR
  { 1, 201, 203, 1236, 1238 }, // 64 IIC_SprMTSR
  { 1, 199, 201, 1238, 1241 }, // 65 IIC_IntMulHW
  { 1, 199, 201, 1241, 1244 }, // 66 IIC_IntMulHWU
  { 1, 199, 201, 1244, 1247 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 0, 0, 0, 0, 0 }, // 69 IIC_LdStSTFD
  { 0, 0, 0, 0, 0 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 188, 190, 1247, 1250 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 188, 190, 1250, 1253 }, // 82 IIC_IntShift
  { 1, 186, 188, 1253, 1255 }, // 83 IIC_LdStSTWCX
  { 2, 207, 210, 1255, 1257 }, // 84 IIC_LdStSTU
  { 2, 207, 210, 1257, 1259 }, // 85 IIC_LdStSTUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 216, 218, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 218, 220, 1259, 1261 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 1, 201, 203, 1261, 1264 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 188, 190, 1264, 1266 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 0, 0, 0, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 0, 0, 0, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 188, 190, 1266, 1269 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 218, 220, 1269, 1271 }, // 104 TW_TWI
  { 0, 0, 0, 0, 0 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 0, 0, 0, 0, 0 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 188, 190, 1271, 1274 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 201, 203, 1274, 1277 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 188, 190, 1277, 1280 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 188, 190, 1280, 1283 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 188, 190, 1283, 1286 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 190, 192, 1286, 1288 }, // 117 MCRF
  { 1, 188, 190, 1288, 1291 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 190, 192, 1291, 1293 }, // 120 RFEBB
  { 1, 188, 190, 1293, 1295 }, // 121 TBEGIN_TRECHKPT
  { 1, 186, 188, 1295, 1297 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 188, 190, 1297, 1300 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 210, 212, 1300, 1302 }, // 126 MFOCRF_MFOCRF8
  { 1, 188, 190, 1302, 1305 }, // 127 MTOCRF_MTOCRF8
  { 1, 190, 192, 1305, 1308 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 188, 190, 1308, 1311 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 0, 0, 0, 0, 0 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 188, 190, 1311, 1314 }, // 131 SRAW_SRAWI
  { 1, 188, 190, 1314, 1318 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 188, 190, 1318, 1320 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 186, 188, 1320, 1322 }, // 135 MFVSCR
  { 1, 186, 188, 1322, 1324 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 201, 203, 1324, 1327 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 0, 0, 0, 0, 0 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 201, 203, 1327, 1330 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 199, 201, 1330, 1333 }, // 144 MULHD_MULHW_MULLW
  { 1, 199, 201, 1333, 1336 }, // 145 MULHDU_MULHWU
  { 1, 199, 201, 1336, 1339 }, // 146 MULLI_MULLI8
  { 0, 0, 0, 0, 0 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 0, 0, 0, 0, 0 }, // 148 FADD_FSUB
  { 0, 0, 0, 0, 0 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 0, 0, 0, 0, 0 }, // 151 FSELDo_FSELSo
  { 1, 199, 201, 1339, 1342 }, // 152 MULHDUo_MULHWUo
  { 1, 199, 201, 1342, 1345 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 0, 0, 0, 0, 0 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 0, 0, 0, 0, 0 }, // 156 FADDo_FSUBo
  { 0, 0, 0, 0, 0 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 186, 188, 1345, 1347 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 201, 203, 1347, 1350 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 0, 0, 0, 0, 0 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 186, 188, 1350, 1352 }, // 170 LXVL_LXVLL
  { 1, 186, 188, 1352, 1354 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 0, 0, 0, 0, 0 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 186, 188, 1354, 1356 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 186, 188, 1356, 1358 }, // 177 ICBI_ICBIEP
  { 1, 186, 188, 1358, 1360 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 205, 207, 1360, 1363 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 0, 0, 0, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 216, 218, 0, 0 }, // 185 TLBSYNC
  { 1, 186, 188, 0, 0 }, // 186 SYNC
  { 1, 186, 188, 1363, 1365 }, // 187 LMW
  { 0, 0, 0, 0, 0 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 2, 207, 210, 1365, 1367 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 2, 207, 210, 1367, 1369 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 188, 190, 1369, 1371 }, // 197 TEND
  { 1, 186, 188, 1371, 1373 }, // 198 STBCX_STHCX_STWCX
  { 0, 0, 0, 0, 0 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 186, 188, 1373, 1375 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 188, 190, 1375, 1377 }, // 204 TCHECK
  { 0, 0, 0, 0, 0 }, // 205 LFIWAX
  { 0, 0, 0, 0, 0 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 0, 0, 0, 0, 0 }, // 208 LFSX_LFS
  { 0, 0, 0, 0, 0 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 207, 210, 1377, 1379 }, // 211 LHAU_LHAU8
  { 1, 207, 210, 1379, 1381 }, // 212 LHAUX_LHAUX8_LWAUX
  { 0, 0, 0, 0, 0 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 0, 0, 0, 0, 0 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 186, 188, 1381, 1383 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 0, 0, 0, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 186, 188, 1383, 1385 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 186, 188, 1385, 1387 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 186, 188, 1387, 1389 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 0, 0, 0, 0, 0 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 186, 188, 1389, 1391 }, // 224 STXVL_STXVLL
  { 1, 188, 190, 1391, 1393 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 188, 190, 1393, 1396 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 1, 212, 214, 1396, 1398 }, // 227 MFPMR
  { 1, 201, 203, 1398, 1400 }, // 228 MTPMR
  { 1, 212, 214, 1400, 1402 }, // 229 MFTB_MFTB8
  { 1, 188, 190, 1402, 1404 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 212, 214, 1404, 1406 }, // 231 MFMSR
  { 1, 214, 216, 1406, 1408 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 188, 190, 1408, 1410 }, // 234 MTSPR_MTSPR8
  { 1, 192, 195, 1410, 1413 }, // 235 DIVW_DIVWU_MODSW
  { 1, 192, 195, 1413, 1416 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 192, 195, 1416, 1419 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 192, 195, 1419, 1422 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 188, 190, 1422, 1425 }, // 243 MTCRF_MTCRF8
  { 1, 188, 190, 1425, 1428 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 0, 0, 0, 0, 0 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 190, 192, 1428, 1430 }, // 246 MCRFS
  { 0, 0, 0, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 0, 0, 0, 0, 0 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 188, 190, 1430, 1433 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 188, 190, 1433, 1436 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 188, 190, 1436, 1439 }, // 253 SRAWIo_SRAWo
  { 0, 0, 0, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 210, 212, 1439, 1441 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 197, 199, 1441, 1444 }, // 258 FDIV
  { 1, 197, 199, 1444, 1447 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 197, 199, 1447, 1450 }, // 268 XSDIVDP
  { 1, 203, 205, 1450, 1453 }, // 269 FDIVS
  { 1, 203, 205, 1453, 1456 }, // 270 FDIVSo
  { 1, 203, 205, 1456, 1459 }, // 271 XSDIVSP
  { 1, 203, 205, 1459, 1462 }, // 272 XVDIVSP
  { 1, 197, 199, 1462, 1465 }, // 273 XVDIVDP
  { 0, 0, 0, 0, 0 }, // 274 LFSU
  { 0, 0, 0, 0, 0 }, // 275 LFSUX
  { 0, 0, 0, 0, 0 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 2, 207, 210, 1465, 1467 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 2, 207, 210, 1467, 1469 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 2, 207, 210, 1469, 1471 }, // 279 LBZU_LBZU8
  { 2, 207, 210, 1471, 1473 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 0, 0, 0, 0, 0 }, // 283 LFDU
  { 0, 0, 0, 0, 0 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 190, 192, 1473, 1475 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 190, 192, 1475, 1477 }, // 287 ADDPCIS
  { 1, 186, 188, 1477, 1479 }, // 288 LDAT_LWAT
  { 1, 186, 188, 1479, 1481 }, // 289 STDAT_STWAT
  { 1, 188, 190, 1481, 1484 }, // 290 BRINC
  { 1, 201, 203, 1484, 1487 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 199, 201, 1487, 1490 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 186, 188, 1490, 1492 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 186, 188, 1492, 1494 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 190, 192, 1494, 1496 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 186, 188, 1496, 1498 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 186, 188, 1498, 1500 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 0, 0, 0, 0, 0 }, // 300 LFDEPX
  { 0, 0, 0, 0, 0 }, // 301 STFDEPX
  { 1, 212, 214, 1500, 1502 }, // 302 MFSR_MFSRIN
  { 1, 201, 203, 1502, 1504 }, // 303 MTSR_MTSRIN
  { 1, 188, 190, 1504, 1506 }, // 304 MFDCR
  { 1, 188, 190, 1506, 1508 }, // 305 MTDCR
  { 1, 188, 190, 1508, 1511 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 214, 216, 1511, 1513 }, // 308 WRTEE_WRTEEI
  { 1, 186, 188, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 186, 188, 1513, 1515 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary PPCE500mcItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 220, 222, 0, 0 }, // 1 IIC_LdStSync
  { 1, 222, 224, 1515, 1518 }, // 2 IIC_IntSimple
  { 1, 222, 224, 1518, 1521 }, // 3 IIC_IntGeneral
  { 1, 224, 226, 1521, 1523 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 222, 224, 1523, 1526 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 224, 226, 1526, 1529 }, // 10 IIC_BrCR
  { 0, 0, 0, 0, 0 }, // 11 IIC_LdStLD
  { 1, 220, 222, 1529, 1531 }, // 12 IIC_LdStDCBF
  { 1, 220, 222, 1531, 1533 }, // 13 IIC_LdStLoad
  { 0, 0, 0, 0, 0 }, // 14 IIC_IntDivD
  { 1, 226, 229, 1533, 1536 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 229, 231, 1536, 1539 }, // 17 IIC_FPAddSub
  { 1, 231, 233, 1539, 1542 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 233, 235, 1542, 1545 }, // 20 IIC_FPCompare
  { 1, 233, 235, 1545, 1548 }, // 21 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 22 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 23 IIC_VecComplex
  { 1, 220, 222, 1548, 1550 }, // 24 IIC_LdStStore
  { 0, 0, 0, 0, 0 }, // 25 IIC_IntRotateDI
  { 1, 235, 237, 1550, 1553 }, // 26 IIC_FPDivS
  { 1, 229, 231, 1553, 1557 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 220, 222, 1557, 1559 }, // 30 IIC_LdStICBI
  { 1, 222, 224, 1559, 1563 }, // 31 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 237, 239, 1563, 1566 }, // 33 IIC_LdStLWARX
  { 2, 239, 242, 1566, 1568 }, // 34 IIC_LdStLoadUpd
  { 2, 239, 242, 1568, 1570 }, // 35 IIC_LdStLoadUpdX
  { 0, 0, 0, 0, 0 }, // 36 IIC_LdStLDARX
  { 0, 0, 0, 0, 0 }, // 37 IIC_LdStLDU
  { 0, 0, 0, 0, 0 }, // 38 IIC_LdStLDUX
  { 1, 220, 222, 1570, 1573 }, // 39 IIC_LdStLFD
  { 2, 239, 242, 1573, 1576 }, // 40 IIC_LdStLFDU
  { 2, 239, 242, 1576, 1579 }, // 41 IIC_LdStLFDUX
  { 1, 220, 222, 1579, 1581 }, // 42 IIC_LdStLHA
  { 1, 239, 242, 1581, 1583 }, // 43 IIC_LdStLHAU
  { 1, 239, 242, 1583, 1585 }, // 44 IIC_LdStLHAUX
  { 1, 220, 222, 1585, 1587 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 0, 0, 0, 0, 0 }, // 47 IIC_IntMulHD
  { 1, 224, 226, 1587, 1589 }, // 48 IIC_BrMCR
  { 1, 222, 224, 1589, 1592 }, // 49 IIC_BrMCRX
  { 1, 242, 244, 1592, 1594 }, // 50 IIC_SprMFCR
  { 1, 222, 224, 1594, 1596 }, // 51 IIC_SprMFSPR
  { 1, 244, 246, 1596, 1597 }, // 52 IIC_IntMFFS
  { 1, 246, 248, 1597, 1599 }, // 53 IIC_SprMFMSR
  { 1, 242, 244, 1599, 1601 }, // 54 IIC_SprMFCRF
  { 1, 246, 248, 1601, 1603 }, // 55 IIC_SprMFPMR
  { 1, 246, 248, 1603, 1605 }, // 56 IIC_SprMFSR
  { 1, 246, 248, 1605, 1607 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 222, 224, 1607, 1609 }, // 59 IIC_SprMTSPR
  { 1, 244, 246, 1609, 1612 }, // 60 IIC_IntMTFSB0
  { 1, 248, 250, 1612, 1614 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 1, 250, 252, 1614, 1616 }, // 63 IIC_SprMTPMR
  { 1, 250, 252, 1616, 1618 }, // 64 IIC_SprMTSR
  { 1, 252, 254, 1618, 1621 }, // 65 IIC_IntMulHW
  { 1, 252, 254, 1621, 1624 }, // 66 IIC_IntMulHWU
  { 1, 252, 254, 1624, 1627 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 1, 220, 222, 1627, 1630 }, // 69 IIC_LdStSTFD
  { 2, 239, 242, 1630, 1633 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 0, 0, 0, 0, 0 }, // 73 IIC_IntRotateD
  { 1, 222, 224, 1633, 1636 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 222, 224, 1636, 1639 }, // 82 IIC_IntShift
  { 1, 220, 222, 1639, 1641 }, // 83 IIC_LdStSTWCX
  { 2, 239, 242, 1641, 1643 }, // 84 IIC_LdStSTU
  { 2, 239, 242, 1643, 1645 }, // 85 IIC_LdStSTUX
  { 0, 0, 0, 0, 0 }, // 86 IIC_LdStSTD
  { 0, 0, 0, 0, 0 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 254, 256, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 256, 258, 1645, 1647 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 222, 224, 1647, 1649 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 244, 246, 1649, 1652 }, // 100 MTFSB0_MTFSB1
  { 1, 244, 246, 1652, 1653 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 222, 224, 1653, 1656 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 256, 258, 1656, 1658 }, // 104 TW_TWI
  { 1, 233, 235, 1658, 1661 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 233, 235, 1661, 1664 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 222, 224, 1664, 1667 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 0, 0, 0, 0, 0 }, // 110 SLD_SRD_SRAD
  { 0, 0, 0, 0, 0 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 0, 0, 0, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 222, 224, 1667, 1670 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 222, 224, 1670, 1673 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 222, 224, 1673, 1676 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 224, 226, 1676, 1678 }, // 117 MCRF
  { 1, 222, 224, 1678, 1681 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 224, 226, 1681, 1683 }, // 120 RFEBB
  { 1, 222, 224, 1683, 1685 }, // 121 TBEGIN_TRECHKPT
  { 1, 220, 222, 1685, 1687 }, // 122 WAIT
  { 0, 0, 0, 0, 0 }, // 123 RLDCL_RLDCR
  { 1, 222, 224, 1687, 1690 }, // 124 RLWIMI_RLWIMI8
  { 0, 0, 0, 0, 0 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 242, 244, 1690, 1692 }, // 126 MFOCRF_MFOCRF8
  { 1, 222, 224, 1692, 1695 }, // 127 MTOCRF_MTOCRF8
  { 1, 224, 226, 1695, 1698 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 222, 224, 1698, 1701 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 233, 235, 1701, 1704 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 222, 224, 1704, 1707 }, // 131 SRAW_SRAWI
  { 1, 222, 224, 1707, 1711 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 222, 224, 1711, 1713 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 220, 222, 1713, 1715 }, // 135 MFVSCR
  { 1, 220, 222, 1715, 1717 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 233, 235, 1717, 1720 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 0, 0, 0, 0, 0 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 252, 254, 1720, 1723 }, // 144 MULHD_MULHW_MULLW
  { 1, 252, 254, 1723, 1726 }, // 145 MULHDU_MULHWU
  { 1, 252, 254, 1726, 1729 }, // 146 MULLI_MULLI8
  { 1, 233, 235, 1729, 1732 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 229, 231, 1732, 1735 }, // 148 FADD_FSUB
  { 1, 229, 231, 1735, 1739 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 233, 235, 1739, 1742 }, // 151 FSELDo_FSELSo
  { 1, 252, 254, 1742, 1745 }, // 152 MULHDUo_MULHWUo
  { 1, 252, 254, 1745, 1748 }, // 153 MULHDo_MULHWo_MULLWo
  { 0, 0, 0, 0, 0 }, // 154 MULLDo
  { 1, 233, 235, 1748, 1751 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 229, 231, 1751, 1754 }, // 156 FADDo_FSUBo
  { 1, 229, 231, 1754, 1758 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 220, 222, 1758, 1760 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 0, 0, 0, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 233, 235, 1760, 1763 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 220, 222, 1763, 1765 }, // 170 LXVL_LXVLL
  { 1, 220, 222, 1765, 1767 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 220, 222, 1767, 1770 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 220, 222, 1770, 1772 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 220, 222, 1772, 1774 }, // 177 ICBI_ICBIEP
  { 1, 220, 222, 1774, 1776 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 237, 239, 1776, 1779 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 0, 0, 0, 0, 0 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 0, 0, 0, 0, 0 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 0, 0, 0, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 254, 256, 0, 0 }, // 185 TLBSYNC
  { 1, 220, 222, 0, 0 }, // 186 SYNC
  { 1, 220, 222, 1779, 1781 }, // 187 LMW
  { 1, 220, 222, 1781, 1784 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 2, 239, 242, 1784, 1786 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 2, 239, 242, 1786, 1788 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 222, 224, 1788, 1790 }, // 197 TEND
  { 1, 220, 222, 1790, 1792 }, // 198 STBCX_STHCX_STWCX
  { 0, 0, 0, 0, 0 }, // 199 STDCX
  { 0, 0, 0, 0, 0 }, // 200 LDMX
  { 1, 220, 222, 1792, 1794 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 222, 224, 1794, 1796 }, // 204 TCHECK
  { 1, 220, 222, 1796, 1799 }, // 205 LFIWAX
  { 1, 220, 222, 1799, 1802 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 220, 222, 1802, 1805 }, // 208 LFSX_LFS
  { 1, 220, 222, 1805, 1808 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 239, 242, 1808, 1810 }, // 211 LHAU_LHAU8
  { 1, 239, 242, 1810, 1812 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 220, 222, 1812, 1815 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 220, 222, 1815, 1818 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 220, 222, 1818, 1820 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 0, 0, 0, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 220, 222, 1820, 1822 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 220, 222, 1822, 1824 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 220, 222, 1824, 1826 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 220, 222, 1826, 1829 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 220, 222, 1829, 1831 }, // 224 STXVL_STXVLL
  { 1, 222, 224, 1831, 1833 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 222, 224, 1833, 1836 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 1, 246, 248, 1836, 1838 }, // 227 MFPMR
  { 1, 250, 252, 1838, 1840 }, // 228 MTPMR
  { 1, 246, 248, 1840, 1842 }, // 229 MFTB_MFTB8
  { 1, 222, 224, 1842, 1844 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 1, 246, 248, 1844, 1846 }, // 231 MFMSR
  { 1, 248, 250, 1846, 1848 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 222, 224, 1848, 1850 }, // 234 MTSPR_MTSPR8
  { 1, 226, 229, 1850, 1853 }, // 235 DIVW_DIVWU_MODSW
  { 1, 226, 229, 1853, 1856 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 0, 0, 0, 0, 0 }, // 237 DIVD_DIVDU
  { 0, 0, 0, 0, 0 }, // 238 DIVDE_DIVDEU
  { 1, 226, 229, 1856, 1859 }, // 239 DIVWUo_DIVWo
  { 0, 0, 0, 0, 0 }, // 240 DIVDo_DIVDUo
  { 1, 226, 229, 1859, 1862 }, // 241 DIVWEo_DIVWEUo
  { 0, 0, 0, 0, 0 }, // 242 DIVDEo_DIVDEUo
  { 1, 222, 224, 1862, 1865 }, // 243 MTCRF_MTCRF8
  { 1, 222, 224, 1865, 1868 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 233, 235, 1868, 1871 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 224, 226, 1871, 1873 }, // 246 MCRFS
  { 1, 244, 246, 1873, 1874 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 244, 246, 1874, 1877 }, // 248 MTFSFb
  { 0, 0, 0, 0, 0 }, // 249 RLDCLo_RLDCRo
  { 0, 0, 0, 0, 0 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 222, 224, 1877, 1880 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 222, 224, 1880, 1883 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 222, 224, 1883, 1886 }, // 253 SRAWIo_SRAWo
  { 1, 244, 246, 1886, 1887 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 242, 244, 1887, 1889 }, // 255 MFCR_MFCR8
  { 0, 0, 0, 0, 0 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 0, 0, 0, 0, 0 }, // 257 SRADo_SLDo_SRDo
  { 1, 231, 233, 1889, 1892 }, // 258 FDIV
  { 1, 231, 233, 1892, 1895 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 231, 233, 1895, 1898 }, // 268 XSDIVDP
  { 1, 235, 237, 1898, 1901 }, // 269 FDIVS
  { 1, 235, 237, 1901, 1904 }, // 270 FDIVSo
  { 1, 235, 237, 1904, 1907 }, // 271 XSDIVSP
  { 1, 235, 237, 1907, 1910 }, // 272 XVDIVSP
  { 1, 231, 233, 1910, 1913 }, // 273 XVDIVDP
  { 2, 239, 242, 1913, 1916 }, // 274 LFSU
  { 2, 239, 242, 1916, 1919 }, // 275 LFSUX
  { 2, 239, 242, 1919, 1922 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 2, 239, 242, 1922, 1924 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 2, 239, 242, 1924, 1926 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 2, 239, 242, 1926, 1928 }, // 279 LBZU_LBZU8
  { 2, 239, 242, 1928, 1930 }, // 280 LBZUX_LBZUX8
  { 0, 0, 0, 0, 0 }, // 281 LDU
  { 0, 0, 0, 0, 0 }, // 282 LDUX
  { 2, 239, 242, 1930, 1933 }, // 283 LFDU
  { 2, 239, 242, 1933, 1936 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 224, 226, 1936, 1938 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 224, 226, 1938, 1940 }, // 287 ADDPCIS
  { 1, 220, 222, 1940, 1942 }, // 288 LDAT_LWAT
  { 1, 220, 222, 1942, 1944 }, // 289 STDAT_STWAT
  { 1, 222, 224, 1944, 1947 }, // 290 BRINC
  { 0, 0, 0, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 0, 0, 0, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 220, 222, 1947, 1949 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 220, 222, 1949, 1951 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 224, 226, 1951, 1953 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 220, 222, 1953, 1955 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 220, 222, 1955, 1957 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 220, 222, 1957, 1960 }, // 300 LFDEPX
  { 1, 220, 222, 1960, 1963 }, // 301 STFDEPX
  { 1, 246, 248, 1963, 1965 }, // 302 MFSR_MFSRIN
  { 1, 250, 252, 1965, 1967 }, // 303 MTSR_MTSRIN
  { 1, 222, 224, 1967, 1969 }, // 304 MFDCR
  { 1, 222, 224, 1969, 1971 }, // 305 MTDCR
  { 1, 222, 224, 1971, 1974 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 248, 250, 1974, 1976 }, // 308 WRTEE_WRTEEI
  { 1, 220, 222, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 220, 222, 1976, 1978 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary PPCE5500Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 258, 260, 0, 0 }, // 1 IIC_LdStSync
  { 1, 260, 262, 1978, 1981 }, // 2 IIC_IntSimple
  { 1, 260, 262, 1981, 1984 }, // 3 IIC_IntGeneral
  { 1, 262, 264, 1984, 1986 }, // 4 IIC_BrB
  { 0, 0, 0, 0, 0 }, // 5 IIC_VecFP
  { 1, 260, 262, 1986, 1989 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 262, 264, 1989, 1992 }, // 10 IIC_BrCR
  { 1, 258, 260, 1992, 1994 }, // 11 IIC_LdStLD
  { 1, 258, 260, 1994, 1996 }, // 12 IIC_LdStDCBF
  { 1, 258, 260, 1996, 1998 }, // 13 IIC_LdStLoad
  { 1, 264, 267, 1998, 2001 }, // 14 IIC_IntDivD
  { 1, 267, 270, 2001, 2004 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 270, 272, 2004, 2007 }, // 17 IIC_FPAddSub
  { 1, 272, 274, 2007, 2010 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 270, 272, 2010, 2013 }, // 20 IIC_FPCompare
  { 1, 270, 272, 2013, 2016 }, // 21 IIC_FPGeneral
  { 0, 0, 0, 0, 0 }, // 22 IIC_VecGeneral
  { 0, 0, 0, 0, 0 }, // 23 IIC_VecComplex
  { 1, 258, 260, 2016, 2018 }, // 24 IIC_LdStStore
  { 1, 260, 262, 2018, 2021 }, // 25 IIC_IntRotateDI
  { 1, 274, 276, 2021, 2024 }, // 26 IIC_FPDivS
  { 1, 270, 272, 2024, 2028 }, // 27 IIC_FPFused
  { 0, 0, 0, 0, 0 }, // 28 IIC_FPSqrtD
  { 0, 0, 0, 0, 0 }, // 29 IIC_FPSqrtS
  { 1, 258, 260, 2028, 2030 }, // 30 IIC_LdStICBI
  { 1, 260, 262, 2030, 2034 }, // 31 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 276, 278, 2034, 2037 }, // 33 IIC_LdStLWARX
  { 2, 278, 281, 2037, 2039 }, // 34 IIC_LdStLoadUpd
  { 2, 278, 281, 2039, 2041 }, // 35 IIC_LdStLoadUpdX
  { 1, 276, 278, 2041, 2043 }, // 36 IIC_LdStLDARX
  { 2, 278, 281, 2043, 2045 }, // 37 IIC_LdStLDU
  { 2, 278, 281, 2045, 2047 }, // 38 IIC_LdStLDUX
  { 2, 258, 260, 2047, 2050 }, // 39 IIC_LdStLFD
  { 2, 278, 281, 2050, 2053 }, // 40 IIC_LdStLFDU
  { 2, 278, 281, 2053, 2056 }, // 41 IIC_LdStLFDUX
  { 1, 258, 260, 2056, 2058 }, // 42 IIC_LdStLHA
  { 2, 278, 281, 2058, 2060 }, // 43 IIC_LdStLHAU
  { 2, 278, 281, 2060, 2062 }, // 44 IIC_LdStLHAUX
  { 1, 281, 283, 2062, 2064 }, // 45 IIC_LdStLMW
  { 0, 0, 0, 0, 0 }, // 46 IIC_LdStLWA
  { 1, 283, 286, 2064, 2067 }, // 47 IIC_IntMulHD
  { 1, 262, 264, 2067, 2069 }, // 48 IIC_BrMCR
  { 1, 286, 288, 2069, 2072 }, // 49 IIC_BrMCRX
  { 1, 288, 290, 2072, 2074 }, // 50 IIC_SprMFCR
  { 1, 286, 288, 2074, 2075 }, // 51 IIC_SprMFSPR
  { 1, 270, 272, 2075, 2076 }, // 52 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 53 IIC_SprMFMSR
  { 1, 288, 290, 2076, 2078 }, // 54 IIC_SprMFCRF
  { 1, 290, 292, 2078, 2080 }, // 55 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMFSR
  { 1, 290, 292, 2080, 2082 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 286, 288, 2082, 2083 }, // 59 IIC_SprMTSPR
  { 1, 292, 294, 2083, 2086 }, // 60 IIC_IntMTFSB0
  { 1, 294, 296, 2086, 2088 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 1, 286, 288, 2088, 2089 }, // 63 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 296, 299, 2089, 2092 }, // 65 IIC_IntMulHW
  { 1, 296, 299, 2092, 2095 }, // 66 IIC_IntMulHWU
  { 1, 283, 286, 2095, 2098 }, // 67 IIC_IntMulLI
  { 0, 0, 0, 0, 0 }, // 68 IIC_VecPerm
  { 1, 258, 260, 2098, 2101 }, // 69 IIC_LdStSTFD
  { 2, 278, 281, 2101, 2104 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 1, 299, 301, 2104, 2107 }, // 73 IIC_IntRotateD
  { 1, 260, 262, 2107, 2110 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 299, 301, 2110, 2113 }, // 82 IIC_IntShift
  { 1, 258, 260, 2113, 2115 }, // 83 IIC_LdStSTWCX
  { 2, 278, 281, 2115, 2117 }, // 84 IIC_LdStSTU
  { 2, 278, 281, 2117, 2119 }, // 85 IIC_LdStSTUX
  { 1, 258, 260, 2119, 2121 }, // 86 IIC_LdStSTD
  { 1, 258, 260, 2121, 2123 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 0, 0, 0, 0, 0 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 1, 301, 303, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 303, 305, 2123, 2125 }, // 94 IIC_IntTrapW
  { 0, 0, 0, 0, 0 }, // 95 IIC_VecFPCompare
  { 0, 0, 0, 0, 0 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 0, 0, 0, 0, 0 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 0, 0, 0, 0, 0 }, // 98 XXSEL
  { 1, 286, 288, 2125, 2126 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 1, 292, 294, 2126, 2129 }, // 100 MTFSB0_MTFSB1
  { 1, 270, 272, 2129, 2130 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 260, 262, 2130, 2133 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 0, 0, 0, 0, 0 }, // 103 TD_TDI
  { 1, 303, 305, 2133, 2135 }, // 104 TW_TWI
  { 1, 270, 272, 2135, 2138 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 0, 0, 0, 0, 0 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 0, 0, 0, 0, 0 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 270, 272, 2138, 2141 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 260, 262, 2141, 2144 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 1, 299, 301, 2144, 2147 }, // 110 SLD_SRD_SRAD
  { 1, 260, 262, 2147, 2150 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 0, 0, 0, 0, 0 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 260, 262, 2150, 2153 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 260, 262, 2153, 2156 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 260, 262, 2156, 2159 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 262, 264, 2159, 2161 }, // 117 MCRF
  { 1, 286, 288, 2161, 2164 }, // 118 MCRXRX
  { 0, 0, 0, 0, 0 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 262, 264, 2164, 2166 }, // 120 RFEBB
  { 1, 286, 288, 2166, 2167 }, // 121 TBEGIN_TRECHKPT
  { 1, 258, 260, 2167, 2169 }, // 122 WAIT
  { 1, 299, 301, 2169, 2172 }, // 123 RLDCL_RLDCR
  { 1, 260, 262, 2172, 2175 }, // 124 RLWIMI_RLWIMI8
  { 1, 260, 262, 2175, 2178 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 288, 290, 2178, 2180 }, // 126 MFOCRF_MFOCRF8
  { 1, 286, 288, 2180, 2183 }, // 127 MTOCRF_MTOCRF8
  { 1, 262, 264, 2183, 2186 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 260, 262, 2186, 2189 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 270, 272, 2189, 2192 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 299, 301, 2192, 2195 }, // 131 SRAW_SRAWI
  { 1, 260, 262, 2195, 2199 }, // 132 ISEL_ISEL8
  { 0, 0, 0, 0, 0 }, // 133 XSIEXPDP
  { 1, 286, 288, 2199, 2200 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 258, 260, 2200, 2202 }, // 135 MFVSCR
  { 1, 258, 260, 2202, 2204 }, // 136 MTVSCR
  { 0, 0, 0, 0, 0 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 0, 0, 0, 0, 0 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 0, 0, 0, 0, 0 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 270, 272, 2204, 2207 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 0, 0, 0, 0, 0 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 0, 0, 0, 0, 0 }, // 142 VSUBFP_VMULUWM
  { 1, 283, 286, 2207, 2210 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 296, 299, 2210, 2213 }, // 144 MULHD_MULHW_MULLW
  { 1, 296, 299, 2213, 2216 }, // 145 MULHDU_MULHWU
  { 1, 283, 286, 2216, 2219 }, // 146 MULLI_MULLI8
  { 1, 270, 272, 2219, 2222 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 270, 272, 2222, 2225 }, // 148 FADD_FSUB
  { 1, 270, 272, 2225, 2229 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 0, 0, 0, 0, 0 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 270, 272, 2229, 2232 }, // 151 FSELDo_FSELSo
  { 1, 296, 299, 2232, 2235 }, // 152 MULHDUo_MULHWUo
  { 1, 296, 299, 2235, 2238 }, // 153 MULHDo_MULHWo_MULLWo
  { 1, 283, 286, 2238, 2241 }, // 154 MULLDo
  { 1, 270, 272, 2241, 2244 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 270, 272, 2244, 2247 }, // 156 FADDo_FSUBo
  { 1, 270, 272, 2247, 2251 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 0, 0, 0, 0, 0 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 258, 260, 2251, 2253 }, // 159 LVSL_LVSR
  { 0, 0, 0, 0, 0 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 0, 0, 0, 0, 0 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 0, 0, 0, 0, 0 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 270, 272, 2253, 2256 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 0, 0, 0, 0, 0 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 0, 0, 0, 0, 0 }, // 165 BCDCTSQo
  { 0, 0, 0, 0, 0 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 0, 0, 0, 0, 0 }, // 167 BCDCFSQo
  { 0, 0, 0, 0, 0 }, // 168 XSDIVQP_XSDIVQPO
  { 0, 0, 0, 0, 0 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 258, 260, 2256, 2258 }, // 170 LXVL_LXVLL
  { 1, 258, 260, 2258, 2260 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 2, 258, 260, 2260, 2263 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 1, 258, 260, 2263, 2265 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 1, 258, 260, 2265, 2267 }, // 177 ICBI_ICBIEP
  { 1, 258, 260, 2267, 2269 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 276, 278, 2269, 2272 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 1, 258, 260, 2272, 2274 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 1, 276, 278, 2274, 2276 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 0, 0, 0, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 1, 301, 303, 0, 0 }, // 185 TLBSYNC
  { 1, 258, 260, 0, 0 }, // 186 SYNC
  { 1, 281, 283, 2276, 2278 }, // 187 LMW
  { 2, 258, 260, 2278, 2281 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 2, 278, 281, 2281, 2283 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 2, 278, 281, 2283, 2285 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 286, 288, 2285, 2286 }, // 197 TEND
  { 1, 258, 260, 2286, 2288 }, // 198 STBCX_STHCX_STWCX
  { 1, 258, 260, 2288, 2290 }, // 199 STDCX
  { 1, 258, 260, 2290, 2292 }, // 200 LDMX
  { 1, 258, 260, 2292, 2294 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 0, 0, 0, 0, 0 }, // 203 LWA_LWA_32
  { 1, 286, 288, 2294, 2295 }, // 204 TCHECK
  { 2, 258, 260, 2295, 2298 }, // 205 LFIWAX
  { 2, 258, 260, 2298, 2301 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 2, 258, 260, 2301, 2304 }, // 208 LFSX_LFS
  { 2, 258, 260, 2304, 2307 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 2, 278, 281, 2307, 2309 }, // 211 LHAU_LHAU8
  { 2, 278, 281, 2309, 2311 }, // 212 LHAUX_LHAUX8_LWAUX
  { 2, 258, 260, 2311, 2314 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 258, 260, 2314, 2317 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 258, 260, 2317, 2319 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 258, 260, 2319, 2321 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 258, 260, 2321, 2323 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 281, 283, 2323, 2325 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 258, 260, 2325, 2327 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 258, 260, 2327, 2330 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 258, 260, 2330, 2332 }, // 224 STXVL_STXVLL
  { 1, 286, 288, 2332, 2333 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 260, 262, 2333, 2336 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 1, 290, 292, 2336, 2338 }, // 227 MFPMR
  { 1, 286, 288, 2338, 2339 }, // 228 MTPMR
  { 1, 290, 292, 2339, 2341 }, // 229 MFTB_MFTB8
  { 1, 286, 288, 2341, 2342 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 0, 0, 0, 0, 0 }, // 231 MFMSR
  { 1, 294, 296, 2342, 2344 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 286, 288, 2344, 2345 }, // 234 MTSPR_MTSPR8
  { 1, 267, 270, 2345, 2348 }, // 235 DIVW_DIVWU_MODSW
  { 1, 267, 270, 2348, 2351 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 264, 267, 2351, 2354 }, // 237 DIVD_DIVDU
  { 1, 264, 267, 2354, 2357 }, // 238 DIVDE_DIVDEU
  { 1, 267, 270, 2357, 2360 }, // 239 DIVWUo_DIVWo
  { 1, 264, 267, 2360, 2363 }, // 240 DIVDo_DIVDUo
  { 1, 267, 270, 2363, 2366 }, // 241 DIVWEo_DIVWEUo
  { 1, 264, 267, 2366, 2369 }, // 242 DIVDEo_DIVDEUo
  { 1, 286, 288, 2369, 2372 }, // 243 MTCRF_MTCRF8
  { 1, 260, 262, 2372, 2375 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 270, 272, 2375, 2378 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 262, 264, 2378, 2380 }, // 246 MCRFS
  { 1, 270, 272, 2380, 2381 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 1, 292, 294, 2381, 2384 }, // 248 MTFSFb
  { 1, 299, 301, 2384, 2387 }, // 249 RLDCLo_RLDCRo
  { 1, 260, 262, 2387, 2390 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 260, 262, 2390, 2393 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 260, 262, 2393, 2396 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 299, 301, 2396, 2399 }, // 253 SRAWIo_SRAWo
  { 1, 270, 272, 2399, 2400 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 288, 290, 2400, 2402 }, // 255 MFCR_MFCR8
  { 1, 260, 262, 2402, 2405 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 1, 299, 301, 2405, 2408 }, // 257 SRADo_SLDo_SRDo
  { 1, 272, 274, 2408, 2411 }, // 258 FDIV
  { 1, 272, 274, 2411, 2414 }, // 259 FDIVo
  { 0, 0, 0, 0, 0 }, // 260 XSSQRTDP
  { 0, 0, 0, 0, 0 }, // 261 FSQRT
  { 0, 0, 0, 0, 0 }, // 262 XVSQRTDP
  { 0, 0, 0, 0, 0 }, // 263 XVSQRTSP
  { 0, 0, 0, 0, 0 }, // 264 FSQRTo
  { 0, 0, 0, 0, 0 }, // 265 XSSQRTSP
  { 0, 0, 0, 0, 0 }, // 266 FSQRTS
  { 0, 0, 0, 0, 0 }, // 267 FSQRTSo
  { 1, 272, 274, 2414, 2417 }, // 268 XSDIVDP
  { 1, 274, 276, 2417, 2420 }, // 269 FDIVS
  { 1, 274, 276, 2420, 2423 }, // 270 FDIVSo
  { 1, 274, 276, 2423, 2426 }, // 271 XSDIVSP
  { 1, 274, 276, 2426, 2429 }, // 272 XVDIVSP
  { 1, 272, 274, 2429, 2432 }, // 273 XVDIVDP
  { 2, 278, 281, 2432, 2435 }, // 274 LFSU
  { 2, 278, 281, 2435, 2438 }, // 275 LFSUX
  { 2, 278, 281, 2438, 2441 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 2, 278, 281, 2441, 2443 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 2, 278, 281, 2443, 2445 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 2, 278, 281, 2445, 2447 }, // 279 LBZU_LBZU8
  { 2, 278, 281, 2447, 2449 }, // 280 LBZUX_LBZUX8
  { 2, 278, 281, 2449, 2451 }, // 281 LDU
  { 2, 278, 281, 2451, 2453 }, // 282 LDUX
  { 2, 278, 281, 2453, 2456 }, // 283 LFDU
  { 2, 278, 281, 2456, 2459 }, // 284 LFDUX
  { 0, 0, 0, 0, 0 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 262, 264, 2459, 2461 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 262, 264, 2461, 2463 }, // 287 ADDPCIS
  { 1, 258, 260, 2463, 2465 }, // 288 LDAT_LWAT
  { 1, 258, 260, 2465, 2467 }, // 289 STDAT_STWAT
  { 1, 260, 262, 2467, 2470 }, // 290 BRINC
  { 0, 0, 0, 0, 0 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 0, 0, 0, 0, 0 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 258, 260, 2470, 2472 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 258, 260, 2472, 2474 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 262, 264, 2474, 2476 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 258, 260, 2476, 2478 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 258, 260, 2478, 2480 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 2, 258, 260, 2480, 2483 }, // 300 LFDEPX
  { 1, 258, 260, 2483, 2486 }, // 301 STFDEPX
  { 0, 0, 0, 0, 0 }, // 302 MFSR_MFSRIN
  { 0, 0, 0, 0, 0 }, // 303 MTSR_MTSRIN
  { 1, 286, 288, 2486, 2487 }, // 304 MFDCR
  { 1, 286, 288, 2487, 2488 }, // 305 MTDCR
  { 1, 260, 262, 2488, 2491 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 1, 294, 296, 2491, 2493 }, // 308 WRTEE_WRTEEI
  { 1, 258, 260, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 1, 258, 260, 2493, 2495 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary P8Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 0, 0, 0, 0, 0 }, // 1 IIC_LdStSync
  { 1, 305, 307, 2495, 2498 }, // 2 IIC_IntSimple
  { 1, 305, 307, 2498, 2501 }, // 3 IIC_IntGeneral
  { 1, 307, 309, 2501, 2504 }, // 4 IIC_BrB
  { 1, 309, 311, 2504, 2507 }, // 5 IIC_VecFP
  { 1, 311, 313, 2507, 2510 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 313, 315, 2510, 2513 }, // 10 IIC_BrCR
  { 1, 315, 317, 2513, 2516 }, // 11 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 315, 317, 2516, 2519 }, // 13 IIC_LdStLoad
  { 1, 317, 319, 2519, 2522 }, // 14 IIC_IntDivD
  { 1, 319, 321, 2522, 2525 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 321, 323, 2525, 2528 }, // 17 IIC_FPAddSub
  { 1, 321, 323, 2528, 2531 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 321, 323, 2531, 2534 }, // 20 IIC_FPCompare
  { 1, 321, 323, 2534, 2537 }, // 21 IIC_FPGeneral
  { 1, 309, 311, 2537, 2540 }, // 22 IIC_VecGeneral
  { 1, 309, 311, 2540, 2543 }, // 23 IIC_VecComplex
  { 1, 323, 326, 2543, 2546 }, // 24 IIC_LdStStore
  { 1, 311, 313, 2546, 2549 }, // 25 IIC_IntRotateDI
  { 1, 321, 323, 2549, 2552 }, // 26 IIC_FPDivS
  { 1, 321, 323, 2552, 2556 }, // 27 IIC_FPFused
  { 1, 321, 323, 2556, 2559 }, // 28 IIC_FPSqrtD
  { 1, 321, 323, 2559, 2562 }, // 29 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStICBI
  { 1, 326, 329, 2562, 2566 }, // 31 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 329, 334, 2566, 2569 }, // 33 IIC_LdStLWARX
  { 1, 334, 338, 2569, 2573 }, // 34 IIC_LdStLoadUpd
  { 1, 334, 338, 2573, 2577 }, // 35 IIC_LdStLoadUpdX
  { 1, 338, 345, 2577, 2580 }, // 36 IIC_LdStLDARX
  { 1, 334, 338, 2580, 2584 }, // 37 IIC_LdStLDU
  { 1, 334, 338, 2584, 2588 }, // 38 IIC_LdStLDUX
  { 1, 345, 347, 2588, 2591 }, // 39 IIC_LdStLFD
  { 1, 347, 351, 2591, 2595 }, // 40 IIC_LdStLFDU
  { 1, 347, 351, 2595, 2599 }, // 41 IIC_LdStLFDUX
  { 1, 351, 355, 2599, 2602 }, // 42 IIC_LdStLHA
  { 1, 355, 360, 2602, 2606 }, // 43 IIC_LdStLHAU
  { 1, 360, 369, 2606, 2610 }, // 44 IIC_LdStLHAUX
  { 1, 315, 317, 2610, 2613 }, // 45 IIC_LdStLMW
  { 1, 369, 373, 2613, 2616 }, // 46 IIC_LdStLWA
  { 1, 311, 313, 2616, 2619 }, // 47 IIC_IntMulHD
  { 1, 373, 375, 2619, 2622 }, // 48 IIC_BrMCR
  { 1, 375, 377, 2622, 2624 }, // 49 IIC_BrMCRX
  { 1, 313, 315, 2624, 2626 }, // 50 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 52 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 53 IIC_SprMFMSR
  { 1, 313, 315, 2626, 2628 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 375, 377, 2628, 2630 }, // 59 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 311, 313, 2630, 2633 }, // 65 IIC_IntMulHW
  { 1, 311, 313, 2633, 2636 }, // 66 IIC_IntMulHWU
  { 1, 311, 313, 2636, 2639 }, // 67 IIC_IntMulLI
  { 1, 377, 379, 2639, 2642 }, // 68 IIC_VecPerm
  { 1, 379, 382, 2642, 2645 }, // 69 IIC_LdStSTFD
  { 1, 382, 387, 2645, 2649 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 1, 311, 313, 2649, 2652 }, // 73 IIC_IntRotateD
  { 1, 311, 313, 2652, 2655 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 311, 313, 2655, 2658 }, // 82 IIC_IntShift
  { 1, 387, 395, 2658, 2661 }, // 83 IIC_LdStSTWCX
  { 1, 395, 399, 2661, 2665 }, // 84 IIC_LdStSTU
  { 1, 399, 408, 2665, 2669 }, // 85 IIC_LdStSTUX
  { 1, 408, 411, 0, 0 }, // 86 IIC_LdStSTD
  { 1, 387, 395, 2669, 2672 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 1, 311, 313, 2672, 2674 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 311, 313, 2674, 2676 }, // 94 IIC_IntTrapW
  { 1, 309, 311, 2676, 2679 }, // 95 IIC_VecFPCompare
  { 1, 309, 311, 2679, 2682 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 1, 309, 311, 2682, 2685 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 377, 379, 2685, 2688 }, // 98 XXSEL
  { 1, 375, 377, 2688, 2690 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 0, 0, 0, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 0, 0, 0, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 311, 313, 2690, 2693 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 1, 311, 313, 2693, 2695 }, // 103 TD_TDI
  { 1, 311, 313, 2695, 2697 }, // 104 TW_TWI
  { 1, 321, 323, 2697, 2700 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 1, 309, 311, 2700, 2703 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 1, 309, 311, 2703, 2706 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 321, 323, 2706, 2709 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 305, 307, 2709, 2712 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 1, 311, 313, 2712, 2715 }, // 110 SLD_SRD_SRAD
  { 1, 311, 313, 2715, 2718 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 309, 311, 2718, 2721 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 311, 313, 2721, 2724 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 305, 307, 2724, 2727 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 305, 307, 2727, 2730 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 373, 375, 2730, 2733 }, // 117 MCRF
  { 1, 375, 377, 2733, 2735 }, // 118 MCRXRX
  { 1, 309, 311, 2735, 2738 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 307, 309, 2738, 2741 }, // 120 RFEBB
  { 1, 375, 377, 2741, 2743 }, // 121 TBEGIN_TRECHKPT
  { 1, 315, 317, 2743, 2746 }, // 122 WAIT
  { 1, 311, 313, 2746, 2749 }, // 123 RLDCL_RLDCR
  { 1, 311, 313, 2749, 2752 }, // 124 RLWIMI_RLWIMI8
  { 1, 311, 313, 2752, 2755 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 313, 315, 2755, 2757 }, // 126 MFOCRF_MFOCRF8
  { 1, 375, 377, 2757, 2759 }, // 127 MTOCRF_MTOCRF8
  { 1, 313, 315, 2759, 2762 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 305, 307, 2762, 2765 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 321, 323, 2765, 2768 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 311, 313, 2768, 2771 }, // 131 SRAW_SRAWI
  { 1, 326, 329, 2771, 2775 }, // 132 ISEL_ISEL8
  { 1, 309, 311, 2775, 2778 }, // 133 XSIEXPDP
  { 1, 375, 377, 2778, 2780 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 323, 326, 2780, 2783 }, // 135 MFVSCR
  { 1, 315, 317, 2783, 2786 }, // 136 MTVSCR
  { 1, 309, 311, 2786, 2789 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 309, 311, 2789, 2792 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 309, 311, 2792, 2795 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 321, 323, 2795, 2798 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 309, 311, 2798, 2801 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 309, 311, 2801, 2804 }, // 142 VSUBFP_VMULUWM
  { 1, 311, 313, 2804, 2807 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 311, 313, 2807, 2810 }, // 144 MULHD_MULHW_MULLW
  { 1, 311, 313, 2810, 2813 }, // 145 MULHDU_MULHWU
  { 1, 311, 313, 2813, 2816 }, // 146 MULLI_MULLI8
  { 1, 321, 323, 2816, 2819 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 321, 323, 2819, 2822 }, // 148 FADD_FSUB
  { 1, 321, 323, 2822, 2826 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 1, 309, 311, 2826, 2829 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 321, 323, 2829, 2832 }, // 151 FSELDo_FSELSo
  { 1, 311, 313, 2832, 2835 }, // 152 MULHDUo_MULHWUo
  { 1, 311, 313, 2835, 2838 }, // 153 MULHDo_MULHWo_MULLWo
  { 1, 311, 313, 2838, 2841 }, // 154 MULLDo
  { 1, 321, 323, 2841, 2844 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 321, 323, 2844, 2847 }, // 156 FADDo_FSUBo
  { 1, 321, 323, 2847, 2851 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 1, 309, 311, 2851, 2854 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 315, 317, 2854, 2857 }, // 159 LVSL_LVSR
  { 1, 377, 379, 2857, 2860 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 309, 311, 2860, 2863 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 309, 311, 2863, 2866 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 321, 323, 2866, 2869 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 309, 311, 2869, 2872 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 309, 311, 2872, 2875 }, // 165 BCDCTSQo
  { 1, 309, 311, 2875, 2878 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 309, 311, 2878, 2881 }, // 167 BCDCFSQo
  { 1, 309, 311, 2881, 2884 }, // 168 XSDIVQP_XSDIVQPO
  { 1, 309, 311, 2884, 2887 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 315, 317, 2887, 2890 }, // 170 LXVL_LXVLL
  { 1, 315, 317, 2890, 2893 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 345, 347, 2893, 2896 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 0, 0, 0, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 0, 0, 0, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 315, 317, 2896, 2899 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 329, 334, 2899, 2902 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 1, 315, 317, 2902, 2905 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 1, 338, 345, 2905, 2908 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 0, 0, 0, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 0, 0, 0, 0, 0 }, // 185 TLBSYNC
  { 0, 0, 0, 0, 0 }, // 186 SYNC
  { 1, 315, 317, 2908, 2911 }, // 187 LMW
  { 1, 345, 347, 2911, 2914 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 334, 338, 2914, 2918 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 334, 338, 2918, 2922 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 375, 377, 2922, 2924 }, // 197 TEND
  { 1, 387, 395, 2924, 2927 }, // 198 STBCX_STHCX_STWCX
  { 1, 387, 395, 2927, 2930 }, // 199 STDCX
  { 1, 315, 317, 2930, 2933 }, // 200 LDMX
  { 1, 351, 355, 2933, 2936 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 1, 369, 373, 2936, 2939 }, // 203 LWA_LWA_32
  { 1, 375, 377, 2939, 2941 }, // 204 TCHECK
  { 1, 345, 347, 2941, 2944 }, // 205 LFIWAX
  { 1, 345, 347, 2944, 2947 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 345, 347, 2947, 2950 }, // 208 LFSX_LFS
  { 1, 345, 347, 2950, 2953 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 355, 360, 2953, 2957 }, // 211 LHAU_LHAU8
  { 1, 360, 369, 2957, 2961 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 345, 347, 2961, 2964 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 379, 382, 2964, 2967 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 323, 326, 2967, 2970 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 408, 411, 0, 0 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 315, 317, 2970, 2973 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 315, 317, 2973, 2976 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 323, 326, 2976, 2979 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 379, 382, 2979, 2982 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 315, 317, 2982, 2985 }, // 224 STXVL_STXVLL
  { 1, 375, 377, 2985, 2987 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 305, 307, 2987, 2990 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 0, 0, 0, 0, 0 }, // 229 MFTB_MFTB8
  { 0, 0, 0, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 0, 0, 0, 0, 0 }, // 231 MFMSR
  { 0, 0, 0, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 375, 377, 2990, 2992 }, // 234 MTSPR_MTSPR8
  { 1, 319, 321, 2992, 2995 }, // 235 DIVW_DIVWU_MODSW
  { 1, 319, 321, 2995, 2998 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 317, 319, 2998, 3001 }, // 237 DIVD_DIVDU
  { 1, 317, 319, 3001, 3004 }, // 238 DIVDE_DIVDEU
  { 1, 319, 321, 3004, 3007 }, // 239 DIVWUo_DIVWo
  { 1, 317, 319, 3007, 3010 }, // 240 DIVDo_DIVDUo
  { 1, 319, 321, 3010, 3013 }, // 241 DIVWEo_DIVWEUo
  { 1, 317, 319, 3013, 3016 }, // 242 DIVDEo_DIVDEUo
  { 1, 375, 377, 3016, 3018 }, // 243 MTCRF_MTCRF8
  { 1, 305, 307, 3018, 3021 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 321, 323, 3021, 3024 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 373, 375, 3024, 3027 }, // 246 MCRFS
  { 0, 0, 0, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 0, 0, 0, 0, 0 }, // 248 MTFSFb
  { 1, 311, 313, 3027, 3030 }, // 249 RLDCLo_RLDCRo
  { 1, 311, 313, 3030, 3033 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 311, 313, 3033, 3036 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 305, 307, 3036, 3039 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 311, 313, 3039, 3042 }, // 253 SRAWIo_SRAWo
  { 0, 0, 0, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 313, 315, 3042, 3044 }, // 255 MFCR_MFCR8
  { 1, 311, 313, 3044, 3047 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 1, 311, 313, 3047, 3050 }, // 257 SRADo_SLDo_SRDo
  { 1, 321, 323, 3050, 3053 }, // 258 FDIV
  { 1, 321, 323, 3053, 3056 }, // 259 FDIVo
  { 1, 321, 323, 3056, 3059 }, // 260 XSSQRTDP
  { 1, 321, 323, 3059, 3062 }, // 261 FSQRT
  { 1, 321, 323, 3062, 3065 }, // 262 XVSQRTDP
  { 1, 321, 323, 3065, 3068 }, // 263 XVSQRTSP
  { 1, 321, 323, 3068, 3071 }, // 264 FSQRTo
  { 1, 321, 323, 3071, 3074 }, // 265 XSSQRTSP
  { 1, 321, 323, 3074, 3077 }, // 266 FSQRTS
  { 1, 321, 323, 3077, 3080 }, // 267 FSQRTSo
  { 1, 321, 323, 3080, 3083 }, // 268 XSDIVDP
  { 1, 321, 323, 3083, 3086 }, // 269 FDIVS
  { 1, 321, 323, 3086, 3089 }, // 270 FDIVSo
  { 1, 321, 323, 3089, 3092 }, // 271 XSDIVSP
  { 1, 321, 323, 3092, 3095 }, // 272 XVDIVSP
  { 1, 321, 323, 3095, 3098 }, // 273 XVDIVDP
  { 1, 347, 351, 3098, 3102 }, // 274 LFSU
  { 1, 347, 351, 3102, 3106 }, // 275 LFSUX
  { 1, 382, 387, 3106, 3110 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 395, 399, 3110, 3114 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 399, 408, 3114, 3118 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 334, 338, 3118, 3122 }, // 279 LBZU_LBZU8
  { 1, 334, 338, 3122, 3126 }, // 280 LBZUX_LBZUX8
  { 1, 334, 338, 3126, 3130 }, // 281 LDU
  { 1, 334, 338, 3130, 3134 }, // 282 LDUX
  { 1, 347, 351, 3134, 3138 }, // 283 LFDU
  { 1, 347, 351, 3138, 3142 }, // 284 LFDUX
  { 1, 309, 311, 3142, 3145 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 307, 309, 3145, 3148 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 307, 309, 3148, 3151 }, // 287 ADDPCIS
  { 1, 315, 317, 3151, 3154 }, // 288 LDAT_LWAT
  { 1, 323, 326, 3154, 3157 }, // 289 STDAT_STWAT
  { 1, 305, 307, 3157, 3160 }, // 290 BRINC
  { 1, 309, 311, 3160, 3163 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 309, 311, 3163, 3166 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 315, 317, 3166, 3169 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 323, 326, 3169, 3172 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 307, 309, 3172, 3175 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 315, 317, 3175, 3178 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 323, 326, 3178, 3181 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 345, 347, 3181, 3184 }, // 300 LFDEPX
  { 1, 379, 382, 3184, 3187 }, // 301 STFDEPX
  { 0, 0, 0, 0, 0 }, // 302 MFSR_MFSRIN
  { 0, 0, 0, 0, 0 }, // 303 MTSR_MTSRIN
  { 0, 0, 0, 0, 0 }, // 304 MFDCR
  { 1, 375, 377, 3187, 3189 }, // 305 MTDCR
  { 1, 305, 307, 3189, 3192 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 0, 0, 0, 0, 0 }, // 308 WRTEE_WRTEEI
  { 0, 0, 0, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 0, 0, 0, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary P7Itineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 0, 0, 0, 0, 0 }, // 1 IIC_LdStSync
  { 1, 411, 413, 3192, 3195 }, // 2 IIC_IntSimple
  { 1, 413, 415, 3195, 3198 }, // 3 IIC_IntGeneral
  { 1, 415, 417, 3198, 3201 }, // 4 IIC_BrB
  { 1, 417, 419, 3201, 3204 }, // 5 IIC_VecFP
  { 1, 413, 415, 3204, 3207 }, // 6 IIC_IntCompare
  { 0, 0, 0, 0, 0 }, // 7 IIC_SprABORT
  { 0, 0, 0, 0, 0 }, // 8 IIC_LdStCOPY
  { 0, 0, 0, 0, 0 }, // 9 IIC_LdStPASTE
  { 1, 419, 421, 3207, 3210 }, // 10 IIC_BrCR
  { 1, 421, 423, 3210, 3213 }, // 11 IIC_LdStLD
  { 0, 0, 0, 0, 0 }, // 12 IIC_LdStDCBF
  { 1, 421, 423, 3213, 3216 }, // 13 IIC_LdStLoad
  { 1, 423, 426, 3216, 3219 }, // 14 IIC_IntDivD
  { 1, 426, 429, 3219, 3222 }, // 15 IIC_IntDivW
  { 0, 0, 0, 0, 0 }, // 16 IIC_FPDGeneral
  { 1, 429, 431, 3222, 3225 }, // 17 IIC_FPAddSub
  { 1, 429, 431, 3225, 3228 }, // 18 IIC_FPDivD
  { 0, 0, 0, 0, 0 }, // 19 IIC_FPSGeneral
  { 1, 429, 431, 3228, 3231 }, // 20 IIC_FPCompare
  { 1, 429, 431, 3231, 3234 }, // 21 IIC_FPGeneral
  { 1, 431, 433, 3234, 3237 }, // 22 IIC_VecGeneral
  { 1, 431, 433, 3237, 3240 }, // 23 IIC_VecComplex
  { 1, 433, 436, 3240, 3243 }, // 24 IIC_LdStStore
  { 1, 413, 415, 3243, 3246 }, // 25 IIC_IntRotateDI
  { 1, 429, 431, 3246, 3249 }, // 26 IIC_FPDivS
  { 1, 429, 431, 3249, 3253 }, // 27 IIC_FPFused
  { 1, 429, 431, 3253, 3256 }, // 28 IIC_FPSqrtD
  { 1, 429, 431, 3256, 3259 }, // 29 IIC_FPSqrtS
  { 0, 0, 0, 0, 0 }, // 30 IIC_LdStICBI
  { 1, 436, 439, 3259, 3263 }, // 31 IIC_IntISEL
  { 0, 0, 0, 0, 0 }, // 32 IIC_SprISYNC
  { 1, 439, 444, 3263, 3266 }, // 33 IIC_LdStLWARX
  { 1, 444, 448, 3266, 3270 }, // 34 IIC_LdStLoadUpd
  { 1, 448, 455, 3270, 3274 }, // 35 IIC_LdStLoadUpdX
  { 1, 439, 444, 3274, 3277 }, // 36 IIC_LdStLDARX
  { 1, 444, 448, 3277, 3281 }, // 37 IIC_LdStLDU
  { 1, 448, 455, 3281, 3285 }, // 38 IIC_LdStLDUX
  { 1, 421, 423, 3285, 3288 }, // 39 IIC_LdStLFD
  { 1, 444, 448, 3288, 3292 }, // 40 IIC_LdStLFDU
  { 1, 444, 448, 3292, 3296 }, // 41 IIC_LdStLFDUX
  { 1, 455, 459, 3296, 3299 }, // 42 IIC_LdStLHA
  { 1, 459, 464, 3299, 3303 }, // 43 IIC_LdStLHAU
  { 1, 464, 472, 3303, 3307 }, // 44 IIC_LdStLHAUX
  { 1, 421, 423, 3307, 3310 }, // 45 IIC_LdStLMW
  { 1, 455, 459, 3310, 3313 }, // 46 IIC_LdStLWA
  { 1, 413, 415, 3313, 3316 }, // 47 IIC_IntMulHD
  { 1, 415, 417, 3316, 3319 }, // 48 IIC_BrMCR
  { 1, 472, 478, 3319, 3321 }, // 49 IIC_BrMCRX
  { 1, 419, 421, 3321, 3323 }, // 50 IIC_SprMFCR
  { 0, 0, 0, 0, 0 }, // 51 IIC_SprMFSPR
  { 0, 0, 0, 0, 0 }, // 52 IIC_IntMFFS
  { 0, 0, 0, 0, 0 }, // 53 IIC_SprMFMSR
  { 1, 419, 421, 3323, 3325 }, // 54 IIC_SprMFCRF
  { 0, 0, 0, 0, 0 }, // 55 IIC_SprMFPMR
  { 0, 0, 0, 0, 0 }, // 56 IIC_SprMFSR
  { 0, 0, 0, 0, 0 }, // 57 IIC_SprMFTB
  { 0, 0, 0, 0, 0 }, // 58 IIC_SprMSGSYNC
  { 1, 478, 480, 3325, 3327 }, // 59 IIC_SprMTSPR
  { 0, 0, 0, 0, 0 }, // 60 IIC_IntMTFSB0
  { 0, 0, 0, 0, 0 }, // 61 IIC_SprMTMSR
  { 0, 0, 0, 0, 0 }, // 62 IIC_SprMTMSRD
  { 0, 0, 0, 0, 0 }, // 63 IIC_SprMTPMR
  { 0, 0, 0, 0, 0 }, // 64 IIC_SprMTSR
  { 1, 413, 415, 3327, 3330 }, // 65 IIC_IntMulHW
  { 1, 413, 415, 3330, 3333 }, // 66 IIC_IntMulHWU
  { 1, 413, 415, 3333, 3336 }, // 67 IIC_IntMulLI
  { 1, 480, 482, 3336, 3339 }, // 68 IIC_VecPerm
  { 1, 482, 485, 3339, 3342 }, // 69 IIC_LdStSTFD
  { 1, 485, 490, 3342, 3346 }, // 70 IIC_LdStSTFDU
  { 0, 0, 0, 0, 0 }, // 71 IIC_SprRFI
  { 0, 0, 0, 0, 0 }, // 72 IIC_IntRFID
  { 1, 413, 415, 3346, 3349 }, // 73 IIC_IntRotateD
  { 1, 413, 415, 3349, 3352 }, // 74 IIC_IntRotate
  { 0, 0, 0, 0, 0 }, // 75 IIC_SprSLBIA
  { 0, 0, 0, 0, 0 }, // 76 IIC_SprSLBIE
  { 0, 0, 0, 0, 0 }, // 77 IIC_SprSLBIEG
  { 0, 0, 0, 0, 0 }, // 78 IIC_SprSLBMFEE
  { 0, 0, 0, 0, 0 }, // 79 IIC_SprSLBMFEV
  { 0, 0, 0, 0, 0 }, // 80 IIC_SprSLBMTE
  { 0, 0, 0, 0, 0 }, // 81 IIC_SprSLBSYNC
  { 1, 413, 415, 3352, 3355 }, // 82 IIC_IntShift
  { 1, 439, 444, 3355, 3358 }, // 83 IIC_LdStSTWCX
  { 1, 459, 464, 3358, 3362 }, // 84 IIC_LdStSTU
  { 1, 490, 497, 3362, 3366 }, // 85 IIC_LdStSTUX
  { 1, 433, 436, 3366, 3369 }, // 86 IIC_LdStSTD
  { 1, 439, 444, 3369, 3372 }, // 87 IIC_LdStSTDCX
  { 0, 0, 0, 0, 0 }, // 88 IIC_SprSTOP
  { 1, 413, 415, 3372, 3374 }, // 89 IIC_IntTrapD
  { 0, 0, 0, 0, 0 }, // 90 IIC_SprTLBIA
  { 0, 0, 0, 0, 0 }, // 91 IIC_SprTLBIE
  { 0, 0, 0, 0, 0 }, // 92 IIC_SprTLBIEL
  { 0, 0, 0, 0, 0 }, // 93 IIC_SprTLBSYNC
  { 1, 413, 415, 3374, 3376 }, // 94 IIC_IntTrapW
  { 1, 417, 419, 3376, 3379 }, // 95 IIC_VecFPCompare
  { 1, 431, 433, 3379, 3382 }, // 96 VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz
  { 1, 417, 419, 3382, 3385 }, // 97 VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP
  { 1, 480, 482, 3385, 3388 }, // 98 XXSEL
  { 1, 478, 480, 3388, 3390 }, // 99 TABORTDC_TABORTDCI_TABORTWC_TABORTWCI
  { 0, 0, 0, 0, 0 }, // 100 MTFSB0_MTFSB1
  { 0, 0, 0, 0, 0 }, // 101 MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI
  { 1, 413, 415, 3390, 3393 }, // 102 CMPRB_CMPRB8_CMPEQB
  { 1, 413, 415, 3393, 3395 }, // 103 TD_TDI
  { 1, 413, 415, 3395, 3397 }, // 104 TW_TWI
  { 1, 429, 431, 3397, 3400 }, // 105 FCMPUD_FCMPUS_FTDIV_FTSQRT
  { 1, 417, 419, 3400, 3403 }, // 106 XSTSTDCDP_XSTSTDCSP
  { 1, 417, 419, 3403, 3406 }, // 107 XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN
  { 1, 429, 431, 3406, 3409 }, // 108 XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP
  { 1, 413, 415, 3409, 3412 }, // 109 CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD
  { 1, 413, 415, 3412, 3415 }, // 110 SLD_SRD_SRAD
  { 1, 413, 415, 3415, 3418 }, // 111 SRADI_EXTSWSLI_SRADI_32_RLDIC
  { 1, 431, 433, 3418, 3421 }, // 112 MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ
  { 1, 413, 415, 3421, 3424 }, // 113 CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI
  { 1, 413, 415, 3424, 3427 }, // 114 SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA
  { 1, 411, 413, 3427, 3430 }, // 115 ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP
  { 0, 0, 0, 0, 0 }, // 116 ADDIStocHA_ADDItocL_COPY
  { 1, 415, 417, 3430, 3433 }, // 117 MCRF
  { 1, 472, 478, 3433, 3435 }, // 118 MCRXRX
  { 1, 417, 419, 3435, 3438 }, // 119 XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP
  { 1, 415, 417, 3438, 3441 }, // 120 RFEBB
  { 1, 478, 480, 3441, 3443 }, // 121 TBEGIN_TRECHKPT
  { 1, 421, 423, 3443, 3446 }, // 122 WAIT
  { 1, 413, 415, 3446, 3449 }, // 123 RLDCL_RLDCR
  { 1, 413, 415, 3449, 3452 }, // 124 RLWIMI_RLWIMI8
  { 1, 413, 415, 3452, 3455 }, // 125 RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI
  { 1, 419, 421, 3455, 3457 }, // 126 MFOCRF_MFOCRF8
  { 1, 472, 478, 3457, 3459 }, // 127 MTOCRF_MTOCRF8
  { 1, 419, 421, 3459, 3462 }, // 128 CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR
  { 1, 413, 415, 3462, 3465 }, // 129 SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8
  { 1, 429, 431, 3465, 3468 }, // 130 FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR
  { 1, 413, 415, 3468, 3471 }, // 131 SRAW_SRAWI
  { 1, 436, 439, 3471, 3475 }, // 132 ISEL_ISEL8
  { 1, 417, 419, 3475, 3478 }, // 133 XSIEXPDP
  { 1, 478, 480, 3478, 3480 }, // 134 TRECLAIM_TSR_TABORT
  { 1, 433, 436, 3480, 3483 }, // 135 MFVSCR
  { 1, 421, 423, 3483, 3486 }, // 136 MTVSCR
  { 1, 417, 419, 3486, 3489 }, // 137 VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo
  { 1, 431, 433, 3489, 3492 }, // 138 VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW
  { 1, 417, 419, 3492, 3495 }, // 139 VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP
  { 1, 429, 431, 3495, 3498 }, // 140 XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP
  { 1, 417, 419, 3498, 3501 }, // 141 VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS
  { 1, 431, 433, 3501, 3504 }, // 142 VSUBFP_VMULUWM
  { 1, 413, 415, 3504, 3507 }, // 143 MADDHD_MADDHDU_MADDLD_MULLD
  { 1, 413, 415, 3507, 3510 }, // 144 MULHD_MULHW_MULLW
  { 1, 413, 415, 3510, 3513 }, // 145 MULHDU_MULHWU
  { 1, 413, 415, 3513, 3516 }, // 146 MULLI_MULLI8
  { 1, 429, 431, 3516, 3519 }, // 147 FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS
  { 1, 429, 431, 3519, 3522 }, // 148 FADD_FSUB
  { 1, 429, 431, 3522, 3526 }, // 149 FMSUB_FMADD_FNMADD_FNMSUB_FMUL
  { 1, 417, 419, 3526, 3529 }, // 150 XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP
  { 1, 429, 431, 3529, 3532 }, // 151 FSELDo_FSELSo
  { 1, 413, 415, 3532, 3535 }, // 152 MULHDUo_MULHWUo
  { 1, 413, 415, 3535, 3538 }, // 153 MULHDo_MULHWo_MULLWo
  { 1, 413, 415, 3538, 3541 }, // 154 MULLDo
  { 1, 429, 431, 3541, 3544 }, // 155 FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo
  { 1, 429, 431, 3544, 3547 }, // 156 FADDo_FSUBo
  { 1, 429, 431, 3547, 3551 }, // 157 FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo
  { 1, 417, 419, 3551, 3554 }, // 158 XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP
  { 1, 421, 423, 3554, 3557 }, // 159 LVSL_LVSR
  { 1, 480, 482, 3557, 3560 }, // 160 VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs
  { 1, 417, 419, 3560, 3563 }, // 161 V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo
  { 1, 431, 433, 3563, 3566 }, // 162 VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM
  { 1, 429, 431, 3566, 3569 }, // 163 XSCMPEXPQP_XSCMPOQP_XSCMPUQP
  { 1, 417, 419, 3569, 3572 }, // 164 BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO
  { 1, 417, 419, 3572, 3575 }, // 165 BCDCTSQo
  { 1, 417, 419, 3575, 3578 }, // 166 XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO
  { 1, 417, 419, 3578, 3581 }, // 167 BCDCFSQo
  { 1, 417, 419, 3581, 3584 }, // 168 XSDIVQP_XSDIVQPO
  { 1, 417, 419, 3584, 3587 }, // 169 XSSQRTQP_XSSQRTQPO
  { 1, 421, 423, 3587, 3590 }, // 170 LXVL_LXVLL
  { 1, 421, 423, 3590, 3593 }, // 171 LVEBX_LVEHX_LVEWX_LVX_LVXL
  { 1, 421, 423, 3593, 3596 }, // 172 LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD
  { 0, 0, 0, 0, 0 }, // 173 DFLOADf64_XFLOADf64_LIWZX
  { 0, 0, 0, 0, 0 }, // 174 DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP
  { 0, 0, 0, 0, 0 }, // 175 CP_COPY_CP_COPY8
  { 0, 0, 0, 0, 0 }, // 176 CP_PASTE_CP_PASTE8
  { 0, 0, 0, 0, 0 }, // 177 ICBI_ICBIEP
  { 1, 421, 423, 3596, 3599 }, // 178 ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI
  { 1, 439, 444, 3599, 3602 }, // 179 LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL
  { 1, 421, 423, 3602, 3605 }, // 180 LD_LDX_LDXTLS_LDXTLS__DARN
  { 1, 439, 444, 3605, 3608 }, // 181 LDARX_LDARXL
  { 0, 0, 0, 0, 0 }, // 182 CP_ABORT
  { 0, 0, 0, 0, 0 }, // 183 ISYNC
  { 0, 0, 0, 0, 0 }, // 184 MSGSYNC
  { 0, 0, 0, 0, 0 }, // 185 TLBSYNC
  { 0, 0, 0, 0, 0 }, // 186 SYNC
  { 1, 421, 423, 3608, 3611 }, // 187 LMW
  { 1, 421, 423, 3611, 3614 }, // 188 LFIWZX_LFDX_LFD
  { 0, 0, 0, 0, 0 }, // 189 SLBIA
  { 0, 0, 0, 0, 0 }, // 190 SLBIE
  { 0, 0, 0, 0, 0 }, // 191 SLBMFEE
  { 0, 0, 0, 0, 0 }, // 192 SLBMFEV
  { 0, 0, 0, 0, 0 }, // 193 SLBMTE
  { 0, 0, 0, 0, 0 }, // 194 TLBIEL
  { 1, 444, 448, 3614, 3618 }, // 195 LHZU_LHZU8_LWZU_LWZU8
  { 1, 448, 455, 3618, 3622 }, // 196 LHZUX_LHZUX8_LWZUX_LWZUX8
  { 1, 478, 480, 3622, 3624 }, // 197 TEND
  { 1, 439, 444, 3624, 3627 }, // 198 STBCX_STHCX_STWCX
  { 1, 439, 444, 3627, 3630 }, // 199 STDCX
  { 1, 421, 423, 3630, 3633 }, // 200 LDMX
  { 1, 455, 459, 3633, 3636 }, // 201 LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32
  { 0, 0, 0, 0, 0 }, // 202 CP_PASTE8o_CP_PASTEo
  { 1, 455, 459, 3636, 3639 }, // 203 LWA_LWA_32
  { 1, 478, 480, 3639, 3641 }, // 204 TCHECK
  { 1, 421, 423, 3641, 3644 }, // 205 LFIWAX
  { 1, 421, 423, 3644, 3647 }, // 206 LXSIWAX
  { 0, 0, 0, 0, 0 }, // 207 LIWAX
  { 1, 421, 423, 3647, 3650 }, // 208 LFSX_LFS
  { 1, 421, 423, 3650, 3653 }, // 209 LXSSP_LXSSPX
  { 0, 0, 0, 0, 0 }, // 210 XFLOADf32_DFLOADf32
  { 1, 459, 464, 3653, 3657 }, // 211 LHAU_LHAU8
  { 1, 464, 472, 3657, 3661 }, // 212 LHAUX_LHAUX8_LWAUX
  { 1, 421, 423, 3661, 3664 }, // 213 LXVH8X_LXVDSX_LXVW4X
  { 1, 482, 485, 3664, 3667 }, // 214 STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX
  { 1, 433, 436, 3667, 3670 }, // 215 STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32
  { 0, 0, 0, 0, 0 }, // 216 DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX
  { 1, 433, 436, 3670, 3673 }, // 217 STD_STDX_STDXTLS_STDXTLS_
  { 1, 421, 423, 3673, 3676 }, // 218 STBCIX_STDCIX_STHCIX_STWCIX_STSWI
  { 0, 0, 0, 0, 0 }, // 219 SLBIEG
  { 1, 421, 423, 3676, 3679 }, // 220 STMW
  { 0, 0, 0, 0, 0 }, // 221 TLBIE
  { 1, 433, 436, 3679, 3682 }, // 222 STVEBX_STVEHX_STVEWX_STVX_STVXL
  { 1, 482, 485, 3682, 3685 }, // 223 STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX
  { 1, 421, 423, 3685, 3688 }, // 224 STXVL_STXVLL
  { 1, 478, 480, 3688, 3690 }, // 225 MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8
  { 1, 413, 415, 3690, 3693 }, // 226 MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv
  { 0, 0, 0, 0, 0 }, // 227 MFPMR
  { 0, 0, 0, 0, 0 }, // 228 MTPMR
  { 0, 0, 0, 0, 0 }, // 229 MFTB_MFTB8
  { 0, 0, 0, 0, 0 }, // 230 MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8
  { 0, 0, 0, 0, 0 }, // 231 MFMSR
  { 0, 0, 0, 0, 0 }, // 232 MTMSR
  { 0, 0, 0, 0, 0 }, // 233 MTMSRD
  { 1, 478, 480, 3693, 3695 }, // 234 MTSPR_MTSPR8
  { 1, 426, 429, 3695, 3698 }, // 235 DIVW_DIVWU_MODSW
  { 1, 426, 429, 3698, 3701 }, // 236 DIVWE_DIVWEU_MODSD_MODUD_MODUW
  { 1, 423, 426, 3701, 3704 }, // 237 DIVD_DIVDU
  { 1, 423, 426, 3704, 3707 }, // 238 DIVDE_DIVDEU
  { 1, 426, 429, 3707, 3710 }, // 239 DIVWUo_DIVWo
  { 1, 423, 426, 3710, 3713 }, // 240 DIVDo_DIVDUo
  { 1, 426, 429, 3713, 3716 }, // 241 DIVWEo_DIVWEUo
  { 1, 423, 426, 3716, 3719 }, // 242 DIVDEo_DIVDEUo
  { 1, 472, 478, 3719, 3721 }, // 243 MTCRF_MTCRF8
  { 1, 413, 415, 3721, 3724 }, // 244 ADDC8o_ADDCo_SUBFC8o_SUBFCo
  { 1, 429, 431, 3724, 3727 }, // 245 FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo
  { 1, 415, 417, 3727, 3730 }, // 246 MCRFS
  { 0, 0, 0, 0, 0 }, // 247 MTFSF_MTFSFo_MTFSFI_MTFSFIo
  { 0, 0, 0, 0, 0 }, // 248 MTFSFb
  { 1, 413, 415, 3730, 3733 }, // 249 RLDCLo_RLDCRo
  { 1, 413, 415, 3733, 3736 }, // 250 RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo
  { 1, 413, 415, 3736, 3739 }, // 251 RLWIMI8o_RLWIMIo
  { 1, 413, 415, 3739, 3742 }, // 252 RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo
  { 1, 413, 415, 3742, 3745 }, // 253 SRAWIo_SRAWo
  { 0, 0, 0, 0, 0 }, // 254 MFFS_MFFSCE_MFFSL_MFFSo
  { 1, 419, 421, 3745, 3747 }, // 255 MFCR_MFCR8
  { 1, 413, 415, 3747, 3750 }, // 256 EXTSWSLIo_SRADIo_RLDICo
  { 1, 413, 415, 3750, 3753 }, // 257 SRADo_SLDo_SRDo
  { 1, 429, 431, 3753, 3756 }, // 258 FDIV
  { 1, 429, 431, 3756, 3759 }, // 259 FDIVo
  { 1, 429, 431, 3759, 3762 }, // 260 XSSQRTDP
  { 1, 429, 431, 3762, 3765 }, // 261 FSQRT
  { 1, 429, 431, 3765, 3768 }, // 262 XVSQRTDP
  { 1, 429, 431, 3768, 3771 }, // 263 XVSQRTSP
  { 1, 429, 431, 3771, 3774 }, // 264 FSQRTo
  { 1, 429, 431, 3774, 3777 }, // 265 XSSQRTSP
  { 1, 429, 431, 3777, 3780 }, // 266 FSQRTS
  { 1, 429, 431, 3780, 3783 }, // 267 FSQRTSo
  { 1, 429, 431, 3783, 3786 }, // 268 XSDIVDP
  { 1, 429, 431, 3786, 3789 }, // 269 FDIVS
  { 1, 429, 431, 3789, 3792 }, // 270 FDIVSo
  { 1, 429, 431, 3792, 3795 }, // 271 XSDIVSP
  { 1, 429, 431, 3795, 3798 }, // 272 XVDIVSP
  { 1, 429, 431, 3798, 3801 }, // 273 XVDIVDP
  { 1, 444, 448, 3801, 3805 }, // 274 LFSU
  { 1, 444, 448, 3805, 3809 }, // 275 LFSUX
  { 1, 485, 490, 3809, 3813 }, // 276 STFDU_STFDUX_STFSU_STFSUX
  { 1, 459, 464, 3813, 3817 }, // 277 STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8
  { 1, 490, 497, 3817, 3821 }, // 278 STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8
  { 1, 444, 448, 3821, 3825 }, // 279 LBZU_LBZU8
  { 1, 448, 455, 3825, 3829 }, // 280 LBZUX_LBZUX8
  { 1, 444, 448, 3829, 3833 }, // 281 LDU
  { 1, 448, 455, 3833, 3837 }, // 282 LDUX
  { 1, 444, 448, 3837, 3841 }, // 283 LFDU
  { 1, 444, 448, 3841, 3845 }, // 284 LFDUX
  { 1, 417, 419, 3845, 3848 }, // 285 VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX
  { 1, 415, 417, 3848, 3851 }, // 286 BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP
  { 1, 415, 417, 3851, 3854 }, // 287 ADDPCIS
  { 1, 421, 423, 3854, 3857 }, // 288 LDAT_LWAT
  { 1, 433, 436, 3857, 3860 }, // 289 STDAT_STWAT
  { 1, 411, 413, 3860, 3863 }, // 290 BRINC
  { 1, 431, 433, 3863, 3866 }, // 291 EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW
  { 1, 431, 433, 3866, 3869 }, // 292 EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW
  { 1, 421, 423, 3869, 3872 }, // 293 EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX
  { 1, 433, 436, 3872, 3875 }, // 294 EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX
  { 1, 415, 417, 3875, 3878 }, // 295 HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC
  { 0, 0, 0, 0, 0 }, // 296 RFI
  { 0, 0, 0, 0, 0 }, // 297 RFID
  { 1, 421, 423, 3878, 3881 }, // 298 DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI
  { 1, 433, 436, 3881, 3884 }, // 299 ICBLC_STBEPX_STHEPX_STWEPX
  { 1, 421, 423, 3884, 3887 }, // 300 LFDEPX
  { 1, 482, 485, 3887, 3890 }, // 301 STFDEPX
  { 0, 0, 0, 0, 0 }, // 302 MFSR_MFSRIN
  { 0, 0, 0, 0, 0 }, // 303 MTSR_MTSRIN
  { 0, 0, 0, 0, 0 }, // 304 MFDCR
  { 1, 478, 480, 3890, 3892 }, // 305 MTDCR
  { 1, 411, 413, 3892, 3895 }, // 306 NOP_GT_PWR6_NOP_GT_PWR7
  { 0, 0, 0, 0, 0 }, // 307 TLBIA
  { 0, 0, 0, 0, 0 }, // 308 WRTEE_WRTEEI
  { 0, 0, 0, 0, 0 }, // 309 MSYNC
  { 0, 0, 0, 0, 0 }, // 310 SLBSYNC
  { 0, 0, 0, 0, 0 }, // 311 STOP
  { 0, 0, 0, 0, 0 }, // 312 DCBA_DCBI
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 1,  2}, // #1
  { 2,  1}, // #2
  { 3,  1}, // #3
  { 7,  3}, // #4
  {13,  2}, // #5
  {14,  1}, // #6
  {15,  1}, // #7
  { 1,  1}, // #8
  { 7,  3}, // #9
  {13,  1}, // #10
  { 1,  1}, // #11
  { 7,  2}, // #12
  {13,  1}, // #13
  { 7,  3}, // #14
  { 9,  2}, // #15
  {10,  1}, // #16
  {11,  1}, // #17
  {13,  2}, // #18
  {14,  1}, // #19
  {15,  1}, // #20
  { 7,  3}, // #21
  { 9,  1}, // #22
  {13,  1}, // #23
  { 1,  1}, // #24
  { 7,  5}, // #25
  { 9,  1}, // #26
  {13,  2}, // #27
  { 7,  2}, // #28
  { 9,  1}, // #29
  {13,  1}, // #30
  { 7,  3}, // #31
  {13,  2}, // #32
  {14,  1}, // #33
  {15,  1}, // #34
  {17,  1}, // #35
  { 6,  1}, // #36
  { 7,  3}, // #37
  {13,  2}, // #38
  {14,  1}, // #39
  {15,  1}, // #40
  { 6, 11}, // #41
  { 7,  3}, // #42
  {13,  2}, // #43
  {14,  1}, // #44
  {15,  1}, // #45
  { 6, 12}, // #46
  { 7,  3}, // #47
  {13,  2}, // #48
  {14,  1}, // #49
  {15,  1}, // #50
  { 6, 25}, // #51
  { 7,  3}, // #52
  {13,  2}, // #53
  {14,  1}, // #54
  {15,  1}, // #55
  { 6, 44}, // #56
  { 7,  3}, // #57
  {13,  2}, // #58
  {14,  1}, // #59
  {15,  1}, // #60
  { 6, 62}, // #61
  { 7,  3}, // #62
  {13,  2}, // #63
  {14,  1}, // #64
  {15,  1}, // #65
  { 7,  2}, // #66
  {12,  1}, // #67
  {16,  1}, // #68
  { 7,  3}, // #69
  {12,  1}, // #70
  {16,  1}, // #71
  { 7,  4}, // #72
  {12,  2}, // #73
  {16,  2}, // #74
  { 1,  1}, // #75
  { 7,  4}, // #76
  {12,  1}, // #77
  {13,  1}, // #78
  {16,  1}, // #79
  { 1,  1}, // #80
  { 7,  5}, // #81
  {12,  1}, // #82
  {13,  2}, // #83
  {16,  1}, // #84
  { 1,  1}, // #85
  { 7,  6}, // #86
  {12,  1}, // #87
  {13,  1}, // #88
  {16,  1}, // #89
  { 1,  2}, // #90
  { 7,  6}, // #91
  {12,  1}, // #92
  {13,  2}, // #93
  {16,  1}, // #94
  { 7,  5}, // #95
  {12,  1}, // #96
  {13,  2}, // #97
  {14,  1}, // #98
  {15,  1}, // #99
  {16,  1}, // #100
  {17,  1}, // #101
  { 7,  3}, // #102
  {12,  1}, // #103
  {13,  1}, // #104
  {16,  1}, // #105
  { 7,  3}, // #106
  {12,  1}, // #107
  {13,  2}, // #108
  {14,  1}, // #109
  {15,  1}, // #110
  {16,  1}, // #111
  { 7,  3}, // #112
  { 8,  1}, // #113
  {13,  2}, // #114
  {14,  1}, // #115
  {15,  1}, // #116
  { 7,  3}, // #117
  { 8,  8}, // #118
  {13,  2}, // #119
  {14,  1}, // #120
  {15,  1}, // #121
  { 1,  1}, // #122
  { 7,  5}, // #123
  { 8,  8}, // #124
  {13,  3}, // #125
  {14,  1}, // #126
  {15,  1}, // #127
  { 1,  2}, // #128
  { 7,  6}, // #129
  {13,  2}, // #130
  { 1,  2}, // #131
  { 7,  4}, // #132
  {13,  2}, // #133
  { 1,  2}, // #134
  { 7,  5}, // #135
  {13,  2}, // #136
  { 1,  3}, // #137
  { 7,  9}, // #138
  {13,  3}, // #139
  { 7,  3}, // #140
  { 9,  8}, // #141
  {13,  1}, // #142
  { 1,  1}, // #143
  { 7,  5}, // #144
  { 9,  8}, // #145
  {13,  2}, // #146
  { 7,  2}, // #147
  { 9, 10}, // #148
  {13,  1}, // #149
  { 7,  3}, // #150
  { 9, 10}, // #151
  {13,  1}, // #152
  { 7,  3}, // #153
  { 9, 20}, // #154
  {13,  2}, // #155
  {14,  1}, // #156
  {15,  1}, // #157
  { 1,  1}, // #158
  { 7,  5}, // #159
  { 9, 10}, // #160
  {13,  2}, // #161
  { 7,  2}, // #162
  { 9,  5}, // #163
  {13,  1}, // #164
  { 7,  3}, // #165
  { 9,  5}, // #166
  {13,  1}, // #167
  { 1,  1}, // #168
  { 7,  5}, // #169
  { 9,  5}, // #170
  {13,  2}, // #171
  { 7,  2}, // #172
  { 9,  8}, // #173
  {13,  1}, // #174
  { 7,  3}, // #175
  { 9, 16}, // #176
  {10,  8}, // #177
  {11,  8}, // #178
  {13,  2}, // #179
  {14,  1}, // #180
  {15,  1}, // #181
  { 1,  2}, // #182
  { 7,  8}, // #183
  {12,  1}, // #184
  {13,  2}, // #185
  {16,  1}, // #186
  { 1,  1}, // #187
  { 7,  5}, // #188
  {12,  1}, // #189
  {13,  1}, // #190
  {16,  1}, // #191
  { 5,  1}, // #192
  { 7,  3}, // #193
  {13,  2}, // #194
  {14,  1}, // #195
  {15,  1}, // #196
  { 4,  1}, // #197
  { 7,  2}, // #198
  { 1,  1}, // #199
  { 4,  1}, // #200
  { 7,  4}, // #201
  {13,  1}, // #202
  { 7, 12}, // #203
  {12,  5}, // #204
  {13,  2}, // #205
  {16,  5}, // #206
  { 7,  7}, // #207
  {12,  3}, // #208
  {13,  1}, // #209
  {16,  3} // #210
}; // PPCWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 2,  0}, // #1 P9_ALUE_2C
  { 2,  0}, // #2 P9_ALUO_2C_P9_ALU_2C_P9_BR_2C
  { 1,  0}, // #3 IP_EXECE_1C_IP_EXEC_1C_DISP_1C
  { 1,  0}, // #4 IP_EXECO_1C_DISP_1C
  { 1,  0}, // #5 DISP_1C
  { 1,  0}, // #6 DISP_1C
  { 1,  0}, // #7 DISP_1C
  { 3,  0}, // #8 P9_ALU_3C
  { 1,  0}, // #9 IP_EXEC_1C
  { 1,  0}, // #10 DISP_1C
  { 1,  0}, // #11 DISP_1C
  { 1,  0}, // #12 DISP_1C
  { 3,  0}, // #13 P9_ALUE_3C
  { 3,  0}, // #14 P9_ALUO_3C_P9_PM_3C
  { 1,  0}, // #15 IP_EXECE_1C_IP_EXECO_1C
  { 1,  0}, // #16 IP_EXECO_1C_IP_EXECE_1C
  { 1,  0}, // #17 DISP_1C
  { 1,  0}, // #18 DISP_1C
  { 1,  0}, // #19 DISP_1C
  { 7,  0}, // #20 P9_DPE_7C
  { 7,  0}, // #21 P9_DPO_7C_P9_DP_7C_P9_ALU_2C
  { 1,  0}, // #22 IP_EXECE_1C_IP_EXEC_1C
  { 1,  0}, // #23 IP_EXECO_1C_DISP_1C
  { 1,  0}, // #24 DISP_1C
  { 1,  0}, // #25 DISP_1C
  { 1,  0}, // #26 DISP_1C
  { 5,  0}, // #27 P9_DP_5C_P9_LS_5C
  { 1,  0}, // #28 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #29 DISP_1C
  { 1,  0}, // #30 DISP_1C
  { 1,  0}, // #31 DISP_1C
  { 7,  0}, // #32 P9_DP_7C
  { 3,  0}, // #33 P9_ALU_3C
  { 1,  0}, // #34 IP_EXEC_1C_P9_LS_1C
  { 1,  0}, // #35 IP_EXEC_1C_IP_EXECE_1C
  { 1,  0}, // #36 DISP_1C_IP_AGEN_1C_IP_EXECO_1C
  { 1,  0}, // #37 DISP_1C_IP_AGEN_1C
  { 1,  0}, // #38 DISP_1C
  { 1,  0}, // #39 DISP_1C
  { 1,  0}, // #40 DISP_1C
  { 7,  0}, // #41 P9_ALU_2C
  { 1,  0}, // #42 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #43 IP_EXEC_1C
  { 1,  0}, // #44 DISP_1C
  { 1,  0}, // #45 DISP_1C
  { 1,  0}, // #46 DISP_1C
  { 1,  0}, // #47 DISP_1C
  { 1,  0}, // #48 DISP_1C
  {10,  0}, // #49 P9_ALU_3C
  { 1,  0}, // #50 IP_EXEC_1C
  { 1,  0}, // #51 IP_EXEC_1C
  { 1,  0}, // #52 DISP_1C
  { 1,  0}, // #53 DISP_1C
  { 1,  0}, // #54 DISP_1C
  { 1,  0}, // #55 DISP_1C
  { 1,  0}, // #56 DISP_1C
  {12,  0}, // #57 P9_DFU_12C_P9_DIV_12C
  { 1,  0}, // #58 IP_EXECE_1C
  { 1,  0}, // #59 IP_EXECO_1C
  { 1,  0}, // #60 DISP_1C
  { 1,  0}, // #61 DISP_1C
  { 1,  0}, // #62 DISP_1C
  {23,  0}, // #63 P9_DFU_23C
  { 1,  0}, // #64 IP_EXECE_1C
  { 1,  0}, // #65 IP_EXECO_1C
  { 1,  0}, // #66 DISP_1C
  { 1,  0}, // #67 DISP_1C
  { 1,  0}, // #68 DISP_1C
  {24,  0}, // #69 P9_DFU_24C_P9_DIV_24C_8
  { 1,  0}, // #70 IP_EXECE_1C_IP_EXECO_1C
  { 1,  0}, // #71 IP_EXECO_1C_IP_EXECE_1C
  { 1,  0}, // #72 DISP_1C
  { 1,  0}, // #73 DISP_1C
  { 1,  0}, // #74 DISP_1C
  {37,  0}, // #75 P9_DFU_37C
  { 1,  0}, // #76 IP_EXECE_1C
  { 1,  0}, // #77 IP_EXECO_1C
  { 1,  0}, // #78 DISP_1C
  { 1,  0}, // #79 DISP_1C
  { 1,  0}, // #80 DISP_1C
  {58,  0}, // #81 P9_DFU_58C
  { 1,  0}, // #82 IP_EXECE_1C
  { 1,  0}, // #83 IP_EXECO_1C
  { 1,  0}, // #84 DISP_1C
  { 1,  0}, // #85 DISP_1C
  { 1,  0}, // #86 DISP_1C
  {76,  0}, // #87 P9_DFU_76C
  { 1,  0}, // #88 IP_EXECE_1C
  { 1,  0}, // #89 IP_EXECO_1C
  { 1,  0}, // #90 DISP_1C
  { 1,  0}, // #91 DISP_1C
  { 1,  0}, // #92 DISP_1C
  { 6,  0}, // #93 P9_LS_6C
  { 1,  0}, // #94 IP_AGEN_1C
  { 1,  0}, // #95 DISP_1C
  { 1,  0}, // #96 DISP_1C
  { 4,  0}, // #97 P9_LS_4C
  { 1,  0}, // #98 IP_AGEN_1C
  { 1,  0}, // #99 DISP_1C
  { 1,  0}, // #100 DISP_1C
  { 4,  0}, // #101 P9_LS_4C
  { 1,  0}, // #102 IP_AGEN_1C
  { 1,  0}, // #103 DISP_1C
  { 1,  0}, // #104 DISP_1C
  { 1,  0}, // #105 DISP_1C
  { 4,  0}, // #106 P9_LS_4C
  { 4,  0}, // #107 P9_LS_4C_P9_ALU_2C
  { 1,  0}, // #108 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #109 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #110 DISP_1C
  { 1,  0}, // #111 DISP_1C
  { 1,  0}, // #112 DISP_1C
  { 1,  0}, // #113 DISP_1C
  { 4,  0}, // #114 P9_LS_4C
  { 2,  0}, // #115 P9_ALU_2C
  { 1,  0}, // #116 IP_EXEC_1C_IP_AGEN_1C
  { 1,  0}, // #117 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #118 DISP_1C
  { 1,  0}, // #119 DISP_1C
  { 1,  0}, // #120 DISP_1C
  { 1,  0}, // #121 DISP_1C
  { 3,  0}, // #122 P9_ALU_2C
  { 1,  0}, // #123 IP_EXEC_1C
  { 1,  0}, // #124 IP_EXEC_1C
  { 1,  0}, // #125 IP_AGEN_1C
  { 1,  0}, // #126 DISP_1C
  { 1,  0}, // #127 DISP_1C
  { 1,  0}, // #128 DISP_1C
  { 1,  0}, // #129 DISP_1C
  { 1,  0}, // #130 DISP_1C
  { 8,  0}, // #131 P9_LS_4C_P9_ALU_3C
  { 1,  0}, // #132 IP_AGEN_1C
  { 1,  0}, // #133 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #134 DISP_1C
  { 1,  0}, // #135 DISP_1C
  { 1,  0}, // #136 DISP_1C
  { 1,  0}, // #137 DISP_1C
  { 6,  0}, // #138 P9_ALU_2C_P9_CY_6C
  { 1,  0}, // #139 IP_EXEC_1C_IP_EXECO_1C
  { 1,  0}, // #140 IP_AGEN_1C_IP_EXECE_1C
  { 1,  0}, // #141 DISP_1C
  { 1,  0}, // #142 DISP_1C
  { 1,  0}, // #143 DISP_1C
  { 1,  0}, // #144 DISP_1C
  { 6,  0}, // #145 P9_ALU_2C_P9_ALU_3C
  { 1,  0}, // #146 IP_EXEC_1C
  { 1,  0}, // #147 IP_AGEN_1C_IP_EXEC_1C
  { 1,  0}, // #148 DISP_1C
  { 1,  0}, // #149 DISP_1C
  { 1,  0}, // #150 DISP_1C
  { 1,  0}, // #151 DISP_1C
  { 1,  0}, // #152 DISP_1C
  { 1,  0}, // #153 DISP_1C
  { 7,  0}, // #154 P9_ALU_3C
  { 1,  0}, // #155 IP_AGEN_1C
  { 1,  0}, // #156 IP_EXEC_1C
  { 1,  0}, // #157 DISP_1C
  { 1,  0}, // #158 DISP_1C
  { 1,  0}, // #159 DISP_1C
  { 1,  0}, // #160 DISP_1C
  { 1,  0}, // #161 DISP_1C
  { 1,  0}, // #162 DISP_1C
  { 6,  0}, // #163 P9_ALU_2C
  { 2,  0}, // #164 P9_ALU_2C
  { 1,  0}, // #165 IP_AGEN_1C
  { 1,  0}, // #166 IP_EXEC_1C
  { 1,  0}, // #167 IP_EXEC_1C
  { 1,  0}, // #168 DISP_1C
  { 1,  0}, // #169 DISP_1C
  { 1,  0}, // #170 DISP_1C
  { 1,  0}, // #171 DISP_1C
  { 1,  0}, // #172 DISP_1C
  { 1,  0}, // #173 DISP_1C
  { 8,  0}, // #174 P9_PM_3C
  { 1,  0}, // #175 IP_AGEN_1C
  { 1,  0}, // #176 IP_EXECE_1C
  { 1,  0}, // #177 IP_EXECO_1C
  { 1,  0}, // #178 DISP_1C
  { 1,  0}, // #179 DISP_1C
  { 1,  0}, // #180 DISP_1C
  { 1,  0}, // #181 DISP_1C
  { 1,  0}, // #182 DISP_1C
  { 5,  0}, // #183 P9_DIV_5C
  { 1,  0}, // #184 IP_EXECE_1C
  { 1,  0}, // #185 IP_EXECO_1C
  { 1,  0}, // #186 DISP_1C
  { 1,  0}, // #187 DISP_1C
  { 1,  0}, // #188 DISP_1C
  {16,  0}, // #189 P9_DIV_16C_8
  { 1,  0}, // #190 IP_EXECO_1C
  { 1,  0}, // #191 IP_EXECE_1C
  { 1,  0}, // #192 DISP_1C
  { 1,  0}, // #193 DISP_1C
  { 1,  0}, // #194 DISP_1C
  {40,  0}, // #195 P9_DIV_40C_8
  { 1,  0}, // #196 IP_EXECO_1C
  { 1,  0}, // #197 IP_EXECE_1C
  { 1,  0}, // #198 DISP_1C
  { 1,  0}, // #199 DISP_1C
  { 1,  0}, // #200 DISP_1C
  {18,  0}, // #201 P9_ALU_2C
  { 1,  0}, // #202 IP_EXECE_1C
  { 1,  0}, // #203 IP_EXECO_1C
  { 1,  0}, // #204 IP_EXEC_1C
  { 1,  0}, // #205 DISP_1C
  { 1,  0}, // #206 DISP_1C
  { 1,  0}, // #207 DISP_1C
  { 1,  0}, // #208 DISP_1C
  { 1,  0}, // #209 DISP_1C
  {26,  0}, // #210 P9_ALU_2C
  { 1,  0}, // #211 IP_EXECE_1C
  { 1,  0}, // #212 IP_EXECO_1C
  { 1,  0}, // #213 IP_EXEC_1C
  { 1,  0}, // #214 DISP_1C
  { 1,  0}, // #215 DISP_1C
  { 1,  0}, // #216 DISP_1C
  { 1,  0}, // #217 DISP_1C
  { 1,  0}, // #218 DISP_1C
  {42,  0}, // #219 P9_ALU_2C
  { 1,  0}, // #220 IP_EXECE_1C
  { 1,  0}, // #221 IP_EXECO_1C
  { 1,  0}, // #222 IP_EXEC_1C
  { 1,  0}, // #223 DISP_1C
  { 1,  0}, // #224 DISP_1C
  { 1,  0}, // #225 DISP_1C
  { 1,  0}, // #226 DISP_1C
  { 1,  0}, // #227 DISP_1C
  { 2,  0}, // #228 P9_ALU_2C
  { 2,  0}, // #229 P9_ALU_2C
  { 1,  0}, // #230 IP_EXEC_1C
  { 1,  0}, // #231 IP_EXEC_1C
  { 1,  0}, // #232 DISP_1C
  { 1,  0}, // #233 DISP_1C
  { 1,  0}, // #234 DISP_1C
  { 1,  0}, // #235 DISP_1C
  { 1,  0}, // #236 DISP_1C
  { 1,  0}, // #237 DISP_1C
  { 2,  0}, // #238 P9_ALU_2C
  { 3,  0}, // #239 P9_ALU_3C
  { 1,  0}, // #240 IP_EXEC_1C
  { 1,  0}, // #241 IP_EXEC_1C
  { 1,  0}, // #242 DISP_1C
  { 1,  0}, // #243 DISP_1C
  { 1,  0}, // #244 DISP_1C
  { 1,  0}, // #245 DISP_1C
  { 1,  0}, // #246 DISP_1C
  { 3,  0}, // #247 P9_ALU_3C
  { 3,  0}, // #248 P9_ALU_3C
  { 1,  0}, // #249 IP_EXEC_1C
  { 1,  0}, // #250 IP_EXEC_1C
  { 1,  0}, // #251 DISP_1C
  { 1,  0}, // #252 DISP_1C
  { 1,  0}, // #253 DISP_1C
  { 1,  0}, // #254 DISP_1C
  { 3,  0}, // #255 P9_ALU_3C
  { 3,  0}, // #256 P9_ALU_3C
  { 1,  0}, // #257 IP_EXEC_1C
  { 1,  0}, // #258 IP_EXEC_1C
  { 1,  0}, // #259 DISP_1C
  { 1,  0}, // #260 DISP_1C
  { 1,  0}, // #261 DISP_1C
  { 1,  0}, // #262 DISP_1C
  { 1,  0}, // #263 DISP_1C
  { 1,  0}, // #264 DISP_1C
  { 4,  0}, // #265 P9_ALU_2C
  { 1,  0}, // #266 IP_EXEC_1C
  { 1,  0}, // #267 IP_EXEC_1C
  { 1,  0}, // #268 DISP_1C
  { 1,  0}, // #269 DISP_1C
  { 1,  0}, // #270 DISP_1C
  { 1,  0}, // #271 DISP_1C
  { 1,  0}, // #272 DISP_1C
  { 6,  0}, // #273 P9_ALU_2C
  { 1,  0}, // #274 IP_EXEC_1C
  { 1,  0}, // #275 IP_EXEC_1C
  { 1,  0}, // #276 IP_EXEC_1C
  { 1,  0}, // #277 DISP_1C
  { 1,  0}, // #278 DISP_1C
  { 1,  0}, // #279 DISP_1C
  { 1,  0}, // #280 DISP_1C
  { 1,  0}, // #281 DISP_1C
  { 1,  0}, // #282 DISP_1C
  { 1,  0}, // #283 DISP_1C
  { 1,  0}, // #284 DISP_1C
  { 1,  0}, // #285 DISP_1C
  {33,  0}, // #286 P9_DP_33C_8
  { 1,  0}, // #287 IP_EXEC_1C
  { 1,  0}, // #288 DISP_1C
  { 1,  0}, // #289 DISP_1C
  { 1,  0}, // #290 DISP_1C
  {36,  0}, // #291 P9_ALU_3C_P9_DP_36C_10
  { 1,  0}, // #292 IP_EXEC_1C
  { 1,  0}, // #293 IP_EXEC_1C_DISP_1C
  { 1,  0}, // #294 DISP_1C
  { 1,  0}, // #295 DISP_1C
  { 1,  0}, // #296 DISP_1C
  { 1,  0}, // #297 DISP_1C
  { 1,  0}, // #298 DISP_1C
  {36,  0}, // #299 P9_DPE_36C_10
  {36,  0}, // #300 P9_DPO_36C_10
  { 1,  0}, // #301 IP_EXECE_1C
  { 1,  0}, // #302 IP_EXECO_1C
  { 1,  0}, // #303 DISP_1C
  { 1,  0}, // #304 DISP_1C
  { 1,  0}, // #305 DISP_1C
  {27,  0}, // #306 P9_DPE_27C_10
  {27,  0}, // #307 P9_DPO_27C_10
  { 1,  0}, // #308 IP_EXECE_1C
  { 1,  0}, // #309 IP_EXECO_1C
  { 1,  0}, // #310 DISP_1C
  { 1,  0}, // #311 DISP_1C
  { 1,  0}, // #312 DISP_1C
  {39,  0}, // #313 P9_ALU_3C
  { 1,  0}, // #314 IP_EXEC_1C
  { 1,  0}, // #315 IP_EXEC_1C
  { 1,  0}, // #316 DISP_1C
  { 1,  0}, // #317 DISP_1C
  { 1,  0}, // #318 DISP_1C
  { 1,  0}, // #319 DISP_1C
  { 1,  0}, // #320 DISP_1C
  {22,  0}, // #321 P9_DP_26C_5_P9_DP_22C_5
  { 1,  0}, // #322 IP_EXEC_1C
  { 1,  0}, // #323 DISP_1C
  { 1,  0}, // #324 DISP_1C
  {22,  0}, // #325 P9_DP_26C_5_P9_DP_22C_5
  { 1,  0}, // #326 IP_EXEC_1C
  { 1,  0}, // #327 DISP_1C
  { 1,  0}, // #328 DISP_1C
  { 1,  0}, // #329 DISP_1C
  {25,  0}, // #330 P9_ALU_3C
  { 1,  0}, // #331 IP_EXEC_1C
  { 1,  0}, // #332 IP_EXEC_1C
  { 1,  0}, // #333 DISP_1C
  { 1,  0}, // #334 DISP_1C
  { 1,  0}, // #335 DISP_1C
  { 1,  0}, // #336 DISP_1C
  { 1,  0}, // #337 DISP_1C
  {24,  0}, // #338 P9_DPE_24C_8
  {24,  0}, // #339 P9_DPO_24C_8
  { 1,  0}, // #340 IP_EXECE_1C
  { 1,  0}, // #341 IP_EXECO_1C
  { 1,  0}, // #342 DISP_1C
  { 1,  0}, // #343 DISP_1C
  { 1,  0}, // #344 DISP_1C
  {33,  0}, // #345 P9_DPE_33C_8
  {33,  0}, // #346 P9_DPO_33C_8
  { 1,  0}, // #347 IP_EXECE_1C
  { 1,  0}, // #348 IP_EXECO_1C
  { 1,  0}, // #349 DISP_1C
  { 1,  0}, // #350 DISP_1C
  { 1,  0}, // #351 DISP_1C
  { 7,  0}, // #352 P9_ALU_3C
  { 2,  0}, // #353 P9_ALU_2C
  { 1,  0}, // #354 IP_AGEN_1C
  { 1,  0}, // #355 IP_EXEC_1C
  { 1,  0}, // #356 IP_EXEC_1C
  { 1,  0}, // #357 DISP_1C
  { 1,  0}, // #358 DISP_1C
  { 1,  0}, // #359 DISP_1C
  { 1,  0}, // #360 DISP_1C
  { 1,  0}, // #361 DISP_1C
  { 1,  0}, // #362 DISP_1C
  { 1,  0}, // #363 DISP_1C
  { 1,  0}, // #364 DISP_1C
  { 1,  0}, // #365 P9_LS_1C
  { 2,  0}, // #366 P9_ALU_2C
  { 1,  0}, // #367 IP_AGEN_1C
  { 1,  0}, // #368 IP_EXEC_1C
  { 1,  0}, // #369 IP_EXEC_1C
  { 1,  0}, // #370 DISP_1C
  { 1,  0}, // #371 DISP_1C
  { 1,  0}, // #372 DISP_1C
  { 1,  0}, // #373 DISP_1C
  { 1,  0}, // #374 DISP_1C
  { 4,  0}, // #375 P9_LS_4C
  { 2,  0}, // #376 P9_ALU_2C
  { 1,  0}, // #377 IP_AGEN_1C
  { 1,  0}, // #378 IP_EXEC_1C
  { 1,  0}, // #379 DISP_1C
  { 1,  0}, // #380 DISP_1C
  { 1,  0}, // #381 DISP_1C
  { 1,  0}, // #382 DISP_1C
  { 1,  0}, // #383 DISP_1C
  { 1,  0}, // #384 P9_LS_1C
  { 1,  0}, // #385 P9_LS_1C
  { 4,  0}, // #386 P9_LS_4C
  { 4,  0}, // #387 P9_LS_4C
  { 4,  0}, // #388 P9_LS_4C
  { 1,  0}, // #389 IP_EXEC_1C
  { 1,  0}, // #390 IP_EXEC_1C
  { 1,  0}, // #391 IP_AGEN_1C
  { 1,  0}, // #392 IP_AGEN_1C
  { 1,  0}, // #393 IP_AGEN_1C
  { 1,  0}, // #394 IP_AGEN_1C
  { 1,  0}, // #395 IP_AGEN_1C
  { 1,  0}, // #396 DISP_1C
  { 1,  0}, // #397 DISP_1C
  { 1,  0}, // #398 DISP_1C
  { 1,  0}, // #399 DISP_1C
  { 1,  0}, // #400 DISP_1C
  { 1,  0}, // #401 DISP_1C
  { 1,  0}, // #402 DISP_1C
  { 1,  0}, // #403 DISP_1C
  { 1,  0}, // #404 DISP_1C
  { 1,  0}, // #405 DISP_1C
  { 1,  0}, // #406 DISP_1C
  { 1,  0}, // #407 DISP_1C
  { 1,  0}, // #408 P9_LS_1C
  { 4,  0}, // #409 P9_LS_4C
  { 4,  0}, // #410 P9_LS_4C
  { 1,  0}, // #411 IP_EXEC_1C
  { 1,  0}, // #412 IP_AGEN_1C
  { 1,  0}, // #413 IP_AGEN_1C
  { 1,  0}, // #414 IP_AGEN_1C
  { 1,  0}, // #415 DISP_1C
  { 1,  0}, // #416 DISP_1C
  { 1,  0}, // #417 DISP_1C
  { 1,  0}, // #418 DISP_1C
  { 1,  0}, // #419 DISP_1C
  { 1,  0}, // #420 DISP_1C
  { 1,  0} // #421 DISP_1C
}; // PPCWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // PPCReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc P9ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  16383, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIC_LdStSync")       0, false, false,  0, 0,  0, 0,  0, 0}, // #1
  {DBGFIELD("IIC_IntSimple")      0, false, false,  0, 0,  0, 0,  0, 0}, // #2
  {DBGFIELD("IIC_IntGeneral")     0, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("IIC_BrB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("IIC_VecFP")          0, false, false,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("IIC_IntCompare")     0, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("IIC_SprABORT")       0, false, false,  0, 0,  0, 0,  0, 0}, // #7
  {DBGFIELD("IIC_LdStCOPY")       0, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("IIC_LdStPASTE")      0, false, false,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("IIC_BrCR")           0, false, false,  0, 0,  0, 0,  0, 0}, // #10
  {DBGFIELD("IIC_LdStLD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #11
  {DBGFIELD("IIC_LdStDCBF")       0, false, false,  0, 0,  0, 0,  0, 0}, // #12
  {DBGFIELD("IIC_LdStLoad")       0, false, false,  0, 0,  0, 0,  0, 0}, // #13
  {DBGFIELD("IIC_IntDivD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #14
  {DBGFIELD("IIC_IntDivW")        0, false, false,  0, 0,  0, 0,  0, 0}, // #15
  {DBGFIELD("IIC_FPDGeneral")     0, false, false,  0, 0,  0, 0,  0, 0}, // #16
  {DBGFIELD("IIC_FPAddSub")       0, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("IIC_FPDivD")         0, false, false,  0, 0,  0, 0,  0, 0}, // #18
  {DBGFIELD("IIC_FPSGeneral")     0, false, false,  0, 0,  0, 0,  0, 0}, // #19
  {DBGFIELD("IIC_FPCompare")      0, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("IIC_FPGeneral")      0, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("IIC_VecGeneral")     0, false, false,  0, 0,  0, 0,  0, 0}, // #22
  {DBGFIELD("IIC_VecComplex")     0, false, false,  0, 0,  0, 0,  0, 0}, // #23
  {DBGFIELD("IIC_LdStStore")      0, false, false,  0, 0,  0, 0,  0, 0}, // #24
  {DBGFIELD("IIC_IntRotateDI")    0, false, false,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("IIC_FPDivS")         0, false, false,  0, 0,  0, 0,  0, 0}, // #26
  {DBGFIELD("IIC_FPFused")        0, false, false,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("IIC_FPSqrtD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #28
  {DBGFIELD("IIC_FPSqrtS")        0, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("IIC_LdStICBI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("IIC_IntISEL")        0, false, false,  0, 0,  0, 0,  0, 0}, // #31
  {DBGFIELD("IIC_SprISYNC")       0, false, false,  0, 0,  0, 0,  0, 0}, // #32
  {DBGFIELD("IIC_LdStLWARX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #33
  {DBGFIELD("IIC_LdStLoadUpd")    0, false, false,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("IIC_LdStLoadUpdX")   0, false, false,  0, 0,  0, 0,  0, 0}, // #35
  {DBGFIELD("IIC_LdStLDARX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #36
  {DBGFIELD("IIC_LdStLDU")        0, false, false,  0, 0,  0, 0,  0, 0}, // #37
  {DBGFIELD("IIC_LdStLDUX")       0, false, false,  0, 0,  0, 0,  0, 0}, // #38
  {DBGFIELD("IIC_LdStLFD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #39
  {DBGFIELD("IIC_LdStLFDU")       0, false, false,  0, 0,  0, 0,  0, 0}, // #40
  {DBGFIELD("IIC_LdStLFDUX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #41
  {DBGFIELD("IIC_LdStLHA")        0, false, false,  0, 0,  0, 0,  0, 0}, // #42
  {DBGFIELD("IIC_LdStLHAU")       0, false, false,  0, 0,  0, 0,  0, 0}, // #43
  {DBGFIELD("IIC_LdStLHAUX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #44
  {DBGFIELD("IIC_LdStLMW")        0, false, false,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("IIC_LdStLWA")        0, false, false,  0, 0,  0, 0,  0, 0}, // #46
  {DBGFIELD("IIC_IntMulHD")       0, false, false,  0, 0,  0, 0,  0, 0}, // #47
  {DBGFIELD("IIC_BrMCR")          0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("IIC_BrMCRX")         0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("IIC_SprMFCR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("IIC_SprMFSPR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("IIC_IntMFFS")        0, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("IIC_SprMFMSR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("IIC_SprMFCRF")       0, false, false,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("IIC_SprMFPMR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("IIC_SprMFSR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("IIC_SprMFTB")        0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("IIC_SprMSGSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #58
  {DBGFIELD("IIC_SprMTSPR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("IIC_IntMTFSB0")      0, false, false,  0, 0,  0, 0,  0, 0}, // #60
  {DBGFIELD("IIC_SprMTMSR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #61
  {DBGFIELD("IIC_SprMTMSRD")      0, false, false,  0, 0,  0, 0,  0, 0}, // #62
  {DBGFIELD("IIC_SprMTPMR")       0, false, false,  0, 0,  0, 0,  0, 0}, // #63
  {DBGFIELD("IIC_SprMTSR")        0, false, false,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("IIC_IntMulHW")       0, false, false,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("IIC_IntMulHWU")      0, false, false,  0, 0,  0, 0,  0, 0}, // #66
  {DBGFIELD("IIC_IntMulLI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #67
  {DBGFIELD("IIC_VecPerm")        0, false, false,  0, 0,  0, 0,  0, 0}, // #68
  {DBGFIELD("IIC_LdStSTFD")       0, false, false,  0, 0,  0, 0,  0, 0}, // #69
  {DBGFIELD("IIC_LdStSTFDU")      0, false, false,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("IIC_SprRFI")         0, false, false,  0, 0,  0, 0,  0, 0}, // #71
  {DBGFIELD("IIC_IntRFID")        0, false, false,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("IIC_IntRotateD")     0, false, false,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("IIC_IntRotate")      0, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("IIC_SprSLBIA")       0, false, false,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("IIC_SprSLBIE")       0, false, false,  0, 0,  0, 0,  0, 0}, // #76
  {DBGFIELD("IIC_SprSLBIEG")      0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("IIC_SprSLBMFEE")     0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("IIC_SprSLBMFEV")     0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("IIC_SprSLBMTE")      0, false, false,  0, 0,  0, 0,  0, 0}, // #80
  {DBGFIELD("IIC_SprSLBSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("IIC_IntShift")       0, false, false,  0, 0,  0, 0,  0, 0}, // #82
  {DBGFIELD("IIC_LdStSTWCX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #83
  {DBGFIELD("IIC_LdStSTU")        0, false, false,  0, 0,  0, 0,  0, 0}, // #84
  {DBGFIELD("IIC_LdStSTUX")       0, false, false,  0, 0,  0, 0,  0, 0}, // #85
  {DBGFIELD("IIC_LdStSTD")        0, false, false,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("IIC_LdStSTDCX")      0, false, false,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("IIC_SprSTOP")        0, false, false,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("IIC_IntTrapD")       0, false, false,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("IIC_SprTLBIA")       0, false, false,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("IIC_SprTLBIE")       0, false, false,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("IIC_SprTLBIEL")      0, false, false,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("IIC_SprTLBSYNC")     0, false, false,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("IIC_IntTrapW")       0, false, false,  0, 0,  0, 0,  0, 0}, // #94
  {DBGFIELD("IIC_VecFPCompare")   0, false, false,  0, 0,  0, 0,  0, 0}, // #95
  {DBGFIELD("VADDUBM_VADDUDM_VADDUHM_VADDUWM_VEXTSB2D_VEXTSB2Ds_VEXTSB2W_VEXTSB2Ws_VEXTSH2D_VEXTSH2Ds_VEXTSH2W_VEXTSH2Ws_VEXTSW2D_VEXTSW2Ds_VSLD_VSRD_VSUBUBM_VSUBUDM_VSUBUHM_VSUBUWM_VPOPCNTB_VPOPCNTH_VSRAD_MTVSRDD_VEQV_VNAND_VNEGD_VNEGW_VORC_XXLAND_XXLANDC_XXLEQV_XXLNAND_XXLNOR_XXLOR_XXLORf_XXLORC_XXLXOR_XXLXORdpz_XXLXORspz_XXLXORz") 2, false, false,  1, 7,  1, 7,  0, 0}, // #96
  {DBGFIELD("VAND_VANDC_V_SET0_V_SET0B_V_SET0H_VSLB_VSLH_VSLW_VSRB_VSRH_VSRW_VRLB_VRLD_VRLH_VRLW_VSRAB_VSRAH_VSRAW_XVABSDP_XVABSSP_XVNABSDP_XVNABSSP_XVCPSGNDP_XVCPSGNSP_XVIEXPDP_XVIEXPSP_XVXEXPDP_XVXEXPSP_VRLDMI_VRLDNM_VRLWMI_VRLWNM_VMRGEW_VMRGOW_VNOR_VOR_VSEL_VXOR_XVNEGDP_XVNEGSP_XSABSQP_XSCPSGNQP_XSIEXPQP_XSNABSQP_XSNEGQP_XSXEXPQP") 2, false, false,  1, 7,  1, 7,  0, 0}, // #97
  {DBGFIELD("XXSEL")              2, false, false,  1, 7,  1, 7,  0, 0}, // #98
  {DBGFIELD("TABORTDC_TABORTDCI_TABORTWC_TABORTWCI") 1, false, false,  8, 3,  8, 5,  0, 0}, // #99
  {DBGFIELD("MTFSB0_MTFSB1")      1, false, false,  8, 3,  8, 5,  0, 0}, // #100
  {DBGFIELD("MFFSCDRN_MFFSCDRNI_MFFSCRN_MFFSCRNI") 1, false, false,  8, 3,  8, 5,  0, 0}, // #101
  {DBGFIELD("CMPRB_CMPRB8_CMPEQB") 1, false, false,  8, 3,  8, 5,  0, 0}, // #102
  {DBGFIELD("TD_TDI")             1, false, false,  8, 3,  8, 5,  0, 0}, // #103
  {DBGFIELD("TW_TWI")             1, false, false,  8, 3,  8, 5,  0, 0}, // #104
  {DBGFIELD("FCMPUD_FCMPUS_FTDIV_FTSQRT") 1, false, false,  8, 3,  8, 5,  0, 0}, // #105
  {DBGFIELD("XSTSTDCDP_XSTSTDCSP") 1, false, false,  8, 3,  8, 5,  0, 0}, // #106
  {DBGFIELD("XSMAXCDP_XSMAXDP_XSMAXJDP_XSMINCDP_XSMINDP_XSMINJDP_XSXSIGDP_XSCVSPDPN") 1, false, false, 11, 3,  8, 4,  0, 0}, // #107
  {DBGFIELD("XSCMPEQDP_XSCMPEXPDP_XSCMPGEDP_XSCMPGTDP_XSCMPODP_XSCMPUDP_XSTDIVDP_XSTSQRTDP") 1, false, false, 11, 3,  8, 4,  0, 0}, // #108
  {DBGFIELD("CNTLZD_CNTLZDo_CNTLZW_CNTLZW8_CNTLZW8o_CNTLZWo_CNTTZD_CNTTZDo_CNTTZW_CNTTZW8_CNTTZW8o_CNTTZWo_POPCNTD_POPCNTW_CMPB_CMPB8_SETB_SETB8_BPERMD") 1, false, false, 11, 3,  8, 4,  0, 0}, // #109
  {DBGFIELD("SLD_SRD_SRAD")       1, false, false, 11, 3,  2, 4,  0, 0}, // #110
  {DBGFIELD("SRADI_EXTSWSLI_SRADI_32_RLDIC") 1, false, false, 11, 3,  2, 4,  0, 0}, // #111
  {DBGFIELD("MFVRD_MFVSRD_MTVSRD_MTVSRWA_MTVSRWZ_MFVSRWZ") 1, false, false, 11, 3,  2, 4,  0, 0}, // #112
  {DBGFIELD("CMPLW_CMPLWI_CMPW_CMPWI_CMPD_CMPDI_CMPLD_CMPLDI") 1, false, false, 11, 3,  2, 4,  0, 0}, // #113
  {DBGFIELD("SUBFC_SUBFC8_SUBFIC_SUBFIC8_ANDISo_ANDISo8_ANDIo_ANDIo8_ADDC_ADDC8_ADDIC_ADDIC8_ADDICo_ADDE_ADDE8_ADDE8o_ADDEo_ADDME_ADDME8_ADDME8o_ADDMEo_ADDZE_ADDZE8_ADDZE8o_ADDZEo_SUBF_SUBF8_SUBF8o_SUBFE_SUBFE8_SUBFE8o_SUBFEo_SUBFME_SUBFME8_SUBFME8o_SUBFMEo_SUBFZE_SUBFZE8_SUBFZE8o_SUBFZEo_SUBFo_POPCNTB_LA") 1, false, false, 11, 3,  2, 4,  0, 0}, // #114
  {DBGFIELD("ADD4_ADD4o_ADD8_ADD8o_NEG_NEG8_NEG8o_NEGo_ADDI_ADDI8_ADDIS_ADDIS8_LI_LI8_LIS_LIS8_OR_OR8_OR8o_ORI_ORI8_ORIS_ORIS8_ORo_XOR_XOR8_XOR8o_XORI_XORI8_XORIS_XORIS8_XORo_NAND_NAND8_NAND8o_NANDo_AND_AND8_AND8o_ANDC_ANDC8_ANDC8o_ANDCo_ANDo_NOR_NOR8_NOR8o_NORo_ORC_ORC8_ORC8o_ORCo_EQV_EQV8_EQV8o_EQVo_EXTSB_EXTSB8_EXTSB8_32_64_EXTSB8o_EXTSBo_EXTSH_EXTSH8_EXTSH8_32_64_EXTSH8o_EXTSHo_EXTSW_EXTSW_32_EXTSW_32_64_EXTSW_32_64o_EXTSWo_ADD4TLS_ADD8TLS_ADD8TLS__NOP") 1, false, false, 11, 3,  2, 4,  0, 0}, // #115
  {DBGFIELD("ADDIStocHA_ADDItocL_COPY") 1, false, false, 11, 3,  2, 4,  0, 0}, // #116
  {DBGFIELD("MCRF")               1, false, false, 11, 3,  2, 4,  0, 0}, // #117
  {DBGFIELD("MCRXRX")             1, false, false, 11, 3,  2, 4,  0, 0}, // #118
  {DBGFIELD("XSNABSDP_XSXEXPDP_XSABSDP_XSNEGDP_XSCPSGNDP") 1, false, false, 11, 3,  2, 4,  0, 0}, // #119
  {DBGFIELD("RFEBB")              1, false, false, 11, 3,  2, 4,  0, 0}, // #120
  {DBGFIELD("TBEGIN_TRECHKPT")    1, false, false, 11, 3,  2, 4,  0, 0}, // #121
  {DBGFIELD("WAIT")               1, false, false, 11, 3,  2, 4,  0, 0}, // #122
  {DBGFIELD("RLDCL_RLDCR")        1, false, false,  8, 3,  2, 5,  0, 0}, // #123
  {DBGFIELD("RLWIMI_RLWIMI8")     1, false, false,  8, 3,  2, 5,  0, 0}, // #124
  {DBGFIELD("RLDICL_RLDICL_32_RLDICL_32_64_RLDICR_RLDICR_32_RLDIMI") 1, false, false,  8, 3,  2, 5,  0, 0}, // #125
  {DBGFIELD("MFOCRF_MFOCRF8")     1, false, false,  8, 3,  2, 5,  0, 0}, // #126
  {DBGFIELD("MTOCRF_MTOCRF8")     1, false, false,  8, 3,  2, 5,  0, 0}, // #127
  {DBGFIELD("CR6SET_CR6UNSET_CRSET_CRUNSET_CRAND_CRANDC_CRNAND_CRNOR_CROR_CRORC_CREQV_CRXOR") 1, false, false,  8, 3,  2, 5,  0, 0}, // #128
  {DBGFIELD("SLW_SLW8_SRW_SRW8_RLWINM_RLWINM8_RLWNM_RLWNM8") 1, false, false,  8, 3,  2, 5,  0, 0}, // #129
  {DBGFIELD("FABSD_FABSS_FNABSD_FNABSS_FNEGD_FNEGS_FCPSGND_FCPSGNS_FMR") 1, false, false,  8, 3,  2, 5,  0, 0}, // #130
  {DBGFIELD("SRAW_SRAWI")         1, false, false,  8, 3,  2, 5,  0, 0}, // #131
  {DBGFIELD("ISEL_ISEL8")         1, false, false,  8, 3,  2, 5,  0, 0}, // #132
  {DBGFIELD("XSIEXPDP")           1, false, false,  8, 3,  2, 5,  0, 0}, // #133
  {DBGFIELD("TRECLAIM_TSR_TABORT") 1, false, false,  8, 3,  2, 5,  0, 0}, // #134
  {DBGFIELD("MFVSCR")             2, false, false,  1, 7, 13, 7,  0, 0}, // #135
  {DBGFIELD("MTVSCR")             2, false, false,  1, 7, 13, 7,  0, 0}, // #136
  {DBGFIELD("VCMPNEZB_VCMPNEZH_VCMPNEZW_VCMPEQUB_VCMPEQUD_VCMPEQUH_VCMPEQUW_VCMPNEB_VCMPNEH_VCMPNEW_VCMPEQFP_VCMPEQFPo_VCMPGEFP_VCMPGEFPo_VCMPGTFP_VCMPGTFPo_VCMPBFP_VCMPBFPo_VCMPGTSB_VCMPGTSBo_VCMPGTSD_VCMPGTSDo_VCMPGTSH_VCMPGTSHo_VCMPGTSW_VCMPGTSWo_VCMPGTUB_VCMPGTUBo_VCMPGTUD_VCMPGTUDo_VCMPGTUH_VCMPGTUHo_VCMPGTUW_VCMPGTUWo_VCMPNEBo_VCMPNEHo_VCMPNEWo_VCMPNEZBo_VCMPNEZHo_VCMPNEZWo_VCMPEQUBo_VCMPEQUDo_VCMPEQUHo_VCMPEQUWo_XVCMPEQDP_XVCMPEQDPo_XVCMPEQSP_XVCMPEQSPo_XVCMPGEDP_XVCMPGEDPo_XVCMPGESP_XVCMPGESPo_XVCMPGTDP_XVCMPGTDPo_XVCMPGTSP_XVCMPGTSPo") 2, false, false,  1, 7, 13, 7,  0, 0}, // #137
  {DBGFIELD("VABSDUB_VABSDUH_VABSDUW_VCLZB_VCLZD_VCLZH_VCLZW_VCTZB_VCTZD_VCTZH_VCTZW_VPOPCNTW_VPOPCNTD_VPRTYBD_VPRTYBW") 2, false, false,  1, 7, 13, 7,  0, 0}, // #138
  {DBGFIELD("VADDUBS_VADDUHS_VADDUWS_VAVGSB_VAVGSH_VAVGSW_VAVGUB_VAVGUH_VAVGUW_VADDSBS_VADDSHS_VADDSWS_VMAXFP_VMINFP_VMAXSB_VMAXSD_VMAXSH_VMAXSW_VMAXUB_VMAXUD_VMAXUH_VMAXUW_VMINSB_VMINSD_VMINSH_VMINSW_VMINUB_VMINUD_VMINUH_VMINUW_VBPERMD_VADDCUW_VSHASIGMAD_VSHASIGMAW_VSUBSBS_VSUBSHS_VSUBSWS_VSUBUBS_VSUBUHS_VSUBUWS_VSUBCUW_XVMAXDP_XVMAXSP_XVMINDP_XVMINSP_XVTSTDCDP_XVTSTDCSP_XVXSIGDP_XVXSIGSP") 2, false, false,  1, 7, 13, 7,  0, 0}, // #139
  {DBGFIELD("XVTDIVDP_XVTDIVSP_XVTSQRTDP_XVTSQRTSP") 2, false, false,  1, 7, 13, 7,  0, 0}, // #140
  {DBGFIELD("VADDFP_VCTSXS_VCTSXS_0_VCTUXS_VCTUXS_0_VEXPTEFP_VLOGEFP_VMADDFP_VMHADDSHS_VNMSUBFP_VREFP_VRFIM_VRFIN_VRFIP_VRFIZ_VRSQRTEFP_XVADDDP_XVADDSP_XVCVDPSP_XVCVDPSXDS_XVCVDPSXWS_XVCVDPUXDS_XVCVDPUXWS_XVCVHPSP_XVCVSPDP_XVCVSPHP_XVCVSPSXDS_XVCVSPSXWS_XVCVSPUXDS_XVCVSPUXWS_XVCVSXDDP_XVCVSXDSP_XVCVSXWDP_XVCVSXWSP_XVCVUXDDP_XVCVUXDSP_XVCVUXWDP_XVCVUXWSP_XVMADDADP_XVMADDASP_XVMADDMDP_XVMADDMSP_XVMSUBADP_XVMSUBASP_XVMSUBMDP_XVMSUBMSP_XVMULDP_XVMULSP_XVNMADDADP_XVNMADDASP_XVNMADDMDP_XVNMADDMSP_XVNMSUBADP_XVNMSUBASP_XVNMSUBMDP_XVNMSUBMSP_XVRDPI_XVRDPIC_XVRDPIM_XVRDPIP_XVRDPIZ_XVREDP_XVRESP_XVRSPI_XVRSPIC_XVRSPIM_XVRSPIP_XVRSPIZ_XVRSQRTEDP_XVRSQRTESP_XVSUBDP_XVSUBSP_VCFSX_VCFSX_0_VCFUX_VCFUX_0_VMHRADDSHS_VMLADDUHM_VMSUMMBM_VMSUMSHM_VMSUMSHS_VMSUMUBM_VMSUMUHM_VMSUMUHS_VMULESB_VMULESH_VMULESW_VMULEUB_VMULEUH_VMULEUW_VMULOSB_VMULOSH_VMULOSW_VMULOUB_VMULOUH_VMULOUW_VSUM2SWS_VSUM4SBS_VSUM4SHS_VSUM4UBS_VSUMSWS") 2, false, false, 14, 7, 20, 7,  0, 0}, // #141
  {DBGFIELD("VSUBFP_VMULUWM")     2, false, false, 14, 7, 20, 7,  0, 0}, // #142
  {DBGFIELD("MADDHD_MADDHDU_MADDLD_MULLD") 1, false, false, 21, 3, 27, 5,  0, 0}, // #143
  {DBGFIELD("MULHD_MULHW_MULLW")  1, false, false, 21, 3, 27, 5,  0, 0}, // #144
  {DBGFIELD("MULHDU_MULHWU")      1, false, false, 21, 3, 27, 5,  0, 0}, // #145
  {DBGFIELD("MULLI_MULLI8")       1, false, false, 21, 3, 27, 5,  0, 0}, // #146
  {DBGFIELD("FRSP_FRIMD_FRIMS_FRIND_FRINS_FRIPD_FRIPS_FRIZD_FRIZS_FRE_FRES_FADDS_FMSUBS_FMADDS_FSUBS_FCFID_FCFIDS_FCFIDU_FCFIDUS_FCTID_FCTIDU_FCTIDUZ_FCTIDZ_FCTIW_FCTIWU_FCTIWUZ_FCTIWZ_FRSQRTE_FRSQRTES_FNMADDS_FNMSUBS_FSELD_FSELS_FMULS") 1, false, false, 21, 3, 21, 5,  0, 0}, // #147
  {DBGFIELD("FADD_FSUB")          1, false, false, 21, 3, 21, 5,  0, 0}, // #148
  {DBGFIELD("FMSUB_FMADD_FNMADD_FNMSUB_FMUL") 1, false, false, 21, 3, 21, 5,  0, 0}, // #149
  {DBGFIELD("XSMADDADP_XSMADDASP_XSMADDMDP_XSMADDMSP_XSMSUBADP_XSMSUBASP_XSMSUBMDP_XSMSUBMSP_XSMULDP_XSMULSP_XSNMADDADP_XSNMADDASP_XSNMADDMDP_XSNMADDMSP_XSNMSUBADP_XSNMSUBASP_XSNMSUBMDP_XSNMSUBMSP") 1, false, false, 21, 3, 21, 5,  0, 0}, // #150
  {DBGFIELD("FSELDo_FSELSo")      2, false, false, 24, 4, 32, 9,  0, 0}, // #151
  {DBGFIELD("MULHDUo_MULHWUo")    2, false, false, 24, 4, 41, 8,  0, 0}, // #152
  {DBGFIELD("MULHDo_MULHWo_MULLWo") 2, false, false, 24, 4, 41, 8,  0, 0}, // #153
  {DBGFIELD("MULLDo")             2, false, false, 24, 4, 41, 8,  0, 0}, // #154
  {DBGFIELD("FRIMDo_FRIMSo_FRINDo_FRINSo_FRIPDo_FRIPSo_FRIZDo_FRIZSo_FRESo_FREo_FADDSo_FSUBSo_FMSUBSo_FNMSUBSo_FMADDSo_FNMADDSo_FCFIDSo_FCFIDUSo_FCFIDUo_FCFIDo_FCTIDUZo_FCTIDUo_FCTIDZo_FCTIDo_FCTIWUZo_FCTIWUo_FCTIWZo_FCTIWo_FMULSo_FRSQRTESo_FRSQRTEo_FRSPo") 2, false, false, 24, 4, 49, 8,  0, 0}, // #155
  {DBGFIELD("FADDo_FSUBo")        2, false, false, 24, 4, 49, 8,  0, 0}, // #156
  {DBGFIELD("FMSUBo_FNMSUBo_FMADDo_FNMADDo_FMULo") 2, false, false, 24, 4, 49, 8,  0, 0}, // #157
  {DBGFIELD("XSADDDP_XSADDSP_XSCVDPHP_XSCVDPSP_XSCVDPSXDS_XSCVDPSXDSs_XSCVDPSXWS_XSCVDPUXDS_XSCVDPUXDSs_XSCVDPUXWS_XSCVDPSXWSs_XSCVDPUXWSs_XSCVHPDP_XSCVSPDP_XSCVSXDDP_XSCVSXDSP_XSCVUXDDP_XSCVUXDSP_XSRDPI_XSRDPIC_XSRDPIM_XSRDPIP_XSRDPIZ_XSREDP_XSRESP_XSRSQRTEDP_XSRSQRTESP_XSSUBDP_XSSUBSP_XSCVDPSPN_XSRSP") 1, false, false, 28, 3, 21, 4,  0, 0}, // #158
  {DBGFIELD("LVSL_LVSR")          1, false, false, 31, 5, 14, 6,  0, 0}, // #159
  {DBGFIELD("VSPLTISB_VSPLTISH_VSPLTISW_VSPLTB_VSPLTBs_VSPLTH_VSPLTHs_VSPLTW_XXMRGHW_XXMRGLW_XXPERM_XXPERMR_XXSLDWI_XXSLDWIs_XXSPLTIB_XXSPLTW_XXSPLTWs_XXPERMDI_XXPERMDIs") 1, false, false, 31, 5, 14, 6,  0, 0}, // #160
  {DBGFIELD("V_SETALLONES_V_SETALLONESB_V_SETALLONESH_VBPERMQ_VGBBD_VMRGHB_VMRGHH_VMRGHW_VMRGLB_VMRGLH_VMRGLW_VPERM_VPERMR_VPERMXOR_VPKPX_VPKSDSS_VPKSDUS_VPKSHSS_VPKSHUS_VPKSWSS_VPKSWUS_VPKUDUM_VPKUDUS_VPKUHUM_VPKUHUS_VPKUWUM_VPKUWUS_VSL_VSLDOI_VSLO_VSLV_VSR_VSRO_VSRV_VUPKHPX_VUPKHSB_VUPKHSH_VUPKHSW_VUPKLPX_VUPKLSB_VUPKLSH_VUPKLSW_XXBRD_XXBRH_XXBRQ_XXBRW_XXEXTRACTUW_XXINSERTW_VADDCUQ_VADDECUQ_VADDEUQM_VMUL10CUQ_VMUL10ECUQ_VMUL10EUQ_VMUL10UQ_VSUBCUQ_VSUBECUQ_VSUBEUQM_XSTSTDCQP_XSXSIGQP_BCDCFNo_BCDCFZo_BCDCPSGNo_BCDCTNo_BCDCTZo_BCDSETSGNo_BCDSo_BCDTRUNCo_BCDUSo_BCDUTRUNCo") 1, false, false, 31, 5, 14, 6,  0, 0}, // #161
  {DBGFIELD("VEXTRACTUB_VEXTRACTUH_VEXTRACTUW_VINSERTB_VINSERTD_VINSERTH_VINSERTW_MFVSRLD_MTVSRWS_VCLZLSBB_VCTZLSBB_VEXTRACTD_VEXTUBLX_VEXTUBRX_VEXTUHLX_VEXTUHRX_VEXTUWLX_VEXTUWRX_VPRTYBQ_VADDUQM_VSUBUQM") 1, false, false, 31, 5, 14, 6,  0, 0}, // #162
  {DBGFIELD("XSCMPEXPQP_XSCMPOQP_XSCMPUQP") 1, false, false, 31, 5, 14, 6,  0, 0}, // #163
  {DBGFIELD("BCDSRo_XSADDQP_XSADDQPO_XSCVDPQP_XSCVQPDP_XSCVQPDPO_XSCVQPSDZ_XSCVQPSWZ_XSCVQPUDZ_XSCVQPUWZ_XSCVSDQP_XSCVUDQP_XSRQPI_XSRQPIX_XSRQPXP_XSSUBQP_XSSUBQPO") 1, false, false, 36, 5, 57, 6,  0, 0}, // #164
  {DBGFIELD("BCDCTSQo")           1, false, false, 41, 5, 63, 6,  0, 0}, // #165
  {DBGFIELD("XSMADDQP_XSMADDQPO_XSMSUBQP_XSMSUBQPO_XSMULQP_XSMULQPO_XSNMADDQP_XSNMADDQPO_XSNMSUBQP_XSNMSUBQPO") 1, false, false, 46, 5, 69, 6,  0, 0}, // #166
  {DBGFIELD("BCDCFSQo")           1, false, false, 51, 5, 75, 6,  0, 0}, // #167
  {DBGFIELD("XSDIVQP_XSDIVQPO")   1, false, false, 56, 5, 81, 6,  0, 0}, // #168
  {DBGFIELD("XSSQRTQP_XSSQRTQPO") 1, false, false, 61, 5, 87, 6,  0, 0}, // #169
  {DBGFIELD("LXVL_LXVLL")         1, false, false, 66, 3, 93, 4,  0, 0}, // #170
  {DBGFIELD("LVEBX_LVEHX_LVEWX_LVX_LVXL") 1, false, false, 66, 3, 27, 4,  0, 0}, // #171
  {DBGFIELD("LXSIBZX_LXSIHZX_LXSDX_LXVB16X_LXVD2X_LXVWSX_LXSIWZX_LXV_LXVX_LXSD") 1, false, false, 66, 3, 27, 4,  0, 0}, // #172
  {DBGFIELD("DFLOADf64_XFLOADf64_LIWZX") 1, false, false, 66, 3, 27, 4,  0, 0}, // #173
  {DBGFIELD("DCBF_DCBFEP_DCBST_DCBSTEP_DCBT_DCBTEP_DCBZ_DCBZEP_DCBZL_DCBZLEP_DCBTST_DCBTSTEP") 1, false, false, 66, 3, 97, 4,  0, 0}, // #174
  {DBGFIELD("CP_COPY_CP_COPY8")   1, false, false, 66, 3, 97, 4,  0, 0}, // #175
  {DBGFIELD("CP_PASTE_CP_PASTE8") 1, false, false, 66, 3, 97, 4,  0, 0}, // #176
  {DBGFIELD("ICBI_ICBIEP")        1, false, false, 66, 3, 97, 4,  0, 0}, // #177
  {DBGFIELD("ICBT_ICBTLS_LBZ_LBZ8_LBZCIX_LBZX_LBZX8_LBZXTLS_LBZXTLS__LBZXTLS_32_LDBRX_LDCIX_LHBRX_LHBRX8_LHZ_LHZ8_LHZCIX_LHZX_LHZX8_LHZXTLS_LHZXTLS__LHZXTLS_32_LWBRX_LWBRX8_LWZ_LWZ8_LWZCIX_LWZX_LWZX8_LWZXTLS_LWZXTLS__LWZXTLS_32_EnforceIEIO_LSWI") 1, false, false, 66, 3, 97, 4,  0, 0}, // #178
  {DBGFIELD("LBARX_LBARXL_LHARX_LHARXL_LWARX_LWARXL") 1, false, false, 66, 3, 97, 4,  0, 0}, // #179
  {DBGFIELD("LD_LDX_LDXTLS_LDXTLS__DARN") 1, false, false, 66, 3, 97, 4,  0, 0}, // #180
  {DBGFIELD("LDARX_LDARXL")       1, false, false, 66, 3, 97, 4,  0, 0}, // #181
  {DBGFIELD("CP_ABORT")           1, false, false, 66, 3, 97, 4,  0, 0}, // #182
  {DBGFIELD("ISYNC")              1, false, false, 66, 3, 97, 4,  0, 0}, // #183
  {DBGFIELD("MSGSYNC")            1, false, false, 66, 3, 97, 4,  0, 0}, // #184
  {DBGFIELD("TLBSYNC")            1, false, false, 66, 3, 97, 4,  0, 0}, // #185
  {DBGFIELD("SYNC")               1, false, false, 66, 3, 97, 4,  0, 0}, // #186
  {DBGFIELD("LMW")                1, false, false, 66, 3, 97, 4,  0, 0}, // #187
  {DBGFIELD("LFIWZX_LFDX_LFD")    1, false, false, 69, 3, 101, 5,  0, 0}, // #188
  {DBGFIELD("SLBIA")              2, false, false, 72, 3, 106, 8,  0, 0}, // #189
  {DBGFIELD("SLBIE")              2, false, false, 72, 3, 106, 8,  0, 0}, // #190
  {DBGFIELD("SLBMFEE")            2, false, false, 72, 3, 106, 8,  0, 0}, // #191
  {DBGFIELD("SLBMFEV")            2, false, false, 72, 3, 106, 8,  0, 0}, // #192
  {DBGFIELD("SLBMTE")             2, false, false, 72, 3, 106, 8,  0, 0}, // #193
  {DBGFIELD("TLBIEL")             2, false, false, 72, 3, 106, 8,  0, 0}, // #194
  {DBGFIELD("LHZU_LHZU8_LWZU_LWZU8") 2, false, false, 75, 5, 114, 8,  0, 0}, // #195
  {DBGFIELD("LHZUX_LHZUX8_LWZUX_LWZUX8") 2, false, false, 75, 5, 114, 8,  0, 0}, // #196
  {DBGFIELD("TEND")               2, false, false, 75, 5, 114, 8,  0, 0}, // #197
  {DBGFIELD("STBCX_STHCX_STWCX")  2, false, false, 80, 5, 122, 9,  0, 0}, // #198
  {DBGFIELD("STDCX")              2, false, false, 80, 5, 122, 9,  0, 0}, // #199
  {DBGFIELD("LDMX")               2, false, false, 72, 3, 131, 7,  0, 0}, // #200
  {DBGFIELD("LHA_LHA8_LHAX_LHAX8_LWAX_LWAX_32") 2, false, false, 75, 5, 138, 7,  0, 0}, // #201
  {DBGFIELD("CP_PASTE8o_CP_PASTEo") 2, false, false, 75, 5, 138, 7,  0, 0}, // #202
  {DBGFIELD("LWA_LWA_32")         2, false, false, 75, 5, 138, 7,  0, 0}, // #203
  {DBGFIELD("TCHECK")             2, false, false, 75, 5, 138, 7,  0, 0}, // #204
  {DBGFIELD("LFIWAX")             2, false, false, 85, 5, 145, 9,  0, 0}, // #205
  {DBGFIELD("LXSIWAX")            2, false, false, 75, 5, 41, 7,  0, 0}, // #206
  {DBGFIELD("LIWAX")              2, false, false, 75, 5, 41, 7,  0, 0}, // #207
  {DBGFIELD("LFSX_LFS")           2, false, false, 85, 5, 154, 9,  0, 0}, // #208
  {DBGFIELD("LXSSP_LXSSPX")       2, false, false, 75, 5, 131, 7,  0, 0}, // #209
  {DBGFIELD("XFLOADf32_DFLOADf32") 2, false, false, 75, 5, 131, 7,  0, 0}, // #210
  {DBGFIELD("LHAU_LHAU8")         3, false, false, 90, 5, 163, 11,  0, 0}, // #211
  {DBGFIELD("LHAUX_LHAUX8_LWAUX") 3, false, false, 90, 5, 163, 11,  0, 0}, // #212
  {DBGFIELD("LXVH8X_LXVDSX_LXVW4X") 2, false, false, 95, 7, 174, 9,  0, 0}, // #213
  {DBGFIELD("STFD_STFDX_STFIWX_STFS_STFSX_STXSD_STXSDX_STXSIBX_STXSIBXv_STXSIHX_STXSIHXv_STXSIWX_STXSSP_STXSSPX") 1, false, false, 102, 4, 34, 6,  0, 0}, // #214
  {DBGFIELD("STW_STW8_STDBRX_STHBRX_STWBRX_STB_STB8_STH_STH8_STBX_STBX8_STBXTLS_STBXTLS__STBXTLS_32_STHX_STHX8_STHXTLS_STHXTLS__STHXTLS_32_STWX_STWX8_STWXTLS_STWXTLS__STWXTLS_32") 1, false, false, 102, 4, 34, 6,  0, 0}, // #215
  {DBGFIELD("DFSTOREf32_DFSTOREf64_XFSTOREf32_XFSTOREf64_STIWX") 1, false, false, 102, 4, 34, 6,  0, 0}, // #216
  {DBGFIELD("STD_STDX_STDXTLS_STDXTLS_") 1, false, false, 102, 4, 34, 6,  0, 0}, // #217
  {DBGFIELD("STBCIX_STDCIX_STHCIX_STWCIX_STSWI") 1, false, false, 102, 4, 34, 6,  0, 0}, // #218
  {DBGFIELD("SLBIEG")             1, false, false, 102, 4, 34, 6,  0, 0}, // #219
  {DBGFIELD("STMW")               1, false, false, 102, 4, 34, 6,  0, 0}, // #220
  {DBGFIELD("TLBIE")              1, false, false, 102, 4, 34, 6,  0, 0}, // #221
  {DBGFIELD("STVEBX_STVEHX_STVEWX_STVX_STVXL") 1, false, false, 106, 6, 34, 7,  0, 0}, // #222
  {DBGFIELD("STXV_STXVB16X_STXVD2X_STXVH8X_STXVW4X_STXVX") 1, false, false, 106, 6, 34, 7,  0, 0}, // #223
  {DBGFIELD("STXVL_STXVLL")       1, false, false, 106, 6, 34, 7,  0, 0}, // #224
  {DBGFIELD("MTCTR_MTCTR8_MTCTR8loop_MTCTRloop_MTLR_MTLR8") 1, false, false, 112, 5, 183, 6,  0, 0}, // #225
  {DBGFIELD("MFVRSAVE_MFVRSAVEv_MTVRSAVE_MTVRSAVEv") 1, false, false, 112, 5, 57, 6,  0, 0}, // #226
  {DBGFIELD("MFPMR")              1, false, false, 112, 5, 57, 6,  0, 0}, // #227
  {DBGFIELD("MTPMR")              1, false, false, 112, 5, 57, 6,  0, 0}, // #228
  {DBGFIELD("MFTB_MFTB8")         1, false, false, 112, 5, 57, 6,  0, 0}, // #229
  {DBGFIELD("MFCTR_MFCTR8_MFLR_MFLR8_MFSPR_MFSPR8") 1, false, false, 112, 5, 57, 6,  0, 0}, // #230
  {DBGFIELD("MFMSR")              1, false, false, 112, 5, 57, 6,  0, 0}, // #231
  {DBGFIELD("MTMSR")              1, false, false, 112, 5, 57, 6,  0, 0}, // #232
  {DBGFIELD("MTMSRD")             1, false, false, 112, 5, 57, 6,  0, 0}, // #233
  {DBGFIELD("MTSPR_MTSPR8")       1, false, false, 112, 5, 57, 6,  0, 0}, // #234
  {DBGFIELD("DIVW_DIVWU_MODSW")   1, false, false, 117, 5, 189, 6,  0, 0}, // #235
  {DBGFIELD("DIVWE_DIVWEU_MODSD_MODUD_MODUW") 1, false, false, 117, 5, 69, 6,  0, 0}, // #236
  {DBGFIELD("DIVD_DIVDU")         1, false, false, 117, 5, 69, 6,  0, 0}, // #237
  {DBGFIELD("DIVDE_DIVDEU")       1, false, false, 117, 5, 195, 6,  0, 0}, // #238
  {DBGFIELD("DIVWUo_DIVWo")       2, false, false, 122, 6, 201, 9,  0, 0}, // #239
  {DBGFIELD("DIVDo_DIVDUo")       2, false, false, 122, 6, 210, 9,  0, 0}, // #240
  {DBGFIELD("DIVWEo_DIVWEUo")     2, false, false, 122, 6, 210, 9,  0, 0}, // #241
  {DBGFIELD("DIVDEo_DIVDEUo")     2, false, false, 122, 6, 219, 9,  0, 0}, // #242
  {DBGFIELD("MTCRF_MTCRF8")       2, false, false, 128, 3, 228, 10,  0, 0}, // #243
  {DBGFIELD("ADDC8o_ADDCo_SUBFC8o_SUBFCo") 2, false, false, 131, 3, 228, 8,  0, 0}, // #244
  {DBGFIELD("FABSDo_FABSSo_FNABSDo_FNABSSo_FCPSGNDo_FCPSGNSo_FNEGDo_FNEGSo_FMRo") 2, false, false, 134, 3, 238, 9,  0, 0}, // #245
  {DBGFIELD("MCRFS")              2, false, false, 131, 3, 247, 8,  0, 0}, // #246
  {DBGFIELD("MTFSF_MTFSFo_MTFSFI_MTFSFIo") 2, false, false, 128, 3, 255, 10,  0, 0}, // #247
  {DBGFIELD("MTFSFb")             2, false, false, 128, 3, 255, 10,  0, 0}, // #248
  {DBGFIELD("RLDCLo_RLDCRo")      2, false, false, 134, 3, 265, 8,  0, 0}, // #249
  {DBGFIELD("RLDICLo_RLDICRo_RLDICL_32o_RLDIMIo") 2, false, false, 134, 3, 265, 8,  0, 0}, // #250
  {DBGFIELD("RLWIMI8o_RLWIMIo")   2, false, false, 134, 3, 265, 8,  0, 0}, // #251
  {DBGFIELD("RLWINM8o_RLWINMo_RLWNM8o_RLWNMo_SLW8o_SLWo_SRW8o_SRWo") 2, false, false, 134, 3, 265, 8,  0, 0}, // #252
  {DBGFIELD("SRAWIo_SRAWo")       2, false, false, 134, 3, 265, 8,  0, 0}, // #253
  {DBGFIELD("MFFS_MFFSCE_MFFSL_MFFSo") 2, false, false, 128, 3, 145, 9,  0, 0}, // #254
  {DBGFIELD("MFCR_MFCR8")         3, false, false, 137, 3, 273, 13,  0, 0}, // #255
  {DBGFIELD("EXTSWSLIo_SRADIo_RLDICo") 2, false, false, 131, 3, 107, 7,  0, 0}, // #256
  {DBGFIELD("SRADo_SLDo_SRDo")    2, false, false, 131, 3, 107, 7,  0, 0}, // #257
  {DBGFIELD("FDIV")               1, false, false, 140, 3, 286, 5,  0, 0}, // #258
  {DBGFIELD("FDIVo")              2, false, false, 143, 4, 291, 8,  0, 0}, // #259
  {DBGFIELD("XSSQRTDP")           1, false, false, 147, 3, 291, 4,  0, 0}, // #260
  {DBGFIELD("FSQRT")              1, false, false, 150, 3, 291, 5,  0, 0}, // #261
  {DBGFIELD("XVSQRTDP")           2, false, false, 153, 5, 299, 7,  0, 0}, // #262
  {DBGFIELD("XVSQRTSP")           2, false, false, 153, 5, 306, 7,  0, 0}, // #263
  {DBGFIELD("FSQRTo")             2, false, false, 158, 4, 313, 8,  0, 0}, // #264
  {DBGFIELD("XSSQRTSP")           1, false, false, 162, 3, 321, 4,  0, 0}, // #265
  {DBGFIELD("FSQRTS")             1, false, false, 165, 3, 325, 5,  0, 0}, // #266
  {DBGFIELD("FSQRTSo")            2, false, false, 168, 4, 330, 8,  0, 0}, // #267
  {DBGFIELD("XSDIVDP")            1, false, false, 172, 3, 286, 4,  0, 0}, // #268
  {DBGFIELD("FDIVS")              1, false, false, 165, 3, 325, 5,  0, 0}, // #269
  {DBGFIELD("FDIVSo")             2, false, false, 168, 4, 330, 8,  0, 0}, // #270
  {DBGFIELD("XSDIVSP")            1, false, false, 162, 3, 321, 4,  0, 0}, // #271
  {DBGFIELD("XVDIVSP")            2, false, false, 175, 7, 338, 7,  0, 0}, // #272
  {DBGFIELD("XVDIVDP")            2, false, false, 175, 7, 345, 7,  0, 0}, // #273
  {DBGFIELD("LFSU")               3, false, false, 182, 5, 352, 13,  0, 0}, // #274
  {DBGFIELD("LFSUX")              3, false, false, 182, 5, 352, 13,  0, 0}, // #275
  {DBGFIELD("STFDU_STFDUX_STFSU_STFSUX") 2, false, false, 80, 5, 365, 10,  0, 0}, // #276
  {DBGFIELD("STBU_STBU8_STDU_STHU_STHU8_STWU_STWU8") 2, false, false, 80, 5, 365, 10,  0, 0}, // #277
  {DBGFIELD("STBUX_STBUX8_STDUX_STHUX_STHUX8_STWUX_STWUX8") 2, false, false, 80, 5, 365, 10,  0, 0}, // #278
  {DBGFIELD("LBZU_LBZU8")         2, false, false, 75, 5, 114, 8,  0, 0}, // #279
  {DBGFIELD("LBZUX_LBZUX8")       2, false, false, 75, 5, 114, 8,  0, 0}, // #280
  {DBGFIELD("LDU")                2, false, false, 75, 5, 114, 8,  0, 0}, // #281
  {DBGFIELD("LDUX")               2, false, false, 75, 5, 114, 8,  0, 0}, // #282
  {DBGFIELD("LFDU")               2, false, false, 187, 5, 375, 9,  0, 0}, // #283
  {DBGFIELD("LFDUX")              2, false, false, 187, 5, 375, 9,  0, 0}, // #284
  {DBGFIELD("VPMSUMB_VPMSUMD_VPMSUMH_VPMSUMW_VCIPHER_VCIPHERLAST_VNCIPHER_VNCIPHERLAST_VSBOX") 1, false, false, 192, 5, 138, 6,  0, 0}, // #285
  {DBGFIELD("BCCCTR_BCCCTR8_BCCCTRL_BCCCTRL8_BCCL_BCCLA_BCCLR_BCCLRL_BCCTR_BCCTR8_BCCTR8n_BCCTRL_BCCTRL8_BCCTRL8n_BCCTRLn_BCCTRn_BDNZ_BDNZ8_BDNZA_BDNZAm_BDNZAp_BDNZm_BDNZp_BDZ_BDZ8_BDZA_BDZAm_BDZAp_BDZm_BDZp_BDNZL_BDNZLA_BDNZLAm_BDNZLAp_BDNZLR_BDNZLR8_BDNZLRL_BDNZLRLm_BDNZLRLp_BDNZLRm_BDNZLRp_BDNZLm_BDNZLp_BDZL_BDZLA_BDZLAm_BDZLAp_BDZLR_BDZLR8_BDZLRL_BDZLRLm_BDZLRLp_BDZLRm_BDZLRp_BDZLm_BDZLp_BL_BL_TLS_BL8_BL8_NOP_BL8_NOP_TLS_BL8_TLS_BL8_TLS__BLA_BLA8_BLA8_NOP_BLR_BLR8_BLRL_TAILB_TAILB8_TAILBA_TAILBA8_TAILBCTR_TAILBCTR8_gBC_gBCA_gBCAat_gBCCTR_gBCCTRL_gBCL_gBCLA_gBCLAat_gBCLR_gBCLRL_gBCLat_gBCat_BCLR_BCLRL_BCLRLn_BCLRn_BCTR_BCTR8_BCTRL_BCTRL8_B_BA_BC_BCC_BCCA_BCL_BCLalways_BCLn_BCTRL8_LDinto_toc_BCn_CTRL_DEP") 1, false, false, 197, 2,  2, 3,  0, 0}, // #286
  {DBGFIELD("ADDPCIS")            2, false, false, 199, 4, 21, 6,  0, 0}, // #287
  {DBGFIELD("LDAT_LWAT")          5, false, false, 203, 4, 384, 24,  0, 0}, // #288
  {DBGFIELD("STDAT_STWAT")        3, false, false, 207, 4, 408, 14,  0, 0}, // #289
  {DBGFIELD("BRINC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #290
  {DBGFIELD("EVABS_EVEQV_EVNAND_EVNEG_EVADDIW_EVADDW_EVAND_EVANDC_EVCMPEQ_EVCMPGTS_EVCMPGTU_EVCMPLTS_EVCMPLTU_EVCNTLSW_EVCNTLZW_EVEXTSB_EVEXTSH_EVMERGEHI_EVMERGEHILO_EVMERGELO_EVMERGELOHI_EVNOR_EVOR_EVORC_EVXOR_EVRLW_EVRLWI_EVRNDW_EVSLW_EVSLWI_EVSPLATFI_EVSPLATI_EVSRWIS_EVSRWIU_EVSRWS_EVSRWU_EVSUBFW_EVSUBIFW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #291
  {DBGFIELD("EVMRA_EVADDSMIAAW_EVADDSSIAAW_EVADDUMIAAW_EVADDUSIAAW_EVDIVWS_EVDIVWU_EVMHEGSMFAA_EVMHEGSMFAN_EVMHEGSMIAA_EVMHEGSMIAN_EVMHEGUMIAA_EVMHEGUMIAN_EVMHESMF_EVMHESMFA_EVMHESMFAAW_EVMHESMFANW_EVMHESMI_EVMHESMIA_EVMHESMIAAW_EVMHESMIANW_EVMHESSF_EVMHESSFA_EVMHESSFAAW_EVMHESSFANW_EVMHESSIAAW_EVMHESSIANW_EVMHEUMI_EVMHEUMIA_EVMHEUMIAAW_EVMHEUMIANW_EVMHEUSIAAW_EVMHEUSIANW_EVMHOGSMFAA_EVMHOGSMFAN_EVMHOGSMIAA_EVMHOGSMIAN_EVMHOGUMIAA_EVMHOGUMIAN_EVMHOSMF_EVMHOSMFA_EVMHOSMFAAW_EVMHOSMFANW_EVMHOSMI_EVMHOSMIA_EVMHOSMIAAW_EVMHOSMIANW_EVMHOSSF_EVMHOSSFA_EVMHOSSFAAW_EVMHOSSFANW_EVMHOSSIAAW_EVMHOSSIANW_EVMHOUMI_EVMHOUMIA_EVMHOUMIAAW_EVMHOUMIANW_EVMHOUSIAAW_EVMHOUSIANW_EVMWHSMF_EVMWHSMFA_EVMWHSMI_EVMWHSMIA_EVMWHSSF_EVMWHSSFA_EVMWHUMI_EVMWHUMIA_EVMWLSMIAAW_EVMWLSMIANW_EVMWLSSIAAW_EVMWLSSIANW_EVMWLUMI_EVMWLUMIA_EVMWLUMIAAW_EVMWLUMIANW_EVMWLUSIAAW_EVMWLUSIANW_EVMWSMF_EVMWSMFA_EVMWSMFAA_EVMWSMFAN_EVMWSMI_EVMWSMIA_EVMWSMIAA_EVMWSMIAN_EVMWSSF_EVMWSSFA_EVMWSSFAA_EVMWSSFAN_EVMWUMI_EVMWUMIA_EVMWUMIAA_EVMWUMIAN_EVSUBFSMIAAW_EVSUBFSSIAAW_EVSUBFUMIAAW_EVSUBFUSIAAW") 0, false, false,  0, 0,  0, 0,  0, 0}, // #292
  {DBGFIELD("EVLDD_EVLDDX_EVLDH_EVLDHX_EVLDW_EVLDWX_EVLHHESPLAT_EVLHHESPLATX_EVLHHOSSPLAT_EVLHHOSSPLATX_EVLHHOUSPLAT_EVLHHOUSPLATX_EVLWHE_EVLWHEX_EVLWHOS_EVLWHOSX_EVLWHOU_EVLWHOUX_EVLWHSPLAT_EVLWHSPLATX_EVLWWSPLAT_EVLWWSPLATX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #293
  {DBGFIELD("EVSTDD_EVSTDDX_EVSTDH_EVSTDHX_EVSTDW_EVSTDWX_EVSTWHE_EVSTWHEX_EVSTWHO_EVSTWHOX_EVSTWWE_EVSTWWEX_EVSTWWO_EVSTWWOX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #294
  {DBGFIELD("HRFID_ATTN_CLRBHRB_MFBHRBE_NAP_RFCI_RFDI_RFMCI_SC") 0, false, false,  0, 0,  0, 0,  0, 0}, // #295
  {DBGFIELD("RFI")                0, false, false,  0, 0,  0, 0,  0, 0}, // #296
  {DBGFIELD("RFID")               0, false, false,  0, 0,  0, 0,  0, 0}, // #297
  {DBGFIELD("DSS_DSSALL_DST_DST64_DSTST_DSTST64_DSTSTT_DSTSTT64_DSTT_DSTT64_ICBLQ_LBEPX_LHEPX_LWEPX_TLBIVAX_TLBLD_TLBLI_TLBRE_TLBRE2_TLBSX_TLBSX2_TLBSX2D_TLBWE_TLBWE2_MBAR_TRAP_DCCCI_ICCCI") 0, false, false,  0, 0,  0, 0,  0, 0}, // #298
  {DBGFIELD("ICBLC_STBEPX_STHEPX_STWEPX") 0, false, false,  0, 0,  0, 0,  0, 0}, // #299
  {DBGFIELD("LFDEPX")             0, false, false,  0, 0,  0, 0,  0, 0}, // #300
  {DBGFIELD("STFDEPX")            0, false, false,  0, 0,  0, 0,  0, 0}, // #301
  {DBGFIELD("MFSR_MFSRIN")        0, false, false,  0, 0,  0, 0,  0, 0}, // #302
  {DBGFIELD("MTSR_MTSRIN")        0, false, false,  0, 0,  0, 0,  0, 0}, // #303
  {DBGFIELD("MFDCR")              0, false, false,  0, 0,  0, 0,  0, 0}, // #304
  {DBGFIELD("MTDCR")              0, false, false,  0, 0,  0, 0,  0, 0}, // #305
  {DBGFIELD("NOP_GT_PWR6_NOP_GT_PWR7") 0, false, false,  0, 0,  0, 0,  0, 0}, // #306
  {DBGFIELD("TLBIA")              0, false, false,  0, 0,  0, 0,  0, 0}, // #307
  {DBGFIELD("WRTEE_WRTEEI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #308
  {DBGFIELD("MSYNC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #309
  {DBGFIELD("SLBSYNC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #310
  {DBGFIELD("STOP")               0, false, false,  0, 0,  0, 0,  0, 0}, // #311
  {DBGFIELD("DCBA_DCBI")          0, false, false,  0, 0,  0, 0,  0, 0}, // #312
}; // P9ModelSchedClasses

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

static const llvm::MCSchedModel PPC440Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPC440Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel G3ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G3Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel G4ItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel G4PlusItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G4PlusItineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel G5Model = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  G5Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel PPCA2Model = {
  1, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  13, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCA2Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel PPCE500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  7, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE500Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel PPCE500mcModel = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  8, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE500mcItineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel PPCE5500Model = {
  2, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  6, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  9, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  PPCE5500Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel P8Model = {
  8, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  60, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  10, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P8Itineraries,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel P7Model = {
  6, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  40, // LoopMicroOpBufferSize
  3, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  11, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  P7Itineraries,
  nullptr // No extra processor descriptor
};

static const unsigned P9ModelProcResourceSubUnits[] = {
  0,  // Invalid
};

// {Name, NumUnits, SuperIdx, BufferSize, SubUnitsIdxBegin}
static const llvm::MCProcResourceDesc P9ModelProcResources[] = {
  {"InvalidUnit", 0, 0, 0, 0},
  {"ALU",             4, 0, -1, nullptr}, // #1
  {"ALUE",            2, 1, -1, nullptr}, // #2, Super=ALU
  {"ALUO",            2, 1, -1, nullptr}, // #3, Super=ALU
  {"BR",              1, 0, 16, nullptr}, // #4
  {"CY",              1, 0, -1, nullptr}, // #5
  {"DFU",             1, 0, -1, nullptr}, // #6
  {"DISPATCHER",      12, 0, -1, nullptr}, // #7
  {"DIV",             2, 0, -1, nullptr}, // #8
  {"DP",              4, 0, -1, nullptr}, // #9
  {"DPE",             2, 9, -1, nullptr}, // #10, Super=DP
  {"DPO",             2, 9, -1, nullptr}, // #11, Super=DP
  {"IP_AGEN",         4, 0, -1, nullptr}, // #12
  {"IP_EXEC",         4, 0, -1, nullptr}, // #13
  {"IP_EXECE",        2, 13, -1, nullptr}, // #14, Super=IP_EXEC
  {"IP_EXECO",        2, 13, -1, nullptr}, // #15, Super=IP_EXEC
  {"LS",              4, 0, -1, nullptr}, // #16
  {"PM",              2, 0, -1, nullptr}, // #17
};

static const llvm::MCSchedModel P9Model = {
  8, // IssueWidth
  44, // MicroOpBufferSize
  60, // LoopMicroOpBufferSize
  5, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  16, // MispredictPenalty
  false, // PostRAScheduler
  true, // CompleteModel
  12, // Processor ID
  P9ModelProcResources,
  P9ModelSchedClasses,
  18,
  313,
  nullptr, // No Itinerary
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of sched model for CPU subtype.
extern const llvm::SubtargetInfoKV PPCProcSchedKV[] = {
  { "440", (const void *)&PPC440Model },
  { "450", (const void *)&PPC440Model },
  { "601", (const void *)&G3ItinerariesModel },
  { "602", (const void *)&G3ItinerariesModel },
  { "603", (const void *)&G3ItinerariesModel },
  { "603e", (const void *)&G3ItinerariesModel },
  { "603ev", (const void *)&G3ItinerariesModel },
  { "604", (const void *)&G3ItinerariesModel },
  { "604e", (const void *)&G3ItinerariesModel },
  { "620", (const void *)&G3ItinerariesModel },
  { "7400", (const void *)&G4ItinerariesModel },
  { "7450", (const void *)&G4PlusItinerariesModel },
  { "750", (const void *)&G4ItinerariesModel },
  { "970", (const void *)&G5Model },
  { "a2", (const void *)&PPCA2Model },
  { "a2q", (const void *)&PPCA2Model },
  { "e500", (const void *)&PPCE500Model },
  { "e500mc", (const void *)&PPCE500mcModel },
  { "e5500", (const void *)&PPCE5500Model },
  { "g3", (const void *)&G3ItinerariesModel },
  { "g4", (const void *)&G4ItinerariesModel },
  { "g4+", (const void *)&G4PlusItinerariesModel },
  { "g5", (const void *)&G5Model },
  { "generic", (const void *)&G3ItinerariesModel },
  { "ppc", (const void *)&G3ItinerariesModel },
  { "ppc32", (const void *)&G3ItinerariesModel },
  { "ppc64", (const void *)&G5Model },
  { "ppc64le", (const void *)&P8Model },
  { "pwr3", (const void *)&G5Model },
  { "pwr4", (const void *)&G5Model },
  { "pwr5", (const void *)&G5Model },
  { "pwr5x", (const void *)&G5Model },
  { "pwr6", (const void *)&G5Model },
  { "pwr6x", (const void *)&G5Model },
  { "pwr7", (const void *)&P7Model },
  { "pwr8", (const void *)&P8Model },
  { "pwr9", (const void *)&P9Model },
};

#undef DBGFIELD
namespace PPC_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace PPC_MC

struct PPCGenMCSubtargetInfo : public MCSubtargetInfo {
  PPCGenMCSubtargetInfo(const Triple &TT, 
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
    return PPC_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createPPCMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new PPCGenMCSubtargetInfo(TT, CPU, FS, PPCFeatureKV, PPCSubTypeKV, 
                      PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                      PPCStages, PPCOperandCycles, PPCForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[PPC::DeprecatedDST]) DeprecatedDST = true;
  if (Bits[PPC::Directive32] && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if (Bits[PPC::Directive64] && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if (Bits[PPC::Directive440] && DarwinDirective < PPC::DIR_440) DarwinDirective = PPC::DIR_440;
  if (Bits[PPC::Directive601] && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if (Bits[PPC::Directive602] && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if (Bits[PPC::Directive603] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive604] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive620] && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if (Bits[PPC::Directive750] && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if (Bits[PPC::Directive970] && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if (Bits[PPC::Directive7400] && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if (Bits[PPC::DirectiveA2] && DarwinDirective < PPC::DIR_A2) DarwinDirective = PPC::DIR_A2;
  if (Bits[PPC::DirectiveE500] && DarwinDirective < PPC::DIR_E500) DarwinDirective = PPC::DIR_E500;
  if (Bits[PPC::DirectiveE500mc] && DarwinDirective < PPC::DIR_E500mc) DarwinDirective = PPC::DIR_E500mc;
  if (Bits[PPC::DirectiveE5500] && DarwinDirective < PPC::DIR_E5500) DarwinDirective = PPC::DIR_E5500;
  if (Bits[PPC::DirectivePwr3] && DarwinDirective < PPC::DIR_PWR3) DarwinDirective = PPC::DIR_PWR3;
  if (Bits[PPC::DirectivePwr4] && DarwinDirective < PPC::DIR_PWR4) DarwinDirective = PPC::DIR_PWR4;
  if (Bits[PPC::DirectivePwr5] && DarwinDirective < PPC::DIR_PWR5) DarwinDirective = PPC::DIR_PWR5;
  if (Bits[PPC::DirectivePwr5x] && DarwinDirective < PPC::DIR_PWR5X) DarwinDirective = PPC::DIR_PWR5X;
  if (Bits[PPC::DirectivePwr6] && DarwinDirective < PPC::DIR_PWR6) DarwinDirective = PPC::DIR_PWR6;
  if (Bits[PPC::DirectivePwr6x] && DarwinDirective < PPC::DIR_PWR6X) DarwinDirective = PPC::DIR_PWR6X;
  if (Bits[PPC::DirectivePwr7] && DarwinDirective < PPC::DIR_PWR7) DarwinDirective = PPC::DIR_PWR7;
  if (Bits[PPC::DirectivePwr8] && DarwinDirective < PPC::DIR_PWR8) DarwinDirective = PPC::DIR_PWR8;
  if (Bits[PPC::DirectivePwr9] && DarwinDirective < PPC::DIR_PWR9) DarwinDirective = PPC::DIR_PWR9;
  if (Bits[PPC::Feature64Bit]) Has64BitSupport = true;
  if (Bits[PPC::Feature64BitRegs]) Use64BitRegs = true;
  if (Bits[PPC::FeatureAltivec]) HasAltivec = true;
  if (Bits[PPC::FeatureBPERMD]) HasBPERMD = true;
  if (Bits[PPC::FeatureBookE]) IsBookE = true;
  if (Bits[PPC::FeatureCMPB]) HasCMPB = true;
  if (Bits[PPC::FeatureCRBits]) UseCRBits = true;
  if (Bits[PPC::FeatureDirectMove]) HasDirectMove = true;
  if (Bits[PPC::FeatureE500]) IsE500 = true;
  if (Bits[PPC::FeatureExtDiv]) HasExtDiv = true;
  if (Bits[PPC::FeatureFCPSGN]) HasFCPSGN = true;
  if (Bits[PPC::FeatureFPCVT]) HasFPCVT = true;
  if (Bits[PPC::FeatureFPRND]) HasFPRND = true;
  if (Bits[PPC::FeatureFPU]) HasFPU = true;
  if (Bits[PPC::FeatureFRE]) HasFRE = true;
  if (Bits[PPC::FeatureFRES]) HasFRES = true;
  if (Bits[PPC::FeatureFRSQRTE]) HasFRSQRTE = true;
  if (Bits[PPC::FeatureFRSQRTES]) HasFRSQRTES = true;
  if (Bits[PPC::FeatureFSqrt]) HasFSQRT = true;
  if (Bits[PPC::FeatureFloat128]) HasFloat128 = true;
  if (Bits[PPC::FeatureFusion]) HasFusion = true;
  if (Bits[PPC::FeatureHTM]) HasHTM = true;
  if (Bits[PPC::FeatureHardFloat]) HasHardFloat = true;
  if (Bits[PPC::FeatureICBT]) HasICBT = true;
  if (Bits[PPC::FeatureISA3_0]) IsISA3_0 = true;
  if (Bits[PPC::FeatureISEL]) HasISEL = true;
  if (Bits[PPC::FeatureInvariantFunctionDescriptors]) HasInvariantFunctionDescriptors = true;
  if (Bits[PPC::FeatureLDBRX]) HasLDBRX = true;
  if (Bits[PPC::FeatureLFIWAX]) HasLFIWAX = true;
  if (Bits[PPC::FeatureLongCall]) UseLongCalls = true;
  if (Bits[PPC::FeatureMFOCRF]) HasMFOCRF = true;
  if (Bits[PPC::FeatureMFTB]) FeatureMFTB = true;
  if (Bits[PPC::FeatureMSYNC]) HasOnlyMSYNC = true;
  if (Bits[PPC::FeatureP8Altivec]) HasP8Altivec = true;
  if (Bits[PPC::FeatureP8Crypto]) HasP8Crypto = true;
  if (Bits[PPC::FeatureP8Vector]) HasP8Vector = true;
  if (Bits[PPC::FeatureP9Altivec]) HasP9Altivec = true;
  if (Bits[PPC::FeatureP9Vector]) HasP9Vector = true;
  if (Bits[PPC::FeaturePOPCNTD] && HasPOPCNTD < POPCNTD_Fast) HasPOPCNTD = POPCNTD_Fast;
  if (Bits[PPC::FeaturePPC4xx]) IsPPC4xx = true;
  if (Bits[PPC::FeaturePPC6xx]) IsPPC6xx = true;
  if (Bits[PPC::FeaturePartwordAtomic]) HasPartwordAtomics = true;
  if (Bits[PPC::FeatureQPX]) HasQPX = true;
  if (Bits[PPC::FeatureRecipPrec]) HasRecipPrec = true;
  if (Bits[PPC::FeatureSPE]) HasSPE = true;
  if (Bits[PPC::FeatureSTFIWX]) HasSTFIWX = true;
  if (Bits[PPC::FeatureSecurePlt]) SecurePlt = true;
  if (Bits[PPC::FeatureSlowPOPCNTD] && HasPOPCNTD < POPCNTD_Slow) HasPOPCNTD = POPCNTD_Slow;
  if (Bits[PPC::FeatureVSX]) HasVSX = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace PPC_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct PPCGenSubtargetInfo : public TargetSubtargetInfo {
  explicit PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV PPCFeatureKV[];
extern const llvm::SubtargetFeatureKV PPCSubTypeKV[];
extern const llvm::SubtargetInfoKV PPCProcSchedKV[];
extern const llvm::MCWriteProcResEntry PPCWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry PPCWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry PPCReadAdvanceTable[];
extern const llvm::InstrStage PPCStages[];
extern const unsigned PPCOperandCycles[];
extern const unsigned PPCForwardingPaths[];
PPCGenSubtargetInfo::PPCGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(PPCFeatureKV, 48), makeArrayRef(PPCSubTypeKV, 37), 
                        PPCProcSchedKV, PPCWriteProcResTable, PPCWriteLatencyTable, PPCReadAdvanceTable, 
                        PPCStages, PPCOperandCycles, PPCForwardingPaths) {}

unsigned PPCGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // PPCGenSubtargetInfo::resolveSchedClass

unsigned PPCGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return PPC_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // PPCGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


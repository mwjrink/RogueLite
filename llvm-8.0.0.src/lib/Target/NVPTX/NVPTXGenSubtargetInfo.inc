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
namespace NVPTX {
enum {
  PTX32 = 0,
  PTX40 = 1,
  PTX41 = 2,
  PTX42 = 3,
  PTX43 = 4,
  PTX50 = 5,
  PTX60 = 6,
  PTX61 = 7,
  PTX63 = 8,
  SM20 = 9,
  SM21 = 10,
  SM30 = 11,
  SM32 = 12,
  SM35 = 13,
  SM37 = 14,
  SM50 = 15,
  SM52 = 16,
  SM53 = 17,
  SM60 = 18,
  SM61 = 19,
  SM62 = 20,
  SM70 = 21,
  SM72 = 22,
  SM75 = 23,
};
} // end namespace NVPTX
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV NVPTXFeatureKV[] = {
  { "ptx32", "Use PTX version 3.2", { NVPTX::PTX32 }, { } },
  { "ptx40", "Use PTX version 4.0", { NVPTX::PTX40 }, { } },
  { "ptx41", "Use PTX version 4.1", { NVPTX::PTX41 }, { } },
  { "ptx42", "Use PTX version 4.2", { NVPTX::PTX42 }, { } },
  { "ptx43", "Use PTX version 4.3", { NVPTX::PTX43 }, { } },
  { "ptx50", "Use PTX version 5.0", { NVPTX::PTX50 }, { } },
  { "ptx60", "Use PTX version 6.0", { NVPTX::PTX60 }, { } },
  { "ptx61", "Use PTX version 6.1", { NVPTX::PTX61 }, { } },
  { "ptx63", "Use PTX version 6.3", { NVPTX::PTX63 }, { } },
  { "sm_20", "Target SM 2.0", { NVPTX::SM20 }, { } },
  { "sm_21", "Target SM 2.1", { NVPTX::SM21 }, { } },
  { "sm_30", "Target SM 3.0", { NVPTX::SM30 }, { } },
  { "sm_32", "Target SM 3.2", { NVPTX::SM32 }, { } },
  { "sm_35", "Target SM 3.5", { NVPTX::SM35 }, { } },
  { "sm_37", "Target SM 3.7", { NVPTX::SM37 }, { } },
  { "sm_50", "Target SM 5.0", { NVPTX::SM50 }, { } },
  { "sm_52", "Target SM 5.2", { NVPTX::SM52 }, { } },
  { "sm_53", "Target SM 5.3", { NVPTX::SM53 }, { } },
  { "sm_60", "Target SM 6.0", { NVPTX::SM60 }, { } },
  { "sm_61", "Target SM 6.1", { NVPTX::SM61 }, { } },
  { "sm_62", "Target SM 6.2", { NVPTX::SM62 }, { } },
  { "sm_70", "Target SM 7.0", { NVPTX::SM70 }, { } },
  { "sm_72", "Target SM 7.2", { NVPTX::SM72 }, { } },
  { "sm_75", "Target SM 7.5", { NVPTX::SM75 }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV NVPTXSubTypeKV[] = {
  { "sm_20", "Select the sm_20 processor", { NVPTX::SM20 }, { } },
  { "sm_21", "Select the sm_21 processor", { NVPTX::SM21 }, { } },
  { "sm_30", "Select the sm_30 processor", { NVPTX::SM30 }, { } },
  { "sm_32", "Select the sm_32 processor", { NVPTX::SM32, NVPTX::PTX40 }, { } },
  { "sm_35", "Select the sm_35 processor", { NVPTX::SM35 }, { } },
  { "sm_37", "Select the sm_37 processor", { NVPTX::SM37, NVPTX::PTX41 }, { } },
  { "sm_50", "Select the sm_50 processor", { NVPTX::SM50, NVPTX::PTX40 }, { } },
  { "sm_52", "Select the sm_52 processor", { NVPTX::SM52, NVPTX::PTX41 }, { } },
  { "sm_53", "Select the sm_53 processor", { NVPTX::SM53, NVPTX::PTX42 }, { } },
  { "sm_60", "Select the sm_60 processor", { NVPTX::SM60, NVPTX::PTX50 }, { } },
  { "sm_61", "Select the sm_61 processor", { NVPTX::SM61, NVPTX::PTX50 }, { } },
  { "sm_62", "Select the sm_62 processor", { NVPTX::SM62, NVPTX::PTX50 }, { } },
  { "sm_70", "Select the sm_70 processor", { NVPTX::SM70, NVPTX::PTX60 }, { } },
  { "sm_72", "Select the sm_72 processor", { NVPTX::SM72, NVPTX::PTX61 }, { } },
  { "sm_75", "Select the sm_75 processor", { NVPTX::SM75, NVPTX::PTX63 }, { } },
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
extern const llvm::MCWriteProcResEntry NVPTXWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // NVPTXWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry NVPTXWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // NVPTXWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry NVPTXReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // NVPTXReadAdvanceTable

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

// Sorted (by key) array of sched model for CPU subtype.
extern const llvm::SubtargetInfoKV NVPTXProcSchedKV[] = {
  { "sm_20", (const void *)&NoSchedModel },
  { "sm_21", (const void *)&NoSchedModel },
  { "sm_30", (const void *)&NoSchedModel },
  { "sm_32", (const void *)&NoSchedModel },
  { "sm_35", (const void *)&NoSchedModel },
  { "sm_37", (const void *)&NoSchedModel },
  { "sm_50", (const void *)&NoSchedModel },
  { "sm_52", (const void *)&NoSchedModel },
  { "sm_53", (const void *)&NoSchedModel },
  { "sm_60", (const void *)&NoSchedModel },
  { "sm_61", (const void *)&NoSchedModel },
  { "sm_62", (const void *)&NoSchedModel },
  { "sm_70", (const void *)&NoSchedModel },
  { "sm_72", (const void *)&NoSchedModel },
  { "sm_75", (const void *)&NoSchedModel },
};

#undef DBGFIELD
namespace NVPTX_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace NVPTX_MC

struct NVPTXGenMCSubtargetInfo : public MCSubtargetInfo {
  NVPTXGenMCSubtargetInfo(const Triple &TT, 
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
    return NVPTX_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createNVPTXMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new NVPTXGenMCSubtargetInfo(TT, CPU, FS, NVPTXFeatureKV, NVPTXSubTypeKV, 
                      NVPTXProcSchedKV, NVPTXWriteProcResTable, NVPTXWriteLatencyTable, NVPTXReadAdvanceTable, 
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
void llvm::NVPTXSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[NVPTX::PTX32] && PTXVersion < 32) PTXVersion = 32;
  if (Bits[NVPTX::PTX40] && PTXVersion < 40) PTXVersion = 40;
  if (Bits[NVPTX::PTX41] && PTXVersion < 41) PTXVersion = 41;
  if (Bits[NVPTX::PTX42] && PTXVersion < 42) PTXVersion = 42;
  if (Bits[NVPTX::PTX43] && PTXVersion < 43) PTXVersion = 43;
  if (Bits[NVPTX::PTX50] && PTXVersion < 50) PTXVersion = 50;
  if (Bits[NVPTX::PTX60] && PTXVersion < 60) PTXVersion = 60;
  if (Bits[NVPTX::PTX61] && PTXVersion < 61) PTXVersion = 61;
  if (Bits[NVPTX::PTX63] && PTXVersion < 63) PTXVersion = 63;
  if (Bits[NVPTX::SM20] && SmVersion < 20) SmVersion = 20;
  if (Bits[NVPTX::SM21] && SmVersion < 21) SmVersion = 21;
  if (Bits[NVPTX::SM30] && SmVersion < 30) SmVersion = 30;
  if (Bits[NVPTX::SM32] && SmVersion < 32) SmVersion = 32;
  if (Bits[NVPTX::SM35] && SmVersion < 35) SmVersion = 35;
  if (Bits[NVPTX::SM37] && SmVersion < 37) SmVersion = 37;
  if (Bits[NVPTX::SM50] && SmVersion < 50) SmVersion = 50;
  if (Bits[NVPTX::SM52] && SmVersion < 52) SmVersion = 52;
  if (Bits[NVPTX::SM53] && SmVersion < 53) SmVersion = 53;
  if (Bits[NVPTX::SM60] && SmVersion < 60) SmVersion = 60;
  if (Bits[NVPTX::SM61] && SmVersion < 61) SmVersion = 61;
  if (Bits[NVPTX::SM62] && SmVersion < 62) SmVersion = 62;
  if (Bits[NVPTX::SM70] && SmVersion < 70) SmVersion = 70;
  if (Bits[NVPTX::SM72] && SmVersion < 72) SmVersion = 72;
  if (Bits[NVPTX::SM75] && SmVersion < 75) SmVersion = 75;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace NVPTX_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct NVPTXGenSubtargetInfo : public TargetSubtargetInfo {
  explicit NVPTXGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV NVPTXFeatureKV[];
extern const llvm::SubtargetFeatureKV NVPTXSubTypeKV[];
extern const llvm::SubtargetInfoKV NVPTXProcSchedKV[];
extern const llvm::MCWriteProcResEntry NVPTXWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry NVPTXWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry NVPTXReadAdvanceTable[];
NVPTXGenSubtargetInfo::NVPTXGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(NVPTXFeatureKV, 24), makeArrayRef(NVPTXSubTypeKV, 15), 
                        NVPTXProcSchedKV, NVPTXWriteProcResTable, NVPTXWriteLatencyTable, NVPTXReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned NVPTXGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // NVPTXGenSubtargetInfo::resolveSchedClass

unsigned NVPTXGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return NVPTX_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // NVPTXGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


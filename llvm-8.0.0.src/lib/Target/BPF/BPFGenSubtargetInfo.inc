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
namespace BPF {
enum {
  ALU32 = 0,
  DummyFeature = 1,
  DwarfRIS = 2,
};
} // end namespace BPF
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV BPFFeatureKV[] = {
  { "alu32", "Enable ALU32 instructions", { BPF::ALU32 }, { } },
  { "dummy", "unused feature", { BPF::DummyFeature }, { } },
  { "dwarfris", "Disable MCAsmInfo DwarfUsesRelocationsAcrossSections", { BPF::DwarfRIS }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV BPFSubTypeKV[] = {
  { "generic", "Select the generic processor", { }, { } },
  { "probe", "Select the probe processor", { }, { } },
  { "v1", "Select the v1 processor", { }, { } },
  { "v2", "Select the v2 processor", { }, { } },
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
extern const llvm::MCWriteProcResEntry BPFWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // BPFWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry BPFWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // BPFWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry BPFReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // BPFReadAdvanceTable

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
extern const llvm::SubtargetInfoKV BPFProcSchedKV[] = {
  { "generic", (const void *)&NoSchedModel },
  { "probe", (const void *)&NoSchedModel },
  { "v1", (const void *)&NoSchedModel },
  { "v2", (const void *)&NoSchedModel },
};

#undef DBGFIELD
namespace BPF_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace BPF_MC

struct BPFGenMCSubtargetInfo : public MCSubtargetInfo {
  BPFGenMCSubtargetInfo(const Triple &TT, 
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
    return BPF_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createBPFMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new BPFGenMCSubtargetInfo(TT, CPU, FS, BPFFeatureKV, BPFSubTypeKV, 
                      BPFProcSchedKV, BPFWriteProcResTable, BPFWriteLatencyTable, BPFReadAdvanceTable, 
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
void llvm::BPFSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[BPF::ALU32]) HasAlu32 = true;
  if (Bits[BPF::DummyFeature]) isDummyMode = true;
  if (Bits[BPF::DwarfRIS]) UseDwarfRIS = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace BPF_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct BPFGenSubtargetInfo : public TargetSubtargetInfo {
  explicit BPFGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV BPFFeatureKV[];
extern const llvm::SubtargetFeatureKV BPFSubTypeKV[];
extern const llvm::SubtargetInfoKV BPFProcSchedKV[];
extern const llvm::MCWriteProcResEntry BPFWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry BPFWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry BPFReadAdvanceTable[];
BPFGenSubtargetInfo::BPFGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(BPFFeatureKV, 3), makeArrayRef(BPFSubTypeKV, 4), 
                        BPFProcSchedKV, BPFWriteProcResTable, BPFWriteLatencyTable, BPFReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned BPFGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // BPFGenSubtargetInfo::resolveSchedClass

unsigned BPFGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return BPF_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // BPFGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


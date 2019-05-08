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
namespace WebAssembly {
enum {
  FeatureAtomics = 0,
  FeatureExceptionHandling = 1,
  FeatureNontrappingFPToInt = 2,
  FeatureSIMD128 = 3,
  FeatureSignExt = 4,
  FeatureUnimplementedSIMD128 = 5,
};
} // end namespace WebAssembly
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV WebAssemblyFeatureKV[] = {
  { "atomics", "Enable Atomics", { WebAssembly::FeatureAtomics }, { } },
  { "exception-handling", "Enable Wasm exception handling", { WebAssembly::FeatureExceptionHandling }, { } },
  { "nontrapping-fptoint", "Enable non-trapping float-to-int conversion operators", { WebAssembly::FeatureNontrappingFPToInt }, { } },
  { "sign-ext", "Enable sign extension operators", { WebAssembly::FeatureSignExt }, { } },
  { "simd128", "Enable 128-bit SIMD", { WebAssembly::FeatureSIMD128 }, { } },
  { "unimplemented-simd128", "Enable 128-bit SIMD not yet implemented in engines", { WebAssembly::FeatureUnimplementedSIMD128 }, { WebAssembly::FeatureSIMD128 } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV WebAssemblySubTypeKV[] = {
  { "bleeding-edge", "Select the bleeding-edge processor", { WebAssembly::FeatureSIMD128, WebAssembly::FeatureAtomics, WebAssembly::FeatureNontrappingFPToInt, WebAssembly::FeatureSignExt }, { } },
  { "generic", "Select the generic processor", { }, { } },
  { "mvp", "Select the mvp processor", { }, { } },
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
extern const llvm::MCWriteProcResEntry WebAssemblyWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // WebAssemblyWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry WebAssemblyWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // WebAssemblyWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry WebAssemblyReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // WebAssemblyReadAdvanceTable

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
extern const llvm::SubtargetInfoKV WebAssemblyProcSchedKV[] = {
  { "bleeding-edge", (const void *)&NoSchedModel },
  { "generic", (const void *)&NoSchedModel },
  { "mvp", (const void *)&NoSchedModel },
};

#undef DBGFIELD
namespace WebAssembly_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace WebAssembly_MC

struct WebAssemblyGenMCSubtargetInfo : public MCSubtargetInfo {
  WebAssemblyGenMCSubtargetInfo(const Triple &TT, 
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
    return WebAssembly_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createWebAssemblyMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new WebAssemblyGenMCSubtargetInfo(TT, CPU, FS, WebAssemblyFeatureKV, WebAssemblySubTypeKV, 
                      WebAssemblyProcSchedKV, WebAssemblyWriteProcResTable, WebAssemblyWriteLatencyTable, WebAssemblyReadAdvanceTable, 
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
void llvm::WebAssemblySubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[WebAssembly::FeatureAtomics]) HasAtomics = true;
  if (Bits[WebAssembly::FeatureExceptionHandling]) HasExceptionHandling = true;
  if (Bits[WebAssembly::FeatureNontrappingFPToInt]) HasNontrappingFPToInt = true;
  if (Bits[WebAssembly::FeatureSIMD128] && SIMDLevel < SIMD128) SIMDLevel = SIMD128;
  if (Bits[WebAssembly::FeatureSignExt]) HasSignExt = true;
  if (Bits[WebAssembly::FeatureUnimplementedSIMD128] && SIMDLevel < UnimplementedSIMD128) SIMDLevel = UnimplementedSIMD128;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace WebAssembly_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct WebAssemblyGenSubtargetInfo : public TargetSubtargetInfo {
  explicit WebAssemblyGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV WebAssemblyFeatureKV[];
extern const llvm::SubtargetFeatureKV WebAssemblySubTypeKV[];
extern const llvm::SubtargetInfoKV WebAssemblyProcSchedKV[];
extern const llvm::MCWriteProcResEntry WebAssemblyWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry WebAssemblyWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry WebAssemblyReadAdvanceTable[];
WebAssemblyGenSubtargetInfo::WebAssemblyGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(WebAssemblyFeatureKV, 6), makeArrayRef(WebAssemblySubTypeKV, 3), 
                        WebAssemblyProcSchedKV, WebAssemblyWriteProcResTable, WebAssemblyWriteLatencyTable, WebAssemblyReadAdvanceTable, 
                        nullptr, nullptr, nullptr) {}

unsigned WebAssemblyGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // WebAssemblyGenSubtargetInfo::resolveSchedClass

unsigned WebAssemblyGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return WebAssembly_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // WebAssemblyGenSubtargetInfo::resolveVariantSchedClass

} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


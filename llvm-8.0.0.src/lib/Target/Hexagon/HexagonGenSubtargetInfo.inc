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
namespace Hexagon {
enum {
  ArchV5 = 0,
  ArchV55 = 1,
  ArchV60 = 2,
  ArchV62 = 3,
  ArchV65 = 4,
  ArchV66 = 5,
  ExtensionHVX = 6,
  ExtensionHVX64B = 7,
  ExtensionHVX128B = 8,
  ExtensionHVXV60 = 9,
  ExtensionHVXV62 = 10,
  ExtensionHVXV65 = 11,
  ExtensionHVXV66 = 12,
  ExtensionZReg = 13,
  FeatureDuplex = 14,
  FeatureLongCalls = 15,
  FeatureMemNoShuf = 16,
  FeatureMemops = 17,
  FeatureNVJ = 18,
  FeatureNVS = 19,
  FeatureNoreturnStackElim = 20,
  FeaturePackets = 21,
  FeatureReservedR19 = 22,
  FeatureSmallData = 23,
};
} // end namespace Hexagon
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[] = {
  { "duplex", "Enable generation of duplex instruction", { Hexagon::FeatureDuplex }, { } },
  { "hvx", "Hexagon HVX instructions", { Hexagon::ExtensionHVX }, { } },
  { "hvx-length128b", "Hexagon HVX 128B instructions", { Hexagon::ExtensionHVX128B }, { Hexagon::ExtensionHVX } },
  { "hvx-length64b", "Hexagon HVX 64B instructions", { Hexagon::ExtensionHVX64B }, { Hexagon::ExtensionHVX } },
  { "hvxv60", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV60 }, { Hexagon::ExtensionHVX } },
  { "hvxv62", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV62 }, { Hexagon::ExtensionHVX, Hexagon::ExtensionHVXV60 } },
  { "hvxv65", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV65 }, { Hexagon::ExtensionHVX, Hexagon::ExtensionHVXV60, Hexagon::ExtensionHVXV62 } },
  { "hvxv66", "Hexagon HVX instructions", { Hexagon::ExtensionHVXV66 }, { Hexagon::ExtensionHVX, Hexagon::ExtensionHVXV60, Hexagon::ExtensionHVXV62, Hexagon::ExtensionHVXV65, Hexagon::ExtensionZReg } },
  { "long-calls", "Use constant-extended calls", { Hexagon::FeatureLongCalls }, { } },
  { "mem_noshuf", "Supports mem_noshuf feature", { Hexagon::FeatureMemNoShuf }, { } },
  { "memops", "Use memop instructions", { Hexagon::FeatureMemops }, { } },
  { "noreturn-stack-elim", "Eliminate stack allocation in a noreturn function when possible", { Hexagon::FeatureNoreturnStackElim }, { } },
  { "nvj", "Support for new-value jumps", { Hexagon::FeatureNVJ }, { Hexagon::FeaturePackets } },
  { "nvs", "Support for new-value stores", { Hexagon::FeatureNVS }, { Hexagon::FeaturePackets } },
  { "packets", "Support for instruction packets", { Hexagon::FeaturePackets }, { } },
  { "reserved-r19", "Reserve register R19", { Hexagon::FeatureReservedR19 }, { } },
  { "small-data", "Allow GP-relative addressing of global variables", { Hexagon::FeatureSmallData }, { } },
  { "v5", "Enable Hexagon V5 architecture", { Hexagon::ArchV5 }, { } },
  { "v55", "Enable Hexagon V55 architecture", { Hexagon::ArchV55 }, { } },
  { "v60", "Enable Hexagon V60 architecture", { Hexagon::ArchV60 }, { } },
  { "v62", "Enable Hexagon V62 architecture", { Hexagon::ArchV62 }, { } },
  { "v65", "Enable Hexagon V65 architecture", { Hexagon::ArchV65 }, { } },
  { "v66", "Enable Hexagon V66 architecture", { Hexagon::ArchV66 }, { } },
  { "zreg", "Hexagon ZReg extension instructions", { Hexagon::ExtensionZReg }, { } },
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[] = {
  { "generic", "Select the generic processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::FeatureDuplex, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv5", "Select the hexagonv5 processor", { Hexagon::ArchV5, Hexagon::FeatureDuplex, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv55", "Select the hexagonv55 processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::FeatureDuplex, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv60", "Select the hexagonv60 processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::FeatureDuplex, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv62", "Select the hexagonv62 processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::FeatureDuplex, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv65", "Select the hexagonv65 processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::ArchV65, Hexagon::FeatureDuplex, Hexagon::FeatureMemNoShuf, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
  { "hexagonv66", "Select the hexagonv66 processor", { Hexagon::ArchV5, Hexagon::ArchV55, Hexagon::ArchV60, Hexagon::ArchV62, Hexagon::ArchV65, Hexagon::ArchV66, Hexagon::FeatureDuplex, Hexagon::FeatureMemNoShuf, Hexagon::FeatureMemops, Hexagon::FeatureNVJ, Hexagon::FeatureNVS, Hexagon::FeaturePackets, Hexagon::FeatureSmallData }, { } },
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#if !defined(NDEBUG) || defined(LLVM_ENABLE_DUMP)
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "HexagonItinerariesV60"
namespace HexagonItinerariesV60FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV60FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV60"
namespace HexagonItinerariesV60Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV60Bypass

// Functional units for "HexagonItinerariesV5"
namespace HexagonItinerariesV5FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV5FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV5"
namespace HexagonItinerariesV5Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV5Bypass

// Functional units for "HexagonItinerariesV55"
namespace HexagonItinerariesV55FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
} // end namespace HexagonItinerariesV55FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV55"
namespace HexagonItinerariesV55Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
} // end namespace HexagonItinerariesV55Bypass

// Functional units for "HexagonItinerariesV62"
namespace HexagonItinerariesV62FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV62FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV62"
namespace HexagonItinerariesV62Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV62Bypass

// Functional units for "HexagonItinerariesV65"
namespace HexagonItinerariesV65FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV65FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV65"
namespace HexagonItinerariesV65Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV65Bypass

// Functional units for "HexagonItinerariesV66"
namespace HexagonItinerariesV66FU {
  const unsigned SLOT0 = 1 << 0;
  const unsigned SLOT1 = 1 << 1;
  const unsigned SLOT2 = 1 << 2;
  const unsigned SLOT3 = 1 << 3;
  const unsigned SLOT_ENDLOOP = 1 << 4;
  const unsigned CVI_ST = 1 << 5;
  const unsigned CVI_XLANE = 1 << 6;
  const unsigned CVI_SHIFT = 1 << 7;
  const unsigned CVI_MPY0 = 1 << 8;
  const unsigned CVI_MPY1 = 1 << 9;
  const unsigned CVI_LD = 1 << 10;
  const unsigned CVI_XLSHF = 1 << 11;
  const unsigned CVI_MPY01 = 1 << 12;
  const unsigned CVI_ALL = 1 << 13;
  const unsigned CVI_ALL_NOMEM = 1 << 14;
  const unsigned CVI_ZW = 1 << 15;
} // end namespace HexagonItinerariesV66FU

// Pipeline forwarding paths for itineraries "HexagonItinerariesV66"
namespace HexagonItinerariesV66Bypass {
  const unsigned NoBypass = 0;
  const unsigned Hex_FWD = 1 << 0;
  const unsigned HVX_FWD = 1 << 1;
} // end namespace HexagonItinerariesV66Bypass

extern const llvm::InstrStage HexagonStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 1, HexagonItinerariesV60FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 1, HexagonItinerariesV60FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 1, HexagonItinerariesV60FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7-8
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9-10
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11-13
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 14-17
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 18-19
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 20-22
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 23-26
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 27-28
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 29-30
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 31-34
  { 1, HexagonItinerariesV60FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 35
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 36-37
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 38-39
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 40-41
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 42-43
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 44-45
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 46-47
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 48-49
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1 | HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 50-52
  { 1, HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 53-55
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1 | HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 56-57
  { 1, HexagonItinerariesV60FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 58-59
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY0 | HexagonItinerariesV60FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_SHIFT | HexagonItinerariesV60FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 60-62
  { 1, HexagonItinerariesV60FU::SLOT2 | HexagonItinerariesV60FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 63-64
  { 1, HexagonItinerariesV60FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_MPY01 | HexagonItinerariesV60FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 65-67
  { 1, HexagonItinerariesV60FU::SLOT0 | HexagonItinerariesV60FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV60FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 68-69
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 70
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1 | HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 71
  { 1, HexagonItinerariesV5FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 72
  { 1, HexagonItinerariesV5FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 73
  { 1, HexagonItinerariesV5FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 74
  { 1, HexagonItinerariesV5FU::SLOT0 | HexagonItinerariesV5FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 75
  { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV5FU::SLOT2 | HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 76-77
  { 1, HexagonItinerariesV5FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 78
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 79
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1 | HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 80
  { 1, HexagonItinerariesV55FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 81
  { 1, HexagonItinerariesV55FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 82
  { 1, HexagonItinerariesV55FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 83
  { 1, HexagonItinerariesV55FU::SLOT0 | HexagonItinerariesV55FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 84
  { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV55FU::SLOT2 | HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 85-86
  { 1, HexagonItinerariesV55FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 87
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 88
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 89
  { 1, HexagonItinerariesV62FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 90
  { 1, HexagonItinerariesV62FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 91
  { 1, HexagonItinerariesV62FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 92
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 93
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 94-95
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 96-97
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 98-100
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 101-104
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 105-106
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 107-109
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 110-113
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 114-115
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 116-117
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 118-121
  { 1, HexagonItinerariesV62FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 122
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 123-124
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 125-126
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 127-128
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 129-130
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 131-132
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 133-134
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 135-136
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1 | HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 137-139
  { 1, HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 140-142
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1 | HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 143-144
  { 1, HexagonItinerariesV62FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 145-146
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY0 | HexagonItinerariesV62FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_SHIFT | HexagonItinerariesV62FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 147-149
  { 1, HexagonItinerariesV62FU::SLOT2 | HexagonItinerariesV62FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 150-151
  { 1, HexagonItinerariesV62FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_MPY01 | HexagonItinerariesV62FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 152-154
  { 1, HexagonItinerariesV62FU::SLOT0 | HexagonItinerariesV62FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV62FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 155-156
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 157
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 158
  { 1, HexagonItinerariesV65FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 159
  { 1, HexagonItinerariesV65FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 160
  { 1, HexagonItinerariesV65FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 161
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 162
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 163-164
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 165-166
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 167-169
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 170-173
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 174-175
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 176-178
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 179-182
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 183-184
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 185-186
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 187-190
  { 1, HexagonItinerariesV65FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 191
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 192-193
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 194-195
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 196-197
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 198-199
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 200-201
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 202-203
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 204-205
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1 | HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 206-208
  { 1, HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 209-211
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1 | HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 212-213
  { 1, HexagonItinerariesV65FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 214-215
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY0 | HexagonItinerariesV65FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_SHIFT | HexagonItinerariesV65FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 216-218
  { 1, HexagonItinerariesV65FU::SLOT2 | HexagonItinerariesV65FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 219-220
  { 1, HexagonItinerariesV65FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_MPY01 | HexagonItinerariesV65FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 221-223
  { 1, HexagonItinerariesV65FU::SLOT0 | HexagonItinerariesV65FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV65FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 224-225
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 226
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 227
  { 1, HexagonItinerariesV66FU::SLOT0, -1, (llvm::InstrStage::ReservationKinds)0 }, // 228
  { 1, HexagonItinerariesV66FU::SLOT_ENDLOOP, -1, (llvm::InstrStage::ReservationKinds)0 }, // 229
  { 1, HexagonItinerariesV66FU::SLOT2, -1, (llvm::InstrStage::ReservationKinds)0 }, // 230
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 231
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 232-233
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 234-235
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 236-238
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 239-242
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 243-244
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 245-247
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 248-251
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 252-253
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT, -1, (llvm::InstrStage::ReservationKinds)0 }, // 254-255
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 256-259
  { 1, HexagonItinerariesV66FU::SLOT3, -1, (llvm::InstrStage::ReservationKinds)0 }, // 260
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 261-262
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, -1, (llvm::InstrStage::ReservationKinds)0 }, // 263-264
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 265-266
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, -1, (llvm::InstrStage::ReservationKinds)0 }, // 267-268
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, -1, (llvm::InstrStage::ReservationKinds)0 }, // 269-270
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 271-272
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 273-274
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1 | HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 275-277
  { 1, HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_LD, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 278-280
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1 | HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL, -1, (llvm::InstrStage::ReservationKinds)0 }, // 281-282
  { 1, HexagonItinerariesV66FU::SLOT2, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01, -1, (llvm::InstrStage::ReservationKinds)0 }, // 283-284
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY0 | HexagonItinerariesV66FU::CVI_MPY1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_SHIFT | HexagonItinerariesV66FU::CVI_XLANE, -1, (llvm::InstrStage::ReservationKinds)0 }, // 285-287
  { 1, HexagonItinerariesV66FU::SLOT2 | HexagonItinerariesV66FU::SLOT3, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ALL_NOMEM, -1, (llvm::InstrStage::ReservationKinds)0 }, // 288-289
  { 1, HexagonItinerariesV66FU::SLOT0, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ST, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_MPY01 | HexagonItinerariesV66FU::CVI_XLSHF, -1, (llvm::InstrStage::ReservationKinds)0 }, // 290-292
  { 1, HexagonItinerariesV66FU::SLOT0 | HexagonItinerariesV66FU::SLOT1, 0, (llvm::InstrStage::ReservationKinds)0 },   { 1, HexagonItinerariesV66FU::CVI_ZW, -1, (llvm::InstrStage::ReservationKinds)0 }, // 293-294
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned HexagonOperandCycles[] = {
  0, // No itinerary
  3,   2,   2, // 1-3
  1,   1,   1, // 4-6
  3,   2, // 7-8
  3,   2,   2,   2, // 9-12
  3,   3,   2,   2, // 13-16
  3,   2,   2, // 17-19
  3,   3,   2, // 20-22
  3,   2,   2, // 23-25
  3,   1,   1, // 26-28
  3,   1,   2, // 29-31
  3,   2,   2, // 32-34
  1,   1,   1, // 35-37
  2, // 38
  2,   2, // 39-40
  2,   1, // 41-42
  3,   2,   2, // 43-45
  4,   2,   1,   2, // 46-49
  4,   1,   2, // 50-52
  4,   3,   1,   2, // 53-56
  1,   2,   2, // 57-59
  1,   2,   2, // 60-62
  3,   2,   2, // 63-65
  3,   3,   2, // 66-68
  2, // 69
  3, // 70
  4,   2, // 71-72
  3,   2, // 73-74
  3,   1, // 75-76
  4,   1,   2, // 77-79
  4,   1,   1, // 80-82
  4,   2,   1,   1, // 83-86
  2, // 87
  4,   3,   1,   2,   2, // 88-92
  9,   7,   7, // 93-95
  3,   1,   2,   2,   2, // 96-100
  3,   1,   2,   2, // 101-104
  1, // 105
  9,   7,   7, // 106-108
  9,   1,   2, // 109-111
  9,   1,   2, // 112-114
  1,   1,   1, // 115-117
  9,   2,   7, // 118-120
  1,   2,   7, // 121-123
  1,   2,   5, // 124-126
  9,   2,   7,   7, // 127-130
  4,   2,   2, // 131-133
  2,   1,   2,   2, // 134-137
  2,   1,   2,   3, // 138-141
  1,   2,   2, // 142-144
  1,   2,   3, // 145-147
  4,   2,   2,   2,   2, // 148-152
  3,   1,   2,   3, // 153-156
  1,   2,   2, // 157-159
  2,   1,   2,   2, // 160-163
  3,   1,   2,   2, // 164-167
  4,   2,   2, // 168-170
  1,   1,   1, // 171-173
  9,   7,   7,   7, // 174-177
  9,   7, // 178-179
  9,   5,   5,   2, // 180-183
  9, // 184
  1, // 185
  4,   2, // 186-187
  4,   2,   2, // 188-190
  4,   2,   2, // 191-193
  4,   2,   2, // 194-196
  3,   2, // 197-198
  3,   2,   2, // 199-201
  3,   2,   2, // 202-204
  4,   2, // 205-206
  4,   1, // 207-208
  3,   2,   2, // 209-211
  3,   2,   2, // 212-214
  4,   4,   1,   1,   2, // 215-219
  3,   1,   2, // 220-222
  2, // 223
  4,   1,   1, // 224-226
  4,   1,   1,   2, // 227-230
  4,   4,   1,   1,   1, // 231-235
  3,   2,   2, // 236-238
  4,   4,   2,   2, // 239-242
  3,   2, // 243-244
  3,   1,   1, // 245-247
  3,   1, // 248-249
  3,   2,   2,   2, // 250-253
  4,   2, // 254-255
  3,   2,   2,   2, // 256-259
  5,   1, // 260-261
  5,   1,   1, // 262-264
  4,   2, // 265-266
  5,   1,   1, // 267-269
  5,   2,   1,   1, // 270-273
  5,   2,   1,   1,   2, // 274-278
  5,   5,   1, // 279-281
  4,   2,   2, // 282-284
  5,   5,   1,   1, // 285-288
  4,   2, // 289-290
  4,   1, // 291-292
  2,   2, // 293-294
  1, // 295
  2,   1, // 296-297
  2, // 298
  3,   2, // 299-300
  2,   2, // 301-302
  3,   1, // 303-304
  2,   1, // 305-306
  1,   2, // 307-308
  2,   2, // 309-310
  2,   1, // 311-312
  2, // 313
  2,   2, // 314-315
  2,   1, // 316-317
  2, // 318
  3,   2,   2, // 319-321
  1,   1,   2, // 322-324
  3,   2,   2, // 325-327
  1,   2,   2, // 328-330
  2,   3,   2, // 331-333
  3,   2,   2, // 334-336
  3,   2, // 337-338
  1,   2, // 339-340
  4,   3,   2,   1,   2, // 341-345
  4,   3,   2,   1,   2,   2, // 346-351
  4,   2, // 352-353
  4,   1, // 354-355
  4,   3,   3,   1,   2, // 356-360
  4,   3,   2,   2, // 361-364
  4,   2,   1,   2,   2, // 365-369
  4,   3,   2, // 370-372
  4,   1,   2,   2, // 373-376
  4,   1,   1,   2, // 377-380
  4,   2,   2, // 381-383
  4,   2,   1,   1,   2, // 384-388
  4,   3,   1,   1,   2, // 389-393
  1,   1,   2, // 394-396
  4,   2,   2,   2, // 397-400
  4,   2,   1,   2, // 401-404
  4,   2,   1,   1, // 405-408
  4,   2,   2,   2, // 409-412
  4,   2,   2,   1, // 413-416
  4,   2,   2, // 417-419
  2,   2, // 420-421
  2,   3, // 422-423
  4,   2, // 424-425
  4,   1,   1, // 426-428
  3,   2,   1,   2,   2, // 429-433
  3,   3,   1,   2,   2, // 434-438
  3,   2,   1,   2,   3, // 439-443
  3,   3,   1,   2,   3, // 444-448
  3,   1,   2,   2,   3, // 449-453
  4,   1,   1, // 454-456
  2,   2,   2, // 457-459
  2,   1,   1,   2,   2, // 460-464
  3,   2,   2, // 465-467
  3,   1,   1,   2,   2, // 468-472
  2,   2,   3, // 473-475
  2,   1,   1,   2,   3, // 476-480
  3,   2,   3, // 481-483
  3,   1,   1,   2,   3, // 484-488
  1,   1,   2,   2, // 489-492
  1,   2,   2,   2, // 493-496
  1,   1,   2,   3, // 497-500
  1,   2,   2,   3, // 501-504
  4,   1,   1,   2, // 505-508
  4,   2,   1,   1,   2, // 509-513
  4,   2, // 514-515
  4,   2,   2,   2, // 516-519
  3,   2, // 520-521
  3,   2,   2, // 522-524
  3,   2, // 525-526
  3, // 527
  3, // 528
  1,   2, // 529-530
  2, // 531
  1,   2, // 532-533
  4,   7,   1, // 534-536
  9,   2, // 537-538
  9,   2, // 539-540
  9,   3,   1,   2, // 541-544
  9,   2,   1,   2, // 545-548
  9,   3,   2,   1,   2, // 549-553
  9,   3,   1,   2, // 554-557
  9,   1,   2, // 558-560
  9,   2,   1,   2, // 561-564
  9,   3,   2,   1,   2, // 565-569
  9,   3,   1,   2, // 570-573
  2,   1,   2,   5, // 574-577
  3,   2,   1,   2,   5, // 578-582
  3,   1,   2,   5, // 583-586
  1,   2,   5, // 587-589
  2,   1,   2,   5, // 590-593
  3,   2,   1,   2,   5, // 594-598
  3,   1,   2,   5, // 599-602
  2,   1,   2,   7, // 603-606
  3,   2,   1,   2,   7, // 607-611
  7,   1,   2,   7, // 612-615
  3,   7,   1,   2,   7, // 616-620
  3,   1,   2,   7, // 621-624
  1,   2, // 625-626
  3,   1,   2, // 627-629
  9,   5,   5, // 630-632
  9,   7,   7,   7, // 633-636
  9,   9,   7,   7,   7, // 637-641
  9,   9,   7,   7, // 642-645
  9,   5,   5, // 646-648
  9,   5,   5, // 649-651
  9,   7,   5,   5, // 652-655
  9,   5,   5,   2, // 656-659
  9,   7,   2, // 660-662
  9,   7,   7,   2, // 663-666
  9,   5,   2, // 667-669
  9,   7,   5,   2, // 670-673
  9,   7,   5,   5, // 674-677
  9,   5, // 678-679
  9,   9,   5,   5,   2, // 680-684
  9,   5, // 685-686
  9,   5,   5, // 687-689
  9,   5,   5,   2, // 690-693
  9,   5,   2, // 694-696
  9,   7,   5,   2, // 697-700
  9,   5,   2, // 701-703
  9,   7,   5,   2, // 704-707
  1,   2,   7, // 708-710
  7,   1,   2,   7, // 711-714
  1,   2,   7, // 715-717
  7,   1,   2,   7, // 718-721
  3, // 722
  9,   5,   2, // 723-725
  9,   7,   5,   5,   2, // 726-730
  9,   5,   5,   2, // 731-734
  9,   5,   2, // 735-737
  9,   7,   5,   2, // 738-741
  9,   5,   2,   2, // 742-745
  9,   7,   5,   2,   2, // 746-750
  9,   5,   2, // 751-753
  9,   7,   5,   2, // 754-757
  9,   3,   5,   2, // 758-761
  9,   3,   7,   5,   2, // 762-766
  9,   5,   2, // 767-769
  9,   5,   5, // 770-772
  9,   7, // 773-774
  1,   2,   7,   7, // 775-778
  7,   1,   2,   7,   7, // 779-783
  1,   2,   7,   7, // 784-787
  7,   1,   2,   7,   7, // 788-792
  9,   7,   7,   7, // 793-796
  9,   5, // 797-798
  9,   7,   5, // 799-801
  2, // 802
  3,   2, // 803-804
  1,   2, // 805-806
  3,   1,   2, // 807-809
  2,   1,   2, // 810-812
  3,   2,   1,   2, // 813-816
  1, // 817
  1,   2, // 818-819
  1, // 820
  1, // 821
  1,   1, // 822-823
  1, // 824
  3,   2,   2, // 825-827
  1,   1,   1, // 828-830
  3,   2, // 831-832
  3,   2,   2,   2, // 833-836
  3,   3,   2,   2, // 837-840
  3,   2,   2, // 841-843
  3,   3,   2, // 844-846
  3,   2,   2, // 847-849
  3,   1,   1, // 850-852
  3,   1,   2, // 853-855
  3,   2,   2, // 856-858
  1,   1,   1, // 859-861
  2, // 862
  2,   2, // 863-864
  2,   1, // 865-866
  3,   2,   2, // 867-869
  4,   2,   1,   2, // 870-873
  4,   1,   2, // 874-876
  4,   3,   1,   2, // 877-880
  1,   2,   2, // 881-883
  1,   2,   2, // 884-886
  4,   2,   1, // 887-889
  4,   3,   1, // 890-892
  2, // 893
  3, // 894
  4,   2, // 895-896
  4,   2, // 897-898
  2,   1, // 899-900
  4,   1,   2, // 901-903
  4,   1,   1, // 904-906
  4,   2,   1,   1, // 907-910
  2, // 911
  4,   3,   1,   2,   2, // 912-916
  3,   1,   2,   2,   2, // 917-921
  3,   1,   2,   2, // 922-925
  1, // 926
  1,   1,   1, // 927-929
  4,   2,   2, // 930-932
  2,   1,   2,   2, // 933-936
  2,   1,   2,   3, // 937-940
  1,   2,   2, // 941-943
  1,   2,   3, // 944-946
  3,   2,   2,   2,   2, // 947-951
  3,   1,   2,   3, // 952-955
  1,   2,   2, // 956-958
  2,   1,   2,   2, // 959-962
  3,   1,   2,   2, // 963-966
  4,   2,   2, // 967-969
  1,   1,   1, // 970-972
  1, // 973
  4,   2, // 974-975
  4,   2,   2, // 976-978
  3,   2,   2, // 979-981
  4,   2,   2, // 982-984
  3,   2, // 985-986
  3,   2,   2, // 987-989
  4,   2,   2, // 990-992
  4,   2, // 993-994
  4,   1, // 995-996
  3,   2,   2, // 997-999
  4,   2,   2, // 1000-1002
  4,   4,   1,   1,   2, // 1003-1007
  3,   1,   2, // 1008-1010
  2, // 1011
  4,   1,   1, // 1012-1014
  4,   1,   1,   1, // 1015-1018
  4,   4,   1,   1,   1, // 1019-1023
  3,   2,   2, // 1024-1026
  4,   4,   2,   2, // 1027-1030
  3,   2, // 1031-1032
  3,   1,   1, // 1033-1035
  3,   1, // 1036-1037
  3,   2,   2,   2, // 1038-1041
  4,   2, // 1042-1043
  3,   2,   2,   2, // 1044-1047
  4,   1, // 1048-1049
  5,   1,   1, // 1050-1052
  4,   2, // 1053-1054
  4,   1,   1, // 1055-1057
  4,   1,   1,   1, // 1058-1061
  4,   1,   1,   1,   2, // 1062-1066
  4,   4,   1, // 1067-1069
  4,   1,   1, // 1070-1072
  4,   4,   1,   1, // 1073-1076
  4,   2, // 1077-1078
  4,   1, // 1079-1080
  2,   2, // 1081-1082
  1, // 1083
  2,   1, // 1084-1085
  2, // 1086
  3,   2, // 1087-1088
  2,   2, // 1089-1090
  3,   1, // 1091-1092
  2,   1, // 1093-1094
  1,   2, // 1095-1096
  2,   2, // 1097-1098
  2,   1, // 1099-1100
  2, // 1101
  2,   2, // 1102-1103
  2,   1, // 1104-1105
  2, // 1106
  3,   1,   2, // 1107-1109
  1,   1,   2, // 1110-1112
  3,   2,   2, // 1113-1115
  1,   2,   2, // 1116-1118
  1,   3,   2, // 1119-1121
  3,   2,   2, // 1122-1124
  3,   2, // 1125-1126
  1,   2, // 1127-1128
  4,   3,   2,   1,   2, // 1129-1133
  4,   3,   2,   1,   2,   2, // 1134-1139
  4,   2, // 1140-1141
  4,   1, // 1142-1143
  4,   3,   3,   1,   2, // 1144-1148
  4,   3,   2,   2, // 1149-1152
  4,   2,   1,   2,   2, // 1153-1157
  4,   3,   2, // 1158-1160
  4,   1,   2,   2, // 1161-1164
  4,   1,   1,   2, // 1165-1168
  4,   2,   2, // 1169-1171
  4,   2,   1,   1,   2, // 1172-1176
  4,   3,   1,   1,   2, // 1177-1181
  1,   1,   2, // 1182-1184
  4,   2,   2,   2, // 1185-1188
  4,   2,   1,   2, // 1189-1192
  4,   2,   1,   1, // 1193-1196
  3,   2,   2,   2, // 1197-1200
  4,   2,   2,   1, // 1201-1204
  4,   2,   2, // 1205-1207
  2,   2, // 1208-1209
  2,   3, // 1210-1211
  3,   2, // 1212-1213
  4,   1,   1, // 1214-1216
  3,   2,   1,   2,   2, // 1217-1221
  3,   3,   1,   2,   2, // 1222-1226
  3,   2,   1,   2,   3, // 1227-1231
  3,   3,   1,   2,   3, // 1232-1236
  3,   1,   2,   2,   3, // 1237-1241
  4,   1,   1, // 1242-1244
  2,   2,   2, // 1245-1247
  2,   1,   1,   2,   2, // 1248-1252
  3,   2,   2, // 1253-1255
  3,   1,   1,   2,   2, // 1256-1260
  2,   2,   3, // 1261-1263
  2,   1,   1,   2,   3, // 1264-1268
  3,   2,   3, // 1269-1271
  3,   1,   1,   2,   3, // 1272-1276
  1,   1,   2,   2, // 1277-1280
  1,   2,   2,   2, // 1281-1284
  1,   1,   2,   3, // 1285-1288
  1,   2,   2,   3, // 1289-1292
  4,   1,   1,   2, // 1293-1296
  4,   2,   1,   1,   2, // 1297-1301
  4,   2, // 1302-1303
  4,   2,   2,   2, // 1304-1307
  3,   2, // 1308-1309
  3,   2,   2, // 1310-1312
  3,   2, // 1313-1314
  3, // 1315
  3, // 1316
  1,   2, // 1317-1318
  2, // 1319
  1,   2, // 1320-1321
  1, // 1322
  1,   2, // 1323-1324
  1, // 1325
  1, // 1326
  1,   1, // 1327-1328
  1, // 1329
  4,   2,   2, // 1330-1332
  1,   1,   1, // 1333-1335
  3,   2, // 1336-1337
  3,   2,   2,   2, // 1338-1341
  3,   3,   2,   2, // 1342-1345
  3,   2,   2, // 1346-1348
  3,   3,   2, // 1349-1351
  3,   2,   2, // 1352-1354
  3,   1,   1, // 1355-1357
  3,   1,   2, // 1358-1360
  3,   2,   2, // 1361-1363
  1,   1,   1, // 1364-1366
  2, // 1367
  2,   2, // 1368-1369
  2,   1, // 1370-1371
  3,   2,   2, // 1372-1374
  4,   2,   1,   2, // 1375-1378
  4,   1,   2, // 1379-1381
  4,   3,   1,   2, // 1382-1385
  1,   2,   2, // 1386-1388
  1,   2,   2, // 1389-1391
  3,   2,   2, // 1392-1394
  3,   3,   2, // 1395-1397
  2, // 1398
  3, // 1399
  4,   2, // 1400-1401
  3,   2, // 1402-1403
  3,   1, // 1404-1405
  4,   1,   2, // 1406-1408
  4,   1,   1, // 1409-1411
  4,   2,   1,   1, // 1412-1415
  2, // 1416
  4,   3,   1,   2,   2, // 1417-1421
  9,   7,   7, // 1422-1424
  3,   1,   2,   2,   2, // 1425-1429
  3,   1,   2,   2, // 1430-1433
  1, // 1434
  9,   7,   7, // 1435-1437
  9,   1,   2, // 1438-1440
  9,   1,   2, // 1441-1443
  1,   1,   1, // 1444-1446
  9,   2,   7, // 1447-1449
  1,   2,   7, // 1450-1452
  1,   2,   5, // 1453-1455
  9,   2,   7,   7, // 1456-1459
  4,   2,   2, // 1460-1462
  2,   1,   2,   2, // 1463-1466
  2,   1,   2,   3, // 1467-1470
  1,   2,   2, // 1471-1473
  1,   2,   3, // 1474-1476
  4,   2,   2,   2,   2, // 1477-1481
  3,   1,   2,   3, // 1482-1485
  1,   2,   2, // 1486-1488
  2,   1,   2,   2, // 1489-1492
  3,   1,   2,   2, // 1493-1496
  4,   2,   2, // 1497-1499
  1,   1,   1, // 1500-1502
  9,   7,   7,   7, // 1503-1506
  9,   7, // 1507-1508
  9,   5,   5,   2, // 1509-1512
  9, // 1513
  1, // 1514
  4,   2, // 1515-1516
  4,   2,   2, // 1517-1519
  4,   2,   2, // 1520-1522
  4,   2,   2, // 1523-1525
  3,   2, // 1526-1527
  3,   2,   2, // 1528-1530
  3,   2,   2, // 1531-1533
  4,   2, // 1534-1535
  4,   1, // 1536-1537
  3,   2,   2, // 1538-1540
  3,   2,   2, // 1541-1543
  3,   4,   2,   2,   2, // 1544-1548
  3,   1,   2, // 1549-1551
  2, // 1552
  4,   1,   1, // 1553-1555
  4,   1,   1,   2, // 1556-1559
  4,   4,   2,   1,   1, // 1560-1564
  3,   2,   2, // 1565-1567
  4,   4,   2,   2, // 1568-1571
  3,   2, // 1572-1573
  3,   1,   1, // 1574-1576
  3,   1, // 1577-1578
  3,   2,   2,   2, // 1579-1582
  4,   2, // 1583-1584
  3,   2,   2,   2, // 1585-1588
  5,   1, // 1589-1590
  5,   1,   1, // 1591-1593
  4,   2, // 1594-1595
  5,   1,   1, // 1596-1598
  5,   2,   1,   1, // 1599-1602
  5,   2,   1,   1,   2, // 1603-1607
  5,   5,   1, // 1608-1610
  4,   2,   2, // 1611-1613
  5,   5,   1,   1, // 1614-1617
  4,   2, // 1618-1619
  4,   1, // 1620-1621
  2,   2, // 1622-1623
  1, // 1624
  2,   1, // 1625-1626
  2, // 1627
  3,   2, // 1628-1629
  2,   2, // 1630-1631
  3,   1, // 1632-1633
  2,   1, // 1634-1635
  1,   2, // 1636-1637
  2,   2, // 1638-1639
  2,   1, // 1640-1641
  2, // 1642
  2,   2, // 1643-1644
  2,   1, // 1645-1646
  2, // 1647
  3,   2,   2, // 1648-1650
  1,   1,   2, // 1651-1653
  3,   2,   2, // 1654-1656
  1,   2,   2, // 1657-1659
  2,   3,   2, // 1660-1662
  3,   2,   2, // 1663-1665
  3,   2, // 1666-1667
  1,   2, // 1668-1669
  4,   3,   2,   1,   2, // 1670-1674
  4,   3,   2,   1,   2,   2, // 1675-1680
  4,   2, // 1681-1682
  4,   1, // 1683-1684
  4,   3,   3,   1,   2, // 1685-1689
  4,   3,   2,   2, // 1690-1693
  4,   2,   1,   2,   2, // 1694-1698
  4,   3,   2, // 1699-1701
  4,   1,   2,   2, // 1702-1705
  4,   1,   1,   2, // 1706-1709
  4,   2,   2, // 1710-1712
  4,   2,   1,   1,   2, // 1713-1717
  4,   3,   1,   1,   2, // 1718-1722
  1,   1,   2, // 1723-1725
  4,   2,   2,   2, // 1726-1729
  4,   2,   1,   2, // 1730-1733
  4,   2,   1,   1, // 1734-1737
  4,   2,   2,   2, // 1738-1741
  4,   2,   2,   1, // 1742-1745
  4,   2,   2, // 1746-1748
  2,   2, // 1749-1750
  2,   3, // 1751-1752
  4,   2, // 1753-1754
  4,   1,   1, // 1755-1757
  3,   2,   1,   2,   2, // 1758-1762
  3,   3,   1,   2,   2, // 1763-1767
  3,   2,   1,   2,   3, // 1768-1772
  3,   3,   1,   2,   3, // 1773-1777
  3,   1,   2,   2,   3, // 1778-1782
  4,   1,   1, // 1783-1785
  2,   2,   2, // 1786-1788
  2,   1,   1,   2,   2, // 1789-1793
  3,   2,   2, // 1794-1796
  3,   1,   1,   2,   2, // 1797-1801
  2,   2,   3, // 1802-1804
  2,   1,   1,   2,   3, // 1805-1809
  3,   2,   3, // 1810-1812
  3,   1,   1,   2,   3, // 1813-1817
  1,   1,   2,   2, // 1818-1821
  1,   2,   2,   2, // 1822-1825
  1,   1,   2,   3, // 1826-1829
  1,   2,   2,   3, // 1830-1833
  4,   1,   1,   2, // 1834-1837
  4,   2,   1,   1,   2, // 1838-1842
  4,   2, // 1843-1844
  4,   2,   2,   2, // 1845-1848
  3,   2, // 1849-1850
  3,   2,   2, // 1851-1853
  3,   2, // 1854-1855
  3, // 1856
  3, // 1857
  1,   2, // 1858-1859
  2, // 1860
  1,   2, // 1861-1862
  4,   7,   1, // 1863-1865
  9,   2, // 1866-1867
  9,   2, // 1868-1869
  9,   3,   1,   2, // 1870-1873
  9,   2,   1,   2, // 1874-1877
  9,   3,   2,   1,   2, // 1878-1882
  9,   3,   1,   2, // 1883-1886
  9,   1,   2, // 1887-1889
  9,   2,   1,   2, // 1890-1893
  9,   3,   2,   1,   2, // 1894-1898
  9,   3,   1,   2, // 1899-1902
  2,   1,   2,   5, // 1903-1906
  3,   2,   1,   2,   5, // 1907-1911
  3,   1,   2,   5, // 1912-1915
  1,   2,   5, // 1916-1918
  2,   1,   2,   5, // 1919-1922
  3,   2,   1,   2,   5, // 1923-1927
  3,   1,   2,   5, // 1928-1931
  2,   1,   2,   7, // 1932-1935
  3,   2,   1,   2,   7, // 1936-1940
  7,   1,   2,   7, // 1941-1944
  3,   7,   1,   2,   7, // 1945-1949
  3,   1,   2,   7, // 1950-1953
  1,   2, // 1954-1955
  3,   1,   2, // 1956-1958
  9,   5,   5, // 1959-1961
  9,   7,   7,   7, // 1962-1965
  9,   9,   7,   7,   7, // 1966-1970
  9,   9,   7,   7, // 1971-1974
  9,   5,   5, // 1975-1977
  9,   5,   5, // 1978-1980
  9,   7,   5,   5, // 1981-1984
  9,   5,   5,   2, // 1985-1988
  9,   7,   2, // 1989-1991
  9,   7,   7,   2, // 1992-1995
  9,   5,   2, // 1996-1998
  9,   7,   5,   2, // 1999-2002
  9,   7,   5,   5, // 2003-2006
  9,   5, // 2007-2008
  9,   9,   5,   5,   2, // 2009-2013
  9,   5, // 2014-2015
  9,   5,   5, // 2016-2018
  9,   5,   5,   2, // 2019-2022
  9,   5,   2, // 2023-2025
  9,   7,   5,   2, // 2026-2029
  9,   5,   2, // 2030-2032
  9,   7,   5,   2, // 2033-2036
  1,   2,   7, // 2037-2039
  7,   1,   2,   7, // 2040-2043
  1,   2,   7, // 2044-2046
  7,   1,   2,   7, // 2047-2050
  3, // 2051
  9,   5,   2, // 2052-2054
  9,   7,   5,   5,   2, // 2055-2059
  9,   5,   5,   2, // 2060-2063
  9,   5,   2, // 2064-2066
  9,   7,   5,   2, // 2067-2070
  9,   5,   2,   2, // 2071-2074
  9,   7,   5,   2,   2, // 2075-2079
  9,   5,   2, // 2080-2082
  9,   7,   5,   2, // 2083-2086
  9,   3,   5,   2, // 2087-2090
  9,   3,   7,   5,   2, // 2091-2095
  9,   5,   2, // 2096-2098
  9,   7,   7, // 2099-2101
  9,   7, // 2102-2103
  1,   2,   7,   7, // 2104-2107
  7,   1,   2,   7,   7, // 2108-2112
  1,   2,   7,   7, // 2113-2116
  7,   1,   2,   7,   7, // 2117-2121
  9,   7,   7,   7, // 2122-2125
  9,   5, // 2126-2127
  9,   7,   5, // 2128-2130
  2, // 2131
  3,   2, // 2132-2133
  1,   2, // 2134-2135
  3,   1,   2, // 2136-2138
  2,   1,   2, // 2139-2141
  3,   2,   1,   2, // 2142-2145
  1, // 2146
  1,   2, // 2147-2148
  1, // 2149
  1, // 2150
  1,   1, // 2151-2152
  1, // 2153
  4,   2,   2, // 2154-2156
  1,   1,   1, // 2157-2159
  3,   2, // 2160-2161
  3,   2,   2,   2, // 2162-2165
  4,   3,   2,   2, // 2166-2169
  3,   2,   2, // 2170-2172
  4,   3,   2, // 2173-2175
  3,   2,   2, // 2176-2178
  3,   2,   2, // 2179-2181
  3,   2,   2, // 2182-2184
  3,   2,   2, // 2185-2187
  1,   1,   1, // 2188-2190
  2, // 2191
  2,   2, // 2192-2193
  2,   2, // 2194-2195
  4,   1,   2, // 2196-2198
  4,   2,   1,   2, // 2199-2202
  4,   1,   2, // 2203-2205
  4,   3,   1,   2, // 2206-2209
  1,   2,   2, // 2210-2212
  1,   2,   2, // 2213-2215
  3,   2,   1, // 2216-2218
  3,   3,   1, // 2219-2221
  2, // 2222
  3, // 2223
  4,   1, // 2224-2225
  3,   1, // 2226-2227
  3,   1, // 2228-2229
  4,   1,   2, // 2230-2232
  4,   1,   1, // 2233-2235
  4,   2,   1,   1, // 2236-2239
  2, // 2240
  4,   3,   1,   2,   2, // 2241-2245
  9,   7,   7, // 2246-2248
  3,   1,   2,   2,   2, // 2249-2253
  3,   1,   2,   2, // 2254-2257
  2, // 2258
  9,   7,   7, // 2259-2261
  9,   1,   2, // 2262-2264
  9,   1,   2, // 2265-2267
  1,   1,   1, // 2268-2270
  9,   2,   7, // 2271-2273
  1,   2,   7, // 2274-2276
  1,   2,   5, // 2277-2279
  9,   2,   7,   7, // 2280-2283
  4,   2,   2, // 2284-2286
  2,   1,   2,   2, // 2287-2290
  2,   1,   2,   3, // 2291-2294
  1,   2,   2, // 2295-2297
  1,   2,   3, // 2298-2300
  4,   2,   2,   2,   2, // 2301-2305
  3,   1,   2,   3, // 2306-2309
  1,   2,   2, // 2310-2312
  2,   1,   2,   2, // 2313-2316
  3,   1,   2,   2, // 2317-2320
  3,   1,   2, // 2321-2323
  1,   1,   1, // 2324-2326
  9,   7,   7,   7, // 2327-2330
  9,   7, // 2331-2332
  9,   5,   5,   2, // 2333-2336
  9, // 2337
  1, // 2338
  4,   2, // 2339-2340
  4,   2,   2, // 2341-2343
  4,   2,   2, // 2344-2346
  4,   2,   2, // 2347-2349
  3,   2, // 2350-2351
  3,   2,   2, // 2352-2354
  3,   2,   2, // 2355-2357
  4,   2, // 2358-2359
  4,   1, // 2360-2361
  3,   2,   2, // 2362-2364
  3,   2,   2, // 2365-2367
  3,   4,   2,   2,   2, // 2368-2372
  3,   2,   2, // 2373-2375
  2, // 2376
  4,   1,   1, // 2377-2379
  4,   1,   1,   2, // 2380-2383
  4,   4,   2,   1,   1, // 2384-2388
  3,   2,   2, // 2389-2391
  4,   4,   2,   2, // 2392-2395
  3,   2, // 2396-2397
  3,   2,   2, // 2398-2400
  3,   2, // 2401-2402
  3,   2,   2,   2, // 2403-2406
  4,   2, // 2407-2408
  3,   2,   2,   2, // 2409-2412
  5,   1, // 2413-2414
  5,   1,   1, // 2415-2417
  4,   2, // 2418-2419
  5,   1,   1, // 2420-2422
  5,   2,   1,   1, // 2423-2426
  5,   2,   1,   1,   2, // 2427-2431
  5,   5,   1, // 2432-2434
  4,   2,   2, // 2435-2437
  5,   5,   1,   1, // 2438-2441
  4,   2, // 2442-2443
  4,   1, // 2444-2445
  2,   2, // 2446-2447
  1, // 2448
  2,   1, // 2449-2450
  2, // 2451
  3,   2, // 2452-2453
  2,   2, // 2454-2455
  3,   2, // 2456-2457
  2,   2, // 2458-2459
  2,   2, // 2460-2461
  2,   2, // 2462-2463
  2,   1, // 2464-2465
  2, // 2466
  2,   2, // 2467-2468
  2,   1, // 2469-2470
  2, // 2471
  3,   2,   2, // 2472-2474
  2,   2,   2, // 2475-2477
  3,   2,   2, // 2478-2480
  2,   2,   2, // 2481-2483
  2,   3,   2, // 2484-2486
  3,   2,   2, // 2487-2489
  3,   2, // 2490-2491
  2,   2, // 2492-2493
  4,   3,   2,   1,   2, // 2494-2498
  4,   3,   2,   1,   2,   2, // 2499-2504
  4,   2, // 2505-2506
  4,   1, // 2507-2508
  4,   4,   3,   1,   2, // 2509-2513
  4,   3,   2,   2, // 2514-2517
  4,   2,   1,   2,   2, // 2518-2522
  4,   3,   2, // 2523-2525
  4,   1,   2,   2, // 2526-2529
  4,   1,   1,   2, // 2530-2533
  4,   2,   2, // 2534-2536
  4,   2,   1,   1,   2, // 2537-2541
  4,   3,   1,   1,   2, // 2542-2546
  1,   1,   2, // 2547-2549
  4,   2,   2,   2, // 2550-2553
  4,   2,   1,   2, // 2554-2557
  4,   2,   1,   1, // 2558-2561
  4,   2,   2,   2, // 2562-2565
  4,   2,   2,   1, // 2566-2569
  4,   2,   2, // 2570-2572
  2,   2, // 2573-2574
  2,   3, // 2575-2576
  4,   2, // 2577-2578
  4,   1,   1, // 2579-2581
  3,   2,   1,   2,   2, // 2582-2586
  4,   3,   1,   2,   1, // 2587-2591
  3,   2,   1,   2,   3, // 2592-2596
  4,   3,   1,   2,   3, // 2597-2601
  3,   1,   2,   2,   3, // 2602-2606
  4,   1,   1, // 2607-2609
  2,   2,   2, // 2610-2612
  2,   1,   1,   2,   2, // 2613-2617
  3,   2,   2, // 2618-2620
  3,   1,   1,   2,   2, // 2621-2625
  2,   2,   3, // 2626-2628
  2,   1,   1,   2,   3, // 2629-2633
  3,   2,   3, // 2634-2636
  3,   1,   1,   2,   3, // 2637-2641
  1,   1,   2,   2, // 2642-2645
  1,   2,   2,   2, // 2646-2649
  1,   1,   2,   3, // 2650-2653
  1,   2,   2,   3, // 2654-2657
  4,   1,   1,   2, // 2658-2661
  4,   2,   1,   1,   2, // 2662-2666
  4,   2, // 2667-2668
  4,   2,   2,   2, // 2669-2672
  3,   2, // 2673-2674
  3,   2,   2, // 2675-2677
  3,   2, // 2678-2679
  3, // 2680
  4, // 2681
  2,   2, // 2682-2683
  2, // 2684
  1,   2, // 2685-2686
  4,   7,   1, // 2687-2689
  9,   2, // 2690-2691
  9,   2, // 2692-2693
  9,   3,   1,   2, // 2694-2697
  9,   2,   1,   2, // 2698-2701
  9,   3,   2,   1,   2, // 2702-2706
  9,   3,   1,   2, // 2707-2710
  9,   1,   2, // 2711-2713
  9,   2,   1,   2, // 2714-2717
  9,   3,   2,   1,   2, // 2718-2722
  9,   3,   1,   2, // 2723-2726
  2,   1,   2,   5, // 2727-2730
  3,   2,   1,   2,   5, // 2731-2735
  3,   1,   2,   5, // 2736-2739
  1,   2,   5, // 2740-2742
  2,   1,   2,   5, // 2743-2746
  3,   2,   1,   2,   5, // 2747-2751
  3,   1,   2,   5, // 2752-2755
  2,   1,   2,   7, // 2756-2759
  3,   2,   1,   2,   7, // 2760-2764
  7,   1,   2,   7, // 2765-2768
  3,   7,   1,   2,   7, // 2769-2773
  3,   1,   2,   7, // 2774-2777
  1,   2, // 2778-2779
  3,   1,   2, // 2780-2782
  9,   5,   5, // 2783-2785
  9,   7,   7,   7, // 2786-2789
  9,   9,   7,   7,   7, // 2790-2794
  9,   9,   7,   7, // 2795-2798
  9,   5,   5, // 2799-2801
  9,   5,   5, // 2802-2804
  9,   7,   5,   5, // 2805-2808
  9,   5,   5,   2, // 2809-2812
  9,   7,   2, // 2813-2815
  9,   7,   7,   2, // 2816-2819
  9,   5,   2, // 2820-2822
  9,   7,   5,   2, // 2823-2826
  9,   7,   5,   5, // 2827-2830
  9,   5, // 2831-2832
  9,   9,   5,   5,   2, // 2833-2837
  9,   5, // 2838-2839
  9,   5,   5, // 2840-2842
  9,   5,   5,   2, // 2843-2846
  9,   5,   2, // 2847-2849
  9,   7,   5,   2, // 2850-2853
  9,   5,   2, // 2854-2856
  9,   7,   5,   2, // 2857-2860
  1,   2,   7, // 2861-2863
  7,   1,   2,   7, // 2864-2867
  1,   2,   7, // 2868-2870
  7,   1,   2,   7, // 2871-2874
  3, // 2875
  9,   5,   2, // 2876-2878
  9,   7,   5,   5,   2, // 2879-2883
  9,   5,   5,   2, // 2884-2887
  9,   5,   2, // 2888-2890
  9,   7,   5,   2, // 2891-2894
  9,   5,   2,   2, // 2895-2898
  9,   7,   5,   2,   2, // 2899-2903
  9,   5,   2, // 2904-2906
  9,   7,   5,   2, // 2907-2910
  9,   3,   5,   2, // 2911-2914
  9,   3,   7,   5,   2, // 2915-2919
  9,   5,   2, // 2920-2922
  9,   7,   7, // 2923-2925
  9,   7, // 2926-2927
  1,   2,   7,   7, // 2928-2931
  7,   1,   2,   7,   7, // 2932-2936
  1,   2,   7,   7, // 2937-2940
  7,   1,   2,   7,   7, // 2941-2945
  9,   7,   7,   7, // 2946-2949
  9,   5, // 2950-2951
  9,   7,   5, // 2952-2954
  2, // 2955
  3,   2, // 2956-2957
  1,   2, // 2958-2959
  3,   1,   2, // 2960-2962
  2,   1,   2, // 2963-2965
  3,   2,   1,   2, // 2966-2969
  1, // 2970
  1,   2, // 2971-2972
  1, // 2973
  1, // 2974
  1,   1, // 2975-2976
  1, // 2977
  4,   2,   2, // 2978-2980
  1,   1,   1, // 2981-2983
  3,   2, // 2984-2985
  3,   2,   2,   2, // 2986-2989
  4,   3,   2,   2, // 2990-2993
  3,   2,   2, // 2994-2996
  4,   3,   2, // 2997-2999
  3,   2,   2, // 3000-3002
  3,   2,   2, // 3003-3005
  3,   2,   2, // 3006-3008
  3,   2,   2, // 3009-3011
  1,   1,   1, // 3012-3014
  2, // 3015
  2,   2, // 3016-3017
  2,   2, // 3018-3019
  4,   1,   2, // 3020-3022
  4,   2,   1,   2, // 3023-3026
  4,   1,   2, // 3027-3029
  4,   3,   1,   2, // 3030-3033
  1,   2,   3, // 3034-3036
  1,   2,   2, // 3037-3039
  3,   2,   1, // 3040-3042
  3,   3,   1, // 3043-3045
  2, // 3046
  3, // 3047
  4,   1, // 3048-3049
  3,   1, // 3050-3051
  3,   1, // 3052-3053
  4,   1,   2, // 3054-3056
  4,   1,   1, // 3057-3059
  4,   2,   1,   1, // 3060-3063
  2, // 3064
  4,   3,   1,   2,   2, // 3065-3069
  9,   7,   7, // 3070-3072
  3,   1,   2,   2,   3, // 3073-3077
  3,   1,   2,   3, // 3078-3081
  2, // 3082
  9,   7,   7, // 3083-3085
  9,   1,   2, // 3086-3088
  9,   1,   2, // 3089-3091
  1,   1,   1, // 3092-3094
  9,   2,   7, // 3095-3097
  1,   2,   7, // 3098-3100
  1,   2,   5, // 3101-3103
  9,   2,   7,   7, // 3104-3107
  4,   2,   2, // 3108-3110
  2,   1,   2,   3, // 3111-3114
  2,   1,   2,   3, // 3115-3118
  1,   2,   3, // 3119-3121
  1,   2,   3, // 3122-3124
  4,   2,   2,   2,   2, // 3125-3129
  3,   1,   2,   3, // 3130-3133
  1,   2,   2, // 3134-3136
  2,   1,   2,   2, // 3137-3140
  3,   1,   2,   2, // 3141-3144
  3,   1,   2, // 3145-3147
  1,   1,   1, // 3148-3150
  9,   7,   7,   7, // 3151-3154
  9,   7, // 3155-3156
  9,   5,   5,   2, // 3157-3160
  9, // 3161
  1, // 3162
  4,   2, // 3163-3164
  4,   2,   2, // 3165-3167
  4,   2,   2, // 3168-3170
  4,   2,   2, // 3171-3173
  3,   2, // 3174-3175
  4,   2,   2, // 3176-3178
  4,   2,   2, // 3179-3181
  4,   2, // 3182-3183
  4,   1, // 3184-3185
  4,   2,   2, // 3186-3188
  4,   2,   2, // 3189-3191
  3,   4,   2,   2,   2, // 3192-3196
  3,   2,   2, // 3197-3199
  2, // 3200
  4,   1,   1, // 3201-3203
  4,   1,   1,   2, // 3204-3207
  4,   4,   2,   1,   1, // 3208-3212
  3,   2,   2, // 3213-3215
  4,   4,   2,   2, // 3216-3219
  3,   2, // 3220-3221
  3,   2,   2, // 3222-3224
  3,   2, // 3225-3226
  3,   2,   2,   2, // 3227-3230
  4,   2, // 3231-3232
  3,   2,   2,   2, // 3233-3236
  5,   1, // 3237-3238
  5,   1,   1, // 3239-3241
  4,   2, // 3242-3243
  5,   1,   1, // 3244-3246
  5,   2,   1,   1, // 3247-3250
  5,   2,   1,   1,   2, // 3251-3255
  5,   5,   1, // 3256-3258
  4,   2,   2, // 3259-3261
  5,   5,   1,   1, // 3262-3265
  4,   2, // 3266-3267
  4,   1, // 3268-3269
  2,   2, // 3270-3271
  1, // 3272
  2,   1, // 3273-3274
  2, // 3275
  3,   2, // 3276-3277
  2,   2, // 3278-3279
  3,   2, // 3280-3281
  2,   2, // 3282-3283
  2,   2, // 3284-3285
  2,   2, // 3286-3287
  2,   1, // 3288-3289
  2, // 3290
  2,   2, // 3291-3292
  2,   1, // 3293-3294
  2, // 3295
  3,   3,   2, // 3296-3298
  2,   2,   2, // 3299-3301
  3,   2,   2, // 3302-3304
  2,   2,   2, // 3305-3307
  3,   3,   2, // 3308-3310
  3,   2,   2, // 3311-3313
  3,   2, // 3314-3315
  2,   2, // 3316-3317
  4,   3,   2,   1,   2, // 3318-3322
  4,   3,   2,   1,   2,   2, // 3323-3328
  4,   2, // 3329-3330
  4,   1, // 3331-3332
  4,   4,   3,   1,   2, // 3333-3337
  4,   3,   2,   2, // 3338-3341
  4,   2,   1,   2,   2, // 3342-3346
  4,   3,   2, // 3347-3349
  4,   1,   2,   2, // 3350-3353
  4,   1,   1,   2, // 3354-3357
  4,   2,   2, // 3358-3360
  4,   2,   1,   1,   2, // 3361-3365
  4,   3,   1,   1,   2, // 3366-3370
  1,   1,   2, // 3371-3373
  4,   2,   2,   2, // 3374-3377
  4,   2,   1,   2, // 3378-3381
  4,   2,   1,   1, // 3382-3385
  4,   2,   2,   2, // 3386-3389
  4,   2,   2,   1, // 3390-3393
  4,   2,   2, // 3394-3396
  2,   3, // 3397-3398
  2,   3, // 3399-3400
  4,   2, // 3401-3402
  4,   1,   1, // 3403-3405
  3,   2,   1,   2,   3, // 3406-3410
  4,   3,   1,   2,   1, // 3411-3415
  3,   2,   1,   2,   3, // 3416-3420
  4,   3,   1,   2,   3, // 3421-3425
  3,   1,   2,   2,   3, // 3426-3430
  4,   1,   1, // 3431-3433
  2,   2,   3, // 3434-3436
  2,   1,   1,   2,   3, // 3437-3441
  3,   2,   3, // 3442-3444
  3,   1,   1,   2,   3, // 3445-3449
  2,   2,   3, // 3450-3452
  2,   1,   1,   2,   3, // 3453-3457
  3,   2,   3, // 3458-3460
  3,   1,   1,   2,   3, // 3461-3465
  1,   1,   2,   3, // 3466-3469
  1,   2,   2,   3, // 3470-3473
  1,   1,   2,   3, // 3474-3477
  1,   2,   2,   3, // 3478-3481
  4,   1,   1,   2, // 3482-3485
  4,   2,   1,   1,   2, // 3486-3490
  4,   2, // 3491-3492
  4,   2,   2,   2, // 3493-3496
  3,   2, // 3497-3498
  3,   2,   2, // 3499-3501
  3,   2, // 3502-3503
  3, // 3504
  4, // 3505
  2,   2, // 3506-3507
  2, // 3508
  1,   2, // 3509-3510
  4,   7,   1, // 3511-3513
  9,   2, // 3514-3515
  9,   2, // 3516-3517
  9,   3,   1,   2, // 3518-3521
  9,   2,   1,   2, // 3522-3525
  9,   3,   2,   1,   2, // 3526-3530
  9,   3,   1,   2, // 3531-3534
  9,   1,   2, // 3535-3537
  9,   2,   1,   2, // 3538-3541
  9,   3,   2,   1,   2, // 3542-3546
  9,   3,   1,   2, // 3547-3550
  2,   1,   2,   5, // 3551-3554
  3,   2,   1,   2,   5, // 3555-3559
  3,   1,   2,   5, // 3560-3563
  1,   2,   5, // 3564-3566
  2,   1,   2,   5, // 3567-3570
  3,   2,   1,   2,   5, // 3571-3575
  3,   1,   2,   5, // 3576-3579
  2,   1,   2,   7, // 3580-3583
  3,   2,   1,   2,   7, // 3584-3588
  7,   1,   2,   7, // 3589-3592
  3,   7,   1,   2,   7, // 3593-3597
  3,   1,   2,   7, // 3598-3601
  1,   2, // 3602-3603
  3,   1,   2, // 3604-3606
  9,   5,   5, // 3607-3609
  9,   7,   7,   7, // 3610-3613
  9,   9,   7,   7,   7, // 3614-3618
  9,   9,   7,   7, // 3619-3622
  9,   5,   5, // 3623-3625
  9,   5,   5, // 3626-3628
  9,   7,   5,   5, // 3629-3632
  9,   5,   5,   2, // 3633-3636
  9,   7,   2, // 3637-3639
  9,   7,   7,   2, // 3640-3643
  9,   5,   2, // 3644-3646
  9,   7,   5,   2, // 3647-3650
  9,   7,   5,   5, // 3651-3654
  9,   5, // 3655-3656
  9,   9,   5,   5,   2, // 3657-3661
  9,   5, // 3662-3663
  9,   5,   5, // 3664-3666
  9,   5,   5,   2, // 3667-3670
  9,   5,   2, // 3671-3673
  9,   7,   5,   2, // 3674-3677
  9,   5,   2, // 3678-3680
  9,   7,   5,   2, // 3681-3684
  1,   2,   7, // 3685-3687
  7,   1,   2,   7, // 3688-3691
  1,   2,   7, // 3692-3694
  7,   1,   2,   7, // 3695-3698
  3, // 3699
  9,   5,   2, // 3700-3702
  9,   7,   5,   5,   2, // 3703-3707
  9,   5,   5,   2, // 3708-3711
  9,   5,   2, // 3712-3714
  9,   7,   5,   2, // 3715-3718
  9,   5,   2,   2, // 3719-3722
  9,   7,   5,   2,   2, // 3723-3727
  9,   5,   2, // 3728-3730
  9,   7,   5,   2, // 3731-3734
  9,   3,   5,   2, // 3735-3738
  9,   3,   7,   5,   2, // 3739-3743
  9,   5,   2, // 3744-3746
  9,   7,   7, // 3747-3749
  9,   7, // 3750-3751
  1,   2,   7,   7, // 3752-3755
  7,   1,   2,   7,   7, // 3756-3760
  1,   2,   7,   7, // 3761-3764
  7,   1,   2,   7,   7, // 3765-3769
  9,   7,   7,   7, // 3770-3773
  9,   5, // 3774-3775
  9,   7,   5, // 3776-3778
  2, // 3779
  3,   2, // 3780-3781
  1,   2, // 3782-3783
  3,   1,   2, // 3784-3786
  2,   1,   2, // 3787-3789
  3,   2,   1,   2, // 3790-3793
  1, // 3794
  1,   2, // 3795-3796
  1, // 3797
  1, // 3798
  1,   1, // 3799-3800
  1, // 3801
  0 // End operand cycles
};
extern const unsigned HexagonForwardingPaths[] = {
 0, // No itinerary
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 1-3
 0,  0,  0, // 4-6
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 7-8
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 9-12
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 13-16
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 17-19
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 20-22
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 23-25
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 26-28
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 29-31
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 32-34
 0,  0,  0, // 35-37
 0, // 38
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 39-40
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 41-42
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 43-45
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 46-49
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 50-52
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 53-56
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 57-59
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 60-62
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 63-65
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 66-68
HexagonItinerariesV60Bypass::Hex_FWD, // 69
HexagonItinerariesV60Bypass::Hex_FWD, // 70
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 71-72
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 73-74
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 75-76
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 77-79
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 80-82
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 83-86
HexagonItinerariesV60Bypass::Hex_FWD, // 87
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 88-92
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 93-95
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 96-100
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 101-104
HexagonItinerariesV60Bypass::Hex_FWD, // 105
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 106-108
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 109-111
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 112-114
 0,  0,  0, // 115-117
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 118-120
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 121-123
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 124-126
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 127-130
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 131-133
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 134-137
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 138-141
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 142-144
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 145-147
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 148-152
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 153-156
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 157-159
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 160-163
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 164-167
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 168-170
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 171-173
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD,  0, // 174-177
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 178-179
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 180-183
HexagonItinerariesV60Bypass::HVX_FWD, // 184
HexagonItinerariesV60Bypass::Hex_FWD, // 185
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 186-187
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 188-190
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 191-193
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 194-196
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 197-198
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 199-201
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 202-204
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 205-206
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 207-208
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 209-211
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 212-214
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 215-219
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 220-222
HexagonItinerariesV60Bypass::Hex_FWD, // 223
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 224-226
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 227-230
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 231-235
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 236-238
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 239-242
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 243-244
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 245-247
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 248-249
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 250-253
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 254-255
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 256-259
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 260-261
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 262-264
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 265-266
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 267-269
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 270-273
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 274-278
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 279-281
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 282-284
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 285-288
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 289-290
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 291-292
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 293-294
HexagonItinerariesV60Bypass::Hex_FWD, // 295
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 296-297
HexagonItinerariesV60Bypass::Hex_FWD, // 298
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 299-300
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 301-302
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 303-304
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 305-306
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 307-308
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 309-310
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 311-312
HexagonItinerariesV60Bypass::Hex_FWD, // 313
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 314-315
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 316-317
HexagonItinerariesV60Bypass::Hex_FWD, // 318
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 319-321
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 322-324
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 325-327
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 328-330
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 331-333
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 334-336
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 337-338
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 339-340
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 341-345
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 346-351
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 352-353
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 354-355
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 356-360
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 361-364
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 365-369
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 370-372
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 373-376
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 377-380
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 381-383
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 384-388
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 389-393
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 394-396
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 397-400
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 401-404
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 405-408
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 409-412
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 413-416
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 417-419
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 420-421
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 422-423
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 424-425
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 426-428
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 429-433
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 434-438
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 439-443
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 444-448
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 449-453
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 454-456
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 457-459
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 460-464
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 465-467
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 468-472
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 473-475
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 476-480
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 481-483
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 484-488
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 489-492
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 493-496
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 497-500
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 501-504
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 505-508
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 509-513
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 514-515
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 516-519
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 520-521
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 522-524
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 525-526
HexagonItinerariesV60Bypass::Hex_FWD, // 527
HexagonItinerariesV60Bypass::Hex_FWD, // 528
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 529-530
HexagonItinerariesV60Bypass::Hex_FWD, // 531
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 532-533
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 534-536
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 537-538
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 539-540
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 541-544
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 545-548
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 549-553
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 554-557
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 558-560
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 561-564
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 565-569
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 570-573
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 574-577
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 578-582
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 583-586
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 587-589
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 590-593
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 594-598
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 599-602
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 603-606
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 607-611
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 612-615
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 616-620
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 621-624
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 625-626
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 627-629
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 630-632
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 633-636
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 637-641
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 642-645
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 646-648
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 649-651
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 652-655
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 656-659
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 660-662
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 663-666
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 667-669
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 670-673
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 674-677
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 678-679
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 680-684
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 685-686
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 687-689
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 690-693
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 694-696
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 697-700
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 701-703
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 704-707
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 708-710
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 711-714
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 715-717
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 718-721
HexagonItinerariesV60Bypass::HVX_FWD, // 722
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 723-725
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 726-730
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 731-734
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 735-737
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 738-741
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 742-745
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 746-750
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 751-753
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 754-757
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 758-761
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 762-766
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 767-769
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 770-772
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 773-774
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 775-778
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 779-783
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 784-787
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 788-792
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 793-796
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 797-798
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::HVX_FWD, // 799-801
HexagonItinerariesV60Bypass::Hex_FWD, // 802
HexagonItinerariesV60Bypass::HVX_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 803-804
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 805-806
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 807-809
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 810-812
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 813-816
HexagonItinerariesV60Bypass::Hex_FWD, // 817
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 818-819
HexagonItinerariesV60Bypass::Hex_FWD, // 820
HexagonItinerariesV60Bypass::Hex_FWD, // 821
HexagonItinerariesV60Bypass::Hex_FWD, HexagonItinerariesV60Bypass::Hex_FWD, // 822-823
HexagonItinerariesV60Bypass::Hex_FWD, // 824
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 825-827
 0,  0,  0, // 828-830
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 831-832
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 833-836
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 837-840
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 841-843
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 844-846
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 847-849
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 850-852
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 853-855
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 856-858
 0,  0,  0, // 859-861
 0, // 862
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 863-864
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 865-866
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 867-869
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 870-873
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 874-876
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 877-880
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 881-883
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 884-886
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 887-889
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 890-892
HexagonItinerariesV55Bypass::Hex_FWD, // 893
HexagonItinerariesV55Bypass::Hex_FWD, // 894
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 895-896
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 897-898
 0,  0, // 899-900
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 901-903
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 904-906
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 907-910
HexagonItinerariesV55Bypass::Hex_FWD, // 911
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 912-916
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 917-921
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 922-925
HexagonItinerariesV55Bypass::Hex_FWD, // 926
 0,  0,  0, // 927-929
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 930-932
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 933-936
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 937-940
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 941-943
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 944-946
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 947-951
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 952-955
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 956-958
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 959-962
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 963-966
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 967-969
 0,  0,  0, // 970-972
HexagonItinerariesV55Bypass::Hex_FWD, // 973
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 974-975
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 976-978
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 979-981
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 982-984
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 985-986
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 987-989
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 990-992
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 993-994
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 995-996
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 997-999
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1000-1002
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1003-1007
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1008-1010
HexagonItinerariesV55Bypass::Hex_FWD, // 1011
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1012-1014
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1015-1018
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1019-1023
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1024-1026
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1027-1030
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1031-1032
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1033-1035
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1036-1037
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1038-1041
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1042-1043
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1044-1047
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1048-1049
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1050-1052
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1053-1054
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1055-1057
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1058-1061
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1062-1066
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1067-1069
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1070-1072
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1073-1076
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1077-1078
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1079-1080
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1081-1082
HexagonItinerariesV55Bypass::Hex_FWD, // 1083
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1084-1085
HexagonItinerariesV55Bypass::Hex_FWD, // 1086
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1087-1088
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1089-1090
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1091-1092
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1093-1094
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1095-1096
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1097-1098
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1099-1100
HexagonItinerariesV55Bypass::Hex_FWD, // 1101
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1102-1103
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1104-1105
HexagonItinerariesV55Bypass::Hex_FWD, // 1106
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1107-1109
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1110-1112
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1113-1115
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1116-1118
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1119-1121
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1122-1124
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1125-1126
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1127-1128
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1129-1133
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1134-1139
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1140-1141
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1142-1143
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1144-1148
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1149-1152
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1153-1157
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1158-1160
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1161-1164
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1165-1168
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1169-1171
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1172-1176
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1177-1181
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1182-1184
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1185-1188
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1189-1192
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1193-1196
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1197-1200
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1201-1204
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1205-1207
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1208-1209
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1210-1211
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1212-1213
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1214-1216
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1217-1221
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1222-1226
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1227-1231
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1232-1236
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1237-1241
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1242-1244
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1245-1247
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1248-1252
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1253-1255
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1256-1260
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1261-1263
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1264-1268
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1269-1271
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1272-1276
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1277-1280
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1281-1284
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1285-1288
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1289-1292
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1293-1296
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1297-1301
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1302-1303
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1304-1307
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1308-1309
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1310-1312
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1313-1314
HexagonItinerariesV55Bypass::Hex_FWD, // 1315
HexagonItinerariesV55Bypass::Hex_FWD, // 1316
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1317-1318
HexagonItinerariesV55Bypass::Hex_FWD, // 1319
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1320-1321
HexagonItinerariesV55Bypass::Hex_FWD, // 1322
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1323-1324
HexagonItinerariesV55Bypass::Hex_FWD, // 1325
HexagonItinerariesV55Bypass::Hex_FWD, // 1326
HexagonItinerariesV55Bypass::Hex_FWD, HexagonItinerariesV55Bypass::Hex_FWD, // 1327-1328
HexagonItinerariesV55Bypass::Hex_FWD, // 1329
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1330-1332
 0,  0,  0, // 1333-1335
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1336-1337
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1338-1341
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1342-1345
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1346-1348
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1349-1351
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1352-1354
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1355-1357
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1358-1360
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1361-1363
 0,  0,  0, // 1364-1366
 0, // 1367
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1368-1369
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1370-1371
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1372-1374
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1375-1378
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1379-1381
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1382-1385
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1386-1388
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1389-1391
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1392-1394
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1395-1397
HexagonItinerariesV62Bypass::Hex_FWD, // 1398
HexagonItinerariesV62Bypass::Hex_FWD, // 1399
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1400-1401
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1402-1403
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1404-1405
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1406-1408
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1409-1411
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1412-1415
HexagonItinerariesV62Bypass::Hex_FWD, // 1416
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1417-1421
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1422-1424
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1425-1429
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1430-1433
HexagonItinerariesV62Bypass::Hex_FWD, // 1434
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1435-1437
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1438-1440
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1441-1443
 0,  0,  0, // 1444-1446
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1447-1449
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1450-1452
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1453-1455
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1456-1459
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1460-1462
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1463-1466
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1467-1470
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1471-1473
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1474-1476
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1477-1481
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1482-1485
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1486-1488
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1489-1492
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1493-1496
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1497-1499
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1500-1502
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD,  0, // 1503-1506
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1507-1508
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1509-1512
HexagonItinerariesV62Bypass::HVX_FWD, // 1513
HexagonItinerariesV62Bypass::Hex_FWD, // 1514
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1515-1516
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1517-1519
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1520-1522
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1523-1525
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1526-1527
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1528-1530
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1531-1533
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1534-1535
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1536-1537
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1538-1540
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1541-1543
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1544-1548
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1549-1551
HexagonItinerariesV62Bypass::Hex_FWD, // 1552
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1553-1555
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1556-1559
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1560-1564
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1565-1567
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1568-1571
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1572-1573
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1574-1576
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1577-1578
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1579-1582
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1583-1584
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1585-1588
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1589-1590
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1591-1593
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1594-1595
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1596-1598
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1599-1602
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1603-1607
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1608-1610
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1611-1613
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1614-1617
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1618-1619
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1620-1621
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1622-1623
HexagonItinerariesV62Bypass::Hex_FWD, // 1624
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1625-1626
HexagonItinerariesV62Bypass::Hex_FWD, // 1627
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1628-1629
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1630-1631
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1632-1633
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1634-1635
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1636-1637
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1638-1639
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1640-1641
HexagonItinerariesV62Bypass::Hex_FWD, // 1642
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1643-1644
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1645-1646
HexagonItinerariesV62Bypass::Hex_FWD, // 1647
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1648-1650
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1651-1653
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1654-1656
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1657-1659
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1660-1662
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1663-1665
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1666-1667
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1668-1669
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1670-1674
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1675-1680
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1681-1682
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1683-1684
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1685-1689
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1690-1693
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1694-1698
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1699-1701
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1702-1705
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1706-1709
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1710-1712
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1713-1717
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1718-1722
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1723-1725
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1726-1729
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1730-1733
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1734-1737
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1738-1741
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1742-1745
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1746-1748
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1749-1750
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1751-1752
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1753-1754
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1755-1757
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1758-1762
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1763-1767
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1768-1772
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1773-1777
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1778-1782
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1783-1785
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1786-1788
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1789-1793
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1794-1796
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1797-1801
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1802-1804
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1805-1809
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1810-1812
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1813-1817
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1818-1821
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1822-1825
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1826-1829
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1830-1833
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1834-1837
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1838-1842
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1843-1844
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1845-1848
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1849-1850
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1851-1853
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1854-1855
HexagonItinerariesV62Bypass::Hex_FWD, // 1856
HexagonItinerariesV62Bypass::Hex_FWD, // 1857
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1858-1859
HexagonItinerariesV62Bypass::Hex_FWD, // 1860
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1861-1862
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1863-1865
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1866-1867
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1868-1869
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1870-1873
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1874-1877
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1878-1882
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1883-1886
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1887-1889
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1890-1893
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1894-1898
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1899-1902
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1903-1906
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1907-1911
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1912-1915
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1916-1918
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1919-1922
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1923-1927
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1928-1931
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1932-1935
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1936-1940
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1941-1944
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1945-1949
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1950-1953
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1954-1955
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1956-1958
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1959-1961
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1962-1965
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1966-1970
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1971-1974
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1975-1977
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1978-1980
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 1981-1984
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1985-1988
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1989-1991
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1992-1995
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1996-1998
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 1999-2002
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2003-2006
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2007-2008
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2009-2013
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2014-2015
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2016-2018
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2019-2022
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2023-2025
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2026-2029
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2030-2032
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2033-2036
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2037-2039
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2040-2043
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2044-2046
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2047-2050
HexagonItinerariesV62Bypass::HVX_FWD, // 2051
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2052-2054
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2055-2059
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2060-2063
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2064-2066
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2067-2070
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2071-2074
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2075-2079
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2080-2082
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2083-2086
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2087-2090
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2091-2095
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2096-2098
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2099-2101
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2102-2103
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2104-2107
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2108-2112
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2113-2116
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2117-2121
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2122-2125
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2126-2127
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::HVX_FWD, // 2128-2130
HexagonItinerariesV62Bypass::Hex_FWD, // 2131
HexagonItinerariesV62Bypass::HVX_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2132-2133
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2134-2135
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2136-2138
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2139-2141
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2142-2145
HexagonItinerariesV62Bypass::Hex_FWD, // 2146
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2147-2148
HexagonItinerariesV62Bypass::Hex_FWD, // 2149
HexagonItinerariesV62Bypass::Hex_FWD, // 2150
HexagonItinerariesV62Bypass::Hex_FWD, HexagonItinerariesV62Bypass::Hex_FWD, // 2151-2152
HexagonItinerariesV62Bypass::Hex_FWD, // 2153
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2154-2156
 0,  0,  0, // 2157-2159
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2160-2161
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2162-2165
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2166-2169
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2170-2172
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2173-2175
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2176-2178
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2179-2181
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2182-2184
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2185-2187
 0,  0,  0, // 2188-2190
 0, // 2191
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2192-2193
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2194-2195
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2196-2198
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2199-2202
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2203-2205
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2206-2209
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2210-2212
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2213-2215
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2216-2218
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2219-2221
HexagonItinerariesV65Bypass::Hex_FWD, // 2222
HexagonItinerariesV65Bypass::Hex_FWD, // 2223
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2224-2225
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2226-2227
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2228-2229
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2230-2232
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2233-2235
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2236-2239
HexagonItinerariesV65Bypass::Hex_FWD, // 2240
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2241-2245
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2246-2248
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2249-2253
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2254-2257
HexagonItinerariesV65Bypass::Hex_FWD, // 2258
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2259-2261
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2262-2264
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2265-2267
 0,  0,  0, // 2268-2270
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2271-2273
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2274-2276
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2277-2279
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2280-2283
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2284-2286
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2287-2290
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2291-2294
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2295-2297
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2298-2300
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2301-2305
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2306-2309
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2310-2312
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2313-2316
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2317-2320
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2321-2323
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2324-2326
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD,  0, // 2327-2330
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2331-2332
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2333-2336
HexagonItinerariesV65Bypass::HVX_FWD, // 2337
HexagonItinerariesV65Bypass::Hex_FWD, // 2338
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2339-2340
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2341-2343
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2344-2346
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2347-2349
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2350-2351
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2352-2354
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2355-2357
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2358-2359
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2360-2361
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2362-2364
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2365-2367
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2368-2372
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2373-2375
HexagonItinerariesV65Bypass::Hex_FWD, // 2376
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2377-2379
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2380-2383
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2384-2388
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2389-2391
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2392-2395
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2396-2397
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2398-2400
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2401-2402
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2403-2406
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2407-2408
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2409-2412
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2413-2414
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2415-2417
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2418-2419
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2420-2422
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2423-2426
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2427-2431
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2432-2434
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2435-2437
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2438-2441
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2442-2443
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2444-2445
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2446-2447
HexagonItinerariesV65Bypass::Hex_FWD, // 2448
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2449-2450
HexagonItinerariesV65Bypass::Hex_FWD, // 2451
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2452-2453
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2454-2455
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2456-2457
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2458-2459
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2460-2461
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2462-2463
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2464-2465
HexagonItinerariesV65Bypass::Hex_FWD, // 2466
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2467-2468
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2469-2470
HexagonItinerariesV65Bypass::Hex_FWD, // 2471
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2472-2474
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2475-2477
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2478-2480
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2481-2483
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2484-2486
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2487-2489
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2490-2491
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2492-2493
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2494-2498
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2499-2504
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2505-2506
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2507-2508
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2509-2513
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2514-2517
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2518-2522
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2523-2525
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2526-2529
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2530-2533
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2534-2536
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2537-2541
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2542-2546
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2547-2549
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2550-2553
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2554-2557
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2558-2561
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2562-2565
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2566-2569
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2570-2572
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2573-2574
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2575-2576
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2577-2578
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2579-2581
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2582-2586
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2587-2591
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2592-2596
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2597-2601
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2602-2606
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2607-2609
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2610-2612
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2613-2617
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2618-2620
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2621-2625
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2626-2628
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2629-2633
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2634-2636
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2637-2641
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2642-2645
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2646-2649
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2650-2653
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2654-2657
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2658-2661
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2662-2666
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2667-2668
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2669-2672
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2673-2674
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2675-2677
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2678-2679
HexagonItinerariesV65Bypass::Hex_FWD, // 2680
HexagonItinerariesV65Bypass::Hex_FWD, // 2681
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2682-2683
HexagonItinerariesV65Bypass::Hex_FWD, // 2684
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2685-2686
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2687-2689
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2690-2691
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2692-2693
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2694-2697
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2698-2701
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2702-2706
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2707-2710
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2711-2713
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2714-2717
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2718-2722
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2723-2726
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2727-2730
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2731-2735
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2736-2739
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2740-2742
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2743-2746
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2747-2751
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2752-2755
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2756-2759
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2760-2764
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2765-2768
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2769-2773
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2774-2777
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2778-2779
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2780-2782
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2783-2785
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2786-2789
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2790-2794
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2795-2798
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2799-2801
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2802-2804
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2805-2808
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2809-2812
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2813-2815
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2816-2819
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2820-2822
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2823-2826
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2827-2830
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2831-2832
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2833-2837
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2838-2839
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2840-2842
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2843-2846
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2847-2849
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2850-2853
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2854-2856
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2857-2860
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2861-2863
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2864-2867
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2868-2870
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2871-2874
HexagonItinerariesV65Bypass::HVX_FWD, // 2875
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2876-2878
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2879-2883
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2884-2887
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2888-2890
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2891-2894
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2895-2898
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2899-2903
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2904-2906
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2907-2910
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2911-2914
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2915-2919
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2920-2922
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2923-2925
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2926-2927
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2928-2931
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2932-2936
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2937-2940
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2941-2945
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2946-2949
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2950-2951
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::HVX_FWD, // 2952-2954
HexagonItinerariesV65Bypass::Hex_FWD, // 2955
HexagonItinerariesV65Bypass::HVX_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2956-2957
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2958-2959
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2960-2962
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2963-2965
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2966-2969
HexagonItinerariesV65Bypass::Hex_FWD, // 2970
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2971-2972
HexagonItinerariesV65Bypass::Hex_FWD, // 2973
HexagonItinerariesV65Bypass::Hex_FWD, // 2974
HexagonItinerariesV65Bypass::Hex_FWD, HexagonItinerariesV65Bypass::Hex_FWD, // 2975-2976
HexagonItinerariesV65Bypass::Hex_FWD, // 2977
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2978-2980
 0,  0,  0, // 2981-2983
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2984-2985
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2986-2989
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2990-2993
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2994-2996
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 2997-2999
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3000-3002
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3003-3005
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3006-3008
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3009-3011
 0,  0,  0, // 3012-3014
 0, // 3015
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3016-3017
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3018-3019
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3020-3022
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3023-3026
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3027-3029
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3030-3033
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3034-3036
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3037-3039
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3040-3042
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3043-3045
HexagonItinerariesV66Bypass::Hex_FWD, // 3046
HexagonItinerariesV66Bypass::Hex_FWD, // 3047
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3048-3049
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3050-3051
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3052-3053
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3054-3056
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3057-3059
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3060-3063
HexagonItinerariesV66Bypass::Hex_FWD, // 3064
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3065-3069
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3070-3072
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3073-3077
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3078-3081
HexagonItinerariesV66Bypass::Hex_FWD, // 3082
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3083-3085
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3086-3088
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3089-3091
 0,  0,  0, // 3092-3094
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3095-3097
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3098-3100
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3101-3103
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3104-3107
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3108-3110
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3111-3114
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3115-3118
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3119-3121
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3122-3124
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3125-3129
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3130-3133
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3134-3136
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3137-3140
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3141-3144
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3145-3147
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3148-3150
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD,  0, // 3151-3154
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3155-3156
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3157-3160
HexagonItinerariesV66Bypass::HVX_FWD, // 3161
HexagonItinerariesV66Bypass::Hex_FWD, // 3162
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3163-3164
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3165-3167
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3168-3170
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3171-3173
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3174-3175
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3176-3178
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3179-3181
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3182-3183
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3184-3185
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3186-3188
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3189-3191
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3192-3196
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3197-3199
HexagonItinerariesV66Bypass::Hex_FWD, // 3200
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3201-3203
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3204-3207
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3208-3212
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3213-3215
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3216-3219
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3220-3221
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3222-3224
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3225-3226
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3227-3230
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3231-3232
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3233-3236
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3237-3238
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3239-3241
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3242-3243
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3244-3246
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3247-3250
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3251-3255
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3256-3258
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3259-3261
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3262-3265
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3266-3267
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3268-3269
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3270-3271
HexagonItinerariesV66Bypass::Hex_FWD, // 3272
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3273-3274
HexagonItinerariesV66Bypass::Hex_FWD, // 3275
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3276-3277
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3278-3279
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3280-3281
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3282-3283
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3284-3285
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3286-3287
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3288-3289
HexagonItinerariesV66Bypass::Hex_FWD, // 3290
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3291-3292
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3293-3294
HexagonItinerariesV66Bypass::Hex_FWD, // 3295
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3296-3298
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3299-3301
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3302-3304
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3305-3307
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3308-3310
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3311-3313
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3314-3315
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3316-3317
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3318-3322
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3323-3328
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3329-3330
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3331-3332
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3333-3337
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3338-3341
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3342-3346
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3347-3349
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3350-3353
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3354-3357
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3358-3360
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3361-3365
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3366-3370
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3371-3373
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3374-3377
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3378-3381
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3382-3385
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3386-3389
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3390-3393
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3394-3396
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3397-3398
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3399-3400
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3401-3402
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3403-3405
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3406-3410
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3411-3415
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3416-3420
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3421-3425
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3426-3430
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3431-3433
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3434-3436
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3437-3441
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3442-3444
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3445-3449
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3450-3452
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3453-3457
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3458-3460
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3461-3465
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3466-3469
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3470-3473
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3474-3477
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3478-3481
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3482-3485
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3486-3490
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3491-3492
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3493-3496
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3497-3498
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3499-3501
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3502-3503
HexagonItinerariesV66Bypass::Hex_FWD, // 3504
HexagonItinerariesV66Bypass::Hex_FWD, // 3505
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3506-3507
HexagonItinerariesV66Bypass::Hex_FWD, // 3508
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3509-3510
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3511-3513
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3514-3515
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3516-3517
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3518-3521
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3522-3525
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3526-3530
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3531-3534
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3535-3537
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3538-3541
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3542-3546
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3547-3550
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3551-3554
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3555-3559
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3560-3563
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3564-3566
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3567-3570
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3571-3575
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3576-3579
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3580-3583
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3584-3588
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3589-3592
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3593-3597
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3598-3601
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3602-3603
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3604-3606
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3607-3609
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3610-3613
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3614-3618
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3619-3622
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3623-3625
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3626-3628
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3629-3632
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3633-3636
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3637-3639
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3640-3643
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3644-3646
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3647-3650
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3651-3654
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3655-3656
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3657-3661
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3662-3663
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3664-3666
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3667-3670
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3671-3673
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3674-3677
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3678-3680
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3681-3684
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3685-3687
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3688-3691
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3692-3694
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3695-3698
HexagonItinerariesV66Bypass::HVX_FWD, // 3699
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3700-3702
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3703-3707
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3708-3711
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3712-3714
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3715-3718
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3719-3722
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3723-3727
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3728-3730
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3731-3734
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3735-3738
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3739-3743
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3744-3746
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3747-3749
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3750-3751
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3752-3755
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3756-3760
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3761-3764
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3765-3769
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3770-3773
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3774-3775
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::HVX_FWD, // 3776-3778
HexagonItinerariesV66Bypass::Hex_FWD, // 3779
HexagonItinerariesV66Bypass::HVX_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3780-3781
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3782-3783
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3784-3786
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3787-3789
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3790-3793
HexagonItinerariesV66Bypass::Hex_FWD, // 3794
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3795-3796
HexagonItinerariesV66Bypass::Hex_FWD, // 3797
HexagonItinerariesV66Bypass::Hex_FWD, // 3798
HexagonItinerariesV66Bypass::Hex_FWD, HexagonItinerariesV66Bypass::Hex_FWD, // 3799-3800
HexagonItinerariesV66Bypass::Hex_FWD, // 3801
 0 // End bypass tables
};

static const llvm::InstrItinerary HexagonItinerariesV60[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 1, 4 }, // 1 tc_679309b8
  { 1, 2, 3, 4, 7 }, // 2 PSEUDO
  { 1, 2, 3, 7, 9 }, // 3 tc_57890846
  { 1, 2, 3, 9, 13 }, // 4 tc_4c5ba658
  { 1, 2, 3, 13, 17 }, // 5 tc_05c070ec
  { 1, 2, 3, 17, 20 }, // 6 tc_5a2711e5
  { 1, 2, 3, 20, 23 }, // 7 tc_1ae57e39
  { 1, 1, 2, 23, 26 }, // 8 tc_946df596
  { 1, 1, 2, 26, 29 }, // 9 tc_85d5d03f
  { 1, 2, 3, 29, 32 }, // 10 tc_56f114f4
  { 1, 1, 2, 32, 35 }, // 11 tc_640086b5
  { 1, 3, 4, 35, 38 }, // 12 DUPLEX
  { 1, 4, 5, 38, 39 }, // 13 tc_ENDLOOP
  { 1, 2, 3, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 1, 2, 39, 41 }, // 15 tc_db2bce9c
  { 1, 5, 6, 41, 43 }, // 16 tc_85c9c08f
  { 1, 5, 6, 43, 46 }, // 17 tc_b9e09e03
  { 1, 6, 7, 46, 50 }, // 18 tc_5ef37dc4
  { 1, 6, 7, 50, 53 }, // 19 tc_17e0d2cd
  { 1, 6, 7, 53, 57 }, // 20 tc_44d3da28
  { 1, 3, 4, 57, 60 }, // 21 tc_7186d325
  { 1, 3, 4, 60, 63 }, // 22 tc_096199d3
  { 1, 3, 4, 63, 66 }, // 23 tc_2b8da4c2
  { 1, 3, 4, 66, 69 }, // 24 tc_9da59d12
  { 1, 3, 4, 69, 70 }, // 25 tc_4d5fa3a1
  { 1, 3, 4, 70, 71 }, // 26 tc_e06f432a
  { 1, 6, 7, 71, 73 }, // 27 tc_15aa71c5
  { 1, 3, 4, 73, 75 }, // 28 tc_675e4897
  { 1, 6, 7, 75, 77 }, // 29 LD_tc_ld_SLOT01
  { 1, 1, 2, 77, 80 }, // 30 tc_c8ce0b5c
  { 1, 1, 2, 80, 83 }, // 31 tc_bafaade3
  { 1, 1, 2, 83, 87 }, // 32 tc_d773585a
  { 1, 1, 2, 87, 88 }, // 33 tc_4ae7b58b
  { 1, 6, 7, 88, 93 }, // 34 tc_e93a3d71
  { 1, 7, 9, 93, 96 }, // 35 tc_56c4f9fe
  { 1, 6, 7, 96, 101 }, // 36 tc_e86aa961
  { 1, 6, 7, 101, 105 }, // 37 tc_da97ee82
  { 1, 5, 6, 105, 106 }, // 38 tc_d5b7b0c1
  { 1, 9, 11, 106, 109 }, // 39 tc_db5555f3
  { 1, 11, 14, 109, 112 }, // 40 tc_c0749f3c
  { 1, 14, 18, 112, 115 }, // 41 tc_a7e6707d
  { 1, 18, 20, 115, 118 }, // 42 PSEUDOM
  { 1, 7, 9, 118, 121 }, // 43 tc_3aacf4a8
  { 1, 20, 23, 121, 124 }, // 44 tc_c5dba46e
  { 1, 23, 27, 124, 127 }, // 45 tc_f21e8abb
  { 1, 9, 11, 127, 131 }, // 46 tc_af25efd9
  { 1, 1, 2, 131, 134 }, // 47 tc_002cb246
  { 1, 6, 7, 134, 138 }, // 48 tc_f8e23f0b
  { 1, 3, 4, 138, 142 }, // 49 tc_8fb7ab1b
  { 1, 6, 7, 142, 145 }, // 50 tc_30b9bb4a
  { 1, 3, 4, 145, 148 }, // 51 tc_be9602ff
  { 1, 1, 2, 148, 153 }, // 52 tc_bfec0f01
  { 1, 3, 4, 153, 157 }, // 53 tc_c79a189f
  { 1, 6, 7, 157, 160 }, // 54 tc_b83e6d73
  { 1, 6, 7, 160, 164 }, // 55 tc_0b2be201
  { 1, 6, 7, 164, 168 }, // 56 tc_c4f596e3
  { 1, 3, 4, 168, 171 }, // 57 tc_b44ecf75
  { 1, 6, 7, 171, 174 }, // 58 ST_tc_st_SLOT01
  { 1, 27, 29, 174, 178 }, // 59 CVI_VA
  { 1, 7, 9, 178, 180 }, // 60 tc_0ec46cf9
  { 1, 29, 31, 180, 184 }, // 61 tc_16ff9ef8
  { 1, 9, 11, 184, 185 }, // 62 tc_718b5c53
  { 1, 31, 35, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 3, 4, 185, 186 }, // 64 tc_d63f638c
  { 1, 1, 2, 186, 188 }, // 65 tc_cf8126ae
  { 1, 1, 2, 188, 191 }, // 66 tc_779080bf
  { 1, 1, 2, 191, 194 }, // 67 tc_4414d8b1
  { 1, 2, 3, 194, 197 }, // 68 tc_61830035
  { 1, 1, 2, 197, 199 }, // 69 tc_0ae0825c
  { 1, 2, 3, 0, 0 }, // 70 tc_2eabeebe
  { 1, 2, 3, 199, 202 }, // 71 tc_1c80410a
  { 1, 2, 3, 202, 205 }, // 72 tc_d08ee0f4
  { 1, 35, 36, 205, 207 }, // 73 tc_b9272d6c
  { 1, 35, 36, 207, 209 }, // 74 tc_434c8e1e
  { 1, 1, 2, 209, 212 }, // 75 tc_6132ba3d
  { 1, 1, 2, 212, 215 }, // 76 tc_e4a7f9f0
  { 1, 1, 2, 215, 220 }, // 77 tc_9c3ecd83
  { 1, 1, 2, 220, 223 }, // 78 tc_643b4717
  { 1, 2, 3, 223, 224 }, // 79 tc_862b3e70
  { 1, 1, 2, 224, 227 }, // 80 tc_4837eefb
  { 1, 1, 2, 227, 231 }, // 81 tc_5b54b33f
  { 1, 1, 2, 231, 236 }, // 82 tc_d1aa9eaa
  { 1, 1, 2, 236, 239 }, // 83 tc_1fc97744
  { 1, 1, 2, 239, 243 }, // 84 tc_f9058dd7
  { 1, 1, 2, 243, 245 }, // 85 tc_de554571
  { 1, 2, 3, 245, 248 }, // 86 tc_de4df740
  { 1, 1, 2, 248, 250 }, // 87 tc_cfd8378a
  { 1, 1, 2, 250, 254 }, // 88 tc_b4b5c03a
  { 1, 35, 36, 254, 256 }, // 89 tc_a813cf9a
  { 1, 1, 2, 256, 260 }, // 90 tc_b31c2e97
  { 1, 1, 2, 260, 262 }, // 91 tc_3a867367
  { 1, 1, 2, 262, 265 }, // 92 tc_2f7c551d
  { 1, 1, 2, 265, 267 }, // 93 tc_9e313203
  { 1, 1, 2, 267, 270 }, // 94 tc_3b470976
  { 1, 1, 2, 270, 274 }, // 95 tc_a58fd5cc
  { 1, 1, 2, 274, 279 }, // 96 tc_4560740b
  { 1, 1, 2, 279, 282 }, // 97 tc_b8bffe55
  { 1, 1, 2, 282, 285 }, // 98 tc_88b4f13d
  { 1, 1, 2, 285, 289 }, // 99 tc_2ff964b4
  { 1, 35, 36, 289, 291 }, // 100 tc_0d8f5752
  { 1, 35, 36, 291, 293 }, // 101 tc_bcf98408
  { 1, 1, 2, 293, 295 }, // 102 tc_1d81e60e
  { 1, 5, 6, 295, 296 }, // 103 tc_3bd75825
  { 1, 5, 6, 296, 298 }, // 104 tc_1ad90acd
  { 1, 1, 2, 298, 299 }, // 105 tc_ae53734a
  { 1, 1, 2, 299, 301 }, // 106 tc_20cdee80
  { 1, 1, 2, 301, 303 }, // 107 tc_cd374165
  { 1, 5, 6, 303, 305 }, // 108 tc_b51dc29a
  { 1, 5, 6, 305, 307 }, // 109 tc_e78647bd
  { 1, 35, 36, 307, 309 }, // 110 tc_d9d43ecb
  { 1, 35, 36, 309, 311 }, // 111 tc_a9d88b22
  { 1, 35, 36, 311, 313 }, // 112 tc_df3319ed
  { 1, 5, 6, 313, 314 }, // 113 tc_8d9d0154
  { 1, 35, 36, 314, 316 }, // 114 tc_1c4528a2
  { 1, 35, 36, 316, 318 }, // 115 tc_32779c6f
  { 1, 5, 6, 318, 319 }, // 116 tc_fc3999b4
  { 1, 3, 4, 319, 322 }, // 117 tc_9bfd761f
  { 1, 1, 2, 322, 325 }, // 118 tc_56336eb0
  { 1, 3, 4, 325, 328 }, // 119 tc_bd8382d1
  { 1, 1, 2, 328, 331 }, // 120 tc_3d495a39
  { 1, 3, 4, 331, 334 }, // 121 tc_b343892a
  { 1, 1, 2, 334, 337 }, // 122 tc_0663f615
  { 1, 3, 4, 337, 339 }, // 123 tc_8c945be0
  { 1, 1, 2, 339, 341 }, // 124 tc_2332b92e
  { 1, 6, 7, 341, 346 }, // 125 tc_3c76b0ff
  { 1, 6, 7, 346, 352 }, // 126 tc_785f65a7
  { 1, 6, 7, 352, 354 }, // 127 tc_c4db48cb
  { 1, 3, 4, 354, 356 }, // 128 tc_b43e7930
  { 1, 6, 7, 356, 361 }, // 129 tc_e9f3243f
  { 1, 6, 7, 361, 365 }, // 130 tc_7a91e76a
  { 1, 6, 7, 365, 370 }, // 131 tc_a5d4aeec
  { 1, 6, 7, 370, 373 }, // 132 tc_3b5b7ef9
  { 1, 6, 7, 373, 377 }, // 133 tc_bab0eed9
  { 1, 6, 7, 377, 381 }, // 134 tc_bf061958
  { 1, 6, 7, 381, 384 }, // 135 tc_7646c131
  { 1, 6, 7, 384, 389 }, // 136 tc_e4b3cb20
  { 1, 6, 7, 389, 394 }, // 137 tc_25a78932
  { 1, 6, 7, 394, 397 }, // 138 tc_a6b1eca9
  { 1, 1, 2, 397, 401 }, // 139 tc_f675fee8
  { 1, 1, 2, 401, 405 }, // 140 tc_05d3a09b
  { 1, 1, 2, 405, 409 }, // 141 tc_bdceeac1
  { 1, 1, 2, 409, 413 }, // 142 tc_f429765c
  { 1, 1, 2, 413, 417 }, // 143 tc_1a2fd869
  { 1, 1, 2, 417, 420 }, // 144 tc_9461ff31
  { 1, 6, 7, 420, 422 }, // 145 tc_0371abea
  { 1, 3, 4, 422, 424 }, // 146 tc_5bf126a6
  { 1, 1, 2, 424, 426 }, // 147 tc_14b5c689
  { 1, 1, 2, 426, 429 }, // 148 tc_76851da1
  { 1, 6, 7, 429, 434 }, // 149 tc_24b66c99
  { 1, 6, 7, 434, 439 }, // 150 tc_53559e35
  { 1, 3, 4, 439, 444 }, // 151 tc_838b34ea
  { 1, 3, 4, 444, 449 }, // 152 tc_d65dbf51
  { 1, 3, 4, 449, 454 }, // 153 tc_d5c0729a
  { 1, 3, 4, 454, 457 }, // 154 tc_5abb5e3f
  { 1, 6, 7, 457, 460 }, // 155 tc_362c6592
  { 1, 6, 7, 460, 465 }, // 156 tc_3962fa26
  { 1, 6, 7, 465, 468 }, // 157 tc_da4a37ed
  { 1, 6, 7, 468, 473 }, // 158 tc_40116ca8
  { 1, 3, 4, 473, 476 }, // 159 tc_4b68bce4
  { 1, 3, 4, 476, 481 }, // 160 tc_e95795ec
  { 1, 3, 4, 481, 484 }, // 161 tc_d2e63d61
  { 1, 3, 4, 484, 489 }, // 162 tc_b90a29b1
  { 1, 6, 7, 489, 493 }, // 163 tc_5aee39f7
  { 1, 6, 7, 493, 497 }, // 164 tc_14b272fa
  { 1, 3, 4, 497, 501 }, // 165 tc_67435e81
  { 1, 3, 4, 501, 505 }, // 166 tc_fcc3ddf9
  { 1, 1, 2, 505, 509 }, // 167 tc_13bfbcf9
  { 1, 1, 2, 509, 514 }, // 168 tc_9debc299
  { 1, 1, 2, 514, 516 }, // 169 tc_703e822c
  { 1, 1, 2, 516, 520 }, // 170 tc_784490da
  { 1, 1, 2, 520, 522 }, // 171 tc_a1c00888
  { 1, 6, 7, 522, 525 }, // 172 tc_0a705168
  { 1, 6, 7, 525, 527 }, // 173 tc_9fc3dae0
  { 1, 6, 7, 527, 528 }, // 174 tc_a1123dda
  { 1, 6, 7, 528, 529 }, // 175 tc_8b3e402a
  { 1, 6, 7, 529, 531 }, // 176 tc_5b7c0967
  { 1, 6, 7, 0, 0 }, // 177 tc_39dfefe8
  { 1, 3, 4, 0, 0 }, // 178 tc_b4407292
  { 1, 3, 4, 0, 0 }, // 179 tc_36153880
  { 1, 3, 4, 531, 532 }, // 180 tc_49a8207d
  { 1, 6, 7, 532, 534 }, // 181 tc_89e94ad3
  { 1, 36, 38, 534, 537 }, // 182 tc_540c3da3
  { 1, 38, 40, 537, 539 }, // 183 tc_c4edf264
  { 1, 40, 42, 539, 541 }, // 184 tc_5bf8afbb
  { 1, 14, 18, 541, 545 }, // 185 tc_3c56e5ce
  { 1, 11, 14, 545, 549 }, // 186 tc_abe8c3b2
  { 1, 11, 14, 549, 554 }, // 187 tc_453fe68d
  { 1, 11, 14, 554, 558 }, // 188 tc_1ba8a0cd
  { 1, 42, 44, 558, 561 }, // 189 tc_52447ecc
  { 1, 42, 44, 561, 565 }, // 190 tc_3904b926
  { 1, 42, 44, 565, 570 }, // 191 tc_b9db8205
  { 1, 42, 44, 570, 574 }, // 192 tc_663c80a7
  { 1, 23, 27, 574, 578 }, // 193 tc_131f1c81
  { 1, 23, 27, 578, 583 }, // 194 tc_c7039829
  { 1, 23, 27, 583, 587 }, // 195 tc_e2d2e9e5
  { 1, 44, 46, 587, 590 }, // 196 tc_ab23f776
  { 1, 44, 46, 590, 594 }, // 197 tc_7177e272
  { 1, 44, 46, 594, 599 }, // 198 tc_e99d4c2e
  { 1, 44, 46, 599, 603 }, // 199 tc_6942b6e0
  { 1, 20, 23, 603, 607 }, // 200 tc_a02a10a8
  { 1, 20, 23, 607, 612 }, // 201 tc_54a0dc47
  { 1, 20, 23, 612, 616 }, // 202 tc_447d9895
  { 1, 20, 23, 616, 621 }, // 203 tc_191381c1
  { 1, 20, 23, 621, 625 }, // 204 tc_3e2aaafc
  { 1, 44, 46, 625, 627 }, // 205 tc_3ce09744
  { 1, 44, 46, 627, 630 }, // 206 tc_20a4bbec
  { 1, 38, 40, 630, 633 }, // 207 tc_c127de3a
  { 1, 7, 9, 633, 637 }, // 208 tc_257f6f7c
  { 1, 7, 9, 637, 642 }, // 209 tc_7e6a3e89
  { 1, 7, 9, 642, 646 }, // 210 tc_e35c1e93
  { 1, 29, 31, 646, 649 }, // 211 tc_05ca8cfd
  { 1, 46, 48, 649, 652 }, // 212 tc_d8287c14
  { 1, 46, 48, 652, 656 }, // 213 tc_08a4f1b6
  { 1, 40, 42, 656, 660 }, // 214 tc_56e64202
  { 1, 38, 40, 660, 663 }, // 215 tc_ac4046bc
  { 1, 38, 40, 663, 667 }, // 216 tc_2e8f5f6e
  { 1, 29, 31, 667, 670 }, // 217 tc_7417e785
  { 1, 29, 31, 670, 674 }, // 218 tc_309dbb4f
  { 1, 48, 50, 674, 678 }, // 219 tc_df80eeb0
  { 1, 29, 31, 678, 680 }, // 220 tc_51d0ecc3
  { 1, 48, 50, 680, 685 }, // 221 tc_561aaa58
  { 1, 40, 42, 685, 687 }, // 222 tc_946013d8
  { 1, 40, 42, 687, 690 }, // 223 tc_46d6c3e0
  { 1, 48, 50, 690, 694 }, // 224 tc_87adc037
  { 1, 38, 40, 694, 697 }, // 225 tc_649072c2
  { 1, 38, 40, 697, 701 }, // 226 tc_b091f1c6
  { 1, 46, 48, 701, 704 }, // 227 tc_0b04c6c7
  { 1, 46, 48, 704, 708 }, // 228 tc_660769f1
  { 1, 50, 53, 708, 711 }, // 229 tc_e8797b98
  { 1, 50, 53, 711, 715 }, // 230 tc_05ac6f98
  { 1, 53, 56, 715, 718 }, // 231 tc_05058f6f
  { 1, 53, 56, 718, 722 }, // 232 tc_fd7610da
  { 1, 56, 58, 0, 0 }, // 233 tc_1381a97c
  { 1, 56, 58, 722, 723 }, // 234 tc_e3f68a46
  { 1, 58, 60, 723, 726 }, // 235 tc_f1de44ef
  { 1, 48, 50, 726, 731 }, // 236 tc_9d1dc972
  { 1, 58, 60, 731, 735 }, // 237 tc_90bcc1db
  { 1, 60, 63, 735, 738 }, // 238 tc_cd94bfe0
  { 1, 60, 63, 738, 742 }, // 239 tc_15fdf750
  { 1, 46, 48, 742, 746 }, // 240 tc_1ad8a370
  { 1, 46, 48, 746, 751 }, // 241 tc_e675c45a
  { 1, 63, 65, 751, 754 }, // 242 tc_61bf7c03
  { 1, 63, 65, 754, 758 }, // 243 tc_933f2b39
  { 1, 63, 65, 758, 762 }, // 244 tc_26a377fe
  { 1, 63, 65, 762, 767 }, // 245 tc_2d4051cd
  { 1, 40, 42, 767, 770 }, // 246 tc_6e7fa133
  { 1, 29, 31, 770, 773 }, // 247 tc_8772086c
  { 1, 9, 11, 773, 775 }, // 248 tc_b4416217
  { 1, 20, 23, 775, 779 }, // 249 tc_9f363d21
  { 1, 20, 23, 779, 784 }, // 250 tc_8e420e4d
  { 1, 65, 68, 784, 788 }, // 251 tc_7273323b
  { 1, 65, 68, 788, 793 }, // 252 tc_58d21193
  { 1, 9, 11, 793, 797 }, // 253 tc_71646d06
  { 1, 48, 50, 797, 799 }, // 254 tc_04da405a
  { 1, 48, 50, 799, 802 }, // 255 tc_2c745bb8
  { 1, 56, 58, 802, 803 }, // 256 tc_b28e51aa
  { 1, 56, 58, 803, 805 }, // 257 tc_767c4e9d
  { 1, 68, 70, 805, 807 }, // 258 tc_e699ae41
  { 1, 68, 70, 807, 810 }, // 259 tc_a0dbea28
  { 1, 68, 70, 810, 813 }, // 260 tc_dd5b0695
  { 1, 68, 70, 813, 817 }, // 261 tc_3ad719fb
  { 1, 3, 4, 0, 0 }, // 262 tc_8c99de45
  { 1, 35, 36, 0, 0 }, // 263 tc_9ad9998f
  { 1, 3, 4, 817, 818 }, // 264 tc_b857bf4e
  { 1, 3, 4, 818, 820 }, // 265 tc_9ca930f7
  { 1, 5, 6, 820, 821 }, // 266 tc_5d7f5414
  { 1, 5, 6, 0, 0 }, // 267 tc_8b121f4a
  { 1, 35, 36, 821, 822 }, // 268 tc_174516e8
  { 1, 3, 4, 822, 824 }, // 269 tc_fe211424
  { 1, 35, 36, 824, 825 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV5[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 70, 71, 0, 0 }, // 1 tc_679309b8
  { 1, 71, 72, 0, 0 }, // 2 PSEUDO
  { 1, 71, 72, 0, 0 }, // 3 tc_57890846
  { 1, 71, 72, 0, 0 }, // 4 tc_4c5ba658
  { 1, 71, 72, 0, 0 }, // 5 tc_05c070ec
  { 1, 71, 72, 0, 0 }, // 6 tc_5a2711e5
  { 1, 71, 72, 0, 0 }, // 7 tc_1ae57e39
  { 1, 70, 71, 0, 0 }, // 8 tc_946df596
  { 1, 70, 71, 0, 0 }, // 9 tc_85d5d03f
  { 1, 71, 72, 0, 0 }, // 10 tc_56f114f4
  { 1, 70, 71, 0, 0 }, // 11 tc_640086b5
  { 1, 72, 73, 0, 0 }, // 12 DUPLEX
  { 1, 73, 74, 0, 0 }, // 13 tc_ENDLOOP
  { 1, 71, 72, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 70, 71, 0, 0 }, // 15 tc_db2bce9c
  { 1, 74, 75, 0, 0 }, // 16 tc_85c9c08f
  { 1, 74, 75, 0, 0 }, // 17 tc_b9e09e03
  { 1, 75, 76, 0, 0 }, // 18 tc_5ef37dc4
  { 1, 75, 76, 0, 0 }, // 19 tc_17e0d2cd
  { 1, 75, 76, 0, 0 }, // 20 tc_44d3da28
  { 1, 72, 73, 0, 0 }, // 21 tc_7186d325
  { 1, 72, 73, 0, 0 }, // 22 tc_096199d3
  { 1, 72, 73, 0, 0 }, // 23 tc_2b8da4c2
  { 1, 72, 73, 0, 0 }, // 24 tc_9da59d12
  { 1, 72, 73, 0, 0 }, // 25 tc_4d5fa3a1
  { 1, 72, 73, 0, 0 }, // 26 tc_e06f432a
  { 1, 75, 76, 0, 0 }, // 27 tc_15aa71c5
  { 1, 72, 73, 0, 0 }, // 28 tc_675e4897
  { 1, 75, 76, 0, 0 }, // 29 LD_tc_ld_SLOT01
  { 1, 70, 71, 0, 0 }, // 30 tc_c8ce0b5c
  { 1, 70, 71, 0, 0 }, // 31 tc_bafaade3
  { 1, 70, 71, 0, 0 }, // 32 tc_d773585a
  { 1, 70, 71, 0, 0 }, // 33 tc_4ae7b58b
  { 1, 75, 76, 0, 0 }, // 34 tc_e93a3d71
  { 0, 0, 0, 0, 0 }, // 35 tc_56c4f9fe
  { 1, 75, 76, 0, 0 }, // 36 tc_e86aa961
  { 1, 75, 76, 0, 0 }, // 37 tc_da97ee82
  { 1, 74, 75, 0, 0 }, // 38 tc_d5b7b0c1
  { 0, 0, 0, 0, 0 }, // 39 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 40 tc_c0749f3c
  { 0, 0, 0, 0, 0 }, // 41 tc_a7e6707d
  { 1, 76, 78, 0, 0 }, // 42 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 43 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 44 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 45 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 70, 71, 0, 0 }, // 47 tc_002cb246
  { 1, 75, 76, 0, 0 }, // 48 tc_f8e23f0b
  { 1, 72, 73, 0, 0 }, // 49 tc_8fb7ab1b
  { 1, 75, 76, 0, 0 }, // 50 tc_30b9bb4a
  { 1, 72, 73, 0, 0 }, // 51 tc_be9602ff
  { 1, 70, 71, 0, 0 }, // 52 tc_bfec0f01
  { 1, 72, 73, 0, 0 }, // 53 tc_c79a189f
  { 1, 75, 76, 0, 0 }, // 54 tc_b83e6d73
  { 1, 75, 76, 0, 0 }, // 55 tc_0b2be201
  { 1, 75, 76, 0, 0 }, // 56 tc_c4f596e3
  { 1, 72, 73, 0, 0 }, // 57 tc_b44ecf75
  { 1, 75, 76, 0, 0 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 62 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 72, 73, 0, 0 }, // 64 tc_d63f638c
  { 1, 70, 71, 0, 0 }, // 65 tc_cf8126ae
  { 1, 70, 71, 0, 0 }, // 66 tc_779080bf
  { 1, 70, 71, 0, 0 }, // 67 tc_4414d8b1
  { 1, 71, 72, 0, 0 }, // 68 tc_61830035
  { 1, 70, 71, 0, 0 }, // 69 tc_0ae0825c
  { 1, 71, 72, 0, 0 }, // 70 tc_2eabeebe
  { 1, 71, 72, 0, 0 }, // 71 tc_1c80410a
  { 1, 71, 72, 0, 0 }, // 72 tc_d08ee0f4
  { 1, 78, 79, 0, 0 }, // 73 tc_b9272d6c
  { 1, 78, 79, 0, 0 }, // 74 tc_434c8e1e
  { 1, 70, 71, 0, 0 }, // 75 tc_6132ba3d
  { 1, 70, 71, 0, 0 }, // 76 tc_e4a7f9f0
  { 1, 70, 71, 0, 0 }, // 77 tc_9c3ecd83
  { 1, 70, 71, 0, 0 }, // 78 tc_643b4717
  { 1, 71, 72, 0, 0 }, // 79 tc_862b3e70
  { 1, 70, 71, 0, 0 }, // 80 tc_4837eefb
  { 1, 70, 71, 0, 0 }, // 81 tc_5b54b33f
  { 1, 70, 71, 0, 0 }, // 82 tc_d1aa9eaa
  { 1, 70, 71, 0, 0 }, // 83 tc_1fc97744
  { 1, 70, 71, 0, 0 }, // 84 tc_f9058dd7
  { 1, 70, 71, 0, 0 }, // 85 tc_de554571
  { 1, 71, 72, 0, 0 }, // 86 tc_de4df740
  { 1, 70, 71, 0, 0 }, // 87 tc_cfd8378a
  { 1, 70, 71, 0, 0 }, // 88 tc_b4b5c03a
  { 1, 78, 79, 0, 0 }, // 89 tc_a813cf9a
  { 1, 70, 71, 0, 0 }, // 90 tc_b31c2e97
  { 1, 70, 71, 0, 0 }, // 91 tc_3a867367
  { 1, 70, 71, 0, 0 }, // 92 tc_2f7c551d
  { 1, 70, 71, 0, 0 }, // 93 tc_9e313203
  { 1, 70, 71, 0, 0 }, // 94 tc_3b470976
  { 1, 70, 71, 0, 0 }, // 95 tc_a58fd5cc
  { 1, 70, 71, 0, 0 }, // 96 tc_4560740b
  { 1, 70, 71, 0, 0 }, // 97 tc_b8bffe55
  { 1, 70, 71, 0, 0 }, // 98 tc_88b4f13d
  { 1, 70, 71, 0, 0 }, // 99 tc_2ff964b4
  { 1, 78, 79, 0, 0 }, // 100 tc_0d8f5752
  { 1, 78, 79, 0, 0 }, // 101 tc_bcf98408
  { 1, 70, 71, 0, 0 }, // 102 tc_1d81e60e
  { 1, 74, 75, 0, 0 }, // 103 tc_3bd75825
  { 1, 74, 75, 0, 0 }, // 104 tc_1ad90acd
  { 1, 70, 71, 0, 0 }, // 105 tc_ae53734a
  { 1, 70, 71, 0, 0 }, // 106 tc_20cdee80
  { 1, 70, 71, 0, 0 }, // 107 tc_cd374165
  { 1, 74, 75, 0, 0 }, // 108 tc_b51dc29a
  { 1, 74, 75, 0, 0 }, // 109 tc_e78647bd
  { 1, 78, 79, 0, 0 }, // 110 tc_d9d43ecb
  { 1, 78, 79, 0, 0 }, // 111 tc_a9d88b22
  { 1, 78, 79, 0, 0 }, // 112 tc_df3319ed
  { 1, 74, 75, 0, 0 }, // 113 tc_8d9d0154
  { 1, 78, 79, 0, 0 }, // 114 tc_1c4528a2
  { 1, 78, 79, 0, 0 }, // 115 tc_32779c6f
  { 1, 74, 75, 0, 0 }, // 116 tc_fc3999b4
  { 1, 72, 73, 0, 0 }, // 117 tc_9bfd761f
  { 1, 70, 71, 0, 0 }, // 118 tc_56336eb0
  { 1, 72, 73, 0, 0 }, // 119 tc_bd8382d1
  { 1, 70, 71, 0, 0 }, // 120 tc_3d495a39
  { 1, 72, 73, 0, 0 }, // 121 tc_b343892a
  { 1, 70, 71, 0, 0 }, // 122 tc_0663f615
  { 1, 72, 73, 0, 0 }, // 123 tc_8c945be0
  { 1, 70, 71, 0, 0 }, // 124 tc_2332b92e
  { 1, 75, 76, 0, 0 }, // 125 tc_3c76b0ff
  { 1, 75, 76, 0, 0 }, // 126 tc_785f65a7
  { 1, 75, 76, 0, 0 }, // 127 tc_c4db48cb
  { 1, 72, 73, 0, 0 }, // 128 tc_b43e7930
  { 1, 75, 76, 0, 0 }, // 129 tc_e9f3243f
  { 1, 75, 76, 0, 0 }, // 130 tc_7a91e76a
  { 1, 75, 76, 0, 0 }, // 131 tc_a5d4aeec
  { 1, 75, 76, 0, 0 }, // 132 tc_3b5b7ef9
  { 1, 75, 76, 0, 0 }, // 133 tc_bab0eed9
  { 1, 75, 76, 0, 0 }, // 134 tc_bf061958
  { 1, 75, 76, 0, 0 }, // 135 tc_7646c131
  { 1, 75, 76, 0, 0 }, // 136 tc_e4b3cb20
  { 1, 75, 76, 0, 0 }, // 137 tc_25a78932
  { 1, 75, 76, 0, 0 }, // 138 tc_a6b1eca9
  { 1, 70, 71, 0, 0 }, // 139 tc_f675fee8
  { 1, 70, 71, 0, 0 }, // 140 tc_05d3a09b
  { 1, 70, 71, 0, 0 }, // 141 tc_bdceeac1
  { 1, 70, 71, 0, 0 }, // 142 tc_f429765c
  { 1, 70, 71, 0, 0 }, // 143 tc_1a2fd869
  { 1, 70, 71, 0, 0 }, // 144 tc_9461ff31
  { 1, 75, 76, 0, 0 }, // 145 tc_0371abea
  { 1, 72, 73, 0, 0 }, // 146 tc_5bf126a6
  { 1, 70, 71, 0, 0 }, // 147 tc_14b5c689
  { 1, 70, 71, 0, 0 }, // 148 tc_76851da1
  { 1, 75, 76, 0, 0 }, // 149 tc_24b66c99
  { 1, 75, 76, 0, 0 }, // 150 tc_53559e35
  { 1, 72, 73, 0, 0 }, // 151 tc_838b34ea
  { 1, 72, 73, 0, 0 }, // 152 tc_d65dbf51
  { 1, 72, 73, 0, 0 }, // 153 tc_d5c0729a
  { 1, 72, 73, 0, 0 }, // 154 tc_5abb5e3f
  { 1, 75, 76, 0, 0 }, // 155 tc_362c6592
  { 1, 75, 76, 0, 0 }, // 156 tc_3962fa26
  { 1, 75, 76, 0, 0 }, // 157 tc_da4a37ed
  { 1, 75, 76, 0, 0 }, // 158 tc_40116ca8
  { 1, 72, 73, 0, 0 }, // 159 tc_4b68bce4
  { 1, 72, 73, 0, 0 }, // 160 tc_e95795ec
  { 1, 72, 73, 0, 0 }, // 161 tc_d2e63d61
  { 1, 72, 73, 0, 0 }, // 162 tc_b90a29b1
  { 1, 75, 76, 0, 0 }, // 163 tc_5aee39f7
  { 1, 75, 76, 0, 0 }, // 164 tc_14b272fa
  { 1, 72, 73, 0, 0 }, // 165 tc_67435e81
  { 1, 72, 73, 0, 0 }, // 166 tc_fcc3ddf9
  { 1, 70, 71, 0, 0 }, // 167 tc_13bfbcf9
  { 1, 70, 71, 0, 0 }, // 168 tc_9debc299
  { 1, 70, 71, 0, 0 }, // 169 tc_703e822c
  { 1, 70, 71, 0, 0 }, // 170 tc_784490da
  { 1, 70, 71, 0, 0 }, // 171 tc_a1c00888
  { 1, 75, 76, 0, 0 }, // 172 tc_0a705168
  { 1, 75, 76, 0, 0 }, // 173 tc_9fc3dae0
  { 1, 75, 76, 0, 0 }, // 174 tc_a1123dda
  { 1, 75, 76, 0, 0 }, // 175 tc_8b3e402a
  { 1, 75, 76, 0, 0 }, // 176 tc_5b7c0967
  { 1, 75, 76, 0, 0 }, // 177 tc_39dfefe8
  { 1, 72, 73, 0, 0 }, // 178 tc_b4407292
  { 1, 72, 73, 0, 0 }, // 179 tc_36153880
  { 1, 72, 73, 0, 0 }, // 180 tc_49a8207d
  { 1, 75, 76, 0, 0 }, // 181 tc_89e94ad3
  { 0, 0, 0, 0, 0 }, // 182 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 183 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 184 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 185 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 186 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 187 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 188 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 189 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 190 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 191 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 192 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 193 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 194 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 195 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 196 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 197 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 198 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 199 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 200 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 201 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 202 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 203 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 204 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 205 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 206 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 207 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 208 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 209 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 210 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 211 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 212 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 213 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 214 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 215 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 216 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 217 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 218 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 219 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 220 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 221 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 222 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 223 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 224 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 225 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 226 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 227 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 228 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 229 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 230 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 231 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 232 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 233 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 234 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 235 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 236 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 237 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 238 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 239 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 240 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 241 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 242 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 243 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 244 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 245 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 246 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 247 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 248 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 249 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 250 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 251 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 252 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 253 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 254 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 255 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 256 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 257 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 258 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 259 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 260 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 261 tc_3ad719fb
  { 1, 72, 73, 0, 0 }, // 262 tc_8c99de45
  { 1, 78, 79, 0, 0 }, // 263 tc_9ad9998f
  { 1, 72, 73, 0, 0 }, // 264 tc_b857bf4e
  { 1, 72, 73, 0, 0 }, // 265 tc_9ca930f7
  { 1, 74, 75, 0, 0 }, // 266 tc_5d7f5414
  { 1, 74, 75, 0, 0 }, // 267 tc_8b121f4a
  { 1, 78, 79, 0, 0 }, // 268 tc_174516e8
  { 1, 72, 73, 0, 0 }, // 269 tc_fe211424
  { 1, 78, 79, 0, 0 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV55[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 79, 80, 825, 828 }, // 1 tc_679309b8
  { 1, 80, 81, 828, 831 }, // 2 PSEUDO
  { 1, 80, 81, 831, 833 }, // 3 tc_57890846
  { 1, 80, 81, 833, 837 }, // 4 tc_4c5ba658
  { 1, 80, 81, 837, 841 }, // 5 tc_05c070ec
  { 1, 80, 81, 841, 844 }, // 6 tc_5a2711e5
  { 1, 80, 81, 844, 847 }, // 7 tc_1ae57e39
  { 1, 79, 80, 847, 850 }, // 8 tc_946df596
  { 1, 79, 80, 850, 853 }, // 9 tc_85d5d03f
  { 1, 80, 81, 853, 856 }, // 10 tc_56f114f4
  { 1, 79, 80, 856, 859 }, // 11 tc_640086b5
  { 1, 81, 82, 859, 862 }, // 12 DUPLEX
  { 1, 82, 83, 862, 863 }, // 13 tc_ENDLOOP
  { 1, 80, 81, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 79, 80, 863, 865 }, // 15 tc_db2bce9c
  { 1, 83, 84, 865, 867 }, // 16 tc_85c9c08f
  { 1, 83, 84, 867, 870 }, // 17 tc_b9e09e03
  { 1, 84, 85, 870, 874 }, // 18 tc_5ef37dc4
  { 1, 84, 85, 874, 877 }, // 19 tc_17e0d2cd
  { 1, 84, 85, 877, 881 }, // 20 tc_44d3da28
  { 1, 81, 82, 881, 884 }, // 21 tc_7186d325
  { 1, 81, 82, 884, 887 }, // 22 tc_096199d3
  { 1, 81, 82, 887, 890 }, // 23 tc_2b8da4c2
  { 1, 81, 82, 890, 893 }, // 24 tc_9da59d12
  { 1, 81, 82, 893, 894 }, // 25 tc_4d5fa3a1
  { 1, 81, 82, 894, 895 }, // 26 tc_e06f432a
  { 1, 84, 85, 895, 897 }, // 27 tc_15aa71c5
  { 1, 81, 82, 897, 899 }, // 28 tc_675e4897
  { 1, 84, 85, 899, 901 }, // 29 LD_tc_ld_SLOT01
  { 1, 79, 80, 901, 904 }, // 30 tc_c8ce0b5c
  { 1, 79, 80, 904, 907 }, // 31 tc_bafaade3
  { 1, 79, 80, 907, 911 }, // 32 tc_d773585a
  { 1, 79, 80, 911, 912 }, // 33 tc_4ae7b58b
  { 1, 84, 85, 912, 917 }, // 34 tc_e93a3d71
  { 0, 0, 0, 0, 0 }, // 35 tc_56c4f9fe
  { 1, 84, 85, 917, 922 }, // 36 tc_e86aa961
  { 1, 84, 85, 922, 926 }, // 37 tc_da97ee82
  { 1, 83, 84, 926, 927 }, // 38 tc_d5b7b0c1
  { 0, 0, 0, 0, 0 }, // 39 tc_db5555f3
  { 0, 0, 0, 0, 0 }, // 40 tc_c0749f3c
  { 0, 0, 0, 0, 0 }, // 41 tc_a7e6707d
  { 1, 85, 87, 927, 930 }, // 42 PSEUDOM
  { 0, 0, 0, 0, 0 }, // 43 tc_3aacf4a8
  { 0, 0, 0, 0, 0 }, // 44 tc_c5dba46e
  { 0, 0, 0, 0, 0 }, // 45 tc_f21e8abb
  { 0, 0, 0, 0, 0 }, // 46 tc_af25efd9
  { 1, 79, 80, 930, 933 }, // 47 tc_002cb246
  { 1, 84, 85, 933, 937 }, // 48 tc_f8e23f0b
  { 1, 81, 82, 937, 941 }, // 49 tc_8fb7ab1b
  { 1, 84, 85, 941, 944 }, // 50 tc_30b9bb4a
  { 1, 81, 82, 944, 947 }, // 51 tc_be9602ff
  { 1, 79, 80, 947, 952 }, // 52 tc_bfec0f01
  { 1, 81, 82, 952, 956 }, // 53 tc_c79a189f
  { 1, 84, 85, 956, 959 }, // 54 tc_b83e6d73
  { 1, 84, 85, 959, 963 }, // 55 tc_0b2be201
  { 1, 84, 85, 963, 967 }, // 56 tc_c4f596e3
  { 1, 81, 82, 967, 970 }, // 57 tc_b44ecf75
  { 1, 84, 85, 970, 973 }, // 58 ST_tc_st_SLOT01
  { 0, 0, 0, 0, 0 }, // 59 CVI_VA
  { 0, 0, 0, 0, 0 }, // 60 tc_0ec46cf9
  { 0, 0, 0, 0, 0 }, // 61 tc_16ff9ef8
  { 0, 0, 0, 0, 0 }, // 62 tc_718b5c53
  { 0, 0, 0, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 81, 82, 973, 974 }, // 64 tc_d63f638c
  { 1, 79, 80, 974, 976 }, // 65 tc_cf8126ae
  { 1, 79, 80, 976, 979 }, // 66 tc_779080bf
  { 1, 79, 80, 979, 982 }, // 67 tc_4414d8b1
  { 1, 80, 81, 982, 985 }, // 68 tc_61830035
  { 1, 79, 80, 985, 987 }, // 69 tc_0ae0825c
  { 1, 80, 81, 0, 0 }, // 70 tc_2eabeebe
  { 1, 80, 81, 987, 990 }, // 71 tc_1c80410a
  { 1, 80, 81, 990, 993 }, // 72 tc_d08ee0f4
  { 1, 87, 88, 993, 995 }, // 73 tc_b9272d6c
  { 1, 87, 88, 995, 997 }, // 74 tc_434c8e1e
  { 1, 79, 80, 997, 1000 }, // 75 tc_6132ba3d
  { 1, 79, 80, 1000, 1003 }, // 76 tc_e4a7f9f0
  { 1, 79, 80, 1003, 1008 }, // 77 tc_9c3ecd83
  { 1, 79, 80, 1008, 1011 }, // 78 tc_643b4717
  { 1, 80, 81, 1011, 1012 }, // 79 tc_862b3e70
  { 1, 79, 80, 1012, 1015 }, // 80 tc_4837eefb
  { 1, 79, 80, 1015, 1019 }, // 81 tc_5b54b33f
  { 1, 79, 80, 1019, 1024 }, // 82 tc_d1aa9eaa
  { 1, 79, 80, 1024, 1027 }, // 83 tc_1fc97744
  { 1, 79, 80, 1027, 1031 }, // 84 tc_f9058dd7
  { 1, 79, 80, 1031, 1033 }, // 85 tc_de554571
  { 1, 80, 81, 1033, 1036 }, // 86 tc_de4df740
  { 1, 79, 80, 1036, 1038 }, // 87 tc_cfd8378a
  { 1, 79, 80, 1038, 1042 }, // 88 tc_b4b5c03a
  { 1, 87, 88, 1042, 1044 }, // 89 tc_a813cf9a
  { 1, 79, 80, 1044, 1048 }, // 90 tc_b31c2e97
  { 1, 79, 80, 1048, 1050 }, // 91 tc_3a867367
  { 1, 79, 80, 1050, 1053 }, // 92 tc_2f7c551d
  { 1, 79, 80, 1053, 1055 }, // 93 tc_9e313203
  { 1, 79, 80, 1055, 1058 }, // 94 tc_3b470976
  { 1, 79, 80, 1058, 1062 }, // 95 tc_a58fd5cc
  { 1, 79, 80, 1062, 1067 }, // 96 tc_4560740b
  { 1, 79, 80, 1067, 1070 }, // 97 tc_b8bffe55
  { 1, 79, 80, 1070, 1073 }, // 98 tc_88b4f13d
  { 1, 79, 80, 1073, 1077 }, // 99 tc_2ff964b4
  { 1, 87, 88, 1077, 1079 }, // 100 tc_0d8f5752
  { 1, 87, 88, 1079, 1081 }, // 101 tc_bcf98408
  { 1, 79, 80, 1081, 1083 }, // 102 tc_1d81e60e
  { 1, 83, 84, 1083, 1084 }, // 103 tc_3bd75825
  { 1, 83, 84, 1084, 1086 }, // 104 tc_1ad90acd
  { 1, 79, 80, 1086, 1087 }, // 105 tc_ae53734a
  { 1, 79, 80, 1087, 1089 }, // 106 tc_20cdee80
  { 1, 79, 80, 1089, 1091 }, // 107 tc_cd374165
  { 1, 83, 84, 1091, 1093 }, // 108 tc_b51dc29a
  { 1, 83, 84, 1093, 1095 }, // 109 tc_e78647bd
  { 1, 87, 88, 1095, 1097 }, // 110 tc_d9d43ecb
  { 1, 87, 88, 1097, 1099 }, // 111 tc_a9d88b22
  { 1, 87, 88, 1099, 1101 }, // 112 tc_df3319ed
  { 1, 83, 84, 1101, 1102 }, // 113 tc_8d9d0154
  { 1, 87, 88, 1102, 1104 }, // 114 tc_1c4528a2
  { 1, 87, 88, 1104, 1106 }, // 115 tc_32779c6f
  { 1, 83, 84, 1106, 1107 }, // 116 tc_fc3999b4
  { 1, 81, 82, 1107, 1110 }, // 117 tc_9bfd761f
  { 1, 79, 80, 1110, 1113 }, // 118 tc_56336eb0
  { 1, 81, 82, 1113, 1116 }, // 119 tc_bd8382d1
  { 1, 79, 80, 1116, 1119 }, // 120 tc_3d495a39
  { 1, 81, 82, 1119, 1122 }, // 121 tc_b343892a
  { 1, 79, 80, 1122, 1125 }, // 122 tc_0663f615
  { 1, 81, 82, 1125, 1127 }, // 123 tc_8c945be0
  { 1, 79, 80, 1127, 1129 }, // 124 tc_2332b92e
  { 1, 84, 85, 1129, 1134 }, // 125 tc_3c76b0ff
  { 1, 84, 85, 1134, 1140 }, // 126 tc_785f65a7
  { 1, 84, 85, 1140, 1142 }, // 127 tc_c4db48cb
  { 1, 81, 82, 1142, 1144 }, // 128 tc_b43e7930
  { 1, 84, 85, 1144, 1149 }, // 129 tc_e9f3243f
  { 1, 84, 85, 1149, 1153 }, // 130 tc_7a91e76a
  { 1, 84, 85, 1153, 1158 }, // 131 tc_a5d4aeec
  { 1, 84, 85, 1158, 1161 }, // 132 tc_3b5b7ef9
  { 1, 84, 85, 1161, 1165 }, // 133 tc_bab0eed9
  { 1, 84, 85, 1165, 1169 }, // 134 tc_bf061958
  { 1, 84, 85, 1169, 1172 }, // 135 tc_7646c131
  { 1, 84, 85, 1172, 1177 }, // 136 tc_e4b3cb20
  { 1, 84, 85, 1177, 1182 }, // 137 tc_25a78932
  { 1, 84, 85, 1182, 1185 }, // 138 tc_a6b1eca9
  { 1, 79, 80, 1185, 1189 }, // 139 tc_f675fee8
  { 1, 79, 80, 1189, 1193 }, // 140 tc_05d3a09b
  { 1, 79, 80, 1193, 1197 }, // 141 tc_bdceeac1
  { 1, 79, 80, 1197, 1201 }, // 142 tc_f429765c
  { 1, 79, 80, 1201, 1205 }, // 143 tc_1a2fd869
  { 1, 79, 80, 1205, 1208 }, // 144 tc_9461ff31
  { 1, 84, 85, 1208, 1210 }, // 145 tc_0371abea
  { 1, 81, 82, 1210, 1212 }, // 146 tc_5bf126a6
  { 1, 79, 80, 1212, 1214 }, // 147 tc_14b5c689
  { 1, 79, 80, 1214, 1217 }, // 148 tc_76851da1
  { 1, 84, 85, 1217, 1222 }, // 149 tc_24b66c99
  { 1, 84, 85, 1222, 1227 }, // 150 tc_53559e35
  { 1, 81, 82, 1227, 1232 }, // 151 tc_838b34ea
  { 1, 81, 82, 1232, 1237 }, // 152 tc_d65dbf51
  { 1, 81, 82, 1237, 1242 }, // 153 tc_d5c0729a
  { 1, 81, 82, 1242, 1245 }, // 154 tc_5abb5e3f
  { 1, 84, 85, 1245, 1248 }, // 155 tc_362c6592
  { 1, 84, 85, 1248, 1253 }, // 156 tc_3962fa26
  { 1, 84, 85, 1253, 1256 }, // 157 tc_da4a37ed
  { 1, 84, 85, 1256, 1261 }, // 158 tc_40116ca8
  { 1, 81, 82, 1261, 1264 }, // 159 tc_4b68bce4
  { 1, 81, 82, 1264, 1269 }, // 160 tc_e95795ec
  { 1, 81, 82, 1269, 1272 }, // 161 tc_d2e63d61
  { 1, 81, 82, 1272, 1277 }, // 162 tc_b90a29b1
  { 1, 84, 85, 1277, 1281 }, // 163 tc_5aee39f7
  { 1, 84, 85, 1281, 1285 }, // 164 tc_14b272fa
  { 1, 81, 82, 1285, 1289 }, // 165 tc_67435e81
  { 1, 81, 82, 1289, 1293 }, // 166 tc_fcc3ddf9
  { 1, 79, 80, 1293, 1297 }, // 167 tc_13bfbcf9
  { 1, 79, 80, 1297, 1302 }, // 168 tc_9debc299
  { 1, 79, 80, 1302, 1304 }, // 169 tc_703e822c
  { 1, 79, 80, 1304, 1308 }, // 170 tc_784490da
  { 1, 79, 80, 1308, 1310 }, // 171 tc_a1c00888
  { 1, 84, 85, 1310, 1313 }, // 172 tc_0a705168
  { 1, 84, 85, 1313, 1315 }, // 173 tc_9fc3dae0
  { 1, 84, 85, 1315, 1316 }, // 174 tc_a1123dda
  { 1, 84, 85, 1316, 1317 }, // 175 tc_8b3e402a
  { 1, 84, 85, 1317, 1319 }, // 176 tc_5b7c0967
  { 1, 84, 85, 0, 0 }, // 177 tc_39dfefe8
  { 1, 81, 82, 0, 0 }, // 178 tc_b4407292
  { 1, 81, 82, 0, 0 }, // 179 tc_36153880
  { 1, 81, 82, 1319, 1320 }, // 180 tc_49a8207d
  { 1, 84, 85, 1320, 1322 }, // 181 tc_89e94ad3
  { 0, 0, 0, 0, 0 }, // 182 tc_540c3da3
  { 0, 0, 0, 0, 0 }, // 183 tc_c4edf264
  { 0, 0, 0, 0, 0 }, // 184 tc_5bf8afbb
  { 0, 0, 0, 0, 0 }, // 185 tc_3c56e5ce
  { 0, 0, 0, 0, 0 }, // 186 tc_abe8c3b2
  { 0, 0, 0, 0, 0 }, // 187 tc_453fe68d
  { 0, 0, 0, 0, 0 }, // 188 tc_1ba8a0cd
  { 0, 0, 0, 0, 0 }, // 189 tc_52447ecc
  { 0, 0, 0, 0, 0 }, // 190 tc_3904b926
  { 0, 0, 0, 0, 0 }, // 191 tc_b9db8205
  { 0, 0, 0, 0, 0 }, // 192 tc_663c80a7
  { 0, 0, 0, 0, 0 }, // 193 tc_131f1c81
  { 0, 0, 0, 0, 0 }, // 194 tc_c7039829
  { 0, 0, 0, 0, 0 }, // 195 tc_e2d2e9e5
  { 0, 0, 0, 0, 0 }, // 196 tc_ab23f776
  { 0, 0, 0, 0, 0 }, // 197 tc_7177e272
  { 0, 0, 0, 0, 0 }, // 198 tc_e99d4c2e
  { 0, 0, 0, 0, 0 }, // 199 tc_6942b6e0
  { 0, 0, 0, 0, 0 }, // 200 tc_a02a10a8
  { 0, 0, 0, 0, 0 }, // 201 tc_54a0dc47
  { 0, 0, 0, 0, 0 }, // 202 tc_447d9895
  { 0, 0, 0, 0, 0 }, // 203 tc_191381c1
  { 0, 0, 0, 0, 0 }, // 204 tc_3e2aaafc
  { 0, 0, 0, 0, 0 }, // 205 tc_3ce09744
  { 0, 0, 0, 0, 0 }, // 206 tc_20a4bbec
  { 0, 0, 0, 0, 0 }, // 207 tc_c127de3a
  { 0, 0, 0, 0, 0 }, // 208 tc_257f6f7c
  { 0, 0, 0, 0, 0 }, // 209 tc_7e6a3e89
  { 0, 0, 0, 0, 0 }, // 210 tc_e35c1e93
  { 0, 0, 0, 0, 0 }, // 211 tc_05ca8cfd
  { 0, 0, 0, 0, 0 }, // 212 tc_d8287c14
  { 0, 0, 0, 0, 0 }, // 213 tc_08a4f1b6
  { 0, 0, 0, 0, 0 }, // 214 tc_56e64202
  { 0, 0, 0, 0, 0 }, // 215 tc_ac4046bc
  { 0, 0, 0, 0, 0 }, // 216 tc_2e8f5f6e
  { 0, 0, 0, 0, 0 }, // 217 tc_7417e785
  { 0, 0, 0, 0, 0 }, // 218 tc_309dbb4f
  { 0, 0, 0, 0, 0 }, // 219 tc_df80eeb0
  { 0, 0, 0, 0, 0 }, // 220 tc_51d0ecc3
  { 0, 0, 0, 0, 0 }, // 221 tc_561aaa58
  { 0, 0, 0, 0, 0 }, // 222 tc_946013d8
  { 0, 0, 0, 0, 0 }, // 223 tc_46d6c3e0
  { 0, 0, 0, 0, 0 }, // 224 tc_87adc037
  { 0, 0, 0, 0, 0 }, // 225 tc_649072c2
  { 0, 0, 0, 0, 0 }, // 226 tc_b091f1c6
  { 0, 0, 0, 0, 0 }, // 227 tc_0b04c6c7
  { 0, 0, 0, 0, 0 }, // 228 tc_660769f1
  { 0, 0, 0, 0, 0 }, // 229 tc_e8797b98
  { 0, 0, 0, 0, 0 }, // 230 tc_05ac6f98
  { 0, 0, 0, 0, 0 }, // 231 tc_05058f6f
  { 0, 0, 0, 0, 0 }, // 232 tc_fd7610da
  { 0, 0, 0, 0, 0 }, // 233 tc_1381a97c
  { 0, 0, 0, 0, 0 }, // 234 tc_e3f68a46
  { 0, 0, 0, 0, 0 }, // 235 tc_f1de44ef
  { 0, 0, 0, 0, 0 }, // 236 tc_9d1dc972
  { 0, 0, 0, 0, 0 }, // 237 tc_90bcc1db
  { 0, 0, 0, 0, 0 }, // 238 tc_cd94bfe0
  { 0, 0, 0, 0, 0 }, // 239 tc_15fdf750
  { 0, 0, 0, 0, 0 }, // 240 tc_1ad8a370
  { 0, 0, 0, 0, 0 }, // 241 tc_e675c45a
  { 0, 0, 0, 0, 0 }, // 242 tc_61bf7c03
  { 0, 0, 0, 0, 0 }, // 243 tc_933f2b39
  { 0, 0, 0, 0, 0 }, // 244 tc_26a377fe
  { 0, 0, 0, 0, 0 }, // 245 tc_2d4051cd
  { 0, 0, 0, 0, 0 }, // 246 tc_6e7fa133
  { 0, 0, 0, 0, 0 }, // 247 tc_8772086c
  { 0, 0, 0, 0, 0 }, // 248 tc_b4416217
  { 0, 0, 0, 0, 0 }, // 249 tc_9f363d21
  { 0, 0, 0, 0, 0 }, // 250 tc_8e420e4d
  { 0, 0, 0, 0, 0 }, // 251 tc_7273323b
  { 0, 0, 0, 0, 0 }, // 252 tc_58d21193
  { 0, 0, 0, 0, 0 }, // 253 tc_71646d06
  { 0, 0, 0, 0, 0 }, // 254 tc_04da405a
  { 0, 0, 0, 0, 0 }, // 255 tc_2c745bb8
  { 0, 0, 0, 0, 0 }, // 256 tc_b28e51aa
  { 0, 0, 0, 0, 0 }, // 257 tc_767c4e9d
  { 0, 0, 0, 0, 0 }, // 258 tc_e699ae41
  { 0, 0, 0, 0, 0 }, // 259 tc_a0dbea28
  { 0, 0, 0, 0, 0 }, // 260 tc_dd5b0695
  { 0, 0, 0, 0, 0 }, // 261 tc_3ad719fb
  { 1, 81, 82, 0, 0 }, // 262 tc_8c99de45
  { 1, 87, 88, 0, 0 }, // 263 tc_9ad9998f
  { 1, 81, 82, 1322, 1323 }, // 264 tc_b857bf4e
  { 1, 81, 82, 1323, 1325 }, // 265 tc_9ca930f7
  { 1, 83, 84, 1325, 1326 }, // 266 tc_5d7f5414
  { 1, 83, 84, 0, 0 }, // 267 tc_8b121f4a
  { 1, 87, 88, 1326, 1327 }, // 268 tc_174516e8
  { 1, 81, 82, 1327, 1329 }, // 269 tc_fe211424
  { 1, 87, 88, 1329, 1330 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV62[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 88, 89, 1330, 1333 }, // 1 tc_679309b8
  { 1, 89, 90, 1333, 1336 }, // 2 PSEUDO
  { 1, 89, 90, 1336, 1338 }, // 3 tc_57890846
  { 1, 89, 90, 1338, 1342 }, // 4 tc_4c5ba658
  { 1, 89, 90, 1342, 1346 }, // 5 tc_05c070ec
  { 1, 89, 90, 1346, 1349 }, // 6 tc_5a2711e5
  { 1, 89, 90, 1349, 1352 }, // 7 tc_1ae57e39
  { 1, 88, 89, 1352, 1355 }, // 8 tc_946df596
  { 1, 88, 89, 1355, 1358 }, // 9 tc_85d5d03f
  { 1, 89, 90, 1358, 1361 }, // 10 tc_56f114f4
  { 1, 88, 89, 1361, 1364 }, // 11 tc_640086b5
  { 1, 90, 91, 1364, 1367 }, // 12 DUPLEX
  { 1, 91, 92, 1367, 1368 }, // 13 tc_ENDLOOP
  { 1, 89, 90, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 89, 90, 1368, 1370 }, // 15 tc_db2bce9c
  { 1, 92, 93, 1370, 1372 }, // 16 tc_85c9c08f
  { 1, 92, 93, 1372, 1375 }, // 17 tc_b9e09e03
  { 1, 93, 94, 1375, 1379 }, // 18 tc_5ef37dc4
  { 1, 93, 94, 1379, 1382 }, // 19 tc_17e0d2cd
  { 1, 93, 94, 1382, 1386 }, // 20 tc_44d3da28
  { 1, 90, 91, 1386, 1389 }, // 21 tc_7186d325
  { 1, 90, 91, 1389, 1392 }, // 22 tc_096199d3
  { 1, 90, 91, 1392, 1395 }, // 23 tc_2b8da4c2
  { 1, 90, 91, 1395, 1398 }, // 24 tc_9da59d12
  { 1, 90, 91, 1398, 1399 }, // 25 tc_4d5fa3a1
  { 1, 90, 91, 1399, 1400 }, // 26 tc_e06f432a
  { 1, 93, 94, 1400, 1402 }, // 27 tc_15aa71c5
  { 1, 90, 91, 1402, 1404 }, // 28 tc_675e4897
  { 1, 93, 94, 1404, 1406 }, // 29 LD_tc_ld_SLOT01
  { 1, 88, 89, 1406, 1409 }, // 30 tc_c8ce0b5c
  { 1, 88, 89, 1409, 1412 }, // 31 tc_bafaade3
  { 1, 88, 89, 1412, 1416 }, // 32 tc_d773585a
  { 1, 88, 89, 1416, 1417 }, // 33 tc_4ae7b58b
  { 1, 93, 94, 1417, 1422 }, // 34 tc_e93a3d71
  { 1, 94, 96, 1422, 1425 }, // 35 tc_56c4f9fe
  { 1, 93, 94, 1425, 1430 }, // 36 tc_e86aa961
  { 1, 93, 94, 1430, 1434 }, // 37 tc_da97ee82
  { 1, 92, 93, 1434, 1435 }, // 38 tc_d5b7b0c1
  { 1, 96, 98, 1435, 1438 }, // 39 tc_db5555f3
  { 1, 98, 101, 1438, 1441 }, // 40 tc_c0749f3c
  { 1, 101, 105, 1441, 1444 }, // 41 tc_a7e6707d
  { 1, 105, 107, 1444, 1447 }, // 42 PSEUDOM
  { 1, 94, 96, 1447, 1450 }, // 43 tc_3aacf4a8
  { 1, 107, 110, 1450, 1453 }, // 44 tc_c5dba46e
  { 1, 110, 114, 1453, 1456 }, // 45 tc_f21e8abb
  { 1, 96, 98, 1456, 1460 }, // 46 tc_af25efd9
  { 1, 88, 89, 1460, 1463 }, // 47 tc_002cb246
  { 1, 93, 94, 1463, 1467 }, // 48 tc_f8e23f0b
  { 1, 90, 91, 1467, 1471 }, // 49 tc_8fb7ab1b
  { 1, 93, 94, 1471, 1474 }, // 50 tc_30b9bb4a
  { 1, 90, 91, 1474, 1477 }, // 51 tc_be9602ff
  { 1, 88, 89, 1477, 1482 }, // 52 tc_bfec0f01
  { 1, 90, 91, 1482, 1486 }, // 53 tc_c79a189f
  { 1, 93, 94, 1486, 1489 }, // 54 tc_b83e6d73
  { 1, 93, 94, 1489, 1493 }, // 55 tc_0b2be201
  { 1, 93, 94, 1493, 1497 }, // 56 tc_c4f596e3
  { 1, 90, 91, 1497, 1500 }, // 57 tc_b44ecf75
  { 1, 93, 94, 1500, 1503 }, // 58 ST_tc_st_SLOT01
  { 1, 114, 116, 1503, 1507 }, // 59 CVI_VA
  { 1, 94, 96, 1507, 1509 }, // 60 tc_0ec46cf9
  { 1, 116, 118, 1509, 1513 }, // 61 tc_16ff9ef8
  { 1, 96, 98, 1513, 1514 }, // 62 tc_718b5c53
  { 1, 118, 122, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 90, 91, 1514, 1515 }, // 64 tc_d63f638c
  { 1, 88, 89, 1515, 1517 }, // 65 tc_cf8126ae
  { 1, 88, 89, 1517, 1520 }, // 66 tc_779080bf
  { 1, 88, 89, 1520, 1523 }, // 67 tc_4414d8b1
  { 1, 89, 90, 1523, 1526 }, // 68 tc_61830035
  { 1, 88, 89, 1526, 1528 }, // 69 tc_0ae0825c
  { 1, 89, 90, 0, 0 }, // 70 tc_2eabeebe
  { 1, 89, 90, 1528, 1531 }, // 71 tc_1c80410a
  { 1, 89, 90, 1531, 1534 }, // 72 tc_d08ee0f4
  { 1, 122, 123, 1534, 1536 }, // 73 tc_b9272d6c
  { 1, 122, 123, 1536, 1538 }, // 74 tc_434c8e1e
  { 1, 88, 89, 1538, 1541 }, // 75 tc_6132ba3d
  { 1, 88, 89, 1541, 1544 }, // 76 tc_e4a7f9f0
  { 1, 88, 89, 1544, 1549 }, // 77 tc_9c3ecd83
  { 1, 88, 89, 1549, 1552 }, // 78 tc_643b4717
  { 1, 89, 90, 1552, 1553 }, // 79 tc_862b3e70
  { 1, 88, 89, 1553, 1556 }, // 80 tc_4837eefb
  { 1, 88, 89, 1556, 1560 }, // 81 tc_5b54b33f
  { 1, 88, 89, 1560, 1565 }, // 82 tc_d1aa9eaa
  { 1, 88, 89, 1565, 1568 }, // 83 tc_1fc97744
  { 1, 88, 89, 1568, 1572 }, // 84 tc_f9058dd7
  { 1, 88, 89, 1572, 1574 }, // 85 tc_de554571
  { 1, 89, 90, 1574, 1577 }, // 86 tc_de4df740
  { 1, 88, 89, 1577, 1579 }, // 87 tc_cfd8378a
  { 1, 88, 89, 1579, 1583 }, // 88 tc_b4b5c03a
  { 1, 122, 123, 1583, 1585 }, // 89 tc_a813cf9a
  { 1, 88, 89, 1585, 1589 }, // 90 tc_b31c2e97
  { 1, 88, 89, 1589, 1591 }, // 91 tc_3a867367
  { 1, 88, 89, 1591, 1594 }, // 92 tc_2f7c551d
  { 1, 88, 89, 1594, 1596 }, // 93 tc_9e313203
  { 1, 88, 89, 1596, 1599 }, // 94 tc_3b470976
  { 1, 88, 89, 1599, 1603 }, // 95 tc_a58fd5cc
  { 1, 88, 89, 1603, 1608 }, // 96 tc_4560740b
  { 1, 88, 89, 1608, 1611 }, // 97 tc_b8bffe55
  { 1, 88, 89, 1611, 1614 }, // 98 tc_88b4f13d
  { 1, 88, 89, 1614, 1618 }, // 99 tc_2ff964b4
  { 1, 122, 123, 1618, 1620 }, // 100 tc_0d8f5752
  { 1, 122, 123, 1620, 1622 }, // 101 tc_bcf98408
  { 1, 88, 89, 1622, 1624 }, // 102 tc_1d81e60e
  { 1, 92, 93, 1624, 1625 }, // 103 tc_3bd75825
  { 1, 92, 93, 1625, 1627 }, // 104 tc_1ad90acd
  { 1, 89, 90, 1627, 1628 }, // 105 tc_ae53734a
  { 1, 89, 90, 1628, 1630 }, // 106 tc_20cdee80
  { 1, 89, 90, 1630, 1632 }, // 107 tc_cd374165
  { 1, 92, 93, 1632, 1634 }, // 108 tc_b51dc29a
  { 1, 92, 93, 1634, 1636 }, // 109 tc_e78647bd
  { 1, 122, 123, 1636, 1638 }, // 110 tc_d9d43ecb
  { 1, 122, 123, 1638, 1640 }, // 111 tc_a9d88b22
  { 1, 122, 123, 1640, 1642 }, // 112 tc_df3319ed
  { 1, 92, 93, 1642, 1643 }, // 113 tc_8d9d0154
  { 1, 122, 123, 1643, 1645 }, // 114 tc_1c4528a2
  { 1, 122, 123, 1645, 1647 }, // 115 tc_32779c6f
  { 1, 92, 93, 1647, 1648 }, // 116 tc_fc3999b4
  { 1, 90, 91, 1648, 1651 }, // 117 tc_9bfd761f
  { 1, 89, 90, 1651, 1654 }, // 118 tc_56336eb0
  { 1, 90, 91, 1654, 1657 }, // 119 tc_bd8382d1
  { 1, 89, 90, 1657, 1660 }, // 120 tc_3d495a39
  { 1, 90, 91, 1660, 1663 }, // 121 tc_b343892a
  { 1, 88, 89, 1663, 1666 }, // 122 tc_0663f615
  { 1, 90, 91, 1666, 1668 }, // 123 tc_8c945be0
  { 1, 89, 90, 1668, 1670 }, // 124 tc_2332b92e
  { 1, 93, 94, 1670, 1675 }, // 125 tc_3c76b0ff
  { 1, 93, 94, 1675, 1681 }, // 126 tc_785f65a7
  { 1, 93, 94, 1681, 1683 }, // 127 tc_c4db48cb
  { 1, 90, 91, 1683, 1685 }, // 128 tc_b43e7930
  { 1, 93, 94, 1685, 1690 }, // 129 tc_e9f3243f
  { 1, 93, 94, 1690, 1694 }, // 130 tc_7a91e76a
  { 1, 93, 94, 1694, 1699 }, // 131 tc_a5d4aeec
  { 1, 93, 94, 1699, 1702 }, // 132 tc_3b5b7ef9
  { 1, 93, 94, 1702, 1706 }, // 133 tc_bab0eed9
  { 1, 93, 94, 1706, 1710 }, // 134 tc_bf061958
  { 1, 93, 94, 1710, 1713 }, // 135 tc_7646c131
  { 1, 93, 94, 1713, 1718 }, // 136 tc_e4b3cb20
  { 1, 93, 94, 1718, 1723 }, // 137 tc_25a78932
  { 1, 93, 94, 1723, 1726 }, // 138 tc_a6b1eca9
  { 1, 88, 89, 1726, 1730 }, // 139 tc_f675fee8
  { 1, 88, 89, 1730, 1734 }, // 140 tc_05d3a09b
  { 1, 88, 89, 1734, 1738 }, // 141 tc_bdceeac1
  { 1, 88, 89, 1738, 1742 }, // 142 tc_f429765c
  { 1, 88, 89, 1742, 1746 }, // 143 tc_1a2fd869
  { 1, 88, 89, 1746, 1749 }, // 144 tc_9461ff31
  { 1, 93, 94, 1749, 1751 }, // 145 tc_0371abea
  { 1, 90, 91, 1751, 1753 }, // 146 tc_5bf126a6
  { 1, 88, 89, 1753, 1755 }, // 147 tc_14b5c689
  { 1, 88, 89, 1755, 1758 }, // 148 tc_76851da1
  { 1, 93, 94, 1758, 1763 }, // 149 tc_24b66c99
  { 1, 93, 94, 1763, 1768 }, // 150 tc_53559e35
  { 1, 90, 91, 1768, 1773 }, // 151 tc_838b34ea
  { 1, 90, 91, 1773, 1778 }, // 152 tc_d65dbf51
  { 1, 90, 91, 1778, 1783 }, // 153 tc_d5c0729a
  { 1, 90, 91, 1783, 1786 }, // 154 tc_5abb5e3f
  { 1, 93, 94, 1786, 1789 }, // 155 tc_362c6592
  { 1, 93, 94, 1789, 1794 }, // 156 tc_3962fa26
  { 1, 93, 94, 1794, 1797 }, // 157 tc_da4a37ed
  { 1, 93, 94, 1797, 1802 }, // 158 tc_40116ca8
  { 1, 90, 91, 1802, 1805 }, // 159 tc_4b68bce4
  { 1, 90, 91, 1805, 1810 }, // 160 tc_e95795ec
  { 1, 90, 91, 1810, 1813 }, // 161 tc_d2e63d61
  { 1, 90, 91, 1813, 1818 }, // 162 tc_b90a29b1
  { 1, 93, 94, 1818, 1822 }, // 163 tc_5aee39f7
  { 1, 93, 94, 1822, 1826 }, // 164 tc_14b272fa
  { 1, 90, 91, 1826, 1830 }, // 165 tc_67435e81
  { 1, 90, 91, 1830, 1834 }, // 166 tc_fcc3ddf9
  { 1, 88, 89, 1834, 1838 }, // 167 tc_13bfbcf9
  { 1, 88, 89, 1838, 1843 }, // 168 tc_9debc299
  { 1, 88, 89, 1843, 1845 }, // 169 tc_703e822c
  { 1, 88, 89, 1845, 1849 }, // 170 tc_784490da
  { 1, 88, 89, 1849, 1851 }, // 171 tc_a1c00888
  { 1, 93, 94, 1851, 1854 }, // 172 tc_0a705168
  { 1, 93, 94, 1854, 1856 }, // 173 tc_9fc3dae0
  { 1, 93, 94, 1856, 1857 }, // 174 tc_a1123dda
  { 1, 93, 94, 1857, 1858 }, // 175 tc_8b3e402a
  { 1, 93, 94, 1858, 1860 }, // 176 tc_5b7c0967
  { 1, 93, 94, 0, 0 }, // 177 tc_39dfefe8
  { 1, 90, 91, 0, 0 }, // 178 tc_b4407292
  { 1, 90, 91, 0, 0 }, // 179 tc_36153880
  { 1, 90, 91, 1860, 1861 }, // 180 tc_49a8207d
  { 1, 93, 94, 1861, 1863 }, // 181 tc_89e94ad3
  { 1, 123, 125, 1863, 1866 }, // 182 tc_540c3da3
  { 1, 125, 127, 1866, 1868 }, // 183 tc_c4edf264
  { 1, 127, 129, 1868, 1870 }, // 184 tc_5bf8afbb
  { 1, 101, 105, 1870, 1874 }, // 185 tc_3c56e5ce
  { 1, 98, 101, 1874, 1878 }, // 186 tc_abe8c3b2
  { 1, 98, 101, 1878, 1883 }, // 187 tc_453fe68d
  { 1, 98, 101, 1883, 1887 }, // 188 tc_1ba8a0cd
  { 1, 129, 131, 1887, 1890 }, // 189 tc_52447ecc
  { 1, 129, 131, 1890, 1894 }, // 190 tc_3904b926
  { 1, 129, 131, 1894, 1899 }, // 191 tc_b9db8205
  { 1, 129, 131, 1899, 1903 }, // 192 tc_663c80a7
  { 1, 110, 114, 1903, 1907 }, // 193 tc_131f1c81
  { 1, 110, 114, 1907, 1912 }, // 194 tc_c7039829
  { 1, 110, 114, 1912, 1916 }, // 195 tc_e2d2e9e5
  { 1, 131, 133, 1916, 1919 }, // 196 tc_ab23f776
  { 1, 131, 133, 1919, 1923 }, // 197 tc_7177e272
  { 1, 131, 133, 1923, 1928 }, // 198 tc_e99d4c2e
  { 1, 131, 133, 1928, 1932 }, // 199 tc_6942b6e0
  { 1, 107, 110, 1932, 1936 }, // 200 tc_a02a10a8
  { 1, 107, 110, 1936, 1941 }, // 201 tc_54a0dc47
  { 1, 107, 110, 1941, 1945 }, // 202 tc_447d9895
  { 1, 107, 110, 1945, 1950 }, // 203 tc_191381c1
  { 1, 107, 110, 1950, 1954 }, // 204 tc_3e2aaafc
  { 1, 131, 133, 1954, 1956 }, // 205 tc_3ce09744
  { 1, 131, 133, 1956, 1959 }, // 206 tc_20a4bbec
  { 1, 125, 127, 1959, 1962 }, // 207 tc_c127de3a
  { 1, 94, 96, 1962, 1966 }, // 208 tc_257f6f7c
  { 1, 94, 96, 1966, 1971 }, // 209 tc_7e6a3e89
  { 1, 94, 96, 1971, 1975 }, // 210 tc_e35c1e93
  { 1, 116, 118, 1975, 1978 }, // 211 tc_05ca8cfd
  { 1, 133, 135, 1978, 1981 }, // 212 tc_d8287c14
  { 1, 133, 135, 1981, 1985 }, // 213 tc_08a4f1b6
  { 1, 127, 129, 1985, 1989 }, // 214 tc_56e64202
  { 1, 125, 127, 1989, 1992 }, // 215 tc_ac4046bc
  { 1, 125, 127, 1992, 1996 }, // 216 tc_2e8f5f6e
  { 1, 116, 118, 1996, 1999 }, // 217 tc_7417e785
  { 1, 116, 118, 1999, 2003 }, // 218 tc_309dbb4f
  { 1, 135, 137, 2003, 2007 }, // 219 tc_df80eeb0
  { 1, 116, 118, 2007, 2009 }, // 220 tc_51d0ecc3
  { 1, 135, 137, 2009, 2014 }, // 221 tc_561aaa58
  { 1, 127, 129, 2014, 2016 }, // 222 tc_946013d8
  { 1, 127, 129, 2016, 2019 }, // 223 tc_46d6c3e0
  { 1, 135, 137, 2019, 2023 }, // 224 tc_87adc037
  { 1, 125, 127, 2023, 2026 }, // 225 tc_649072c2
  { 1, 125, 127, 2026, 2030 }, // 226 tc_b091f1c6
  { 1, 133, 135, 2030, 2033 }, // 227 tc_0b04c6c7
  { 1, 133, 135, 2033, 2037 }, // 228 tc_660769f1
  { 1, 137, 140, 2037, 2040 }, // 229 tc_e8797b98
  { 1, 137, 140, 2040, 2044 }, // 230 tc_05ac6f98
  { 1, 140, 143, 2044, 2047 }, // 231 tc_05058f6f
  { 1, 140, 143, 2047, 2051 }, // 232 tc_fd7610da
  { 1, 143, 145, 0, 0 }, // 233 tc_1381a97c
  { 1, 143, 145, 2051, 2052 }, // 234 tc_e3f68a46
  { 1, 145, 147, 2052, 2055 }, // 235 tc_f1de44ef
  { 1, 135, 137, 2055, 2060 }, // 236 tc_9d1dc972
  { 1, 145, 147, 2060, 2064 }, // 237 tc_90bcc1db
  { 1, 147, 150, 2064, 2067 }, // 238 tc_cd94bfe0
  { 1, 147, 150, 2067, 2071 }, // 239 tc_15fdf750
  { 1, 133, 135, 2071, 2075 }, // 240 tc_1ad8a370
  { 1, 133, 135, 2075, 2080 }, // 241 tc_e675c45a
  { 1, 150, 152, 2080, 2083 }, // 242 tc_61bf7c03
  { 1, 150, 152, 2083, 2087 }, // 243 tc_933f2b39
  { 1, 150, 152, 2087, 2091 }, // 244 tc_26a377fe
  { 1, 150, 152, 2091, 2096 }, // 245 tc_2d4051cd
  { 1, 127, 129, 2096, 2099 }, // 246 tc_6e7fa133
  { 1, 94, 96, 2099, 2102 }, // 247 tc_8772086c
  { 1, 96, 98, 2102, 2104 }, // 248 tc_b4416217
  { 1, 107, 110, 2104, 2108 }, // 249 tc_9f363d21
  { 1, 107, 110, 2108, 2113 }, // 250 tc_8e420e4d
  { 1, 152, 155, 2113, 2117 }, // 251 tc_7273323b
  { 1, 152, 155, 2117, 2122 }, // 252 tc_58d21193
  { 1, 96, 98, 2122, 2126 }, // 253 tc_71646d06
  { 1, 135, 137, 2126, 2128 }, // 254 tc_04da405a
  { 1, 135, 137, 2128, 2131 }, // 255 tc_2c745bb8
  { 1, 143, 145, 2131, 2132 }, // 256 tc_b28e51aa
  { 1, 143, 145, 2132, 2134 }, // 257 tc_767c4e9d
  { 1, 155, 157, 2134, 2136 }, // 258 tc_e699ae41
  { 1, 155, 157, 2136, 2139 }, // 259 tc_a0dbea28
  { 1, 155, 157, 2139, 2142 }, // 260 tc_dd5b0695
  { 1, 155, 157, 2142, 2146 }, // 261 tc_3ad719fb
  { 1, 90, 91, 0, 0 }, // 262 tc_8c99de45
  { 1, 122, 123, 0, 0 }, // 263 tc_9ad9998f
  { 1, 90, 91, 2146, 2147 }, // 264 tc_b857bf4e
  { 1, 90, 91, 2147, 2149 }, // 265 tc_9ca930f7
  { 1, 92, 93, 2149, 2150 }, // 266 tc_5d7f5414
  { 1, 92, 93, 0, 0 }, // 267 tc_8b121f4a
  { 1, 122, 123, 2150, 2151 }, // 268 tc_174516e8
  { 1, 90, 91, 2151, 2153 }, // 269 tc_fe211424
  { 1, 122, 123, 2153, 2154 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV65[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 157, 158, 2154, 2157 }, // 1 tc_679309b8
  { 1, 158, 159, 2157, 2160 }, // 2 PSEUDO
  { 1, 158, 159, 2160, 2162 }, // 3 tc_57890846
  { 1, 158, 159, 2162, 2166 }, // 4 tc_4c5ba658
  { 1, 158, 159, 2166, 2170 }, // 5 tc_05c070ec
  { 1, 158, 159, 2170, 2173 }, // 6 tc_5a2711e5
  { 1, 158, 159, 2173, 2176 }, // 7 tc_1ae57e39
  { 1, 157, 158, 2176, 2179 }, // 8 tc_946df596
  { 1, 157, 158, 2179, 2182 }, // 9 tc_85d5d03f
  { 1, 158, 159, 2182, 2185 }, // 10 tc_56f114f4
  { 1, 157, 158, 2185, 2188 }, // 11 tc_640086b5
  { 1, 159, 160, 2188, 2191 }, // 12 DUPLEX
  { 1, 160, 161, 2191, 2192 }, // 13 tc_ENDLOOP
  { 1, 158, 159, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 158, 159, 2192, 2194 }, // 15 tc_db2bce9c
  { 1, 161, 162, 2194, 2196 }, // 16 tc_85c9c08f
  { 1, 161, 162, 2196, 2199 }, // 17 tc_b9e09e03
  { 1, 162, 163, 2199, 2203 }, // 18 tc_5ef37dc4
  { 1, 162, 163, 2203, 2206 }, // 19 tc_17e0d2cd
  { 1, 162, 163, 2206, 2210 }, // 20 tc_44d3da28
  { 1, 159, 160, 2210, 2213 }, // 21 tc_7186d325
  { 1, 159, 160, 2213, 2216 }, // 22 tc_096199d3
  { 1, 159, 160, 2216, 2219 }, // 23 tc_2b8da4c2
  { 1, 159, 160, 2219, 2222 }, // 24 tc_9da59d12
  { 1, 159, 160, 2222, 2223 }, // 25 tc_4d5fa3a1
  { 1, 159, 160, 2223, 2224 }, // 26 tc_e06f432a
  { 1, 162, 163, 2224, 2226 }, // 27 tc_15aa71c5
  { 1, 159, 160, 2226, 2228 }, // 28 tc_675e4897
  { 1, 162, 163, 2228, 2230 }, // 29 LD_tc_ld_SLOT01
  { 1, 157, 158, 2230, 2233 }, // 30 tc_c8ce0b5c
  { 1, 157, 158, 2233, 2236 }, // 31 tc_bafaade3
  { 1, 157, 158, 2236, 2240 }, // 32 tc_d773585a
  { 1, 157, 158, 2240, 2241 }, // 33 tc_4ae7b58b
  { 1, 162, 163, 2241, 2246 }, // 34 tc_e93a3d71
  { 1, 163, 165, 2246, 2249 }, // 35 tc_56c4f9fe
  { 1, 162, 163, 2249, 2254 }, // 36 tc_e86aa961
  { 1, 162, 163, 2254, 2258 }, // 37 tc_da97ee82
  { 1, 161, 162, 2258, 2259 }, // 38 tc_d5b7b0c1
  { 1, 165, 167, 2259, 2262 }, // 39 tc_db5555f3
  { 1, 167, 170, 2262, 2265 }, // 40 tc_c0749f3c
  { 1, 170, 174, 2265, 2268 }, // 41 tc_a7e6707d
  { 1, 174, 176, 2268, 2271 }, // 42 PSEUDOM
  { 1, 163, 165, 2271, 2274 }, // 43 tc_3aacf4a8
  { 1, 176, 179, 2274, 2277 }, // 44 tc_c5dba46e
  { 1, 179, 183, 2277, 2280 }, // 45 tc_f21e8abb
  { 1, 165, 167, 2280, 2284 }, // 46 tc_af25efd9
  { 1, 157, 158, 2284, 2287 }, // 47 tc_002cb246
  { 1, 162, 163, 2287, 2291 }, // 48 tc_f8e23f0b
  { 1, 159, 160, 2291, 2295 }, // 49 tc_8fb7ab1b
  { 1, 162, 163, 2295, 2298 }, // 50 tc_30b9bb4a
  { 1, 159, 160, 2298, 2301 }, // 51 tc_be9602ff
  { 1, 157, 158, 2301, 2306 }, // 52 tc_bfec0f01
  { 1, 159, 160, 2306, 2310 }, // 53 tc_c79a189f
  { 1, 162, 163, 2310, 2313 }, // 54 tc_b83e6d73
  { 1, 162, 163, 2313, 2317 }, // 55 tc_0b2be201
  { 1, 162, 163, 2317, 2321 }, // 56 tc_c4f596e3
  { 1, 159, 160, 2321, 2324 }, // 57 tc_b44ecf75
  { 1, 162, 163, 2324, 2327 }, // 58 ST_tc_st_SLOT01
  { 1, 183, 185, 2327, 2331 }, // 59 CVI_VA
  { 1, 163, 165, 2331, 2333 }, // 60 tc_0ec46cf9
  { 1, 185, 187, 2333, 2337 }, // 61 tc_16ff9ef8
  { 1, 165, 167, 2337, 2338 }, // 62 tc_718b5c53
  { 1, 187, 191, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 159, 160, 2338, 2339 }, // 64 tc_d63f638c
  { 1, 157, 158, 2339, 2341 }, // 65 tc_cf8126ae
  { 1, 157, 158, 2341, 2344 }, // 66 tc_779080bf
  { 1, 157, 158, 2344, 2347 }, // 67 tc_4414d8b1
  { 1, 158, 159, 2347, 2350 }, // 68 tc_61830035
  { 1, 157, 158, 2350, 2352 }, // 69 tc_0ae0825c
  { 1, 158, 159, 0, 0 }, // 70 tc_2eabeebe
  { 1, 158, 159, 2352, 2355 }, // 71 tc_1c80410a
  { 1, 158, 159, 2355, 2358 }, // 72 tc_d08ee0f4
  { 1, 191, 192, 2358, 2360 }, // 73 tc_b9272d6c
  { 1, 191, 192, 2360, 2362 }, // 74 tc_434c8e1e
  { 1, 157, 158, 2362, 2365 }, // 75 tc_6132ba3d
  { 1, 157, 158, 2365, 2368 }, // 76 tc_e4a7f9f0
  { 1, 157, 158, 2368, 2373 }, // 77 tc_9c3ecd83
  { 1, 157, 158, 2373, 2376 }, // 78 tc_643b4717
  { 1, 158, 159, 2376, 2377 }, // 79 tc_862b3e70
  { 1, 157, 158, 2377, 2380 }, // 80 tc_4837eefb
  { 1, 157, 158, 2380, 2384 }, // 81 tc_5b54b33f
  { 1, 157, 158, 2384, 2389 }, // 82 tc_d1aa9eaa
  { 1, 157, 158, 2389, 2392 }, // 83 tc_1fc97744
  { 1, 157, 158, 2392, 2396 }, // 84 tc_f9058dd7
  { 1, 157, 158, 2396, 2398 }, // 85 tc_de554571
  { 1, 158, 159, 2398, 2401 }, // 86 tc_de4df740
  { 1, 157, 158, 2401, 2403 }, // 87 tc_cfd8378a
  { 1, 157, 158, 2403, 2407 }, // 88 tc_b4b5c03a
  { 1, 191, 192, 2407, 2409 }, // 89 tc_a813cf9a
  { 1, 157, 158, 2409, 2413 }, // 90 tc_b31c2e97
  { 1, 157, 158, 2413, 2415 }, // 91 tc_3a867367
  { 1, 157, 158, 2415, 2418 }, // 92 tc_2f7c551d
  { 1, 157, 158, 2418, 2420 }, // 93 tc_9e313203
  { 1, 157, 158, 2420, 2423 }, // 94 tc_3b470976
  { 1, 157, 158, 2423, 2427 }, // 95 tc_a58fd5cc
  { 1, 157, 158, 2427, 2432 }, // 96 tc_4560740b
  { 1, 157, 158, 2432, 2435 }, // 97 tc_b8bffe55
  { 1, 157, 158, 2435, 2438 }, // 98 tc_88b4f13d
  { 1, 157, 158, 2438, 2442 }, // 99 tc_2ff964b4
  { 1, 191, 192, 2442, 2444 }, // 100 tc_0d8f5752
  { 1, 191, 192, 2444, 2446 }, // 101 tc_bcf98408
  { 1, 157, 158, 2446, 2448 }, // 102 tc_1d81e60e
  { 1, 161, 162, 2448, 2449 }, // 103 tc_3bd75825
  { 1, 161, 162, 2449, 2451 }, // 104 tc_1ad90acd
  { 1, 158, 159, 2451, 2452 }, // 105 tc_ae53734a
  { 1, 158, 159, 2452, 2454 }, // 106 tc_20cdee80
  { 1, 158, 159, 2454, 2456 }, // 107 tc_cd374165
  { 1, 161, 162, 2456, 2458 }, // 108 tc_b51dc29a
  { 1, 161, 162, 2458, 2460 }, // 109 tc_e78647bd
  { 1, 191, 192, 2460, 2462 }, // 110 tc_d9d43ecb
  { 1, 191, 192, 2462, 2464 }, // 111 tc_a9d88b22
  { 1, 191, 192, 2464, 2466 }, // 112 tc_df3319ed
  { 1, 161, 162, 2466, 2467 }, // 113 tc_8d9d0154
  { 1, 191, 192, 2467, 2469 }, // 114 tc_1c4528a2
  { 1, 191, 192, 2469, 2471 }, // 115 tc_32779c6f
  { 1, 161, 162, 2471, 2472 }, // 116 tc_fc3999b4
  { 1, 159, 160, 2472, 2475 }, // 117 tc_9bfd761f
  { 1, 158, 159, 2475, 2478 }, // 118 tc_56336eb0
  { 1, 159, 160, 2478, 2481 }, // 119 tc_bd8382d1
  { 1, 158, 159, 2481, 2484 }, // 120 tc_3d495a39
  { 1, 159, 160, 2484, 2487 }, // 121 tc_b343892a
  { 1, 157, 158, 2487, 2490 }, // 122 tc_0663f615
  { 1, 159, 160, 2490, 2492 }, // 123 tc_8c945be0
  { 1, 158, 159, 2492, 2494 }, // 124 tc_2332b92e
  { 1, 162, 163, 2494, 2499 }, // 125 tc_3c76b0ff
  { 1, 162, 163, 2499, 2505 }, // 126 tc_785f65a7
  { 1, 162, 163, 2505, 2507 }, // 127 tc_c4db48cb
  { 1, 159, 160, 2507, 2509 }, // 128 tc_b43e7930
  { 1, 162, 163, 2509, 2514 }, // 129 tc_e9f3243f
  { 1, 162, 163, 2514, 2518 }, // 130 tc_7a91e76a
  { 1, 162, 163, 2518, 2523 }, // 131 tc_a5d4aeec
  { 1, 162, 163, 2523, 2526 }, // 132 tc_3b5b7ef9
  { 1, 162, 163, 2526, 2530 }, // 133 tc_bab0eed9
  { 1, 162, 163, 2530, 2534 }, // 134 tc_bf061958
  { 1, 162, 163, 2534, 2537 }, // 135 tc_7646c131
  { 1, 162, 163, 2537, 2542 }, // 136 tc_e4b3cb20
  { 1, 162, 163, 2542, 2547 }, // 137 tc_25a78932
  { 1, 162, 163, 2547, 2550 }, // 138 tc_a6b1eca9
  { 1, 157, 158, 2550, 2554 }, // 139 tc_f675fee8
  { 1, 157, 158, 2554, 2558 }, // 140 tc_05d3a09b
  { 1, 157, 158, 2558, 2562 }, // 141 tc_bdceeac1
  { 1, 157, 158, 2562, 2566 }, // 142 tc_f429765c
  { 1, 157, 158, 2566, 2570 }, // 143 tc_1a2fd869
  { 1, 157, 158, 2570, 2573 }, // 144 tc_9461ff31
  { 1, 162, 163, 2573, 2575 }, // 145 tc_0371abea
  { 1, 159, 160, 2575, 2577 }, // 146 tc_5bf126a6
  { 1, 157, 158, 2577, 2579 }, // 147 tc_14b5c689
  { 1, 157, 158, 2579, 2582 }, // 148 tc_76851da1
  { 1, 162, 163, 2582, 2587 }, // 149 tc_24b66c99
  { 1, 162, 163, 2587, 2592 }, // 150 tc_53559e35
  { 1, 159, 160, 2592, 2597 }, // 151 tc_838b34ea
  { 1, 159, 160, 2597, 2602 }, // 152 tc_d65dbf51
  { 1, 159, 160, 2602, 2607 }, // 153 tc_d5c0729a
  { 1, 159, 160, 2607, 2610 }, // 154 tc_5abb5e3f
  { 1, 162, 163, 2610, 2613 }, // 155 tc_362c6592
  { 1, 162, 163, 2613, 2618 }, // 156 tc_3962fa26
  { 1, 162, 163, 2618, 2621 }, // 157 tc_da4a37ed
  { 1, 162, 163, 2621, 2626 }, // 158 tc_40116ca8
  { 1, 159, 160, 2626, 2629 }, // 159 tc_4b68bce4
  { 1, 159, 160, 2629, 2634 }, // 160 tc_e95795ec
  { 1, 159, 160, 2634, 2637 }, // 161 tc_d2e63d61
  { 1, 159, 160, 2637, 2642 }, // 162 tc_b90a29b1
  { 1, 162, 163, 2642, 2646 }, // 163 tc_5aee39f7
  { 1, 162, 163, 2646, 2650 }, // 164 tc_14b272fa
  { 1, 159, 160, 2650, 2654 }, // 165 tc_67435e81
  { 1, 159, 160, 2654, 2658 }, // 166 tc_fcc3ddf9
  { 1, 157, 158, 2658, 2662 }, // 167 tc_13bfbcf9
  { 1, 157, 158, 2662, 2667 }, // 168 tc_9debc299
  { 1, 157, 158, 2667, 2669 }, // 169 tc_703e822c
  { 1, 157, 158, 2669, 2673 }, // 170 tc_784490da
  { 1, 157, 158, 2673, 2675 }, // 171 tc_a1c00888
  { 1, 162, 163, 2675, 2678 }, // 172 tc_0a705168
  { 1, 162, 163, 2678, 2680 }, // 173 tc_9fc3dae0
  { 1, 162, 163, 2680, 2681 }, // 174 tc_a1123dda
  { 1, 162, 163, 2681, 2682 }, // 175 tc_8b3e402a
  { 1, 162, 163, 2682, 2684 }, // 176 tc_5b7c0967
  { 1, 162, 163, 0, 0 }, // 177 tc_39dfefe8
  { 1, 159, 160, 0, 0 }, // 178 tc_b4407292
  { 1, 159, 160, 0, 0 }, // 179 tc_36153880
  { 1, 159, 160, 2684, 2685 }, // 180 tc_49a8207d
  { 1, 162, 163, 2685, 2687 }, // 181 tc_89e94ad3
  { 1, 192, 194, 2687, 2690 }, // 182 tc_540c3da3
  { 1, 194, 196, 2690, 2692 }, // 183 tc_c4edf264
  { 1, 196, 198, 2692, 2694 }, // 184 tc_5bf8afbb
  { 1, 170, 174, 2694, 2698 }, // 185 tc_3c56e5ce
  { 1, 167, 170, 2698, 2702 }, // 186 tc_abe8c3b2
  { 1, 167, 170, 2702, 2707 }, // 187 tc_453fe68d
  { 1, 167, 170, 2707, 2711 }, // 188 tc_1ba8a0cd
  { 1, 198, 200, 2711, 2714 }, // 189 tc_52447ecc
  { 1, 198, 200, 2714, 2718 }, // 190 tc_3904b926
  { 1, 198, 200, 2718, 2723 }, // 191 tc_b9db8205
  { 1, 198, 200, 2723, 2727 }, // 192 tc_663c80a7
  { 1, 179, 183, 2727, 2731 }, // 193 tc_131f1c81
  { 1, 179, 183, 2731, 2736 }, // 194 tc_c7039829
  { 1, 179, 183, 2736, 2740 }, // 195 tc_e2d2e9e5
  { 1, 200, 202, 2740, 2743 }, // 196 tc_ab23f776
  { 1, 200, 202, 2743, 2747 }, // 197 tc_7177e272
  { 1, 200, 202, 2747, 2752 }, // 198 tc_e99d4c2e
  { 1, 200, 202, 2752, 2756 }, // 199 tc_6942b6e0
  { 1, 176, 179, 2756, 2760 }, // 200 tc_a02a10a8
  { 1, 176, 179, 2760, 2765 }, // 201 tc_54a0dc47
  { 1, 176, 179, 2765, 2769 }, // 202 tc_447d9895
  { 1, 176, 179, 2769, 2774 }, // 203 tc_191381c1
  { 1, 176, 179, 2774, 2778 }, // 204 tc_3e2aaafc
  { 1, 200, 202, 2778, 2780 }, // 205 tc_3ce09744
  { 1, 200, 202, 2780, 2783 }, // 206 tc_20a4bbec
  { 1, 194, 196, 2783, 2786 }, // 207 tc_c127de3a
  { 1, 163, 165, 2786, 2790 }, // 208 tc_257f6f7c
  { 1, 163, 165, 2790, 2795 }, // 209 tc_7e6a3e89
  { 1, 163, 165, 2795, 2799 }, // 210 tc_e35c1e93
  { 1, 185, 187, 2799, 2802 }, // 211 tc_05ca8cfd
  { 1, 202, 204, 2802, 2805 }, // 212 tc_d8287c14
  { 1, 202, 204, 2805, 2809 }, // 213 tc_08a4f1b6
  { 1, 196, 198, 2809, 2813 }, // 214 tc_56e64202
  { 1, 194, 196, 2813, 2816 }, // 215 tc_ac4046bc
  { 1, 194, 196, 2816, 2820 }, // 216 tc_2e8f5f6e
  { 1, 185, 187, 2820, 2823 }, // 217 tc_7417e785
  { 1, 185, 187, 2823, 2827 }, // 218 tc_309dbb4f
  { 1, 204, 206, 2827, 2831 }, // 219 tc_df80eeb0
  { 1, 185, 187, 2831, 2833 }, // 220 tc_51d0ecc3
  { 1, 204, 206, 2833, 2838 }, // 221 tc_561aaa58
  { 1, 196, 198, 2838, 2840 }, // 222 tc_946013d8
  { 1, 196, 198, 2840, 2843 }, // 223 tc_46d6c3e0
  { 1, 204, 206, 2843, 2847 }, // 224 tc_87adc037
  { 1, 194, 196, 2847, 2850 }, // 225 tc_649072c2
  { 1, 194, 196, 2850, 2854 }, // 226 tc_b091f1c6
  { 1, 202, 204, 2854, 2857 }, // 227 tc_0b04c6c7
  { 1, 202, 204, 2857, 2861 }, // 228 tc_660769f1
  { 1, 206, 209, 2861, 2864 }, // 229 tc_e8797b98
  { 1, 206, 209, 2864, 2868 }, // 230 tc_05ac6f98
  { 1, 209, 212, 2868, 2871 }, // 231 tc_05058f6f
  { 1, 209, 212, 2871, 2875 }, // 232 tc_fd7610da
  { 1, 212, 214, 0, 0 }, // 233 tc_1381a97c
  { 1, 212, 214, 2875, 2876 }, // 234 tc_e3f68a46
  { 1, 214, 216, 2876, 2879 }, // 235 tc_f1de44ef
  { 1, 204, 206, 2879, 2884 }, // 236 tc_9d1dc972
  { 1, 214, 216, 2884, 2888 }, // 237 tc_90bcc1db
  { 1, 216, 219, 2888, 2891 }, // 238 tc_cd94bfe0
  { 1, 216, 219, 2891, 2895 }, // 239 tc_15fdf750
  { 1, 202, 204, 2895, 2899 }, // 240 tc_1ad8a370
  { 1, 202, 204, 2899, 2904 }, // 241 tc_e675c45a
  { 1, 219, 221, 2904, 2907 }, // 242 tc_61bf7c03
  { 1, 219, 221, 2907, 2911 }, // 243 tc_933f2b39
  { 1, 219, 221, 2911, 2915 }, // 244 tc_26a377fe
  { 1, 219, 221, 2915, 2920 }, // 245 tc_2d4051cd
  { 1, 196, 198, 2920, 2923 }, // 246 tc_6e7fa133
  { 1, 163, 165, 2923, 2926 }, // 247 tc_8772086c
  { 1, 165, 167, 2926, 2928 }, // 248 tc_b4416217
  { 1, 176, 179, 2928, 2932 }, // 249 tc_9f363d21
  { 1, 176, 179, 2932, 2937 }, // 250 tc_8e420e4d
  { 1, 221, 224, 2937, 2941 }, // 251 tc_7273323b
  { 1, 221, 224, 2941, 2946 }, // 252 tc_58d21193
  { 1, 165, 167, 2946, 2950 }, // 253 tc_71646d06
  { 1, 204, 206, 2950, 2952 }, // 254 tc_04da405a
  { 1, 204, 206, 2952, 2955 }, // 255 tc_2c745bb8
  { 1, 212, 214, 2955, 2956 }, // 256 tc_b28e51aa
  { 1, 212, 214, 2956, 2958 }, // 257 tc_767c4e9d
  { 1, 224, 226, 2958, 2960 }, // 258 tc_e699ae41
  { 1, 224, 226, 2960, 2963 }, // 259 tc_a0dbea28
  { 1, 224, 226, 2963, 2966 }, // 260 tc_dd5b0695
  { 1, 224, 226, 2966, 2970 }, // 261 tc_3ad719fb
  { 1, 159, 160, 0, 0 }, // 262 tc_8c99de45
  { 1, 191, 192, 0, 0 }, // 263 tc_9ad9998f
  { 1, 159, 160, 2970, 2971 }, // 264 tc_b857bf4e
  { 1, 159, 160, 2971, 2973 }, // 265 tc_9ca930f7
  { 1, 161, 162, 2973, 2974 }, // 266 tc_5d7f5414
  { 1, 161, 162, 0, 0 }, // 267 tc_8b121f4a
  { 1, 191, 192, 2974, 2975 }, // 268 tc_174516e8
  { 1, 159, 160, 2975, 2977 }, // 269 tc_fe211424
  { 1, 191, 192, 2977, 2978 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

static const llvm::InstrItinerary HexagonItinerariesV66[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 226, 227, 2978, 2981 }, // 1 tc_679309b8
  { 1, 227, 228, 2981, 2984 }, // 2 PSEUDO
  { 1, 227, 228, 2984, 2986 }, // 3 tc_57890846
  { 1, 227, 228, 2986, 2990 }, // 4 tc_4c5ba658
  { 1, 227, 228, 2990, 2994 }, // 5 tc_05c070ec
  { 1, 227, 228, 2994, 2997 }, // 6 tc_5a2711e5
  { 1, 227, 228, 2997, 3000 }, // 7 tc_1ae57e39
  { 1, 226, 227, 3000, 3003 }, // 8 tc_946df596
  { 1, 226, 227, 3003, 3006 }, // 9 tc_85d5d03f
  { 1, 227, 228, 3006, 3009 }, // 10 tc_56f114f4
  { 1, 226, 227, 3009, 3012 }, // 11 tc_640086b5
  { 1, 228, 229, 3012, 3015 }, // 12 DUPLEX
  { 1, 229, 230, 3015, 3016 }, // 13 tc_ENDLOOP
  { 1, 227, 228, 0, 0 }, // 14 tc_1b6f7cec
  { 1, 227, 228, 3016, 3018 }, // 15 tc_db2bce9c
  { 1, 230, 231, 3018, 3020 }, // 16 tc_85c9c08f
  { 1, 230, 231, 3020, 3023 }, // 17 tc_b9e09e03
  { 1, 231, 232, 3023, 3027 }, // 18 tc_5ef37dc4
  { 1, 231, 232, 3027, 3030 }, // 19 tc_17e0d2cd
  { 1, 231, 232, 3030, 3034 }, // 20 tc_44d3da28
  { 1, 228, 229, 3034, 3037 }, // 21 tc_7186d325
  { 1, 228, 229, 3037, 3040 }, // 22 tc_096199d3
  { 1, 228, 229, 3040, 3043 }, // 23 tc_2b8da4c2
  { 1, 228, 229, 3043, 3046 }, // 24 tc_9da59d12
  { 1, 228, 229, 3046, 3047 }, // 25 tc_4d5fa3a1
  { 1, 228, 229, 3047, 3048 }, // 26 tc_e06f432a
  { 1, 231, 232, 3048, 3050 }, // 27 tc_15aa71c5
  { 1, 228, 229, 3050, 3052 }, // 28 tc_675e4897
  { 1, 231, 232, 3052, 3054 }, // 29 LD_tc_ld_SLOT01
  { 1, 226, 227, 3054, 3057 }, // 30 tc_c8ce0b5c
  { 1, 226, 227, 3057, 3060 }, // 31 tc_bafaade3
  { 1, 226, 227, 3060, 3064 }, // 32 tc_d773585a
  { 1, 226, 227, 3064, 3065 }, // 33 tc_4ae7b58b
  { 1, 231, 232, 3065, 3070 }, // 34 tc_e93a3d71
  { 1, 232, 234, 3070, 3073 }, // 35 tc_56c4f9fe
  { 1, 231, 232, 3073, 3078 }, // 36 tc_e86aa961
  { 1, 231, 232, 3078, 3082 }, // 37 tc_da97ee82
  { 1, 230, 231, 3082, 3083 }, // 38 tc_d5b7b0c1
  { 1, 234, 236, 3083, 3086 }, // 39 tc_db5555f3
  { 1, 236, 239, 3086, 3089 }, // 40 tc_c0749f3c
  { 1, 239, 243, 3089, 3092 }, // 41 tc_a7e6707d
  { 1, 243, 245, 3092, 3095 }, // 42 PSEUDOM
  { 1, 232, 234, 3095, 3098 }, // 43 tc_3aacf4a8
  { 1, 245, 248, 3098, 3101 }, // 44 tc_c5dba46e
  { 1, 248, 252, 3101, 3104 }, // 45 tc_f21e8abb
  { 1, 234, 236, 3104, 3108 }, // 46 tc_af25efd9
  { 1, 226, 227, 3108, 3111 }, // 47 tc_002cb246
  { 1, 231, 232, 3111, 3115 }, // 48 tc_f8e23f0b
  { 1, 228, 229, 3115, 3119 }, // 49 tc_8fb7ab1b
  { 1, 231, 232, 3119, 3122 }, // 50 tc_30b9bb4a
  { 1, 228, 229, 3122, 3125 }, // 51 tc_be9602ff
  { 1, 226, 227, 3125, 3130 }, // 52 tc_bfec0f01
  { 1, 228, 229, 3130, 3134 }, // 53 tc_c79a189f
  { 1, 231, 232, 3134, 3137 }, // 54 tc_b83e6d73
  { 1, 231, 232, 3137, 3141 }, // 55 tc_0b2be201
  { 1, 231, 232, 3141, 3145 }, // 56 tc_c4f596e3
  { 1, 228, 229, 3145, 3148 }, // 57 tc_b44ecf75
  { 1, 231, 232, 3148, 3151 }, // 58 ST_tc_st_SLOT01
  { 1, 252, 254, 3151, 3155 }, // 59 CVI_VA
  { 1, 232, 234, 3155, 3157 }, // 60 tc_0ec46cf9
  { 1, 254, 256, 3157, 3161 }, // 61 tc_16ff9ef8
  { 1, 234, 236, 3161, 3162 }, // 62 tc_718b5c53
  { 1, 256, 260, 0, 0 }, // 63 CVI_GATHER_PSEUDO
  { 1, 228, 229, 3162, 3163 }, // 64 tc_d63f638c
  { 1, 226, 227, 3163, 3165 }, // 65 tc_cf8126ae
  { 1, 226, 227, 3165, 3168 }, // 66 tc_779080bf
  { 1, 226, 227, 3168, 3171 }, // 67 tc_4414d8b1
  { 1, 227, 228, 3171, 3174 }, // 68 tc_61830035
  { 1, 226, 227, 3174, 3176 }, // 69 tc_0ae0825c
  { 1, 227, 228, 0, 0 }, // 70 tc_2eabeebe
  { 1, 227, 228, 3176, 3179 }, // 71 tc_1c80410a
  { 1, 227, 228, 3179, 3182 }, // 72 tc_d08ee0f4
  { 1, 260, 261, 3182, 3184 }, // 73 tc_b9272d6c
  { 1, 260, 261, 3184, 3186 }, // 74 tc_434c8e1e
  { 1, 226, 227, 3186, 3189 }, // 75 tc_6132ba3d
  { 1, 226, 227, 3189, 3192 }, // 76 tc_e4a7f9f0
  { 1, 226, 227, 3192, 3197 }, // 77 tc_9c3ecd83
  { 1, 226, 227, 3197, 3200 }, // 78 tc_643b4717
  { 1, 227, 228, 3200, 3201 }, // 79 tc_862b3e70
  { 1, 226, 227, 3201, 3204 }, // 80 tc_4837eefb
  { 1, 226, 227, 3204, 3208 }, // 81 tc_5b54b33f
  { 1, 226, 227, 3208, 3213 }, // 82 tc_d1aa9eaa
  { 1, 226, 227, 3213, 3216 }, // 83 tc_1fc97744
  { 1, 226, 227, 3216, 3220 }, // 84 tc_f9058dd7
  { 1, 226, 227, 3220, 3222 }, // 85 tc_de554571
  { 1, 227, 228, 3222, 3225 }, // 86 tc_de4df740
  { 1, 226, 227, 3225, 3227 }, // 87 tc_cfd8378a
  { 1, 226, 227, 3227, 3231 }, // 88 tc_b4b5c03a
  { 1, 260, 261, 3231, 3233 }, // 89 tc_a813cf9a
  { 1, 226, 227, 3233, 3237 }, // 90 tc_b31c2e97
  { 1, 226, 227, 3237, 3239 }, // 91 tc_3a867367
  { 1, 226, 227, 3239, 3242 }, // 92 tc_2f7c551d
  { 1, 226, 227, 3242, 3244 }, // 93 tc_9e313203
  { 1, 226, 227, 3244, 3247 }, // 94 tc_3b470976
  { 1, 226, 227, 3247, 3251 }, // 95 tc_a58fd5cc
  { 1, 226, 227, 3251, 3256 }, // 96 tc_4560740b
  { 1, 226, 227, 3256, 3259 }, // 97 tc_b8bffe55
  { 1, 226, 227, 3259, 3262 }, // 98 tc_88b4f13d
  { 1, 226, 227, 3262, 3266 }, // 99 tc_2ff964b4
  { 1, 260, 261, 3266, 3268 }, // 100 tc_0d8f5752
  { 1, 260, 261, 3268, 3270 }, // 101 tc_bcf98408
  { 1, 226, 227, 3270, 3272 }, // 102 tc_1d81e60e
  { 1, 230, 231, 3272, 3273 }, // 103 tc_3bd75825
  { 1, 230, 231, 3273, 3275 }, // 104 tc_1ad90acd
  { 1, 227, 228, 3275, 3276 }, // 105 tc_ae53734a
  { 1, 227, 228, 3276, 3278 }, // 106 tc_20cdee80
  { 1, 227, 228, 3278, 3280 }, // 107 tc_cd374165
  { 1, 230, 231, 3280, 3282 }, // 108 tc_b51dc29a
  { 1, 230, 231, 3282, 3284 }, // 109 tc_e78647bd
  { 1, 260, 261, 3284, 3286 }, // 110 tc_d9d43ecb
  { 1, 260, 261, 3286, 3288 }, // 111 tc_a9d88b22
  { 1, 260, 261, 3288, 3290 }, // 112 tc_df3319ed
  { 1, 230, 231, 3290, 3291 }, // 113 tc_8d9d0154
  { 1, 260, 261, 3291, 3293 }, // 114 tc_1c4528a2
  { 1, 260, 261, 3293, 3295 }, // 115 tc_32779c6f
  { 1, 230, 231, 3295, 3296 }, // 116 tc_fc3999b4
  { 1, 228, 229, 3296, 3299 }, // 117 tc_9bfd761f
  { 1, 227, 228, 3299, 3302 }, // 118 tc_56336eb0
  { 1, 228, 229, 3302, 3305 }, // 119 tc_bd8382d1
  { 1, 227, 228, 3305, 3308 }, // 120 tc_3d495a39
  { 1, 228, 229, 3308, 3311 }, // 121 tc_b343892a
  { 1, 226, 227, 3311, 3314 }, // 122 tc_0663f615
  { 1, 228, 229, 3314, 3316 }, // 123 tc_8c945be0
  { 1, 227, 228, 3316, 3318 }, // 124 tc_2332b92e
  { 1, 231, 232, 3318, 3323 }, // 125 tc_3c76b0ff
  { 1, 231, 232, 3323, 3329 }, // 126 tc_785f65a7
  { 1, 231, 232, 3329, 3331 }, // 127 tc_c4db48cb
  { 1, 228, 229, 3331, 3333 }, // 128 tc_b43e7930
  { 1, 231, 232, 3333, 3338 }, // 129 tc_e9f3243f
  { 1, 231, 232, 3338, 3342 }, // 130 tc_7a91e76a
  { 1, 231, 232, 3342, 3347 }, // 131 tc_a5d4aeec
  { 1, 231, 232, 3347, 3350 }, // 132 tc_3b5b7ef9
  { 1, 231, 232, 3350, 3354 }, // 133 tc_bab0eed9
  { 1, 231, 232, 3354, 3358 }, // 134 tc_bf061958
  { 1, 231, 232, 3358, 3361 }, // 135 tc_7646c131
  { 1, 231, 232, 3361, 3366 }, // 136 tc_e4b3cb20
  { 1, 231, 232, 3366, 3371 }, // 137 tc_25a78932
  { 1, 231, 232, 3371, 3374 }, // 138 tc_a6b1eca9
  { 1, 226, 227, 3374, 3378 }, // 139 tc_f675fee8
  { 1, 226, 227, 3378, 3382 }, // 140 tc_05d3a09b
  { 1, 226, 227, 3382, 3386 }, // 141 tc_bdceeac1
  { 1, 226, 227, 3386, 3390 }, // 142 tc_f429765c
  { 1, 226, 227, 3390, 3394 }, // 143 tc_1a2fd869
  { 1, 226, 227, 3394, 3397 }, // 144 tc_9461ff31
  { 1, 231, 232, 3397, 3399 }, // 145 tc_0371abea
  { 1, 228, 229, 3399, 3401 }, // 146 tc_5bf126a6
  { 1, 226, 227, 3401, 3403 }, // 147 tc_14b5c689
  { 1, 226, 227, 3403, 3406 }, // 148 tc_76851da1
  { 1, 231, 232, 3406, 3411 }, // 149 tc_24b66c99
  { 1, 231, 232, 3411, 3416 }, // 150 tc_53559e35
  { 1, 228, 229, 3416, 3421 }, // 151 tc_838b34ea
  { 1, 228, 229, 3421, 3426 }, // 152 tc_d65dbf51
  { 1, 228, 229, 3426, 3431 }, // 153 tc_d5c0729a
  { 1, 228, 229, 3431, 3434 }, // 154 tc_5abb5e3f
  { 1, 231, 232, 3434, 3437 }, // 155 tc_362c6592
  { 1, 231, 232, 3437, 3442 }, // 156 tc_3962fa26
  { 1, 231, 232, 3442, 3445 }, // 157 tc_da4a37ed
  { 1, 231, 232, 3445, 3450 }, // 158 tc_40116ca8
  { 1, 228, 229, 3450, 3453 }, // 159 tc_4b68bce4
  { 1, 228, 229, 3453, 3458 }, // 160 tc_e95795ec
  { 1, 228, 229, 3458, 3461 }, // 161 tc_d2e63d61
  { 1, 228, 229, 3461, 3466 }, // 162 tc_b90a29b1
  { 1, 231, 232, 3466, 3470 }, // 163 tc_5aee39f7
  { 1, 231, 232, 3470, 3474 }, // 164 tc_14b272fa
  { 1, 228, 229, 3474, 3478 }, // 165 tc_67435e81
  { 1, 228, 229, 3478, 3482 }, // 166 tc_fcc3ddf9
  { 1, 226, 227, 3482, 3486 }, // 167 tc_13bfbcf9
  { 1, 226, 227, 3486, 3491 }, // 168 tc_9debc299
  { 1, 226, 227, 3491, 3493 }, // 169 tc_703e822c
  { 1, 226, 227, 3493, 3497 }, // 170 tc_784490da
  { 1, 226, 227, 3497, 3499 }, // 171 tc_a1c00888
  { 1, 231, 232, 3499, 3502 }, // 172 tc_0a705168
  { 1, 231, 232, 3502, 3504 }, // 173 tc_9fc3dae0
  { 1, 231, 232, 3504, 3505 }, // 174 tc_a1123dda
  { 1, 231, 232, 3505, 3506 }, // 175 tc_8b3e402a
  { 1, 231, 232, 3506, 3508 }, // 176 tc_5b7c0967
  { 1, 231, 232, 0, 0 }, // 177 tc_39dfefe8
  { 1, 228, 229, 0, 0 }, // 178 tc_b4407292
  { 1, 228, 229, 0, 0 }, // 179 tc_36153880
  { 1, 228, 229, 3508, 3509 }, // 180 tc_49a8207d
  { 1, 231, 232, 3509, 3511 }, // 181 tc_89e94ad3
  { 1, 261, 263, 3511, 3514 }, // 182 tc_540c3da3
  { 1, 263, 265, 3514, 3516 }, // 183 tc_c4edf264
  { 1, 265, 267, 3516, 3518 }, // 184 tc_5bf8afbb
  { 1, 239, 243, 3518, 3522 }, // 185 tc_3c56e5ce
  { 1, 236, 239, 3522, 3526 }, // 186 tc_abe8c3b2
  { 1, 236, 239, 3526, 3531 }, // 187 tc_453fe68d
  { 1, 236, 239, 3531, 3535 }, // 188 tc_1ba8a0cd
  { 1, 267, 269, 3535, 3538 }, // 189 tc_52447ecc
  { 1, 267, 269, 3538, 3542 }, // 190 tc_3904b926
  { 1, 267, 269, 3542, 3547 }, // 191 tc_b9db8205
  { 1, 267, 269, 3547, 3551 }, // 192 tc_663c80a7
  { 1, 248, 252, 3551, 3555 }, // 193 tc_131f1c81
  { 1, 248, 252, 3555, 3560 }, // 194 tc_c7039829
  { 1, 248, 252, 3560, 3564 }, // 195 tc_e2d2e9e5
  { 1, 269, 271, 3564, 3567 }, // 196 tc_ab23f776
  { 1, 269, 271, 3567, 3571 }, // 197 tc_7177e272
  { 1, 269, 271, 3571, 3576 }, // 198 tc_e99d4c2e
  { 1, 269, 271, 3576, 3580 }, // 199 tc_6942b6e0
  { 1, 245, 248, 3580, 3584 }, // 200 tc_a02a10a8
  { 1, 245, 248, 3584, 3589 }, // 201 tc_54a0dc47
  { 1, 245, 248, 3589, 3593 }, // 202 tc_447d9895
  { 1, 245, 248, 3593, 3598 }, // 203 tc_191381c1
  { 1, 245, 248, 3598, 3602 }, // 204 tc_3e2aaafc
  { 1, 269, 271, 3602, 3604 }, // 205 tc_3ce09744
  { 1, 269, 271, 3604, 3607 }, // 206 tc_20a4bbec
  { 1, 263, 265, 3607, 3610 }, // 207 tc_c127de3a
  { 1, 232, 234, 3610, 3614 }, // 208 tc_257f6f7c
  { 1, 232, 234, 3614, 3619 }, // 209 tc_7e6a3e89
  { 1, 232, 234, 3619, 3623 }, // 210 tc_e35c1e93
  { 1, 254, 256, 3623, 3626 }, // 211 tc_05ca8cfd
  { 1, 271, 273, 3626, 3629 }, // 212 tc_d8287c14
  { 1, 271, 273, 3629, 3633 }, // 213 tc_08a4f1b6
  { 1, 265, 267, 3633, 3637 }, // 214 tc_56e64202
  { 1, 263, 265, 3637, 3640 }, // 215 tc_ac4046bc
  { 1, 263, 265, 3640, 3644 }, // 216 tc_2e8f5f6e
  { 1, 254, 256, 3644, 3647 }, // 217 tc_7417e785
  { 1, 254, 256, 3647, 3651 }, // 218 tc_309dbb4f
  { 1, 273, 275, 3651, 3655 }, // 219 tc_df80eeb0
  { 1, 254, 256, 3655, 3657 }, // 220 tc_51d0ecc3
  { 1, 273, 275, 3657, 3662 }, // 221 tc_561aaa58
  { 1, 265, 267, 3662, 3664 }, // 222 tc_946013d8
  { 1, 265, 267, 3664, 3667 }, // 223 tc_46d6c3e0
  { 1, 273, 275, 3667, 3671 }, // 224 tc_87adc037
  { 1, 263, 265, 3671, 3674 }, // 225 tc_649072c2
  { 1, 263, 265, 3674, 3678 }, // 226 tc_b091f1c6
  { 1, 271, 273, 3678, 3681 }, // 227 tc_0b04c6c7
  { 1, 271, 273, 3681, 3685 }, // 228 tc_660769f1
  { 1, 275, 278, 3685, 3688 }, // 229 tc_e8797b98
  { 1, 275, 278, 3688, 3692 }, // 230 tc_05ac6f98
  { 1, 278, 281, 3692, 3695 }, // 231 tc_05058f6f
  { 1, 278, 281, 3695, 3699 }, // 232 tc_fd7610da
  { 1, 281, 283, 0, 0 }, // 233 tc_1381a97c
  { 1, 281, 283, 3699, 3700 }, // 234 tc_e3f68a46
  { 1, 283, 285, 3700, 3703 }, // 235 tc_f1de44ef
  { 1, 273, 275, 3703, 3708 }, // 236 tc_9d1dc972
  { 1, 283, 285, 3708, 3712 }, // 237 tc_90bcc1db
  { 1, 285, 288, 3712, 3715 }, // 238 tc_cd94bfe0
  { 1, 285, 288, 3715, 3719 }, // 239 tc_15fdf750
  { 1, 271, 273, 3719, 3723 }, // 240 tc_1ad8a370
  { 1, 271, 273, 3723, 3728 }, // 241 tc_e675c45a
  { 1, 288, 290, 3728, 3731 }, // 242 tc_61bf7c03
  { 1, 288, 290, 3731, 3735 }, // 243 tc_933f2b39
  { 1, 288, 290, 3735, 3739 }, // 244 tc_26a377fe
  { 1, 288, 290, 3739, 3744 }, // 245 tc_2d4051cd
  { 1, 265, 267, 3744, 3747 }, // 246 tc_6e7fa133
  { 1, 232, 234, 3747, 3750 }, // 247 tc_8772086c
  { 1, 234, 236, 3750, 3752 }, // 248 tc_b4416217
  { 1, 245, 248, 3752, 3756 }, // 249 tc_9f363d21
  { 1, 245, 248, 3756, 3761 }, // 250 tc_8e420e4d
  { 1, 290, 293, 3761, 3765 }, // 251 tc_7273323b
  { 1, 290, 293, 3765, 3770 }, // 252 tc_58d21193
  { 1, 234, 236, 3770, 3774 }, // 253 tc_71646d06
  { 1, 273, 275, 3774, 3776 }, // 254 tc_04da405a
  { 1, 273, 275, 3776, 3779 }, // 255 tc_2c745bb8
  { 1, 281, 283, 3779, 3780 }, // 256 tc_b28e51aa
  { 1, 281, 283, 3780, 3782 }, // 257 tc_767c4e9d
  { 1, 293, 295, 3782, 3784 }, // 258 tc_e699ae41
  { 1, 293, 295, 3784, 3787 }, // 259 tc_a0dbea28
  { 1, 293, 295, 3787, 3790 }, // 260 tc_dd5b0695
  { 1, 293, 295, 3790, 3794 }, // 261 tc_3ad719fb
  { 1, 228, 229, 0, 0 }, // 262 tc_8c99de45
  { 1, 260, 261, 0, 0 }, // 263 tc_9ad9998f
  { 1, 228, 229, 3794, 3795 }, // 264 tc_b857bf4e
  { 1, 228, 229, 3795, 3797 }, // 265 tc_9ca930f7
  { 1, 230, 231, 3797, 3798 }, // 266 tc_5d7f5414
  { 1, 230, 231, 0, 0 }, // 267 tc_8b121f4a
  { 1, 260, 261, 3798, 3799 }, // 268 tc_174516e8
  { 1, 228, 229, 3799, 3801 }, // 269 tc_fe211424
  { 1, 260, 261, 3801, 3802 }, // 270 tc_6b25e783
  { 0, uint16_t(~0U), uint16_t(~0U), uint16_t(~0U), uint16_t(~0U) }// end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // HexagonWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // HexagonReadAdvanceTable

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

static const llvm::MCSchedModel HexagonModelV60 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV60,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV5 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV5,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV55 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  3, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV55,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV62 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  4, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV62,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV65 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  5, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV65,
  nullptr // No extra processor descriptor
};

static const llvm::MCSchedModel HexagonModelV66 = {
  4, // IssueWidth
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  1, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  6, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  HexagonItinerariesV66,
  nullptr // No extra processor descriptor
};

// Sorted (by key) array of sched model for CPU subtype.
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[] = {
  { "generic", (const void *)&HexagonModelV60 },
  { "hexagonv5", (const void *)&HexagonModelV5 },
  { "hexagonv55", (const void *)&HexagonModelV55 },
  { "hexagonv60", (const void *)&HexagonModelV60 },
  { "hexagonv62", (const void *)&HexagonModelV62 },
  { "hexagonv65", (const void *)&HexagonModelV65 },
  { "hexagonv66", (const void *)&HexagonModelV66 },
};

#undef DBGFIELD
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass,
    const MCInst *MI, unsigned CPUID) {
  // Don't know how to resolve this scheduling class.
  return 0;
}
} // end of namespace Hexagon_MC

struct HexagonGenMCSubtargetInfo : public MCSubtargetInfo {
  HexagonGenMCSubtargetInfo(const Triple &TT, 
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
    return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID); 
  }
};

static inline MCSubtargetInfo *createHexagonMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new HexagonGenMCSubtargetInfo(TT, CPU, FS, HexagonFeatureKV, HexagonSubTypeKV, 
                      HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                      HexagonStages, HexagonOperandCycles, HexagonForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::HexagonSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  LLVM_DEBUG(dbgs() << "\nFeatures:" << FS);
  LLVM_DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Hexagon::ArchV5] && HexagonArchVersion < Hexagon::ArchEnum::V5) HexagonArchVersion = Hexagon::ArchEnum::V5;
  if (Bits[Hexagon::ArchV55] && HexagonArchVersion < Hexagon::ArchEnum::V55) HexagonArchVersion = Hexagon::ArchEnum::V55;
  if (Bits[Hexagon::ArchV60] && HexagonArchVersion < Hexagon::ArchEnum::V60) HexagonArchVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ArchV62] && HexagonArchVersion < Hexagon::ArchEnum::V62) HexagonArchVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ArchV65] && HexagonArchVersion < Hexagon::ArchEnum::V65) HexagonArchVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ArchV66] && HexagonArchVersion < Hexagon::ArchEnum::V66) HexagonArchVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionHVX] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVX64B]) UseHVX64BOps = true;
  if (Bits[Hexagon::ExtensionHVX128B]) UseHVX128BOps = true;
  if (Bits[Hexagon::ExtensionHVXV60] && HexagonHVXVersion < Hexagon::ArchEnum::V60) HexagonHVXVersion = Hexagon::ArchEnum::V60;
  if (Bits[Hexagon::ExtensionHVXV62] && HexagonHVXVersion < Hexagon::ArchEnum::V62) HexagonHVXVersion = Hexagon::ArchEnum::V62;
  if (Bits[Hexagon::ExtensionHVXV65] && HexagonHVXVersion < Hexagon::ArchEnum::V65) HexagonHVXVersion = Hexagon::ArchEnum::V65;
  if (Bits[Hexagon::ExtensionHVXV66] && HexagonHVXVersion < Hexagon::ArchEnum::V66) HexagonHVXVersion = Hexagon::ArchEnum::V66;
  if (Bits[Hexagon::ExtensionZReg]) UseZRegOps = true;
  if (Bits[Hexagon::FeatureDuplex]) EnableDuplex = true;
  if (Bits[Hexagon::FeatureLongCalls]) UseLongCalls = true;
  if (Bits[Hexagon::FeatureMemNoShuf]) HasMemNoShuf = false;
  if (Bits[Hexagon::FeatureMemops]) UseMemops = true;
  if (Bits[Hexagon::FeatureNVJ]) UseNewValueJumps = true;
  if (Bits[Hexagon::FeatureNVS]) UseNewValueStores = true;
  if (Bits[Hexagon::FeatureNoreturnStackElim]) NoreturnStackElim = true;
  if (Bits[Hexagon::FeaturePackets]) UsePackets = true;
  if (Bits[Hexagon::FeatureReservedR19]) ReservedR19 = true;
  if (Bits[Hexagon::FeatureSmallData]) UseSmallData = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
namespace Hexagon_MC {
unsigned resolveVariantSchedClassImpl(unsigned SchedClass, const MCInst *MI, unsigned CPUID);
}

struct HexagonGenSubtargetInfo : public TargetSubtargetInfo {
  explicit HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  unsigned resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
  unsigned getHwMode() const override;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV HexagonFeatureKV[];
extern const llvm::SubtargetFeatureKV HexagonSubTypeKV[];
extern const llvm::SubtargetInfoKV HexagonProcSchedKV[];
extern const llvm::MCWriteProcResEntry HexagonWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry HexagonWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry HexagonReadAdvanceTable[];
extern const llvm::InstrStage HexagonStages[];
extern const unsigned HexagonOperandCycles[];
extern const unsigned HexagonForwardingPaths[];
HexagonGenSubtargetInfo::HexagonGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(HexagonFeatureKV, 24), makeArrayRef(HexagonSubTypeKV, 7), 
                        HexagonProcSchedKV, HexagonWriteProcResTable, HexagonWriteLatencyTable, HexagonReadAdvanceTable, 
                        HexagonStages, HexagonOperandCycles, HexagonForwardingPaths) {}

unsigned HexagonGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // HexagonGenSubtargetInfo::resolveSchedClass

unsigned HexagonGenSubtargetInfo
::resolveVariantSchedClass(unsigned SchedClass, const MCInst *MI, unsigned CPUID) const {
  return Hexagon_MC::resolveVariantSchedClassImpl(SchedClass, MI, CPUID);
} // HexagonGenSubtargetInfo::resolveVariantSchedClass

unsigned HexagonGenSubtargetInfo::getHwMode() const {
  if (checkFeatures("+hvx-length128b")) return 1;
  if (checkFeatures("+hvx-length64b")) return 2;
  return 0;
}
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR


#ifdef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DECLS_FOR_MC_ANALYSIS


#ifdef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS
#undef GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS

#endif // GET_STIPREDICATE_DEFS_FOR_MC_ANALYSIS


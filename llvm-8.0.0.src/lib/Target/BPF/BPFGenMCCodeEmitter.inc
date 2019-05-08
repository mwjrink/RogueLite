/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t BPFMCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
    SmallVectorImpl<MCFixup> &Fixups,
    const MCSubtargetInfo &STI) const {
  static const uint64_t InstBits[] = {
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(504403158265495552),	// ADD_ri
    UINT64_C(288230376151711744),	// ADD_ri_32
    UINT64_C(1080863910568919040),	// ADD_rr
    UINT64_C(864691128455135232),	// ADD_rr_32
    UINT64_C(6269010681299730432),	// AND_ri
    UINT64_C(6052837899185946624),	// AND_ri_32
    UINT64_C(6845471433603153920),	// AND_rr
    UINT64_C(6629298651489370112),	// AND_rr_32
    UINT64_C(15852670688344145936),	// BE16
    UINT64_C(15852670688344145952),	// BE32
    UINT64_C(15852670688344145984),	// BE64
    UINT64_C(3963167672086036480),	// DIV_ri
    UINT64_C(3746994889972252672),	// DIV_ri_32
    UINT64_C(4539628424389459968),	// DIV_rr
    UINT64_C(4323455642275676160),	// DIV_rr_32
    UINT64_C(1738389456165011456),	// FI_ri
    UINT64_C(9583660007044415488),	// JAL
    UINT64_C(10160120759347838976),	// JALX
    UINT64_C(1513209474796486656),	// JEQ_ri
    UINT64_C(2089670227099910144),	// JEQ_rr
    UINT64_C(360287970189639680),	// JMP
    UINT64_C(6124895493223874560),	// JNE_ri
    UINT64_C(6701356245527298048),	// JNE_rr
    UINT64_C(8430738502437568512),	// JSGE_ri
    UINT64_C(9007199254740992000),	// JSGE_rr
    UINT64_C(7277816997830721536),	// JSGT_ri
    UINT64_C(7854277750134145024),	// JSGT_rr
    UINT64_C(15348267530078650368),	// JSLE_ri
    UINT64_C(15924728282382073856),	// JSLE_rr
    UINT64_C(14195346025471803392),	// JSLT_ri
    UINT64_C(14771806777775226880),	// JSLT_rr
    UINT64_C(3819052484010180608),	// JUGE_ri
    UINT64_C(4395513236313604096),	// JUGE_rr
    UINT64_C(2666130979403333632),	// JUGT_ri
    UINT64_C(3242591731706757120),	// JUGT_rr
    UINT64_C(13042424520864956416),	// JULE_ri
    UINT64_C(13618885273168379904),	// JULE_rr
    UINT64_C(11889503016258109440),	// JULT_ri
    UINT64_C(12465963768561532928),	// JULT_rr
    UINT64_C(8142508126285856768),	// LDB
    UINT64_C(8142508126285856768),	// LDB32
    UINT64_C(8718968878589280256),	// LDD
    UINT64_C(7566047373982433280),	// LDH
    UINT64_C(7566047373982433280),	// LDH32
    UINT64_C(6989586621679009792),	// LDW
    UINT64_C(6989586621679009792),	// LDW32
    UINT64_C(3458764513820540928),	// LD_ABS_B
    UINT64_C(2882303761517117440),	// LD_ABS_H
    UINT64_C(2305843009213693952),	// LD_ABS_W
    UINT64_C(5764607523034234880),	// LD_IND_B
    UINT64_C(5188146770730811392),	// LD_IND_H
    UINT64_C(4611686018427387904),	// LD_IND_W
    UINT64_C(1729382256910270464),	// LD_imm64
    UINT64_C(1729382256910270464),	// LD_pseudo
    UINT64_C(15276209936040722448),	// LE16
    UINT64_C(15276209936040722464),	// LE32
    UINT64_C(15276209936040722496),	// LE64
    UINT64_C(13546827679130451968),	// MOV_32_64
    UINT64_C(13186539708940812288),	// MOV_ri
    UINT64_C(12970366926827028480),	// MOV_ri_32
    UINT64_C(13763000461244235776),	// MOV_rr
    UINT64_C(13546827679130451968),	// MOV_rr_32
    UINT64_C(2810246167479189504),	// MUL_ri
    UINT64_C(2594073385365405696),	// MUL_ri_32
    UINT64_C(3386706919782612992),	// MUL_rr
    UINT64_C(3170534137668829184),	// MUL_rr_32
    UINT64_C(9511602413006487552),	// NEG_32
    UINT64_C(9727775195120271360),	// NEG_64
    UINT64_C(13763000461244235776),	// NOP
    UINT64_C(5116089176692883456),	// OR_ri
    UINT64_C(4899916394579099648),	// OR_ri_32
    UINT64_C(5692549928996306944),	// OR_rr
    UINT64_C(5476377146882523136),	// OR_rr_32
    UINT64_C(10736581511651262464),	// RET
    UINT64_C(7421932185906577408),	// SLL_ri
    UINT64_C(7205759403792793600),	// SLL_ri_32
    UINT64_C(7998392938210000896),	// SLL_rr
    UINT64_C(7782220156096217088),	// SLL_rr_32
    UINT64_C(14339461213547659264),	// SRA_ri
    UINT64_C(14123288431433875456),	// SRA_ri_32
    UINT64_C(14915921965851082752),	// SRA_rr
    UINT64_C(14699749183737298944),	// SRA_rr_32
    UINT64_C(8574853690513424384),	// SRL_ri
    UINT64_C(8358680908399640576),	// SRL_ri_32
    UINT64_C(9151314442816847872),	// SRL_rr
    UINT64_C(8935141660703064064),	// SRL_rr_32
    UINT64_C(8286623314361712640),	// STB
    UINT64_C(8286623314361712640),	// STB32
    UINT64_C(8863084066665136128),	// STD
    UINT64_C(7710162562058289152),	// STH
    UINT64_C(7710162562058289152),	// STH32
    UINT64_C(7133701809754865664),	// STW
    UINT64_C(7133701809754865664),	// STW32
    UINT64_C(1657324662872342528),	// SUB_ri
    UINT64_C(1441151880758558720),	// SUB_ri_32
    UINT64_C(2233785415175766016),	// SUB_rr
    UINT64_C(2017612633061982208),	// SUB_rr_32
    UINT64_C(14051230837395947520),	// XADD32
    UINT64_C(15780613094306217984),	// XADD64
    UINT64_C(12033618204333965312),	// XOR_ri
    UINT64_C(11817445422220181504),	// XOR_ri_32
    UINT64_C(12610078956637388800),	// XOR_rr
    UINT64_C(12393906174523604992),	// XOR_rr_32
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case BPF::FI_ri:
    case BPF::NOP:
    case BPF::RET: {
      break;
    }
    case BPF::JMP: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::JAL:
    case BPF::JALX: {
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::BE16:
    case BPF::BE32:
    case BPF::BE64:
    case BPF::LE16:
    case BPF::LE32:
    case BPF::LE64:
    case BPF::NEG_32:
    case BPF::NEG_64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      break;
    }
    case BPF::JEQ_ri:
    case BPF::JNE_ri:
    case BPF::JSGE_ri:
    case BPF::JSGT_ri:
    case BPF::JSLE_ri:
    case BPF::JSLT_ri:
    case BPF::JUGE_ri:
    case BPF::JUGT_ri:
    case BPF::JULE_ri:
    case BPF::JULT_ri: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LDB:
    case BPF::LDB32:
    case BPF::LDD:
    case BPF::LDH:
    case BPF::LDH32:
    case BPF::LDW:
    case BPF::LDW32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(983040)) << 36;
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::LD_imm64:
    case BPF::MOV_ri:
    case BPF::MOV_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::ADD_ri:
    case BPF::ADD_ri_32:
    case BPF::AND_ri:
    case BPF::AND_ri_32:
    case BPF::DIV_ri:
    case BPF::DIV_ri_32:
    case BPF::MUL_ri:
    case BPF::MUL_ri_32:
    case BPF::OR_ri:
    case BPF::OR_ri_32:
    case BPF::SLL_ri:
    case BPF::SLL_ri_32:
    case BPF::SRA_ri:
    case BPF::SRA_ri_32:
    case BPF::SRL_ri:
    case BPF::SRL_ri_32:
    case BPF::SUB_ri:
    case BPF::SUB_ri_32:
    case BPF::XOR_ri:
    case BPF::XOR_ri_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::LD_pseudo: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: pseudo
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::MOV_32_64:
    case BPF::MOV_rr:
    case BPF::MOV_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::JEQ_rr:
    case BPF::JNE_rr:
    case BPF::JSGE_rr:
    case BPF::JSGT_rr:
    case BPF::JSLE_rr:
    case BPF::JSLT_rr:
    case BPF::JUGE_rr:
    case BPF::JUGT_rr:
    case BPF::JULE_rr:
    case BPF::JULT_rr: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: BrDst
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 32;
      break;
    }
    case BPF::ADD_rr:
    case BPF::ADD_rr_32:
    case BPF::AND_rr:
    case BPF::AND_rr_32:
    case BPF::DIV_rr:
    case BPF::DIV_rr_32:
    case BPF::MUL_rr:
    case BPF::MUL_rr_32:
    case BPF::OR_rr:
    case BPF::OR_rr_32:
    case BPF::SLL_rr:
    case BPF::SLL_rr_32:
    case BPF::SRA_rr:
    case BPF::SRA_rr_32:
    case BPF::SRL_rr:
    case BPF::SRL_rr_32:
    case BPF::SUB_rr:
    case BPF::SUB_rr_32:
    case BPF::XOR_rr:
    case BPF::XOR_rr_32: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 48;
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
    case BPF::XADD32:
    case BPF::XADD64: {
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_ABS_B:
    case BPF::LD_ABS_H:
    case BPF::LD_ABS_W: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case BPF::STB:
    case BPF::STB32:
    case BPF::STD:
    case BPF::STH:
    case BPF::STH32:
    case BPF::STW:
    case BPF::STW32: {
      // op: src
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      // op: addr
      op = getMemoryOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048575)) << 32;
      break;
    }
    case BPF::LD_IND_B:
    case BPF::LD_IND_H:
    case BPF::LD_IND_W: {
      // op: val
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 52;
      break;
    }
  default:
    std::string msg;
    raw_string_ostream Msg(msg);
    Msg << "Not supported instr: " << MI;
    report_fatal_error(Msg.str());
  }
  return Value;
}

#ifdef ENABLE_INSTR_PREDICATE_VERIFIER
#undef ENABLE_INSTR_PREDICATE_VERIFIER
#include <sstream>

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_None = 0
};

#ifndef NDEBUG
static const char *SubtargetFeatureNames[] = {
  nullptr
};

#endif // NDEBUG
uint64_t BPFMCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void BPFMCCodeEmitter::verifyInstructionPredicates(
    const MCInst &Inst, uint64_t AvailableFeatures) const {
#ifndef NDEBUG
  static uint64_t RequiredFeatures[] = {
    0, // PHI = 0
    0, // INLINEASM = 1
    0, // CFI_INSTRUCTION = 2
    0, // EH_LABEL = 3
    0, // GC_LABEL = 4
    0, // ANNOTATION_LABEL = 5
    0, // KILL = 6
    0, // EXTRACT_SUBREG = 7
    0, // INSERT_SUBREG = 8
    0, // IMPLICIT_DEF = 9
    0, // SUBREG_TO_REG = 10
    0, // COPY_TO_REGCLASS = 11
    0, // DBG_VALUE = 12
    0, // DBG_LABEL = 13
    0, // REG_SEQUENCE = 14
    0, // COPY = 15
    0, // BUNDLE = 16
    0, // LIFETIME_START = 17
    0, // LIFETIME_END = 18
    0, // STACKMAP = 19
    0, // FENTRY_CALL = 20
    0, // PATCHPOINT = 21
    0, // LOAD_STACK_GUARD = 22
    0, // STATEPOINT = 23
    0, // LOCAL_ESCAPE = 24
    0, // FAULTING_OP = 25
    0, // PATCHABLE_OP = 26
    0, // PATCHABLE_FUNCTION_ENTER = 27
    0, // PATCHABLE_RET = 28
    0, // PATCHABLE_FUNCTION_EXIT = 29
    0, // PATCHABLE_TAIL_CALL = 30
    0, // PATCHABLE_EVENT_CALL = 31
    0, // PATCHABLE_TYPED_EVENT_CALL = 32
    0, // ICALL_BRANCH_FUNNEL = 33
    0, // G_ADD = 34
    0, // G_SUB = 35
    0, // G_MUL = 36
    0, // G_SDIV = 37
    0, // G_UDIV = 38
    0, // G_SREM = 39
    0, // G_UREM = 40
    0, // G_AND = 41
    0, // G_OR = 42
    0, // G_XOR = 43
    0, // G_IMPLICIT_DEF = 44
    0, // G_PHI = 45
    0, // G_FRAME_INDEX = 46
    0, // G_GLOBAL_VALUE = 47
    0, // G_EXTRACT = 48
    0, // G_UNMERGE_VALUES = 49
    0, // G_INSERT = 50
    0, // G_MERGE_VALUES = 51
    0, // G_BUILD_VECTOR = 52
    0, // G_BUILD_VECTOR_TRUNC = 53
    0, // G_CONCAT_VECTORS = 54
    0, // G_PTRTOINT = 55
    0, // G_INTTOPTR = 56
    0, // G_BITCAST = 57
    0, // G_INTRINSIC_TRUNC = 58
    0, // G_INTRINSIC_ROUND = 59
    0, // G_LOAD = 60
    0, // G_SEXTLOAD = 61
    0, // G_ZEXTLOAD = 62
    0, // G_STORE = 63
    0, // G_ATOMIC_CMPXCHG_WITH_SUCCESS = 64
    0, // G_ATOMIC_CMPXCHG = 65
    0, // G_ATOMICRMW_XCHG = 66
    0, // G_ATOMICRMW_ADD = 67
    0, // G_ATOMICRMW_SUB = 68
    0, // G_ATOMICRMW_AND = 69
    0, // G_ATOMICRMW_NAND = 70
    0, // G_ATOMICRMW_OR = 71
    0, // G_ATOMICRMW_XOR = 72
    0, // G_ATOMICRMW_MAX = 73
    0, // G_ATOMICRMW_MIN = 74
    0, // G_ATOMICRMW_UMAX = 75
    0, // G_ATOMICRMW_UMIN = 76
    0, // G_BRCOND = 77
    0, // G_BRINDIRECT = 78
    0, // G_INTRINSIC = 79
    0, // G_INTRINSIC_W_SIDE_EFFECTS = 80
    0, // G_ANYEXT = 81
    0, // G_TRUNC = 82
    0, // G_CONSTANT = 83
    0, // G_FCONSTANT = 84
    0, // G_VASTART = 85
    0, // G_VAARG = 86
    0, // G_SEXT = 87
    0, // G_ZEXT = 88
    0, // G_SHL = 89
    0, // G_LSHR = 90
    0, // G_ASHR = 91
    0, // G_ICMP = 92
    0, // G_FCMP = 93
    0, // G_SELECT = 94
    0, // G_UADDO = 95
    0, // G_UADDE = 96
    0, // G_USUBO = 97
    0, // G_USUBE = 98
    0, // G_SADDO = 99
    0, // G_SADDE = 100
    0, // G_SSUBO = 101
    0, // G_SSUBE = 102
    0, // G_UMULO = 103
    0, // G_SMULO = 104
    0, // G_UMULH = 105
    0, // G_SMULH = 106
    0, // G_FADD = 107
    0, // G_FSUB = 108
    0, // G_FMUL = 109
    0, // G_FMA = 110
    0, // G_FDIV = 111
    0, // G_FREM = 112
    0, // G_FPOW = 113
    0, // G_FEXP = 114
    0, // G_FEXP2 = 115
    0, // G_FLOG = 116
    0, // G_FLOG2 = 117
    0, // G_FLOG10 = 118
    0, // G_FNEG = 119
    0, // G_FPEXT = 120
    0, // G_FPTRUNC = 121
    0, // G_FPTOSI = 122
    0, // G_FPTOUI = 123
    0, // G_SITOFP = 124
    0, // G_UITOFP = 125
    0, // G_FABS = 126
    0, // G_GEP = 127
    0, // G_PTR_MASK = 128
    0, // G_BR = 129
    0, // G_INSERT_VECTOR_ELT = 130
    0, // G_EXTRACT_VECTOR_ELT = 131
    0, // G_SHUFFLE_VECTOR = 132
    0, // G_CTTZ = 133
    0, // G_CTTZ_ZERO_UNDEF = 134
    0, // G_CTLZ = 135
    0, // G_CTLZ_ZERO_UNDEF = 136
    0, // G_CTPOP = 137
    0, // G_BSWAP = 138
    0, // G_FCEIL = 139
    0, // G_ADDRSPACE_CAST = 140
    0, // G_BLOCK_ADDR = 141
    0, // ADJCALLSTACKDOWN = 142
    0, // ADJCALLSTACKUP = 143
    0, // MEMCPY = 144
    0, // Select = 145
    0, // Select_32 = 146
    0, // Select_32_64 = 147
    0, // Select_64_32 = 148
    0, // Select_Ri = 149
    0, // Select_Ri_32 = 150
    0, // Select_Ri_32_64 = 151
    0, // Select_Ri_64_32 = 152
    0, // ADD_ri = 153
    0, // ADD_ri_32 = 154
    0, // ADD_rr = 155
    0, // ADD_rr_32 = 156
    0, // AND_ri = 157
    0, // AND_ri_32 = 158
    0, // AND_rr = 159
    0, // AND_rr_32 = 160
    0, // BE16 = 161
    0, // BE32 = 162
    0, // BE64 = 163
    0, // DIV_ri = 164
    0, // DIV_ri_32 = 165
    0, // DIV_rr = 166
    0, // DIV_rr_32 = 167
    0, // FI_ri = 168
    0, // JAL = 169
    0, // JALX = 170
    0, // JEQ_ri = 171
    0, // JEQ_rr = 172
    0, // JMP = 173
    0, // JNE_ri = 174
    0, // JNE_rr = 175
    0, // JSGE_ri = 176
    0, // JSGE_rr = 177
    0, // JSGT_ri = 178
    0, // JSGT_rr = 179
    0, // JSLE_ri = 180
    0, // JSLE_rr = 181
    0, // JSLT_ri = 182
    0, // JSLT_rr = 183
    0, // JUGE_ri = 184
    0, // JUGE_rr = 185
    0, // JUGT_ri = 186
    0, // JUGT_rr = 187
    0, // JULE_ri = 188
    0, // JULE_rr = 189
    0, // JULT_ri = 190
    0, // JULT_rr = 191
    0, // LDB = 192
    0, // LDB32 = 193
    0, // LDD = 194
    0, // LDH = 195
    0, // LDH32 = 196
    0, // LDW = 197
    0, // LDW32 = 198
    0, // LD_ABS_B = 199
    0, // LD_ABS_H = 200
    0, // LD_ABS_W = 201
    0, // LD_IND_B = 202
    0, // LD_IND_H = 203
    0, // LD_IND_W = 204
    0, // LD_imm64 = 205
    0, // LD_pseudo = 206
    0, // LE16 = 207
    0, // LE32 = 208
    0, // LE64 = 209
    0, // MOV_32_64 = 210
    0, // MOV_ri = 211
    0, // MOV_ri_32 = 212
    0, // MOV_rr = 213
    0, // MOV_rr_32 = 214
    0, // MUL_ri = 215
    0, // MUL_ri_32 = 216
    0, // MUL_rr = 217
    0, // MUL_rr_32 = 218
    0, // NEG_32 = 219
    0, // NEG_64 = 220
    0, // NOP = 221
    0, // OR_ri = 222
    0, // OR_ri_32 = 223
    0, // OR_rr = 224
    0, // OR_rr_32 = 225
    0, // RET = 226
    0, // SLL_ri = 227
    0, // SLL_ri_32 = 228
    0, // SLL_rr = 229
    0, // SLL_rr_32 = 230
    0, // SRA_ri = 231
    0, // SRA_ri_32 = 232
    0, // SRA_rr = 233
    0, // SRA_rr_32 = 234
    0, // SRL_ri = 235
    0, // SRL_ri_32 = 236
    0, // SRL_rr = 237
    0, // SRL_rr_32 = 238
    0, // STB = 239
    0, // STB32 = 240
    0, // STD = 241
    0, // STH = 242
    0, // STH32 = 243
    0, // STW = 244
    0, // STW32 = 245
    0, // SUB_ri = 246
    0, // SUB_ri_32 = 247
    0, // SUB_rr = 248
    0, // SUB_rr_32 = 249
    0, // XADD32 = 250
    0, // XADD64 = 251
    0, // XOR_ri = 252
    0, // XOR_ri_32 = 253
    0, // XOR_rr = 254
    0, // XOR_rr_32 = 255
  };

  assert(Inst.getOpcode() < 256);
  uint64_t MissingFeatures =
      (AvailableFeatures & RequiredFeatures[Inst.getOpcode()]) ^
      RequiredFeatures[Inst.getOpcode()];
  if (MissingFeatures) {
    std::ostringstream Msg;
    Msg << "Attempting to emit " << MCII.getName(Inst.getOpcode()).str()
        << " instruction but the ";
    for (unsigned i = 0; i < 8 * sizeof(MissingFeatures); ++i)
      if (MissingFeatures & (1ULL << i))
        Msg << SubtargetFeatureNames[i] << " ";
    Msg << "predicate(s) are not met";
    report_fatal_error(Msg.str());
  }
#else
// Silence unused variable warning on targets that don't use MCII for other purposes (e.g. BPF).
(void)MCII;
#endif // NDEBUG
}
#endif

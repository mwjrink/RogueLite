/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t MSP430MCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(20608),	// ADD16mc
    UINT64_C(20656),	// ADD16mi
    UINT64_C(20624),	// ADD16mm
    UINT64_C(20640),	// ADD16mn
    UINT64_C(20656),	// ADD16mp
    UINT64_C(20608),	// ADD16mr
    UINT64_C(20480),	// ADD16rc
    UINT64_C(20528),	// ADD16ri
    UINT64_C(20496),	// ADD16rm
    UINT64_C(20512),	// ADD16rn
    UINT64_C(20528),	// ADD16rp
    UINT64_C(20480),	// ADD16rr
    UINT64_C(20672),	// ADD8mc
    UINT64_C(20720),	// ADD8mi
    UINT64_C(20688),	// ADD8mm
    UINT64_C(20704),	// ADD8mn
    UINT64_C(20720),	// ADD8mp
    UINT64_C(20672),	// ADD8mr
    UINT64_C(20544),	// ADD8rc
    UINT64_C(20592),	// ADD8ri
    UINT64_C(20560),	// ADD8rm
    UINT64_C(20576),	// ADD8rn
    UINT64_C(20592),	// ADD8rp
    UINT64_C(20544),	// ADD8rr
    UINT64_C(24704),	// ADDC16mc
    UINT64_C(24752),	// ADDC16mi
    UINT64_C(24720),	// ADDC16mm
    UINT64_C(24736),	// ADDC16mn
    UINT64_C(24752),	// ADDC16mp
    UINT64_C(24704),	// ADDC16mr
    UINT64_C(24576),	// ADDC16rc
    UINT64_C(24624),	// ADDC16ri
    UINT64_C(24592),	// ADDC16rm
    UINT64_C(24608),	// ADDC16rn
    UINT64_C(24624),	// ADDC16rp
    UINT64_C(24576),	// ADDC16rr
    UINT64_C(24768),	// ADDC8mc
    UINT64_C(24816),	// ADDC8mi
    UINT64_C(24784),	// ADDC8mm
    UINT64_C(24800),	// ADDC8mn
    UINT64_C(24816),	// ADDC8mp
    UINT64_C(24768),	// ADDC8mr
    UINT64_C(24640),	// ADDC8rc
    UINT64_C(24688),	// ADDC8ri
    UINT64_C(24656),	// ADDC8rm
    UINT64_C(24672),	// ADDC8rn
    UINT64_C(24688),	// ADDC8rp
    UINT64_C(24640),	// ADDC8rr
    UINT64_C(0),	// ADDframe
    UINT64_C(0),	// ADJCALLSTACKDOWN
    UINT64_C(0),	// ADJCALLSTACKUP
    UINT64_C(61568),	// AND16mc
    UINT64_C(61616),	// AND16mi
    UINT64_C(61584),	// AND16mm
    UINT64_C(61600),	// AND16mn
    UINT64_C(61616),	// AND16mp
    UINT64_C(61568),	// AND16mr
    UINT64_C(61440),	// AND16rc
    UINT64_C(61488),	// AND16ri
    UINT64_C(61456),	// AND16rm
    UINT64_C(61472),	// AND16rn
    UINT64_C(61488),	// AND16rp
    UINT64_C(61440),	// AND16rr
    UINT64_C(61632),	// AND8mc
    UINT64_C(61680),	// AND8mi
    UINT64_C(61648),	// AND8mm
    UINT64_C(61664),	// AND8mn
    UINT64_C(61680),	// AND8mp
    UINT64_C(61632),	// AND8mr
    UINT64_C(61504),	// AND8rc
    UINT64_C(61552),	// AND8ri
    UINT64_C(61520),	// AND8rm
    UINT64_C(61536),	// AND8rn
    UINT64_C(61552),	// AND8rp
    UINT64_C(61504),	// AND8rr
    UINT64_C(49280),	// BIC16mc
    UINT64_C(49328),	// BIC16mi
    UINT64_C(49296),	// BIC16mm
    UINT64_C(49312),	// BIC16mn
    UINT64_C(49328),	// BIC16mp
    UINT64_C(49280),	// BIC16mr
    UINT64_C(49152),	// BIC16rc
    UINT64_C(49200),	// BIC16ri
    UINT64_C(49168),	// BIC16rm
    UINT64_C(49184),	// BIC16rn
    UINT64_C(49200),	// BIC16rp
    UINT64_C(49152),	// BIC16rr
    UINT64_C(49344),	// BIC8mc
    UINT64_C(49392),	// BIC8mi
    UINT64_C(49360),	// BIC8mm
    UINT64_C(49376),	// BIC8mn
    UINT64_C(49392),	// BIC8mp
    UINT64_C(49344),	// BIC8mr
    UINT64_C(49216),	// BIC8rc
    UINT64_C(49264),	// BIC8ri
    UINT64_C(49232),	// BIC8rm
    UINT64_C(49248),	// BIC8rn
    UINT64_C(49264),	// BIC8rp
    UINT64_C(49216),	// BIC8rr
    UINT64_C(53376),	// BIS16mc
    UINT64_C(53424),	// BIS16mi
    UINT64_C(53392),	// BIS16mm
    UINT64_C(53408),	// BIS16mn
    UINT64_C(53424),	// BIS16mp
    UINT64_C(53376),	// BIS16mr
    UINT64_C(53248),	// BIS16rc
    UINT64_C(53296),	// BIS16ri
    UINT64_C(53264),	// BIS16rm
    UINT64_C(53280),	// BIS16rn
    UINT64_C(53296),	// BIS16rp
    UINT64_C(53248),	// BIS16rr
    UINT64_C(53440),	// BIS8mc
    UINT64_C(53488),	// BIS8mi
    UINT64_C(53456),	// BIS8mm
    UINT64_C(53472),	// BIS8mn
    UINT64_C(53488),	// BIS8mp
    UINT64_C(53440),	// BIS8mr
    UINT64_C(53312),	// BIS8rc
    UINT64_C(53360),	// BIS8ri
    UINT64_C(53328),	// BIS8rm
    UINT64_C(53344),	// BIS8rn
    UINT64_C(53360),	// BIS8rp
    UINT64_C(53312),	// BIS8rr
    UINT64_C(45184),	// BIT16mc
    UINT64_C(45232),	// BIT16mi
    UINT64_C(45200),	// BIT16mm
    UINT64_C(45216),	// BIT16mn
    UINT64_C(45232),	// BIT16mp
    UINT64_C(45184),	// BIT16mr
    UINT64_C(45056),	// BIT16rc
    UINT64_C(45104),	// BIT16ri
    UINT64_C(45072),	// BIT16rm
    UINT64_C(45088),	// BIT16rn
    UINT64_C(45104),	// BIT16rp
    UINT64_C(45056),	// BIT16rr
    UINT64_C(45248),	// BIT8mc
    UINT64_C(45296),	// BIT8mi
    UINT64_C(45264),	// BIT8mm
    UINT64_C(45280),	// BIT8mn
    UINT64_C(45296),	// BIT8mp
    UINT64_C(45248),	// BIT8mr
    UINT64_C(45120),	// BIT8rc
    UINT64_C(45168),	// BIT8ri
    UINT64_C(45136),	// BIT8rm
    UINT64_C(45152),	// BIT8rn
    UINT64_C(45168),	// BIT8rp
    UINT64_C(45120),	// BIT8rr
    UINT64_C(16432),	// Bi
    UINT64_C(16400),	// Bm
    UINT64_C(16384),	// Br
    UINT64_C(4784),	// CALLi
    UINT64_C(4752),	// CALLm
    UINT64_C(4768),	// CALLn
    UINT64_C(4784),	// CALLp
    UINT64_C(4736),	// CALLr
    UINT64_C(36992),	// CMP16mc
    UINT64_C(37040),	// CMP16mi
    UINT64_C(37008),	// CMP16mm
    UINT64_C(37024),	// CMP16mn
    UINT64_C(37040),	// CMP16mp
    UINT64_C(36992),	// CMP16mr
    UINT64_C(36864),	// CMP16rc
    UINT64_C(36912),	// CMP16ri
    UINT64_C(36880),	// CMP16rm
    UINT64_C(36896),	// CMP16rn
    UINT64_C(36912),	// CMP16rp
    UINT64_C(36864),	// CMP16rr
    UINT64_C(37056),	// CMP8mc
    UINT64_C(37104),	// CMP8mi
    UINT64_C(37072),	// CMP8mm
    UINT64_C(37088),	// CMP8mn
    UINT64_C(37104),	// CMP8mp
    UINT64_C(37056),	// CMP8mr
    UINT64_C(36928),	// CMP8rc
    UINT64_C(36976),	// CMP8ri
    UINT64_C(36944),	// CMP8rm
    UINT64_C(36960),	// CMP8rn
    UINT64_C(36976),	// CMP8rp
    UINT64_C(36928),	// CMP8rr
    UINT64_C(41088),	// DADD16mc
    UINT64_C(41136),	// DADD16mi
    UINT64_C(41104),	// DADD16mm
    UINT64_C(41120),	// DADD16mn
    UINT64_C(41136),	// DADD16mp
    UINT64_C(41088),	// DADD16mr
    UINT64_C(40960),	// DADD16rc
    UINT64_C(41008),	// DADD16ri
    UINT64_C(40976),	// DADD16rm
    UINT64_C(40992),	// DADD16rn
    UINT64_C(41008),	// DADD16rp
    UINT64_C(40960),	// DADD16rr
    UINT64_C(41152),	// DADD8mc
    UINT64_C(41200),	// DADD8mi
    UINT64_C(41168),	// DADD8mm
    UINT64_C(41184),	// DADD8mn
    UINT64_C(41200),	// DADD8mp
    UINT64_C(41152),	// DADD8mr
    UINT64_C(41024),	// DADD8rc
    UINT64_C(41072),	// DADD8ri
    UINT64_C(41040),	// DADD8rm
    UINT64_C(41056),	// DADD8rn
    UINT64_C(41072),	// DADD8rp
    UINT64_C(41024),	// DADD8rr
    UINT64_C(8192),	// JCC
    UINT64_C(15360),	// JMP
    UINT64_C(16512),	// MOV16mc
    UINT64_C(16560),	// MOV16mi
    UINT64_C(16528),	// MOV16mm
    UINT64_C(16544),	// MOV16mn
    UINT64_C(16512),	// MOV16mr
    UINT64_C(16384),	// MOV16rc
    UINT64_C(16432),	// MOV16ri
    UINT64_C(16400),	// MOV16rm
    UINT64_C(16416),	// MOV16rn
    UINT64_C(16432),	// MOV16rp
    UINT64_C(16384),	// MOV16rr
    UINT64_C(16576),	// MOV8mc
    UINT64_C(16624),	// MOV8mi
    UINT64_C(16592),	// MOV8mm
    UINT64_C(16608),	// MOV8mn
    UINT64_C(16576),	// MOV8mr
    UINT64_C(16448),	// MOV8rc
    UINT64_C(16496),	// MOV8ri
    UINT64_C(16464),	// MOV8rm
    UINT64_C(16480),	// MOV8rn
    UINT64_C(16496),	// MOV8rp
    UINT64_C(16448),	// MOV8rr
    UINT64_C(16464),	// MOVZX16rm8
    UINT64_C(16448),	// MOVZX16rr8
    UINT64_C(16688),	// POP16r
    UINT64_C(4608),	// PUSH16c
    UINT64_C(4656),	// PUSH16i
    UINT64_C(4608),	// PUSH16r
    UINT64_C(4672),	// PUSH8r
    UINT64_C(16688),	// RET
    UINT64_C(4864),	// RETI
    UINT64_C(4368),	// RRA16m
    UINT64_C(4384),	// RRA16n
    UINT64_C(4400),	// RRA16p
    UINT64_C(4352),	// RRA16r
    UINT64_C(4432),	// RRA8m
    UINT64_C(4448),	// RRA8n
    UINT64_C(4464),	// RRA8p
    UINT64_C(4416),	// RRA8r
    UINT64_C(4112),	// RRC16m
    UINT64_C(4128),	// RRC16n
    UINT64_C(4144),	// RRC16p
    UINT64_C(4096),	// RRC16r
    UINT64_C(4176),	// RRC8m
    UINT64_C(4192),	// RRC8n
    UINT64_C(4208),	// RRC8p
    UINT64_C(4160),	// RRC8r
    UINT64_C(0),	// Rrcl16
    UINT64_C(0),	// Rrcl8
    UINT64_C(4496),	// SEXT16m
    UINT64_C(4512),	// SEXT16n
    UINT64_C(4528),	// SEXT16p
    UINT64_C(4480),	// SEXT16r
    UINT64_C(32896),	// SUB16mc
    UINT64_C(32944),	// SUB16mi
    UINT64_C(32912),	// SUB16mm
    UINT64_C(32928),	// SUB16mn
    UINT64_C(32944),	// SUB16mp
    UINT64_C(32896),	// SUB16mr
    UINT64_C(32768),	// SUB16rc
    UINT64_C(32816),	// SUB16ri
    UINT64_C(32784),	// SUB16rm
    UINT64_C(32800),	// SUB16rn
    UINT64_C(32816),	// SUB16rp
    UINT64_C(32768),	// SUB16rr
    UINT64_C(32960),	// SUB8mc
    UINT64_C(33008),	// SUB8mi
    UINT64_C(32976),	// SUB8mm
    UINT64_C(32992),	// SUB8mn
    UINT64_C(33008),	// SUB8mp
    UINT64_C(32960),	// SUB8mr
    UINT64_C(32832),	// SUB8rc
    UINT64_C(32880),	// SUB8ri
    UINT64_C(32848),	// SUB8rm
    UINT64_C(32864),	// SUB8rn
    UINT64_C(32880),	// SUB8rp
    UINT64_C(32832),	// SUB8rr
    UINT64_C(28800),	// SUBC16mc
    UINT64_C(28848),	// SUBC16mi
    UINT64_C(28816),	// SUBC16mm
    UINT64_C(28832),	// SUBC16mn
    UINT64_C(28848),	// SUBC16mp
    UINT64_C(28800),	// SUBC16mr
    UINT64_C(28672),	// SUBC16rc
    UINT64_C(28720),	// SUBC16ri
    UINT64_C(28688),	// SUBC16rm
    UINT64_C(28704),	// SUBC16rn
    UINT64_C(28720),	// SUBC16rp
    UINT64_C(28672),	// SUBC16rr
    UINT64_C(28864),	// SUBC8mc
    UINT64_C(28912),	// SUBC8mi
    UINT64_C(28880),	// SUBC8mm
    UINT64_C(28896),	// SUBC8mn
    UINT64_C(28912),	// SUBC8mp
    UINT64_C(28864),	// SUBC8mr
    UINT64_C(28736),	// SUBC8rc
    UINT64_C(28784),	// SUBC8ri
    UINT64_C(28752),	// SUBC8rm
    UINT64_C(28768),	// SUBC8rn
    UINT64_C(28784),	// SUBC8rp
    UINT64_C(28736),	// SUBC8rr
    UINT64_C(4240),	// SWPB16m
    UINT64_C(4256),	// SWPB16n
    UINT64_C(4272),	// SWPB16p
    UINT64_C(4224),	// SWPB16r
    UINT64_C(0),	// Select16
    UINT64_C(0),	// Select8
    UINT64_C(0),	// Shl16
    UINT64_C(0),	// Shl8
    UINT64_C(0),	// Sra16
    UINT64_C(0),	// Sra8
    UINT64_C(0),	// Srl16
    UINT64_C(0),	// Srl8
    UINT64_C(57472),	// XOR16mc
    UINT64_C(57520),	// XOR16mi
    UINT64_C(57488),	// XOR16mm
    UINT64_C(57504),	// XOR16mn
    UINT64_C(57520),	// XOR16mp
    UINT64_C(57472),	// XOR16mr
    UINT64_C(57344),	// XOR16rc
    UINT64_C(57392),	// XOR16ri
    UINT64_C(57360),	// XOR16rm
    UINT64_C(57376),	// XOR16rn
    UINT64_C(57392),	// XOR16rp
    UINT64_C(57344),	// XOR16rr
    UINT64_C(57536),	// XOR8mc
    UINT64_C(57584),	// XOR8mi
    UINT64_C(57552),	// XOR8mm
    UINT64_C(57568),	// XOR8mn
    UINT64_C(57584),	// XOR8mp
    UINT64_C(57536),	// XOR8mr
    UINT64_C(57408),	// XOR8rc
    UINT64_C(57456),	// XOR8ri
    UINT64_C(57424),	// XOR8rm
    UINT64_C(57440),	// XOR8rn
    UINT64_C(57456),	// XOR8rp
    UINT64_C(57408),	// XOR8rr
    UINT64_C(16448),	// ZEXT16r
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case MSP430::ADDframe:
    case MSP430::ADJCALLSTACKDOWN:
    case MSP430::ADJCALLSTACKUP:
    case MSP430::RET:
    case MSP430::RETI:
    case MSP430::Rrcl16:
    case MSP430::Rrcl8:
    case MSP430::Select16:
    case MSP430::Select8:
    case MSP430::Shl16:
    case MSP430::Shl8:
    case MSP430::Sra16:
    case MSP430::Sra8:
    case MSP430::Srl16:
    case MSP430::Srl8: {
      break;
    }
    case MSP430::JCC: {
      // op: cond
      op = getCCOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(7)) << 10;
      // op: dst
      op = getPCRelImmOpValue(MI, 0, Fixups, STI);
      Value |= op & UINT64_C(1023);
      break;
    }
    case MSP430::JMP: {
      // op: dst
      op = getPCRelImmOpValue(MI, 0, Fixups, STI);
      Value |= op & UINT64_C(1023);
      break;
    }
    case MSP430::PUSH16c: {
      // op: imm
      op = getCGImmOpValue(MI, 0, Fixups, STI);
      Value |= op & UINT64_C(63);
      break;
    }
    case MSP430::BIT16rc:
    case MSP430::BIT8rc:
    case MSP430::CMP16rc:
    case MSP430::CMP8rc:
    case MSP430::MOV16rc:
    case MSP430::MOV8rc: {
      // op: imm
      op = getCGImmOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= op & UINT64_C(48);
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16mc:
    case MSP430::ADD8mc:
    case MSP430::ADDC16mc:
    case MSP430::ADDC8mc:
    case MSP430::AND16mc:
    case MSP430::AND8mc:
    case MSP430::BIC16mc:
    case MSP430::BIC8mc:
    case MSP430::BIS16mc:
    case MSP430::BIS8mc:
    case MSP430::BIT16mc:
    case MSP430::BIT8mc:
    case MSP430::CMP16mc:
    case MSP430::CMP8mc:
    case MSP430::DADD16mc:
    case MSP430::DADD8mc:
    case MSP430::MOV16mc:
    case MSP430::MOV8mc:
    case MSP430::SUB16mc:
    case MSP430::SUB8mc:
    case MSP430::SUBC16mc:
    case MSP430::SUBC8mc:
    case MSP430::XOR16mc:
    case MSP430::XOR8mc: {
      // op: imm
      op = getCGImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= op & UINT64_C(48);
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16rc:
    case MSP430::ADD8rc:
    case MSP430::ADDC16rc:
    case MSP430::ADDC8rc:
    case MSP430::AND16rc:
    case MSP430::AND8rc:
    case MSP430::BIC16rc:
    case MSP430::BIC8rc:
    case MSP430::BIS16rc:
    case MSP430::BIS8rc:
    case MSP430::DADD16rc:
    case MSP430::DADD8rc:
    case MSP430::SUB16rc:
    case MSP430::SUB8rc:
    case MSP430::SUBC16rc:
    case MSP430::SUBC8rc:
    case MSP430::XOR16rc:
    case MSP430::XOR8rc: {
      // op: imm
      op = getCGImmOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      Value |= op & UINT64_C(48);
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::Bi:
    case MSP430::CALLi:
    case MSP430::PUSH16i: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 16;
      break;
    }
    case MSP430::ADD16mi:
    case MSP430::ADD8mi:
    case MSP430::ADDC16mi:
    case MSP430::ADDC8mi:
    case MSP430::AND16mi:
    case MSP430::AND8mi:
    case MSP430::BIC16mi:
    case MSP430::BIC8mi:
    case MSP430::BIS16mi:
    case MSP430::BIS8mi:
    case MSP430::BIT16mi:
    case MSP430::BIT8mi:
    case MSP430::CMP16mi:
    case MSP430::CMP8mi:
    case MSP430::DADD16mi:
    case MSP430::DADD8mi:
    case MSP430::MOV16mi:
    case MSP430::MOV8mi:
    case MSP430::SUB16mi:
    case MSP430::SUB8mi:
    case MSP430::SUBC16mi:
    case MSP430::SUBC8mi:
    case MSP430::XOR16mi:
    case MSP430::XOR8mi: {
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 16;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 28;
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::POP16r: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::BIT16ri:
    case MSP430::BIT8ri:
    case MSP430::CMP16ri:
    case MSP430::CMP8ri:
    case MSP430::MOV16ri:
    case MSP430::MOV8ri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 16;
      break;
    }
    case MSP430::ADD16ri:
    case MSP430::ADD8ri:
    case MSP430::ADDC16ri:
    case MSP430::ADDC8ri:
    case MSP430::AND16ri:
    case MSP430::AND8ri:
    case MSP430::BIC16ri:
    case MSP430::BIC8ri:
    case MSP430::BIS16ri:
    case MSP430::BIS8ri:
    case MSP430::DADD16ri:
    case MSP430::DADD8ri:
    case MSP430::SUB16ri:
    case MSP430::SUB8ri:
    case MSP430::SUBC16ri:
    case MSP430::SUBC8ri:
    case MSP430::XOR16ri:
    case MSP430::XOR8ri: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: imm
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(65535)) << 16;
      break;
    }
    case MSP430::BIT16rm:
    case MSP430::BIT8rm:
    case MSP430::CMP16rm:
    case MSP430::CMP8rm:
    case MSP430::MOV16rm:
    case MSP430::MOV8rm:
    case MSP430::MOVZX16rm8: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: src
      op = getMemOpValue(MI, 1, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::ADD16rm:
    case MSP430::ADD8rm:
    case MSP430::ADDC16rm:
    case MSP430::ADDC8rm:
    case MSP430::AND16rm:
    case MSP430::AND8rm:
    case MSP430::BIC16rm:
    case MSP430::BIC8rm:
    case MSP430::BIS16rm:
    case MSP430::BIS8rm:
    case MSP430::DADD16rm:
    case MSP430::DADD8rm:
    case MSP430::SUB16rm:
    case MSP430::SUB8rm:
    case MSP430::SUBC16rm:
    case MSP430::SUBC8rm:
    case MSP430::XOR16rm:
    case MSP430::XOR8rm: {
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: src
      op = getMemOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::Br: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::CALLn:
    case MSP430::CALLp:
    case MSP430::CALLr:
    case MSP430::PUSH16r:
    case MSP430::PUSH8r:
    case MSP430::RRA16n:
    case MSP430::RRA16p:
    case MSP430::RRA8n:
    case MSP430::RRA8p:
    case MSP430::RRC16n:
    case MSP430::RRC16p:
    case MSP430::RRC8n:
    case MSP430::RRC8p:
    case MSP430::SEXT16n:
    case MSP430::SEXT16p:
    case MSP430::SWPB16n:
    case MSP430::SWPB16p: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::BIT16rn:
    case MSP430::BIT16rp:
    case MSP430::BIT16rr:
    case MSP430::BIT8rn:
    case MSP430::BIT8rp:
    case MSP430::BIT8rr:
    case MSP430::CMP16rn:
    case MSP430::CMP16rp:
    case MSP430::CMP16rr:
    case MSP430::CMP8rn:
    case MSP430::CMP8rp:
    case MSP430::CMP8rr:
    case MSP430::MOV16rn:
    case MSP430::MOV16rr:
    case MSP430::MOV8rn:
    case MSP430::MOV8rr:
    case MSP430::MOVZX16rr8:
    case MSP430::ZEXT16r: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::RRA16r:
    case MSP430::RRA8r:
    case MSP430::RRC16r:
    case MSP430::RRC8r:
    case MSP430::SEXT16r:
    case MSP430::SWPB16r: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16mn:
    case MSP430::ADD16mp:
    case MSP430::ADD16mr:
    case MSP430::ADD8mn:
    case MSP430::ADD8mp:
    case MSP430::ADD8mr:
    case MSP430::ADDC16mn:
    case MSP430::ADDC16mp:
    case MSP430::ADDC16mr:
    case MSP430::ADDC8mn:
    case MSP430::ADDC8mp:
    case MSP430::ADDC8mr:
    case MSP430::AND16mn:
    case MSP430::AND16mp:
    case MSP430::AND16mr:
    case MSP430::AND8mn:
    case MSP430::AND8mp:
    case MSP430::AND8mr:
    case MSP430::BIC16mn:
    case MSP430::BIC16mp:
    case MSP430::BIC16mr:
    case MSP430::BIC8mn:
    case MSP430::BIC8mp:
    case MSP430::BIC8mr:
    case MSP430::BIS16mn:
    case MSP430::BIS16mp:
    case MSP430::BIS16mr:
    case MSP430::BIS8mn:
    case MSP430::BIS8mp:
    case MSP430::BIS8mr:
    case MSP430::BIT16mn:
    case MSP430::BIT16mp:
    case MSP430::BIT16mr:
    case MSP430::BIT8mn:
    case MSP430::BIT8mp:
    case MSP430::BIT8mr:
    case MSP430::CMP16mn:
    case MSP430::CMP16mp:
    case MSP430::CMP16mr:
    case MSP430::CMP8mn:
    case MSP430::CMP8mp:
    case MSP430::CMP8mr:
    case MSP430::DADD16mn:
    case MSP430::DADD16mp:
    case MSP430::DADD16mr:
    case MSP430::DADD8mn:
    case MSP430::DADD8mp:
    case MSP430::DADD8mr:
    case MSP430::MOV16mn:
    case MSP430::MOV16mr:
    case MSP430::MOV8mn:
    case MSP430::MOV8mr:
    case MSP430::SUB16mn:
    case MSP430::SUB16mp:
    case MSP430::SUB16mr:
    case MSP430::SUB8mn:
    case MSP430::SUB8mp:
    case MSP430::SUB8mr:
    case MSP430::SUBC16mn:
    case MSP430::SUBC16mp:
    case MSP430::SUBC16mr:
    case MSP430::SUBC8mn:
    case MSP430::SUBC8mp:
    case MSP430::SUBC8mr:
    case MSP430::XOR16mn:
    case MSP430::XOR16mp:
    case MSP430::XOR16mr:
    case MSP430::XOR8mn:
    case MSP430::XOR8mp:
    case MSP430::XOR8mr: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16rn:
    case MSP430::ADD16rr:
    case MSP430::ADD8rn:
    case MSP430::ADD8rr:
    case MSP430::ADDC16rn:
    case MSP430::ADDC16rr:
    case MSP430::ADDC8rn:
    case MSP430::ADDC8rr:
    case MSP430::AND16rn:
    case MSP430::AND16rr:
    case MSP430::AND8rn:
    case MSP430::AND8rr:
    case MSP430::BIC16rn:
    case MSP430::BIC16rr:
    case MSP430::BIC8rn:
    case MSP430::BIC8rr:
    case MSP430::BIS16rn:
    case MSP430::BIS16rr:
    case MSP430::BIS8rn:
    case MSP430::BIS8rr:
    case MSP430::DADD16rn:
    case MSP430::DADD16rr:
    case MSP430::DADD8rn:
    case MSP430::DADD8rr:
    case MSP430::MOV16rp:
    case MSP430::MOV8rp:
    case MSP430::SUB16rn:
    case MSP430::SUB16rr:
    case MSP430::SUB8rn:
    case MSP430::SUB8rr:
    case MSP430::SUBC16rn:
    case MSP430::SUBC16rr:
    case MSP430::SUBC8rn:
    case MSP430::SUBC8rr:
    case MSP430::XOR16rn:
    case MSP430::XOR16rr:
    case MSP430::XOR8rn:
    case MSP430::XOR8rr: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16rp:
    case MSP430::ADD8rp:
    case MSP430::ADDC16rp:
    case MSP430::ADDC8rp:
    case MSP430::AND16rp:
    case MSP430::AND8rp:
    case MSP430::BIC16rp:
    case MSP430::BIC8rp:
    case MSP430::BIS16rp:
    case MSP430::BIS8rp:
    case MSP430::DADD16rp:
    case MSP430::DADD8rp:
    case MSP430::SUB16rp:
    case MSP430::SUB8rp:
    case MSP430::SUBC16rp:
    case MSP430::SUBC8rp:
    case MSP430::XOR16rp:
    case MSP430::XOR8rp: {
      // op: rs
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 8;
      // op: rd
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::Bm: {
      // op: src
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      break;
    }
    case MSP430::CALLm:
    case MSP430::RRA16m:
    case MSP430::RRA8m:
    case MSP430::RRC16m:
    case MSP430::RRC8m:
    case MSP430::SEXT16m:
    case MSP430::SWPB16m: {
      // op: src
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= op & UINT64_C(15);
      break;
    }
    case MSP430::ADD16mm:
    case MSP430::ADD8mm:
    case MSP430::ADDC16mm:
    case MSP430::ADDC8mm:
    case MSP430::AND16mm:
    case MSP430::AND8mm:
    case MSP430::BIC16mm:
    case MSP430::BIC8mm:
    case MSP430::BIS16mm:
    case MSP430::BIS8mm:
    case MSP430::BIT16mm:
    case MSP430::BIT8mm:
    case MSP430::CMP16mm:
    case MSP430::CMP8mm:
    case MSP430::DADD16mm:
    case MSP430::DADD8mm:
    case MSP430::MOV16mm:
    case MSP430::MOV8mm:
    case MSP430::SUB16mm:
    case MSP430::SUB8mm:
    case MSP430::SUBC16mm:
    case MSP430::SUBC8mm:
    case MSP430::XOR16mm:
    case MSP430::XOR8mm: {
      // op: src
      op = getMemOpValue(MI, 2, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 12;
      Value |= (op & UINT64_C(15)) << 8;
      // op: dst
      op = getMemOpValue(MI, 0, Fixups, STI);
      Value |= (op & UINT64_C(1048560)) << 28;
      Value |= op & UINT64_C(15);
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
uint64_t MSP430MCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void MSP430MCCodeEmitter::verifyInstructionPredicates(
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
    0, // ADD16mc = 142
    0, // ADD16mi = 143
    0, // ADD16mm = 144
    0, // ADD16mn = 145
    0, // ADD16mp = 146
    0, // ADD16mr = 147
    0, // ADD16rc = 148
    0, // ADD16ri = 149
    0, // ADD16rm = 150
    0, // ADD16rn = 151
    0, // ADD16rp = 152
    0, // ADD16rr = 153
    0, // ADD8mc = 154
    0, // ADD8mi = 155
    0, // ADD8mm = 156
    0, // ADD8mn = 157
    0, // ADD8mp = 158
    0, // ADD8mr = 159
    0, // ADD8rc = 160
    0, // ADD8ri = 161
    0, // ADD8rm = 162
    0, // ADD8rn = 163
    0, // ADD8rp = 164
    0, // ADD8rr = 165
    0, // ADDC16mc = 166
    0, // ADDC16mi = 167
    0, // ADDC16mm = 168
    0, // ADDC16mn = 169
    0, // ADDC16mp = 170
    0, // ADDC16mr = 171
    0, // ADDC16rc = 172
    0, // ADDC16ri = 173
    0, // ADDC16rm = 174
    0, // ADDC16rn = 175
    0, // ADDC16rp = 176
    0, // ADDC16rr = 177
    0, // ADDC8mc = 178
    0, // ADDC8mi = 179
    0, // ADDC8mm = 180
    0, // ADDC8mn = 181
    0, // ADDC8mp = 182
    0, // ADDC8mr = 183
    0, // ADDC8rc = 184
    0, // ADDC8ri = 185
    0, // ADDC8rm = 186
    0, // ADDC8rn = 187
    0, // ADDC8rp = 188
    0, // ADDC8rr = 189
    0, // ADDframe = 190
    0, // ADJCALLSTACKDOWN = 191
    0, // ADJCALLSTACKUP = 192
    0, // AND16mc = 193
    0, // AND16mi = 194
    0, // AND16mm = 195
    0, // AND16mn = 196
    0, // AND16mp = 197
    0, // AND16mr = 198
    0, // AND16rc = 199
    0, // AND16ri = 200
    0, // AND16rm = 201
    0, // AND16rn = 202
    0, // AND16rp = 203
    0, // AND16rr = 204
    0, // AND8mc = 205
    0, // AND8mi = 206
    0, // AND8mm = 207
    0, // AND8mn = 208
    0, // AND8mp = 209
    0, // AND8mr = 210
    0, // AND8rc = 211
    0, // AND8ri = 212
    0, // AND8rm = 213
    0, // AND8rn = 214
    0, // AND8rp = 215
    0, // AND8rr = 216
    0, // BIC16mc = 217
    0, // BIC16mi = 218
    0, // BIC16mm = 219
    0, // BIC16mn = 220
    0, // BIC16mp = 221
    0, // BIC16mr = 222
    0, // BIC16rc = 223
    0, // BIC16ri = 224
    0, // BIC16rm = 225
    0, // BIC16rn = 226
    0, // BIC16rp = 227
    0, // BIC16rr = 228
    0, // BIC8mc = 229
    0, // BIC8mi = 230
    0, // BIC8mm = 231
    0, // BIC8mn = 232
    0, // BIC8mp = 233
    0, // BIC8mr = 234
    0, // BIC8rc = 235
    0, // BIC8ri = 236
    0, // BIC8rm = 237
    0, // BIC8rn = 238
    0, // BIC8rp = 239
    0, // BIC8rr = 240
    0, // BIS16mc = 241
    0, // BIS16mi = 242
    0, // BIS16mm = 243
    0, // BIS16mn = 244
    0, // BIS16mp = 245
    0, // BIS16mr = 246
    0, // BIS16rc = 247
    0, // BIS16ri = 248
    0, // BIS16rm = 249
    0, // BIS16rn = 250
    0, // BIS16rp = 251
    0, // BIS16rr = 252
    0, // BIS8mc = 253
    0, // BIS8mi = 254
    0, // BIS8mm = 255
    0, // BIS8mn = 256
    0, // BIS8mp = 257
    0, // BIS8mr = 258
    0, // BIS8rc = 259
    0, // BIS8ri = 260
    0, // BIS8rm = 261
    0, // BIS8rn = 262
    0, // BIS8rp = 263
    0, // BIS8rr = 264
    0, // BIT16mc = 265
    0, // BIT16mi = 266
    0, // BIT16mm = 267
    0, // BIT16mn = 268
    0, // BIT16mp = 269
    0, // BIT16mr = 270
    0, // BIT16rc = 271
    0, // BIT16ri = 272
    0, // BIT16rm = 273
    0, // BIT16rn = 274
    0, // BIT16rp = 275
    0, // BIT16rr = 276
    0, // BIT8mc = 277
    0, // BIT8mi = 278
    0, // BIT8mm = 279
    0, // BIT8mn = 280
    0, // BIT8mp = 281
    0, // BIT8mr = 282
    0, // BIT8rc = 283
    0, // BIT8ri = 284
    0, // BIT8rm = 285
    0, // BIT8rn = 286
    0, // BIT8rp = 287
    0, // BIT8rr = 288
    0, // Bi = 289
    0, // Bm = 290
    0, // Br = 291
    0, // CALLi = 292
    0, // CALLm = 293
    0, // CALLn = 294
    0, // CALLp = 295
    0, // CALLr = 296
    0, // CMP16mc = 297
    0, // CMP16mi = 298
    0, // CMP16mm = 299
    0, // CMP16mn = 300
    0, // CMP16mp = 301
    0, // CMP16mr = 302
    0, // CMP16rc = 303
    0, // CMP16ri = 304
    0, // CMP16rm = 305
    0, // CMP16rn = 306
    0, // CMP16rp = 307
    0, // CMP16rr = 308
    0, // CMP8mc = 309
    0, // CMP8mi = 310
    0, // CMP8mm = 311
    0, // CMP8mn = 312
    0, // CMP8mp = 313
    0, // CMP8mr = 314
    0, // CMP8rc = 315
    0, // CMP8ri = 316
    0, // CMP8rm = 317
    0, // CMP8rn = 318
    0, // CMP8rp = 319
    0, // CMP8rr = 320
    0, // DADD16mc = 321
    0, // DADD16mi = 322
    0, // DADD16mm = 323
    0, // DADD16mn = 324
    0, // DADD16mp = 325
    0, // DADD16mr = 326
    0, // DADD16rc = 327
    0, // DADD16ri = 328
    0, // DADD16rm = 329
    0, // DADD16rn = 330
    0, // DADD16rp = 331
    0, // DADD16rr = 332
    0, // DADD8mc = 333
    0, // DADD8mi = 334
    0, // DADD8mm = 335
    0, // DADD8mn = 336
    0, // DADD8mp = 337
    0, // DADD8mr = 338
    0, // DADD8rc = 339
    0, // DADD8ri = 340
    0, // DADD8rm = 341
    0, // DADD8rn = 342
    0, // DADD8rp = 343
    0, // DADD8rr = 344
    0, // JCC = 345
    0, // JMP = 346
    0, // MOV16mc = 347
    0, // MOV16mi = 348
    0, // MOV16mm = 349
    0, // MOV16mn = 350
    0, // MOV16mr = 351
    0, // MOV16rc = 352
    0, // MOV16ri = 353
    0, // MOV16rm = 354
    0, // MOV16rn = 355
    0, // MOV16rp = 356
    0, // MOV16rr = 357
    0, // MOV8mc = 358
    0, // MOV8mi = 359
    0, // MOV8mm = 360
    0, // MOV8mn = 361
    0, // MOV8mr = 362
    0, // MOV8rc = 363
    0, // MOV8ri = 364
    0, // MOV8rm = 365
    0, // MOV8rn = 366
    0, // MOV8rp = 367
    0, // MOV8rr = 368
    0, // MOVZX16rm8 = 369
    0, // MOVZX16rr8 = 370
    0, // POP16r = 371
    0, // PUSH16c = 372
    0, // PUSH16i = 373
    0, // PUSH16r = 374
    0, // PUSH8r = 375
    0, // RET = 376
    0, // RETI = 377
    0, // RRA16m = 378
    0, // RRA16n = 379
    0, // RRA16p = 380
    0, // RRA16r = 381
    0, // RRA8m = 382
    0, // RRA8n = 383
    0, // RRA8p = 384
    0, // RRA8r = 385
    0, // RRC16m = 386
    0, // RRC16n = 387
    0, // RRC16p = 388
    0, // RRC16r = 389
    0, // RRC8m = 390
    0, // RRC8n = 391
    0, // RRC8p = 392
    0, // RRC8r = 393
    0, // Rrcl16 = 394
    0, // Rrcl8 = 395
    0, // SEXT16m = 396
    0, // SEXT16n = 397
    0, // SEXT16p = 398
    0, // SEXT16r = 399
    0, // SUB16mc = 400
    0, // SUB16mi = 401
    0, // SUB16mm = 402
    0, // SUB16mn = 403
    0, // SUB16mp = 404
    0, // SUB16mr = 405
    0, // SUB16rc = 406
    0, // SUB16ri = 407
    0, // SUB16rm = 408
    0, // SUB16rn = 409
    0, // SUB16rp = 410
    0, // SUB16rr = 411
    0, // SUB8mc = 412
    0, // SUB8mi = 413
    0, // SUB8mm = 414
    0, // SUB8mn = 415
    0, // SUB8mp = 416
    0, // SUB8mr = 417
    0, // SUB8rc = 418
    0, // SUB8ri = 419
    0, // SUB8rm = 420
    0, // SUB8rn = 421
    0, // SUB8rp = 422
    0, // SUB8rr = 423
    0, // SUBC16mc = 424
    0, // SUBC16mi = 425
    0, // SUBC16mm = 426
    0, // SUBC16mn = 427
    0, // SUBC16mp = 428
    0, // SUBC16mr = 429
    0, // SUBC16rc = 430
    0, // SUBC16ri = 431
    0, // SUBC16rm = 432
    0, // SUBC16rn = 433
    0, // SUBC16rp = 434
    0, // SUBC16rr = 435
    0, // SUBC8mc = 436
    0, // SUBC8mi = 437
    0, // SUBC8mm = 438
    0, // SUBC8mn = 439
    0, // SUBC8mp = 440
    0, // SUBC8mr = 441
    0, // SUBC8rc = 442
    0, // SUBC8ri = 443
    0, // SUBC8rm = 444
    0, // SUBC8rn = 445
    0, // SUBC8rp = 446
    0, // SUBC8rr = 447
    0, // SWPB16m = 448
    0, // SWPB16n = 449
    0, // SWPB16p = 450
    0, // SWPB16r = 451
    0, // Select16 = 452
    0, // Select8 = 453
    0, // Shl16 = 454
    0, // Shl8 = 455
    0, // Sra16 = 456
    0, // Sra8 = 457
    0, // Srl16 = 458
    0, // Srl8 = 459
    0, // XOR16mc = 460
    0, // XOR16mi = 461
    0, // XOR16mm = 462
    0, // XOR16mn = 463
    0, // XOR16mp = 464
    0, // XOR16mr = 465
    0, // XOR16rc = 466
    0, // XOR16ri = 467
    0, // XOR16rm = 468
    0, // XOR16rn = 469
    0, // XOR16rp = 470
    0, // XOR16rr = 471
    0, // XOR8mc = 472
    0, // XOR8mi = 473
    0, // XOR8mm = 474
    0, // XOR8mn = 475
    0, // XOR8mp = 476
    0, // XOR8mr = 477
    0, // XOR8rc = 478
    0, // XOR8ri = 479
    0, // XOR8rm = 480
    0, // XOR8rn = 481
    0, // XOR8rp = 482
    0, // XOR8rr = 483
    0, // ZEXT16r = 484
  };

  assert(Inst.getOpcode() < 485);
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

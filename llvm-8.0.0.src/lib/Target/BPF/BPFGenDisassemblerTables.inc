/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * BPF Disassembler                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper functions for extracting fields from encoded instructions.
// InsnType must either be integral or an APInt-like object that must:
// * Have a static const max_size_in_bits equal to the number of bits in the
//   encoding.
// * be default-constructible and copy-constructible
// * be constructible from a uint64_t
// * be constructible from an APInt (this can be private)
// * Support getBitsSet(loBit, hiBit)
// * be convertible to uint64_t
// * Support the ~, &, ==, !=, and |= operators with other objects of the same type
// * Support shift (<<, >>) with signed and unsigned integers on the RHS
// * Support put (<<) to raw_ostream&
template<typename InsnType>
#if defined(_MSC_VER) && !defined(__clang__)
__declspec(noinline)
#endif
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::true_type) {
  assert(startBit + numBits <= 64 && "Cannot support >64-bit extractions!");
  assert(startBit + numBits <= (sizeof(InsnType) * 8) &&
         "Instruction field out of bounds!");
  InsnType fieldMask;
  if (numBits == sizeof(InsnType) * 8)
    fieldMask = (InsnType)(-1LL);
  else
    fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
  return (insn & fieldMask) >> startBit;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits, std::false_type) {
  assert(startBit + numBits <= InsnType::max_size_in_bits && "Instruction field out of bounds!");
  InsnType fieldMask = InsnType::getBitsSet(0, numBits);
  return (insn >> startBit) & fieldMask;
}

template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
  return fieldFromInstruction(insn, startBit, numBits, std::is_integral<InsnType>());
}

static const uint8_t DecoderTableBPF64[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 4, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 154, 1, 0, // Opcode: ADD_ri_32
/* 12 */      MCD::OPC_FilterValue, 5, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 173, 1, 1, // Opcode: JMP
/* 21 */      MCD::OPC_FilterValue, 7, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 153, 1, 2, // Opcode: ADD_ri
/* 30 */      MCD::OPC_FilterValue, 12, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 156, 1, 3, // Opcode: ADD_rr_32
/* 39 */      MCD::OPC_FilterValue, 15, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 155, 1, 4, // Opcode: ADD_rr
/* 48 */      MCD::OPC_FilterValue, 20, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 247, 1, 0, // Opcode: SUB_ri_32
/* 57 */      MCD::OPC_FilterValue, 21, 4, 0, 0, // Skip to: 66
/* 62 */      MCD::OPC_Decode, 171, 1, 5, // Opcode: JEQ_ri
/* 66 */      MCD::OPC_FilterValue, 23, 4, 0, 0, // Skip to: 75
/* 71 */      MCD::OPC_Decode, 246, 1, 2, // Opcode: SUB_ri
/* 75 */      MCD::OPC_FilterValue, 24, 41, 0, 0, // Skip to: 121
/* 80 */      MCD::OPC_ExtractField, 32, 16,  // Inst{47-32} ...
/* 83 */      MCD::OPC_FilterValue, 0, 84, 3, 0, // Skip to: 940
/* 88 */      MCD::OPC_CheckField, 48, 8, 32, 11, 0, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 0, 32, 0, 4, 0, 0, // Skip to: 106
/* 102 */     MCD::OPC_Decode, 168, 1, 6, // Opcode: FI_ri
/* 106 */     MCD::OPC_CheckField, 52, 4, 0, 4, 0, 0, // Skip to: 117
/* 113 */     MCD::OPC_Decode, 205, 1, 7, // Opcode: LD_imm64
/* 117 */     MCD::OPC_Decode, 206, 1, 8, // Opcode: LD_pseudo
/* 121 */     MCD::OPC_FilterValue, 28, 4, 0, 0, // Skip to: 130
/* 126 */     MCD::OPC_Decode, 249, 1, 3, // Opcode: SUB_rr_32
/* 130 */     MCD::OPC_FilterValue, 29, 4, 0, 0, // Skip to: 139
/* 135 */     MCD::OPC_Decode, 172, 1, 9, // Opcode: JEQ_rr
/* 139 */     MCD::OPC_FilterValue, 31, 4, 0, 0, // Skip to: 148
/* 144 */     MCD::OPC_Decode, 248, 1, 4, // Opcode: SUB_rr
/* 148 */     MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 157
/* 153 */     MCD::OPC_Decode, 201, 1, 10, // Opcode: LD_ABS_W
/* 157 */     MCD::OPC_FilterValue, 36, 4, 0, 0, // Skip to: 166
/* 162 */     MCD::OPC_Decode, 216, 1, 0, // Opcode: MUL_ri_32
/* 166 */     MCD::OPC_FilterValue, 37, 4, 0, 0, // Skip to: 175
/* 171 */     MCD::OPC_Decode, 186, 1, 5, // Opcode: JUGT_ri
/* 175 */     MCD::OPC_FilterValue, 39, 4, 0, 0, // Skip to: 184
/* 180 */     MCD::OPC_Decode, 215, 1, 2, // Opcode: MUL_ri
/* 184 */     MCD::OPC_FilterValue, 40, 4, 0, 0, // Skip to: 193
/* 189 */     MCD::OPC_Decode, 200, 1, 10, // Opcode: LD_ABS_H
/* 193 */     MCD::OPC_FilterValue, 44, 4, 0, 0, // Skip to: 202
/* 198 */     MCD::OPC_Decode, 218, 1, 3, // Opcode: MUL_rr_32
/* 202 */     MCD::OPC_FilterValue, 45, 4, 0, 0, // Skip to: 211
/* 207 */     MCD::OPC_Decode, 187, 1, 9, // Opcode: JUGT_rr
/* 211 */     MCD::OPC_FilterValue, 47, 4, 0, 0, // Skip to: 220
/* 216 */     MCD::OPC_Decode, 217, 1, 4, // Opcode: MUL_rr
/* 220 */     MCD::OPC_FilterValue, 48, 4, 0, 0, // Skip to: 229
/* 225 */     MCD::OPC_Decode, 199, 1, 10, // Opcode: LD_ABS_B
/* 229 */     MCD::OPC_FilterValue, 52, 4, 0, 0, // Skip to: 238
/* 234 */     MCD::OPC_Decode, 165, 1, 0, // Opcode: DIV_ri_32
/* 238 */     MCD::OPC_FilterValue, 53, 4, 0, 0, // Skip to: 247
/* 243 */     MCD::OPC_Decode, 184, 1, 5, // Opcode: JUGE_ri
/* 247 */     MCD::OPC_FilterValue, 55, 4, 0, 0, // Skip to: 256
/* 252 */     MCD::OPC_Decode, 164, 1, 2, // Opcode: DIV_ri
/* 256 */     MCD::OPC_FilterValue, 60, 4, 0, 0, // Skip to: 265
/* 261 */     MCD::OPC_Decode, 167, 1, 3, // Opcode: DIV_rr_32
/* 265 */     MCD::OPC_FilterValue, 61, 4, 0, 0, // Skip to: 274
/* 270 */     MCD::OPC_Decode, 185, 1, 9, // Opcode: JUGE_rr
/* 274 */     MCD::OPC_FilterValue, 63, 4, 0, 0, // Skip to: 283
/* 279 */     MCD::OPC_Decode, 166, 1, 4, // Opcode: DIV_rr
/* 283 */     MCD::OPC_FilterValue, 64, 4, 0, 0, // Skip to: 292
/* 288 */     MCD::OPC_Decode, 204, 1, 11, // Opcode: LD_IND_W
/* 292 */     MCD::OPC_FilterValue, 68, 4, 0, 0, // Skip to: 301
/* 297 */     MCD::OPC_Decode, 223, 1, 0, // Opcode: OR_ri_32
/* 301 */     MCD::OPC_FilterValue, 71, 4, 0, 0, // Skip to: 310
/* 306 */     MCD::OPC_Decode, 222, 1, 2, // Opcode: OR_ri
/* 310 */     MCD::OPC_FilterValue, 72, 4, 0, 0, // Skip to: 319
/* 315 */     MCD::OPC_Decode, 203, 1, 11, // Opcode: LD_IND_H
/* 319 */     MCD::OPC_FilterValue, 76, 4, 0, 0, // Skip to: 328
/* 324 */     MCD::OPC_Decode, 225, 1, 3, // Opcode: OR_rr_32
/* 328 */     MCD::OPC_FilterValue, 79, 4, 0, 0, // Skip to: 337
/* 333 */     MCD::OPC_Decode, 224, 1, 4, // Opcode: OR_rr
/* 337 */     MCD::OPC_FilterValue, 80, 4, 0, 0, // Skip to: 346
/* 342 */     MCD::OPC_Decode, 202, 1, 11, // Opcode: LD_IND_B
/* 346 */     MCD::OPC_FilterValue, 84, 4, 0, 0, // Skip to: 355
/* 351 */     MCD::OPC_Decode, 158, 1, 0, // Opcode: AND_ri_32
/* 355 */     MCD::OPC_FilterValue, 85, 4, 0, 0, // Skip to: 364
/* 360 */     MCD::OPC_Decode, 174, 1, 5, // Opcode: JNE_ri
/* 364 */     MCD::OPC_FilterValue, 87, 4, 0, 0, // Skip to: 373
/* 369 */     MCD::OPC_Decode, 157, 1, 2, // Opcode: AND_ri
/* 373 */     MCD::OPC_FilterValue, 92, 4, 0, 0, // Skip to: 382
/* 378 */     MCD::OPC_Decode, 160, 1, 3, // Opcode: AND_rr_32
/* 382 */     MCD::OPC_FilterValue, 93, 4, 0, 0, // Skip to: 391
/* 387 */     MCD::OPC_Decode, 175, 1, 9, // Opcode: JNE_rr
/* 391 */     MCD::OPC_FilterValue, 95, 4, 0, 0, // Skip to: 400
/* 396 */     MCD::OPC_Decode, 159, 1, 4, // Opcode: AND_rr
/* 400 */     MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 409
/* 405 */     MCD::OPC_Decode, 197, 1, 12, // Opcode: LDW
/* 409 */     MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 418
/* 414 */     MCD::OPC_Decode, 244, 1, 13, // Opcode: STW
/* 418 */     MCD::OPC_FilterValue, 100, 4, 0, 0, // Skip to: 427
/* 423 */     MCD::OPC_Decode, 228, 1, 0, // Opcode: SLL_ri_32
/* 427 */     MCD::OPC_FilterValue, 101, 4, 0, 0, // Skip to: 436
/* 432 */     MCD::OPC_Decode, 178, 1, 5, // Opcode: JSGT_ri
/* 436 */     MCD::OPC_FilterValue, 103, 4, 0, 0, // Skip to: 445
/* 441 */     MCD::OPC_Decode, 227, 1, 2, // Opcode: SLL_ri
/* 445 */     MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 454
/* 450 */     MCD::OPC_Decode, 195, 1, 12, // Opcode: LDH
/* 454 */     MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 463
/* 459 */     MCD::OPC_Decode, 242, 1, 13, // Opcode: STH
/* 463 */     MCD::OPC_FilterValue, 108, 4, 0, 0, // Skip to: 472
/* 468 */     MCD::OPC_Decode, 230, 1, 3, // Opcode: SLL_rr_32
/* 472 */     MCD::OPC_FilterValue, 109, 4, 0, 0, // Skip to: 481
/* 477 */     MCD::OPC_Decode, 179, 1, 9, // Opcode: JSGT_rr
/* 481 */     MCD::OPC_FilterValue, 111, 4, 0, 0, // Skip to: 490
/* 486 */     MCD::OPC_Decode, 229, 1, 4, // Opcode: SLL_rr
/* 490 */     MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 499
/* 495 */     MCD::OPC_Decode, 192, 1, 12, // Opcode: LDB
/* 499 */     MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 508
/* 504 */     MCD::OPC_Decode, 239, 1, 13, // Opcode: STB
/* 508 */     MCD::OPC_FilterValue, 116, 4, 0, 0, // Skip to: 517
/* 513 */     MCD::OPC_Decode, 236, 1, 0, // Opcode: SRL_ri_32
/* 517 */     MCD::OPC_FilterValue, 117, 4, 0, 0, // Skip to: 526
/* 522 */     MCD::OPC_Decode, 176, 1, 5, // Opcode: JSGE_ri
/* 526 */     MCD::OPC_FilterValue, 119, 4, 0, 0, // Skip to: 535
/* 531 */     MCD::OPC_Decode, 235, 1, 2, // Opcode: SRL_ri
/* 535 */     MCD::OPC_FilterValue, 121, 4, 0, 0, // Skip to: 544
/* 540 */     MCD::OPC_Decode, 194, 1, 12, // Opcode: LDD
/* 544 */     MCD::OPC_FilterValue, 123, 4, 0, 0, // Skip to: 553
/* 549 */     MCD::OPC_Decode, 241, 1, 13, // Opcode: STD
/* 553 */     MCD::OPC_FilterValue, 124, 4, 0, 0, // Skip to: 562
/* 558 */     MCD::OPC_Decode, 238, 1, 3, // Opcode: SRL_rr_32
/* 562 */     MCD::OPC_FilterValue, 125, 4, 0, 0, // Skip to: 571
/* 567 */     MCD::OPC_Decode, 177, 1, 9, // Opcode: JSGE_rr
/* 571 */     MCD::OPC_FilterValue, 127, 4, 0, 0, // Skip to: 580
/* 576 */     MCD::OPC_Decode, 237, 1, 4, // Opcode: SRL_rr
/* 580 */     MCD::OPC_FilterValue, 132, 1, 4, 0, 0, // Skip to: 590
/* 586 */     MCD::OPC_Decode, 219, 1, 14, // Opcode: NEG_32
/* 590 */     MCD::OPC_FilterValue, 133, 1, 4, 0, 0, // Skip to: 600
/* 596 */     MCD::OPC_Decode, 169, 1, 10, // Opcode: JAL
/* 600 */     MCD::OPC_FilterValue, 135, 1, 4, 0, 0, // Skip to: 610
/* 606 */     MCD::OPC_Decode, 220, 1, 15, // Opcode: NEG_64
/* 610 */     MCD::OPC_FilterValue, 141, 1, 4, 0, 0, // Skip to: 620
/* 616 */     MCD::OPC_Decode, 170, 1, 10, // Opcode: JALX
/* 620 */     MCD::OPC_FilterValue, 149, 1, 11, 0, 0, // Skip to: 637
/* 626 */     MCD::OPC_CheckField, 0, 32, 0, 51, 1, 0, // Skip to: 940
/* 633 */     MCD::OPC_Decode, 226, 1, 6, // Opcode: RET
/* 637 */     MCD::OPC_FilterValue, 164, 1, 4, 0, 0, // Skip to: 647
/* 643 */     MCD::OPC_Decode, 253, 1, 0, // Opcode: XOR_ri_32
/* 647 */     MCD::OPC_FilterValue, 165, 1, 4, 0, 0, // Skip to: 657
/* 653 */     MCD::OPC_Decode, 190, 1, 5, // Opcode: JULT_ri
/* 657 */     MCD::OPC_FilterValue, 167, 1, 4, 0, 0, // Skip to: 667
/* 663 */     MCD::OPC_Decode, 252, 1, 2, // Opcode: XOR_ri
/* 667 */     MCD::OPC_FilterValue, 172, 1, 4, 0, 0, // Skip to: 677
/* 673 */     MCD::OPC_Decode, 255, 1, 3, // Opcode: XOR_rr_32
/* 677 */     MCD::OPC_FilterValue, 173, 1, 4, 0, 0, // Skip to: 687
/* 683 */     MCD::OPC_Decode, 191, 1, 9, // Opcode: JULT_rr
/* 687 */     MCD::OPC_FilterValue, 175, 1, 4, 0, 0, // Skip to: 697
/* 693 */     MCD::OPC_Decode, 254, 1, 4, // Opcode: XOR_rr
/* 697 */     MCD::OPC_FilterValue, 180, 1, 4, 0, 0, // Skip to: 707
/* 703 */     MCD::OPC_Decode, 212, 1, 16, // Opcode: MOV_ri_32
/* 707 */     MCD::OPC_FilterValue, 181, 1, 4, 0, 0, // Skip to: 717
/* 713 */     MCD::OPC_Decode, 188, 1, 5, // Opcode: JULE_ri
/* 717 */     MCD::OPC_FilterValue, 183, 1, 4, 0, 0, // Skip to: 727
/* 723 */     MCD::OPC_Decode, 211, 1, 7, // Opcode: MOV_ri
/* 727 */     MCD::OPC_FilterValue, 188, 1, 4, 0, 0, // Skip to: 737
/* 733 */     MCD::OPC_Decode, 214, 1, 17, // Opcode: MOV_rr_32
/* 737 */     MCD::OPC_FilterValue, 189, 1, 4, 0, 0, // Skip to: 747
/* 743 */     MCD::OPC_Decode, 189, 1, 9, // Opcode: JULE_rr
/* 747 */     MCD::OPC_FilterValue, 191, 1, 15, 0, 0, // Skip to: 768
/* 753 */     MCD::OPC_CheckField, 48, 8, 0, 4, 0, 0, // Skip to: 764
/* 760 */     MCD::OPC_Decode, 221, 1, 6, // Opcode: NOP
/* 764 */     MCD::OPC_Decode, 213, 1, 18, // Opcode: MOV_rr
/* 768 */     MCD::OPC_FilterValue, 195, 1, 4, 0, 0, // Skip to: 778
/* 774 */     MCD::OPC_Decode, 250, 1, 19, // Opcode: XADD32
/* 778 */     MCD::OPC_FilterValue, 196, 1, 4, 0, 0, // Skip to: 788
/* 784 */     MCD::OPC_Decode, 232, 1, 0, // Opcode: SRA_ri_32
/* 788 */     MCD::OPC_FilterValue, 197, 1, 4, 0, 0, // Skip to: 798
/* 794 */     MCD::OPC_Decode, 182, 1, 5, // Opcode: JSLT_ri
/* 798 */     MCD::OPC_FilterValue, 199, 1, 4, 0, 0, // Skip to: 808
/* 804 */     MCD::OPC_Decode, 231, 1, 2, // Opcode: SRA_ri
/* 808 */     MCD::OPC_FilterValue, 204, 1, 4, 0, 0, // Skip to: 818
/* 814 */     MCD::OPC_Decode, 234, 1, 3, // Opcode: SRA_rr_32
/* 818 */     MCD::OPC_FilterValue, 205, 1, 4, 0, 0, // Skip to: 828
/* 824 */     MCD::OPC_Decode, 183, 1, 9, // Opcode: JSLT_rr
/* 828 */     MCD::OPC_FilterValue, 207, 1, 4, 0, 0, // Skip to: 838
/* 834 */     MCD::OPC_Decode, 233, 1, 4, // Opcode: SRA_rr
/* 838 */     MCD::OPC_FilterValue, 212, 1, 30, 0, 0, // Skip to: 874
/* 844 */     MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 847 */     MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 856
/* 852 */     MCD::OPC_Decode, 207, 1, 15, // Opcode: LE16
/* 856 */     MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 865
/* 861 */     MCD::OPC_Decode, 208, 1, 15, // Opcode: LE32
/* 865 */     MCD::OPC_FilterValue, 64, 70, 0, 0, // Skip to: 940
/* 870 */     MCD::OPC_Decode, 209, 1, 15, // Opcode: LE64
/* 874 */     MCD::OPC_FilterValue, 213, 1, 4, 0, 0, // Skip to: 884
/* 880 */     MCD::OPC_Decode, 180, 1, 5, // Opcode: JSLE_ri
/* 884 */     MCD::OPC_FilterValue, 219, 1, 4, 0, 0, // Skip to: 894
/* 890 */     MCD::OPC_Decode, 251, 1, 19, // Opcode: XADD64
/* 894 */     MCD::OPC_FilterValue, 220, 1, 30, 0, 0, // Skip to: 930
/* 900 */     MCD::OPC_ExtractField, 0, 32,  // Inst{31-0} ...
/* 903 */     MCD::OPC_FilterValue, 16, 4, 0, 0, // Skip to: 912
/* 908 */     MCD::OPC_Decode, 161, 1, 15, // Opcode: BE16
/* 912 */     MCD::OPC_FilterValue, 32, 4, 0, 0, // Skip to: 921
/* 917 */     MCD::OPC_Decode, 162, 1, 15, // Opcode: BE32
/* 921 */     MCD::OPC_FilterValue, 64, 14, 0, 0, // Skip to: 940
/* 926 */     MCD::OPC_Decode, 163, 1, 15, // Opcode: BE64
/* 930 */     MCD::OPC_FilterValue, 221, 1, 4, 0, 0, // Skip to: 940
/* 936 */     MCD::OPC_Decode, 181, 1, 9, // Opcode: JSLE_rr
/* 940 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableBPFALU3264[] = {
/* 0 */       MCD::OPC_ExtractField, 56, 8,  // Inst{63-56} ...
/* 3 */       MCD::OPC_FilterValue, 97, 4, 0, 0, // Skip to: 12
/* 8 */       MCD::OPC_Decode, 198, 1, 20, // Opcode: LDW32
/* 12 */      MCD::OPC_FilterValue, 99, 4, 0, 0, // Skip to: 21
/* 17 */      MCD::OPC_Decode, 245, 1, 21, // Opcode: STW32
/* 21 */      MCD::OPC_FilterValue, 105, 4, 0, 0, // Skip to: 30
/* 26 */      MCD::OPC_Decode, 196, 1, 20, // Opcode: LDH32
/* 30 */      MCD::OPC_FilterValue, 107, 4, 0, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 243, 1, 21, // Opcode: STH32
/* 39 */      MCD::OPC_FilterValue, 113, 4, 0, 0, // Skip to: 48
/* 44 */      MCD::OPC_Decode, 193, 1, 20, // Opcode: LDB32
/* 48 */      MCD::OPC_FilterValue, 115, 4, 0, 0, // Skip to: 57
/* 53 */      MCD::OPC_Decode, 240, 1, 21, // Opcode: STB32
/* 57 */      MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  llvm_unreachable("Invalid index!");
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 3:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 6:
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 8:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 10:
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 32);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    tmp = fieldFromInstruction(insn, 48, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 32, 16) << 0;
    tmp |= fieldFromInstruction(insn, 52, 4) << 16;
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 52, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 32, 20);
    if (decodeMemoryOpValue(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  while (true) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      LLVM_DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 24-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      NumToSkip |= (*Ptr++) << 16;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      LLVM_DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        LLVM_DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        LLVM_DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      LLVM_DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      LLVM_DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace

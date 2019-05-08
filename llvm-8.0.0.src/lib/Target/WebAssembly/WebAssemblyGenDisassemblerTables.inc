/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * WebAssembly Disassembler                                                *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "MCTargetDesc/WebAssemblyMCTargetDesc.h"

namespace llvm {

static constexpr int WebAssemblyInstructionTableSize = 256;

enum EntryType : uint8_t { ET_Unused, ET_Prefix, ET_Instruction };

struct WebAssemblyInstruction {
  uint16_t Opcode;
  EntryType ET;
  uint8_t NumOperands;
  uint16_t OperandStart;
};

WebAssemblyInstruction InstructionTable0[] = {
  // 0x0: 
  { 437, ET_Instruction, 2, 0  },
  // 0x1: nop
  { 985, ET_Instruction, 0, 0  },
  // 0x2: block   	$sig
  { 377, ET_Instruction, 1, 2  },
  // 0x3: loop    	$sig
  { 879, ET_Instruction, 1, 2  },
  // 0x4: if    	$sig
  { 773, ET_Instruction, 1, 2  },
  // 0x5: catch_all
  { 439, ET_Instruction, 0, 0  },
  // 0x6: try     	$sig
  { 1237, ET_Instruction, 1, 2  },
  // 0x7: i32.catch   	$tag
  { 441, ET_Instruction, 1, 3  },
  // 0x8: throw   	$tag
  { 1229, ET_Instruction, 1, 4  },
  // 0x9: rethrow 	$dst
  { 1055, ET_Instruction, 1, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xb: end_block
  { 525, ET_Instruction, 0, 0  },
  // 0xc: br      	$dst
  { 381, ET_Instruction, 1, 0  },
  // 0xd: br_if   	$dst
  { 380, ET_Instruction, 1, 0  },
  // 0xe: br_table 	$brl
  { 383, ET_Instruction, 1, 5  },
  // 0xf: return
  { 1059, ET_Instruction, 0, 0  },
  // 0x10: except_ref.call	$callee
  { 389, ET_Instruction, 1, 6  },
  // 0x11: except_ref.call_indirect	$type
  { 399, ET_Instruction, 2, 7  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x1a: drop
  { 511, ET_Instruction, 0, 0  },
  // 0x1b: except_ref.select
  { 1091, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x20: local.get	$local
  { 843, ET_Instruction, 1, 9  },
  // 0x21: local.set	$local
  { 855, ET_Instruction, 1, 9  },
  // 0x22: local.tee	$local
  { 867, ET_Instruction, 1, 9  },
  // 0x23: global.get	$local
  { 669, ET_Instruction, 1, 10  },
  // 0x24: global.set	$local
  { 681, ET_Instruction, 1, 10  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x28: i32.load	${off}${p2align}
  { 827, ET_Instruction, 2, 11  },
  // 0x29: i64.load	${off}${p2align}
  { 829, ET_Instruction, 2, 11  },
  // 0x2a: f32.load	${off}${p2align}
  { 823, ET_Instruction, 2, 11  },
  // 0x2b: f64.load	${off}${p2align}
  { 825, ET_Instruction, 2, 11  },
  // 0x2c: i32.load8_s	${off}${p2align}
  { 815, ET_Instruction, 2, 11  },
  // 0x2d: i32.load8_u	${off}${p2align}
  { 819, ET_Instruction, 2, 11  },
  // 0x2e: i32.load16_s	${off}${p2align}
  { 803, ET_Instruction, 2, 11  },
  // 0x2f: i32.load16_u	${off}${p2align}
  { 807, ET_Instruction, 2, 11  },
  // 0x30: i64.load8_s	${off}${p2align}
  { 817, ET_Instruction, 2, 11  },
  // 0x31: i64.load8_u	${off}${p2align}
  { 821, ET_Instruction, 2, 11  },
  // 0x32: i64.load16_s	${off}${p2align}
  { 805, ET_Instruction, 2, 11  },
  // 0x33: i64.load16_u	${off}${p2align}
  { 809, ET_Instruction, 2, 11  },
  // 0x34: i64.load32_s	${off}${p2align}
  { 811, ET_Instruction, 2, 11  },
  // 0x35: i64.load32_u	${off}${p2align}
  { 813, ET_Instruction, 2, 11  },
  // 0x36: i32.store	${off}${p2align}
  { 1173, ET_Instruction, 2, 11  },
  // 0x37: i64.store	${off}${p2align}
  { 1175, ET_Instruction, 2, 11  },
  // 0x38: f32.store	${off}${p2align}
  { 1169, ET_Instruction, 2, 11  },
  // 0x39: f64.store	${off}${p2align}
  { 1171, ET_Instruction, 2, 11  },
  // 0x3a: i32.store8	${off}${p2align}
  { 1165, ET_Instruction, 2, 11  },
  // 0x3b: i32.store16	${off}${p2align}
  { 1159, ET_Instruction, 2, 11  },
  // 0x3c: i64.store8	${off}${p2align}
  { 1167, ET_Instruction, 2, 11  },
  // 0x3d: i64.store16	${off}${p2align}
  { 1161, ET_Instruction, 2, 11  },
  // 0x3e: i64.store32	${off}${p2align}
  { 1163, ET_Instruction, 2, 11  },
  // 0x3f: memory.size	$flags
  { 919, ET_Instruction, 1, 3  },
  // 0x40: memory.grow	$flags
  { 917, ET_Instruction, 1, 3  },
  // 0x41: i32.const	$imm
  { 459, ET_Instruction, 1, 13  },
  // 0x42: i64.const	$imm
  { 461, ET_Instruction, 1, 14  },
  // 0x43: f32.const	$imm
  { 455, ET_Instruction, 1, 15  },
  // 0x44: f64.const	$imm
  { 457, ET_Instruction, 1, 16  },
  // 0x45: i32.eqz
  { 535, ET_Instruction, 0, 0  },
  // 0x46: i32.eq  
  { 543, ET_Instruction, 0, 0  },
  // 0x47: i32.ne  
  { 971, ET_Instruction, 0, 0  },
  // 0x48: i32.lt_s
  { 885, ET_Instruction, 0, 0  },
  // 0x49: i32.lt_u
  { 895, ET_Instruction, 0, 0  },
  // 0x4a: i32.gt_s
  { 697, ET_Instruction, 0, 0  },
  // 0x4b: i32.gt_u
  { 707, ET_Instruction, 0, 0  },
  // 0x4c: i32.le_s
  { 779, ET_Instruction, 0, 0  },
  // 0x4d: i32.le_u
  { 789, ET_Instruction, 0, 0  },
  // 0x4e: i32.ge_s
  { 645, ET_Instruction, 0, 0  },
  // 0x4f: i32.ge_u
  { 655, ET_Instruction, 0, 0  },
  // 0x50: i64.eqz
  { 537, ET_Instruction, 0, 0  },
  // 0x51: i64.eq  
  { 545, ET_Instruction, 0, 0  },
  // 0x52: i64.ne  
  { 973, ET_Instruction, 0, 0  },
  // 0x53: i64.lt_s
  { 887, ET_Instruction, 0, 0  },
  // 0x54: i64.lt_u
  { 897, ET_Instruction, 0, 0  },
  // 0x55: i64.gt_s
  { 699, ET_Instruction, 0, 0  },
  // 0x56: i64.gt_u
  { 709, ET_Instruction, 0, 0  },
  // 0x57: i64.le_s
  { 781, ET_Instruction, 0, 0  },
  // 0x58: i64.le_u
  { 791, ET_Instruction, 0, 0  },
  // 0x59: i64.ge_s
  { 647, ET_Instruction, 0, 0  },
  // 0x5a: i64.ge_u
  { 657, ET_Instruction, 0, 0  },
  // 0x5b: f32.eq  
  { 539, ET_Instruction, 0, 0  },
  // 0x5c: f32.ne  
  { 967, ET_Instruction, 0, 0  },
  // 0x5d: f32.lt  
  { 881, ET_Instruction, 0, 0  },
  // 0x5e: f32.gt  
  { 693, ET_Instruction, 0, 0  },
  // 0x5f: f32.le  
  { 775, ET_Instruction, 0, 0  },
  // 0x60: f32.ge  
  { 641, ET_Instruction, 0, 0  },
  // 0x61: f64.eq  
  { 541, ET_Instruction, 0, 0  },
  // 0x62: f64.ne  
  { 969, ET_Instruction, 0, 0  },
  // 0x63: f64.lt  
  { 883, ET_Instruction, 0, 0  },
  // 0x64: f64.gt  
  { 695, ET_Instruction, 0, 0  },
  // 0x65: f64.le  
  { 777, ET_Instruction, 0, 0  },
  // 0x66: f64.ge  
  { 643, ET_Instruction, 0, 0  },
  // 0x67: i32.clz 
  { 451, ET_Instruction, 0, 0  },
  // 0x68: i32.ctz 
  { 491, ET_Instruction, 0, 0  },
  // 0x69: i32.popcnt
  { 1031, ET_Instruction, 0, 0  },
  // 0x6a: i32.add 
  { 155, ET_Instruction, 0, 0  },
  // 0x6b: i32.sub 
  { 1193, ET_Instruction, 0, 0  },
  // 0x6c: i32.mul 
  { 933, ET_Instruction, 0, 0  },
  // 0x6d: i32.div_s
  { 499, ET_Instruction, 0, 0  },
  // 0x6e: i32.div_u
  { 503, ET_Instruction, 0, 0  },
  // 0x6f: i32.rem_s
  { 1035, ET_Instruction, 0, 0  },
  // 0x70: i32.rem_u
  { 1039, ET_Instruction, 0, 0  },
  // 0x71: i32.and 
  { 191, ET_Instruction, 0, 0  },
  // 0x72: i32.or  
  { 995, ET_Instruction, 0, 0  },
  // 0x73: i32.xor 
  { 1241, ET_Instruction, 0, 0  },
  // 0x74: i32.shl 
  { 1101, ET_Instruction, 0, 0  },
  // 0x75: i32.shr_s
  { 1113, ET_Instruction, 0, 0  },
  // 0x76: i32.shr_u
  { 1125, ET_Instruction, 0, 0  },
  // 0x77: i32.rotl
  { 1083, ET_Instruction, 0, 0  },
  // 0x78: i32.rotr
  { 1087, ET_Instruction, 0, 0  },
  // 0x79: i64.clz 
  { 453, ET_Instruction, 0, 0  },
  // 0x7a: i64.ctz 
  { 493, ET_Instruction, 0, 0  },
  // 0x7b: i64.popcnt
  { 1033, ET_Instruction, 0, 0  },
  // 0x7c: i64.add 
  { 157, ET_Instruction, 0, 0  },
  // 0x7d: i64.sub 
  { 1195, ET_Instruction, 0, 0  },
  // 0x7e: i64.mul 
  { 935, ET_Instruction, 0, 0  },
  // 0x7f: i64.div_s
  { 501, ET_Instruction, 0, 0  },
  // 0x80: i64.div_u
  { 505, ET_Instruction, 0, 0  },
  // 0x81: i64.rem_s
  { 1037, ET_Instruction, 0, 0  },
  // 0x82: i64.rem_u
  { 1041, ET_Instruction, 0, 0  },
  // 0x83: i64.and 
  { 193, ET_Instruction, 0, 0  },
  // 0x84: i64.or  
  { 997, ET_Instruction, 0, 0  },
  // 0x85: i64.xor 
  { 1243, ET_Instruction, 0, 0  },
  // 0x86: i64.shl 
  { 1103, ET_Instruction, 0, 0  },
  // 0x87: i64.shr_s
  { 1115, ET_Instruction, 0, 0  },
  // 0x88: i64.shr_u
  { 1127, ET_Instruction, 0, 0  },
  // 0x89: i64.rotl
  { 1085, ET_Instruction, 0, 0  },
  // 0x8a: i64.rotr
  { 1089, ET_Instruction, 0, 0  },
  // 0x8b: f32.abs 
  { 143, ET_Instruction, 0, 0  },
  // 0x8c: f32.neg 
  { 951, ET_Instruction, 0, 0  },
  // 0x8d: f32.ceil
  { 445, ET_Instruction, 0, 0  },
  // 0x8e: f32.floor
  { 621, ET_Instruction, 0, 0  },
  // 0x8f: f32.trunc
  { 1233, ET_Instruction, 0, 0  },
  // 0x90: f32.nearest
  { 947, ET_Instruction, 0, 0  },
  // 0x91: f32.sqrt
  { 1151, ET_Instruction, 0, 0  },
  // 0x92: f32.add 
  { 151, ET_Instruction, 0, 0  },
  // 0x93: f32.sub 
  { 1189, ET_Instruction, 0, 0  },
  // 0x94: f32.mul 
  { 929, ET_Instruction, 0, 0  },
  // 0x95: f32.div 
  { 495, ET_Instruction, 0, 0  },
  // 0x96: f32.min 
  { 921, ET_Instruction, 0, 0  },
  // 0x97: f32.max 
  { 909, ET_Instruction, 0, 0  },
  // 0x98: f32.copysign
  { 475, ET_Instruction, 0, 0  },
  // 0x99: f64.abs 
  { 145, ET_Instruction, 0, 0  },
  // 0x9a: f64.neg 
  { 953, ET_Instruction, 0, 0  },
  // 0x9b: f64.ceil
  { 447, ET_Instruction, 0, 0  },
  // 0x9c: f64.floor
  { 623, ET_Instruction, 0, 0  },
  // 0x9d: f64.trunc
  { 1235, ET_Instruction, 0, 0  },
  // 0x9e: f64.nearest
  { 949, ET_Instruction, 0, 0  },
  // 0x9f: f64.sqrt
  { 1153, ET_Instruction, 0, 0  },
  // 0xa0: f64.add 
  { 153, ET_Instruction, 0, 0  },
  // 0xa1: f64.sub 
  { 1191, ET_Instruction, 0, 0  },
  // 0xa2: f64.mul 
  { 931, ET_Instruction, 0, 0  },
  // 0xa3: f64.div 
  { 497, ET_Instruction, 0, 0  },
  // 0xa4: f64.min 
  { 923, ET_Instruction, 0, 0  },
  // 0xa5: f64.max 
  { 911, ET_Instruction, 0, 0  },
  // 0xa6: f64.copysign
  { 477, ET_Instruction, 0, 0  },
  // 0xa7: i32.wrap_i64
  { 743, ET_Instruction, 0, 0  },
  // 0xa8: i32.trunc_f32_s
  { 727, ET_Instruction, 0, 0  },
  // 0xa9: i32.trunc_f32_u
  { 735, ET_Instruction, 0, 0  },
  // 0xaa: i32.trunc_f64_s
  { 729, ET_Instruction, 0, 0  },
  // 0xab: i32.trunc_f64_u
  { 737, ET_Instruction, 0, 0  },
  // 0xac: i64.extend_i32_s
  { 751, ET_Instruction, 0, 0  },
  // 0xad: i64.extend_i32_u
  { 753, ET_Instruction, 0, 0  },
  // 0xae: i64.trunc_f32_s
  { 757, ET_Instruction, 0, 0  },
  // 0xaf: i64.trunc_f32_u
  { 765, ET_Instruction, 0, 0  },
  // 0xb0: i64.trunc_f64_s
  { 759, ET_Instruction, 0, 0  },
  // 0xb1: i64.trunc_f64_u
  { 767, ET_Instruction, 0, 0  },
  // 0xb2: f32.convert_i32_s
  { 573, ET_Instruction, 0, 0  },
  // 0xb3: f32.convert_i32_u
  { 577, ET_Instruction, 0, 0  },
  // 0xb4: f32.convert_i64_s
  { 575, ET_Instruction, 0, 0  },
  // 0xb5: f32.convert_i64_u
  { 579, ET_Instruction, 0, 0  },
  // 0xb6: f32.demote_f64
  { 581, ET_Instruction, 0, 0  },
  // 0xb7: f64.convert_i32_s
  { 585, ET_Instruction, 0, 0  },
  // 0xb8: f64.convert_i32_u
  { 589, ET_Instruction, 0, 0  },
  // 0xb9: f64.convert_i64_s
  { 587, ET_Instruction, 0, 0  },
  // 0xba: f64.convert_i64_u
  { 591, ET_Instruction, 0, 0  },
  // 0xbb: f64.promote_f32
  { 593, ET_Instruction, 0, 0  },
  // 0xbc: i32.reinterpret_f32
  { 725, ET_Instruction, 0, 0  },
  // 0xbd: i64.reinterpret_f64
  { 755, ET_Instruction, 0, 0  },
  // 0xbe: f32.reinterpret_i32
  { 583, ET_Instruction, 0, 0  },
  // 0xbf: f64.reinterpret_i64
  { 595, ET_Instruction, 0, 0  },
  // 0xc0: i32.extend8_s
  { 723, ET_Instruction, 0, 0  },
  // 0xc1: i32.extend16_s
  { 721, ET_Instruction, 0, 0  },
  // 0xc2: i64.extend8_s
  { 749, ET_Instruction, 0, 0  },
  // 0xc3: i64.extend16_s
  { 745, ET_Instruction, 0, 0  },
  // 0xc4: i64.extend32_s
  { 747, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Prefix, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable252[] = {
  // 0x0: i32.trunc_sat_f32_s
  { 731, ET_Instruction, 0, 0  },
  // 0x1: i32.trunc_sat_f32_u
  { 739, ET_Instruction, 0, 0  },
  // 0x2: i32.trunc_sat_f64_s
  { 733, ET_Instruction, 0, 0  },
  // 0x3: i32.trunc_sat_f64_u
  { 741, ET_Instruction, 0, 0  },
  // 0x4: i64.trunc_sat_f32_s
  { 761, ET_Instruction, 0, 0  },
  // 0x5: i64.trunc_sat_f32_u
  { 769, ET_Instruction, 0, 0  },
  // 0x6: i64.trunc_sat_f64_s
  { 763, ET_Instruction, 0, 0  },
  // 0x7: i64.trunc_sat_f64_u
  { 771, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable253[] = {
  // 0x0: v128.load	$off$align
  { 831, ET_Instruction, 2, 11  },
  // 0x1: v128.store	$off$align
  { 1177, ET_Instruction, 2, 11  },
  // 0x2: v128.const	$i0, $i1, $i2, $i3, $i4, $i5, $i6, $i7, $i8, $i9, $iA, $iB, $iC, $iD, $iE, $iF
  { 463, ET_Instruction, 16, 17  },
  // 0x3: v8x16.shuffle	$m0, $m1, $m2, $m3, $m4, $m5, $m6, $m7, $m8, $m9, $mA, $mB, $mC, $mD, $mE, $mF
  { 1137, ET_Instruction, 16, 17  },
  // 0x4: i8x16.splat
  { 1139, ET_Instruction, 0, 0  },
  // 0x5: i8x16.extract_lane_s	$idx
  { 557, ET_Instruction, 1, 17  },
  // 0x6: i8x16.extract_lane_u	$idx
  { 559, ET_Instruction, 1, 17  },
  // 0x7: i8x16.replace_lane	$idx
  { 1043, ET_Instruction, 1, 17  },
  // 0x8: i16x8.splat
  { 1149, ET_Instruction, 0, 0  },
  // 0x9: i16x8.extract_lane_s	$idx
  { 569, ET_Instruction, 1, 17  },
  // 0xa: i16x8.extract_lane_u	$idx
  { 571, ET_Instruction, 1, 17  },
  // 0xb: i16x8.replace_lane	$idx
  { 1053, ET_Instruction, 1, 17  },
  // 0xc: i32x4.splat
  { 1147, ET_Instruction, 0, 0  },
  // 0xd: i32x4.extract_lane	$idx
  { 567, ET_Instruction, 1, 17  },
  // 0xe: i32x4.replace_lane	$idx
  { 1051, ET_Instruction, 1, 17  },
  // 0xf: i64x2.splat
  { 1143, ET_Instruction, 0, 0  },
  // 0x10: i64x2.extract_lane	$idx
  { 563, ET_Instruction, 1, 17  },
  // 0x11: i64x2.replace_lane	$idx
  { 1047, ET_Instruction, 1, 17  },
  // 0x12: f32x4.splat
  { 1145, ET_Instruction, 0, 0  },
  // 0x13: f32x4.extract_lane	$idx
  { 565, ET_Instruction, 1, 17  },
  // 0x14: f32x4.replace_lane	$idx
  { 1049, ET_Instruction, 1, 17  },
  // 0x15: f64x2.splat
  { 1141, ET_Instruction, 0, 0  },
  // 0x16: f64x2.extract_lane	$idx
  { 561, ET_Instruction, 1, 17  },
  // 0x17: f64x2.replace_lane	$idx
  { 1045, ET_Instruction, 1, 17  },
  // 0x18: i8x16.eq
  { 547, ET_Instruction, 0, 0  },
  // 0x19: i8x16.ne
  { 975, ET_Instruction, 0, 0  },
  // 0x1a: i8x16.lt_s
  { 889, ET_Instruction, 0, 0  },
  // 0x1b: i8x16.lt_u
  { 899, ET_Instruction, 0, 0  },
  // 0x1c: i8x16.gt_s
  { 701, ET_Instruction, 0, 0  },
  // 0x1d: i8x16.gt_u
  { 711, ET_Instruction, 0, 0  },
  // 0x1e: i8x16.le_s
  { 783, ET_Instruction, 0, 0  },
  // 0x1f: i8x16.le_u
  { 793, ET_Instruction, 0, 0  },
  // 0x20: i8x16.ge_s
  { 649, ET_Instruction, 0, 0  },
  // 0x21: i8x16.ge_u
  { 659, ET_Instruction, 0, 0  },
  // 0x22: i16x8.eq
  { 555, ET_Instruction, 0, 0  },
  // 0x23: i16x8.ne
  { 983, ET_Instruction, 0, 0  },
  // 0x24: i16x8.lt_s
  { 893, ET_Instruction, 0, 0  },
  // 0x25: i16x8.lt_u
  { 903, ET_Instruction, 0, 0  },
  // 0x26: i16x8.gt_s
  { 705, ET_Instruction, 0, 0  },
  // 0x27: i16x8.gt_u
  { 715, ET_Instruction, 0, 0  },
  // 0x28: i16x8.le_s
  { 787, ET_Instruction, 0, 0  },
  // 0x29: i16x8.le_u
  { 797, ET_Instruction, 0, 0  },
  // 0x2a: i16x8.ge_s
  { 653, ET_Instruction, 0, 0  },
  // 0x2b: i16x8.ge_u
  { 663, ET_Instruction, 0, 0  },
  // 0x2c: i32x4.eq
  { 553, ET_Instruction, 0, 0  },
  // 0x2d: i32x4.ne
  { 981, ET_Instruction, 0, 0  },
  // 0x2e: i32x4.lt_s
  { 891, ET_Instruction, 0, 0  },
  // 0x2f: i32x4.lt_u
  { 901, ET_Instruction, 0, 0  },
  // 0x30: i32x4.gt_s
  { 703, ET_Instruction, 0, 0  },
  // 0x31: i32x4.gt_u
  { 713, ET_Instruction, 0, 0  },
  // 0x32: i32x4.le_s
  { 785, ET_Instruction, 0, 0  },
  // 0x33: i32x4.le_u
  { 795, ET_Instruction, 0, 0  },
  // 0x34: i32x4.ge_s
  { 651, ET_Instruction, 0, 0  },
  // 0x35: i32x4.ge_u
  { 661, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x40: f32x4.eq
  { 551, ET_Instruction, 0, 0  },
  // 0x41: f32x4.ne
  { 979, ET_Instruction, 0, 0  },
  // 0x42: f32x4.lt
  { 907, ET_Instruction, 0, 0  },
  // 0x43: f32x4.gt
  { 719, ET_Instruction, 0, 0  },
  // 0x44: f32x4.le
  { 801, ET_Instruction, 0, 0  },
  // 0x45: f32x4.ge
  { 667, ET_Instruction, 0, 0  },
  // 0x46: f64x2.eq
  { 549, ET_Instruction, 0, 0  },
  // 0x47: f64x2.ne
  { 977, ET_Instruction, 0, 0  },
  // 0x48: f64x2.lt
  { 905, ET_Instruction, 0, 0  },
  // 0x49: f64x2.gt
  { 717, ET_Instruction, 0, 0  },
  // 0x4a: f64x2.le
  { 799, ET_Instruction, 0, 0  },
  // 0x4b: f64x2.ge
  { 665, ET_Instruction, 0, 0  },
  // 0x4c: v128.not
  { 987, ET_Instruction, 0, 0  },
  // 0x4d: v128.and
  { 195, ET_Instruction, 0, 0  },
  // 0x4e: v128.or
  { 999, ET_Instruction, 0, 0  },
  // 0x4f: v128.xor
  { 1245, ET_Instruction, 0, 0  },
  // 0x50: v128.bitselect
  { 365, ET_Instruction, 0, 0  },
  // 0x51: i8x16.neg
  { 955, ET_Instruction, 0, 0  },
  // 0x52: i8x16.any_true
  { 203, ET_Instruction, 0, 0  },
  // 0x53: i8x16.all_true
  { 183, ET_Instruction, 0, 0  },
  // 0x54: i8x16.shl
  { 1105, ET_Instruction, 0, 0  },
  // 0x55: i8x16.shr_s
  { 1117, ET_Instruction, 0, 0  },
  // 0x56: i8x16.shr_u
  { 1129, ET_Instruction, 0, 0  },
  // 0x57: i8x16.add
  { 167, ET_Instruction, 0, 0  },
  // 0x58: i8x16.add_saturate_s
  { 159, ET_Instruction, 0, 0  },
  // 0x59: i8x16.add_saturate_u
  { 163, ET_Instruction, 0, 0  },
  // 0x5a: i8x16.sub
  { 1205, ET_Instruction, 0, 0  },
  // 0x5b: i8x16.sub_saturate_s
  { 1197, ET_Instruction, 0, 0  },
  // 0x5c: i8x16.sub_saturate_u
  { 1201, ET_Instruction, 0, 0  },
  // 0x5d: i8x16.mul
  { 937, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x62: i16x8.neg
  { 965, ET_Instruction, 0, 0  },
  // 0x63: i16x8.any_true
  { 209, ET_Instruction, 0, 0  },
  // 0x64: i16x8.all_true
  { 189, ET_Instruction, 0, 0  },
  // 0x65: i16x8.shl
  { 1111, ET_Instruction, 0, 0  },
  // 0x66: i16x8.shr_s
  { 1123, ET_Instruction, 0, 0  },
  // 0x67: i16x8.shr_u
  { 1135, ET_Instruction, 0, 0  },
  // 0x68: i16x8.add
  { 177, ET_Instruction, 0, 0  },
  // 0x69: i16x8.add_saturate_s
  { 161, ET_Instruction, 0, 0  },
  // 0x6a: i16x8.add_saturate_u
  { 165, ET_Instruction, 0, 0  },
  // 0x6b: i16x8.sub
  { 1215, ET_Instruction, 0, 0  },
  // 0x6c: i16x8.sub_saturate_s
  { 1199, ET_Instruction, 0, 0  },
  // 0x6d: i16x8.sub_saturate_u
  { 1203, ET_Instruction, 0, 0  },
  // 0x6e: i16x8.mul
  { 945, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x73: i32x4.neg
  { 963, ET_Instruction, 0, 0  },
  // 0x74: i32x4.any_true
  { 207, ET_Instruction, 0, 0  },
  // 0x75: i32x4.all_true
  { 187, ET_Instruction, 0, 0  },
  // 0x76: i32x4.shl
  { 1109, ET_Instruction, 0, 0  },
  // 0x77: i32x4.shr_s
  { 1121, ET_Instruction, 0, 0  },
  // 0x78: i32x4.shr_u
  { 1133, ET_Instruction, 0, 0  },
  // 0x79: i32x4.add
  { 175, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7c: i32x4.sub
  { 1213, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x7f: i32x4.mul
  { 943, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x84: i64x2.neg
  { 959, ET_Instruction, 0, 0  },
  // 0x85: i64x2.any_true
  { 205, ET_Instruction, 0, 0  },
  // 0x86: i64x2.all_true
  { 185, ET_Instruction, 0, 0  },
  // 0x87: i64x2.shl
  { 1107, ET_Instruction, 0, 0  },
  // 0x88: i64x2.shr_s
  { 1119, ET_Instruction, 0, 0  },
  // 0x89: i64x2.shr_u
  { 1131, ET_Instruction, 0, 0  },
  // 0x8a: i64x2.add
  { 171, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x8d: i64x2.sub
  { 1209, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x95: f32x4.abs
  { 149, ET_Instruction, 0, 0  },
  // 0x96: f32x4.neg
  { 961, ET_Instruction, 0, 0  },
  // 0x97: f32x4.sqrt
  { 1157, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x9a: f32x4.add
  { 173, ET_Instruction, 0, 0  },
  // 0x9b: f32x4.sub
  { 1211, ET_Instruction, 0, 0  },
  // 0x9c: f32x4.mul
  { 941, ET_Instruction, 0, 0  },
  // 0x9d: f32x4.div
  { 509, ET_Instruction, 0, 0  },
  // 0x9e: f32x4.min
  { 927, ET_Instruction, 0, 0  },
  // 0x9f: f32x4.max
  { 915, ET_Instruction, 0, 0  },
  // 0xa0: f64x2.abs
  { 147, ET_Instruction, 0, 0  },
  // 0xa1: f64x2.neg
  { 957, ET_Instruction, 0, 0  },
  // 0xa2: f64x2.sqrt
  { 1155, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0xa5: f64x2.add
  { 169, ET_Instruction, 0, 0  },
  // 0xa6: f64x2.sub
  { 1207, ET_Instruction, 0, 0  },
  // 0xa7: f64x2.mul
  { 939, ET_Instruction, 0, 0  },
  // 0xa8: f64x2.div
  { 507, ET_Instruction, 0, 0  },
  // 0xa9: f64x2.min
  { 925, ET_Instruction, 0, 0  },
  // 0xaa: f64x2.max
  { 913, ET_Instruction, 0, 0  },
  // 0xab: i32x4.trunc_sat_f32x4_s
  { 1255, ET_Instruction, 0, 0  },
  // 0xac: i32x4.trunc_sat_f32x4_u
  { 1259, ET_Instruction, 0, 0  },
  // 0xad: i64x2.trunc_sat_f64x2_s
  { 1253, ET_Instruction, 0, 0  },
  // 0xae: i64x2.trunc_sat_f64x2_u
  { 1257, ET_Instruction, 0, 0  },
  // 0xaf: f32x4.convert_i32x4_s
  { 1263, ET_Instruction, 0, 0  },
  // 0xb0: f32x4.convert_i32x4_u
  { 1267, ET_Instruction, 0, 0  },
  // 0xb1: f64x2.convert_i64x2_s
  { 1261, ET_Instruction, 0, 0  },
  // 0xb2: f64x2.convert_i64x2_u
  { 1265, ET_Instruction, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

WebAssemblyInstruction InstructionTable254[] = {
  // 0x0: atomic.notify 	${off}, ${p2align}
  { 247, ET_Instruction, 2, 11  },
  // 0x1: i32.atomic.wait 	${off}, ${p2align}
  { 361, ET_Instruction, 2, 11  },
  // 0x2: i64.atomic.wait 	${off}, ${p2align}
  { 363, ET_Instruction, 2, 11  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  // 0x10: i32.atomic.load	${off}${p2align}
  { 243, ET_Instruction, 2, 11  },
  // 0x11: i64.atomic.load	${off}${p2align}
  { 245, ET_Instruction, 2, 11  },
  // 0x12: i32.atomic.load8_u	${off}${p2align}
  { 239, ET_Instruction, 2, 11  },
  // 0x13: i32.atomic.load16_u	${off}${p2align}
  { 233, ET_Instruction, 2, 11  },
  // 0x14: i64.atomic.load8_u	${off}${p2align}
  { 241, ET_Instruction, 2, 11  },
  // 0x15: i64.atomic.load16_u	${off}${p2align}
  { 235, ET_Instruction, 2, 11  },
  // 0x16: i64.atomic.load32_u	${off}${p2align}
  { 237, ET_Instruction, 2, 11  },
  // 0x17: i32.atomic.store	${off}${p2align}
  { 357, ET_Instruction, 2, 11  },
  // 0x18: i64.atomic.store	${off}${p2align}
  { 359, ET_Instruction, 2, 11  },
  // 0x19: i32.atomic.store8	${off}${p2align}
  { 353, ET_Instruction, 2, 11  },
  // 0x1a: i32.atomic.store16	${off}${p2align}
  { 347, ET_Instruction, 2, 11  },
  // 0x1b: i64.atomic.store8	${off}${p2align}
  { 355, ET_Instruction, 2, 11  },
  // 0x1c: i64.atomic.store16	${off}${p2align}
  { 349, ET_Instruction, 2, 11  },
  // 0x1d: i64.atomic.store32	${off}${p2align}
  { 351, ET_Instruction, 2, 11  },
  // 0x1e: i32.atomic.rmw.add	${off}, ${p2align}
  { 319, ET_Instruction, 2, 11  },
  // 0x1f: i64.atomic.rmw.add	${off}, ${p2align}
  { 321, ET_Instruction, 2, 11  },
  // 0x20: i32.atomic.rmw8.add_u	${off}, ${p2align}
  { 291, ET_Instruction, 2, 11  },
  // 0x21: i32.atomic.rmw16.add_u	${off}, ${p2align}
  { 249, ET_Instruction, 2, 11  },
  // 0x22: i64.atomic.rmw8.add_u	${off}, ${p2align}
  { 293, ET_Instruction, 2, 11  },
  // 0x23: i64.atomic.rmw16.add_u	${off}, ${p2align}
  { 251, ET_Instruction, 2, 11  },
  // 0x24: i64.atomic.rmw32.add_u	${off}, ${p2align}
  { 277, ET_Instruction, 2, 11  },
  // 0x25: i32.atomic.rmw.sub	${off}, ${p2align}
  { 335, ET_Instruction, 2, 11  },
  // 0x26: i64.atomic.rmw.sub	${off}, ${p2align}
  { 337, ET_Instruction, 2, 11  },
  // 0x27: i32.atomic.rmw8.sub_u	${off}, ${p2align}
  { 307, ET_Instruction, 2, 11  },
  // 0x28: i32.atomic.rmw16.sub_u	${off}, ${p2align}
  { 265, ET_Instruction, 2, 11  },
  // 0x29: i64.atomic.rmw8.sub_u	${off}, ${p2align}
  { 309, ET_Instruction, 2, 11  },
  // 0x2a: i64.atomic.rmw16.sub_u	${off}, ${p2align}
  { 267, ET_Instruction, 2, 11  },
  // 0x2b: i64.atomic.rmw32.sub_u	${off}, ${p2align}
  { 285, ET_Instruction, 2, 11  },
  // 0x2c: i32.atomic.rmw.and	${off}, ${p2align}
  { 323, ET_Instruction, 2, 11  },
  // 0x2d: i64.atomic.rmw.and	${off}, ${p2align}
  { 325, ET_Instruction, 2, 11  },
  // 0x2e: i32.atomic.rmw8.and_u	${off}, ${p2align}
  { 295, ET_Instruction, 2, 11  },
  // 0x2f: i32.atomic.rmw16.and_u	${off}, ${p2align}
  { 253, ET_Instruction, 2, 11  },
  // 0x30: i64.atomic.rmw8.and_u	${off}, ${p2align}
  { 297, ET_Instruction, 2, 11  },
  // 0x31: i64.atomic.rmw16.and_u	${off}, ${p2align}
  { 255, ET_Instruction, 2, 11  },
  // 0x32: i64.atomic.rmw32.and_u	${off}, ${p2align}
  { 279, ET_Instruction, 2, 11  },
  // 0x33: i32.atomic.rmw.or	${off}, ${p2align}
  { 331, ET_Instruction, 2, 11  },
  // 0x34: i64.atomic.rmw.or	${off}, ${p2align}
  { 333, ET_Instruction, 2, 11  },
  // 0x35: i32.atomic.rmw8.or_u	${off}, ${p2align}
  { 303, ET_Instruction, 2, 11  },
  // 0x36: i32.atomic.rmw16.or_u	${off}, ${p2align}
  { 261, ET_Instruction, 2, 11  },
  // 0x37: i64.atomic.rmw8.or_u	${off}, ${p2align}
  { 305, ET_Instruction, 2, 11  },
  // 0x38: i64.atomic.rmw16.or_u	${off}, ${p2align}
  { 263, ET_Instruction, 2, 11  },
  // 0x39: i64.atomic.rmw32.or_u	${off}, ${p2align}
  { 283, ET_Instruction, 2, 11  },
  // 0x3a: i32.atomic.rmw.xor	${off}, ${p2align}
  { 343, ET_Instruction, 2, 11  },
  // 0x3b: i64.atomic.rmw.xor	${off}, ${p2align}
  { 345, ET_Instruction, 2, 11  },
  // 0x3c: i32.atomic.rmw8.xor_u	${off}, ${p2align}
  { 315, ET_Instruction, 2, 11  },
  // 0x3d: i32.atomic.rmw16.xor_u	${off}, ${p2align}
  { 273, ET_Instruction, 2, 11  },
  // 0x3e: i64.atomic.rmw8.xor_u	${off}, ${p2align}
  { 317, ET_Instruction, 2, 11  },
  // 0x3f: i64.atomic.rmw16.xor_u	${off}, ${p2align}
  { 275, ET_Instruction, 2, 11  },
  // 0x40: i64.atomic.rmw32.xor_u	${off}, ${p2align}
  { 289, ET_Instruction, 2, 11  },
  // 0x41: i32.atomic.rmw.xchg	${off}, ${p2align}
  { 339, ET_Instruction, 2, 11  },
  // 0x42: i64.atomic.rmw.xchg	${off}, ${p2align}
  { 341, ET_Instruction, 2, 11  },
  // 0x43: i32.atomic.rmw8.xchg_u	${off}, ${p2align}
  { 311, ET_Instruction, 2, 11  },
  // 0x44: i32.atomic.rmw16.xchg_u	${off}, ${p2align}
  { 269, ET_Instruction, 2, 11  },
  // 0x45: i64.atomic.rmw8.xchg_u	${off}, ${p2align}
  { 313, ET_Instruction, 2, 11  },
  // 0x46: i64.atomic.rmw16.xchg_u	${off}, ${p2align}
  { 271, ET_Instruction, 2, 11  },
  // 0x47: i64.atomic.rmw32.xchg_u	${off}, ${p2align}
  { 287, ET_Instruction, 2, 11  },
  // 0x48: i32.atomic.rmw.cmpxchg	${off}, ${p2align}
  { 327, ET_Instruction, 2, 11  },
  // 0x49: i64.atomic.rmw.cmpxchg	${off}, ${p2align}
  { 329, ET_Instruction, 2, 11  },
  // 0x4a: i32.atomic.rmw8.cmpxchg_u	${off}, ${p2align}
  { 299, ET_Instruction, 2, 11  },
  // 0x4b: i32.atomic.rmw16.cmpxchg_u	${off}, ${p2align}
  { 257, ET_Instruction, 2, 11  },
  // 0x4c: i64.atomic.rmw8.cmpxchg_u	${off}, ${p2align}
  { 301, ET_Instruction, 2, 11  },
  // 0x4d: i64.atomic.rmw16.cmpxchg_u	${off}, ${p2align}
  { 259, ET_Instruction, 2, 11  },
  // 0x4e: i64.atomic.rmw32.cmpxchg_u	${off}, ${p2align}
  { 281, ET_Instruction, 2, 11  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
  { 0, ET_Unused, 0, 0  },
};

const uint8_t OperandTable[] = {
  WebAssembly::OPERAND_BASIC_BLOCK,
  WebAssembly::OPERAND_BASIC_BLOCK,
  WebAssembly::OPERAND_SIGNATURE,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_EVENT,
  WebAssembly::OPERAND_BRLIST,
  WebAssembly::OPERAND_FUNCTION32,
  WebAssembly::OPERAND_TYPEINDEX,
  MCOI::OPERAND_IMMEDIATE,
  WebAssembly::OPERAND_LOCAL,
  WebAssembly::OPERAND_GLOBAL,
  WebAssembly::OPERAND_P2ALIGN,
  WebAssembly::OPERAND_OFFSET32,
  WebAssembly::OPERAND_I32IMM,
  WebAssembly::OPERAND_I64IMM,
  WebAssembly::OPERAND_F32IMM,
  WebAssembly::OPERAND_F64IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
  WebAssembly::OPERAND_VEC_I8IMM,
};

struct { uint8_t Prefix; const WebAssemblyInstruction *Table; }
PrefixTable[] = {
  { 252, InstructionTable252 },
  { 253, InstructionTable253 },
  { 254, InstructionTable254 },
  { 0, nullptr }
};

} // End llvm namespace

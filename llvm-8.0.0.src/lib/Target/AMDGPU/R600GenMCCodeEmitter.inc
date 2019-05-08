/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Machine Code Emitter                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

uint64_t R600MCCodeEmitter::getBinaryCodeForInstr(const MCInst &MI,
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
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),
    UINT64_C(0),	// ADD
    UINT64_C(45079976738816),	// ADDC_UINT
    UINT64_C(28587302322176),	// ADD_INT
    UINT64_C(0),	// ALU_CLAUSE
    UINT64_C(26388279066624),	// AND_INT
    UINT64_C(11544872091648),	// ASHR_eg
    UINT64_C(61572651155456),	// ASHR_r600
    UINT64_C(93458488360960),	// BCNT_INT
    UINT64_C(175921860444160),	// BFE_INT_eg
    UINT64_C(140737488355328),	// BFE_UINT_eg
    UINT64_C(211106232532992),	// BFI_INT_eg
    UINT64_C(87960930222080),	// BFM_INT_eg
    UINT64_C(422212465065984),	// BIT_ALIGN_INT_eg
    UINT64_C(9895604649984),	// CEIL
    UINT64_C(11529215046068469760),	// CF_ALU
    UINT64_C(13258597302978740224),	// CF_ALU_BREAK
    UINT64_C(12970366926827028480),	// CF_ALU_CONTINUE
    UINT64_C(13546827679130451968),	// CF_ALU_ELSE_AFTER
    UINT64_C(12105675798371893248),	// CF_ALU_POP_AFTER
    UINT64_C(11817445422220181504),	// CF_ALU_PUSH_BEFORE
    UINT64_C(9565645608534933504),	// CF_CALL_FS_EG
    UINT64_C(9907919180215091200),	// CF_CALL_FS_R600
    UINT64_C(9367487224930631680),	// CF_CONTINUE_EG
    UINT64_C(9511602413006487552),	// CF_CONTINUE_R600
    UINT64_C(9457559217478041600),	// CF_ELSE_EG
    UINT64_C(9691746398101307392),	// CF_ELSE_R600
    UINT64_C(9799832789158199296),	// CF_END_CM
    UINT64_C(9232379236109516800),	// CF_END_EG
    UINT64_C(9232379236109516800),	// CF_END_R600
    UINT64_C(9403516021949595648),	// CF_JUMP_EG
    UINT64_C(9583660007044415488),	// CF_JUMP_R600
    UINT64_C(9421530420459077632),	// CF_PUSH_EG
    UINT64_C(9655717601082343424),	// CF_PUSH_ELSE_R600
    UINT64_C(9241386435364257792),	// CF_TC_EG
    UINT64_C(9259400833873739776),	// CF_TC_R600
    UINT64_C(9259400833873739776),	// CF_VC_EG
    UINT64_C(9295429630892703744),	// CF_VC_R600
    UINT64_C(985162418487296),	// CNDE_INT
    UINT64_C(879609302220800),	// CNDE_eg
    UINT64_C(844424930131968),	// CNDE_r600
    UINT64_C(1055531162664960),	// CNDGE_INT
    UINT64_C(949978046398464),	// CNDGE_eg
    UINT64_C(914793674309632),	// CNDGE_r600
    UINT64_C(1020346790576128),	// CNDGT_INT
    UINT64_C(914793674309632),	// CNDGT_eg
    UINT64_C(879609302220800),	// CNDGT_r600
    UINT64_C(78065325572096),	// COS_cm
    UINT64_C(78065325572096),	// COS_eg
    UINT64_C(61022895341568),	// COS_r600
    UINT64_C(61022895341568),	// COS_r700
    UINT64_C(105553116266496),	// CUBE_eg_real
    UINT64_C(45079976738816),	// CUBE_r600_real
    UINT64_C(104453604638720),	// DOT4_eg
    UINT64_C(43980465111040),	// DOT4_r600
    UINT64_C(9223372036854775808),	// EG_ExportBuf
    UINT64_C(9223372040076001280),	// EG_ExportSwz
    UINT64_C(9313444029402185728),	// END_LOOP_EG
    UINT64_C(9403516021949595648),	// END_LOOP_R600
    UINT64_C(70918499991552),	// EXP_IEEE_cm
    UINT64_C(70918499991552),	// EXP_IEEE_eg
    UINT64_C(53326313947136),	// EXP_IEEE_r600
    UINT64_C(0),	// FETCH_CLAUSE
    UINT64_C(94008244174848),	// FFBH_UINT
    UINT64_C(94557999988736),	// FFBL_INT
    UINT64_C(10995116277760),	// FLOOR
    UINT64_C(89610197663744),	// FLT16_TO_FLT32
    UINT64_C(89060441849856),	// FLT32_TO_FLT16
    UINT64_C(43980465111040),	// FLT_TO_INT_eg
    UINT64_C(58823872086016),	// FLT_TO_INT_r600
    UINT64_C(84662395338752),	// FLT_TO_UINT_eg
    UINT64_C(66520453480448),	// FLT_TO_UINT_r600
    UINT64_C(246290604621824),	// FMA_eg
    UINT64_C(8796093022208),	// FRACT
    UINT64_C(46181635850240),	// GROUP_BARRIER
    UINT64_C(123145302310912),	// INTERP_LOAD_P0
    UINT64_C(4294967295),	// INTERP_PAIR_XY
    UINT64_C(4294967295),	// INTERP_PAIR_ZW
    UINT64_C(4294967295),	// INTERP_VEC_LOAD
    UINT64_C(5747147278385152),	// INTERP_XY
    UINT64_C(5747697034199040),	// INTERP_ZW
    UINT64_C(85212151152640),	// INT_TO_FLT_eg
    UINT64_C(59373627899904),	// INT_TO_FLT_r600
    UINT64_C(24739011624960),	// KILLGT
    UINT64_C(598134325510144),	// LDS_ADD
    UINT64_C(288828510477221888),	// LDS_ADD_RET
    UINT64_C(81662927618179072),	// LDS_AND
    UINT64_C(369893303769890816),	// LDS_AND_RET
    UINT64_C(486986894081523712),	// LDS_BYTE_READ_RET
    UINT64_C(162727720910848000),	// LDS_BYTE_WRITE
    UINT64_C(144713322401366016),	// LDS_CMPST
    UINT64_C(432943698553077760),	// LDS_CMPST_RET
    UINT64_C(54641329853956096),	// LDS_MAX_INT
    UINT64_C(342871706005667840),	// LDS_MAX_INT_RET
    UINT64_C(72655728363438080),	// LDS_MAX_UINT
    UINT64_C(360886104515149824),	// LDS_MAX_UINT_RET
    UINT64_C(45634130599215104),	// LDS_MIN_INT
    UINT64_C(333864506750926848),	// LDS_MIN_INT_RET
    UINT64_C(63648529108697088),	// LDS_MIN_UINT
    UINT64_C(351878905260408832),	// LDS_MIN_UINT_RET
    UINT64_C(90670126872920064),	// LDS_OR
    UINT64_C(378900503024631808),	// LDS_OR_RET
    UINT64_C(450958097062559744),	// LDS_READ_RET
    UINT64_C(505001292591005696),	// LDS_SHORT_READ_RET
    UINT64_C(171734920165588992),	// LDS_SHORT_WRITE
    UINT64_C(9605333580251136),	// LDS_SUB
    UINT64_C(297835709731962880),	// LDS_SUB_RET
    UINT64_C(495994093336264704),	// LDS_UBYTE_READ_RET
    UINT64_C(514008491845746688),	// LDS_USHORT_READ_RET
    UINT64_C(117691724637143040),	// LDS_WRITE
    UINT64_C(117691724637143040),	// LDS_WRXCHG
    UINT64_C(405922100788854784),	// LDS_WRXCHG_RET
    UINT64_C(99677326127661056),	// LDS_XOR
    UINT64_C(387907702279372800),	// LDS_XOR_RET
    UINT64_C(0),	// LITERALS
    UINT64_C(71468255805440),	// LOG_CLAMPED_eg
    UINT64_C(53876069761024),	// LOG_CLAMPED_r600
    UINT64_C(72018011619328),	// LOG_IEEE_cm
    UINT64_C(72018011619328),	// LOG_IEEE_eg
    UINT64_C(54425825574912),	// LOG_IEEE_r600
    UINT64_C(9385501623440113664),	// LOOP_BREAK_EG
    UINT64_C(9547631210025451520),	// LOOP_BREAK_R600
    UINT64_C(12644383719424),	// LSHL_eg
    UINT64_C(62672162783232),	// LSHL_r600
    UINT64_C(12094627905536),	// LSHR_eg
    UINT64_C(62122406969344),	// LSHR_r600
    UINT64_C(1649267441664),	// MAX
    UINT64_C(2748779069440),	// MAX_DX10
    UINT64_C(29686813949952),	// MAX_INT
    UINT64_C(30786325577728),	// MAX_UINT
    UINT64_C(2199023255552),	// MIN
    UINT64_C(3298534883328),	// MIN_DX10
    UINT64_C(30236569763840),	// MIN_INT
    UINT64_C(31336081391616),	// MIN_UINT
    UINT64_C(13743895347200),	// MOV
    UINT64_C(112150186033152),	// MOVA_INT_eg
    UINT64_C(549755813888),	// MUL
    UINT64_C(844424930131968),	// MULADD_IEEE_eg
    UINT64_C(703687441776640),	// MULADD_IEEE_r600
    UINT64_C(281474976710656),	// MULADD_INT24_cm
    UINT64_C(562949953421312),	// MULADD_UINT24_eg
    UINT64_C(703687441776640),	// MULADD_eg
    UINT64_C(562949953421312),	// MULADD_r600
    UINT64_C(79164837199872),	// MULHI_INT_cm
    UINT64_C(50577534877696),	// MULHI_INT_cm24
    UINT64_C(79164837199872),	// MULHI_INT_eg
    UINT64_C(63771674411008),	// MULHI_INT_r600
    UINT64_C(97856534872064),	// MULHI_UINT24_eg
    UINT64_C(80264348827648),	// MULHI_UINT_cm
    UINT64_C(97856534872064),	// MULHI_UINT_cm24
    UINT64_C(80264348827648),	// MULHI_UINT_eg
    UINT64_C(64871186038784),	// MULHI_UINT_r600
    UINT64_C(78615081385984),	// MULLO_INT_cm
    UINT64_C(78615081385984),	// MULLO_INT_eg
    UINT64_C(63221918597120),	// MULLO_INT_r600
    UINT64_C(79714593013760),	// MULLO_UINT_cm
    UINT64_C(79714593013760),	// MULLO_UINT_eg
    UINT64_C(64321430224896),	// MULLO_UINT_r600
    UINT64_C(1099511627776),	// MUL_IEEE
    UINT64_C(50027779063808),	// MUL_INT24_cm
    UINT64_C(1090715534753792),	// MUL_LIT_eg
    UINT64_C(422212465065984),	// MUL_LIT_r600
    UINT64_C(99505802313728),	// MUL_UINT24_eg
    UINT64_C(28037546508288),	// NOT_INT
    UINT64_C(26938034880512),	// OR_INT
    UINT64_C(0),	// PAD
    UINT64_C(9475573615987523584),	// POP_EG
    UINT64_C(9727775195120271360),	// POP_R600
    UINT64_C(17592186044416),	// PRED_SETE
    UINT64_C(36283883716608),	// PRED_SETE_INT
    UINT64_C(18691697672192),	// PRED_SETGE
    UINT64_C(37383395344384),	// PRED_SETGE_INT
    UINT64_C(18141941858304),	// PRED_SETGT
    UINT64_C(36833639530496),	// PRED_SETGT_INT
    UINT64_C(19241453486080),	// PRED_SETNE
    UINT64_C(37933151158272),	// PRED_SETNE_INT
    UINT64_C(9223372036854775808),	// R600_ExportBuf
    UINT64_C(9223372040076001280),	// R600_ExportSwz
    UINT64_C(10772874191460901488),	// RAT_ATOMIC_ADD_NORET
    UINT64_C(10772874191460900976),	// RAT_ATOMIC_ADD_RTN
    UINT64_C(10772874191460901600),	// RAT_ATOMIC_AND_NORET
    UINT64_C(10772874191460901088),	// RAT_ATOMIC_AND_RTN
    UINT64_C(10772874191460901440),	// RAT_ATOMIC_CMPXCHG_INT_NORET
    UINT64_C(10772874191460900928),	// RAT_ATOMIC_CMPXCHG_INT_RTN
    UINT64_C(10772874191460901680),	// RAT_ATOMIC_DEC_UINT_NORET
    UINT64_C(10772874191460901168),	// RAT_ATOMIC_DEC_UINT_RTN
    UINT64_C(10772874191460901664),	// RAT_ATOMIC_INC_UINT_NORET
    UINT64_C(10772874191460901152),	// RAT_ATOMIC_INC_UINT_RTN
    UINT64_C(10772874191460901568),	// RAT_ATOMIC_MAX_INT_NORET
    UINT64_C(10772874191460901056),	// RAT_ATOMIC_MAX_INT_RTN
    UINT64_C(10772874191460901584),	// RAT_ATOMIC_MAX_UINT_NORET
    UINT64_C(10772874191460901072),	// RAT_ATOMIC_MAX_UINT_RTN
    UINT64_C(10772874191460901536),	// RAT_ATOMIC_MIN_INT_NORET
    UINT64_C(10772874191460901024),	// RAT_ATOMIC_MIN_INT_RTN
    UINT64_C(10772874191460901552),	// RAT_ATOMIC_MIN_UINT_NORET
    UINT64_C(10772874191460901040),	// RAT_ATOMIC_MIN_UINT_RTN
    UINT64_C(10772874191460901616),	// RAT_ATOMIC_OR_NORET
    UINT64_C(10772874191460901104),	// RAT_ATOMIC_OR_RTN
    UINT64_C(10772874191460901520),	// RAT_ATOMIC_RSUB_NORET
    UINT64_C(10772874191460901008),	// RAT_ATOMIC_RSUB_RTN
    UINT64_C(10772874191460901504),	// RAT_ATOMIC_SUB_NORET
    UINT64_C(10772874191460900992),	// RAT_ATOMIC_SUB_RTN
    UINT64_C(10772874191460901408),	// RAT_ATOMIC_XCHG_INT_NORET
    UINT64_C(10772874191460900880),	// RAT_ATOMIC_XCHG_INT_RTN
    UINT64_C(10772874191460901632),	// RAT_ATOMIC_XOR_NORET
    UINT64_C(10772874191460901120),	// RAT_ATOMIC_XOR_RTN
    UINT64_C(10772874191460901136),	// RAT_MSKOR
    UINT64_C(10790888589970383168),	// RAT_STORE_DWORD128
    UINT64_C(10790642299365761344),	// RAT_STORE_DWORD32
    UINT64_C(10790677483737850176),	// RAT_STORE_DWORD64
    UINT64_C(10772874191460900880),	// RAT_STORE_TYPED_cm
    UINT64_C(10772874191460900880),	// RAT_STORE_TYPED_eg
    UINT64_C(10790888589970382880),	// RAT_WRITE_CACHELESS_128_eg
    UINT64_C(10790642299365761056),	// RAT_WRITE_CACHELESS_32_eg
    UINT64_C(10790677483737849888),	// RAT_WRITE_CACHELESS_64_eg
    UINT64_C(74217034874880),	// RECIPSQRT_CLAMPED_cm
    UINT64_C(74217034874880),	// RECIPSQRT_CLAMPED_eg
    UINT64_C(56624848830464),	// RECIPSQRT_CLAMPED_r600
    UINT64_C(75316546502656),	// RECIPSQRT_IEEE_cm
    UINT64_C(75316546502656),	// RECIPSQRT_IEEE_eg
    UINT64_C(57724360458240),	// RECIPSQRT_IEEE_r600
    UINT64_C(72567767433216),	// RECIP_CLAMPED_cm
    UINT64_C(72567767433216),	// RECIP_CLAMPED_eg
    UINT64_C(54975581388800),	// RECIP_CLAMPED_r600
    UINT64_C(73667279060992),	// RECIP_IEEE_cm
    UINT64_C(73667279060992),	// RECIP_IEEE_eg
    UINT64_C(56075093016576),	// RECIP_IEEE_r600
    UINT64_C(81363860455424),	// RECIP_UINT_eg
    UINT64_C(65970697666560),	// RECIP_UINT_r600
    UINT64_C(10445360463872),	// RNDNE
    UINT64_C(4398046511104),	// SETE
    UINT64_C(6597069766656),	// SETE_DX10
    UINT64_C(31885837205504),	// SETE_INT
    UINT64_C(7696581394432),	// SETGE_DX10
    UINT64_C(32985348833280),	// SETGE_INT
    UINT64_C(34634616274944),	// SETGE_UINT
    UINT64_C(7146825580544),	// SETGT_DX10
    UINT64_C(32435593019392),	// SETGT_INT
    UINT64_C(34084860461056),	// SETGT_UINT
    UINT64_C(8246337208320),	// SETNE_DX10
    UINT64_C(33535104647168),	// SETNE_INT
    UINT64_C(5497558138880),	// SGE
    UINT64_C(4947802324992),	// SGT
    UINT64_C(77515569758208),	// SIN_cm
    UINT64_C(77515569758208),	// SIN_eg
    UINT64_C(60473139527680),	// SIN_r600
    UINT64_C(60473139527680),	// SIN_r700
    UINT64_C(6047313952768),	// SNE
    UINT64_C(45629732552704),	// SUBB_UINT
    UINT64_C(29137058136064),	// SUB_INT
    UINT64_C(7),	// TEX_GET_GRADIENTS_H
    UINT64_C(8),	// TEX_GET_GRADIENTS_V
    UINT64_C(4),	// TEX_GET_TEXTURE_RESINFO
    UINT64_C(3),	// TEX_LD
    UINT64_C(35),	// TEX_LDPTR
    UINT64_C(16),	// TEX_SAMPLE
    UINT64_C(24),	// TEX_SAMPLE_C
    UINT64_C(28),	// TEX_SAMPLE_C_G
    UINT64_C(25),	// TEX_SAMPLE_C_L
    UINT64_C(26),	// TEX_SAMPLE_C_LB
    UINT64_C(20),	// TEX_SAMPLE_G
    UINT64_C(17),	// TEX_SAMPLE_L
    UINT64_C(18),	// TEX_SAMPLE_LB
    UINT64_C(11),	// TEX_SET_GRADIENTS_H
    UINT64_C(12),	// TEX_SET_GRADIENTS_V
    UINT64_C(16775081780284751936),	// TEX_VTX_CONSTBUF
    UINT64_C(9236056004066541632),	// TEX_VTX_TEXBUF
    UINT64_C(9345848836096),	// TRUNC
    UINT64_C(85761906966528),	// UINT_TO_FLT_eg
    UINT64_C(59923383713792),	// UINT_TO_FLT_r600
    UINT64_C(1769087820812517440),	// VTX_READ_128_cm
    UINT64_C(1769087821886259264),	// VTX_READ_128_eg
    UINT64_C(1251983104222953536),	// VTX_READ_16_cm
    UINT64_C(1251983104357171264),	// VTX_READ_16_eg
    UINT64_C(1396098292298809408),	// VTX_READ_32_cm
    UINT64_C(1396098292567244864),	// VTX_READ_32_eg
    UINT64_C(1684223115334254656),	// VTX_READ_64_cm
    UINT64_C(1684223115871125568),	// VTX_READ_64_eg
    UINT64_C(1179925510185025600),	// VTX_READ_8_cm
    UINT64_C(1179925510252134464),	// VTX_READ_8_eg
    UINT64_C(9331458427911667712),	// WHILE_LOOP_EG
    UINT64_C(9439544818968559616),	// WHILE_LOOP_R600
    UINT64_C(27487790694400),	// XOR_INT
    UINT64_C(0)
  };
  const unsigned opcode = MI.getOpcode();
  uint64_t Value = InstBits[opcode];
  uint64_t op = 0;
  (void)op;  // suppress warning
  switch (opcode) {
    case R600::CF_CALL_FS_EG:
    case R600::CF_CALL_FS_R600:
    case R600::CF_END_CM:
    case R600::CF_END_EG:
    case R600::CF_END_R600:
    case R600::GROUP_BARRIER:
    case R600::INTERP_PAIR_XY:
    case R600::INTERP_PAIR_ZW:
    case R600::INTERP_VEC_LOAD:
    case R600::PAD: {
      break;
    }
    case R600::CF_CONTINUE_EG:
    case R600::END_LOOP_EG:
    case R600::LOOP_BREAK_EG:
    case R600::WHILE_LOOP_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(16777215);
      break;
    }
    case R600::CF_TC_EG:
    case R600::CF_VC_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(16777215);
      // op: COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(63)) << 42;
      break;
    }
    case R600::CF_ELSE_EG:
    case R600::CF_JUMP_EG:
    case R600::CF_PUSH_EG:
    case R600::POP_EG: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(16777215);
      // op: POP_COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 32;
      break;
    }
    case R600::CF_ALU:
    case R600::CF_ALU_BREAK:
    case R600::CF_ALU_CONTINUE:
    case R600::CF_ALU_ELSE_AFTER:
    case R600::CF_ALU_POP_AFTER:
    case R600::CF_ALU_PUSH_BEFORE: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4194303);
      // op: KCACHE_BANK0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 22;
      // op: KCACHE_BANK1
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 26;
      // op: KCACHE_MODE0
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 30;
      // op: KCACHE_MODE1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 32;
      // op: KCACHE_ADDR0
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 34;
      // op: KCACHE_ADDR1
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 42;
      // op: COUNT
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 50;
      break;
    }
    case R600::CF_CONTINUE_R600:
    case R600::CF_PUSH_ELSE_R600:
    case R600::END_LOOP_R600:
    case R600::LOOP_BREAK_R600:
    case R600::WHILE_LOOP_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      break;
    }
    case R600::CF_TC_R600:
    case R600::CF_VC_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: CNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(8)) << 48;
      Value |= (op & UINT64_C(7)) << 42;
      break;
    }
    case R600::CF_ELSE_R600:
    case R600::CF_JUMP_R600:
    case R600::POP_R600: {
      // op: ADDR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: POP_COUNT
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 32;
      break;
    }
    case R600::TEX_GET_GRADIENTS_H:
    case R600::TEX_GET_GRADIENTS_V:
    case R600::TEX_GET_TEXTURE_RESINFO:
    case R600::TEX_LD:
    case R600::TEX_LDPTR:
    case R600::TEX_SAMPLE:
    case R600::TEX_SAMPLE_C:
    case R600::TEX_SAMPLE_C_G:
    case R600::TEX_SAMPLE_C_L:
    case R600::TEX_SAMPLE_C_LB:
    case R600::TEX_SAMPLE_G:
    case R600::TEX_SAMPLE_L:
    case R600::TEX_SAMPLE_LB:
    case R600::TEX_SET_GRADIENTS_H:
    case R600::TEX_SET_GRADIENTS_V: {
      // op: RESOURCE_ID
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 8;
      // op: SRC_GPR
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 16;
      // op: DST_GPR
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 32;
      // op: DST_SEL_X
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 41;
      // op: DST_SEL_Y
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 44;
      // op: DST_SEL_Z
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 47;
      // op: DST_SEL_W
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      // op: COORD_TYPE_X
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 60;
      // op: COORD_TYPE_Y
      op = getMachineOpValue(MI, MI.getOperand(16), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 61;
      // op: COORD_TYPE_Z
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 62;
      // op: COORD_TYPE_W
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 63;
      break;
    }
    case R600::EG_ExportBuf: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(8191);
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 13;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: arraySize
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(4095)) << 32;
      // op: compMask
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 44;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 54;
      break;
    }
    case R600::R600_ExportBuf: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(8191);
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 13;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: arraySize
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(4095)) << 32;
      // op: compMask
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(15)) << 44;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 55;
      break;
    }
    case R600::EG_ExportSwz: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(8191);
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 13;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: sw_x
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 32;
      // op: sw_y
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 35;
      // op: sw_z
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 38;
      // op: sw_w
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 41;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 54;
      break;
    }
    case R600::R600_ExportSwz: {
      // op: arraybase
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(8191);
      // op: type
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 13;
      // op: gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: sw_x
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 32;
      // op: sw_y
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 35;
      // op: sw_z
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 38;
      // op: sw_w
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 41;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      // op: inst
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 55;
      break;
    }
    case R600::TEX_VTX_CONSTBUF:
    case R600::TEX_VTX_TEXBUF: {
      // op: dst_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 32;
      // op: src_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 16;
      // op: buffer_id
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 8;
      break;
    }
    case R600::LITERALS: {
      // op: literal1
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(4294967295);
      // op: literal2
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(4294967295)) << 32;
      break;
    }
    case R600::ALU_CLAUSE:
    case R600::FETCH_CLAUSE: {
      // op: num
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= op & UINT64_C(255);
      break;
    }
    case R600::RAT_STORE_TYPED_cm: {
      // op: rat_id
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 23;
      break;
    }
    case R600::RAT_STORE_TYPED_eg: {
      // op: rat_id
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= op & UINT64_C(15);
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 23;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      break;
    }
    case R600::RAT_MSKOR:
    case R600::RAT_STORE_DWORD128:
    case R600::RAT_STORE_DWORD32:
    case R600::RAT_STORE_DWORD64: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 23;
      break;
    }
    case R600::RAT_WRITE_CACHELESS_128_eg:
    case R600::RAT_WRITE_CACHELESS_32_eg:
    case R600::RAT_WRITE_CACHELESS_64_eg: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 23;
      // op: eop
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 53;
      break;
    }
    case R600::RAT_ATOMIC_ADD_NORET:
    case R600::RAT_ATOMIC_ADD_RTN:
    case R600::RAT_ATOMIC_AND_NORET:
    case R600::RAT_ATOMIC_AND_RTN:
    case R600::RAT_ATOMIC_CMPXCHG_INT_NORET:
    case R600::RAT_ATOMIC_CMPXCHG_INT_RTN:
    case R600::RAT_ATOMIC_DEC_UINT_NORET:
    case R600::RAT_ATOMIC_DEC_UINT_RTN:
    case R600::RAT_ATOMIC_INC_UINT_NORET:
    case R600::RAT_ATOMIC_INC_UINT_RTN:
    case R600::RAT_ATOMIC_MAX_INT_NORET:
    case R600::RAT_ATOMIC_MAX_INT_RTN:
    case R600::RAT_ATOMIC_MAX_UINT_NORET:
    case R600::RAT_ATOMIC_MAX_UINT_RTN:
    case R600::RAT_ATOMIC_MIN_INT_NORET:
    case R600::RAT_ATOMIC_MIN_INT_RTN:
    case R600::RAT_ATOMIC_MIN_UINT_NORET:
    case R600::RAT_ATOMIC_MIN_UINT_RTN:
    case R600::RAT_ATOMIC_OR_NORET:
    case R600::RAT_ATOMIC_OR_RTN:
    case R600::RAT_ATOMIC_RSUB_NORET:
    case R600::RAT_ATOMIC_RSUB_RTN:
    case R600::RAT_ATOMIC_SUB_NORET:
    case R600::RAT_ATOMIC_SUB_RTN:
    case R600::RAT_ATOMIC_XCHG_INT_NORET:
    case R600::RAT_ATOMIC_XCHG_INT_RTN:
    case R600::RAT_ATOMIC_XOR_NORET:
    case R600::RAT_ATOMIC_XOR_RTN: {
      // op: rw_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 15;
      // op: index_gpr
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 23;
      break;
    }
    case R600::LDS_CMPST: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 41;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      break;
    }
    case R600::LDS_ADD:
    case R600::LDS_AND:
    case R600::LDS_BYTE_WRITE:
    case R600::LDS_MAX_INT:
    case R600::LDS_MAX_UINT:
    case R600::LDS_MIN_INT:
    case R600::LDS_MIN_UINT:
    case R600::LDS_OR:
    case R600::LDS_SHORT_WRITE:
    case R600::LDS_SUB:
    case R600::LDS_WRITE:
    case R600::LDS_WRXCHG:
    case R600::LDS_XOR: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      break;
    }
    case R600::LDS_BYTE_READ_RET:
    case R600::LDS_READ_RET:
    case R600::LDS_SHORT_READ_RET:
    case R600::LDS_UBYTE_READ_RET:
    case R600::LDS_USHORT_READ_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      break;
    }
    case R600::LDS_CMPST_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 41;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      break;
    }
    case R600::LDS_ADD_RET:
    case R600::LDS_AND_RET:
    case R600::LDS_MAX_INT_RET:
    case R600::LDS_MAX_UINT_RET:
    case R600::LDS_MIN_INT_RET:
    case R600::LDS_MIN_UINT_RET:
    case R600::LDS_OR_RET:
    case R600::LDS_SUB_RET:
    case R600::LDS_WRXCHG_RET:
    case R600::LDS_XOR_RET: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      break;
    }
    case R600::BFE_INT_eg:
    case R600::BFE_UINT_eg:
    case R600::BFI_INT_eg:
    case R600::BIT_ALIGN_INT_eg:
    case R600::CNDE_INT:
    case R600::CNDE_eg:
    case R600::CNDE_r600:
    case R600::CNDGE_INT:
    case R600::CNDGE_eg:
    case R600::CNDGE_r600:
    case R600::CNDGT_INT:
    case R600::CNDGT_eg:
    case R600::CNDGT_r600:
    case R600::FMA_eg:
    case R600::MULADD_IEEE_eg:
    case R600::MULADD_IEEE_r600:
    case R600::MULADD_INT24_cm:
    case R600::MULADD_UINT24_eg:
    case R600::MULADD_eg:
    case R600::MULADD_r600:
    case R600::MUL_LIT_eg:
    case R600::MUL_LIT_r600: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(16), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 60;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 63;
      // op: src2
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 33;
      Value |= (op & UINT64_C(511)) << 32;
      // op: src2_rel
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 41;
      // op: src2_neg
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 44;
      break;
    }
    case R600::BCNT_INT:
    case R600::CEIL:
    case R600::COS_cm:
    case R600::COS_eg:
    case R600::COS_r600:
    case R600::COS_r700:
    case R600::EXP_IEEE_cm:
    case R600::EXP_IEEE_eg:
    case R600::EXP_IEEE_r600:
    case R600::FFBH_UINT:
    case R600::FFBL_INT:
    case R600::FLOOR:
    case R600::FLT16_TO_FLT32:
    case R600::FLT32_TO_FLT16:
    case R600::FLT_TO_INT_eg:
    case R600::FLT_TO_INT_r600:
    case R600::FLT_TO_UINT_eg:
    case R600::FLT_TO_UINT_r600:
    case R600::FRACT:
    case R600::INTERP_LOAD_P0:
    case R600::INT_TO_FLT_eg:
    case R600::INT_TO_FLT_r600:
    case R600::LOG_CLAMPED_eg:
    case R600::LOG_CLAMPED_r600:
    case R600::LOG_IEEE_cm:
    case R600::LOG_IEEE_eg:
    case R600::LOG_IEEE_r600:
    case R600::MOV:
    case R600::MOVA_INT_eg:
    case R600::NOT_INT:
    case R600::RECIPSQRT_CLAMPED_cm:
    case R600::RECIPSQRT_CLAMPED_eg:
    case R600::RECIPSQRT_CLAMPED_r600:
    case R600::RECIPSQRT_IEEE_cm:
    case R600::RECIPSQRT_IEEE_eg:
    case R600::RECIPSQRT_IEEE_r600:
    case R600::RECIP_CLAMPED_cm:
    case R600::RECIP_CLAMPED_eg:
    case R600::RECIP_CLAMPED_r600:
    case R600::RECIP_IEEE_cm:
    case R600::RECIP_IEEE_eg:
    case R600::RECIP_IEEE_r600:
    case R600::RECIP_UINT_eg:
    case R600::RECIP_UINT_r600:
    case R600::RNDNE:
    case R600::SIN_cm:
    case R600::SIN_eg:
    case R600::SIN_r600:
    case R600::SIN_r700:
    case R600::TRUNC:
    case R600::UINT_TO_FLT_eg:
    case R600::UINT_TO_FLT_r600: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(11), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 60;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 63;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 32;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 36;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 37;
      break;
    }
    case R600::ADD:
    case R600::ADDC_UINT:
    case R600::ADD_INT:
    case R600::AND_INT:
    case R600::ASHR_eg:
    case R600::ASHR_r600:
    case R600::BFM_INT_eg:
    case R600::CUBE_eg_real:
    case R600::CUBE_r600_real:
    case R600::DOT4_eg:
    case R600::DOT4_r600:
    case R600::KILLGT:
    case R600::LSHL_eg:
    case R600::LSHL_r600:
    case R600::LSHR_eg:
    case R600::LSHR_r600:
    case R600::MAX:
    case R600::MAX_DX10:
    case R600::MAX_INT:
    case R600::MAX_UINT:
    case R600::MIN:
    case R600::MIN_DX10:
    case R600::MIN_INT:
    case R600::MIN_UINT:
    case R600::MUL:
    case R600::MULHI_INT_cm:
    case R600::MULHI_INT_cm24:
    case R600::MULHI_INT_eg:
    case R600::MULHI_INT_r600:
    case R600::MULHI_UINT24_eg:
    case R600::MULHI_UINT_cm:
    case R600::MULHI_UINT_cm24:
    case R600::MULHI_UINT_eg:
    case R600::MULHI_UINT_r600:
    case R600::MULLO_INT_cm:
    case R600::MULLO_INT_eg:
    case R600::MULLO_INT_r600:
    case R600::MULLO_UINT_cm:
    case R600::MULLO_UINT_eg:
    case R600::MULLO_UINT_r600:
    case R600::MUL_IEEE:
    case R600::MUL_INT24_cm:
    case R600::MUL_UINT24_eg:
    case R600::OR_INT:
    case R600::PRED_SETE:
    case R600::PRED_SETE_INT:
    case R600::PRED_SETGE:
    case R600::PRED_SETGE_INT:
    case R600::PRED_SETGT:
    case R600::PRED_SETGT_INT:
    case R600::PRED_SETNE:
    case R600::PRED_SETNE_INT:
    case R600::SETE:
    case R600::SETE_DX10:
    case R600::SETE_INT:
    case R600::SETGE_DX10:
    case R600::SETGE_INT:
    case R600::SETGE_UINT:
    case R600::SETGT_DX10:
    case R600::SETGT_INT:
    case R600::SETGT_UINT:
    case R600::SETNE_DX10:
    case R600::SETNE_INT:
    case R600::SGE:
    case R600::SGT:
    case R600::SNE:
    case R600::SUBB_UINT:
    case R600::SUB_INT:
    case R600::XOR_INT: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(14), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: bank_swizzle
      op = getMachineOpValue(MI, MI.getOperand(20), Fixups, STI);
      Value |= (op & UINT64_C(7)) << 50;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 60;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 63;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 32;
      // op: src1_abs
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 33;
      // op: update_exec_mask
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 34;
      // op: update_pred
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 35;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 36;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 37;
      break;
    }
    case R600::INTERP_XY:
    case R600::INTERP_ZW: {
      // op: src0
      op = getMachineOpValue(MI, MI.getOperand(7), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 1;
      Value |= op & UINT64_C(511);
      // op: src0_rel
      op = getMachineOpValue(MI, MI.getOperand(9), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 9;
      // op: src1
      op = getMachineOpValue(MI, MI.getOperand(12), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 14;
      Value |= (op & UINT64_C(511)) << 13;
      // op: src1_rel
      op = getMachineOpValue(MI, MI.getOperand(14), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 22;
      // op: pred_sel
      op = getMachineOpValue(MI, MI.getOperand(18), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 29;
      // op: last
      op = getMachineOpValue(MI, MI.getOperand(17), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 31;
      // op: src0_neg
      op = getMachineOpValue(MI, MI.getOperand(8), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 12;
      // op: src1_neg
      op = getMachineOpValue(MI, MI.getOperand(13), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 25;
      // op: dst
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(1536)) << 52;
      Value |= (op & UINT64_C(127)) << 53;
      // op: dst_rel
      op = getMachineOpValue(MI, MI.getOperand(5), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 60;
      // op: clamp
      op = getMachineOpValue(MI, MI.getOperand(6), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 63;
      // op: src0_abs
      op = getMachineOpValue(MI, MI.getOperand(10), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 32;
      // op: src1_abs
      op = getMachineOpValue(MI, MI.getOperand(15), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 33;
      // op: update_exec_mask
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 34;
      // op: update_pred
      op = getMachineOpValue(MI, MI.getOperand(2), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 35;
      // op: write
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(1)) << 36;
      // op: omod
      op = getMachineOpValue(MI, MI.getOperand(4), Fixups, STI);
      Value |= (op & UINT64_C(3)) << 37;
      break;
    }
    case R600::VTX_READ_128_cm:
    case R600::VTX_READ_128_eg:
    case R600::VTX_READ_16_cm:
    case R600::VTX_READ_16_eg:
    case R600::VTX_READ_32_cm:
    case R600::VTX_READ_32_eg:
    case R600::VTX_READ_64_cm:
    case R600::VTX_READ_64_eg:
    case R600::VTX_READ_8_cm:
    case R600::VTX_READ_8_eg: {
      // op: src_gpr
      op = getMachineOpValue(MI, MI.getOperand(1), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 16;
      // op: buffer_id
      op = getMachineOpValue(MI, MI.getOperand(3), Fixups, STI);
      Value |= (op & UINT64_C(255)) << 8;
      // op: dst_gpr
      op = getMachineOpValue(MI, MI.getOperand(0), Fixups, STI);
      Value |= (op & UINT64_C(127)) << 32;
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
uint64_t R600MCCodeEmitter::
computeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  return Features;
}

void R600MCCodeEmitter::verifyInstructionPredicates(
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
    0, // BRANCH = 142
    0, // BRANCH_COND_f32 = 143
    0, // BRANCH_COND_i32 = 144
    0, // BREAK = 145
    0, // BREAKC_f32 = 146
    0, // BREAKC_i32 = 147
    0, // BREAK_LOGICALNZ_f32 = 148
    0, // BREAK_LOGICALNZ_i32 = 149
    0, // BREAK_LOGICALZ_f32 = 150
    0, // BREAK_LOGICALZ_i32 = 151
    0, // CONST_COPY = 152
    0, // CONTINUE = 153
    0, // CONTINUEC_f32 = 154
    0, // CONTINUEC_i32 = 155
    0, // CONTINUE_LOGICALNZ_f32 = 156
    0, // CONTINUE_LOGICALNZ_i32 = 157
    0, // CONTINUE_LOGICALZ_f32 = 158
    0, // CONTINUE_LOGICALZ_i32 = 159
    0, // CUBE_eg_pseudo = 160
    0, // CUBE_r600_pseudo = 161
    0, // DEFAULT = 162
    0, // DOT_4 = 163
    0, // DUMMY_CHAIN = 164
    0, // ELSE = 165
    0, // END = 166
    0, // ENDFUNC = 167
    0, // ENDIF = 168
    0, // ENDLOOP = 169
    0, // ENDMAIN = 170
    0, // ENDSWITCH = 171
    0, // FABS_R600 = 172
    0, // FNEG_R600 = 173
    0, // FUNC = 174
    0, // IFC_f32 = 175
    0, // IFC_i32 = 176
    0, // IF_LOGICALNZ_f32 = 177
    0, // IF_LOGICALNZ_i32 = 178
    0, // IF_LOGICALZ_f32 = 179
    0, // IF_LOGICALZ_i32 = 180
    0, // IF_PREDICATE_SET = 181
    0, // JUMP = 182
    0, // JUMP_COND = 183
    0, // MASK_WRITE = 184
    0, // MOV_IMM_F32 = 185
    0, // MOV_IMM_GLOBAL_ADDR = 186
    0, // MOV_IMM_I32 = 187
    0, // PRED_X = 188
    0, // R600_EXTRACT_ELT_V2 = 189
    0, // R600_EXTRACT_ELT_V4 = 190
    0, // R600_INSERT_ELT_V2 = 191
    0, // R600_INSERT_ELT_V4 = 192
    0, // R600_RegisterLoad = 193
    0, // R600_RegisterStore = 194
    0, // RETDYN = 195
    0, // RETURN = 196
    0, // TXD = 197
    0, // TXD_SHADOW = 198
    0, // WHILELOOP = 199
    0, // ADD = 200
    0, // ADDC_UINT = 201
    0, // ADD_INT = 202
    0, // ALU_CLAUSE = 203
    0, // AND_INT = 204
    0, // ASHR_eg = 205
    0, // ASHR_r600 = 206
    0, // BCNT_INT = 207
    0, // BFE_INT_eg = 208
    0, // BFE_UINT_eg = 209
    0, // BFI_INT_eg = 210
    0, // BFM_INT_eg = 211
    0, // BIT_ALIGN_INT_eg = 212
    0, // CEIL = 213
    0, // CF_ALU = 214
    0, // CF_ALU_BREAK = 215
    0, // CF_ALU_CONTINUE = 216
    0, // CF_ALU_ELSE_AFTER = 217
    0, // CF_ALU_POP_AFTER = 218
    0, // CF_ALU_PUSH_BEFORE = 219
    0, // CF_CALL_FS_EG = 220
    0, // CF_CALL_FS_R600 = 221
    0, // CF_CONTINUE_EG = 222
    0, // CF_CONTINUE_R600 = 223
    0, // CF_ELSE_EG = 224
    0, // CF_ELSE_R600 = 225
    0, // CF_END_CM = 226
    0, // CF_END_EG = 227
    0, // CF_END_R600 = 228
    0, // CF_JUMP_EG = 229
    0, // CF_JUMP_R600 = 230
    0, // CF_PUSH_EG = 231
    0, // CF_PUSH_ELSE_R600 = 232
    0, // CF_TC_EG = 233
    0, // CF_TC_R600 = 234
    0, // CF_VC_EG = 235
    0, // CF_VC_R600 = 236
    0, // CNDE_INT = 237
    0, // CNDE_eg = 238
    0, // CNDE_r600 = 239
    0, // CNDGE_INT = 240
    0, // CNDGE_eg = 241
    0, // CNDGE_r600 = 242
    0, // CNDGT_INT = 243
    0, // CNDGT_eg = 244
    0, // CNDGT_r600 = 245
    0, // COS_cm = 246
    0, // COS_eg = 247
    0, // COS_r600 = 248
    0, // COS_r700 = 249
    0, // CUBE_eg_real = 250
    0, // CUBE_r600_real = 251
    0, // DOT4_eg = 252
    0, // DOT4_r600 = 253
    0, // EG_ExportBuf = 254
    0, // EG_ExportSwz = 255
    0, // END_LOOP_EG = 256
    0, // END_LOOP_R600 = 257
    0, // EXP_IEEE_cm = 258
    0, // EXP_IEEE_eg = 259
    0, // EXP_IEEE_r600 = 260
    0, // FETCH_CLAUSE = 261
    0, // FFBH_UINT = 262
    0, // FFBL_INT = 263
    0, // FLOOR = 264
    0, // FLT16_TO_FLT32 = 265
    0, // FLT32_TO_FLT16 = 266
    0, // FLT_TO_INT_eg = 267
    0, // FLT_TO_INT_r600 = 268
    0, // FLT_TO_UINT_eg = 269
    0, // FLT_TO_UINT_r600 = 270
    0, // FMA_eg = 271
    0, // FRACT = 272
    0, // GROUP_BARRIER = 273
    0, // INTERP_LOAD_P0 = 274
    0, // INTERP_PAIR_XY = 275
    0, // INTERP_PAIR_ZW = 276
    0, // INTERP_VEC_LOAD = 277
    0, // INTERP_XY = 278
    0, // INTERP_ZW = 279
    0, // INT_TO_FLT_eg = 280
    0, // INT_TO_FLT_r600 = 281
    0, // KILLGT = 282
    0, // LDS_ADD = 283
    0, // LDS_ADD_RET = 284
    0, // LDS_AND = 285
    0, // LDS_AND_RET = 286
    0, // LDS_BYTE_READ_RET = 287
    0, // LDS_BYTE_WRITE = 288
    0, // LDS_CMPST = 289
    0, // LDS_CMPST_RET = 290
    0, // LDS_MAX_INT = 291
    0, // LDS_MAX_INT_RET = 292
    0, // LDS_MAX_UINT = 293
    0, // LDS_MAX_UINT_RET = 294
    0, // LDS_MIN_INT = 295
    0, // LDS_MIN_INT_RET = 296
    0, // LDS_MIN_UINT = 297
    0, // LDS_MIN_UINT_RET = 298
    0, // LDS_OR = 299
    0, // LDS_OR_RET = 300
    0, // LDS_READ_RET = 301
    0, // LDS_SHORT_READ_RET = 302
    0, // LDS_SHORT_WRITE = 303
    0, // LDS_SUB = 304
    0, // LDS_SUB_RET = 305
    0, // LDS_UBYTE_READ_RET = 306
    0, // LDS_USHORT_READ_RET = 307
    0, // LDS_WRITE = 308
    0, // LDS_WRXCHG = 309
    0, // LDS_WRXCHG_RET = 310
    0, // LDS_XOR = 311
    0, // LDS_XOR_RET = 312
    0, // LITERALS = 313
    0, // LOG_CLAMPED_eg = 314
    0, // LOG_CLAMPED_r600 = 315
    0, // LOG_IEEE_cm = 316
    0, // LOG_IEEE_eg = 317
    0, // LOG_IEEE_r600 = 318
    0, // LOOP_BREAK_EG = 319
    0, // LOOP_BREAK_R600 = 320
    0, // LSHL_eg = 321
    0, // LSHL_r600 = 322
    0, // LSHR_eg = 323
    0, // LSHR_r600 = 324
    0, // MAX = 325
    0, // MAX_DX10 = 326
    0, // MAX_INT = 327
    0, // MAX_UINT = 328
    0, // MIN = 329
    0, // MIN_DX10 = 330
    0, // MIN_INT = 331
    0, // MIN_UINT = 332
    0, // MOV = 333
    0, // MOVA_INT_eg = 334
    0, // MUL = 335
    0, // MULADD_IEEE_eg = 336
    0, // MULADD_IEEE_r600 = 337
    0, // MULADD_INT24_cm = 338
    0, // MULADD_UINT24_eg = 339
    0, // MULADD_eg = 340
    0, // MULADD_r600 = 341
    0, // MULHI_INT_cm = 342
    0, // MULHI_INT_cm24 = 343
    0, // MULHI_INT_eg = 344
    0, // MULHI_INT_r600 = 345
    0, // MULHI_UINT24_eg = 346
    0, // MULHI_UINT_cm = 347
    0, // MULHI_UINT_cm24 = 348
    0, // MULHI_UINT_eg = 349
    0, // MULHI_UINT_r600 = 350
    0, // MULLO_INT_cm = 351
    0, // MULLO_INT_eg = 352
    0, // MULLO_INT_r600 = 353
    0, // MULLO_UINT_cm = 354
    0, // MULLO_UINT_eg = 355
    0, // MULLO_UINT_r600 = 356
    0, // MUL_IEEE = 357
    0, // MUL_INT24_cm = 358
    0, // MUL_LIT_eg = 359
    0, // MUL_LIT_r600 = 360
    0, // MUL_UINT24_eg = 361
    0, // NOT_INT = 362
    0, // OR_INT = 363
    0, // PAD = 364
    0, // POP_EG = 365
    0, // POP_R600 = 366
    0, // PRED_SETE = 367
    0, // PRED_SETE_INT = 368
    0, // PRED_SETGE = 369
    0, // PRED_SETGE_INT = 370
    0, // PRED_SETGT = 371
    0, // PRED_SETGT_INT = 372
    0, // PRED_SETNE = 373
    0, // PRED_SETNE_INT = 374
    0, // R600_ExportBuf = 375
    0, // R600_ExportSwz = 376
    0, // RAT_ATOMIC_ADD_NORET = 377
    0, // RAT_ATOMIC_ADD_RTN = 378
    0, // RAT_ATOMIC_AND_NORET = 379
    0, // RAT_ATOMIC_AND_RTN = 380
    0, // RAT_ATOMIC_CMPXCHG_INT_NORET = 381
    0, // RAT_ATOMIC_CMPXCHG_INT_RTN = 382
    0, // RAT_ATOMIC_DEC_UINT_NORET = 383
    0, // RAT_ATOMIC_DEC_UINT_RTN = 384
    0, // RAT_ATOMIC_INC_UINT_NORET = 385
    0, // RAT_ATOMIC_INC_UINT_RTN = 386
    0, // RAT_ATOMIC_MAX_INT_NORET = 387
    0, // RAT_ATOMIC_MAX_INT_RTN = 388
    0, // RAT_ATOMIC_MAX_UINT_NORET = 389
    0, // RAT_ATOMIC_MAX_UINT_RTN = 390
    0, // RAT_ATOMIC_MIN_INT_NORET = 391
    0, // RAT_ATOMIC_MIN_INT_RTN = 392
    0, // RAT_ATOMIC_MIN_UINT_NORET = 393
    0, // RAT_ATOMIC_MIN_UINT_RTN = 394
    0, // RAT_ATOMIC_OR_NORET = 395
    0, // RAT_ATOMIC_OR_RTN = 396
    0, // RAT_ATOMIC_RSUB_NORET = 397
    0, // RAT_ATOMIC_RSUB_RTN = 398
    0, // RAT_ATOMIC_SUB_NORET = 399
    0, // RAT_ATOMIC_SUB_RTN = 400
    0, // RAT_ATOMIC_XCHG_INT_NORET = 401
    0, // RAT_ATOMIC_XCHG_INT_RTN = 402
    0, // RAT_ATOMIC_XOR_NORET = 403
    0, // RAT_ATOMIC_XOR_RTN = 404
    0, // RAT_MSKOR = 405
    0, // RAT_STORE_DWORD128 = 406
    0, // RAT_STORE_DWORD32 = 407
    0, // RAT_STORE_DWORD64 = 408
    0, // RAT_STORE_TYPED_cm = 409
    0, // RAT_STORE_TYPED_eg = 410
    0, // RAT_WRITE_CACHELESS_128_eg = 411
    0, // RAT_WRITE_CACHELESS_32_eg = 412
    0, // RAT_WRITE_CACHELESS_64_eg = 413
    0, // RECIPSQRT_CLAMPED_cm = 414
    0, // RECIPSQRT_CLAMPED_eg = 415
    0, // RECIPSQRT_CLAMPED_r600 = 416
    0, // RECIPSQRT_IEEE_cm = 417
    0, // RECIPSQRT_IEEE_eg = 418
    0, // RECIPSQRT_IEEE_r600 = 419
    0, // RECIP_CLAMPED_cm = 420
    0, // RECIP_CLAMPED_eg = 421
    0, // RECIP_CLAMPED_r600 = 422
    0, // RECIP_IEEE_cm = 423
    0, // RECIP_IEEE_eg = 424
    0, // RECIP_IEEE_r600 = 425
    0, // RECIP_UINT_eg = 426
    0, // RECIP_UINT_r600 = 427
    0, // RNDNE = 428
    0, // SETE = 429
    0, // SETE_DX10 = 430
    0, // SETE_INT = 431
    0, // SETGE_DX10 = 432
    0, // SETGE_INT = 433
    0, // SETGE_UINT = 434
    0, // SETGT_DX10 = 435
    0, // SETGT_INT = 436
    0, // SETGT_UINT = 437
    0, // SETNE_DX10 = 438
    0, // SETNE_INT = 439
    0, // SGE = 440
    0, // SGT = 441
    0, // SIN_cm = 442
    0, // SIN_eg = 443
    0, // SIN_r600 = 444
    0, // SIN_r700 = 445
    0, // SNE = 446
    0, // SUBB_UINT = 447
    0, // SUB_INT = 448
    0, // TEX_GET_GRADIENTS_H = 449
    0, // TEX_GET_GRADIENTS_V = 450
    0, // TEX_GET_TEXTURE_RESINFO = 451
    0, // TEX_LD = 452
    0, // TEX_LDPTR = 453
    0, // TEX_SAMPLE = 454
    0, // TEX_SAMPLE_C = 455
    0, // TEX_SAMPLE_C_G = 456
    0, // TEX_SAMPLE_C_L = 457
    0, // TEX_SAMPLE_C_LB = 458
    0, // TEX_SAMPLE_G = 459
    0, // TEX_SAMPLE_L = 460
    0, // TEX_SAMPLE_LB = 461
    0, // TEX_SET_GRADIENTS_H = 462
    0, // TEX_SET_GRADIENTS_V = 463
    0, // TEX_VTX_CONSTBUF = 464
    0, // TEX_VTX_TEXBUF = 465
    0, // TRUNC = 466
    0, // UINT_TO_FLT_eg = 467
    0, // UINT_TO_FLT_r600 = 468
    0, // VTX_READ_128_cm = 469
    0, // VTX_READ_128_eg = 470
    0, // VTX_READ_16_cm = 471
    0, // VTX_READ_16_eg = 472
    0, // VTX_READ_32_cm = 473
    0, // VTX_READ_32_eg = 474
    0, // VTX_READ_64_cm = 475
    0, // VTX_READ_64_eg = 476
    0, // VTX_READ_8_cm = 477
    0, // VTX_READ_8_eg = 478
    0, // WHILE_LOOP_EG = 479
    0, // WHILE_LOOP_R600 = 480
    0, // XOR_INT = 481
  };

  assert(Inst.getOpcode() < 482);
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

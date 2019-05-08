#ifdef GET_MIMGBaseOpcode_DECL
enum MIMGBaseOpcode {
  IMAGE_ATOMIC_ADD = 0,
  IMAGE_ATOMIC_AND = 1,
  IMAGE_ATOMIC_CMPSWAP = 2,
  IMAGE_ATOMIC_DEC = 3,
  IMAGE_ATOMIC_INC = 4,
  IMAGE_ATOMIC_OR = 5,
  IMAGE_ATOMIC_SMAX = 6,
  IMAGE_ATOMIC_SMIN = 7,
  IMAGE_ATOMIC_SUB = 8,
  IMAGE_ATOMIC_SWAP = 9,
  IMAGE_ATOMIC_UMAX = 10,
  IMAGE_ATOMIC_UMIN = 11,
  IMAGE_ATOMIC_XOR = 12,
  IMAGE_GATHER4 = 13,
  IMAGE_GATHER4_B = 14,
  IMAGE_GATHER4_B_CL = 15,
  IMAGE_GATHER4_B_CL_O = 16,
  IMAGE_GATHER4_B_O = 17,
  IMAGE_GATHER4_C = 18,
  IMAGE_GATHER4_CL = 19,
  IMAGE_GATHER4_CL_O = 20,
  IMAGE_GATHER4_C_B = 21,
  IMAGE_GATHER4_C_B_CL = 22,
  IMAGE_GATHER4_C_B_CL_O = 23,
  IMAGE_GATHER4_C_B_O = 24,
  IMAGE_GATHER4_C_CL = 25,
  IMAGE_GATHER4_C_CL_O = 26,
  IMAGE_GATHER4_C_L = 27,
  IMAGE_GATHER4_C_LZ = 28,
  IMAGE_GATHER4_C_LZ_O = 29,
  IMAGE_GATHER4_C_L_O = 30,
  IMAGE_GATHER4_C_O = 31,
  IMAGE_GATHER4_L = 32,
  IMAGE_GATHER4_LZ = 33,
  IMAGE_GATHER4_LZ_O = 34,
  IMAGE_GATHER4_L_O = 35,
  IMAGE_GATHER4_O = 36,
  IMAGE_GET_LOD = 37,
  IMAGE_GET_RESINFO = 38,
  IMAGE_LOAD = 39,
  IMAGE_LOAD_MIP = 40,
  IMAGE_LOAD_MIP_PCK = 41,
  IMAGE_LOAD_MIP_PCK_SGN = 42,
  IMAGE_LOAD_PCK = 43,
  IMAGE_LOAD_PCK_SGN = 44,
  IMAGE_SAMPLE = 45,
  IMAGE_SAMPLE_B = 46,
  IMAGE_SAMPLE_B_CL = 47,
  IMAGE_SAMPLE_B_CL_O = 48,
  IMAGE_SAMPLE_B_O = 49,
  IMAGE_SAMPLE_C = 50,
  IMAGE_SAMPLE_CD = 51,
  IMAGE_SAMPLE_CD_CL = 52,
  IMAGE_SAMPLE_CD_CL_O = 53,
  IMAGE_SAMPLE_CD_O = 54,
  IMAGE_SAMPLE_CL = 55,
  IMAGE_SAMPLE_CL_O = 56,
  IMAGE_SAMPLE_C_B = 57,
  IMAGE_SAMPLE_C_B_CL = 58,
  IMAGE_SAMPLE_C_B_CL_O = 59,
  IMAGE_SAMPLE_C_B_O = 60,
  IMAGE_SAMPLE_C_CD = 61,
  IMAGE_SAMPLE_C_CD_CL = 62,
  IMAGE_SAMPLE_C_CD_CL_O = 63,
  IMAGE_SAMPLE_C_CD_O = 64,
  IMAGE_SAMPLE_C_CL = 65,
  IMAGE_SAMPLE_C_CL_O = 66,
  IMAGE_SAMPLE_C_D = 67,
  IMAGE_SAMPLE_C_D_CL = 68,
  IMAGE_SAMPLE_C_D_CL_O = 69,
  IMAGE_SAMPLE_C_D_O = 70,
  IMAGE_SAMPLE_C_L = 71,
  IMAGE_SAMPLE_C_LZ = 72,
  IMAGE_SAMPLE_C_LZ_O = 73,
  IMAGE_SAMPLE_C_L_O = 74,
  IMAGE_SAMPLE_C_O = 75,
  IMAGE_SAMPLE_D = 76,
  IMAGE_SAMPLE_D_CL = 77,
  IMAGE_SAMPLE_D_CL_O = 78,
  IMAGE_SAMPLE_D_O = 79,
  IMAGE_SAMPLE_L = 80,
  IMAGE_SAMPLE_LZ = 81,
  IMAGE_SAMPLE_LZ_O = 82,
  IMAGE_SAMPLE_L_O = 83,
  IMAGE_SAMPLE_O = 84,
  IMAGE_STORE = 85,
  IMAGE_STORE_MIP = 86,
  IMAGE_STORE_MIP_PCK = 87,
  IMAGE_STORE_PCK = 88,
};
#endif

#ifdef GET_MIMGDim_DECL
enum MIMGDim {
  AMDGPUDim1D = 0,
  AMDGPUDim1DArray = 1,
  AMDGPUDim2D = 2,
  AMDGPUDim2DArray = 3,
  AMDGPUDim2DArrayMsaa = 4,
  AMDGPUDim2DMsaa = 5,
  AMDGPUDim3D = 6,
  AMDGPUDimCube = 7,
};
#endif

#ifdef GET_MIMGEncoding_DECL
enum MIMGEncoding {
  MIMGEncGfx6 = 0,
  MIMGEncGfx8 = 1,
};
#endif

#ifdef GET_ImageDimIntrinsicTable_DECL
const ImageDimIntrinsicInfo *getImageDimIntrinsicInfo(unsigned Intr);
#endif

#ifdef GET_ImageDimIntrinsicTable_IMPL
const ImageDimIntrinsicInfo ImageDimIntrinsicTable[] = {
  { Intrinsic::amdgcn_image_atomic_add_1d, IMAGE_ATOMIC_ADD, AMDGPUDim1D }, // 0
  { Intrinsic::amdgcn_image_atomic_add_1darray, IMAGE_ATOMIC_ADD, AMDGPUDim1DArray }, // 1
  { Intrinsic::amdgcn_image_atomic_add_2d, IMAGE_ATOMIC_ADD, AMDGPUDim2D }, // 2
  { Intrinsic::amdgcn_image_atomic_add_2darray, IMAGE_ATOMIC_ADD, AMDGPUDim2DArray }, // 3
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa, IMAGE_ATOMIC_ADD, AMDGPUDim2DArrayMsaa }, // 4
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa, IMAGE_ATOMIC_ADD, AMDGPUDim2DMsaa }, // 5
  { Intrinsic::amdgcn_image_atomic_add_3d, IMAGE_ATOMIC_ADD, AMDGPUDim3D }, // 6
  { Intrinsic::amdgcn_image_atomic_add_cube, IMAGE_ATOMIC_ADD, AMDGPUDimCube }, // 7
  { Intrinsic::amdgcn_image_atomic_and_1d, IMAGE_ATOMIC_AND, AMDGPUDim1D }, // 8
  { Intrinsic::amdgcn_image_atomic_and_1darray, IMAGE_ATOMIC_AND, AMDGPUDim1DArray }, // 9
  { Intrinsic::amdgcn_image_atomic_and_2d, IMAGE_ATOMIC_AND, AMDGPUDim2D }, // 10
  { Intrinsic::amdgcn_image_atomic_and_2darray, IMAGE_ATOMIC_AND, AMDGPUDim2DArray }, // 11
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa, IMAGE_ATOMIC_AND, AMDGPUDim2DArrayMsaa }, // 12
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa, IMAGE_ATOMIC_AND, AMDGPUDim2DMsaa }, // 13
  { Intrinsic::amdgcn_image_atomic_and_3d, IMAGE_ATOMIC_AND, AMDGPUDim3D }, // 14
  { Intrinsic::amdgcn_image_atomic_and_cube, IMAGE_ATOMIC_AND, AMDGPUDimCube }, // 15
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim1D }, // 16
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim1DArray }, // 17
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2D }, // 18
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DArray }, // 19
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DArrayMsaa }, // 20
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim2DMsaa }, // 21
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d, IMAGE_ATOMIC_CMPSWAP, AMDGPUDim3D }, // 22
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube, IMAGE_ATOMIC_CMPSWAP, AMDGPUDimCube }, // 23
  { Intrinsic::amdgcn_image_atomic_dec_1d, IMAGE_ATOMIC_DEC, AMDGPUDim1D }, // 24
  { Intrinsic::amdgcn_image_atomic_dec_1darray, IMAGE_ATOMIC_DEC, AMDGPUDim1DArray }, // 25
  { Intrinsic::amdgcn_image_atomic_dec_2d, IMAGE_ATOMIC_DEC, AMDGPUDim2D }, // 26
  { Intrinsic::amdgcn_image_atomic_dec_2darray, IMAGE_ATOMIC_DEC, AMDGPUDim2DArray }, // 27
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa, IMAGE_ATOMIC_DEC, AMDGPUDim2DArrayMsaa }, // 28
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa, IMAGE_ATOMIC_DEC, AMDGPUDim2DMsaa }, // 29
  { Intrinsic::amdgcn_image_atomic_dec_3d, IMAGE_ATOMIC_DEC, AMDGPUDim3D }, // 30
  { Intrinsic::amdgcn_image_atomic_dec_cube, IMAGE_ATOMIC_DEC, AMDGPUDimCube }, // 31
  { Intrinsic::amdgcn_image_atomic_inc_1d, IMAGE_ATOMIC_INC, AMDGPUDim1D }, // 32
  { Intrinsic::amdgcn_image_atomic_inc_1darray, IMAGE_ATOMIC_INC, AMDGPUDim1DArray }, // 33
  { Intrinsic::amdgcn_image_atomic_inc_2d, IMAGE_ATOMIC_INC, AMDGPUDim2D }, // 34
  { Intrinsic::amdgcn_image_atomic_inc_2darray, IMAGE_ATOMIC_INC, AMDGPUDim2DArray }, // 35
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa, IMAGE_ATOMIC_INC, AMDGPUDim2DArrayMsaa }, // 36
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa, IMAGE_ATOMIC_INC, AMDGPUDim2DMsaa }, // 37
  { Intrinsic::amdgcn_image_atomic_inc_3d, IMAGE_ATOMIC_INC, AMDGPUDim3D }, // 38
  { Intrinsic::amdgcn_image_atomic_inc_cube, IMAGE_ATOMIC_INC, AMDGPUDimCube }, // 39
  { Intrinsic::amdgcn_image_atomic_or_1d, IMAGE_ATOMIC_OR, AMDGPUDim1D }, // 40
  { Intrinsic::amdgcn_image_atomic_or_1darray, IMAGE_ATOMIC_OR, AMDGPUDim1DArray }, // 41
  { Intrinsic::amdgcn_image_atomic_or_2d, IMAGE_ATOMIC_OR, AMDGPUDim2D }, // 42
  { Intrinsic::amdgcn_image_atomic_or_2darray, IMAGE_ATOMIC_OR, AMDGPUDim2DArray }, // 43
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa, IMAGE_ATOMIC_OR, AMDGPUDim2DArrayMsaa }, // 44
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa, IMAGE_ATOMIC_OR, AMDGPUDim2DMsaa }, // 45
  { Intrinsic::amdgcn_image_atomic_or_3d, IMAGE_ATOMIC_OR, AMDGPUDim3D }, // 46
  { Intrinsic::amdgcn_image_atomic_or_cube, IMAGE_ATOMIC_OR, AMDGPUDimCube }, // 47
  { Intrinsic::amdgcn_image_atomic_smax_1d, IMAGE_ATOMIC_SMAX, AMDGPUDim1D }, // 48
  { Intrinsic::amdgcn_image_atomic_smax_1darray, IMAGE_ATOMIC_SMAX, AMDGPUDim1DArray }, // 49
  { Intrinsic::amdgcn_image_atomic_smax_2d, IMAGE_ATOMIC_SMAX, AMDGPUDim2D }, // 50
  { Intrinsic::amdgcn_image_atomic_smax_2darray, IMAGE_ATOMIC_SMAX, AMDGPUDim2DArray }, // 51
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa, IMAGE_ATOMIC_SMAX, AMDGPUDim2DArrayMsaa }, // 52
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa, IMAGE_ATOMIC_SMAX, AMDGPUDim2DMsaa }, // 53
  { Intrinsic::amdgcn_image_atomic_smax_3d, IMAGE_ATOMIC_SMAX, AMDGPUDim3D }, // 54
  { Intrinsic::amdgcn_image_atomic_smax_cube, IMAGE_ATOMIC_SMAX, AMDGPUDimCube }, // 55
  { Intrinsic::amdgcn_image_atomic_smin_1d, IMAGE_ATOMIC_SMIN, AMDGPUDim1D }, // 56
  { Intrinsic::amdgcn_image_atomic_smin_1darray, IMAGE_ATOMIC_SMIN, AMDGPUDim1DArray }, // 57
  { Intrinsic::amdgcn_image_atomic_smin_2d, IMAGE_ATOMIC_SMIN, AMDGPUDim2D }, // 58
  { Intrinsic::amdgcn_image_atomic_smin_2darray, IMAGE_ATOMIC_SMIN, AMDGPUDim2DArray }, // 59
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa, IMAGE_ATOMIC_SMIN, AMDGPUDim2DArrayMsaa }, // 60
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa, IMAGE_ATOMIC_SMIN, AMDGPUDim2DMsaa }, // 61
  { Intrinsic::amdgcn_image_atomic_smin_3d, IMAGE_ATOMIC_SMIN, AMDGPUDim3D }, // 62
  { Intrinsic::amdgcn_image_atomic_smin_cube, IMAGE_ATOMIC_SMIN, AMDGPUDimCube }, // 63
  { Intrinsic::amdgcn_image_atomic_sub_1d, IMAGE_ATOMIC_SUB, AMDGPUDim1D }, // 64
  { Intrinsic::amdgcn_image_atomic_sub_1darray, IMAGE_ATOMIC_SUB, AMDGPUDim1DArray }, // 65
  { Intrinsic::amdgcn_image_atomic_sub_2d, IMAGE_ATOMIC_SUB, AMDGPUDim2D }, // 66
  { Intrinsic::amdgcn_image_atomic_sub_2darray, IMAGE_ATOMIC_SUB, AMDGPUDim2DArray }, // 67
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa, IMAGE_ATOMIC_SUB, AMDGPUDim2DArrayMsaa }, // 68
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa, IMAGE_ATOMIC_SUB, AMDGPUDim2DMsaa }, // 69
  { Intrinsic::amdgcn_image_atomic_sub_3d, IMAGE_ATOMIC_SUB, AMDGPUDim3D }, // 70
  { Intrinsic::amdgcn_image_atomic_sub_cube, IMAGE_ATOMIC_SUB, AMDGPUDimCube }, // 71
  { Intrinsic::amdgcn_image_atomic_swap_1d, IMAGE_ATOMIC_SWAP, AMDGPUDim1D }, // 72
  { Intrinsic::amdgcn_image_atomic_swap_1darray, IMAGE_ATOMIC_SWAP, AMDGPUDim1DArray }, // 73
  { Intrinsic::amdgcn_image_atomic_swap_2d, IMAGE_ATOMIC_SWAP, AMDGPUDim2D }, // 74
  { Intrinsic::amdgcn_image_atomic_swap_2darray, IMAGE_ATOMIC_SWAP, AMDGPUDim2DArray }, // 75
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa, IMAGE_ATOMIC_SWAP, AMDGPUDim2DArrayMsaa }, // 76
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa, IMAGE_ATOMIC_SWAP, AMDGPUDim2DMsaa }, // 77
  { Intrinsic::amdgcn_image_atomic_swap_3d, IMAGE_ATOMIC_SWAP, AMDGPUDim3D }, // 78
  { Intrinsic::amdgcn_image_atomic_swap_cube, IMAGE_ATOMIC_SWAP, AMDGPUDimCube }, // 79
  { Intrinsic::amdgcn_image_atomic_umax_1d, IMAGE_ATOMIC_UMAX, AMDGPUDim1D }, // 80
  { Intrinsic::amdgcn_image_atomic_umax_1darray, IMAGE_ATOMIC_UMAX, AMDGPUDim1DArray }, // 81
  { Intrinsic::amdgcn_image_atomic_umax_2d, IMAGE_ATOMIC_UMAX, AMDGPUDim2D }, // 82
  { Intrinsic::amdgcn_image_atomic_umax_2darray, IMAGE_ATOMIC_UMAX, AMDGPUDim2DArray }, // 83
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa, IMAGE_ATOMIC_UMAX, AMDGPUDim2DArrayMsaa }, // 84
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa, IMAGE_ATOMIC_UMAX, AMDGPUDim2DMsaa }, // 85
  { Intrinsic::amdgcn_image_atomic_umax_3d, IMAGE_ATOMIC_UMAX, AMDGPUDim3D }, // 86
  { Intrinsic::amdgcn_image_atomic_umax_cube, IMAGE_ATOMIC_UMAX, AMDGPUDimCube }, // 87
  { Intrinsic::amdgcn_image_atomic_umin_1d, IMAGE_ATOMIC_UMIN, AMDGPUDim1D }, // 88
  { Intrinsic::amdgcn_image_atomic_umin_1darray, IMAGE_ATOMIC_UMIN, AMDGPUDim1DArray }, // 89
  { Intrinsic::amdgcn_image_atomic_umin_2d, IMAGE_ATOMIC_UMIN, AMDGPUDim2D }, // 90
  { Intrinsic::amdgcn_image_atomic_umin_2darray, IMAGE_ATOMIC_UMIN, AMDGPUDim2DArray }, // 91
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa, IMAGE_ATOMIC_UMIN, AMDGPUDim2DArrayMsaa }, // 92
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa, IMAGE_ATOMIC_UMIN, AMDGPUDim2DMsaa }, // 93
  { Intrinsic::amdgcn_image_atomic_umin_3d, IMAGE_ATOMIC_UMIN, AMDGPUDim3D }, // 94
  { Intrinsic::amdgcn_image_atomic_umin_cube, IMAGE_ATOMIC_UMIN, AMDGPUDimCube }, // 95
  { Intrinsic::amdgcn_image_atomic_xor_1d, IMAGE_ATOMIC_XOR, AMDGPUDim1D }, // 96
  { Intrinsic::amdgcn_image_atomic_xor_1darray, IMAGE_ATOMIC_XOR, AMDGPUDim1DArray }, // 97
  { Intrinsic::amdgcn_image_atomic_xor_2d, IMAGE_ATOMIC_XOR, AMDGPUDim2D }, // 98
  { Intrinsic::amdgcn_image_atomic_xor_2darray, IMAGE_ATOMIC_XOR, AMDGPUDim2DArray }, // 99
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa, IMAGE_ATOMIC_XOR, AMDGPUDim2DArrayMsaa }, // 100
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa, IMAGE_ATOMIC_XOR, AMDGPUDim2DMsaa }, // 101
  { Intrinsic::amdgcn_image_atomic_xor_3d, IMAGE_ATOMIC_XOR, AMDGPUDim3D }, // 102
  { Intrinsic::amdgcn_image_atomic_xor_cube, IMAGE_ATOMIC_XOR, AMDGPUDimCube }, // 103
  { Intrinsic::amdgcn_image_gather4_2d, IMAGE_GATHER4, AMDGPUDim2D }, // 104
  { Intrinsic::amdgcn_image_gather4_2darray, IMAGE_GATHER4, AMDGPUDim2DArray }, // 105
  { Intrinsic::amdgcn_image_gather4_b_2d, IMAGE_GATHER4_B, AMDGPUDim2D }, // 106
  { Intrinsic::amdgcn_image_gather4_b_2darray, IMAGE_GATHER4_B, AMDGPUDim2DArray }, // 107
  { Intrinsic::amdgcn_image_gather4_b_cl_2d, IMAGE_GATHER4_B_CL, AMDGPUDim2D }, // 108
  { Intrinsic::amdgcn_image_gather4_b_cl_2darray, IMAGE_GATHER4_B_CL, AMDGPUDim2DArray }, // 109
  { Intrinsic::amdgcn_image_gather4_b_cl_cube, IMAGE_GATHER4_B_CL, AMDGPUDimCube }, // 110
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2d, IMAGE_GATHER4_B_CL_O, AMDGPUDim2D }, // 111
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2darray, IMAGE_GATHER4_B_CL_O, AMDGPUDim2DArray }, // 112
  { Intrinsic::amdgcn_image_gather4_b_cl_o_cube, IMAGE_GATHER4_B_CL_O, AMDGPUDimCube }, // 113
  { Intrinsic::amdgcn_image_gather4_b_cube, IMAGE_GATHER4_B, AMDGPUDimCube }, // 114
  { Intrinsic::amdgcn_image_gather4_b_o_2d, IMAGE_GATHER4_B_O, AMDGPUDim2D }, // 115
  { Intrinsic::amdgcn_image_gather4_b_o_2darray, IMAGE_GATHER4_B_O, AMDGPUDim2DArray }, // 116
  { Intrinsic::amdgcn_image_gather4_b_o_cube, IMAGE_GATHER4_B_O, AMDGPUDimCube }, // 117
  { Intrinsic::amdgcn_image_gather4_c_2d, IMAGE_GATHER4_C, AMDGPUDim2D }, // 118
  { Intrinsic::amdgcn_image_gather4_c_2darray, IMAGE_GATHER4_C, AMDGPUDim2DArray }, // 119
  { Intrinsic::amdgcn_image_gather4_c_b_2d, IMAGE_GATHER4_C_B, AMDGPUDim2D }, // 120
  { Intrinsic::amdgcn_image_gather4_c_b_2darray, IMAGE_GATHER4_C_B, AMDGPUDim2DArray }, // 121
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2d, IMAGE_GATHER4_C_B_CL, AMDGPUDim2D }, // 122
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2darray, IMAGE_GATHER4_C_B_CL, AMDGPUDim2DArray }, // 123
  { Intrinsic::amdgcn_image_gather4_c_b_cl_cube, IMAGE_GATHER4_C_B_CL, AMDGPUDimCube }, // 124
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2d, IMAGE_GATHER4_C_B_CL_O, AMDGPUDim2D }, // 125
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2darray, IMAGE_GATHER4_C_B_CL_O, AMDGPUDim2DArray }, // 126
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_cube, IMAGE_GATHER4_C_B_CL_O, AMDGPUDimCube }, // 127
  { Intrinsic::amdgcn_image_gather4_c_b_cube, IMAGE_GATHER4_C_B, AMDGPUDimCube }, // 128
  { Intrinsic::amdgcn_image_gather4_c_b_o_2d, IMAGE_GATHER4_C_B_O, AMDGPUDim2D }, // 129
  { Intrinsic::amdgcn_image_gather4_c_b_o_2darray, IMAGE_GATHER4_C_B_O, AMDGPUDim2DArray }, // 130
  { Intrinsic::amdgcn_image_gather4_c_b_o_cube, IMAGE_GATHER4_C_B_O, AMDGPUDimCube }, // 131
  { Intrinsic::amdgcn_image_gather4_c_cl_2d, IMAGE_GATHER4_C_CL, AMDGPUDim2D }, // 132
  { Intrinsic::amdgcn_image_gather4_c_cl_2darray, IMAGE_GATHER4_C_CL, AMDGPUDim2DArray }, // 133
  { Intrinsic::amdgcn_image_gather4_c_cl_cube, IMAGE_GATHER4_C_CL, AMDGPUDimCube }, // 134
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2d, IMAGE_GATHER4_C_CL_O, AMDGPUDim2D }, // 135
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2darray, IMAGE_GATHER4_C_CL_O, AMDGPUDim2DArray }, // 136
  { Intrinsic::amdgcn_image_gather4_c_cl_o_cube, IMAGE_GATHER4_C_CL_O, AMDGPUDimCube }, // 137
  { Intrinsic::amdgcn_image_gather4_c_cube, IMAGE_GATHER4_C, AMDGPUDimCube }, // 138
  { Intrinsic::amdgcn_image_gather4_c_l_2d, IMAGE_GATHER4_C_L, AMDGPUDim2D }, // 139
  { Intrinsic::amdgcn_image_gather4_c_l_2darray, IMAGE_GATHER4_C_L, AMDGPUDim2DArray }, // 140
  { Intrinsic::amdgcn_image_gather4_c_l_cube, IMAGE_GATHER4_C_L, AMDGPUDimCube }, // 141
  { Intrinsic::amdgcn_image_gather4_c_l_o_2d, IMAGE_GATHER4_C_L_O, AMDGPUDim2D }, // 142
  { Intrinsic::amdgcn_image_gather4_c_l_o_2darray, IMAGE_GATHER4_C_L_O, AMDGPUDim2DArray }, // 143
  { Intrinsic::amdgcn_image_gather4_c_l_o_cube, IMAGE_GATHER4_C_L_O, AMDGPUDimCube }, // 144
  { Intrinsic::amdgcn_image_gather4_c_lz_2d, IMAGE_GATHER4_C_LZ, AMDGPUDim2D }, // 145
  { Intrinsic::amdgcn_image_gather4_c_lz_2darray, IMAGE_GATHER4_C_LZ, AMDGPUDim2DArray }, // 146
  { Intrinsic::amdgcn_image_gather4_c_lz_cube, IMAGE_GATHER4_C_LZ, AMDGPUDimCube }, // 147
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2d, IMAGE_GATHER4_C_LZ_O, AMDGPUDim2D }, // 148
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2darray, IMAGE_GATHER4_C_LZ_O, AMDGPUDim2DArray }, // 149
  { Intrinsic::amdgcn_image_gather4_c_lz_o_cube, IMAGE_GATHER4_C_LZ_O, AMDGPUDimCube }, // 150
  { Intrinsic::amdgcn_image_gather4_c_o_2d, IMAGE_GATHER4_C_O, AMDGPUDim2D }, // 151
  { Intrinsic::amdgcn_image_gather4_c_o_2darray, IMAGE_GATHER4_C_O, AMDGPUDim2DArray }, // 152
  { Intrinsic::amdgcn_image_gather4_c_o_cube, IMAGE_GATHER4_C_O, AMDGPUDimCube }, // 153
  { Intrinsic::amdgcn_image_gather4_cl_2d, IMAGE_GATHER4_CL, AMDGPUDim2D }, // 154
  { Intrinsic::amdgcn_image_gather4_cl_2darray, IMAGE_GATHER4_CL, AMDGPUDim2DArray }, // 155
  { Intrinsic::amdgcn_image_gather4_cl_cube, IMAGE_GATHER4_CL, AMDGPUDimCube }, // 156
  { Intrinsic::amdgcn_image_gather4_cl_o_2d, IMAGE_GATHER4_CL_O, AMDGPUDim2D }, // 157
  { Intrinsic::amdgcn_image_gather4_cl_o_2darray, IMAGE_GATHER4_CL_O, AMDGPUDim2DArray }, // 158
  { Intrinsic::amdgcn_image_gather4_cl_o_cube, IMAGE_GATHER4_CL_O, AMDGPUDimCube }, // 159
  { Intrinsic::amdgcn_image_gather4_cube, IMAGE_GATHER4, AMDGPUDimCube }, // 160
  { Intrinsic::amdgcn_image_gather4_l_2d, IMAGE_GATHER4_L, AMDGPUDim2D }, // 161
  { Intrinsic::amdgcn_image_gather4_l_2darray, IMAGE_GATHER4_L, AMDGPUDim2DArray }, // 162
  { Intrinsic::amdgcn_image_gather4_l_cube, IMAGE_GATHER4_L, AMDGPUDimCube }, // 163
  { Intrinsic::amdgcn_image_gather4_l_o_2d, IMAGE_GATHER4_L_O, AMDGPUDim2D }, // 164
  { Intrinsic::amdgcn_image_gather4_l_o_2darray, IMAGE_GATHER4_L_O, AMDGPUDim2DArray }, // 165
  { Intrinsic::amdgcn_image_gather4_l_o_cube, IMAGE_GATHER4_L_O, AMDGPUDimCube }, // 166
  { Intrinsic::amdgcn_image_gather4_lz_2d, IMAGE_GATHER4_LZ, AMDGPUDim2D }, // 167
  { Intrinsic::amdgcn_image_gather4_lz_2darray, IMAGE_GATHER4_LZ, AMDGPUDim2DArray }, // 168
  { Intrinsic::amdgcn_image_gather4_lz_cube, IMAGE_GATHER4_LZ, AMDGPUDimCube }, // 169
  { Intrinsic::amdgcn_image_gather4_lz_o_2d, IMAGE_GATHER4_LZ_O, AMDGPUDim2D }, // 170
  { Intrinsic::amdgcn_image_gather4_lz_o_2darray, IMAGE_GATHER4_LZ_O, AMDGPUDim2DArray }, // 171
  { Intrinsic::amdgcn_image_gather4_lz_o_cube, IMAGE_GATHER4_LZ_O, AMDGPUDimCube }, // 172
  { Intrinsic::amdgcn_image_gather4_o_2d, IMAGE_GATHER4_O, AMDGPUDim2D }, // 173
  { Intrinsic::amdgcn_image_gather4_o_2darray, IMAGE_GATHER4_O, AMDGPUDim2DArray }, // 174
  { Intrinsic::amdgcn_image_gather4_o_cube, IMAGE_GATHER4_O, AMDGPUDimCube }, // 175
  { Intrinsic::amdgcn_image_getlod_1d, IMAGE_GET_LOD, AMDGPUDim1D }, // 176
  { Intrinsic::amdgcn_image_getlod_1darray, IMAGE_GET_LOD, AMDGPUDim1DArray }, // 177
  { Intrinsic::amdgcn_image_getlod_2d, IMAGE_GET_LOD, AMDGPUDim2D }, // 178
  { Intrinsic::amdgcn_image_getlod_2darray, IMAGE_GET_LOD, AMDGPUDim2DArray }, // 179
  { Intrinsic::amdgcn_image_getlod_3d, IMAGE_GET_LOD, AMDGPUDim3D }, // 180
  { Intrinsic::amdgcn_image_getlod_cube, IMAGE_GET_LOD, AMDGPUDimCube }, // 181
  { Intrinsic::amdgcn_image_getresinfo_1d, IMAGE_GET_RESINFO, AMDGPUDim1D }, // 182
  { Intrinsic::amdgcn_image_getresinfo_1darray, IMAGE_GET_RESINFO, AMDGPUDim1DArray }, // 183
  { Intrinsic::amdgcn_image_getresinfo_2d, IMAGE_GET_RESINFO, AMDGPUDim2D }, // 184
  { Intrinsic::amdgcn_image_getresinfo_2darray, IMAGE_GET_RESINFO, AMDGPUDim2DArray }, // 185
  { Intrinsic::amdgcn_image_getresinfo_2darraymsaa, IMAGE_GET_RESINFO, AMDGPUDim2DArrayMsaa }, // 186
  { Intrinsic::amdgcn_image_getresinfo_2dmsaa, IMAGE_GET_RESINFO, AMDGPUDim2DMsaa }, // 187
  { Intrinsic::amdgcn_image_getresinfo_3d, IMAGE_GET_RESINFO, AMDGPUDim3D }, // 188
  { Intrinsic::amdgcn_image_getresinfo_cube, IMAGE_GET_RESINFO, AMDGPUDimCube }, // 189
  { Intrinsic::amdgcn_image_load_1d, IMAGE_LOAD, AMDGPUDim1D }, // 190
  { Intrinsic::amdgcn_image_load_1darray, IMAGE_LOAD, AMDGPUDim1DArray }, // 191
  { Intrinsic::amdgcn_image_load_2d, IMAGE_LOAD, AMDGPUDim2D }, // 192
  { Intrinsic::amdgcn_image_load_2darray, IMAGE_LOAD, AMDGPUDim2DArray }, // 193
  { Intrinsic::amdgcn_image_load_2darraymsaa, IMAGE_LOAD, AMDGPUDim2DArrayMsaa }, // 194
  { Intrinsic::amdgcn_image_load_2dmsaa, IMAGE_LOAD, AMDGPUDim2DMsaa }, // 195
  { Intrinsic::amdgcn_image_load_3d, IMAGE_LOAD, AMDGPUDim3D }, // 196
  { Intrinsic::amdgcn_image_load_cube, IMAGE_LOAD, AMDGPUDimCube }, // 197
  { Intrinsic::amdgcn_image_load_mip_1d, IMAGE_LOAD_MIP, AMDGPUDim1D }, // 198
  { Intrinsic::amdgcn_image_load_mip_1darray, IMAGE_LOAD_MIP, AMDGPUDim1DArray }, // 199
  { Intrinsic::amdgcn_image_load_mip_2d, IMAGE_LOAD_MIP, AMDGPUDim2D }, // 200
  { Intrinsic::amdgcn_image_load_mip_2darray, IMAGE_LOAD_MIP, AMDGPUDim2DArray }, // 201
  { Intrinsic::amdgcn_image_load_mip_3d, IMAGE_LOAD_MIP, AMDGPUDim3D }, // 202
  { Intrinsic::amdgcn_image_load_mip_cube, IMAGE_LOAD_MIP, AMDGPUDimCube }, // 203
  { Intrinsic::amdgcn_image_sample_1d, IMAGE_SAMPLE, AMDGPUDim1D }, // 204
  { Intrinsic::amdgcn_image_sample_1darray, IMAGE_SAMPLE, AMDGPUDim1DArray }, // 205
  { Intrinsic::amdgcn_image_sample_2d, IMAGE_SAMPLE, AMDGPUDim2D }, // 206
  { Intrinsic::amdgcn_image_sample_2darray, IMAGE_SAMPLE, AMDGPUDim2DArray }, // 207
  { Intrinsic::amdgcn_image_sample_3d, IMAGE_SAMPLE, AMDGPUDim3D }, // 208
  { Intrinsic::amdgcn_image_sample_b_1d, IMAGE_SAMPLE_B, AMDGPUDim1D }, // 209
  { Intrinsic::amdgcn_image_sample_b_1darray, IMAGE_SAMPLE_B, AMDGPUDim1DArray }, // 210
  { Intrinsic::amdgcn_image_sample_b_2d, IMAGE_SAMPLE_B, AMDGPUDim2D }, // 211
  { Intrinsic::amdgcn_image_sample_b_2darray, IMAGE_SAMPLE_B, AMDGPUDim2DArray }, // 212
  { Intrinsic::amdgcn_image_sample_b_3d, IMAGE_SAMPLE_B, AMDGPUDim3D }, // 213
  { Intrinsic::amdgcn_image_sample_b_cl_1d, IMAGE_SAMPLE_B_CL, AMDGPUDim1D }, // 214
  { Intrinsic::amdgcn_image_sample_b_cl_1darray, IMAGE_SAMPLE_B_CL, AMDGPUDim1DArray }, // 215
  { Intrinsic::amdgcn_image_sample_b_cl_2d, IMAGE_SAMPLE_B_CL, AMDGPUDim2D }, // 216
  { Intrinsic::amdgcn_image_sample_b_cl_2darray, IMAGE_SAMPLE_B_CL, AMDGPUDim2DArray }, // 217
  { Intrinsic::amdgcn_image_sample_b_cl_3d, IMAGE_SAMPLE_B_CL, AMDGPUDim3D }, // 218
  { Intrinsic::amdgcn_image_sample_b_cl_cube, IMAGE_SAMPLE_B_CL, AMDGPUDimCube }, // 219
  { Intrinsic::amdgcn_image_sample_b_cl_o_1d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim1D }, // 220
  { Intrinsic::amdgcn_image_sample_b_cl_o_1darray, IMAGE_SAMPLE_B_CL_O, AMDGPUDim1DArray }, // 221
  { Intrinsic::amdgcn_image_sample_b_cl_o_2d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim2D }, // 222
  { Intrinsic::amdgcn_image_sample_b_cl_o_2darray, IMAGE_SAMPLE_B_CL_O, AMDGPUDim2DArray }, // 223
  { Intrinsic::amdgcn_image_sample_b_cl_o_3d, IMAGE_SAMPLE_B_CL_O, AMDGPUDim3D }, // 224
  { Intrinsic::amdgcn_image_sample_b_cl_o_cube, IMAGE_SAMPLE_B_CL_O, AMDGPUDimCube }, // 225
  { Intrinsic::amdgcn_image_sample_b_cube, IMAGE_SAMPLE_B, AMDGPUDimCube }, // 226
  { Intrinsic::amdgcn_image_sample_b_o_1d, IMAGE_SAMPLE_B_O, AMDGPUDim1D }, // 227
  { Intrinsic::amdgcn_image_sample_b_o_1darray, IMAGE_SAMPLE_B_O, AMDGPUDim1DArray }, // 228
  { Intrinsic::amdgcn_image_sample_b_o_2d, IMAGE_SAMPLE_B_O, AMDGPUDim2D }, // 229
  { Intrinsic::amdgcn_image_sample_b_o_2darray, IMAGE_SAMPLE_B_O, AMDGPUDim2DArray }, // 230
  { Intrinsic::amdgcn_image_sample_b_o_3d, IMAGE_SAMPLE_B_O, AMDGPUDim3D }, // 231
  { Intrinsic::amdgcn_image_sample_b_o_cube, IMAGE_SAMPLE_B_O, AMDGPUDimCube }, // 232
  { Intrinsic::amdgcn_image_sample_c_1d, IMAGE_SAMPLE_C, AMDGPUDim1D }, // 233
  { Intrinsic::amdgcn_image_sample_c_1darray, IMAGE_SAMPLE_C, AMDGPUDim1DArray }, // 234
  { Intrinsic::amdgcn_image_sample_c_2d, IMAGE_SAMPLE_C, AMDGPUDim2D }, // 235
  { Intrinsic::amdgcn_image_sample_c_2darray, IMAGE_SAMPLE_C, AMDGPUDim2DArray }, // 236
  { Intrinsic::amdgcn_image_sample_c_3d, IMAGE_SAMPLE_C, AMDGPUDim3D }, // 237
  { Intrinsic::amdgcn_image_sample_c_b_1d, IMAGE_SAMPLE_C_B, AMDGPUDim1D }, // 238
  { Intrinsic::amdgcn_image_sample_c_b_1darray, IMAGE_SAMPLE_C_B, AMDGPUDim1DArray }, // 239
  { Intrinsic::amdgcn_image_sample_c_b_2d, IMAGE_SAMPLE_C_B, AMDGPUDim2D }, // 240
  { Intrinsic::amdgcn_image_sample_c_b_2darray, IMAGE_SAMPLE_C_B, AMDGPUDim2DArray }, // 241
  { Intrinsic::amdgcn_image_sample_c_b_3d, IMAGE_SAMPLE_C_B, AMDGPUDim3D }, // 242
  { Intrinsic::amdgcn_image_sample_c_b_cl_1d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim1D }, // 243
  { Intrinsic::amdgcn_image_sample_c_b_cl_1darray, IMAGE_SAMPLE_C_B_CL, AMDGPUDim1DArray }, // 244
  { Intrinsic::amdgcn_image_sample_c_b_cl_2d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim2D }, // 245
  { Intrinsic::amdgcn_image_sample_c_b_cl_2darray, IMAGE_SAMPLE_C_B_CL, AMDGPUDim2DArray }, // 246
  { Intrinsic::amdgcn_image_sample_c_b_cl_3d, IMAGE_SAMPLE_C_B_CL, AMDGPUDim3D }, // 247
  { Intrinsic::amdgcn_image_sample_c_b_cl_cube, IMAGE_SAMPLE_C_B_CL, AMDGPUDimCube }, // 248
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim1D }, // 249
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1darray, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim1DArray }, // 250
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim2D }, // 251
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2darray, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim2DArray }, // 252
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_3d, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDim3D }, // 253
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_cube, IMAGE_SAMPLE_C_B_CL_O, AMDGPUDimCube }, // 254
  { Intrinsic::amdgcn_image_sample_c_b_cube, IMAGE_SAMPLE_C_B, AMDGPUDimCube }, // 255
  { Intrinsic::amdgcn_image_sample_c_b_o_1d, IMAGE_SAMPLE_C_B_O, AMDGPUDim1D }, // 256
  { Intrinsic::amdgcn_image_sample_c_b_o_1darray, IMAGE_SAMPLE_C_B_O, AMDGPUDim1DArray }, // 257
  { Intrinsic::amdgcn_image_sample_c_b_o_2d, IMAGE_SAMPLE_C_B_O, AMDGPUDim2D }, // 258
  { Intrinsic::amdgcn_image_sample_c_b_o_2darray, IMAGE_SAMPLE_C_B_O, AMDGPUDim2DArray }, // 259
  { Intrinsic::amdgcn_image_sample_c_b_o_3d, IMAGE_SAMPLE_C_B_O, AMDGPUDim3D }, // 260
  { Intrinsic::amdgcn_image_sample_c_b_o_cube, IMAGE_SAMPLE_C_B_O, AMDGPUDimCube }, // 261
  { Intrinsic::amdgcn_image_sample_c_cd_1d, IMAGE_SAMPLE_C_CD, AMDGPUDim1D }, // 262
  { Intrinsic::amdgcn_image_sample_c_cd_1darray, IMAGE_SAMPLE_C_CD, AMDGPUDim1DArray }, // 263
  { Intrinsic::amdgcn_image_sample_c_cd_2d, IMAGE_SAMPLE_C_CD, AMDGPUDim2D }, // 264
  { Intrinsic::amdgcn_image_sample_c_cd_2darray, IMAGE_SAMPLE_C_CD, AMDGPUDim2DArray }, // 265
  { Intrinsic::amdgcn_image_sample_c_cd_3d, IMAGE_SAMPLE_C_CD, AMDGPUDim3D }, // 266
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim1D }, // 267
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1darray, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim1DArray }, // 268
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim2D }, // 269
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2darray, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim2DArray }, // 270
  { Intrinsic::amdgcn_image_sample_c_cd_cl_3d, IMAGE_SAMPLE_C_CD_CL, AMDGPUDim3D }, // 271
  { Intrinsic::amdgcn_image_sample_c_cd_cl_cube, IMAGE_SAMPLE_C_CD_CL, AMDGPUDimCube }, // 272
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim1D }, // 273
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1darray, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim1DArray }, // 274
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim2D }, // 275
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2darray, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim2DArray }, // 276
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_3d, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDim3D }, // 277
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_cube, IMAGE_SAMPLE_C_CD_CL_O, AMDGPUDimCube }, // 278
  { Intrinsic::amdgcn_image_sample_c_cd_cube, IMAGE_SAMPLE_C_CD, AMDGPUDimCube }, // 279
  { Intrinsic::amdgcn_image_sample_c_cd_o_1d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim1D }, // 280
  { Intrinsic::amdgcn_image_sample_c_cd_o_1darray, IMAGE_SAMPLE_C_CD_O, AMDGPUDim1DArray }, // 281
  { Intrinsic::amdgcn_image_sample_c_cd_o_2d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim2D }, // 282
  { Intrinsic::amdgcn_image_sample_c_cd_o_2darray, IMAGE_SAMPLE_C_CD_O, AMDGPUDim2DArray }, // 283
  { Intrinsic::amdgcn_image_sample_c_cd_o_3d, IMAGE_SAMPLE_C_CD_O, AMDGPUDim3D }, // 284
  { Intrinsic::amdgcn_image_sample_c_cd_o_cube, IMAGE_SAMPLE_C_CD_O, AMDGPUDimCube }, // 285
  { Intrinsic::amdgcn_image_sample_c_cl_1d, IMAGE_SAMPLE_C_CL, AMDGPUDim1D }, // 286
  { Intrinsic::amdgcn_image_sample_c_cl_1darray, IMAGE_SAMPLE_C_CL, AMDGPUDim1DArray }, // 287
  { Intrinsic::amdgcn_image_sample_c_cl_2d, IMAGE_SAMPLE_C_CL, AMDGPUDim2D }, // 288
  { Intrinsic::amdgcn_image_sample_c_cl_2darray, IMAGE_SAMPLE_C_CL, AMDGPUDim2DArray }, // 289
  { Intrinsic::amdgcn_image_sample_c_cl_3d, IMAGE_SAMPLE_C_CL, AMDGPUDim3D }, // 290
  { Intrinsic::amdgcn_image_sample_c_cl_cube, IMAGE_SAMPLE_C_CL, AMDGPUDimCube }, // 291
  { Intrinsic::amdgcn_image_sample_c_cl_o_1d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim1D }, // 292
  { Intrinsic::amdgcn_image_sample_c_cl_o_1darray, IMAGE_SAMPLE_C_CL_O, AMDGPUDim1DArray }, // 293
  { Intrinsic::amdgcn_image_sample_c_cl_o_2d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim2D }, // 294
  { Intrinsic::amdgcn_image_sample_c_cl_o_2darray, IMAGE_SAMPLE_C_CL_O, AMDGPUDim2DArray }, // 295
  { Intrinsic::amdgcn_image_sample_c_cl_o_3d, IMAGE_SAMPLE_C_CL_O, AMDGPUDim3D }, // 296
  { Intrinsic::amdgcn_image_sample_c_cl_o_cube, IMAGE_SAMPLE_C_CL_O, AMDGPUDimCube }, // 297
  { Intrinsic::amdgcn_image_sample_c_cube, IMAGE_SAMPLE_C, AMDGPUDimCube }, // 298
  { Intrinsic::amdgcn_image_sample_c_d_1d, IMAGE_SAMPLE_C_D, AMDGPUDim1D }, // 299
  { Intrinsic::amdgcn_image_sample_c_d_1darray, IMAGE_SAMPLE_C_D, AMDGPUDim1DArray }, // 300
  { Intrinsic::amdgcn_image_sample_c_d_2d, IMAGE_SAMPLE_C_D, AMDGPUDim2D }, // 301
  { Intrinsic::amdgcn_image_sample_c_d_2darray, IMAGE_SAMPLE_C_D, AMDGPUDim2DArray }, // 302
  { Intrinsic::amdgcn_image_sample_c_d_3d, IMAGE_SAMPLE_C_D, AMDGPUDim3D }, // 303
  { Intrinsic::amdgcn_image_sample_c_d_cl_1d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim1D }, // 304
  { Intrinsic::amdgcn_image_sample_c_d_cl_1darray, IMAGE_SAMPLE_C_D_CL, AMDGPUDim1DArray }, // 305
  { Intrinsic::amdgcn_image_sample_c_d_cl_2d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim2D }, // 306
  { Intrinsic::amdgcn_image_sample_c_d_cl_2darray, IMAGE_SAMPLE_C_D_CL, AMDGPUDim2DArray }, // 307
  { Intrinsic::amdgcn_image_sample_c_d_cl_3d, IMAGE_SAMPLE_C_D_CL, AMDGPUDim3D }, // 308
  { Intrinsic::amdgcn_image_sample_c_d_cl_cube, IMAGE_SAMPLE_C_D_CL, AMDGPUDimCube }, // 309
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim1D }, // 310
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1darray, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim1DArray }, // 311
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim2D }, // 312
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2darray, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim2DArray }, // 313
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_3d, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDim3D }, // 314
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_cube, IMAGE_SAMPLE_C_D_CL_O, AMDGPUDimCube }, // 315
  { Intrinsic::amdgcn_image_sample_c_d_cube, IMAGE_SAMPLE_C_D, AMDGPUDimCube }, // 316
  { Intrinsic::amdgcn_image_sample_c_d_o_1d, IMAGE_SAMPLE_C_D_O, AMDGPUDim1D }, // 317
  { Intrinsic::amdgcn_image_sample_c_d_o_1darray, IMAGE_SAMPLE_C_D_O, AMDGPUDim1DArray }, // 318
  { Intrinsic::amdgcn_image_sample_c_d_o_2d, IMAGE_SAMPLE_C_D_O, AMDGPUDim2D }, // 319
  { Intrinsic::amdgcn_image_sample_c_d_o_2darray, IMAGE_SAMPLE_C_D_O, AMDGPUDim2DArray }, // 320
  { Intrinsic::amdgcn_image_sample_c_d_o_3d, IMAGE_SAMPLE_C_D_O, AMDGPUDim3D }, // 321
  { Intrinsic::amdgcn_image_sample_c_d_o_cube, IMAGE_SAMPLE_C_D_O, AMDGPUDimCube }, // 322
  { Intrinsic::amdgcn_image_sample_c_l_1d, IMAGE_SAMPLE_C_L, AMDGPUDim1D }, // 323
  { Intrinsic::amdgcn_image_sample_c_l_1darray, IMAGE_SAMPLE_C_L, AMDGPUDim1DArray }, // 324
  { Intrinsic::amdgcn_image_sample_c_l_2d, IMAGE_SAMPLE_C_L, AMDGPUDim2D }, // 325
  { Intrinsic::amdgcn_image_sample_c_l_2darray, IMAGE_SAMPLE_C_L, AMDGPUDim2DArray }, // 326
  { Intrinsic::amdgcn_image_sample_c_l_3d, IMAGE_SAMPLE_C_L, AMDGPUDim3D }, // 327
  { Intrinsic::amdgcn_image_sample_c_l_cube, IMAGE_SAMPLE_C_L, AMDGPUDimCube }, // 328
  { Intrinsic::amdgcn_image_sample_c_l_o_1d, IMAGE_SAMPLE_C_L_O, AMDGPUDim1D }, // 329
  { Intrinsic::amdgcn_image_sample_c_l_o_1darray, IMAGE_SAMPLE_C_L_O, AMDGPUDim1DArray }, // 330
  { Intrinsic::amdgcn_image_sample_c_l_o_2d, IMAGE_SAMPLE_C_L_O, AMDGPUDim2D }, // 331
  { Intrinsic::amdgcn_image_sample_c_l_o_2darray, IMAGE_SAMPLE_C_L_O, AMDGPUDim2DArray }, // 332
  { Intrinsic::amdgcn_image_sample_c_l_o_3d, IMAGE_SAMPLE_C_L_O, AMDGPUDim3D }, // 333
  { Intrinsic::amdgcn_image_sample_c_l_o_cube, IMAGE_SAMPLE_C_L_O, AMDGPUDimCube }, // 334
  { Intrinsic::amdgcn_image_sample_c_lz_1d, IMAGE_SAMPLE_C_LZ, AMDGPUDim1D }, // 335
  { Intrinsic::amdgcn_image_sample_c_lz_1darray, IMAGE_SAMPLE_C_LZ, AMDGPUDim1DArray }, // 336
  { Intrinsic::amdgcn_image_sample_c_lz_2d, IMAGE_SAMPLE_C_LZ, AMDGPUDim2D }, // 337
  { Intrinsic::amdgcn_image_sample_c_lz_2darray, IMAGE_SAMPLE_C_LZ, AMDGPUDim2DArray }, // 338
  { Intrinsic::amdgcn_image_sample_c_lz_3d, IMAGE_SAMPLE_C_LZ, AMDGPUDim3D }, // 339
  { Intrinsic::amdgcn_image_sample_c_lz_cube, IMAGE_SAMPLE_C_LZ, AMDGPUDimCube }, // 340
  { Intrinsic::amdgcn_image_sample_c_lz_o_1d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim1D }, // 341
  { Intrinsic::amdgcn_image_sample_c_lz_o_1darray, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim1DArray }, // 342
  { Intrinsic::amdgcn_image_sample_c_lz_o_2d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim2D }, // 343
  { Intrinsic::amdgcn_image_sample_c_lz_o_2darray, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim2DArray }, // 344
  { Intrinsic::amdgcn_image_sample_c_lz_o_3d, IMAGE_SAMPLE_C_LZ_O, AMDGPUDim3D }, // 345
  { Intrinsic::amdgcn_image_sample_c_lz_o_cube, IMAGE_SAMPLE_C_LZ_O, AMDGPUDimCube }, // 346
  { Intrinsic::amdgcn_image_sample_c_o_1d, IMAGE_SAMPLE_C_O, AMDGPUDim1D }, // 347
  { Intrinsic::amdgcn_image_sample_c_o_1darray, IMAGE_SAMPLE_C_O, AMDGPUDim1DArray }, // 348
  { Intrinsic::amdgcn_image_sample_c_o_2d, IMAGE_SAMPLE_C_O, AMDGPUDim2D }, // 349
  { Intrinsic::amdgcn_image_sample_c_o_2darray, IMAGE_SAMPLE_C_O, AMDGPUDim2DArray }, // 350
  { Intrinsic::amdgcn_image_sample_c_o_3d, IMAGE_SAMPLE_C_O, AMDGPUDim3D }, // 351
  { Intrinsic::amdgcn_image_sample_c_o_cube, IMAGE_SAMPLE_C_O, AMDGPUDimCube }, // 352
  { Intrinsic::amdgcn_image_sample_cd_1d, IMAGE_SAMPLE_CD, AMDGPUDim1D }, // 353
  { Intrinsic::amdgcn_image_sample_cd_1darray, IMAGE_SAMPLE_CD, AMDGPUDim1DArray }, // 354
  { Intrinsic::amdgcn_image_sample_cd_2d, IMAGE_SAMPLE_CD, AMDGPUDim2D }, // 355
  { Intrinsic::amdgcn_image_sample_cd_2darray, IMAGE_SAMPLE_CD, AMDGPUDim2DArray }, // 356
  { Intrinsic::amdgcn_image_sample_cd_3d, IMAGE_SAMPLE_CD, AMDGPUDim3D }, // 357
  { Intrinsic::amdgcn_image_sample_cd_cl_1d, IMAGE_SAMPLE_CD_CL, AMDGPUDim1D }, // 358
  { Intrinsic::amdgcn_image_sample_cd_cl_1darray, IMAGE_SAMPLE_CD_CL, AMDGPUDim1DArray }, // 359
  { Intrinsic::amdgcn_image_sample_cd_cl_2d, IMAGE_SAMPLE_CD_CL, AMDGPUDim2D }, // 360
  { Intrinsic::amdgcn_image_sample_cd_cl_2darray, IMAGE_SAMPLE_CD_CL, AMDGPUDim2DArray }, // 361
  { Intrinsic::amdgcn_image_sample_cd_cl_3d, IMAGE_SAMPLE_CD_CL, AMDGPUDim3D }, // 362
  { Intrinsic::amdgcn_image_sample_cd_cl_cube, IMAGE_SAMPLE_CD_CL, AMDGPUDimCube }, // 363
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim1D }, // 364
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1darray, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim1DArray }, // 365
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim2D }, // 366
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2darray, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim2DArray }, // 367
  { Intrinsic::amdgcn_image_sample_cd_cl_o_3d, IMAGE_SAMPLE_CD_CL_O, AMDGPUDim3D }, // 368
  { Intrinsic::amdgcn_image_sample_cd_cl_o_cube, IMAGE_SAMPLE_CD_CL_O, AMDGPUDimCube }, // 369
  { Intrinsic::amdgcn_image_sample_cd_cube, IMAGE_SAMPLE_CD, AMDGPUDimCube }, // 370
  { Intrinsic::amdgcn_image_sample_cd_o_1d, IMAGE_SAMPLE_CD_O, AMDGPUDim1D }, // 371
  { Intrinsic::amdgcn_image_sample_cd_o_1darray, IMAGE_SAMPLE_CD_O, AMDGPUDim1DArray }, // 372
  { Intrinsic::amdgcn_image_sample_cd_o_2d, IMAGE_SAMPLE_CD_O, AMDGPUDim2D }, // 373
  { Intrinsic::amdgcn_image_sample_cd_o_2darray, IMAGE_SAMPLE_CD_O, AMDGPUDim2DArray }, // 374
  { Intrinsic::amdgcn_image_sample_cd_o_3d, IMAGE_SAMPLE_CD_O, AMDGPUDim3D }, // 375
  { Intrinsic::amdgcn_image_sample_cd_o_cube, IMAGE_SAMPLE_CD_O, AMDGPUDimCube }, // 376
  { Intrinsic::amdgcn_image_sample_cl_1d, IMAGE_SAMPLE_CL, AMDGPUDim1D }, // 377
  { Intrinsic::amdgcn_image_sample_cl_1darray, IMAGE_SAMPLE_CL, AMDGPUDim1DArray }, // 378
  { Intrinsic::amdgcn_image_sample_cl_2d, IMAGE_SAMPLE_CL, AMDGPUDim2D }, // 379
  { Intrinsic::amdgcn_image_sample_cl_2darray, IMAGE_SAMPLE_CL, AMDGPUDim2DArray }, // 380
  { Intrinsic::amdgcn_image_sample_cl_3d, IMAGE_SAMPLE_CL, AMDGPUDim3D }, // 381
  { Intrinsic::amdgcn_image_sample_cl_cube, IMAGE_SAMPLE_CL, AMDGPUDimCube }, // 382
  { Intrinsic::amdgcn_image_sample_cl_o_1d, IMAGE_SAMPLE_CL_O, AMDGPUDim1D }, // 383
  { Intrinsic::amdgcn_image_sample_cl_o_1darray, IMAGE_SAMPLE_CL_O, AMDGPUDim1DArray }, // 384
  { Intrinsic::amdgcn_image_sample_cl_o_2d, IMAGE_SAMPLE_CL_O, AMDGPUDim2D }, // 385
  { Intrinsic::amdgcn_image_sample_cl_o_2darray, IMAGE_SAMPLE_CL_O, AMDGPUDim2DArray }, // 386
  { Intrinsic::amdgcn_image_sample_cl_o_3d, IMAGE_SAMPLE_CL_O, AMDGPUDim3D }, // 387
  { Intrinsic::amdgcn_image_sample_cl_o_cube, IMAGE_SAMPLE_CL_O, AMDGPUDimCube }, // 388
  { Intrinsic::amdgcn_image_sample_cube, IMAGE_SAMPLE, AMDGPUDimCube }, // 389
  { Intrinsic::amdgcn_image_sample_d_1d, IMAGE_SAMPLE_D, AMDGPUDim1D }, // 390
  { Intrinsic::amdgcn_image_sample_d_1darray, IMAGE_SAMPLE_D, AMDGPUDim1DArray }, // 391
  { Intrinsic::amdgcn_image_sample_d_2d, IMAGE_SAMPLE_D, AMDGPUDim2D }, // 392
  { Intrinsic::amdgcn_image_sample_d_2darray, IMAGE_SAMPLE_D, AMDGPUDim2DArray }, // 393
  { Intrinsic::amdgcn_image_sample_d_3d, IMAGE_SAMPLE_D, AMDGPUDim3D }, // 394
  { Intrinsic::amdgcn_image_sample_d_cl_1d, IMAGE_SAMPLE_D_CL, AMDGPUDim1D }, // 395
  { Intrinsic::amdgcn_image_sample_d_cl_1darray, IMAGE_SAMPLE_D_CL, AMDGPUDim1DArray }, // 396
  { Intrinsic::amdgcn_image_sample_d_cl_2d, IMAGE_SAMPLE_D_CL, AMDGPUDim2D }, // 397
  { Intrinsic::amdgcn_image_sample_d_cl_2darray, IMAGE_SAMPLE_D_CL, AMDGPUDim2DArray }, // 398
  { Intrinsic::amdgcn_image_sample_d_cl_3d, IMAGE_SAMPLE_D_CL, AMDGPUDim3D }, // 399
  { Intrinsic::amdgcn_image_sample_d_cl_cube, IMAGE_SAMPLE_D_CL, AMDGPUDimCube }, // 400
  { Intrinsic::amdgcn_image_sample_d_cl_o_1d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim1D }, // 401
  { Intrinsic::amdgcn_image_sample_d_cl_o_1darray, IMAGE_SAMPLE_D_CL_O, AMDGPUDim1DArray }, // 402
  { Intrinsic::amdgcn_image_sample_d_cl_o_2d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim2D }, // 403
  { Intrinsic::amdgcn_image_sample_d_cl_o_2darray, IMAGE_SAMPLE_D_CL_O, AMDGPUDim2DArray }, // 404
  { Intrinsic::amdgcn_image_sample_d_cl_o_3d, IMAGE_SAMPLE_D_CL_O, AMDGPUDim3D }, // 405
  { Intrinsic::amdgcn_image_sample_d_cl_o_cube, IMAGE_SAMPLE_D_CL_O, AMDGPUDimCube }, // 406
  { Intrinsic::amdgcn_image_sample_d_cube, IMAGE_SAMPLE_D, AMDGPUDimCube }, // 407
  { Intrinsic::amdgcn_image_sample_d_o_1d, IMAGE_SAMPLE_D_O, AMDGPUDim1D }, // 408
  { Intrinsic::amdgcn_image_sample_d_o_1darray, IMAGE_SAMPLE_D_O, AMDGPUDim1DArray }, // 409
  { Intrinsic::amdgcn_image_sample_d_o_2d, IMAGE_SAMPLE_D_O, AMDGPUDim2D }, // 410
  { Intrinsic::amdgcn_image_sample_d_o_2darray, IMAGE_SAMPLE_D_O, AMDGPUDim2DArray }, // 411
  { Intrinsic::amdgcn_image_sample_d_o_3d, IMAGE_SAMPLE_D_O, AMDGPUDim3D }, // 412
  { Intrinsic::amdgcn_image_sample_d_o_cube, IMAGE_SAMPLE_D_O, AMDGPUDimCube }, // 413
  { Intrinsic::amdgcn_image_sample_l_1d, IMAGE_SAMPLE_L, AMDGPUDim1D }, // 414
  { Intrinsic::amdgcn_image_sample_l_1darray, IMAGE_SAMPLE_L, AMDGPUDim1DArray }, // 415
  { Intrinsic::amdgcn_image_sample_l_2d, IMAGE_SAMPLE_L, AMDGPUDim2D }, // 416
  { Intrinsic::amdgcn_image_sample_l_2darray, IMAGE_SAMPLE_L, AMDGPUDim2DArray }, // 417
  { Intrinsic::amdgcn_image_sample_l_3d, IMAGE_SAMPLE_L, AMDGPUDim3D }, // 418
  { Intrinsic::amdgcn_image_sample_l_cube, IMAGE_SAMPLE_L, AMDGPUDimCube }, // 419
  { Intrinsic::amdgcn_image_sample_l_o_1d, IMAGE_SAMPLE_L_O, AMDGPUDim1D }, // 420
  { Intrinsic::amdgcn_image_sample_l_o_1darray, IMAGE_SAMPLE_L_O, AMDGPUDim1DArray }, // 421
  { Intrinsic::amdgcn_image_sample_l_o_2d, IMAGE_SAMPLE_L_O, AMDGPUDim2D }, // 422
  { Intrinsic::amdgcn_image_sample_l_o_2darray, IMAGE_SAMPLE_L_O, AMDGPUDim2DArray }, // 423
  { Intrinsic::amdgcn_image_sample_l_o_3d, IMAGE_SAMPLE_L_O, AMDGPUDim3D }, // 424
  { Intrinsic::amdgcn_image_sample_l_o_cube, IMAGE_SAMPLE_L_O, AMDGPUDimCube }, // 425
  { Intrinsic::amdgcn_image_sample_lz_1d, IMAGE_SAMPLE_LZ, AMDGPUDim1D }, // 426
  { Intrinsic::amdgcn_image_sample_lz_1darray, IMAGE_SAMPLE_LZ, AMDGPUDim1DArray }, // 427
  { Intrinsic::amdgcn_image_sample_lz_2d, IMAGE_SAMPLE_LZ, AMDGPUDim2D }, // 428
  { Intrinsic::amdgcn_image_sample_lz_2darray, IMAGE_SAMPLE_LZ, AMDGPUDim2DArray }, // 429
  { Intrinsic::amdgcn_image_sample_lz_3d, IMAGE_SAMPLE_LZ, AMDGPUDim3D }, // 430
  { Intrinsic::amdgcn_image_sample_lz_cube, IMAGE_SAMPLE_LZ, AMDGPUDimCube }, // 431
  { Intrinsic::amdgcn_image_sample_lz_o_1d, IMAGE_SAMPLE_LZ_O, AMDGPUDim1D }, // 432
  { Intrinsic::amdgcn_image_sample_lz_o_1darray, IMAGE_SAMPLE_LZ_O, AMDGPUDim1DArray }, // 433
  { Intrinsic::amdgcn_image_sample_lz_o_2d, IMAGE_SAMPLE_LZ_O, AMDGPUDim2D }, // 434
  { Intrinsic::amdgcn_image_sample_lz_o_2darray, IMAGE_SAMPLE_LZ_O, AMDGPUDim2DArray }, // 435
  { Intrinsic::amdgcn_image_sample_lz_o_3d, IMAGE_SAMPLE_LZ_O, AMDGPUDim3D }, // 436
  { Intrinsic::amdgcn_image_sample_lz_o_cube, IMAGE_SAMPLE_LZ_O, AMDGPUDimCube }, // 437
  { Intrinsic::amdgcn_image_sample_o_1d, IMAGE_SAMPLE_O, AMDGPUDim1D }, // 438
  { Intrinsic::amdgcn_image_sample_o_1darray, IMAGE_SAMPLE_O, AMDGPUDim1DArray }, // 439
  { Intrinsic::amdgcn_image_sample_o_2d, IMAGE_SAMPLE_O, AMDGPUDim2D }, // 440
  { Intrinsic::amdgcn_image_sample_o_2darray, IMAGE_SAMPLE_O, AMDGPUDim2DArray }, // 441
  { Intrinsic::amdgcn_image_sample_o_3d, IMAGE_SAMPLE_O, AMDGPUDim3D }, // 442
  { Intrinsic::amdgcn_image_sample_o_cube, IMAGE_SAMPLE_O, AMDGPUDimCube }, // 443
  { Intrinsic::amdgcn_image_store_1d, IMAGE_STORE, AMDGPUDim1D }, // 444
  { Intrinsic::amdgcn_image_store_1darray, IMAGE_STORE, AMDGPUDim1DArray }, // 445
  { Intrinsic::amdgcn_image_store_2d, IMAGE_STORE, AMDGPUDim2D }, // 446
  { Intrinsic::amdgcn_image_store_2darray, IMAGE_STORE, AMDGPUDim2DArray }, // 447
  { Intrinsic::amdgcn_image_store_2darraymsaa, IMAGE_STORE, AMDGPUDim2DArrayMsaa }, // 448
  { Intrinsic::amdgcn_image_store_2dmsaa, IMAGE_STORE, AMDGPUDim2DMsaa }, // 449
  { Intrinsic::amdgcn_image_store_3d, IMAGE_STORE, AMDGPUDim3D }, // 450
  { Intrinsic::amdgcn_image_store_cube, IMAGE_STORE, AMDGPUDimCube }, // 451
  { Intrinsic::amdgcn_image_store_mip_1d, IMAGE_STORE_MIP, AMDGPUDim1D }, // 452
  { Intrinsic::amdgcn_image_store_mip_1darray, IMAGE_STORE_MIP, AMDGPUDim1DArray }, // 453
  { Intrinsic::amdgcn_image_store_mip_2d, IMAGE_STORE_MIP, AMDGPUDim2D }, // 454
  { Intrinsic::amdgcn_image_store_mip_2darray, IMAGE_STORE_MIP, AMDGPUDim2DArray }, // 455
  { Intrinsic::amdgcn_image_store_mip_3d, IMAGE_STORE_MIP, AMDGPUDim3D }, // 456
  { Intrinsic::amdgcn_image_store_mip_cube, IMAGE_STORE_MIP, AMDGPUDimCube }, // 457
 };

const ImageDimIntrinsicInfo *getImageDimIntrinsicInfo(unsigned Intr) {
  if ((Intr < Intrinsic::amdgcn_image_atomic_add_1d) ||
      (Intr > Intrinsic::amdgcn_image_store_mip_cube))
    return nullptr;

  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(ImageDimIntrinsicTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const ImageDimIntrinsicInfo &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_MIMGBaseOpcodesTable_DECL
const MIMGBaseOpcodeInfo *getMIMGBaseOpcodeInfo(unsigned BaseOpcode);
#endif

#ifdef GET_MIMGBaseOpcodesTable_IMPL
const MIMGBaseOpcodeInfo MIMGBaseOpcodesTable[] = {
  { IMAGE_ATOMIC_ADD, false, true, false, false, false, 0x0, false, true, false, false }, // 0
  { IMAGE_ATOMIC_AND, false, true, false, false, false, 0x0, false, true, false, false }, // 1
  { IMAGE_ATOMIC_CMPSWAP, false, true, true, false, false, 0x0, false, true, false, false }, // 2
  { IMAGE_ATOMIC_DEC, false, true, false, false, false, 0x0, false, true, false, false }, // 3
  { IMAGE_ATOMIC_INC, false, true, false, false, false, 0x0, false, true, false, false }, // 4
  { IMAGE_ATOMIC_OR, false, true, false, false, false, 0x0, false, true, false, false }, // 5
  { IMAGE_ATOMIC_SMAX, false, true, false, false, false, 0x0, false, true, false, false }, // 6
  { IMAGE_ATOMIC_SMIN, false, true, false, false, false, 0x0, false, true, false, false }, // 7
  { IMAGE_ATOMIC_SUB, false, true, false, false, false, 0x0, false, true, false, false }, // 8
  { IMAGE_ATOMIC_SWAP, false, true, false, false, false, 0x0, false, true, false, false }, // 9
  { IMAGE_ATOMIC_UMAX, false, true, false, false, false, 0x0, false, true, false, false }, // 10
  { IMAGE_ATOMIC_UMIN, false, true, false, false, false, 0x0, false, true, false, false }, // 11
  { IMAGE_ATOMIC_XOR, false, true, false, false, false, 0x0, false, true, false, false }, // 12
  { IMAGE_GATHER4, false, false, false, true, true, 0x0, false, true, false, true }, // 13
  { IMAGE_GATHER4_B, false, false, false, true, true, 0x1, false, true, false, true }, // 14
  { IMAGE_GATHER4_B_CL, false, false, false, true, true, 0x1, false, true, true, true }, // 15
  { IMAGE_GATHER4_B_CL_O, false, false, false, true, true, 0x2, false, true, true, true }, // 16
  { IMAGE_GATHER4_B_O, false, false, false, true, true, 0x2, false, true, false, true }, // 17
  { IMAGE_GATHER4_C, false, false, false, true, true, 0x1, false, true, false, true }, // 18
  { IMAGE_GATHER4_CL, false, false, false, true, true, 0x0, false, true, true, true }, // 19
  { IMAGE_GATHER4_CL_O, false, false, false, true, true, 0x1, false, true, true, true }, // 20
  { IMAGE_GATHER4_C_B, false, false, false, true, true, 0x2, false, true, false, true }, // 21
  { IMAGE_GATHER4_C_B_CL, false, false, false, true, true, 0x2, false, true, true, true }, // 22
  { IMAGE_GATHER4_C_B_CL_O, false, false, false, true, true, 0x3, false, true, true, true }, // 23
  { IMAGE_GATHER4_C_B_O, false, false, false, true, true, 0x3, false, true, false, true }, // 24
  { IMAGE_GATHER4_C_CL, false, false, false, true, true, 0x1, false, true, true, true }, // 25
  { IMAGE_GATHER4_C_CL_O, false, false, false, true, true, 0x2, false, true, true, true }, // 26
  { IMAGE_GATHER4_C_L, false, false, false, true, true, 0x1, false, true, true, true }, // 27
  { IMAGE_GATHER4_C_LZ, false, false, false, true, true, 0x1, false, true, false, true }, // 28
  { IMAGE_GATHER4_C_LZ_O, false, false, false, true, true, 0x2, false, true, false, true }, // 29
  { IMAGE_GATHER4_C_L_O, false, false, false, true, true, 0x2, false, true, true, true }, // 30
  { IMAGE_GATHER4_C_O, false, false, false, true, true, 0x2, false, true, false, true }, // 31
  { IMAGE_GATHER4_L, false, false, false, true, true, 0x0, false, true, true, true }, // 32
  { IMAGE_GATHER4_LZ, false, false, false, true, true, 0x0, false, true, false, true }, // 33
  { IMAGE_GATHER4_LZ_O, false, false, false, true, true, 0x1, false, true, false, true }, // 34
  { IMAGE_GATHER4_L_O, false, false, false, true, true, 0x1, false, true, true, true }, // 35
  { IMAGE_GATHER4_O, false, false, false, true, true, 0x1, false, true, false, true }, // 36
  { IMAGE_GET_LOD, false, false, false, true, false, 0x0, false, true, false, false }, // 37
  { IMAGE_GET_RESINFO, false, false, false, false, false, 0x0, false, false, true, false }, // 38
  { IMAGE_LOAD, false, false, false, false, false, 0x0, false, true, false, true }, // 39
  { IMAGE_LOAD_MIP, false, false, false, false, false, 0x0, false, true, true, true }, // 40
  { IMAGE_LOAD_MIP_PCK, false, false, false, false, false, 0x0, false, true, true, false }, // 41
  { IMAGE_LOAD_MIP_PCK_SGN, false, false, false, false, false, 0x0, false, true, true, false }, // 42
  { IMAGE_LOAD_PCK, false, false, false, false, false, 0x0, false, true, false, false }, // 43
  { IMAGE_LOAD_PCK_SGN, false, false, false, false, false, 0x0, false, true, false, false }, // 44
  { IMAGE_SAMPLE, false, false, false, true, false, 0x0, false, true, false, true }, // 45
  { IMAGE_SAMPLE_B, false, false, false, true, false, 0x1, false, true, false, true }, // 46
  { IMAGE_SAMPLE_B_CL, false, false, false, true, false, 0x1, false, true, true, true }, // 47
  { IMAGE_SAMPLE_B_CL_O, false, false, false, true, false, 0x2, false, true, true, true }, // 48
  { IMAGE_SAMPLE_B_O, false, false, false, true, false, 0x2, false, true, false, true }, // 49
  { IMAGE_SAMPLE_C, false, false, false, true, false, 0x1, false, true, false, true }, // 50
  { IMAGE_SAMPLE_CD, false, false, false, true, false, 0x0, true, true, false, true }, // 51
  { IMAGE_SAMPLE_CD_CL, false, false, false, true, false, 0x0, true, true, true, true }, // 52
  { IMAGE_SAMPLE_CD_CL_O, false, false, false, true, false, 0x1, true, true, true, true }, // 53
  { IMAGE_SAMPLE_CD_O, false, false, false, true, false, 0x1, true, true, false, true }, // 54
  { IMAGE_SAMPLE_CL, false, false, false, true, false, 0x0, false, true, true, true }, // 55
  { IMAGE_SAMPLE_CL_O, false, false, false, true, false, 0x1, false, true, true, true }, // 56
  { IMAGE_SAMPLE_C_B, false, false, false, true, false, 0x2, false, true, false, true }, // 57
  { IMAGE_SAMPLE_C_B_CL, false, false, false, true, false, 0x2, false, true, true, true }, // 58
  { IMAGE_SAMPLE_C_B_CL_O, false, false, false, true, false, 0x3, false, true, true, true }, // 59
  { IMAGE_SAMPLE_C_B_O, false, false, false, true, false, 0x3, false, true, false, true }, // 60
  { IMAGE_SAMPLE_C_CD, false, false, false, true, false, 0x1, true, true, false, true }, // 61
  { IMAGE_SAMPLE_C_CD_CL, false, false, false, true, false, 0x1, true, true, true, true }, // 62
  { IMAGE_SAMPLE_C_CD_CL_O, false, false, false, true, false, 0x2, true, true, true, true }, // 63
  { IMAGE_SAMPLE_C_CD_O, false, false, false, true, false, 0x2, true, true, false, true }, // 64
  { IMAGE_SAMPLE_C_CL, false, false, false, true, false, 0x1, false, true, true, true }, // 65
  { IMAGE_SAMPLE_C_CL_O, false, false, false, true, false, 0x2, false, true, true, true }, // 66
  { IMAGE_SAMPLE_C_D, false, false, false, true, false, 0x1, true, true, false, true }, // 67
  { IMAGE_SAMPLE_C_D_CL, false, false, false, true, false, 0x1, true, true, true, true }, // 68
  { IMAGE_SAMPLE_C_D_CL_O, false, false, false, true, false, 0x2, true, true, true, true }, // 69
  { IMAGE_SAMPLE_C_D_O, false, false, false, true, false, 0x2, true, true, false, true }, // 70
  { IMAGE_SAMPLE_C_L, false, false, false, true, false, 0x1, false, true, true, true }, // 71
  { IMAGE_SAMPLE_C_LZ, false, false, false, true, false, 0x1, false, true, false, true }, // 72
  { IMAGE_SAMPLE_C_LZ_O, false, false, false, true, false, 0x2, false, true, false, true }, // 73
  { IMAGE_SAMPLE_C_L_O, false, false, false, true, false, 0x2, false, true, true, true }, // 74
  { IMAGE_SAMPLE_C_O, false, false, false, true, false, 0x2, false, true, false, true }, // 75
  { IMAGE_SAMPLE_D, false, false, false, true, false, 0x0, true, true, false, true }, // 76
  { IMAGE_SAMPLE_D_CL, false, false, false, true, false, 0x0, true, true, true, true }, // 77
  { IMAGE_SAMPLE_D_CL_O, false, false, false, true, false, 0x1, true, true, true, true }, // 78
  { IMAGE_SAMPLE_D_O, false, false, false, true, false, 0x1, true, true, false, true }, // 79
  { IMAGE_SAMPLE_L, false, false, false, true, false, 0x0, false, true, true, true }, // 80
  { IMAGE_SAMPLE_LZ, false, false, false, true, false, 0x0, false, true, false, true }, // 81
  { IMAGE_SAMPLE_LZ_O, false, false, false, true, false, 0x1, false, true, false, true }, // 82
  { IMAGE_SAMPLE_L_O, false, false, false, true, false, 0x1, false, true, true, true }, // 83
  { IMAGE_SAMPLE_O, false, false, false, true, false, 0x1, false, true, false, true }, // 84
  { IMAGE_STORE, true, false, false, false, false, 0x0, false, true, false, true }, // 85
  { IMAGE_STORE_MIP, true, false, false, false, false, 0x0, false, true, true, true }, // 86
  { IMAGE_STORE_MIP_PCK, true, false, false, false, false, 0x0, false, true, true, false }, // 87
  { IMAGE_STORE_PCK, true, false, false, false, false, 0x0, false, true, false, false }, // 88
 };

const MIMGBaseOpcodeInfo *getMIMGBaseOpcodeInfo(unsigned BaseOpcode) {
  auto Table = makeArrayRef(MIMGBaseOpcodesTable);
  size_t Idx = BaseOpcode;
  return Idx >= Table.size() ? nullptr : &Table[Idx];
}
#endif

#ifdef GET_MIMGDimInfoTable_DECL
const MIMGDimInfo *getMIMGDimInfo(unsigned Dim);
#endif

#ifdef GET_MIMGDimInfoTable_IMPL
const MIMGDimInfo MIMGDimInfoTable[] = {
  { AMDGPUDim1D, 0x1, 0x2, false }, // 0
  { AMDGPUDim1DArray, 0x2, 0x2, true }, // 1
  { AMDGPUDim2D, 0x2, 0x4, false }, // 2
  { AMDGPUDim2DArray, 0x3, 0x4, true }, // 3
  { AMDGPUDim2DArrayMsaa, 0x4, 0x4, true }, // 4
  { AMDGPUDim2DMsaa, 0x3, 0x4, false }, // 5
  { AMDGPUDim3D, 0x3, 0x6, false }, // 6
  { AMDGPUDimCube, 0x3, 0x4, true }, // 7
 };

const MIMGDimInfo *getMIMGDimInfo(unsigned Dim) {
  auto Table = makeArrayRef(MIMGDimInfoTable);
  size_t Idx = Dim;
  return Idx >= Table.size() ? nullptr : &Table[Idx];
}
#endif

#ifdef GET_MIMGInfoTable_DECL
const MIMGInfo *getMIMGOpcodeHelper(unsigned BaseOpcode, unsigned MIMGEncoding, uint8_t VDataDwords, uint8_t VAddrDwords);
const MIMGInfo *getMIMGInfo(unsigned Opcode);
#endif

#ifdef GET_MIMGInfoTable_IMPL
const MIMGInfo MIMGInfoTable[] = {
  { IMAGE_ATOMIC_ADD_V1_V1_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x1 }, // 0
  { IMAGE_ATOMIC_ADD_V1_V2_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x2 }, // 1
  { IMAGE_ATOMIC_ADD_V1_V3_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x3 }, // 2
  { IMAGE_ATOMIC_ADD_V1_V4_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x1, 0x4 }, // 3
  { IMAGE_ATOMIC_ADD_V2_V1_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x1 }, // 4
  { IMAGE_ATOMIC_ADD_V2_V2_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x2 }, // 5
  { IMAGE_ATOMIC_ADD_V2_V3_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x3 }, // 6
  { IMAGE_ATOMIC_ADD_V2_V4_si, IMAGE_ATOMIC_ADD, MIMGEncGfx6, 0x2, 0x4 }, // 7
  { IMAGE_ATOMIC_ADD_V1_V1_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x1 }, // 8
  { IMAGE_ATOMIC_ADD_V1_V2_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x2 }, // 9
  { IMAGE_ATOMIC_ADD_V1_V3_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x3 }, // 10
  { IMAGE_ATOMIC_ADD_V1_V4_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x1, 0x4 }, // 11
  { IMAGE_ATOMIC_ADD_V2_V1_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x1 }, // 12
  { IMAGE_ATOMIC_ADD_V2_V2_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x2 }, // 13
  { IMAGE_ATOMIC_ADD_V2_V3_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x3 }, // 14
  { IMAGE_ATOMIC_ADD_V2_V4_vi, IMAGE_ATOMIC_ADD, MIMGEncGfx8, 0x2, 0x4 }, // 15
  { IMAGE_ATOMIC_AND_V1_V1_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x1 }, // 16
  { IMAGE_ATOMIC_AND_V1_V2_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x2 }, // 17
  { IMAGE_ATOMIC_AND_V1_V3_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x3 }, // 18
  { IMAGE_ATOMIC_AND_V1_V4_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x1, 0x4 }, // 19
  { IMAGE_ATOMIC_AND_V2_V1_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x1 }, // 20
  { IMAGE_ATOMIC_AND_V2_V2_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x2 }, // 21
  { IMAGE_ATOMIC_AND_V2_V3_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x3 }, // 22
  { IMAGE_ATOMIC_AND_V2_V4_si, IMAGE_ATOMIC_AND, MIMGEncGfx6, 0x2, 0x4 }, // 23
  { IMAGE_ATOMIC_AND_V1_V1_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x1 }, // 24
  { IMAGE_ATOMIC_AND_V1_V2_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x2 }, // 25
  { IMAGE_ATOMIC_AND_V1_V3_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x3 }, // 26
  { IMAGE_ATOMIC_AND_V1_V4_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x1, 0x4 }, // 27
  { IMAGE_ATOMIC_AND_V2_V1_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x1 }, // 28
  { IMAGE_ATOMIC_AND_V2_V2_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x2 }, // 29
  { IMAGE_ATOMIC_AND_V2_V3_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x3 }, // 30
  { IMAGE_ATOMIC_AND_V2_V4_vi, IMAGE_ATOMIC_AND, MIMGEncGfx8, 0x2, 0x4 }, // 31
  { IMAGE_ATOMIC_CMPSWAP_V1_V1_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x1 }, // 32
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x2 }, // 33
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x3 }, // 34
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x2, 0x4 }, // 35
  { IMAGE_ATOMIC_CMPSWAP_V2_V1_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x1 }, // 36
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x2 }, // 37
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x3 }, // 38
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_si, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx6, 0x4, 0x4 }, // 39
  { IMAGE_ATOMIC_CMPSWAP_V1_V1_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x1 }, // 40
  { IMAGE_ATOMIC_CMPSWAP_V1_V2_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x2 }, // 41
  { IMAGE_ATOMIC_CMPSWAP_V1_V3_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x3 }, // 42
  { IMAGE_ATOMIC_CMPSWAP_V1_V4_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x2, 0x4 }, // 43
  { IMAGE_ATOMIC_CMPSWAP_V2_V1_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x1 }, // 44
  { IMAGE_ATOMIC_CMPSWAP_V2_V2_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x2 }, // 45
  { IMAGE_ATOMIC_CMPSWAP_V2_V3_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x3 }, // 46
  { IMAGE_ATOMIC_CMPSWAP_V2_V4_vi, IMAGE_ATOMIC_CMPSWAP, MIMGEncGfx8, 0x4, 0x4 }, // 47
  { IMAGE_ATOMIC_DEC_V1_V1_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x1 }, // 48
  { IMAGE_ATOMIC_DEC_V1_V2_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x2 }, // 49
  { IMAGE_ATOMIC_DEC_V1_V3_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x3 }, // 50
  { IMAGE_ATOMIC_DEC_V1_V4_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x1, 0x4 }, // 51
  { IMAGE_ATOMIC_DEC_V2_V1_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x1 }, // 52
  { IMAGE_ATOMIC_DEC_V2_V2_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x2 }, // 53
  { IMAGE_ATOMIC_DEC_V2_V3_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x3 }, // 54
  { IMAGE_ATOMIC_DEC_V2_V4_si, IMAGE_ATOMIC_DEC, MIMGEncGfx6, 0x2, 0x4 }, // 55
  { IMAGE_ATOMIC_DEC_V1_V1_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x1 }, // 56
  { IMAGE_ATOMIC_DEC_V1_V2_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x2 }, // 57
  { IMAGE_ATOMIC_DEC_V1_V3_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x3 }, // 58
  { IMAGE_ATOMIC_DEC_V1_V4_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x1, 0x4 }, // 59
  { IMAGE_ATOMIC_DEC_V2_V1_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x1 }, // 60
  { IMAGE_ATOMIC_DEC_V2_V2_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x2 }, // 61
  { IMAGE_ATOMIC_DEC_V2_V3_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x3 }, // 62
  { IMAGE_ATOMIC_DEC_V2_V4_vi, IMAGE_ATOMIC_DEC, MIMGEncGfx8, 0x2, 0x4 }, // 63
  { IMAGE_ATOMIC_INC_V1_V1_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x1 }, // 64
  { IMAGE_ATOMIC_INC_V1_V2_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x2 }, // 65
  { IMAGE_ATOMIC_INC_V1_V3_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x3 }, // 66
  { IMAGE_ATOMIC_INC_V1_V4_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x1, 0x4 }, // 67
  { IMAGE_ATOMIC_INC_V2_V1_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x1 }, // 68
  { IMAGE_ATOMIC_INC_V2_V2_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x2 }, // 69
  { IMAGE_ATOMIC_INC_V2_V3_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x3 }, // 70
  { IMAGE_ATOMIC_INC_V2_V4_si, IMAGE_ATOMIC_INC, MIMGEncGfx6, 0x2, 0x4 }, // 71
  { IMAGE_ATOMIC_INC_V1_V1_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x1 }, // 72
  { IMAGE_ATOMIC_INC_V1_V2_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x2 }, // 73
  { IMAGE_ATOMIC_INC_V1_V3_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x3 }, // 74
  { IMAGE_ATOMIC_INC_V1_V4_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x1, 0x4 }, // 75
  { IMAGE_ATOMIC_INC_V2_V1_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x1 }, // 76
  { IMAGE_ATOMIC_INC_V2_V2_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x2 }, // 77
  { IMAGE_ATOMIC_INC_V2_V3_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x3 }, // 78
  { IMAGE_ATOMIC_INC_V2_V4_vi, IMAGE_ATOMIC_INC, MIMGEncGfx8, 0x2, 0x4 }, // 79
  { IMAGE_ATOMIC_OR_V1_V1_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x1 }, // 80
  { IMAGE_ATOMIC_OR_V1_V2_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x2 }, // 81
  { IMAGE_ATOMIC_OR_V1_V3_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x3 }, // 82
  { IMAGE_ATOMIC_OR_V1_V4_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x1, 0x4 }, // 83
  { IMAGE_ATOMIC_OR_V2_V1_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x1 }, // 84
  { IMAGE_ATOMIC_OR_V2_V2_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x2 }, // 85
  { IMAGE_ATOMIC_OR_V2_V3_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x3 }, // 86
  { IMAGE_ATOMIC_OR_V2_V4_si, IMAGE_ATOMIC_OR, MIMGEncGfx6, 0x2, 0x4 }, // 87
  { IMAGE_ATOMIC_OR_V1_V1_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x1 }, // 88
  { IMAGE_ATOMIC_OR_V1_V2_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x2 }, // 89
  { IMAGE_ATOMIC_OR_V1_V3_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x3 }, // 90
  { IMAGE_ATOMIC_OR_V1_V4_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x1, 0x4 }, // 91
  { IMAGE_ATOMIC_OR_V2_V1_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x1 }, // 92
  { IMAGE_ATOMIC_OR_V2_V2_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x2 }, // 93
  { IMAGE_ATOMIC_OR_V2_V3_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x3 }, // 94
  { IMAGE_ATOMIC_OR_V2_V4_vi, IMAGE_ATOMIC_OR, MIMGEncGfx8, 0x2, 0x4 }, // 95
  { IMAGE_ATOMIC_SMAX_V1_V1_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x1 }, // 96
  { IMAGE_ATOMIC_SMAX_V1_V2_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x2 }, // 97
  { IMAGE_ATOMIC_SMAX_V1_V3_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x3 }, // 98
  { IMAGE_ATOMIC_SMAX_V1_V4_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x1, 0x4 }, // 99
  { IMAGE_ATOMIC_SMAX_V2_V1_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x1 }, // 100
  { IMAGE_ATOMIC_SMAX_V2_V2_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x2 }, // 101
  { IMAGE_ATOMIC_SMAX_V2_V3_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x3 }, // 102
  { IMAGE_ATOMIC_SMAX_V2_V4_si, IMAGE_ATOMIC_SMAX, MIMGEncGfx6, 0x2, 0x4 }, // 103
  { IMAGE_ATOMIC_SMAX_V1_V1_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x1 }, // 104
  { IMAGE_ATOMIC_SMAX_V1_V2_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x2 }, // 105
  { IMAGE_ATOMIC_SMAX_V1_V3_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x3 }, // 106
  { IMAGE_ATOMIC_SMAX_V1_V4_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x1, 0x4 }, // 107
  { IMAGE_ATOMIC_SMAX_V2_V1_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x1 }, // 108
  { IMAGE_ATOMIC_SMAX_V2_V2_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x2 }, // 109
  { IMAGE_ATOMIC_SMAX_V2_V3_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x3 }, // 110
  { IMAGE_ATOMIC_SMAX_V2_V4_vi, IMAGE_ATOMIC_SMAX, MIMGEncGfx8, 0x2, 0x4 }, // 111
  { IMAGE_ATOMIC_SMIN_V1_V1_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x1 }, // 112
  { IMAGE_ATOMIC_SMIN_V1_V2_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x2 }, // 113
  { IMAGE_ATOMIC_SMIN_V1_V3_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x3 }, // 114
  { IMAGE_ATOMIC_SMIN_V1_V4_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x1, 0x4 }, // 115
  { IMAGE_ATOMIC_SMIN_V2_V1_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x1 }, // 116
  { IMAGE_ATOMIC_SMIN_V2_V2_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x2 }, // 117
  { IMAGE_ATOMIC_SMIN_V2_V3_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x3 }, // 118
  { IMAGE_ATOMIC_SMIN_V2_V4_si, IMAGE_ATOMIC_SMIN, MIMGEncGfx6, 0x2, 0x4 }, // 119
  { IMAGE_ATOMIC_SMIN_V1_V1_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x1 }, // 120
  { IMAGE_ATOMIC_SMIN_V1_V2_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x2 }, // 121
  { IMAGE_ATOMIC_SMIN_V1_V3_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x3 }, // 122
  { IMAGE_ATOMIC_SMIN_V1_V4_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x1, 0x4 }, // 123
  { IMAGE_ATOMIC_SMIN_V2_V1_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x1 }, // 124
  { IMAGE_ATOMIC_SMIN_V2_V2_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x2 }, // 125
  { IMAGE_ATOMIC_SMIN_V2_V3_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x3 }, // 126
  { IMAGE_ATOMIC_SMIN_V2_V4_vi, IMAGE_ATOMIC_SMIN, MIMGEncGfx8, 0x2, 0x4 }, // 127
  { IMAGE_ATOMIC_SUB_V1_V1_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x1 }, // 128
  { IMAGE_ATOMIC_SUB_V1_V2_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x2 }, // 129
  { IMAGE_ATOMIC_SUB_V1_V3_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x3 }, // 130
  { IMAGE_ATOMIC_SUB_V1_V4_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x1, 0x4 }, // 131
  { IMAGE_ATOMIC_SUB_V2_V1_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x1 }, // 132
  { IMAGE_ATOMIC_SUB_V2_V2_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x2 }, // 133
  { IMAGE_ATOMIC_SUB_V2_V3_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x3 }, // 134
  { IMAGE_ATOMIC_SUB_V2_V4_si, IMAGE_ATOMIC_SUB, MIMGEncGfx6, 0x2, 0x4 }, // 135
  { IMAGE_ATOMIC_SUB_V1_V1_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x1 }, // 136
  { IMAGE_ATOMIC_SUB_V1_V2_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x2 }, // 137
  { IMAGE_ATOMIC_SUB_V1_V3_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x3 }, // 138
  { IMAGE_ATOMIC_SUB_V1_V4_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x1, 0x4 }, // 139
  { IMAGE_ATOMIC_SUB_V2_V1_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x1 }, // 140
  { IMAGE_ATOMIC_SUB_V2_V2_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x2 }, // 141
  { IMAGE_ATOMIC_SUB_V2_V3_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x3 }, // 142
  { IMAGE_ATOMIC_SUB_V2_V4_vi, IMAGE_ATOMIC_SUB, MIMGEncGfx8, 0x2, 0x4 }, // 143
  { IMAGE_ATOMIC_SWAP_V1_V1_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x1 }, // 144
  { IMAGE_ATOMIC_SWAP_V1_V2_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x2 }, // 145
  { IMAGE_ATOMIC_SWAP_V1_V3_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x3 }, // 146
  { IMAGE_ATOMIC_SWAP_V1_V4_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x1, 0x4 }, // 147
  { IMAGE_ATOMIC_SWAP_V2_V1_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x1 }, // 148
  { IMAGE_ATOMIC_SWAP_V2_V2_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x2 }, // 149
  { IMAGE_ATOMIC_SWAP_V2_V3_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x3 }, // 150
  { IMAGE_ATOMIC_SWAP_V2_V4_si, IMAGE_ATOMIC_SWAP, MIMGEncGfx6, 0x2, 0x4 }, // 151
  { IMAGE_ATOMIC_SWAP_V1_V1_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x1 }, // 152
  { IMAGE_ATOMIC_SWAP_V1_V2_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x2 }, // 153
  { IMAGE_ATOMIC_SWAP_V1_V3_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x3 }, // 154
  { IMAGE_ATOMIC_SWAP_V1_V4_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x1, 0x4 }, // 155
  { IMAGE_ATOMIC_SWAP_V2_V1_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x1 }, // 156
  { IMAGE_ATOMIC_SWAP_V2_V2_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x2 }, // 157
  { IMAGE_ATOMIC_SWAP_V2_V3_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x3 }, // 158
  { IMAGE_ATOMIC_SWAP_V2_V4_vi, IMAGE_ATOMIC_SWAP, MIMGEncGfx8, 0x2, 0x4 }, // 159
  { IMAGE_ATOMIC_UMAX_V1_V1_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x1 }, // 160
  { IMAGE_ATOMIC_UMAX_V1_V2_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x2 }, // 161
  { IMAGE_ATOMIC_UMAX_V1_V3_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x3 }, // 162
  { IMAGE_ATOMIC_UMAX_V1_V4_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x1, 0x4 }, // 163
  { IMAGE_ATOMIC_UMAX_V2_V1_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x1 }, // 164
  { IMAGE_ATOMIC_UMAX_V2_V2_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x2 }, // 165
  { IMAGE_ATOMIC_UMAX_V2_V3_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x3 }, // 166
  { IMAGE_ATOMIC_UMAX_V2_V4_si, IMAGE_ATOMIC_UMAX, MIMGEncGfx6, 0x2, 0x4 }, // 167
  { IMAGE_ATOMIC_UMAX_V1_V1_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x1 }, // 168
  { IMAGE_ATOMIC_UMAX_V1_V2_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x2 }, // 169
  { IMAGE_ATOMIC_UMAX_V1_V3_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x3 }, // 170
  { IMAGE_ATOMIC_UMAX_V1_V4_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x1, 0x4 }, // 171
  { IMAGE_ATOMIC_UMAX_V2_V1_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x1 }, // 172
  { IMAGE_ATOMIC_UMAX_V2_V2_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x2 }, // 173
  { IMAGE_ATOMIC_UMAX_V2_V3_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x3 }, // 174
  { IMAGE_ATOMIC_UMAX_V2_V4_vi, IMAGE_ATOMIC_UMAX, MIMGEncGfx8, 0x2, 0x4 }, // 175
  { IMAGE_ATOMIC_UMIN_V1_V1_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x1 }, // 176
  { IMAGE_ATOMIC_UMIN_V1_V2_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x2 }, // 177
  { IMAGE_ATOMIC_UMIN_V1_V3_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x3 }, // 178
  { IMAGE_ATOMIC_UMIN_V1_V4_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x1, 0x4 }, // 179
  { IMAGE_ATOMIC_UMIN_V2_V1_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x1 }, // 180
  { IMAGE_ATOMIC_UMIN_V2_V2_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x2 }, // 181
  { IMAGE_ATOMIC_UMIN_V2_V3_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x3 }, // 182
  { IMAGE_ATOMIC_UMIN_V2_V4_si, IMAGE_ATOMIC_UMIN, MIMGEncGfx6, 0x2, 0x4 }, // 183
  { IMAGE_ATOMIC_UMIN_V1_V1_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x1 }, // 184
  { IMAGE_ATOMIC_UMIN_V1_V2_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x2 }, // 185
  { IMAGE_ATOMIC_UMIN_V1_V3_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x3 }, // 186
  { IMAGE_ATOMIC_UMIN_V1_V4_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x1, 0x4 }, // 187
  { IMAGE_ATOMIC_UMIN_V2_V1_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x1 }, // 188
  { IMAGE_ATOMIC_UMIN_V2_V2_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x2 }, // 189
  { IMAGE_ATOMIC_UMIN_V2_V3_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x3 }, // 190
  { IMAGE_ATOMIC_UMIN_V2_V4_vi, IMAGE_ATOMIC_UMIN, MIMGEncGfx8, 0x2, 0x4 }, // 191
  { IMAGE_ATOMIC_XOR_V1_V1_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x1 }, // 192
  { IMAGE_ATOMIC_XOR_V1_V2_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x2 }, // 193
  { IMAGE_ATOMIC_XOR_V1_V3_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x3 }, // 194
  { IMAGE_ATOMIC_XOR_V1_V4_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x1, 0x4 }, // 195
  { IMAGE_ATOMIC_XOR_V2_V1_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x1 }, // 196
  { IMAGE_ATOMIC_XOR_V2_V2_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x2 }, // 197
  { IMAGE_ATOMIC_XOR_V2_V3_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x3 }, // 198
  { IMAGE_ATOMIC_XOR_V2_V4_si, IMAGE_ATOMIC_XOR, MIMGEncGfx6, 0x2, 0x4 }, // 199
  { IMAGE_ATOMIC_XOR_V1_V1_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x1 }, // 200
  { IMAGE_ATOMIC_XOR_V1_V2_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x2 }, // 201
  { IMAGE_ATOMIC_XOR_V1_V3_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x3 }, // 202
  { IMAGE_ATOMIC_XOR_V1_V4_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x1, 0x4 }, // 203
  { IMAGE_ATOMIC_XOR_V2_V1_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x1 }, // 204
  { IMAGE_ATOMIC_XOR_V2_V2_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x2 }, // 205
  { IMAGE_ATOMIC_XOR_V2_V3_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x3 }, // 206
  { IMAGE_ATOMIC_XOR_V2_V4_vi, IMAGE_ATOMIC_XOR, MIMGEncGfx8, 0x2, 0x4 }, // 207
  { IMAGE_GATHER4_V2_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x1 }, // 208
  { IMAGE_GATHER4_V2_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x2 }, // 209
  { IMAGE_GATHER4_V2_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x3 }, // 210
  { IMAGE_GATHER4_V2_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x2, 0x4 }, // 211
  { IMAGE_GATHER4_V4_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x1 }, // 212
  { IMAGE_GATHER4_V4_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x2 }, // 213
  { IMAGE_GATHER4_V4_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x3 }, // 214
  { IMAGE_GATHER4_V4_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x4, 0x4 }, // 215
  { IMAGE_GATHER4_V8_V1, IMAGE_GATHER4, MIMGEncGfx6, 0x8, 0x1 }, // 216
  { IMAGE_GATHER4_V8_V2, IMAGE_GATHER4, MIMGEncGfx6, 0x8, 0x2 }, // 217
  { IMAGE_GATHER4_V8_V3, IMAGE_GATHER4, MIMGEncGfx6, 0x8, 0x3 }, // 218
  { IMAGE_GATHER4_V8_V4, IMAGE_GATHER4, MIMGEncGfx6, 0x8, 0x4 }, // 219
  { IMAGE_GATHER4_B_V2_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x2 }, // 220
  { IMAGE_GATHER4_B_V2_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x3 }, // 221
  { IMAGE_GATHER4_B_V2_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x2, 0x4 }, // 222
  { IMAGE_GATHER4_B_V4_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x2 }, // 223
  { IMAGE_GATHER4_B_V4_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x3 }, // 224
  { IMAGE_GATHER4_B_V4_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x4, 0x4 }, // 225
  { IMAGE_GATHER4_B_V8_V2, IMAGE_GATHER4_B, MIMGEncGfx6, 0x8, 0x2 }, // 226
  { IMAGE_GATHER4_B_V8_V3, IMAGE_GATHER4_B, MIMGEncGfx6, 0x8, 0x3 }, // 227
  { IMAGE_GATHER4_B_V8_V4, IMAGE_GATHER4_B, MIMGEncGfx6, 0x8, 0x4 }, // 228
  { IMAGE_GATHER4_B_CL_V2_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x2 }, // 229
  { IMAGE_GATHER4_B_CL_V2_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 230
  { IMAGE_GATHER4_B_CL_V2_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 231
  { IMAGE_GATHER4_B_CL_V2_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 232
  { IMAGE_GATHER4_B_CL_V4_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x2 }, // 233
  { IMAGE_GATHER4_B_CL_V4_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 234
  { IMAGE_GATHER4_B_CL_V4_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 235
  { IMAGE_GATHER4_B_CL_V4_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 236
  { IMAGE_GATHER4_B_CL_V8_V2, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x8, 0x2 }, // 237
  { IMAGE_GATHER4_B_CL_V8_V3, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x8, 0x3 }, // 238
  { IMAGE_GATHER4_B_CL_V8_V4, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x8, 0x4 }, // 239
  { IMAGE_GATHER4_B_CL_V8_V8, IMAGE_GATHER4_B_CL, MIMGEncGfx6, 0x8, 0x8 }, // 240
  { IMAGE_GATHER4_B_CL_O_V2_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 241
  { IMAGE_GATHER4_B_CL_O_V2_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 242
  { IMAGE_GATHER4_B_CL_O_V2_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 243
  { IMAGE_GATHER4_B_CL_O_V4_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 244
  { IMAGE_GATHER4_B_CL_O_V4_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 245
  { IMAGE_GATHER4_B_CL_O_V4_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 246
  { IMAGE_GATHER4_B_CL_O_V8_V3, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 247
  { IMAGE_GATHER4_B_CL_O_V8_V4, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 248
  { IMAGE_GATHER4_B_CL_O_V8_V8, IMAGE_GATHER4_B_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 249
  { IMAGE_GATHER4_B_O_V2_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x3 }, // 250
  { IMAGE_GATHER4_B_O_V2_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 251
  { IMAGE_GATHER4_B_O_V2_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 252
  { IMAGE_GATHER4_B_O_V4_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x3 }, // 253
  { IMAGE_GATHER4_B_O_V4_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 254
  { IMAGE_GATHER4_B_O_V4_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 255
  { IMAGE_GATHER4_B_O_V8_V3, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x8, 0x3 }, // 256
  { IMAGE_GATHER4_B_O_V8_V4, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x8, 0x4 }, // 257
  { IMAGE_GATHER4_B_O_V8_V8, IMAGE_GATHER4_B_O, MIMGEncGfx6, 0x8, 0x8 }, // 258
  { IMAGE_GATHER4_C_V2_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x2 }, // 259
  { IMAGE_GATHER4_C_V2_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x3 }, // 260
  { IMAGE_GATHER4_C_V2_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x2, 0x4 }, // 261
  { IMAGE_GATHER4_C_V4_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x2 }, // 262
  { IMAGE_GATHER4_C_V4_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x3 }, // 263
  { IMAGE_GATHER4_C_V4_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x4, 0x4 }, // 264
  { IMAGE_GATHER4_C_V8_V2, IMAGE_GATHER4_C, MIMGEncGfx6, 0x8, 0x2 }, // 265
  { IMAGE_GATHER4_C_V8_V3, IMAGE_GATHER4_C, MIMGEncGfx6, 0x8, 0x3 }, // 266
  { IMAGE_GATHER4_C_V8_V4, IMAGE_GATHER4_C, MIMGEncGfx6, 0x8, 0x4 }, // 267
  { IMAGE_GATHER4_CL_V2_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x1 }, // 268
  { IMAGE_GATHER4_CL_V2_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x2 }, // 269
  { IMAGE_GATHER4_CL_V2_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x3 }, // 270
  { IMAGE_GATHER4_CL_V2_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x2, 0x4 }, // 271
  { IMAGE_GATHER4_CL_V4_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x1 }, // 272
  { IMAGE_GATHER4_CL_V4_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x2 }, // 273
  { IMAGE_GATHER4_CL_V4_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x3 }, // 274
  { IMAGE_GATHER4_CL_V4_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x4, 0x4 }, // 275
  { IMAGE_GATHER4_CL_V8_V1, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x8, 0x1 }, // 276
  { IMAGE_GATHER4_CL_V8_V2, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x8, 0x2 }, // 277
  { IMAGE_GATHER4_CL_V8_V3, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x8, 0x3 }, // 278
  { IMAGE_GATHER4_CL_V8_V4, IMAGE_GATHER4_CL, MIMGEncGfx6, 0x8, 0x4 }, // 279
  { IMAGE_GATHER4_CL_O_V2_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x2 }, // 280
  { IMAGE_GATHER4_CL_O_V2_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 281
  { IMAGE_GATHER4_CL_O_V2_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 282
  { IMAGE_GATHER4_CL_O_V2_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 283
  { IMAGE_GATHER4_CL_O_V4_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x2 }, // 284
  { IMAGE_GATHER4_CL_O_V4_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 285
  { IMAGE_GATHER4_CL_O_V4_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 286
  { IMAGE_GATHER4_CL_O_V4_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 287
  { IMAGE_GATHER4_CL_O_V8_V2, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x8, 0x2 }, // 288
  { IMAGE_GATHER4_CL_O_V8_V3, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 289
  { IMAGE_GATHER4_CL_O_V8_V4, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 290
  { IMAGE_GATHER4_CL_O_V8_V8, IMAGE_GATHER4_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 291
  { IMAGE_GATHER4_C_B_V2_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x3 }, // 292
  { IMAGE_GATHER4_C_B_V2_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x4 }, // 293
  { IMAGE_GATHER4_C_B_V2_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x2, 0x8 }, // 294
  { IMAGE_GATHER4_C_B_V4_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x3 }, // 295
  { IMAGE_GATHER4_C_B_V4_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x4 }, // 296
  { IMAGE_GATHER4_C_B_V4_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x4, 0x8 }, // 297
  { IMAGE_GATHER4_C_B_V8_V3, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x8, 0x3 }, // 298
  { IMAGE_GATHER4_C_B_V8_V4, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x8, 0x4 }, // 299
  { IMAGE_GATHER4_C_B_V8_V8, IMAGE_GATHER4_C_B, MIMGEncGfx6, 0x8, 0x8 }, // 300
  { IMAGE_GATHER4_C_B_CL_V2_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 301
  { IMAGE_GATHER4_C_B_CL_V2_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 302
  { IMAGE_GATHER4_C_B_CL_V2_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 303
  { IMAGE_GATHER4_C_B_CL_V4_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 304
  { IMAGE_GATHER4_C_B_CL_V4_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 305
  { IMAGE_GATHER4_C_B_CL_V4_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 306
  { IMAGE_GATHER4_C_B_CL_V8_V3, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x8, 0x3 }, // 307
  { IMAGE_GATHER4_C_B_CL_V8_V4, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x8, 0x4 }, // 308
  { IMAGE_GATHER4_C_B_CL_V8_V8, IMAGE_GATHER4_C_B_CL, MIMGEncGfx6, 0x8, 0x8 }, // 309
  { IMAGE_GATHER4_C_B_CL_O_V2_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 310
  { IMAGE_GATHER4_C_B_CL_O_V2_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 311
  { IMAGE_GATHER4_C_B_CL_O_V4_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 312
  { IMAGE_GATHER4_C_B_CL_O_V4_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 313
  { IMAGE_GATHER4_C_B_CL_O_V8_V4, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 314
  { IMAGE_GATHER4_C_B_CL_O_V8_V8, IMAGE_GATHER4_C_B_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 315
  { IMAGE_GATHER4_C_B_O_V2_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 316
  { IMAGE_GATHER4_C_B_O_V2_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 317
  { IMAGE_GATHER4_C_B_O_V4_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 318
  { IMAGE_GATHER4_C_B_O_V4_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 319
  { IMAGE_GATHER4_C_B_O_V8_V4, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x8, 0x4 }, // 320
  { IMAGE_GATHER4_C_B_O_V8_V8, IMAGE_GATHER4_C_B_O, MIMGEncGfx6, 0x8, 0x8 }, // 321
  { IMAGE_GATHER4_C_CL_V2_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x2 }, // 322
  { IMAGE_GATHER4_C_CL_V2_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x3 }, // 323
  { IMAGE_GATHER4_C_CL_V2_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x4 }, // 324
  { IMAGE_GATHER4_C_CL_V2_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x2, 0x8 }, // 325
  { IMAGE_GATHER4_C_CL_V4_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x2 }, // 326
  { IMAGE_GATHER4_C_CL_V4_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x3 }, // 327
  { IMAGE_GATHER4_C_CL_V4_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x4 }, // 328
  { IMAGE_GATHER4_C_CL_V4_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x4, 0x8 }, // 329
  { IMAGE_GATHER4_C_CL_V8_V2, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x8, 0x2 }, // 330
  { IMAGE_GATHER4_C_CL_V8_V3, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x8, 0x3 }, // 331
  { IMAGE_GATHER4_C_CL_V8_V4, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x8, 0x4 }, // 332
  { IMAGE_GATHER4_C_CL_V8_V8, IMAGE_GATHER4_C_CL, MIMGEncGfx6, 0x8, 0x8 }, // 333
  { IMAGE_GATHER4_C_CL_O_V2_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 334
  { IMAGE_GATHER4_C_CL_O_V2_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 335
  { IMAGE_GATHER4_C_CL_O_V2_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 336
  { IMAGE_GATHER4_C_CL_O_V4_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 337
  { IMAGE_GATHER4_C_CL_O_V4_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 338
  { IMAGE_GATHER4_C_CL_O_V4_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 339
  { IMAGE_GATHER4_C_CL_O_V8_V3, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 340
  { IMAGE_GATHER4_C_CL_O_V8_V4, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 341
  { IMAGE_GATHER4_C_CL_O_V8_V8, IMAGE_GATHER4_C_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 342
  { IMAGE_GATHER4_C_L_V2_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x2 }, // 343
  { IMAGE_GATHER4_C_L_V2_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x3 }, // 344
  { IMAGE_GATHER4_C_L_V2_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x4 }, // 345
  { IMAGE_GATHER4_C_L_V2_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x2, 0x8 }, // 346
  { IMAGE_GATHER4_C_L_V4_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x2 }, // 347
  { IMAGE_GATHER4_C_L_V4_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x3 }, // 348
  { IMAGE_GATHER4_C_L_V4_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x4 }, // 349
  { IMAGE_GATHER4_C_L_V4_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x4, 0x8 }, // 350
  { IMAGE_GATHER4_C_L_V8_V2, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x8, 0x2 }, // 351
  { IMAGE_GATHER4_C_L_V8_V3, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x8, 0x3 }, // 352
  { IMAGE_GATHER4_C_L_V8_V4, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x8, 0x4 }, // 353
  { IMAGE_GATHER4_C_L_V8_V8, IMAGE_GATHER4_C_L, MIMGEncGfx6, 0x8, 0x8 }, // 354
  { IMAGE_GATHER4_C_LZ_V2_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 355
  { IMAGE_GATHER4_C_LZ_V2_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 356
  { IMAGE_GATHER4_C_LZ_V2_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 357
  { IMAGE_GATHER4_C_LZ_V4_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 358
  { IMAGE_GATHER4_C_LZ_V4_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 359
  { IMAGE_GATHER4_C_LZ_V4_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 360
  { IMAGE_GATHER4_C_LZ_V8_V2, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x8, 0x2 }, // 361
  { IMAGE_GATHER4_C_LZ_V8_V3, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x8, 0x3 }, // 362
  { IMAGE_GATHER4_C_LZ_V8_V4, IMAGE_GATHER4_C_LZ, MIMGEncGfx6, 0x8, 0x4 }, // 363
  { IMAGE_GATHER4_C_LZ_O_V2_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 364
  { IMAGE_GATHER4_C_LZ_O_V2_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 365
  { IMAGE_GATHER4_C_LZ_O_V2_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x2, 0x8 }, // 366
  { IMAGE_GATHER4_C_LZ_O_V4_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 367
  { IMAGE_GATHER4_C_LZ_O_V4_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 368
  { IMAGE_GATHER4_C_LZ_O_V4_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x4, 0x8 }, // 369
  { IMAGE_GATHER4_C_LZ_O_V8_V3, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x8, 0x3 }, // 370
  { IMAGE_GATHER4_C_LZ_O_V8_V4, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x8, 0x4 }, // 371
  { IMAGE_GATHER4_C_LZ_O_V8_V8, IMAGE_GATHER4_C_LZ_O, MIMGEncGfx6, 0x8, 0x8 }, // 372
  { IMAGE_GATHER4_C_L_O_V2_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 373
  { IMAGE_GATHER4_C_L_O_V2_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 374
  { IMAGE_GATHER4_C_L_O_V2_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 375
  { IMAGE_GATHER4_C_L_O_V4_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 376
  { IMAGE_GATHER4_C_L_O_V4_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 377
  { IMAGE_GATHER4_C_L_O_V4_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 378
  { IMAGE_GATHER4_C_L_O_V8_V3, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x8, 0x3 }, // 379
  { IMAGE_GATHER4_C_L_O_V8_V4, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x8, 0x4 }, // 380
  { IMAGE_GATHER4_C_L_O_V8_V8, IMAGE_GATHER4_C_L_O, MIMGEncGfx6, 0x8, 0x8 }, // 381
  { IMAGE_GATHER4_C_O_V2_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x3 }, // 382
  { IMAGE_GATHER4_C_O_V2_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x4 }, // 383
  { IMAGE_GATHER4_C_O_V2_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x2, 0x8 }, // 384
  { IMAGE_GATHER4_C_O_V4_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x3 }, // 385
  { IMAGE_GATHER4_C_O_V4_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x4 }, // 386
  { IMAGE_GATHER4_C_O_V4_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x4, 0x8 }, // 387
  { IMAGE_GATHER4_C_O_V8_V3, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x8, 0x3 }, // 388
  { IMAGE_GATHER4_C_O_V8_V4, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x8, 0x4 }, // 389
  { IMAGE_GATHER4_C_O_V8_V8, IMAGE_GATHER4_C_O, MIMGEncGfx6, 0x8, 0x8 }, // 390
  { IMAGE_GATHER4_L_V2_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x1 }, // 391
  { IMAGE_GATHER4_L_V2_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x2 }, // 392
  { IMAGE_GATHER4_L_V2_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x3 }, // 393
  { IMAGE_GATHER4_L_V2_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x2, 0x4 }, // 394
  { IMAGE_GATHER4_L_V4_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x1 }, // 395
  { IMAGE_GATHER4_L_V4_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x2 }, // 396
  { IMAGE_GATHER4_L_V4_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x3 }, // 397
  { IMAGE_GATHER4_L_V4_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x4, 0x4 }, // 398
  { IMAGE_GATHER4_L_V8_V1, IMAGE_GATHER4_L, MIMGEncGfx6, 0x8, 0x1 }, // 399
  { IMAGE_GATHER4_L_V8_V2, IMAGE_GATHER4_L, MIMGEncGfx6, 0x8, 0x2 }, // 400
  { IMAGE_GATHER4_L_V8_V3, IMAGE_GATHER4_L, MIMGEncGfx6, 0x8, 0x3 }, // 401
  { IMAGE_GATHER4_L_V8_V4, IMAGE_GATHER4_L, MIMGEncGfx6, 0x8, 0x4 }, // 402
  { IMAGE_GATHER4_LZ_V2_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x1 }, // 403
  { IMAGE_GATHER4_LZ_V2_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 404
  { IMAGE_GATHER4_LZ_V2_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 405
  { IMAGE_GATHER4_LZ_V2_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 406
  { IMAGE_GATHER4_LZ_V4_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x1 }, // 407
  { IMAGE_GATHER4_LZ_V4_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 408
  { IMAGE_GATHER4_LZ_V4_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 409
  { IMAGE_GATHER4_LZ_V4_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 410
  { IMAGE_GATHER4_LZ_V8_V1, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x8, 0x1 }, // 411
  { IMAGE_GATHER4_LZ_V8_V2, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x8, 0x2 }, // 412
  { IMAGE_GATHER4_LZ_V8_V3, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x8, 0x3 }, // 413
  { IMAGE_GATHER4_LZ_V8_V4, IMAGE_GATHER4_LZ, MIMGEncGfx6, 0x8, 0x4 }, // 414
  { IMAGE_GATHER4_LZ_O_V2_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x2 }, // 415
  { IMAGE_GATHER4_LZ_O_V2_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 416
  { IMAGE_GATHER4_LZ_O_V2_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 417
  { IMAGE_GATHER4_LZ_O_V4_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x2 }, // 418
  { IMAGE_GATHER4_LZ_O_V4_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 419
  { IMAGE_GATHER4_LZ_O_V4_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 420
  { IMAGE_GATHER4_LZ_O_V8_V2, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x8, 0x2 }, // 421
  { IMAGE_GATHER4_LZ_O_V8_V3, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x8, 0x3 }, // 422
  { IMAGE_GATHER4_LZ_O_V8_V4, IMAGE_GATHER4_LZ_O, MIMGEncGfx6, 0x8, 0x4 }, // 423
  { IMAGE_GATHER4_L_O_V2_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x2 }, // 424
  { IMAGE_GATHER4_L_O_V2_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 425
  { IMAGE_GATHER4_L_O_V2_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 426
  { IMAGE_GATHER4_L_O_V2_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 427
  { IMAGE_GATHER4_L_O_V4_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x2 }, // 428
  { IMAGE_GATHER4_L_O_V4_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 429
  { IMAGE_GATHER4_L_O_V4_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 430
  { IMAGE_GATHER4_L_O_V4_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 431
  { IMAGE_GATHER4_L_O_V8_V2, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x8, 0x2 }, // 432
  { IMAGE_GATHER4_L_O_V8_V3, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x8, 0x3 }, // 433
  { IMAGE_GATHER4_L_O_V8_V4, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x8, 0x4 }, // 434
  { IMAGE_GATHER4_L_O_V8_V8, IMAGE_GATHER4_L_O, MIMGEncGfx6, 0x8, 0x8 }, // 435
  { IMAGE_GATHER4_O_V2_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x2 }, // 436
  { IMAGE_GATHER4_O_V2_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x3 }, // 437
  { IMAGE_GATHER4_O_V2_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x2, 0x4 }, // 438
  { IMAGE_GATHER4_O_V4_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x2 }, // 439
  { IMAGE_GATHER4_O_V4_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x3 }, // 440
  { IMAGE_GATHER4_O_V4_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x4, 0x4 }, // 441
  { IMAGE_GATHER4_O_V8_V2, IMAGE_GATHER4_O, MIMGEncGfx6, 0x8, 0x2 }, // 442
  { IMAGE_GATHER4_O_V8_V3, IMAGE_GATHER4_O, MIMGEncGfx6, 0x8, 0x3 }, // 443
  { IMAGE_GATHER4_O_V8_V4, IMAGE_GATHER4_O, MIMGEncGfx6, 0x8, 0x4 }, // 444
  { IMAGE_GET_LOD_V1_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x1 }, // 445
  { IMAGE_GET_LOD_V1_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x2 }, // 446
  { IMAGE_GET_LOD_V1_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x3 }, // 447
  { IMAGE_GET_LOD_V1_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x1, 0x4 }, // 448
  { IMAGE_GET_LOD_V2_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x1 }, // 449
  { IMAGE_GET_LOD_V2_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x2 }, // 450
  { IMAGE_GET_LOD_V2_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x3 }, // 451
  { IMAGE_GET_LOD_V2_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x2, 0x4 }, // 452
  { IMAGE_GET_LOD_V3_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x1 }, // 453
  { IMAGE_GET_LOD_V3_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x2 }, // 454
  { IMAGE_GET_LOD_V3_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x3 }, // 455
  { IMAGE_GET_LOD_V3_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x3, 0x4 }, // 456
  { IMAGE_GET_LOD_V4_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x1 }, // 457
  { IMAGE_GET_LOD_V4_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x2 }, // 458
  { IMAGE_GET_LOD_V4_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x3 }, // 459
  { IMAGE_GET_LOD_V4_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x4, 0x4 }, // 460
  { IMAGE_GET_LOD_V8_V1, IMAGE_GET_LOD, MIMGEncGfx6, 0x8, 0x1 }, // 461
  { IMAGE_GET_LOD_V8_V2, IMAGE_GET_LOD, MIMGEncGfx6, 0x8, 0x2 }, // 462
  { IMAGE_GET_LOD_V8_V3, IMAGE_GET_LOD, MIMGEncGfx6, 0x8, 0x3 }, // 463
  { IMAGE_GET_LOD_V8_V4, IMAGE_GET_LOD, MIMGEncGfx6, 0x8, 0x4 }, // 464
  { IMAGE_GET_RESINFO_V1_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x1 }, // 465
  { IMAGE_GET_RESINFO_V1_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x2 }, // 466
  { IMAGE_GET_RESINFO_V1_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x3 }, // 467
  { IMAGE_GET_RESINFO_V1_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x1, 0x4 }, // 468
  { IMAGE_GET_RESINFO_V2_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x1 }, // 469
  { IMAGE_GET_RESINFO_V2_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x2 }, // 470
  { IMAGE_GET_RESINFO_V2_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x3 }, // 471
  { IMAGE_GET_RESINFO_V2_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x2, 0x4 }, // 472
  { IMAGE_GET_RESINFO_V3_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x1 }, // 473
  { IMAGE_GET_RESINFO_V3_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x2 }, // 474
  { IMAGE_GET_RESINFO_V3_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x3 }, // 475
  { IMAGE_GET_RESINFO_V3_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x3, 0x4 }, // 476
  { IMAGE_GET_RESINFO_V4_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x1 }, // 477
  { IMAGE_GET_RESINFO_V4_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x2 }, // 478
  { IMAGE_GET_RESINFO_V4_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x3 }, // 479
  { IMAGE_GET_RESINFO_V4_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x4, 0x4 }, // 480
  { IMAGE_GET_RESINFO_V8_V1, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x8, 0x1 }, // 481
  { IMAGE_GET_RESINFO_V8_V2, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x8, 0x2 }, // 482
  { IMAGE_GET_RESINFO_V8_V3, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x8, 0x3 }, // 483
  { IMAGE_GET_RESINFO_V8_V4, IMAGE_GET_RESINFO, MIMGEncGfx6, 0x8, 0x4 }, // 484
  { IMAGE_LOAD_V1_V1, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x1 }, // 485
  { IMAGE_LOAD_V1_V2, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x2 }, // 486
  { IMAGE_LOAD_V1_V3, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x3 }, // 487
  { IMAGE_LOAD_V1_V4, IMAGE_LOAD, MIMGEncGfx6, 0x1, 0x4 }, // 488
  { IMAGE_LOAD_V2_V1, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x1 }, // 489
  { IMAGE_LOAD_V2_V2, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x2 }, // 490
  { IMAGE_LOAD_V2_V3, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x3 }, // 491
  { IMAGE_LOAD_V2_V4, IMAGE_LOAD, MIMGEncGfx6, 0x2, 0x4 }, // 492
  { IMAGE_LOAD_V3_V1, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x1 }, // 493
  { IMAGE_LOAD_V3_V2, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x2 }, // 494
  { IMAGE_LOAD_V3_V3, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x3 }, // 495
  { IMAGE_LOAD_V3_V4, IMAGE_LOAD, MIMGEncGfx6, 0x3, 0x4 }, // 496
  { IMAGE_LOAD_V4_V1, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x1 }, // 497
  { IMAGE_LOAD_V4_V2, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x2 }, // 498
  { IMAGE_LOAD_V4_V3, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x3 }, // 499
  { IMAGE_LOAD_V4_V4, IMAGE_LOAD, MIMGEncGfx6, 0x4, 0x4 }, // 500
  { IMAGE_LOAD_V8_V1, IMAGE_LOAD, MIMGEncGfx6, 0x8, 0x1 }, // 501
  { IMAGE_LOAD_V8_V2, IMAGE_LOAD, MIMGEncGfx6, 0x8, 0x2 }, // 502
  { IMAGE_LOAD_V8_V3, IMAGE_LOAD, MIMGEncGfx6, 0x8, 0x3 }, // 503
  { IMAGE_LOAD_V8_V4, IMAGE_LOAD, MIMGEncGfx6, 0x8, 0x4 }, // 504
  { IMAGE_LOAD_MIP_V1_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x1 }, // 505
  { IMAGE_LOAD_MIP_V1_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x2 }, // 506
  { IMAGE_LOAD_MIP_V1_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x3 }, // 507
  { IMAGE_LOAD_MIP_V1_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x1, 0x4 }, // 508
  { IMAGE_LOAD_MIP_V2_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x1 }, // 509
  { IMAGE_LOAD_MIP_V2_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x2 }, // 510
  { IMAGE_LOAD_MIP_V2_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x3 }, // 511
  { IMAGE_LOAD_MIP_V2_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x2, 0x4 }, // 512
  { IMAGE_LOAD_MIP_V3_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x1 }, // 513
  { IMAGE_LOAD_MIP_V3_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x2 }, // 514
  { IMAGE_LOAD_MIP_V3_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x3 }, // 515
  { IMAGE_LOAD_MIP_V3_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x3, 0x4 }, // 516
  { IMAGE_LOAD_MIP_V4_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x1 }, // 517
  { IMAGE_LOAD_MIP_V4_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x2 }, // 518
  { IMAGE_LOAD_MIP_V4_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x3 }, // 519
  { IMAGE_LOAD_MIP_V4_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x4, 0x4 }, // 520
  { IMAGE_LOAD_MIP_V8_V1, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x8, 0x1 }, // 521
  { IMAGE_LOAD_MIP_V8_V2, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x8, 0x2 }, // 522
  { IMAGE_LOAD_MIP_V8_V3, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x8, 0x3 }, // 523
  { IMAGE_LOAD_MIP_V8_V4, IMAGE_LOAD_MIP, MIMGEncGfx6, 0x8, 0x4 }, // 524
  { IMAGE_LOAD_MIP_PCK_V1_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 525
  { IMAGE_LOAD_MIP_PCK_V1_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 526
  { IMAGE_LOAD_MIP_PCK_V1_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 527
  { IMAGE_LOAD_MIP_PCK_V1_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 528
  { IMAGE_LOAD_MIP_PCK_V2_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 529
  { IMAGE_LOAD_MIP_PCK_V2_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 530
  { IMAGE_LOAD_MIP_PCK_V2_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 531
  { IMAGE_LOAD_MIP_PCK_V2_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 532
  { IMAGE_LOAD_MIP_PCK_V3_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 533
  { IMAGE_LOAD_MIP_PCK_V3_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 534
  { IMAGE_LOAD_MIP_PCK_V3_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 535
  { IMAGE_LOAD_MIP_PCK_V3_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 536
  { IMAGE_LOAD_MIP_PCK_V4_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 537
  { IMAGE_LOAD_MIP_PCK_V4_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 538
  { IMAGE_LOAD_MIP_PCK_V4_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 539
  { IMAGE_LOAD_MIP_PCK_V4_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 540
  { IMAGE_LOAD_MIP_PCK_V8_V1, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x8, 0x1 }, // 541
  { IMAGE_LOAD_MIP_PCK_V8_V2, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x8, 0x2 }, // 542
  { IMAGE_LOAD_MIP_PCK_V8_V3, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x8, 0x3 }, // 543
  { IMAGE_LOAD_MIP_PCK_V8_V4, IMAGE_LOAD_MIP_PCK, MIMGEncGfx6, 0x8, 0x4 }, // 544
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x1 }, // 545
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x2 }, // 546
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x3 }, // 547
  { IMAGE_LOAD_MIP_PCK_SGN_V1_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x1, 0x4 }, // 548
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x1 }, // 549
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x2 }, // 550
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x3 }, // 551
  { IMAGE_LOAD_MIP_PCK_SGN_V2_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x2, 0x4 }, // 552
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x1 }, // 553
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x2 }, // 554
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x3 }, // 555
  { IMAGE_LOAD_MIP_PCK_SGN_V3_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x3, 0x4 }, // 556
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x1 }, // 557
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x2 }, // 558
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x3 }, // 559
  { IMAGE_LOAD_MIP_PCK_SGN_V4_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x4, 0x4 }, // 560
  { IMAGE_LOAD_MIP_PCK_SGN_V8_V1, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x8, 0x1 }, // 561
  { IMAGE_LOAD_MIP_PCK_SGN_V8_V2, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x8, 0x2 }, // 562
  { IMAGE_LOAD_MIP_PCK_SGN_V8_V3, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x8, 0x3 }, // 563
  { IMAGE_LOAD_MIP_PCK_SGN_V8_V4, IMAGE_LOAD_MIP_PCK_SGN, MIMGEncGfx6, 0x8, 0x4 }, // 564
  { IMAGE_LOAD_PCK_V1_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 565
  { IMAGE_LOAD_PCK_V1_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 566
  { IMAGE_LOAD_PCK_V1_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 567
  { IMAGE_LOAD_PCK_V1_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 568
  { IMAGE_LOAD_PCK_V2_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 569
  { IMAGE_LOAD_PCK_V2_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 570
  { IMAGE_LOAD_PCK_V2_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 571
  { IMAGE_LOAD_PCK_V2_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 572
  { IMAGE_LOAD_PCK_V3_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 573
  { IMAGE_LOAD_PCK_V3_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 574
  { IMAGE_LOAD_PCK_V3_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 575
  { IMAGE_LOAD_PCK_V3_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 576
  { IMAGE_LOAD_PCK_V4_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 577
  { IMAGE_LOAD_PCK_V4_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 578
  { IMAGE_LOAD_PCK_V4_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 579
  { IMAGE_LOAD_PCK_V4_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 580
  { IMAGE_LOAD_PCK_V8_V1, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x8, 0x1 }, // 581
  { IMAGE_LOAD_PCK_V8_V2, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x8, 0x2 }, // 582
  { IMAGE_LOAD_PCK_V8_V3, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x8, 0x3 }, // 583
  { IMAGE_LOAD_PCK_V8_V4, IMAGE_LOAD_PCK, MIMGEncGfx6, 0x8, 0x4 }, // 584
  { IMAGE_LOAD_PCK_SGN_V1_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x1 }, // 585
  { IMAGE_LOAD_PCK_SGN_V1_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x2 }, // 586
  { IMAGE_LOAD_PCK_SGN_V1_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x3 }, // 587
  { IMAGE_LOAD_PCK_SGN_V1_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x1, 0x4 }, // 588
  { IMAGE_LOAD_PCK_SGN_V2_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x1 }, // 589
  { IMAGE_LOAD_PCK_SGN_V2_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x2 }, // 590
  { IMAGE_LOAD_PCK_SGN_V2_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x3 }, // 591
  { IMAGE_LOAD_PCK_SGN_V2_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x2, 0x4 }, // 592
  { IMAGE_LOAD_PCK_SGN_V3_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x1 }, // 593
  { IMAGE_LOAD_PCK_SGN_V3_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x2 }, // 594
  { IMAGE_LOAD_PCK_SGN_V3_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x3 }, // 595
  { IMAGE_LOAD_PCK_SGN_V3_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x3, 0x4 }, // 596
  { IMAGE_LOAD_PCK_SGN_V4_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x1 }, // 597
  { IMAGE_LOAD_PCK_SGN_V4_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x2 }, // 598
  { IMAGE_LOAD_PCK_SGN_V4_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x3 }, // 599
  { IMAGE_LOAD_PCK_SGN_V4_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x4, 0x4 }, // 600
  { IMAGE_LOAD_PCK_SGN_V8_V1, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x8, 0x1 }, // 601
  { IMAGE_LOAD_PCK_SGN_V8_V2, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x8, 0x2 }, // 602
  { IMAGE_LOAD_PCK_SGN_V8_V3, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x8, 0x3 }, // 603
  { IMAGE_LOAD_PCK_SGN_V8_V4, IMAGE_LOAD_PCK_SGN, MIMGEncGfx6, 0x8, 0x4 }, // 604
  { IMAGE_SAMPLE_V1_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x1 }, // 605
  { IMAGE_SAMPLE_V1_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x2 }, // 606
  { IMAGE_SAMPLE_V1_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x3 }, // 607
  { IMAGE_SAMPLE_V1_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x1, 0x4 }, // 608
  { IMAGE_SAMPLE_V2_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x1 }, // 609
  { IMAGE_SAMPLE_V2_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x2 }, // 610
  { IMAGE_SAMPLE_V2_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x3 }, // 611
  { IMAGE_SAMPLE_V2_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x2, 0x4 }, // 612
  { IMAGE_SAMPLE_V3_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x1 }, // 613
  { IMAGE_SAMPLE_V3_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x2 }, // 614
  { IMAGE_SAMPLE_V3_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x3 }, // 615
  { IMAGE_SAMPLE_V3_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x3, 0x4 }, // 616
  { IMAGE_SAMPLE_V4_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x1 }, // 617
  { IMAGE_SAMPLE_V4_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x2 }, // 618
  { IMAGE_SAMPLE_V4_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x3 }, // 619
  { IMAGE_SAMPLE_V4_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x4, 0x4 }, // 620
  { IMAGE_SAMPLE_V8_V1, IMAGE_SAMPLE, MIMGEncGfx6, 0x8, 0x1 }, // 621
  { IMAGE_SAMPLE_V8_V2, IMAGE_SAMPLE, MIMGEncGfx6, 0x8, 0x2 }, // 622
  { IMAGE_SAMPLE_V8_V3, IMAGE_SAMPLE, MIMGEncGfx6, 0x8, 0x3 }, // 623
  { IMAGE_SAMPLE_V8_V4, IMAGE_SAMPLE, MIMGEncGfx6, 0x8, 0x4 }, // 624
  { IMAGE_SAMPLE_B_V1_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x2 }, // 625
  { IMAGE_SAMPLE_B_V1_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x3 }, // 626
  { IMAGE_SAMPLE_B_V1_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x1, 0x4 }, // 627
  { IMAGE_SAMPLE_B_V2_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x2 }, // 628
  { IMAGE_SAMPLE_B_V2_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x3 }, // 629
  { IMAGE_SAMPLE_B_V2_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x2, 0x4 }, // 630
  { IMAGE_SAMPLE_B_V3_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x2 }, // 631
  { IMAGE_SAMPLE_B_V3_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x3 }, // 632
  { IMAGE_SAMPLE_B_V3_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x3, 0x4 }, // 633
  { IMAGE_SAMPLE_B_V4_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x2 }, // 634
  { IMAGE_SAMPLE_B_V4_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x3 }, // 635
  { IMAGE_SAMPLE_B_V4_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x4, 0x4 }, // 636
  { IMAGE_SAMPLE_B_V8_V2, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x8, 0x2 }, // 637
  { IMAGE_SAMPLE_B_V8_V3, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x8, 0x3 }, // 638
  { IMAGE_SAMPLE_B_V8_V4, IMAGE_SAMPLE_B, MIMGEncGfx6, 0x8, 0x4 }, // 639
  { IMAGE_SAMPLE_B_CL_V1_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x2 }, // 640
  { IMAGE_SAMPLE_B_CL_V1_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x3 }, // 641
  { IMAGE_SAMPLE_B_CL_V1_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x4 }, // 642
  { IMAGE_SAMPLE_B_CL_V1_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x1, 0x8 }, // 643
  { IMAGE_SAMPLE_B_CL_V2_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x2 }, // 644
  { IMAGE_SAMPLE_B_CL_V2_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 645
  { IMAGE_SAMPLE_B_CL_V2_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 646
  { IMAGE_SAMPLE_B_CL_V2_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 647
  { IMAGE_SAMPLE_B_CL_V3_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x2 }, // 648
  { IMAGE_SAMPLE_B_CL_V3_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x3 }, // 649
  { IMAGE_SAMPLE_B_CL_V3_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x4 }, // 650
  { IMAGE_SAMPLE_B_CL_V3_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x3, 0x8 }, // 651
  { IMAGE_SAMPLE_B_CL_V4_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x2 }, // 652
  { IMAGE_SAMPLE_B_CL_V4_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 653
  { IMAGE_SAMPLE_B_CL_V4_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 654
  { IMAGE_SAMPLE_B_CL_V4_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 655
  { IMAGE_SAMPLE_B_CL_V8_V2, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x8, 0x2 }, // 656
  { IMAGE_SAMPLE_B_CL_V8_V3, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x8, 0x3 }, // 657
  { IMAGE_SAMPLE_B_CL_V8_V4, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x8, 0x4 }, // 658
  { IMAGE_SAMPLE_B_CL_V8_V8, IMAGE_SAMPLE_B_CL, MIMGEncGfx6, 0x8, 0x8 }, // 659
  { IMAGE_SAMPLE_B_CL_O_V1_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 660
  { IMAGE_SAMPLE_B_CL_O_V1_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 661
  { IMAGE_SAMPLE_B_CL_O_V1_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 662
  { IMAGE_SAMPLE_B_CL_O_V2_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 663
  { IMAGE_SAMPLE_B_CL_O_V2_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 664
  { IMAGE_SAMPLE_B_CL_O_V2_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 665
  { IMAGE_SAMPLE_B_CL_O_V3_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 666
  { IMAGE_SAMPLE_B_CL_O_V3_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 667
  { IMAGE_SAMPLE_B_CL_O_V3_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 668
  { IMAGE_SAMPLE_B_CL_O_V4_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 669
  { IMAGE_SAMPLE_B_CL_O_V4_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 670
  { IMAGE_SAMPLE_B_CL_O_V4_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 671
  { IMAGE_SAMPLE_B_CL_O_V8_V3, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 672
  { IMAGE_SAMPLE_B_CL_O_V8_V4, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 673
  { IMAGE_SAMPLE_B_CL_O_V8_V8, IMAGE_SAMPLE_B_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 674
  { IMAGE_SAMPLE_B_O_V1_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x3 }, // 675
  { IMAGE_SAMPLE_B_O_V1_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x4 }, // 676
  { IMAGE_SAMPLE_B_O_V1_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x1, 0x8 }, // 677
  { IMAGE_SAMPLE_B_O_V2_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x3 }, // 678
  { IMAGE_SAMPLE_B_O_V2_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 679
  { IMAGE_SAMPLE_B_O_V2_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 680
  { IMAGE_SAMPLE_B_O_V3_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x3 }, // 681
  { IMAGE_SAMPLE_B_O_V3_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x4 }, // 682
  { IMAGE_SAMPLE_B_O_V3_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x3, 0x8 }, // 683
  { IMAGE_SAMPLE_B_O_V4_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x3 }, // 684
  { IMAGE_SAMPLE_B_O_V4_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 685
  { IMAGE_SAMPLE_B_O_V4_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 686
  { IMAGE_SAMPLE_B_O_V8_V3, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x8, 0x3 }, // 687
  { IMAGE_SAMPLE_B_O_V8_V4, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x8, 0x4 }, // 688
  { IMAGE_SAMPLE_B_O_V8_V8, IMAGE_SAMPLE_B_O, MIMGEncGfx6, 0x8, 0x8 }, // 689
  { IMAGE_SAMPLE_C_V1_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x2 }, // 690
  { IMAGE_SAMPLE_C_V1_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x3 }, // 691
  { IMAGE_SAMPLE_C_V1_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x1, 0x4 }, // 692
  { IMAGE_SAMPLE_C_V2_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x2 }, // 693
  { IMAGE_SAMPLE_C_V2_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x3 }, // 694
  { IMAGE_SAMPLE_C_V2_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x2, 0x4 }, // 695
  { IMAGE_SAMPLE_C_V3_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x2 }, // 696
  { IMAGE_SAMPLE_C_V3_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x3 }, // 697
  { IMAGE_SAMPLE_C_V3_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x3, 0x4 }, // 698
  { IMAGE_SAMPLE_C_V4_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x2 }, // 699
  { IMAGE_SAMPLE_C_V4_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x3 }, // 700
  { IMAGE_SAMPLE_C_V4_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x4, 0x4 }, // 701
  { IMAGE_SAMPLE_C_V8_V2, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x8, 0x2 }, // 702
  { IMAGE_SAMPLE_C_V8_V3, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x8, 0x3 }, // 703
  { IMAGE_SAMPLE_C_V8_V4, IMAGE_SAMPLE_C, MIMGEncGfx6, 0x8, 0x4 }, // 704
  { IMAGE_SAMPLE_CD_V1_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x2 }, // 705
  { IMAGE_SAMPLE_CD_V1_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x3 }, // 706
  { IMAGE_SAMPLE_CD_V1_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x4 }, // 707
  { IMAGE_SAMPLE_CD_V1_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x8 }, // 708
  { IMAGE_SAMPLE_CD_V1_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x1, 0x10 }, // 709
  { IMAGE_SAMPLE_CD_V2_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x2 }, // 710
  { IMAGE_SAMPLE_CD_V2_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x3 }, // 711
  { IMAGE_SAMPLE_CD_V2_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x4 }, // 712
  { IMAGE_SAMPLE_CD_V2_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x8 }, // 713
  { IMAGE_SAMPLE_CD_V2_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x2, 0x10 }, // 714
  { IMAGE_SAMPLE_CD_V3_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x2 }, // 715
  { IMAGE_SAMPLE_CD_V3_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x3 }, // 716
  { IMAGE_SAMPLE_CD_V3_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x4 }, // 717
  { IMAGE_SAMPLE_CD_V3_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x8 }, // 718
  { IMAGE_SAMPLE_CD_V3_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x3, 0x10 }, // 719
  { IMAGE_SAMPLE_CD_V4_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x2 }, // 720
  { IMAGE_SAMPLE_CD_V4_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x3 }, // 721
  { IMAGE_SAMPLE_CD_V4_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x4 }, // 722
  { IMAGE_SAMPLE_CD_V4_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x8 }, // 723
  { IMAGE_SAMPLE_CD_V4_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x4, 0x10 }, // 724
  { IMAGE_SAMPLE_CD_V8_V2, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x8, 0x2 }, // 725
  { IMAGE_SAMPLE_CD_V8_V3, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x8, 0x3 }, // 726
  { IMAGE_SAMPLE_CD_V8_V4, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x8, 0x4 }, // 727
  { IMAGE_SAMPLE_CD_V8_V8, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x8, 0x8 }, // 728
  { IMAGE_SAMPLE_CD_V8_V16, IMAGE_SAMPLE_CD, MIMGEncGfx6, 0x8, 0x10 }, // 729
  { IMAGE_SAMPLE_CD_CL_V1_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x2 }, // 730
  { IMAGE_SAMPLE_CD_CL_V1_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x3 }, // 731
  { IMAGE_SAMPLE_CD_CL_V1_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x4 }, // 732
  { IMAGE_SAMPLE_CD_CL_V1_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x8 }, // 733
  { IMAGE_SAMPLE_CD_CL_V1_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x1, 0x10 }, // 734
  { IMAGE_SAMPLE_CD_CL_V2_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x2 }, // 735
  { IMAGE_SAMPLE_CD_CL_V2_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x3 }, // 736
  { IMAGE_SAMPLE_CD_CL_V2_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x4 }, // 737
  { IMAGE_SAMPLE_CD_CL_V2_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x8 }, // 738
  { IMAGE_SAMPLE_CD_CL_V2_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x2, 0x10 }, // 739
  { IMAGE_SAMPLE_CD_CL_V3_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x2 }, // 740
  { IMAGE_SAMPLE_CD_CL_V3_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x3 }, // 741
  { IMAGE_SAMPLE_CD_CL_V3_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x4 }, // 742
  { IMAGE_SAMPLE_CD_CL_V3_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x8 }, // 743
  { IMAGE_SAMPLE_CD_CL_V3_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x3, 0x10 }, // 744
  { IMAGE_SAMPLE_CD_CL_V4_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x2 }, // 745
  { IMAGE_SAMPLE_CD_CL_V4_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x3 }, // 746
  { IMAGE_SAMPLE_CD_CL_V4_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x4 }, // 747
  { IMAGE_SAMPLE_CD_CL_V4_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x8 }, // 748
  { IMAGE_SAMPLE_CD_CL_V4_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x4, 0x10 }, // 749
  { IMAGE_SAMPLE_CD_CL_V8_V2, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x8, 0x2 }, // 750
  { IMAGE_SAMPLE_CD_CL_V8_V3, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x8, 0x3 }, // 751
  { IMAGE_SAMPLE_CD_CL_V8_V4, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x8, 0x4 }, // 752
  { IMAGE_SAMPLE_CD_CL_V8_V8, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x8, 0x8 }, // 753
  { IMAGE_SAMPLE_CD_CL_V8_V16, IMAGE_SAMPLE_CD_CL, MIMGEncGfx6, 0x8, 0x10 }, // 754
  { IMAGE_SAMPLE_CD_CL_O_V1_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 755
  { IMAGE_SAMPLE_CD_CL_O_V1_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 756
  { IMAGE_SAMPLE_CD_CL_O_V1_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 757
  { IMAGE_SAMPLE_CD_CL_O_V1_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 758
  { IMAGE_SAMPLE_CD_CL_O_V2_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 759
  { IMAGE_SAMPLE_CD_CL_O_V2_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 760
  { IMAGE_SAMPLE_CD_CL_O_V2_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 761
  { IMAGE_SAMPLE_CD_CL_O_V2_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 762
  { IMAGE_SAMPLE_CD_CL_O_V3_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 763
  { IMAGE_SAMPLE_CD_CL_O_V3_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 764
  { IMAGE_SAMPLE_CD_CL_O_V3_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 765
  { IMAGE_SAMPLE_CD_CL_O_V3_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 766
  { IMAGE_SAMPLE_CD_CL_O_V4_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 767
  { IMAGE_SAMPLE_CD_CL_O_V4_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 768
  { IMAGE_SAMPLE_CD_CL_O_V4_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 769
  { IMAGE_SAMPLE_CD_CL_O_V4_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 770
  { IMAGE_SAMPLE_CD_CL_O_V8_V3, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 771
  { IMAGE_SAMPLE_CD_CL_O_V8_V4, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 772
  { IMAGE_SAMPLE_CD_CL_O_V8_V8, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 773
  { IMAGE_SAMPLE_CD_CL_O_V8_V16, IMAGE_SAMPLE_CD_CL_O, MIMGEncGfx6, 0x8, 0x10 }, // 774
  { IMAGE_SAMPLE_CD_O_V1_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x3 }, // 775
  { IMAGE_SAMPLE_CD_O_V1_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x4 }, // 776
  { IMAGE_SAMPLE_CD_O_V1_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x8 }, // 777
  { IMAGE_SAMPLE_CD_O_V1_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x1, 0x10 }, // 778
  { IMAGE_SAMPLE_CD_O_V2_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x3 }, // 779
  { IMAGE_SAMPLE_CD_O_V2_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x4 }, // 780
  { IMAGE_SAMPLE_CD_O_V2_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x8 }, // 781
  { IMAGE_SAMPLE_CD_O_V2_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x2, 0x10 }, // 782
  { IMAGE_SAMPLE_CD_O_V3_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x3 }, // 783
  { IMAGE_SAMPLE_CD_O_V3_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x4 }, // 784
  { IMAGE_SAMPLE_CD_O_V3_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x8 }, // 785
  { IMAGE_SAMPLE_CD_O_V3_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x3, 0x10 }, // 786
  { IMAGE_SAMPLE_CD_O_V4_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x3 }, // 787
  { IMAGE_SAMPLE_CD_O_V4_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x4 }, // 788
  { IMAGE_SAMPLE_CD_O_V4_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x8 }, // 789
  { IMAGE_SAMPLE_CD_O_V4_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x4, 0x10 }, // 790
  { IMAGE_SAMPLE_CD_O_V8_V3, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x8, 0x3 }, // 791
  { IMAGE_SAMPLE_CD_O_V8_V4, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x8, 0x4 }, // 792
  { IMAGE_SAMPLE_CD_O_V8_V8, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x8, 0x8 }, // 793
  { IMAGE_SAMPLE_CD_O_V8_V16, IMAGE_SAMPLE_CD_O, MIMGEncGfx6, 0x8, 0x10 }, // 794
  { IMAGE_SAMPLE_CL_V1_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x1 }, // 795
  { IMAGE_SAMPLE_CL_V1_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x2 }, // 796
  { IMAGE_SAMPLE_CL_V1_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x3 }, // 797
  { IMAGE_SAMPLE_CL_V1_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x1, 0x4 }, // 798
  { IMAGE_SAMPLE_CL_V2_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x1 }, // 799
  { IMAGE_SAMPLE_CL_V2_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x2 }, // 800
  { IMAGE_SAMPLE_CL_V2_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x3 }, // 801
  { IMAGE_SAMPLE_CL_V2_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x2, 0x4 }, // 802
  { IMAGE_SAMPLE_CL_V3_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x1 }, // 803
  { IMAGE_SAMPLE_CL_V3_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x2 }, // 804
  { IMAGE_SAMPLE_CL_V3_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x3 }, // 805
  { IMAGE_SAMPLE_CL_V3_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x3, 0x4 }, // 806
  { IMAGE_SAMPLE_CL_V4_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x1 }, // 807
  { IMAGE_SAMPLE_CL_V4_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x2 }, // 808
  { IMAGE_SAMPLE_CL_V4_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x3 }, // 809
  { IMAGE_SAMPLE_CL_V4_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x4, 0x4 }, // 810
  { IMAGE_SAMPLE_CL_V8_V1, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x8, 0x1 }, // 811
  { IMAGE_SAMPLE_CL_V8_V2, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x8, 0x2 }, // 812
  { IMAGE_SAMPLE_CL_V8_V3, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x8, 0x3 }, // 813
  { IMAGE_SAMPLE_CL_V8_V4, IMAGE_SAMPLE_CL, MIMGEncGfx6, 0x8, 0x4 }, // 814
  { IMAGE_SAMPLE_CL_O_V1_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x2 }, // 815
  { IMAGE_SAMPLE_CL_O_V1_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 816
  { IMAGE_SAMPLE_CL_O_V1_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 817
  { IMAGE_SAMPLE_CL_O_V1_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 818
  { IMAGE_SAMPLE_CL_O_V2_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x2 }, // 819
  { IMAGE_SAMPLE_CL_O_V2_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 820
  { IMAGE_SAMPLE_CL_O_V2_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 821
  { IMAGE_SAMPLE_CL_O_V2_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 822
  { IMAGE_SAMPLE_CL_O_V3_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x2 }, // 823
  { IMAGE_SAMPLE_CL_O_V3_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 824
  { IMAGE_SAMPLE_CL_O_V3_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 825
  { IMAGE_SAMPLE_CL_O_V3_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 826
  { IMAGE_SAMPLE_CL_O_V4_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x2 }, // 827
  { IMAGE_SAMPLE_CL_O_V4_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 828
  { IMAGE_SAMPLE_CL_O_V4_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 829
  { IMAGE_SAMPLE_CL_O_V4_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 830
  { IMAGE_SAMPLE_CL_O_V8_V2, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x8, 0x2 }, // 831
  { IMAGE_SAMPLE_CL_O_V8_V3, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 832
  { IMAGE_SAMPLE_CL_O_V8_V4, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 833
  { IMAGE_SAMPLE_CL_O_V8_V8, IMAGE_SAMPLE_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 834
  { IMAGE_SAMPLE_C_B_V1_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x3 }, // 835
  { IMAGE_SAMPLE_C_B_V1_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x4 }, // 836
  { IMAGE_SAMPLE_C_B_V1_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x1, 0x8 }, // 837
  { IMAGE_SAMPLE_C_B_V2_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x3 }, // 838
  { IMAGE_SAMPLE_C_B_V2_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x4 }, // 839
  { IMAGE_SAMPLE_C_B_V2_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x2, 0x8 }, // 840
  { IMAGE_SAMPLE_C_B_V3_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x3 }, // 841
  { IMAGE_SAMPLE_C_B_V3_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x4 }, // 842
  { IMAGE_SAMPLE_C_B_V3_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x3, 0x8 }, // 843
  { IMAGE_SAMPLE_C_B_V4_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x3 }, // 844
  { IMAGE_SAMPLE_C_B_V4_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x4 }, // 845
  { IMAGE_SAMPLE_C_B_V4_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x4, 0x8 }, // 846
  { IMAGE_SAMPLE_C_B_V8_V3, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x8, 0x3 }, // 847
  { IMAGE_SAMPLE_C_B_V8_V4, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x8, 0x4 }, // 848
  { IMAGE_SAMPLE_C_B_V8_V8, IMAGE_SAMPLE_C_B, MIMGEncGfx6, 0x8, 0x8 }, // 849
  { IMAGE_SAMPLE_C_B_CL_V1_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x3 }, // 850
  { IMAGE_SAMPLE_C_B_CL_V1_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x4 }, // 851
  { IMAGE_SAMPLE_C_B_CL_V1_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x1, 0x8 }, // 852
  { IMAGE_SAMPLE_C_B_CL_V2_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x3 }, // 853
  { IMAGE_SAMPLE_C_B_CL_V2_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x4 }, // 854
  { IMAGE_SAMPLE_C_B_CL_V2_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x2, 0x8 }, // 855
  { IMAGE_SAMPLE_C_B_CL_V3_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x3 }, // 856
  { IMAGE_SAMPLE_C_B_CL_V3_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x4 }, // 857
  { IMAGE_SAMPLE_C_B_CL_V3_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x3, 0x8 }, // 858
  { IMAGE_SAMPLE_C_B_CL_V4_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x3 }, // 859
  { IMAGE_SAMPLE_C_B_CL_V4_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x4 }, // 860
  { IMAGE_SAMPLE_C_B_CL_V4_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x4, 0x8 }, // 861
  { IMAGE_SAMPLE_C_B_CL_V8_V3, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x8, 0x3 }, // 862
  { IMAGE_SAMPLE_C_B_CL_V8_V4, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x8, 0x4 }, // 863
  { IMAGE_SAMPLE_C_B_CL_V8_V8, IMAGE_SAMPLE_C_B_CL, MIMGEncGfx6, 0x8, 0x8 }, // 864
  { IMAGE_SAMPLE_C_B_CL_O_V1_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 865
  { IMAGE_SAMPLE_C_B_CL_O_V1_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 866
  { IMAGE_SAMPLE_C_B_CL_O_V2_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 867
  { IMAGE_SAMPLE_C_B_CL_O_V2_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 868
  { IMAGE_SAMPLE_C_B_CL_O_V3_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 869
  { IMAGE_SAMPLE_C_B_CL_O_V3_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 870
  { IMAGE_SAMPLE_C_B_CL_O_V4_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 871
  { IMAGE_SAMPLE_C_B_CL_O_V4_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 872
  { IMAGE_SAMPLE_C_B_CL_O_V8_V4, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 873
  { IMAGE_SAMPLE_C_B_CL_O_V8_V8, IMAGE_SAMPLE_C_B_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 874
  { IMAGE_SAMPLE_C_B_O_V1_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x1, 0x4 }, // 875
  { IMAGE_SAMPLE_C_B_O_V1_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x1, 0x8 }, // 876
  { IMAGE_SAMPLE_C_B_O_V2_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x2, 0x4 }, // 877
  { IMAGE_SAMPLE_C_B_O_V2_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x2, 0x8 }, // 878
  { IMAGE_SAMPLE_C_B_O_V3_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x3, 0x4 }, // 879
  { IMAGE_SAMPLE_C_B_O_V3_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x3, 0x8 }, // 880
  { IMAGE_SAMPLE_C_B_O_V4_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x4, 0x4 }, // 881
  { IMAGE_SAMPLE_C_B_O_V4_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x4, 0x8 }, // 882
  { IMAGE_SAMPLE_C_B_O_V8_V4, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x8, 0x4 }, // 883
  { IMAGE_SAMPLE_C_B_O_V8_V8, IMAGE_SAMPLE_C_B_O, MIMGEncGfx6, 0x8, 0x8 }, // 884
  { IMAGE_SAMPLE_C_CD_V1_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x3 }, // 885
  { IMAGE_SAMPLE_C_CD_V1_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x4 }, // 886
  { IMAGE_SAMPLE_C_CD_V1_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x8 }, // 887
  { IMAGE_SAMPLE_C_CD_V1_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x1, 0x10 }, // 888
  { IMAGE_SAMPLE_C_CD_V2_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x3 }, // 889
  { IMAGE_SAMPLE_C_CD_V2_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x4 }, // 890
  { IMAGE_SAMPLE_C_CD_V2_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x8 }, // 891
  { IMAGE_SAMPLE_C_CD_V2_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x2, 0x10 }, // 892
  { IMAGE_SAMPLE_C_CD_V3_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x3 }, // 893
  { IMAGE_SAMPLE_C_CD_V3_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x4 }, // 894
  { IMAGE_SAMPLE_C_CD_V3_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x8 }, // 895
  { IMAGE_SAMPLE_C_CD_V3_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x3, 0x10 }, // 896
  { IMAGE_SAMPLE_C_CD_V4_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x3 }, // 897
  { IMAGE_SAMPLE_C_CD_V4_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x4 }, // 898
  { IMAGE_SAMPLE_C_CD_V4_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x8 }, // 899
  { IMAGE_SAMPLE_C_CD_V4_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x4, 0x10 }, // 900
  { IMAGE_SAMPLE_C_CD_V8_V3, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x8, 0x3 }, // 901
  { IMAGE_SAMPLE_C_CD_V8_V4, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x8, 0x4 }, // 902
  { IMAGE_SAMPLE_C_CD_V8_V8, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x8, 0x8 }, // 903
  { IMAGE_SAMPLE_C_CD_V8_V16, IMAGE_SAMPLE_C_CD, MIMGEncGfx6, 0x8, 0x10 }, // 904
  { IMAGE_SAMPLE_C_CD_CL_V1_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x3 }, // 905
  { IMAGE_SAMPLE_C_CD_CL_V1_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x4 }, // 906
  { IMAGE_SAMPLE_C_CD_CL_V1_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x8 }, // 907
  { IMAGE_SAMPLE_C_CD_CL_V1_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x1, 0x10 }, // 908
  { IMAGE_SAMPLE_C_CD_CL_V2_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x3 }, // 909
  { IMAGE_SAMPLE_C_CD_CL_V2_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x4 }, // 910
  { IMAGE_SAMPLE_C_CD_CL_V2_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x8 }, // 911
  { IMAGE_SAMPLE_C_CD_CL_V2_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x2, 0x10 }, // 912
  { IMAGE_SAMPLE_C_CD_CL_V3_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x3 }, // 913
  { IMAGE_SAMPLE_C_CD_CL_V3_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x4 }, // 914
  { IMAGE_SAMPLE_C_CD_CL_V3_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x8 }, // 915
  { IMAGE_SAMPLE_C_CD_CL_V3_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x3, 0x10 }, // 916
  { IMAGE_SAMPLE_C_CD_CL_V4_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x3 }, // 917
  { IMAGE_SAMPLE_C_CD_CL_V4_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x4 }, // 918
  { IMAGE_SAMPLE_C_CD_CL_V4_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x8 }, // 919
  { IMAGE_SAMPLE_C_CD_CL_V4_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x4, 0x10 }, // 920
  { IMAGE_SAMPLE_C_CD_CL_V8_V3, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x8, 0x3 }, // 921
  { IMAGE_SAMPLE_C_CD_CL_V8_V4, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x8, 0x4 }, // 922
  { IMAGE_SAMPLE_C_CD_CL_V8_V8, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x8, 0x8 }, // 923
  { IMAGE_SAMPLE_C_CD_CL_V8_V16, IMAGE_SAMPLE_C_CD_CL, MIMGEncGfx6, 0x8, 0x10 }, // 924
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 925
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 926
  { IMAGE_SAMPLE_C_CD_CL_O_V1_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 927
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 928
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 929
  { IMAGE_SAMPLE_C_CD_CL_O_V2_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 930
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 931
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 932
  { IMAGE_SAMPLE_C_CD_CL_O_V3_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 933
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 934
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 935
  { IMAGE_SAMPLE_C_CD_CL_O_V4_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 936
  { IMAGE_SAMPLE_C_CD_CL_O_V8_V4, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 937
  { IMAGE_SAMPLE_C_CD_CL_O_V8_V8, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 938
  { IMAGE_SAMPLE_C_CD_CL_O_V8_V16, IMAGE_SAMPLE_C_CD_CL_O, MIMGEncGfx6, 0x8, 0x10 }, // 939
  { IMAGE_SAMPLE_C_CD_O_V1_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x4 }, // 940
  { IMAGE_SAMPLE_C_CD_O_V1_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x8 }, // 941
  { IMAGE_SAMPLE_C_CD_O_V1_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x1, 0x10 }, // 942
  { IMAGE_SAMPLE_C_CD_O_V2_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x4 }, // 943
  { IMAGE_SAMPLE_C_CD_O_V2_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x8 }, // 944
  { IMAGE_SAMPLE_C_CD_O_V2_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x2, 0x10 }, // 945
  { IMAGE_SAMPLE_C_CD_O_V3_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x4 }, // 946
  { IMAGE_SAMPLE_C_CD_O_V3_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x8 }, // 947
  { IMAGE_SAMPLE_C_CD_O_V3_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x3, 0x10 }, // 948
  { IMAGE_SAMPLE_C_CD_O_V4_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x4 }, // 949
  { IMAGE_SAMPLE_C_CD_O_V4_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x8 }, // 950
  { IMAGE_SAMPLE_C_CD_O_V4_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x4, 0x10 }, // 951
  { IMAGE_SAMPLE_C_CD_O_V8_V4, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x8, 0x4 }, // 952
  { IMAGE_SAMPLE_C_CD_O_V8_V8, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x8, 0x8 }, // 953
  { IMAGE_SAMPLE_C_CD_O_V8_V16, IMAGE_SAMPLE_C_CD_O, MIMGEncGfx6, 0x8, 0x10 }, // 954
  { IMAGE_SAMPLE_C_CL_V1_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x2 }, // 955
  { IMAGE_SAMPLE_C_CL_V1_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x3 }, // 956
  { IMAGE_SAMPLE_C_CL_V1_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x4 }, // 957
  { IMAGE_SAMPLE_C_CL_V1_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x1, 0x8 }, // 958
  { IMAGE_SAMPLE_C_CL_V2_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x2 }, // 959
  { IMAGE_SAMPLE_C_CL_V2_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x3 }, // 960
  { IMAGE_SAMPLE_C_CL_V2_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x4 }, // 961
  { IMAGE_SAMPLE_C_CL_V2_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x2, 0x8 }, // 962
  { IMAGE_SAMPLE_C_CL_V3_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x2 }, // 963
  { IMAGE_SAMPLE_C_CL_V3_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x3 }, // 964
  { IMAGE_SAMPLE_C_CL_V3_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x4 }, // 965
  { IMAGE_SAMPLE_C_CL_V3_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x3, 0x8 }, // 966
  { IMAGE_SAMPLE_C_CL_V4_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x2 }, // 967
  { IMAGE_SAMPLE_C_CL_V4_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x3 }, // 968
  { IMAGE_SAMPLE_C_CL_V4_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x4 }, // 969
  { IMAGE_SAMPLE_C_CL_V4_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x4, 0x8 }, // 970
  { IMAGE_SAMPLE_C_CL_V8_V2, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x8, 0x2 }, // 971
  { IMAGE_SAMPLE_C_CL_V8_V3, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x8, 0x3 }, // 972
  { IMAGE_SAMPLE_C_CL_V8_V4, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x8, 0x4 }, // 973
  { IMAGE_SAMPLE_C_CL_V8_V8, IMAGE_SAMPLE_C_CL, MIMGEncGfx6, 0x8, 0x8 }, // 974
  { IMAGE_SAMPLE_C_CL_O_V1_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 975
  { IMAGE_SAMPLE_C_CL_O_V1_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 976
  { IMAGE_SAMPLE_C_CL_O_V1_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 977
  { IMAGE_SAMPLE_C_CL_O_V2_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 978
  { IMAGE_SAMPLE_C_CL_O_V2_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 979
  { IMAGE_SAMPLE_C_CL_O_V2_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 980
  { IMAGE_SAMPLE_C_CL_O_V3_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 981
  { IMAGE_SAMPLE_C_CL_O_V3_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 982
  { IMAGE_SAMPLE_C_CL_O_V3_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 983
  { IMAGE_SAMPLE_C_CL_O_V4_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 984
  { IMAGE_SAMPLE_C_CL_O_V4_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 985
  { IMAGE_SAMPLE_C_CL_O_V4_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 986
  { IMAGE_SAMPLE_C_CL_O_V8_V3, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 987
  { IMAGE_SAMPLE_C_CL_O_V8_V4, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 988
  { IMAGE_SAMPLE_C_CL_O_V8_V8, IMAGE_SAMPLE_C_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 989
  { IMAGE_SAMPLE_C_D_V1_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x3 }, // 990
  { IMAGE_SAMPLE_C_D_V1_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x4 }, // 991
  { IMAGE_SAMPLE_C_D_V1_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x8 }, // 992
  { IMAGE_SAMPLE_C_D_V1_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x1, 0x10 }, // 993
  { IMAGE_SAMPLE_C_D_V2_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x3 }, // 994
  { IMAGE_SAMPLE_C_D_V2_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x4 }, // 995
  { IMAGE_SAMPLE_C_D_V2_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x8 }, // 996
  { IMAGE_SAMPLE_C_D_V2_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x2, 0x10 }, // 997
  { IMAGE_SAMPLE_C_D_V3_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x3 }, // 998
  { IMAGE_SAMPLE_C_D_V3_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x4 }, // 999
  { IMAGE_SAMPLE_C_D_V3_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x8 }, // 1000
  { IMAGE_SAMPLE_C_D_V3_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x3, 0x10 }, // 1001
  { IMAGE_SAMPLE_C_D_V4_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x3 }, // 1002
  { IMAGE_SAMPLE_C_D_V4_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x4 }, // 1003
  { IMAGE_SAMPLE_C_D_V4_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x8 }, // 1004
  { IMAGE_SAMPLE_C_D_V4_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x4, 0x10 }, // 1005
  { IMAGE_SAMPLE_C_D_V8_V3, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x8, 0x3 }, // 1006
  { IMAGE_SAMPLE_C_D_V8_V4, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x8, 0x4 }, // 1007
  { IMAGE_SAMPLE_C_D_V8_V8, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x8, 0x8 }, // 1008
  { IMAGE_SAMPLE_C_D_V8_V16, IMAGE_SAMPLE_C_D, MIMGEncGfx6, 0x8, 0x10 }, // 1009
  { IMAGE_SAMPLE_C_D_CL_V1_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x3 }, // 1010
  { IMAGE_SAMPLE_C_D_CL_V1_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x4 }, // 1011
  { IMAGE_SAMPLE_C_D_CL_V1_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x8 }, // 1012
  { IMAGE_SAMPLE_C_D_CL_V1_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x1, 0x10 }, // 1013
  { IMAGE_SAMPLE_C_D_CL_V2_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x3 }, // 1014
  { IMAGE_SAMPLE_C_D_CL_V2_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x4 }, // 1015
  { IMAGE_SAMPLE_C_D_CL_V2_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x8 }, // 1016
  { IMAGE_SAMPLE_C_D_CL_V2_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x2, 0x10 }, // 1017
  { IMAGE_SAMPLE_C_D_CL_V3_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x3 }, // 1018
  { IMAGE_SAMPLE_C_D_CL_V3_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x4 }, // 1019
  { IMAGE_SAMPLE_C_D_CL_V3_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x8 }, // 1020
  { IMAGE_SAMPLE_C_D_CL_V3_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x3, 0x10 }, // 1021
  { IMAGE_SAMPLE_C_D_CL_V4_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x3 }, // 1022
  { IMAGE_SAMPLE_C_D_CL_V4_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x4 }, // 1023
  { IMAGE_SAMPLE_C_D_CL_V4_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x8 }, // 1024
  { IMAGE_SAMPLE_C_D_CL_V4_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x4, 0x10 }, // 1025
  { IMAGE_SAMPLE_C_D_CL_V8_V3, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x8, 0x3 }, // 1026
  { IMAGE_SAMPLE_C_D_CL_V8_V4, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x8, 0x4 }, // 1027
  { IMAGE_SAMPLE_C_D_CL_V8_V8, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x8, 0x8 }, // 1028
  { IMAGE_SAMPLE_C_D_CL_V8_V16, IMAGE_SAMPLE_C_D_CL, MIMGEncGfx6, 0x8, 0x10 }, // 1029
  { IMAGE_SAMPLE_C_D_CL_O_V1_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 1030
  { IMAGE_SAMPLE_C_D_CL_O_V1_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 1031
  { IMAGE_SAMPLE_C_D_CL_O_V1_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 1032
  { IMAGE_SAMPLE_C_D_CL_O_V2_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 1033
  { IMAGE_SAMPLE_C_D_CL_O_V2_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 1034
  { IMAGE_SAMPLE_C_D_CL_O_V2_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 1035
  { IMAGE_SAMPLE_C_D_CL_O_V3_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 1036
  { IMAGE_SAMPLE_C_D_CL_O_V3_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 1037
  { IMAGE_SAMPLE_C_D_CL_O_V3_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 1038
  { IMAGE_SAMPLE_C_D_CL_O_V4_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 1039
  { IMAGE_SAMPLE_C_D_CL_O_V4_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 1040
  { IMAGE_SAMPLE_C_D_CL_O_V4_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 1041
  { IMAGE_SAMPLE_C_D_CL_O_V8_V4, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 1042
  { IMAGE_SAMPLE_C_D_CL_O_V8_V8, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 1043
  { IMAGE_SAMPLE_C_D_CL_O_V8_V16, IMAGE_SAMPLE_C_D_CL_O, MIMGEncGfx6, 0x8, 0x10 }, // 1044
  { IMAGE_SAMPLE_C_D_O_V1_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x4 }, // 1045
  { IMAGE_SAMPLE_C_D_O_V1_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x8 }, // 1046
  { IMAGE_SAMPLE_C_D_O_V1_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x1, 0x10 }, // 1047
  { IMAGE_SAMPLE_C_D_O_V2_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x4 }, // 1048
  { IMAGE_SAMPLE_C_D_O_V2_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x8 }, // 1049
  { IMAGE_SAMPLE_C_D_O_V2_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x2, 0x10 }, // 1050
  { IMAGE_SAMPLE_C_D_O_V3_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x4 }, // 1051
  { IMAGE_SAMPLE_C_D_O_V3_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x8 }, // 1052
  { IMAGE_SAMPLE_C_D_O_V3_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x3, 0x10 }, // 1053
  { IMAGE_SAMPLE_C_D_O_V4_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x4 }, // 1054
  { IMAGE_SAMPLE_C_D_O_V4_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x8 }, // 1055
  { IMAGE_SAMPLE_C_D_O_V4_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x4, 0x10 }, // 1056
  { IMAGE_SAMPLE_C_D_O_V8_V4, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x8, 0x4 }, // 1057
  { IMAGE_SAMPLE_C_D_O_V8_V8, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x8, 0x8 }, // 1058
  { IMAGE_SAMPLE_C_D_O_V8_V16, IMAGE_SAMPLE_C_D_O, MIMGEncGfx6, 0x8, 0x10 }, // 1059
  { IMAGE_SAMPLE_C_L_V1_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x2 }, // 1060
  { IMAGE_SAMPLE_C_L_V1_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x3 }, // 1061
  { IMAGE_SAMPLE_C_L_V1_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x4 }, // 1062
  { IMAGE_SAMPLE_C_L_V1_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x1, 0x8 }, // 1063
  { IMAGE_SAMPLE_C_L_V2_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x2 }, // 1064
  { IMAGE_SAMPLE_C_L_V2_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x3 }, // 1065
  { IMAGE_SAMPLE_C_L_V2_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x4 }, // 1066
  { IMAGE_SAMPLE_C_L_V2_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x2, 0x8 }, // 1067
  { IMAGE_SAMPLE_C_L_V3_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x2 }, // 1068
  { IMAGE_SAMPLE_C_L_V3_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x3 }, // 1069
  { IMAGE_SAMPLE_C_L_V3_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x4 }, // 1070
  { IMAGE_SAMPLE_C_L_V3_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x3, 0x8 }, // 1071
  { IMAGE_SAMPLE_C_L_V4_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x2 }, // 1072
  { IMAGE_SAMPLE_C_L_V4_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x3 }, // 1073
  { IMAGE_SAMPLE_C_L_V4_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x4 }, // 1074
  { IMAGE_SAMPLE_C_L_V4_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x4, 0x8 }, // 1075
  { IMAGE_SAMPLE_C_L_V8_V2, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x8, 0x2 }, // 1076
  { IMAGE_SAMPLE_C_L_V8_V3, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x8, 0x3 }, // 1077
  { IMAGE_SAMPLE_C_L_V8_V4, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x8, 0x4 }, // 1078
  { IMAGE_SAMPLE_C_L_V8_V8, IMAGE_SAMPLE_C_L, MIMGEncGfx6, 0x8, 0x8 }, // 1079
  { IMAGE_SAMPLE_C_LZ_V1_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x2 }, // 1080
  { IMAGE_SAMPLE_C_LZ_V1_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x3 }, // 1081
  { IMAGE_SAMPLE_C_LZ_V1_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x1, 0x4 }, // 1082
  { IMAGE_SAMPLE_C_LZ_V2_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 1083
  { IMAGE_SAMPLE_C_LZ_V2_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 1084
  { IMAGE_SAMPLE_C_LZ_V2_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 1085
  { IMAGE_SAMPLE_C_LZ_V3_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x2 }, // 1086
  { IMAGE_SAMPLE_C_LZ_V3_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x3 }, // 1087
  { IMAGE_SAMPLE_C_LZ_V3_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x3, 0x4 }, // 1088
  { IMAGE_SAMPLE_C_LZ_V4_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 1089
  { IMAGE_SAMPLE_C_LZ_V4_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 1090
  { IMAGE_SAMPLE_C_LZ_V4_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 1091
  { IMAGE_SAMPLE_C_LZ_V8_V2, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x8, 0x2 }, // 1092
  { IMAGE_SAMPLE_C_LZ_V8_V3, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x8, 0x3 }, // 1093
  { IMAGE_SAMPLE_C_LZ_V8_V4, IMAGE_SAMPLE_C_LZ, MIMGEncGfx6, 0x8, 0x4 }, // 1094
  { IMAGE_SAMPLE_C_LZ_O_V1_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x3 }, // 1095
  { IMAGE_SAMPLE_C_LZ_O_V1_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x4 }, // 1096
  { IMAGE_SAMPLE_C_LZ_O_V1_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x1, 0x8 }, // 1097
  { IMAGE_SAMPLE_C_LZ_O_V2_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 1098
  { IMAGE_SAMPLE_C_LZ_O_V2_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 1099
  { IMAGE_SAMPLE_C_LZ_O_V2_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x2, 0x8 }, // 1100
  { IMAGE_SAMPLE_C_LZ_O_V3_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x3 }, // 1101
  { IMAGE_SAMPLE_C_LZ_O_V3_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x4 }, // 1102
  { IMAGE_SAMPLE_C_LZ_O_V3_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x3, 0x8 }, // 1103
  { IMAGE_SAMPLE_C_LZ_O_V4_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 1104
  { IMAGE_SAMPLE_C_LZ_O_V4_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 1105
  { IMAGE_SAMPLE_C_LZ_O_V4_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x4, 0x8 }, // 1106
  { IMAGE_SAMPLE_C_LZ_O_V8_V3, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x8, 0x3 }, // 1107
  { IMAGE_SAMPLE_C_LZ_O_V8_V4, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x8, 0x4 }, // 1108
  { IMAGE_SAMPLE_C_LZ_O_V8_V8, IMAGE_SAMPLE_C_LZ_O, MIMGEncGfx6, 0x8, 0x8 }, // 1109
  { IMAGE_SAMPLE_C_L_O_V1_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x3 }, // 1110
  { IMAGE_SAMPLE_C_L_O_V1_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x4 }, // 1111
  { IMAGE_SAMPLE_C_L_O_V1_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x1, 0x8 }, // 1112
  { IMAGE_SAMPLE_C_L_O_V2_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 1113
  { IMAGE_SAMPLE_C_L_O_V2_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 1114
  { IMAGE_SAMPLE_C_L_O_V2_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 1115
  { IMAGE_SAMPLE_C_L_O_V3_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x3 }, // 1116
  { IMAGE_SAMPLE_C_L_O_V3_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x4 }, // 1117
  { IMAGE_SAMPLE_C_L_O_V3_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x3, 0x8 }, // 1118
  { IMAGE_SAMPLE_C_L_O_V4_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 1119
  { IMAGE_SAMPLE_C_L_O_V4_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 1120
  { IMAGE_SAMPLE_C_L_O_V4_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 1121
  { IMAGE_SAMPLE_C_L_O_V8_V3, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x8, 0x3 }, // 1122
  { IMAGE_SAMPLE_C_L_O_V8_V4, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x8, 0x4 }, // 1123
  { IMAGE_SAMPLE_C_L_O_V8_V8, IMAGE_SAMPLE_C_L_O, MIMGEncGfx6, 0x8, 0x8 }, // 1124
  { IMAGE_SAMPLE_C_O_V1_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x3 }, // 1125
  { IMAGE_SAMPLE_C_O_V1_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x4 }, // 1126
  { IMAGE_SAMPLE_C_O_V1_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x1, 0x8 }, // 1127
  { IMAGE_SAMPLE_C_O_V2_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x3 }, // 1128
  { IMAGE_SAMPLE_C_O_V2_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x4 }, // 1129
  { IMAGE_SAMPLE_C_O_V2_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x2, 0x8 }, // 1130
  { IMAGE_SAMPLE_C_O_V3_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x3 }, // 1131
  { IMAGE_SAMPLE_C_O_V3_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x4 }, // 1132
  { IMAGE_SAMPLE_C_O_V3_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x3, 0x8 }, // 1133
  { IMAGE_SAMPLE_C_O_V4_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x3 }, // 1134
  { IMAGE_SAMPLE_C_O_V4_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x4 }, // 1135
  { IMAGE_SAMPLE_C_O_V4_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x4, 0x8 }, // 1136
  { IMAGE_SAMPLE_C_O_V8_V3, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x8, 0x3 }, // 1137
  { IMAGE_SAMPLE_C_O_V8_V4, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x8, 0x4 }, // 1138
  { IMAGE_SAMPLE_C_O_V8_V8, IMAGE_SAMPLE_C_O, MIMGEncGfx6, 0x8, 0x8 }, // 1139
  { IMAGE_SAMPLE_D_V1_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x2 }, // 1140
  { IMAGE_SAMPLE_D_V1_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x3 }, // 1141
  { IMAGE_SAMPLE_D_V1_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x4 }, // 1142
  { IMAGE_SAMPLE_D_V1_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x8 }, // 1143
  { IMAGE_SAMPLE_D_V1_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x1, 0x10 }, // 1144
  { IMAGE_SAMPLE_D_V2_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x2 }, // 1145
  { IMAGE_SAMPLE_D_V2_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x3 }, // 1146
  { IMAGE_SAMPLE_D_V2_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x4 }, // 1147
  { IMAGE_SAMPLE_D_V2_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x8 }, // 1148
  { IMAGE_SAMPLE_D_V2_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x2, 0x10 }, // 1149
  { IMAGE_SAMPLE_D_V3_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x2 }, // 1150
  { IMAGE_SAMPLE_D_V3_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x3 }, // 1151
  { IMAGE_SAMPLE_D_V3_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x4 }, // 1152
  { IMAGE_SAMPLE_D_V3_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x8 }, // 1153
  { IMAGE_SAMPLE_D_V3_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x3, 0x10 }, // 1154
  { IMAGE_SAMPLE_D_V4_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x2 }, // 1155
  { IMAGE_SAMPLE_D_V4_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x3 }, // 1156
  { IMAGE_SAMPLE_D_V4_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x4 }, // 1157
  { IMAGE_SAMPLE_D_V4_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x8 }, // 1158
  { IMAGE_SAMPLE_D_V4_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x4, 0x10 }, // 1159
  { IMAGE_SAMPLE_D_V8_V2, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x8, 0x2 }, // 1160
  { IMAGE_SAMPLE_D_V8_V3, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x8, 0x3 }, // 1161
  { IMAGE_SAMPLE_D_V8_V4, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x8, 0x4 }, // 1162
  { IMAGE_SAMPLE_D_V8_V8, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x8, 0x8 }, // 1163
  { IMAGE_SAMPLE_D_V8_V16, IMAGE_SAMPLE_D, MIMGEncGfx6, 0x8, 0x10 }, // 1164
  { IMAGE_SAMPLE_D_CL_V1_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x2 }, // 1165
  { IMAGE_SAMPLE_D_CL_V1_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x3 }, // 1166
  { IMAGE_SAMPLE_D_CL_V1_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x4 }, // 1167
  { IMAGE_SAMPLE_D_CL_V1_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x8 }, // 1168
  { IMAGE_SAMPLE_D_CL_V1_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x1, 0x10 }, // 1169
  { IMAGE_SAMPLE_D_CL_V2_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x2 }, // 1170
  { IMAGE_SAMPLE_D_CL_V2_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x3 }, // 1171
  { IMAGE_SAMPLE_D_CL_V2_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x4 }, // 1172
  { IMAGE_SAMPLE_D_CL_V2_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x8 }, // 1173
  { IMAGE_SAMPLE_D_CL_V2_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x2, 0x10 }, // 1174
  { IMAGE_SAMPLE_D_CL_V3_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x2 }, // 1175
  { IMAGE_SAMPLE_D_CL_V3_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x3 }, // 1176
  { IMAGE_SAMPLE_D_CL_V3_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x4 }, // 1177
  { IMAGE_SAMPLE_D_CL_V3_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x8 }, // 1178
  { IMAGE_SAMPLE_D_CL_V3_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x3, 0x10 }, // 1179
  { IMAGE_SAMPLE_D_CL_V4_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x2 }, // 1180
  { IMAGE_SAMPLE_D_CL_V4_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x3 }, // 1181
  { IMAGE_SAMPLE_D_CL_V4_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x4 }, // 1182
  { IMAGE_SAMPLE_D_CL_V4_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x8 }, // 1183
  { IMAGE_SAMPLE_D_CL_V4_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x4, 0x10 }, // 1184
  { IMAGE_SAMPLE_D_CL_V8_V2, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x8, 0x2 }, // 1185
  { IMAGE_SAMPLE_D_CL_V8_V3, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x8, 0x3 }, // 1186
  { IMAGE_SAMPLE_D_CL_V8_V4, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x8, 0x4 }, // 1187
  { IMAGE_SAMPLE_D_CL_V8_V8, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x8, 0x8 }, // 1188
  { IMAGE_SAMPLE_D_CL_V8_V16, IMAGE_SAMPLE_D_CL, MIMGEncGfx6, 0x8, 0x10 }, // 1189
  { IMAGE_SAMPLE_D_CL_O_V1_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x3 }, // 1190
  { IMAGE_SAMPLE_D_CL_O_V1_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x4 }, // 1191
  { IMAGE_SAMPLE_D_CL_O_V1_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x8 }, // 1192
  { IMAGE_SAMPLE_D_CL_O_V1_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x1, 0x10 }, // 1193
  { IMAGE_SAMPLE_D_CL_O_V2_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x3 }, // 1194
  { IMAGE_SAMPLE_D_CL_O_V2_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x4 }, // 1195
  { IMAGE_SAMPLE_D_CL_O_V2_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x8 }, // 1196
  { IMAGE_SAMPLE_D_CL_O_V2_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x2, 0x10 }, // 1197
  { IMAGE_SAMPLE_D_CL_O_V3_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x3 }, // 1198
  { IMAGE_SAMPLE_D_CL_O_V3_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x4 }, // 1199
  { IMAGE_SAMPLE_D_CL_O_V3_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x8 }, // 1200
  { IMAGE_SAMPLE_D_CL_O_V3_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x3, 0x10 }, // 1201
  { IMAGE_SAMPLE_D_CL_O_V4_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x3 }, // 1202
  { IMAGE_SAMPLE_D_CL_O_V4_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x4 }, // 1203
  { IMAGE_SAMPLE_D_CL_O_V4_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x8 }, // 1204
  { IMAGE_SAMPLE_D_CL_O_V4_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x4, 0x10 }, // 1205
  { IMAGE_SAMPLE_D_CL_O_V8_V3, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x8, 0x3 }, // 1206
  { IMAGE_SAMPLE_D_CL_O_V8_V4, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x8, 0x4 }, // 1207
  { IMAGE_SAMPLE_D_CL_O_V8_V8, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x8, 0x8 }, // 1208
  { IMAGE_SAMPLE_D_CL_O_V8_V16, IMAGE_SAMPLE_D_CL_O, MIMGEncGfx6, 0x8, 0x10 }, // 1209
  { IMAGE_SAMPLE_D_O_V1_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x3 }, // 1210
  { IMAGE_SAMPLE_D_O_V1_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x4 }, // 1211
  { IMAGE_SAMPLE_D_O_V1_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x8 }, // 1212
  { IMAGE_SAMPLE_D_O_V1_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x1, 0x10 }, // 1213
  { IMAGE_SAMPLE_D_O_V2_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x3 }, // 1214
  { IMAGE_SAMPLE_D_O_V2_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x4 }, // 1215
  { IMAGE_SAMPLE_D_O_V2_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x8 }, // 1216
  { IMAGE_SAMPLE_D_O_V2_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x2, 0x10 }, // 1217
  { IMAGE_SAMPLE_D_O_V3_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x3 }, // 1218
  { IMAGE_SAMPLE_D_O_V3_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x4 }, // 1219
  { IMAGE_SAMPLE_D_O_V3_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x8 }, // 1220
  { IMAGE_SAMPLE_D_O_V3_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x3, 0x10 }, // 1221
  { IMAGE_SAMPLE_D_O_V4_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x3 }, // 1222
  { IMAGE_SAMPLE_D_O_V4_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x4 }, // 1223
  { IMAGE_SAMPLE_D_O_V4_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x8 }, // 1224
  { IMAGE_SAMPLE_D_O_V4_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x4, 0x10 }, // 1225
  { IMAGE_SAMPLE_D_O_V8_V3, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x8, 0x3 }, // 1226
  { IMAGE_SAMPLE_D_O_V8_V4, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x8, 0x4 }, // 1227
  { IMAGE_SAMPLE_D_O_V8_V8, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x8, 0x8 }, // 1228
  { IMAGE_SAMPLE_D_O_V8_V16, IMAGE_SAMPLE_D_O, MIMGEncGfx6, 0x8, 0x10 }, // 1229
  { IMAGE_SAMPLE_L_V1_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x1 }, // 1230
  { IMAGE_SAMPLE_L_V1_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x2 }, // 1231
  { IMAGE_SAMPLE_L_V1_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x3 }, // 1232
  { IMAGE_SAMPLE_L_V1_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x1, 0x4 }, // 1233
  { IMAGE_SAMPLE_L_V2_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x1 }, // 1234
  { IMAGE_SAMPLE_L_V2_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x2 }, // 1235
  { IMAGE_SAMPLE_L_V2_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x3 }, // 1236
  { IMAGE_SAMPLE_L_V2_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x2, 0x4 }, // 1237
  { IMAGE_SAMPLE_L_V3_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x1 }, // 1238
  { IMAGE_SAMPLE_L_V3_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x2 }, // 1239
  { IMAGE_SAMPLE_L_V3_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x3 }, // 1240
  { IMAGE_SAMPLE_L_V3_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x3, 0x4 }, // 1241
  { IMAGE_SAMPLE_L_V4_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x1 }, // 1242
  { IMAGE_SAMPLE_L_V4_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x2 }, // 1243
  { IMAGE_SAMPLE_L_V4_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x3 }, // 1244
  { IMAGE_SAMPLE_L_V4_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x4, 0x4 }, // 1245
  { IMAGE_SAMPLE_L_V8_V1, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x8, 0x1 }, // 1246
  { IMAGE_SAMPLE_L_V8_V2, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x8, 0x2 }, // 1247
  { IMAGE_SAMPLE_L_V8_V3, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x8, 0x3 }, // 1248
  { IMAGE_SAMPLE_L_V8_V4, IMAGE_SAMPLE_L, MIMGEncGfx6, 0x8, 0x4 }, // 1249
  { IMAGE_SAMPLE_LZ_V1_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x1 }, // 1250
  { IMAGE_SAMPLE_LZ_V1_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x2 }, // 1251
  { IMAGE_SAMPLE_LZ_V1_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x3 }, // 1252
  { IMAGE_SAMPLE_LZ_V1_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x1, 0x4 }, // 1253
  { IMAGE_SAMPLE_LZ_V2_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x1 }, // 1254
  { IMAGE_SAMPLE_LZ_V2_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x2 }, // 1255
  { IMAGE_SAMPLE_LZ_V2_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x3 }, // 1256
  { IMAGE_SAMPLE_LZ_V2_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x2, 0x4 }, // 1257
  { IMAGE_SAMPLE_LZ_V3_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x1 }, // 1258
  { IMAGE_SAMPLE_LZ_V3_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x2 }, // 1259
  { IMAGE_SAMPLE_LZ_V3_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x3 }, // 1260
  { IMAGE_SAMPLE_LZ_V3_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x3, 0x4 }, // 1261
  { IMAGE_SAMPLE_LZ_V4_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x1 }, // 1262
  { IMAGE_SAMPLE_LZ_V4_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x2 }, // 1263
  { IMAGE_SAMPLE_LZ_V4_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x3 }, // 1264
  { IMAGE_SAMPLE_LZ_V4_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x4, 0x4 }, // 1265
  { IMAGE_SAMPLE_LZ_V8_V1, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x8, 0x1 }, // 1266
  { IMAGE_SAMPLE_LZ_V8_V2, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x8, 0x2 }, // 1267
  { IMAGE_SAMPLE_LZ_V8_V3, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x8, 0x3 }, // 1268
  { IMAGE_SAMPLE_LZ_V8_V4, IMAGE_SAMPLE_LZ, MIMGEncGfx6, 0x8, 0x4 }, // 1269
  { IMAGE_SAMPLE_LZ_O_V1_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x2 }, // 1270
  { IMAGE_SAMPLE_LZ_O_V1_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x3 }, // 1271
  { IMAGE_SAMPLE_LZ_O_V1_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x1, 0x4 }, // 1272
  { IMAGE_SAMPLE_LZ_O_V2_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x2 }, // 1273
  { IMAGE_SAMPLE_LZ_O_V2_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x3 }, // 1274
  { IMAGE_SAMPLE_LZ_O_V2_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x2, 0x4 }, // 1275
  { IMAGE_SAMPLE_LZ_O_V3_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x2 }, // 1276
  { IMAGE_SAMPLE_LZ_O_V3_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x3 }, // 1277
  { IMAGE_SAMPLE_LZ_O_V3_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x3, 0x4 }, // 1278
  { IMAGE_SAMPLE_LZ_O_V4_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x2 }, // 1279
  { IMAGE_SAMPLE_LZ_O_V4_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x3 }, // 1280
  { IMAGE_SAMPLE_LZ_O_V4_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x4, 0x4 }, // 1281
  { IMAGE_SAMPLE_LZ_O_V8_V2, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x8, 0x2 }, // 1282
  { IMAGE_SAMPLE_LZ_O_V8_V3, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x8, 0x3 }, // 1283
  { IMAGE_SAMPLE_LZ_O_V8_V4, IMAGE_SAMPLE_LZ_O, MIMGEncGfx6, 0x8, 0x4 }, // 1284
  { IMAGE_SAMPLE_L_O_V1_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x2 }, // 1285
  { IMAGE_SAMPLE_L_O_V1_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x3 }, // 1286
  { IMAGE_SAMPLE_L_O_V1_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x4 }, // 1287
  { IMAGE_SAMPLE_L_O_V1_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x1, 0x8 }, // 1288
  { IMAGE_SAMPLE_L_O_V2_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x2 }, // 1289
  { IMAGE_SAMPLE_L_O_V2_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x3 }, // 1290
  { IMAGE_SAMPLE_L_O_V2_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x4 }, // 1291
  { IMAGE_SAMPLE_L_O_V2_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x2, 0x8 }, // 1292
  { IMAGE_SAMPLE_L_O_V3_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x2 }, // 1293
  { IMAGE_SAMPLE_L_O_V3_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x3 }, // 1294
  { IMAGE_SAMPLE_L_O_V3_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x4 }, // 1295
  { IMAGE_SAMPLE_L_O_V3_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x3, 0x8 }, // 1296
  { IMAGE_SAMPLE_L_O_V4_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x2 }, // 1297
  { IMAGE_SAMPLE_L_O_V4_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x3 }, // 1298
  { IMAGE_SAMPLE_L_O_V4_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x4 }, // 1299
  { IMAGE_SAMPLE_L_O_V4_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x4, 0x8 }, // 1300
  { IMAGE_SAMPLE_L_O_V8_V2, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x8, 0x2 }, // 1301
  { IMAGE_SAMPLE_L_O_V8_V3, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x8, 0x3 }, // 1302
  { IMAGE_SAMPLE_L_O_V8_V4, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x8, 0x4 }, // 1303
  { IMAGE_SAMPLE_L_O_V8_V8, IMAGE_SAMPLE_L_O, MIMGEncGfx6, 0x8, 0x8 }, // 1304
  { IMAGE_SAMPLE_O_V1_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x2 }, // 1305
  { IMAGE_SAMPLE_O_V1_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x3 }, // 1306
  { IMAGE_SAMPLE_O_V1_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x1, 0x4 }, // 1307
  { IMAGE_SAMPLE_O_V2_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x2 }, // 1308
  { IMAGE_SAMPLE_O_V2_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x3 }, // 1309
  { IMAGE_SAMPLE_O_V2_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x2, 0x4 }, // 1310
  { IMAGE_SAMPLE_O_V3_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x2 }, // 1311
  { IMAGE_SAMPLE_O_V3_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x3 }, // 1312
  { IMAGE_SAMPLE_O_V3_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x3, 0x4 }, // 1313
  { IMAGE_SAMPLE_O_V4_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x2 }, // 1314
  { IMAGE_SAMPLE_O_V4_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x3 }, // 1315
  { IMAGE_SAMPLE_O_V4_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x4, 0x4 }, // 1316
  { IMAGE_SAMPLE_O_V8_V2, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x8, 0x2 }, // 1317
  { IMAGE_SAMPLE_O_V8_V3, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x8, 0x3 }, // 1318
  { IMAGE_SAMPLE_O_V8_V4, IMAGE_SAMPLE_O, MIMGEncGfx6, 0x8, 0x4 }, // 1319
  { IMAGE_STORE_V1_V1, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x1 }, // 1320
  { IMAGE_STORE_V1_V2, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x2 }, // 1321
  { IMAGE_STORE_V1_V3, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x3 }, // 1322
  { IMAGE_STORE_V1_V4, IMAGE_STORE, MIMGEncGfx6, 0x1, 0x4 }, // 1323
  { IMAGE_STORE_V2_V1, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x1 }, // 1324
  { IMAGE_STORE_V2_V2, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x2 }, // 1325
  { IMAGE_STORE_V2_V3, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x3 }, // 1326
  { IMAGE_STORE_V2_V4, IMAGE_STORE, MIMGEncGfx6, 0x2, 0x4 }, // 1327
  { IMAGE_STORE_V3_V1, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x1 }, // 1328
  { IMAGE_STORE_V3_V2, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x2 }, // 1329
  { IMAGE_STORE_V3_V3, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x3 }, // 1330
  { IMAGE_STORE_V3_V4, IMAGE_STORE, MIMGEncGfx6, 0x3, 0x4 }, // 1331
  { IMAGE_STORE_V4_V1, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x1 }, // 1332
  { IMAGE_STORE_V4_V2, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x2 }, // 1333
  { IMAGE_STORE_V4_V3, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x3 }, // 1334
  { IMAGE_STORE_V4_V4, IMAGE_STORE, MIMGEncGfx6, 0x4, 0x4 }, // 1335
  { IMAGE_STORE_MIP_V1_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x1 }, // 1336
  { IMAGE_STORE_MIP_V1_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x2 }, // 1337
  { IMAGE_STORE_MIP_V1_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x3 }, // 1338
  { IMAGE_STORE_MIP_V1_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x1, 0x4 }, // 1339
  { IMAGE_STORE_MIP_V2_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x1 }, // 1340
  { IMAGE_STORE_MIP_V2_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x2 }, // 1341
  { IMAGE_STORE_MIP_V2_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x3 }, // 1342
  { IMAGE_STORE_MIP_V2_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x2, 0x4 }, // 1343
  { IMAGE_STORE_MIP_V3_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x1 }, // 1344
  { IMAGE_STORE_MIP_V3_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x2 }, // 1345
  { IMAGE_STORE_MIP_V3_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x3 }, // 1346
  { IMAGE_STORE_MIP_V3_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x3, 0x4 }, // 1347
  { IMAGE_STORE_MIP_V4_V1, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x1 }, // 1348
  { IMAGE_STORE_MIP_V4_V2, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x2 }, // 1349
  { IMAGE_STORE_MIP_V4_V3, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x3 }, // 1350
  { IMAGE_STORE_MIP_V4_V4, IMAGE_STORE_MIP, MIMGEncGfx6, 0x4, 0x4 }, // 1351
  { IMAGE_STORE_MIP_PCK_V1_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 1352
  { IMAGE_STORE_MIP_PCK_V1_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 1353
  { IMAGE_STORE_MIP_PCK_V1_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 1354
  { IMAGE_STORE_MIP_PCK_V1_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 1355
  { IMAGE_STORE_MIP_PCK_V2_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 1356
  { IMAGE_STORE_MIP_PCK_V2_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 1357
  { IMAGE_STORE_MIP_PCK_V2_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 1358
  { IMAGE_STORE_MIP_PCK_V2_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 1359
  { IMAGE_STORE_MIP_PCK_V3_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 1360
  { IMAGE_STORE_MIP_PCK_V3_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 1361
  { IMAGE_STORE_MIP_PCK_V3_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 1362
  { IMAGE_STORE_MIP_PCK_V3_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 1363
  { IMAGE_STORE_MIP_PCK_V4_V1, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 1364
  { IMAGE_STORE_MIP_PCK_V4_V2, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 1365
  { IMAGE_STORE_MIP_PCK_V4_V3, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 1366
  { IMAGE_STORE_MIP_PCK_V4_V4, IMAGE_STORE_MIP_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 1367
  { IMAGE_STORE_PCK_V1_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x1 }, // 1368
  { IMAGE_STORE_PCK_V1_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x2 }, // 1369
  { IMAGE_STORE_PCK_V1_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x3 }, // 1370
  { IMAGE_STORE_PCK_V1_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x1, 0x4 }, // 1371
  { IMAGE_STORE_PCK_V2_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x1 }, // 1372
  { IMAGE_STORE_PCK_V2_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x2 }, // 1373
  { IMAGE_STORE_PCK_V2_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x3 }, // 1374
  { IMAGE_STORE_PCK_V2_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x2, 0x4 }, // 1375
  { IMAGE_STORE_PCK_V3_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x1 }, // 1376
  { IMAGE_STORE_PCK_V3_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x2 }, // 1377
  { IMAGE_STORE_PCK_V3_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x3 }, // 1378
  { IMAGE_STORE_PCK_V3_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x3, 0x4 }, // 1379
  { IMAGE_STORE_PCK_V4_V1, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x1 }, // 1380
  { IMAGE_STORE_PCK_V4_V2, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x2 }, // 1381
  { IMAGE_STORE_PCK_V4_V3, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x3 }, // 1382
  { IMAGE_STORE_PCK_V4_V4, IMAGE_STORE_PCK, MIMGEncGfx6, 0x4, 0x4 }, // 1383
 };

const MIMGInfo *getMIMGOpcodeHelper(unsigned BaseOpcode, unsigned MIMGEncoding, uint8_t VDataDwords, uint8_t VAddrDwords) {
  struct KeyType {
    unsigned BaseOpcode;
    unsigned MIMGEncoding;
    uint8_t VDataDwords;
    uint8_t VAddrDwords;
  };
  KeyType Key = { BaseOpcode, MIMGEncoding, VDataDwords, VAddrDwords };
  auto Table = makeArrayRef(MIMGInfoTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MIMGInfo &LHS, const KeyType &RHS) {
      if ((unsigned)LHS.BaseOpcode < (unsigned)RHS.BaseOpcode)
        return true;
      if ((unsigned)LHS.BaseOpcode > (unsigned)RHS.BaseOpcode)
        return false;
      if ((unsigned)LHS.MIMGEncoding < (unsigned)RHS.MIMGEncoding)
        return true;
      if ((unsigned)LHS.MIMGEncoding > (unsigned)RHS.MIMGEncoding)
        return false;
      if (LHS.VDataDwords < RHS.VDataDwords)
        return true;
      if (LHS.VDataDwords > RHS.VDataDwords)
        return false;
      if (LHS.VAddrDwords < RHS.VAddrDwords)
        return true;
      if (LHS.VAddrDwords > RHS.VAddrDwords)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BaseOpcode != Idx->BaseOpcode ||
      Key.MIMGEncoding != Idx->MIMGEncoding ||
      Key.VDataDwords != Idx->VDataDwords ||
      Key.VAddrDwords != Idx->VAddrDwords)
    return nullptr;
  return &*Idx;
}

const MIMGInfo *getMIMGInfo(unsigned Opcode) {
  struct IndexType {
    unsigned Opcode;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { IMAGE_ATOMIC_ADD_V1_V1_si, 0 },
    { IMAGE_ATOMIC_ADD_V1_V1_vi, 8 },
    { IMAGE_ATOMIC_ADD_V1_V2_si, 1 },
    { IMAGE_ATOMIC_ADD_V1_V2_vi, 9 },
    { IMAGE_ATOMIC_ADD_V1_V3_si, 2 },
    { IMAGE_ATOMIC_ADD_V1_V3_vi, 10 },
    { IMAGE_ATOMIC_ADD_V1_V4_si, 3 },
    { IMAGE_ATOMIC_ADD_V1_V4_vi, 11 },
    { IMAGE_ATOMIC_ADD_V2_V1_si, 4 },
    { IMAGE_ATOMIC_ADD_V2_V1_vi, 12 },
    { IMAGE_ATOMIC_ADD_V2_V2_si, 5 },
    { IMAGE_ATOMIC_ADD_V2_V2_vi, 13 },
    { IMAGE_ATOMIC_ADD_V2_V3_si, 6 },
    { IMAGE_ATOMIC_ADD_V2_V3_vi, 14 },
    { IMAGE_ATOMIC_ADD_V2_V4_si, 7 },
    { IMAGE_ATOMIC_ADD_V2_V4_vi, 15 },
    { IMAGE_ATOMIC_AND_V1_V1_si, 16 },
    { IMAGE_ATOMIC_AND_V1_V1_vi, 24 },
    { IMAGE_ATOMIC_AND_V1_V2_si, 17 },
    { IMAGE_ATOMIC_AND_V1_V2_vi, 25 },
    { IMAGE_ATOMIC_AND_V1_V3_si, 18 },
    { IMAGE_ATOMIC_AND_V1_V3_vi, 26 },
    { IMAGE_ATOMIC_AND_V1_V4_si, 19 },
    { IMAGE_ATOMIC_AND_V1_V4_vi, 27 },
    { IMAGE_ATOMIC_AND_V2_V1_si, 20 },
    { IMAGE_ATOMIC_AND_V2_V1_vi, 28 },
    { IMAGE_ATOMIC_AND_V2_V2_si, 21 },
    { IMAGE_ATOMIC_AND_V2_V2_vi, 29 },
    { IMAGE_ATOMIC_AND_V2_V3_si, 22 },
    { IMAGE_ATOMIC_AND_V2_V3_vi, 30 },
    { IMAGE_ATOMIC_AND_V2_V4_si, 23 },
    { IMAGE_ATOMIC_AND_V2_V4_vi, 31 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V1_si, 32 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V1_vi, 40 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_si, 33 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V2_vi, 41 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_si, 34 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V3_vi, 42 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_si, 35 },
    { IMAGE_ATOMIC_CMPSWAP_V1_V4_vi, 43 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V1_si, 36 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V1_vi, 44 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_si, 37 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V2_vi, 45 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_si, 38 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V3_vi, 46 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_si, 39 },
    { IMAGE_ATOMIC_CMPSWAP_V2_V4_vi, 47 },
    { IMAGE_ATOMIC_DEC_V1_V1_si, 48 },
    { IMAGE_ATOMIC_DEC_V1_V1_vi, 56 },
    { IMAGE_ATOMIC_DEC_V1_V2_si, 49 },
    { IMAGE_ATOMIC_DEC_V1_V2_vi, 57 },
    { IMAGE_ATOMIC_DEC_V1_V3_si, 50 },
    { IMAGE_ATOMIC_DEC_V1_V3_vi, 58 },
    { IMAGE_ATOMIC_DEC_V1_V4_si, 51 },
    { IMAGE_ATOMIC_DEC_V1_V4_vi, 59 },
    { IMAGE_ATOMIC_DEC_V2_V1_si, 52 },
    { IMAGE_ATOMIC_DEC_V2_V1_vi, 60 },
    { IMAGE_ATOMIC_DEC_V2_V2_si, 53 },
    { IMAGE_ATOMIC_DEC_V2_V2_vi, 61 },
    { IMAGE_ATOMIC_DEC_V2_V3_si, 54 },
    { IMAGE_ATOMIC_DEC_V2_V3_vi, 62 },
    { IMAGE_ATOMIC_DEC_V2_V4_si, 55 },
    { IMAGE_ATOMIC_DEC_V2_V4_vi, 63 },
    { IMAGE_ATOMIC_INC_V1_V1_si, 64 },
    { IMAGE_ATOMIC_INC_V1_V1_vi, 72 },
    { IMAGE_ATOMIC_INC_V1_V2_si, 65 },
    { IMAGE_ATOMIC_INC_V1_V2_vi, 73 },
    { IMAGE_ATOMIC_INC_V1_V3_si, 66 },
    { IMAGE_ATOMIC_INC_V1_V3_vi, 74 },
    { IMAGE_ATOMIC_INC_V1_V4_si, 67 },
    { IMAGE_ATOMIC_INC_V1_V4_vi, 75 },
    { IMAGE_ATOMIC_INC_V2_V1_si, 68 },
    { IMAGE_ATOMIC_INC_V2_V1_vi, 76 },
    { IMAGE_ATOMIC_INC_V2_V2_si, 69 },
    { IMAGE_ATOMIC_INC_V2_V2_vi, 77 },
    { IMAGE_ATOMIC_INC_V2_V3_si, 70 },
    { IMAGE_ATOMIC_INC_V2_V3_vi, 78 },
    { IMAGE_ATOMIC_INC_V2_V4_si, 71 },
    { IMAGE_ATOMIC_INC_V2_V4_vi, 79 },
    { IMAGE_ATOMIC_OR_V1_V1_si, 80 },
    { IMAGE_ATOMIC_OR_V1_V1_vi, 88 },
    { IMAGE_ATOMIC_OR_V1_V2_si, 81 },
    { IMAGE_ATOMIC_OR_V1_V2_vi, 89 },
    { IMAGE_ATOMIC_OR_V1_V3_si, 82 },
    { IMAGE_ATOMIC_OR_V1_V3_vi, 90 },
    { IMAGE_ATOMIC_OR_V1_V4_si, 83 },
    { IMAGE_ATOMIC_OR_V1_V4_vi, 91 },
    { IMAGE_ATOMIC_OR_V2_V1_si, 84 },
    { IMAGE_ATOMIC_OR_V2_V1_vi, 92 },
    { IMAGE_ATOMIC_OR_V2_V2_si, 85 },
    { IMAGE_ATOMIC_OR_V2_V2_vi, 93 },
    { IMAGE_ATOMIC_OR_V2_V3_si, 86 },
    { IMAGE_ATOMIC_OR_V2_V3_vi, 94 },
    { IMAGE_ATOMIC_OR_V2_V4_si, 87 },
    { IMAGE_ATOMIC_OR_V2_V4_vi, 95 },
    { IMAGE_ATOMIC_SMAX_V1_V1_si, 96 },
    { IMAGE_ATOMIC_SMAX_V1_V1_vi, 104 },
    { IMAGE_ATOMIC_SMAX_V1_V2_si, 97 },
    { IMAGE_ATOMIC_SMAX_V1_V2_vi, 105 },
    { IMAGE_ATOMIC_SMAX_V1_V3_si, 98 },
    { IMAGE_ATOMIC_SMAX_V1_V3_vi, 106 },
    { IMAGE_ATOMIC_SMAX_V1_V4_si, 99 },
    { IMAGE_ATOMIC_SMAX_V1_V4_vi, 107 },
    { IMAGE_ATOMIC_SMAX_V2_V1_si, 100 },
    { IMAGE_ATOMIC_SMAX_V2_V1_vi, 108 },
    { IMAGE_ATOMIC_SMAX_V2_V2_si, 101 },
    { IMAGE_ATOMIC_SMAX_V2_V2_vi, 109 },
    { IMAGE_ATOMIC_SMAX_V2_V3_si, 102 },
    { IMAGE_ATOMIC_SMAX_V2_V3_vi, 110 },
    { IMAGE_ATOMIC_SMAX_V2_V4_si, 103 },
    { IMAGE_ATOMIC_SMAX_V2_V4_vi, 111 },
    { IMAGE_ATOMIC_SMIN_V1_V1_si, 112 },
    { IMAGE_ATOMIC_SMIN_V1_V1_vi, 120 },
    { IMAGE_ATOMIC_SMIN_V1_V2_si, 113 },
    { IMAGE_ATOMIC_SMIN_V1_V2_vi, 121 },
    { IMAGE_ATOMIC_SMIN_V1_V3_si, 114 },
    { IMAGE_ATOMIC_SMIN_V1_V3_vi, 122 },
    { IMAGE_ATOMIC_SMIN_V1_V4_si, 115 },
    { IMAGE_ATOMIC_SMIN_V1_V4_vi, 123 },
    { IMAGE_ATOMIC_SMIN_V2_V1_si, 116 },
    { IMAGE_ATOMIC_SMIN_V2_V1_vi, 124 },
    { IMAGE_ATOMIC_SMIN_V2_V2_si, 117 },
    { IMAGE_ATOMIC_SMIN_V2_V2_vi, 125 },
    { IMAGE_ATOMIC_SMIN_V2_V3_si, 118 },
    { IMAGE_ATOMIC_SMIN_V2_V3_vi, 126 },
    { IMAGE_ATOMIC_SMIN_V2_V4_si, 119 },
    { IMAGE_ATOMIC_SMIN_V2_V4_vi, 127 },
    { IMAGE_ATOMIC_SUB_V1_V1_si, 128 },
    { IMAGE_ATOMIC_SUB_V1_V1_vi, 136 },
    { IMAGE_ATOMIC_SUB_V1_V2_si, 129 },
    { IMAGE_ATOMIC_SUB_V1_V2_vi, 137 },
    { IMAGE_ATOMIC_SUB_V1_V3_si, 130 },
    { IMAGE_ATOMIC_SUB_V1_V3_vi, 138 },
    { IMAGE_ATOMIC_SUB_V1_V4_si, 131 },
    { IMAGE_ATOMIC_SUB_V1_V4_vi, 139 },
    { IMAGE_ATOMIC_SUB_V2_V1_si, 132 },
    { IMAGE_ATOMIC_SUB_V2_V1_vi, 140 },
    { IMAGE_ATOMIC_SUB_V2_V2_si, 133 },
    { IMAGE_ATOMIC_SUB_V2_V2_vi, 141 },
    { IMAGE_ATOMIC_SUB_V2_V3_si, 134 },
    { IMAGE_ATOMIC_SUB_V2_V3_vi, 142 },
    { IMAGE_ATOMIC_SUB_V2_V4_si, 135 },
    { IMAGE_ATOMIC_SUB_V2_V4_vi, 143 },
    { IMAGE_ATOMIC_SWAP_V1_V1_si, 144 },
    { IMAGE_ATOMIC_SWAP_V1_V1_vi, 152 },
    { IMAGE_ATOMIC_SWAP_V1_V2_si, 145 },
    { IMAGE_ATOMIC_SWAP_V1_V2_vi, 153 },
    { IMAGE_ATOMIC_SWAP_V1_V3_si, 146 },
    { IMAGE_ATOMIC_SWAP_V1_V3_vi, 154 },
    { IMAGE_ATOMIC_SWAP_V1_V4_si, 147 },
    { IMAGE_ATOMIC_SWAP_V1_V4_vi, 155 },
    { IMAGE_ATOMIC_SWAP_V2_V1_si, 148 },
    { IMAGE_ATOMIC_SWAP_V2_V1_vi, 156 },
    { IMAGE_ATOMIC_SWAP_V2_V2_si, 149 },
    { IMAGE_ATOMIC_SWAP_V2_V2_vi, 157 },
    { IMAGE_ATOMIC_SWAP_V2_V3_si, 150 },
    { IMAGE_ATOMIC_SWAP_V2_V3_vi, 158 },
    { IMAGE_ATOMIC_SWAP_V2_V4_si, 151 },
    { IMAGE_ATOMIC_SWAP_V2_V4_vi, 159 },
    { IMAGE_ATOMIC_UMAX_V1_V1_si, 160 },
    { IMAGE_ATOMIC_UMAX_V1_V1_vi, 168 },
    { IMAGE_ATOMIC_UMAX_V1_V2_si, 161 },
    { IMAGE_ATOMIC_UMAX_V1_V2_vi, 169 },
    { IMAGE_ATOMIC_UMAX_V1_V3_si, 162 },
    { IMAGE_ATOMIC_UMAX_V1_V3_vi, 170 },
    { IMAGE_ATOMIC_UMAX_V1_V4_si, 163 },
    { IMAGE_ATOMIC_UMAX_V1_V4_vi, 171 },
    { IMAGE_ATOMIC_UMAX_V2_V1_si, 164 },
    { IMAGE_ATOMIC_UMAX_V2_V1_vi, 172 },
    { IMAGE_ATOMIC_UMAX_V2_V2_si, 165 },
    { IMAGE_ATOMIC_UMAX_V2_V2_vi, 173 },
    { IMAGE_ATOMIC_UMAX_V2_V3_si, 166 },
    { IMAGE_ATOMIC_UMAX_V2_V3_vi, 174 },
    { IMAGE_ATOMIC_UMAX_V2_V4_si, 167 },
    { IMAGE_ATOMIC_UMAX_V2_V4_vi, 175 },
    { IMAGE_ATOMIC_UMIN_V1_V1_si, 176 },
    { IMAGE_ATOMIC_UMIN_V1_V1_vi, 184 },
    { IMAGE_ATOMIC_UMIN_V1_V2_si, 177 },
    { IMAGE_ATOMIC_UMIN_V1_V2_vi, 185 },
    { IMAGE_ATOMIC_UMIN_V1_V3_si, 178 },
    { IMAGE_ATOMIC_UMIN_V1_V3_vi, 186 },
    { IMAGE_ATOMIC_UMIN_V1_V4_si, 179 },
    { IMAGE_ATOMIC_UMIN_V1_V4_vi, 187 },
    { IMAGE_ATOMIC_UMIN_V2_V1_si, 180 },
    { IMAGE_ATOMIC_UMIN_V2_V1_vi, 188 },
    { IMAGE_ATOMIC_UMIN_V2_V2_si, 181 },
    { IMAGE_ATOMIC_UMIN_V2_V2_vi, 189 },
    { IMAGE_ATOMIC_UMIN_V2_V3_si, 182 },
    { IMAGE_ATOMIC_UMIN_V2_V3_vi, 190 },
    { IMAGE_ATOMIC_UMIN_V2_V4_si, 183 },
    { IMAGE_ATOMIC_UMIN_V2_V4_vi, 191 },
    { IMAGE_ATOMIC_XOR_V1_V1_si, 192 },
    { IMAGE_ATOMIC_XOR_V1_V1_vi, 200 },
    { IMAGE_ATOMIC_XOR_V1_V2_si, 193 },
    { IMAGE_ATOMIC_XOR_V1_V2_vi, 201 },
    { IMAGE_ATOMIC_XOR_V1_V3_si, 194 },
    { IMAGE_ATOMIC_XOR_V1_V3_vi, 202 },
    { IMAGE_ATOMIC_XOR_V1_V4_si, 195 },
    { IMAGE_ATOMIC_XOR_V1_V4_vi, 203 },
    { IMAGE_ATOMIC_XOR_V2_V1_si, 196 },
    { IMAGE_ATOMIC_XOR_V2_V1_vi, 204 },
    { IMAGE_ATOMIC_XOR_V2_V2_si, 197 },
    { IMAGE_ATOMIC_XOR_V2_V2_vi, 205 },
    { IMAGE_ATOMIC_XOR_V2_V3_si, 198 },
    { IMAGE_ATOMIC_XOR_V2_V3_vi, 206 },
    { IMAGE_ATOMIC_XOR_V2_V4_si, 199 },
    { IMAGE_ATOMIC_XOR_V2_V4_vi, 207 },
    { IMAGE_GATHER4_B_CL_O_V2_V3, 241 },
    { IMAGE_GATHER4_B_CL_O_V2_V4, 242 },
    { IMAGE_GATHER4_B_CL_O_V2_V8, 243 },
    { IMAGE_GATHER4_B_CL_O_V4_V3, 244 },
    { IMAGE_GATHER4_B_CL_O_V4_V4, 245 },
    { IMAGE_GATHER4_B_CL_O_V4_V8, 246 },
    { IMAGE_GATHER4_B_CL_O_V8_V3, 247 },
    { IMAGE_GATHER4_B_CL_O_V8_V4, 248 },
    { IMAGE_GATHER4_B_CL_O_V8_V8, 249 },
    { IMAGE_GATHER4_B_CL_V2_V2, 229 },
    { IMAGE_GATHER4_B_CL_V2_V3, 230 },
    { IMAGE_GATHER4_B_CL_V2_V4, 231 },
    { IMAGE_GATHER4_B_CL_V2_V8, 232 },
    { IMAGE_GATHER4_B_CL_V4_V2, 233 },
    { IMAGE_GATHER4_B_CL_V4_V3, 234 },
    { IMAGE_GATHER4_B_CL_V4_V4, 235 },
    { IMAGE_GATHER4_B_CL_V4_V8, 236 },
    { IMAGE_GATHER4_B_CL_V8_V2, 237 },
    { IMAGE_GATHER4_B_CL_V8_V3, 238 },
    { IMAGE_GATHER4_B_CL_V8_V4, 239 },
    { IMAGE_GATHER4_B_CL_V8_V8, 240 },
    { IMAGE_GATHER4_B_O_V2_V3, 250 },
    { IMAGE_GATHER4_B_O_V2_V4, 251 },
    { IMAGE_GATHER4_B_O_V2_V8, 252 },
    { IMAGE_GATHER4_B_O_V4_V3, 253 },
    { IMAGE_GATHER4_B_O_V4_V4, 254 },
    { IMAGE_GATHER4_B_O_V4_V8, 255 },
    { IMAGE_GATHER4_B_O_V8_V3, 256 },
    { IMAGE_GATHER4_B_O_V8_V4, 257 },
    { IMAGE_GATHER4_B_O_V8_V8, 258 },
    { IMAGE_GATHER4_B_V2_V2, 220 },
    { IMAGE_GATHER4_B_V2_V3, 221 },
    { IMAGE_GATHER4_B_V2_V4, 222 },
    { IMAGE_GATHER4_B_V4_V2, 223 },
    { IMAGE_GATHER4_B_V4_V3, 224 },
    { IMAGE_GATHER4_B_V4_V4, 225 },
    { IMAGE_GATHER4_B_V8_V2, 226 },
    { IMAGE_GATHER4_B_V8_V3, 227 },
    { IMAGE_GATHER4_B_V8_V4, 228 },
    { IMAGE_GATHER4_CL_O_V2_V2, 280 },
    { IMAGE_GATHER4_CL_O_V2_V3, 281 },
    { IMAGE_GATHER4_CL_O_V2_V4, 282 },
    { IMAGE_GATHER4_CL_O_V2_V8, 283 },
    { IMAGE_GATHER4_CL_O_V4_V2, 284 },
    { IMAGE_GATHER4_CL_O_V4_V3, 285 },
    { IMAGE_GATHER4_CL_O_V4_V4, 286 },
    { IMAGE_GATHER4_CL_O_V4_V8, 287 },
    { IMAGE_GATHER4_CL_O_V8_V2, 288 },
    { IMAGE_GATHER4_CL_O_V8_V3, 289 },
    { IMAGE_GATHER4_CL_O_V8_V4, 290 },
    { IMAGE_GATHER4_CL_O_V8_V8, 291 },
    { IMAGE_GATHER4_CL_V2_V1, 268 },
    { IMAGE_GATHER4_CL_V2_V2, 269 },
    { IMAGE_GATHER4_CL_V2_V3, 270 },
    { IMAGE_GATHER4_CL_V2_V4, 271 },
    { IMAGE_GATHER4_CL_V4_V1, 272 },
    { IMAGE_GATHER4_CL_V4_V2, 273 },
    { IMAGE_GATHER4_CL_V4_V3, 274 },
    { IMAGE_GATHER4_CL_V4_V4, 275 },
    { IMAGE_GATHER4_CL_V8_V1, 276 },
    { IMAGE_GATHER4_CL_V8_V2, 277 },
    { IMAGE_GATHER4_CL_V8_V3, 278 },
    { IMAGE_GATHER4_CL_V8_V4, 279 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V4, 310 },
    { IMAGE_GATHER4_C_B_CL_O_V2_V8, 311 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V4, 312 },
    { IMAGE_GATHER4_C_B_CL_O_V4_V8, 313 },
    { IMAGE_GATHER4_C_B_CL_O_V8_V4, 314 },
    { IMAGE_GATHER4_C_B_CL_O_V8_V8, 315 },
    { IMAGE_GATHER4_C_B_CL_V2_V3, 301 },
    { IMAGE_GATHER4_C_B_CL_V2_V4, 302 },
    { IMAGE_GATHER4_C_B_CL_V2_V8, 303 },
    { IMAGE_GATHER4_C_B_CL_V4_V3, 304 },
    { IMAGE_GATHER4_C_B_CL_V4_V4, 305 },
    { IMAGE_GATHER4_C_B_CL_V4_V8, 306 },
    { IMAGE_GATHER4_C_B_CL_V8_V3, 307 },
    { IMAGE_GATHER4_C_B_CL_V8_V4, 308 },
    { IMAGE_GATHER4_C_B_CL_V8_V8, 309 },
    { IMAGE_GATHER4_C_B_O_V2_V4, 316 },
    { IMAGE_GATHER4_C_B_O_V2_V8, 317 },
    { IMAGE_GATHER4_C_B_O_V4_V4, 318 },
    { IMAGE_GATHER4_C_B_O_V4_V8, 319 },
    { IMAGE_GATHER4_C_B_O_V8_V4, 320 },
    { IMAGE_GATHER4_C_B_O_V8_V8, 321 },
    { IMAGE_GATHER4_C_B_V2_V3, 292 },
    { IMAGE_GATHER4_C_B_V2_V4, 293 },
    { IMAGE_GATHER4_C_B_V2_V8, 294 },
    { IMAGE_GATHER4_C_B_V4_V3, 295 },
    { IMAGE_GATHER4_C_B_V4_V4, 296 },
    { IMAGE_GATHER4_C_B_V4_V8, 297 },
    { IMAGE_GATHER4_C_B_V8_V3, 298 },
    { IMAGE_GATHER4_C_B_V8_V4, 299 },
    { IMAGE_GATHER4_C_B_V8_V8, 300 },
    { IMAGE_GATHER4_C_CL_O_V2_V3, 334 },
    { IMAGE_GATHER4_C_CL_O_V2_V4, 335 },
    { IMAGE_GATHER4_C_CL_O_V2_V8, 336 },
    { IMAGE_GATHER4_C_CL_O_V4_V3, 337 },
    { IMAGE_GATHER4_C_CL_O_V4_V4, 338 },
    { IMAGE_GATHER4_C_CL_O_V4_V8, 339 },
    { IMAGE_GATHER4_C_CL_O_V8_V3, 340 },
    { IMAGE_GATHER4_C_CL_O_V8_V4, 341 },
    { IMAGE_GATHER4_C_CL_O_V8_V8, 342 },
    { IMAGE_GATHER4_C_CL_V2_V2, 322 },
    { IMAGE_GATHER4_C_CL_V2_V3, 323 },
    { IMAGE_GATHER4_C_CL_V2_V4, 324 },
    { IMAGE_GATHER4_C_CL_V2_V8, 325 },
    { IMAGE_GATHER4_C_CL_V4_V2, 326 },
    { IMAGE_GATHER4_C_CL_V4_V3, 327 },
    { IMAGE_GATHER4_C_CL_V4_V4, 328 },
    { IMAGE_GATHER4_C_CL_V4_V8, 329 },
    { IMAGE_GATHER4_C_CL_V8_V2, 330 },
    { IMAGE_GATHER4_C_CL_V8_V3, 331 },
    { IMAGE_GATHER4_C_CL_V8_V4, 332 },
    { IMAGE_GATHER4_C_CL_V8_V8, 333 },
    { IMAGE_GATHER4_C_LZ_O_V2_V3, 364 },
    { IMAGE_GATHER4_C_LZ_O_V2_V4, 365 },
    { IMAGE_GATHER4_C_LZ_O_V2_V8, 366 },
    { IMAGE_GATHER4_C_LZ_O_V4_V3, 367 },
    { IMAGE_GATHER4_C_LZ_O_V4_V4, 368 },
    { IMAGE_GATHER4_C_LZ_O_V4_V8, 369 },
    { IMAGE_GATHER4_C_LZ_O_V8_V3, 370 },
    { IMAGE_GATHER4_C_LZ_O_V8_V4, 371 },
    { IMAGE_GATHER4_C_LZ_O_V8_V8, 372 },
    { IMAGE_GATHER4_C_LZ_V2_V2, 355 },
    { IMAGE_GATHER4_C_LZ_V2_V3, 356 },
    { IMAGE_GATHER4_C_LZ_V2_V4, 357 },
    { IMAGE_GATHER4_C_LZ_V4_V2, 358 },
    { IMAGE_GATHER4_C_LZ_V4_V3, 359 },
    { IMAGE_GATHER4_C_LZ_V4_V4, 360 },
    { IMAGE_GATHER4_C_LZ_V8_V2, 361 },
    { IMAGE_GATHER4_C_LZ_V8_V3, 362 },
    { IMAGE_GATHER4_C_LZ_V8_V4, 363 },
    { IMAGE_GATHER4_C_L_O_V2_V3, 373 },
    { IMAGE_GATHER4_C_L_O_V2_V4, 374 },
    { IMAGE_GATHER4_C_L_O_V2_V8, 375 },
    { IMAGE_GATHER4_C_L_O_V4_V3, 376 },
    { IMAGE_GATHER4_C_L_O_V4_V4, 377 },
    { IMAGE_GATHER4_C_L_O_V4_V8, 378 },
    { IMAGE_GATHER4_C_L_O_V8_V3, 379 },
    { IMAGE_GATHER4_C_L_O_V8_V4, 380 },
    { IMAGE_GATHER4_C_L_O_V8_V8, 381 },
    { IMAGE_GATHER4_C_L_V2_V2, 343 },
    { IMAGE_GATHER4_C_L_V2_V3, 344 },
    { IMAGE_GATHER4_C_L_V2_V4, 345 },
    { IMAGE_GATHER4_C_L_V2_V8, 346 },
    { IMAGE_GATHER4_C_L_V4_V2, 347 },
    { IMAGE_GATHER4_C_L_V4_V3, 348 },
    { IMAGE_GATHER4_C_L_V4_V4, 349 },
    { IMAGE_GATHER4_C_L_V4_V8, 350 },
    { IMAGE_GATHER4_C_L_V8_V2, 351 },
    { IMAGE_GATHER4_C_L_V8_V3, 352 },
    { IMAGE_GATHER4_C_L_V8_V4, 353 },
    { IMAGE_GATHER4_C_L_V8_V8, 354 },
    { IMAGE_GATHER4_C_O_V2_V3, 382 },
    { IMAGE_GATHER4_C_O_V2_V4, 383 },
    { IMAGE_GATHER4_C_O_V2_V8, 384 },
    { IMAGE_GATHER4_C_O_V4_V3, 385 },
    { IMAGE_GATHER4_C_O_V4_V4, 386 },
    { IMAGE_GATHER4_C_O_V4_V8, 387 },
    { IMAGE_GATHER4_C_O_V8_V3, 388 },
    { IMAGE_GATHER4_C_O_V8_V4, 389 },
    { IMAGE_GATHER4_C_O_V8_V8, 390 },
    { IMAGE_GATHER4_C_V2_V2, 259 },
    { IMAGE_GATHER4_C_V2_V3, 260 },
    { IMAGE_GATHER4_C_V2_V4, 261 },
    { IMAGE_GATHER4_C_V4_V2, 262 },
    { IMAGE_GATHER4_C_V4_V3, 263 },
    { IMAGE_GATHER4_C_V4_V4, 264 },
    { IMAGE_GATHER4_C_V8_V2, 265 },
    { IMAGE_GATHER4_C_V8_V3, 266 },
    { IMAGE_GATHER4_C_V8_V4, 267 },
    { IMAGE_GATHER4_LZ_O_V2_V2, 415 },
    { IMAGE_GATHER4_LZ_O_V2_V3, 416 },
    { IMAGE_GATHER4_LZ_O_V2_V4, 417 },
    { IMAGE_GATHER4_LZ_O_V4_V2, 418 },
    { IMAGE_GATHER4_LZ_O_V4_V3, 419 },
    { IMAGE_GATHER4_LZ_O_V4_V4, 420 },
    { IMAGE_GATHER4_LZ_O_V8_V2, 421 },
    { IMAGE_GATHER4_LZ_O_V8_V3, 422 },
    { IMAGE_GATHER4_LZ_O_V8_V4, 423 },
    { IMAGE_GATHER4_LZ_V2_V1, 403 },
    { IMAGE_GATHER4_LZ_V2_V2, 404 },
    { IMAGE_GATHER4_LZ_V2_V3, 405 },
    { IMAGE_GATHER4_LZ_V2_V4, 406 },
    { IMAGE_GATHER4_LZ_V4_V1, 407 },
    { IMAGE_GATHER4_LZ_V4_V2, 408 },
    { IMAGE_GATHER4_LZ_V4_V3, 409 },
    { IMAGE_GATHER4_LZ_V4_V4, 410 },
    { IMAGE_GATHER4_LZ_V8_V1, 411 },
    { IMAGE_GATHER4_LZ_V8_V2, 412 },
    { IMAGE_GATHER4_LZ_V8_V3, 413 },
    { IMAGE_GATHER4_LZ_V8_V4, 414 },
    { IMAGE_GATHER4_L_O_V2_V2, 424 },
    { IMAGE_GATHER4_L_O_V2_V3, 425 },
    { IMAGE_GATHER4_L_O_V2_V4, 426 },
    { IMAGE_GATHER4_L_O_V2_V8, 427 },
    { IMAGE_GATHER4_L_O_V4_V2, 428 },
    { IMAGE_GATHER4_L_O_V4_V3, 429 },
    { IMAGE_GATHER4_L_O_V4_V4, 430 },
    { IMAGE_GATHER4_L_O_V4_V8, 431 },
    { IMAGE_GATHER4_L_O_V8_V2, 432 },
    { IMAGE_GATHER4_L_O_V8_V3, 433 },
    { IMAGE_GATHER4_L_O_V8_V4, 434 },
    { IMAGE_GATHER4_L_O_V8_V8, 435 },
    { IMAGE_GATHER4_L_V2_V1, 391 },
    { IMAGE_GATHER4_L_V2_V2, 392 },
    { IMAGE_GATHER4_L_V2_V3, 393 },
    { IMAGE_GATHER4_L_V2_V4, 394 },
    { IMAGE_GATHER4_L_V4_V1, 395 },
    { IMAGE_GATHER4_L_V4_V2, 396 },
    { IMAGE_GATHER4_L_V4_V3, 397 },
    { IMAGE_GATHER4_L_V4_V4, 398 },
    { IMAGE_GATHER4_L_V8_V1, 399 },
    { IMAGE_GATHER4_L_V8_V2, 400 },
    { IMAGE_GATHER4_L_V8_V3, 401 },
    { IMAGE_GATHER4_L_V8_V4, 402 },
    { IMAGE_GATHER4_O_V2_V2, 436 },
    { IMAGE_GATHER4_O_V2_V3, 437 },
    { IMAGE_GATHER4_O_V2_V4, 438 },
    { IMAGE_GATHER4_O_V4_V2, 439 },
    { IMAGE_GATHER4_O_V4_V3, 440 },
    { IMAGE_GATHER4_O_V4_V4, 441 },
    { IMAGE_GATHER4_O_V8_V2, 442 },
    { IMAGE_GATHER4_O_V8_V3, 443 },
    { IMAGE_GATHER4_O_V8_V4, 444 },
    { IMAGE_GATHER4_V2_V1, 208 },
    { IMAGE_GATHER4_V2_V2, 209 },
    { IMAGE_GATHER4_V2_V3, 210 },
    { IMAGE_GATHER4_V2_V4, 211 },
    { IMAGE_GATHER4_V4_V1, 212 },
    { IMAGE_GATHER4_V4_V2, 213 },
    { IMAGE_GATHER4_V4_V3, 214 },
    { IMAGE_GATHER4_V4_V4, 215 },
    { IMAGE_GATHER4_V8_V1, 216 },
    { IMAGE_GATHER4_V8_V2, 217 },
    { IMAGE_GATHER4_V8_V3, 218 },
    { IMAGE_GATHER4_V8_V4, 219 },
    { IMAGE_GET_LOD_V1_V1, 445 },
    { IMAGE_GET_LOD_V1_V2, 446 },
    { IMAGE_GET_LOD_V1_V3, 447 },
    { IMAGE_GET_LOD_V1_V4, 448 },
    { IMAGE_GET_LOD_V2_V1, 449 },
    { IMAGE_GET_LOD_V2_V2, 450 },
    { IMAGE_GET_LOD_V2_V3, 451 },
    { IMAGE_GET_LOD_V2_V4, 452 },
    { IMAGE_GET_LOD_V3_V1, 453 },
    { IMAGE_GET_LOD_V3_V2, 454 },
    { IMAGE_GET_LOD_V3_V3, 455 },
    { IMAGE_GET_LOD_V3_V4, 456 },
    { IMAGE_GET_LOD_V4_V1, 457 },
    { IMAGE_GET_LOD_V4_V2, 458 },
    { IMAGE_GET_LOD_V4_V3, 459 },
    { IMAGE_GET_LOD_V4_V4, 460 },
    { IMAGE_GET_LOD_V8_V1, 461 },
    { IMAGE_GET_LOD_V8_V2, 462 },
    { IMAGE_GET_LOD_V8_V3, 463 },
    { IMAGE_GET_LOD_V8_V4, 464 },
    { IMAGE_GET_RESINFO_V1_V1, 465 },
    { IMAGE_GET_RESINFO_V1_V2, 466 },
    { IMAGE_GET_RESINFO_V1_V3, 467 },
    { IMAGE_GET_RESINFO_V1_V4, 468 },
    { IMAGE_GET_RESINFO_V2_V1, 469 },
    { IMAGE_GET_RESINFO_V2_V2, 470 },
    { IMAGE_GET_RESINFO_V2_V3, 471 },
    { IMAGE_GET_RESINFO_V2_V4, 472 },
    { IMAGE_GET_RESINFO_V3_V1, 473 },
    { IMAGE_GET_RESINFO_V3_V2, 474 },
    { IMAGE_GET_RESINFO_V3_V3, 475 },
    { IMAGE_GET_RESINFO_V3_V4, 476 },
    { IMAGE_GET_RESINFO_V4_V1, 477 },
    { IMAGE_GET_RESINFO_V4_V2, 478 },
    { IMAGE_GET_RESINFO_V4_V3, 479 },
    { IMAGE_GET_RESINFO_V4_V4, 480 },
    { IMAGE_GET_RESINFO_V8_V1, 481 },
    { IMAGE_GET_RESINFO_V8_V2, 482 },
    { IMAGE_GET_RESINFO_V8_V3, 483 },
    { IMAGE_GET_RESINFO_V8_V4, 484 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V1, 545 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V2, 546 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V3, 547 },
    { IMAGE_LOAD_MIP_PCK_SGN_V1_V4, 548 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V1, 549 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V2, 550 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V3, 551 },
    { IMAGE_LOAD_MIP_PCK_SGN_V2_V4, 552 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V1, 553 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V2, 554 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V3, 555 },
    { IMAGE_LOAD_MIP_PCK_SGN_V3_V4, 556 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V1, 557 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V2, 558 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V3, 559 },
    { IMAGE_LOAD_MIP_PCK_SGN_V4_V4, 560 },
    { IMAGE_LOAD_MIP_PCK_SGN_V8_V1, 561 },
    { IMAGE_LOAD_MIP_PCK_SGN_V8_V2, 562 },
    { IMAGE_LOAD_MIP_PCK_SGN_V8_V3, 563 },
    { IMAGE_LOAD_MIP_PCK_SGN_V8_V4, 564 },
    { IMAGE_LOAD_MIP_PCK_V1_V1, 525 },
    { IMAGE_LOAD_MIP_PCK_V1_V2, 526 },
    { IMAGE_LOAD_MIP_PCK_V1_V3, 527 },
    { IMAGE_LOAD_MIP_PCK_V1_V4, 528 },
    { IMAGE_LOAD_MIP_PCK_V2_V1, 529 },
    { IMAGE_LOAD_MIP_PCK_V2_V2, 530 },
    { IMAGE_LOAD_MIP_PCK_V2_V3, 531 },
    { IMAGE_LOAD_MIP_PCK_V2_V4, 532 },
    { IMAGE_LOAD_MIP_PCK_V3_V1, 533 },
    { IMAGE_LOAD_MIP_PCK_V3_V2, 534 },
    { IMAGE_LOAD_MIP_PCK_V3_V3, 535 },
    { IMAGE_LOAD_MIP_PCK_V3_V4, 536 },
    { IMAGE_LOAD_MIP_PCK_V4_V1, 537 },
    { IMAGE_LOAD_MIP_PCK_V4_V2, 538 },
    { IMAGE_LOAD_MIP_PCK_V4_V3, 539 },
    { IMAGE_LOAD_MIP_PCK_V4_V4, 540 },
    { IMAGE_LOAD_MIP_PCK_V8_V1, 541 },
    { IMAGE_LOAD_MIP_PCK_V8_V2, 542 },
    { IMAGE_LOAD_MIP_PCK_V8_V3, 543 },
    { IMAGE_LOAD_MIP_PCK_V8_V4, 544 },
    { IMAGE_LOAD_MIP_V1_V1, 505 },
    { IMAGE_LOAD_MIP_V1_V2, 506 },
    { IMAGE_LOAD_MIP_V1_V3, 507 },
    { IMAGE_LOAD_MIP_V1_V4, 508 },
    { IMAGE_LOAD_MIP_V2_V1, 509 },
    { IMAGE_LOAD_MIP_V2_V2, 510 },
    { IMAGE_LOAD_MIP_V2_V3, 511 },
    { IMAGE_LOAD_MIP_V2_V4, 512 },
    { IMAGE_LOAD_MIP_V3_V1, 513 },
    { IMAGE_LOAD_MIP_V3_V2, 514 },
    { IMAGE_LOAD_MIP_V3_V3, 515 },
    { IMAGE_LOAD_MIP_V3_V4, 516 },
    { IMAGE_LOAD_MIP_V4_V1, 517 },
    { IMAGE_LOAD_MIP_V4_V2, 518 },
    { IMAGE_LOAD_MIP_V4_V3, 519 },
    { IMAGE_LOAD_MIP_V4_V4, 520 },
    { IMAGE_LOAD_MIP_V8_V1, 521 },
    { IMAGE_LOAD_MIP_V8_V2, 522 },
    { IMAGE_LOAD_MIP_V8_V3, 523 },
    { IMAGE_LOAD_MIP_V8_V4, 524 },
    { IMAGE_LOAD_PCK_SGN_V1_V1, 585 },
    { IMAGE_LOAD_PCK_SGN_V1_V2, 586 },
    { IMAGE_LOAD_PCK_SGN_V1_V3, 587 },
    { IMAGE_LOAD_PCK_SGN_V1_V4, 588 },
    { IMAGE_LOAD_PCK_SGN_V2_V1, 589 },
    { IMAGE_LOAD_PCK_SGN_V2_V2, 590 },
    { IMAGE_LOAD_PCK_SGN_V2_V3, 591 },
    { IMAGE_LOAD_PCK_SGN_V2_V4, 592 },
    { IMAGE_LOAD_PCK_SGN_V3_V1, 593 },
    { IMAGE_LOAD_PCK_SGN_V3_V2, 594 },
    { IMAGE_LOAD_PCK_SGN_V3_V3, 595 },
    { IMAGE_LOAD_PCK_SGN_V3_V4, 596 },
    { IMAGE_LOAD_PCK_SGN_V4_V1, 597 },
    { IMAGE_LOAD_PCK_SGN_V4_V2, 598 },
    { IMAGE_LOAD_PCK_SGN_V4_V3, 599 },
    { IMAGE_LOAD_PCK_SGN_V4_V4, 600 },
    { IMAGE_LOAD_PCK_SGN_V8_V1, 601 },
    { IMAGE_LOAD_PCK_SGN_V8_V2, 602 },
    { IMAGE_LOAD_PCK_SGN_V8_V3, 603 },
    { IMAGE_LOAD_PCK_SGN_V8_V4, 604 },
    { IMAGE_LOAD_PCK_V1_V1, 565 },
    { IMAGE_LOAD_PCK_V1_V2, 566 },
    { IMAGE_LOAD_PCK_V1_V3, 567 },
    { IMAGE_LOAD_PCK_V1_V4, 568 },
    { IMAGE_LOAD_PCK_V2_V1, 569 },
    { IMAGE_LOAD_PCK_V2_V2, 570 },
    { IMAGE_LOAD_PCK_V2_V3, 571 },
    { IMAGE_LOAD_PCK_V2_V4, 572 },
    { IMAGE_LOAD_PCK_V3_V1, 573 },
    { IMAGE_LOAD_PCK_V3_V2, 574 },
    { IMAGE_LOAD_PCK_V3_V3, 575 },
    { IMAGE_LOAD_PCK_V3_V4, 576 },
    { IMAGE_LOAD_PCK_V4_V1, 577 },
    { IMAGE_LOAD_PCK_V4_V2, 578 },
    { IMAGE_LOAD_PCK_V4_V3, 579 },
    { IMAGE_LOAD_PCK_V4_V4, 580 },
    { IMAGE_LOAD_PCK_V8_V1, 581 },
    { IMAGE_LOAD_PCK_V8_V2, 582 },
    { IMAGE_LOAD_PCK_V8_V3, 583 },
    { IMAGE_LOAD_PCK_V8_V4, 584 },
    { IMAGE_LOAD_V1_V1, 485 },
    { IMAGE_LOAD_V1_V2, 486 },
    { IMAGE_LOAD_V1_V3, 487 },
    { IMAGE_LOAD_V1_V4, 488 },
    { IMAGE_LOAD_V2_V1, 489 },
    { IMAGE_LOAD_V2_V2, 490 },
    { IMAGE_LOAD_V2_V3, 491 },
    { IMAGE_LOAD_V2_V4, 492 },
    { IMAGE_LOAD_V3_V1, 493 },
    { IMAGE_LOAD_V3_V2, 494 },
    { IMAGE_LOAD_V3_V3, 495 },
    { IMAGE_LOAD_V3_V4, 496 },
    { IMAGE_LOAD_V4_V1, 497 },
    { IMAGE_LOAD_V4_V2, 498 },
    { IMAGE_LOAD_V4_V3, 499 },
    { IMAGE_LOAD_V4_V4, 500 },
    { IMAGE_LOAD_V8_V1, 501 },
    { IMAGE_LOAD_V8_V2, 502 },
    { IMAGE_LOAD_V8_V3, 503 },
    { IMAGE_LOAD_V8_V4, 504 },
    { IMAGE_SAMPLE_B_CL_O_V1_V3, 660 },
    { IMAGE_SAMPLE_B_CL_O_V1_V4, 661 },
    { IMAGE_SAMPLE_B_CL_O_V1_V8, 662 },
    { IMAGE_SAMPLE_B_CL_O_V2_V3, 663 },
    { IMAGE_SAMPLE_B_CL_O_V2_V4, 664 },
    { IMAGE_SAMPLE_B_CL_O_V2_V8, 665 },
    { IMAGE_SAMPLE_B_CL_O_V3_V3, 666 },
    { IMAGE_SAMPLE_B_CL_O_V3_V4, 667 },
    { IMAGE_SAMPLE_B_CL_O_V3_V8, 668 },
    { IMAGE_SAMPLE_B_CL_O_V4_V3, 669 },
    { IMAGE_SAMPLE_B_CL_O_V4_V4, 670 },
    { IMAGE_SAMPLE_B_CL_O_V4_V8, 671 },
    { IMAGE_SAMPLE_B_CL_O_V8_V3, 672 },
    { IMAGE_SAMPLE_B_CL_O_V8_V4, 673 },
    { IMAGE_SAMPLE_B_CL_O_V8_V8, 674 },
    { IMAGE_SAMPLE_B_CL_V1_V2, 640 },
    { IMAGE_SAMPLE_B_CL_V1_V3, 641 },
    { IMAGE_SAMPLE_B_CL_V1_V4, 642 },
    { IMAGE_SAMPLE_B_CL_V1_V8, 643 },
    { IMAGE_SAMPLE_B_CL_V2_V2, 644 },
    { IMAGE_SAMPLE_B_CL_V2_V3, 645 },
    { IMAGE_SAMPLE_B_CL_V2_V4, 646 },
    { IMAGE_SAMPLE_B_CL_V2_V8, 647 },
    { IMAGE_SAMPLE_B_CL_V3_V2, 648 },
    { IMAGE_SAMPLE_B_CL_V3_V3, 649 },
    { IMAGE_SAMPLE_B_CL_V3_V4, 650 },
    { IMAGE_SAMPLE_B_CL_V3_V8, 651 },
    { IMAGE_SAMPLE_B_CL_V4_V2, 652 },
    { IMAGE_SAMPLE_B_CL_V4_V3, 653 },
    { IMAGE_SAMPLE_B_CL_V4_V4, 654 },
    { IMAGE_SAMPLE_B_CL_V4_V8, 655 },
    { IMAGE_SAMPLE_B_CL_V8_V2, 656 },
    { IMAGE_SAMPLE_B_CL_V8_V3, 657 },
    { IMAGE_SAMPLE_B_CL_V8_V4, 658 },
    { IMAGE_SAMPLE_B_CL_V8_V8, 659 },
    { IMAGE_SAMPLE_B_O_V1_V3, 675 },
    { IMAGE_SAMPLE_B_O_V1_V4, 676 },
    { IMAGE_SAMPLE_B_O_V1_V8, 677 },
    { IMAGE_SAMPLE_B_O_V2_V3, 678 },
    { IMAGE_SAMPLE_B_O_V2_V4, 679 },
    { IMAGE_SAMPLE_B_O_V2_V8, 680 },
    { IMAGE_SAMPLE_B_O_V3_V3, 681 },
    { IMAGE_SAMPLE_B_O_V3_V4, 682 },
    { IMAGE_SAMPLE_B_O_V3_V8, 683 },
    { IMAGE_SAMPLE_B_O_V4_V3, 684 },
    { IMAGE_SAMPLE_B_O_V4_V4, 685 },
    { IMAGE_SAMPLE_B_O_V4_V8, 686 },
    { IMAGE_SAMPLE_B_O_V8_V3, 687 },
    { IMAGE_SAMPLE_B_O_V8_V4, 688 },
    { IMAGE_SAMPLE_B_O_V8_V8, 689 },
    { IMAGE_SAMPLE_B_V1_V2, 625 },
    { IMAGE_SAMPLE_B_V1_V3, 626 },
    { IMAGE_SAMPLE_B_V1_V4, 627 },
    { IMAGE_SAMPLE_B_V2_V2, 628 },
    { IMAGE_SAMPLE_B_V2_V3, 629 },
    { IMAGE_SAMPLE_B_V2_V4, 630 },
    { IMAGE_SAMPLE_B_V3_V2, 631 },
    { IMAGE_SAMPLE_B_V3_V3, 632 },
    { IMAGE_SAMPLE_B_V3_V4, 633 },
    { IMAGE_SAMPLE_B_V4_V2, 634 },
    { IMAGE_SAMPLE_B_V4_V3, 635 },
    { IMAGE_SAMPLE_B_V4_V4, 636 },
    { IMAGE_SAMPLE_B_V8_V2, 637 },
    { IMAGE_SAMPLE_B_V8_V3, 638 },
    { IMAGE_SAMPLE_B_V8_V4, 639 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V16, 758 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V3, 755 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V4, 756 },
    { IMAGE_SAMPLE_CD_CL_O_V1_V8, 757 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V16, 762 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V3, 759 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V4, 760 },
    { IMAGE_SAMPLE_CD_CL_O_V2_V8, 761 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V16, 766 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V3, 763 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V4, 764 },
    { IMAGE_SAMPLE_CD_CL_O_V3_V8, 765 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V16, 770 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V3, 767 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V4, 768 },
    { IMAGE_SAMPLE_CD_CL_O_V4_V8, 769 },
    { IMAGE_SAMPLE_CD_CL_O_V8_V16, 774 },
    { IMAGE_SAMPLE_CD_CL_O_V8_V3, 771 },
    { IMAGE_SAMPLE_CD_CL_O_V8_V4, 772 },
    { IMAGE_SAMPLE_CD_CL_O_V8_V8, 773 },
    { IMAGE_SAMPLE_CD_CL_V1_V16, 734 },
    { IMAGE_SAMPLE_CD_CL_V1_V2, 730 },
    { IMAGE_SAMPLE_CD_CL_V1_V3, 731 },
    { IMAGE_SAMPLE_CD_CL_V1_V4, 732 },
    { IMAGE_SAMPLE_CD_CL_V1_V8, 733 },
    { IMAGE_SAMPLE_CD_CL_V2_V16, 739 },
    { IMAGE_SAMPLE_CD_CL_V2_V2, 735 },
    { IMAGE_SAMPLE_CD_CL_V2_V3, 736 },
    { IMAGE_SAMPLE_CD_CL_V2_V4, 737 },
    { IMAGE_SAMPLE_CD_CL_V2_V8, 738 },
    { IMAGE_SAMPLE_CD_CL_V3_V16, 744 },
    { IMAGE_SAMPLE_CD_CL_V3_V2, 740 },
    { IMAGE_SAMPLE_CD_CL_V3_V3, 741 },
    { IMAGE_SAMPLE_CD_CL_V3_V4, 742 },
    { IMAGE_SAMPLE_CD_CL_V3_V8, 743 },
    { IMAGE_SAMPLE_CD_CL_V4_V16, 749 },
    { IMAGE_SAMPLE_CD_CL_V4_V2, 745 },
    { IMAGE_SAMPLE_CD_CL_V4_V3, 746 },
    { IMAGE_SAMPLE_CD_CL_V4_V4, 747 },
    { IMAGE_SAMPLE_CD_CL_V4_V8, 748 },
    { IMAGE_SAMPLE_CD_CL_V8_V16, 754 },
    { IMAGE_SAMPLE_CD_CL_V8_V2, 750 },
    { IMAGE_SAMPLE_CD_CL_V8_V3, 751 },
    { IMAGE_SAMPLE_CD_CL_V8_V4, 752 },
    { IMAGE_SAMPLE_CD_CL_V8_V8, 753 },
    { IMAGE_SAMPLE_CD_O_V1_V16, 778 },
    { IMAGE_SAMPLE_CD_O_V1_V3, 775 },
    { IMAGE_SAMPLE_CD_O_V1_V4, 776 },
    { IMAGE_SAMPLE_CD_O_V1_V8, 777 },
    { IMAGE_SAMPLE_CD_O_V2_V16, 782 },
    { IMAGE_SAMPLE_CD_O_V2_V3, 779 },
    { IMAGE_SAMPLE_CD_O_V2_V4, 780 },
    { IMAGE_SAMPLE_CD_O_V2_V8, 781 },
    { IMAGE_SAMPLE_CD_O_V3_V16, 786 },
    { IMAGE_SAMPLE_CD_O_V3_V3, 783 },
    { IMAGE_SAMPLE_CD_O_V3_V4, 784 },
    { IMAGE_SAMPLE_CD_O_V3_V8, 785 },
    { IMAGE_SAMPLE_CD_O_V4_V16, 790 },
    { IMAGE_SAMPLE_CD_O_V4_V3, 787 },
    { IMAGE_SAMPLE_CD_O_V4_V4, 788 },
    { IMAGE_SAMPLE_CD_O_V4_V8, 789 },
    { IMAGE_SAMPLE_CD_O_V8_V16, 794 },
    { IMAGE_SAMPLE_CD_O_V8_V3, 791 },
    { IMAGE_SAMPLE_CD_O_V8_V4, 792 },
    { IMAGE_SAMPLE_CD_O_V8_V8, 793 },
    { IMAGE_SAMPLE_CD_V1_V16, 709 },
    { IMAGE_SAMPLE_CD_V1_V2, 705 },
    { IMAGE_SAMPLE_CD_V1_V3, 706 },
    { IMAGE_SAMPLE_CD_V1_V4, 707 },
    { IMAGE_SAMPLE_CD_V1_V8, 708 },
    { IMAGE_SAMPLE_CD_V2_V16, 714 },
    { IMAGE_SAMPLE_CD_V2_V2, 710 },
    { IMAGE_SAMPLE_CD_V2_V3, 711 },
    { IMAGE_SAMPLE_CD_V2_V4, 712 },
    { IMAGE_SAMPLE_CD_V2_V8, 713 },
    { IMAGE_SAMPLE_CD_V3_V16, 719 },
    { IMAGE_SAMPLE_CD_V3_V2, 715 },
    { IMAGE_SAMPLE_CD_V3_V3, 716 },
    { IMAGE_SAMPLE_CD_V3_V4, 717 },
    { IMAGE_SAMPLE_CD_V3_V8, 718 },
    { IMAGE_SAMPLE_CD_V4_V16, 724 },
    { IMAGE_SAMPLE_CD_V4_V2, 720 },
    { IMAGE_SAMPLE_CD_V4_V3, 721 },
    { IMAGE_SAMPLE_CD_V4_V4, 722 },
    { IMAGE_SAMPLE_CD_V4_V8, 723 },
    { IMAGE_SAMPLE_CD_V8_V16, 729 },
    { IMAGE_SAMPLE_CD_V8_V2, 725 },
    { IMAGE_SAMPLE_CD_V8_V3, 726 },
    { IMAGE_SAMPLE_CD_V8_V4, 727 },
    { IMAGE_SAMPLE_CD_V8_V8, 728 },
    { IMAGE_SAMPLE_CL_O_V1_V2, 815 },
    { IMAGE_SAMPLE_CL_O_V1_V3, 816 },
    { IMAGE_SAMPLE_CL_O_V1_V4, 817 },
    { IMAGE_SAMPLE_CL_O_V1_V8, 818 },
    { IMAGE_SAMPLE_CL_O_V2_V2, 819 },
    { IMAGE_SAMPLE_CL_O_V2_V3, 820 },
    { IMAGE_SAMPLE_CL_O_V2_V4, 821 },
    { IMAGE_SAMPLE_CL_O_V2_V8, 822 },
    { IMAGE_SAMPLE_CL_O_V3_V2, 823 },
    { IMAGE_SAMPLE_CL_O_V3_V3, 824 },
    { IMAGE_SAMPLE_CL_O_V3_V4, 825 },
    { IMAGE_SAMPLE_CL_O_V3_V8, 826 },
    { IMAGE_SAMPLE_CL_O_V4_V2, 827 },
    { IMAGE_SAMPLE_CL_O_V4_V3, 828 },
    { IMAGE_SAMPLE_CL_O_V4_V4, 829 },
    { IMAGE_SAMPLE_CL_O_V4_V8, 830 },
    { IMAGE_SAMPLE_CL_O_V8_V2, 831 },
    { IMAGE_SAMPLE_CL_O_V8_V3, 832 },
    { IMAGE_SAMPLE_CL_O_V8_V4, 833 },
    { IMAGE_SAMPLE_CL_O_V8_V8, 834 },
    { IMAGE_SAMPLE_CL_V1_V1, 795 },
    { IMAGE_SAMPLE_CL_V1_V2, 796 },
    { IMAGE_SAMPLE_CL_V1_V3, 797 },
    { IMAGE_SAMPLE_CL_V1_V4, 798 },
    { IMAGE_SAMPLE_CL_V2_V1, 799 },
    { IMAGE_SAMPLE_CL_V2_V2, 800 },
    { IMAGE_SAMPLE_CL_V2_V3, 801 },
    { IMAGE_SAMPLE_CL_V2_V4, 802 },
    { IMAGE_SAMPLE_CL_V3_V1, 803 },
    { IMAGE_SAMPLE_CL_V3_V2, 804 },
    { IMAGE_SAMPLE_CL_V3_V3, 805 },
    { IMAGE_SAMPLE_CL_V3_V4, 806 },
    { IMAGE_SAMPLE_CL_V4_V1, 807 },
    { IMAGE_SAMPLE_CL_V4_V2, 808 },
    { IMAGE_SAMPLE_CL_V4_V3, 809 },
    { IMAGE_SAMPLE_CL_V4_V4, 810 },
    { IMAGE_SAMPLE_CL_V8_V1, 811 },
    { IMAGE_SAMPLE_CL_V8_V2, 812 },
    { IMAGE_SAMPLE_CL_V8_V3, 813 },
    { IMAGE_SAMPLE_CL_V8_V4, 814 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V4, 865 },
    { IMAGE_SAMPLE_C_B_CL_O_V1_V8, 866 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V4, 867 },
    { IMAGE_SAMPLE_C_B_CL_O_V2_V8, 868 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V4, 869 },
    { IMAGE_SAMPLE_C_B_CL_O_V3_V8, 870 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V4, 871 },
    { IMAGE_SAMPLE_C_B_CL_O_V4_V8, 872 },
    { IMAGE_SAMPLE_C_B_CL_O_V8_V4, 873 },
    { IMAGE_SAMPLE_C_B_CL_O_V8_V8, 874 },
    { IMAGE_SAMPLE_C_B_CL_V1_V3, 850 },
    { IMAGE_SAMPLE_C_B_CL_V1_V4, 851 },
    { IMAGE_SAMPLE_C_B_CL_V1_V8, 852 },
    { IMAGE_SAMPLE_C_B_CL_V2_V3, 853 },
    { IMAGE_SAMPLE_C_B_CL_V2_V4, 854 },
    { IMAGE_SAMPLE_C_B_CL_V2_V8, 855 },
    { IMAGE_SAMPLE_C_B_CL_V3_V3, 856 },
    { IMAGE_SAMPLE_C_B_CL_V3_V4, 857 },
    { IMAGE_SAMPLE_C_B_CL_V3_V8, 858 },
    { IMAGE_SAMPLE_C_B_CL_V4_V3, 859 },
    { IMAGE_SAMPLE_C_B_CL_V4_V4, 860 },
    { IMAGE_SAMPLE_C_B_CL_V4_V8, 861 },
    { IMAGE_SAMPLE_C_B_CL_V8_V3, 862 },
    { IMAGE_SAMPLE_C_B_CL_V8_V4, 863 },
    { IMAGE_SAMPLE_C_B_CL_V8_V8, 864 },
    { IMAGE_SAMPLE_C_B_O_V1_V4, 875 },
    { IMAGE_SAMPLE_C_B_O_V1_V8, 876 },
    { IMAGE_SAMPLE_C_B_O_V2_V4, 877 },
    { IMAGE_SAMPLE_C_B_O_V2_V8, 878 },
    { IMAGE_SAMPLE_C_B_O_V3_V4, 879 },
    { IMAGE_SAMPLE_C_B_O_V3_V8, 880 },
    { IMAGE_SAMPLE_C_B_O_V4_V4, 881 },
    { IMAGE_SAMPLE_C_B_O_V4_V8, 882 },
    { IMAGE_SAMPLE_C_B_O_V8_V4, 883 },
    { IMAGE_SAMPLE_C_B_O_V8_V8, 884 },
    { IMAGE_SAMPLE_C_B_V1_V3, 835 },
    { IMAGE_SAMPLE_C_B_V1_V4, 836 },
    { IMAGE_SAMPLE_C_B_V1_V8, 837 },
    { IMAGE_SAMPLE_C_B_V2_V3, 838 },
    { IMAGE_SAMPLE_C_B_V2_V4, 839 },
    { IMAGE_SAMPLE_C_B_V2_V8, 840 },
    { IMAGE_SAMPLE_C_B_V3_V3, 841 },
    { IMAGE_SAMPLE_C_B_V3_V4, 842 },
    { IMAGE_SAMPLE_C_B_V3_V8, 843 },
    { IMAGE_SAMPLE_C_B_V4_V3, 844 },
    { IMAGE_SAMPLE_C_B_V4_V4, 845 },
    { IMAGE_SAMPLE_C_B_V4_V8, 846 },
    { IMAGE_SAMPLE_C_B_V8_V3, 847 },
    { IMAGE_SAMPLE_C_B_V8_V4, 848 },
    { IMAGE_SAMPLE_C_B_V8_V8, 849 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V16, 927 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V4, 925 },
    { IMAGE_SAMPLE_C_CD_CL_O_V1_V8, 926 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V16, 930 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V4, 928 },
    { IMAGE_SAMPLE_C_CD_CL_O_V2_V8, 929 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V16, 933 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V4, 931 },
    { IMAGE_SAMPLE_C_CD_CL_O_V3_V8, 932 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V16, 936 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V4, 934 },
    { IMAGE_SAMPLE_C_CD_CL_O_V4_V8, 935 },
    { IMAGE_SAMPLE_C_CD_CL_O_V8_V16, 939 },
    { IMAGE_SAMPLE_C_CD_CL_O_V8_V4, 937 },
    { IMAGE_SAMPLE_C_CD_CL_O_V8_V8, 938 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V16, 908 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V3, 905 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V4, 906 },
    { IMAGE_SAMPLE_C_CD_CL_V1_V8, 907 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V16, 912 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V3, 909 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V4, 910 },
    { IMAGE_SAMPLE_C_CD_CL_V2_V8, 911 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V16, 916 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V3, 913 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V4, 914 },
    { IMAGE_SAMPLE_C_CD_CL_V3_V8, 915 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V16, 920 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V3, 917 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V4, 918 },
    { IMAGE_SAMPLE_C_CD_CL_V4_V8, 919 },
    { IMAGE_SAMPLE_C_CD_CL_V8_V16, 924 },
    { IMAGE_SAMPLE_C_CD_CL_V8_V3, 921 },
    { IMAGE_SAMPLE_C_CD_CL_V8_V4, 922 },
    { IMAGE_SAMPLE_C_CD_CL_V8_V8, 923 },
    { IMAGE_SAMPLE_C_CD_O_V1_V16, 942 },
    { IMAGE_SAMPLE_C_CD_O_V1_V4, 940 },
    { IMAGE_SAMPLE_C_CD_O_V1_V8, 941 },
    { IMAGE_SAMPLE_C_CD_O_V2_V16, 945 },
    { IMAGE_SAMPLE_C_CD_O_V2_V4, 943 },
    { IMAGE_SAMPLE_C_CD_O_V2_V8, 944 },
    { IMAGE_SAMPLE_C_CD_O_V3_V16, 948 },
    { IMAGE_SAMPLE_C_CD_O_V3_V4, 946 },
    { IMAGE_SAMPLE_C_CD_O_V3_V8, 947 },
    { IMAGE_SAMPLE_C_CD_O_V4_V16, 951 },
    { IMAGE_SAMPLE_C_CD_O_V4_V4, 949 },
    { IMAGE_SAMPLE_C_CD_O_V4_V8, 950 },
    { IMAGE_SAMPLE_C_CD_O_V8_V16, 954 },
    { IMAGE_SAMPLE_C_CD_O_V8_V4, 952 },
    { IMAGE_SAMPLE_C_CD_O_V8_V8, 953 },
    { IMAGE_SAMPLE_C_CD_V1_V16, 888 },
    { IMAGE_SAMPLE_C_CD_V1_V3, 885 },
    { IMAGE_SAMPLE_C_CD_V1_V4, 886 },
    { IMAGE_SAMPLE_C_CD_V1_V8, 887 },
    { IMAGE_SAMPLE_C_CD_V2_V16, 892 },
    { IMAGE_SAMPLE_C_CD_V2_V3, 889 },
    { IMAGE_SAMPLE_C_CD_V2_V4, 890 },
    { IMAGE_SAMPLE_C_CD_V2_V8, 891 },
    { IMAGE_SAMPLE_C_CD_V3_V16, 896 },
    { IMAGE_SAMPLE_C_CD_V3_V3, 893 },
    { IMAGE_SAMPLE_C_CD_V3_V4, 894 },
    { IMAGE_SAMPLE_C_CD_V3_V8, 895 },
    { IMAGE_SAMPLE_C_CD_V4_V16, 900 },
    { IMAGE_SAMPLE_C_CD_V4_V3, 897 },
    { IMAGE_SAMPLE_C_CD_V4_V4, 898 },
    { IMAGE_SAMPLE_C_CD_V4_V8, 899 },
    { IMAGE_SAMPLE_C_CD_V8_V16, 904 },
    { IMAGE_SAMPLE_C_CD_V8_V3, 901 },
    { IMAGE_SAMPLE_C_CD_V8_V4, 902 },
    { IMAGE_SAMPLE_C_CD_V8_V8, 903 },
    { IMAGE_SAMPLE_C_CL_O_V1_V3, 975 },
    { IMAGE_SAMPLE_C_CL_O_V1_V4, 976 },
    { IMAGE_SAMPLE_C_CL_O_V1_V8, 977 },
    { IMAGE_SAMPLE_C_CL_O_V2_V3, 978 },
    { IMAGE_SAMPLE_C_CL_O_V2_V4, 979 },
    { IMAGE_SAMPLE_C_CL_O_V2_V8, 980 },
    { IMAGE_SAMPLE_C_CL_O_V3_V3, 981 },
    { IMAGE_SAMPLE_C_CL_O_V3_V4, 982 },
    { IMAGE_SAMPLE_C_CL_O_V3_V8, 983 },
    { IMAGE_SAMPLE_C_CL_O_V4_V3, 984 },
    { IMAGE_SAMPLE_C_CL_O_V4_V4, 985 },
    { IMAGE_SAMPLE_C_CL_O_V4_V8, 986 },
    { IMAGE_SAMPLE_C_CL_O_V8_V3, 987 },
    { IMAGE_SAMPLE_C_CL_O_V8_V4, 988 },
    { IMAGE_SAMPLE_C_CL_O_V8_V8, 989 },
    { IMAGE_SAMPLE_C_CL_V1_V2, 955 },
    { IMAGE_SAMPLE_C_CL_V1_V3, 956 },
    { IMAGE_SAMPLE_C_CL_V1_V4, 957 },
    { IMAGE_SAMPLE_C_CL_V1_V8, 958 },
    { IMAGE_SAMPLE_C_CL_V2_V2, 959 },
    { IMAGE_SAMPLE_C_CL_V2_V3, 960 },
    { IMAGE_SAMPLE_C_CL_V2_V4, 961 },
    { IMAGE_SAMPLE_C_CL_V2_V8, 962 },
    { IMAGE_SAMPLE_C_CL_V3_V2, 963 },
    { IMAGE_SAMPLE_C_CL_V3_V3, 964 },
    { IMAGE_SAMPLE_C_CL_V3_V4, 965 },
    { IMAGE_SAMPLE_C_CL_V3_V8, 966 },
    { IMAGE_SAMPLE_C_CL_V4_V2, 967 },
    { IMAGE_SAMPLE_C_CL_V4_V3, 968 },
    { IMAGE_SAMPLE_C_CL_V4_V4, 969 },
    { IMAGE_SAMPLE_C_CL_V4_V8, 970 },
    { IMAGE_SAMPLE_C_CL_V8_V2, 971 },
    { IMAGE_SAMPLE_C_CL_V8_V3, 972 },
    { IMAGE_SAMPLE_C_CL_V8_V4, 973 },
    { IMAGE_SAMPLE_C_CL_V8_V8, 974 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V16, 1032 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V4, 1030 },
    { IMAGE_SAMPLE_C_D_CL_O_V1_V8, 1031 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V16, 1035 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V4, 1033 },
    { IMAGE_SAMPLE_C_D_CL_O_V2_V8, 1034 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V16, 1038 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V4, 1036 },
    { IMAGE_SAMPLE_C_D_CL_O_V3_V8, 1037 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V16, 1041 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V4, 1039 },
    { IMAGE_SAMPLE_C_D_CL_O_V4_V8, 1040 },
    { IMAGE_SAMPLE_C_D_CL_O_V8_V16, 1044 },
    { IMAGE_SAMPLE_C_D_CL_O_V8_V4, 1042 },
    { IMAGE_SAMPLE_C_D_CL_O_V8_V8, 1043 },
    { IMAGE_SAMPLE_C_D_CL_V1_V16, 1013 },
    { IMAGE_SAMPLE_C_D_CL_V1_V3, 1010 },
    { IMAGE_SAMPLE_C_D_CL_V1_V4, 1011 },
    { IMAGE_SAMPLE_C_D_CL_V1_V8, 1012 },
    { IMAGE_SAMPLE_C_D_CL_V2_V16, 1017 },
    { IMAGE_SAMPLE_C_D_CL_V2_V3, 1014 },
    { IMAGE_SAMPLE_C_D_CL_V2_V4, 1015 },
    { IMAGE_SAMPLE_C_D_CL_V2_V8, 1016 },
    { IMAGE_SAMPLE_C_D_CL_V3_V16, 1021 },
    { IMAGE_SAMPLE_C_D_CL_V3_V3, 1018 },
    { IMAGE_SAMPLE_C_D_CL_V3_V4, 1019 },
    { IMAGE_SAMPLE_C_D_CL_V3_V8, 1020 },
    { IMAGE_SAMPLE_C_D_CL_V4_V16, 1025 },
    { IMAGE_SAMPLE_C_D_CL_V4_V3, 1022 },
    { IMAGE_SAMPLE_C_D_CL_V4_V4, 1023 },
    { IMAGE_SAMPLE_C_D_CL_V4_V8, 1024 },
    { IMAGE_SAMPLE_C_D_CL_V8_V16, 1029 },
    { IMAGE_SAMPLE_C_D_CL_V8_V3, 1026 },
    { IMAGE_SAMPLE_C_D_CL_V8_V4, 1027 },
    { IMAGE_SAMPLE_C_D_CL_V8_V8, 1028 },
    { IMAGE_SAMPLE_C_D_O_V1_V16, 1047 },
    { IMAGE_SAMPLE_C_D_O_V1_V4, 1045 },
    { IMAGE_SAMPLE_C_D_O_V1_V8, 1046 },
    { IMAGE_SAMPLE_C_D_O_V2_V16, 1050 },
    { IMAGE_SAMPLE_C_D_O_V2_V4, 1048 },
    { IMAGE_SAMPLE_C_D_O_V2_V8, 1049 },
    { IMAGE_SAMPLE_C_D_O_V3_V16, 1053 },
    { IMAGE_SAMPLE_C_D_O_V3_V4, 1051 },
    { IMAGE_SAMPLE_C_D_O_V3_V8, 1052 },
    { IMAGE_SAMPLE_C_D_O_V4_V16, 1056 },
    { IMAGE_SAMPLE_C_D_O_V4_V4, 1054 },
    { IMAGE_SAMPLE_C_D_O_V4_V8, 1055 },
    { IMAGE_SAMPLE_C_D_O_V8_V16, 1059 },
    { IMAGE_SAMPLE_C_D_O_V8_V4, 1057 },
    { IMAGE_SAMPLE_C_D_O_V8_V8, 1058 },
    { IMAGE_SAMPLE_C_D_V1_V16, 993 },
    { IMAGE_SAMPLE_C_D_V1_V3, 990 },
    { IMAGE_SAMPLE_C_D_V1_V4, 991 },
    { IMAGE_SAMPLE_C_D_V1_V8, 992 },
    { IMAGE_SAMPLE_C_D_V2_V16, 997 },
    { IMAGE_SAMPLE_C_D_V2_V3, 994 },
    { IMAGE_SAMPLE_C_D_V2_V4, 995 },
    { IMAGE_SAMPLE_C_D_V2_V8, 996 },
    { IMAGE_SAMPLE_C_D_V3_V16, 1001 },
    { IMAGE_SAMPLE_C_D_V3_V3, 998 },
    { IMAGE_SAMPLE_C_D_V3_V4, 999 },
    { IMAGE_SAMPLE_C_D_V3_V8, 1000 },
    { IMAGE_SAMPLE_C_D_V4_V16, 1005 },
    { IMAGE_SAMPLE_C_D_V4_V3, 1002 },
    { IMAGE_SAMPLE_C_D_V4_V4, 1003 },
    { IMAGE_SAMPLE_C_D_V4_V8, 1004 },
    { IMAGE_SAMPLE_C_D_V8_V16, 1009 },
    { IMAGE_SAMPLE_C_D_V8_V3, 1006 },
    { IMAGE_SAMPLE_C_D_V8_V4, 1007 },
    { IMAGE_SAMPLE_C_D_V8_V8, 1008 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V3, 1095 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V4, 1096 },
    { IMAGE_SAMPLE_C_LZ_O_V1_V8, 1097 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V3, 1098 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V4, 1099 },
    { IMAGE_SAMPLE_C_LZ_O_V2_V8, 1100 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V3, 1101 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V4, 1102 },
    { IMAGE_SAMPLE_C_LZ_O_V3_V8, 1103 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V3, 1104 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V4, 1105 },
    { IMAGE_SAMPLE_C_LZ_O_V4_V8, 1106 },
    { IMAGE_SAMPLE_C_LZ_O_V8_V3, 1107 },
    { IMAGE_SAMPLE_C_LZ_O_V8_V4, 1108 },
    { IMAGE_SAMPLE_C_LZ_O_V8_V8, 1109 },
    { IMAGE_SAMPLE_C_LZ_V1_V2, 1080 },
    { IMAGE_SAMPLE_C_LZ_V1_V3, 1081 },
    { IMAGE_SAMPLE_C_LZ_V1_V4, 1082 },
    { IMAGE_SAMPLE_C_LZ_V2_V2, 1083 },
    { IMAGE_SAMPLE_C_LZ_V2_V3, 1084 },
    { IMAGE_SAMPLE_C_LZ_V2_V4, 1085 },
    { IMAGE_SAMPLE_C_LZ_V3_V2, 1086 },
    { IMAGE_SAMPLE_C_LZ_V3_V3, 1087 },
    { IMAGE_SAMPLE_C_LZ_V3_V4, 1088 },
    { IMAGE_SAMPLE_C_LZ_V4_V2, 1089 },
    { IMAGE_SAMPLE_C_LZ_V4_V3, 1090 },
    { IMAGE_SAMPLE_C_LZ_V4_V4, 1091 },
    { IMAGE_SAMPLE_C_LZ_V8_V2, 1092 },
    { IMAGE_SAMPLE_C_LZ_V8_V3, 1093 },
    { IMAGE_SAMPLE_C_LZ_V8_V4, 1094 },
    { IMAGE_SAMPLE_C_L_O_V1_V3, 1110 },
    { IMAGE_SAMPLE_C_L_O_V1_V4, 1111 },
    { IMAGE_SAMPLE_C_L_O_V1_V8, 1112 },
    { IMAGE_SAMPLE_C_L_O_V2_V3, 1113 },
    { IMAGE_SAMPLE_C_L_O_V2_V4, 1114 },
    { IMAGE_SAMPLE_C_L_O_V2_V8, 1115 },
    { IMAGE_SAMPLE_C_L_O_V3_V3, 1116 },
    { IMAGE_SAMPLE_C_L_O_V3_V4, 1117 },
    { IMAGE_SAMPLE_C_L_O_V3_V8, 1118 },
    { IMAGE_SAMPLE_C_L_O_V4_V3, 1119 },
    { IMAGE_SAMPLE_C_L_O_V4_V4, 1120 },
    { IMAGE_SAMPLE_C_L_O_V4_V8, 1121 },
    { IMAGE_SAMPLE_C_L_O_V8_V3, 1122 },
    { IMAGE_SAMPLE_C_L_O_V8_V4, 1123 },
    { IMAGE_SAMPLE_C_L_O_V8_V8, 1124 },
    { IMAGE_SAMPLE_C_L_V1_V2, 1060 },
    { IMAGE_SAMPLE_C_L_V1_V3, 1061 },
    { IMAGE_SAMPLE_C_L_V1_V4, 1062 },
    { IMAGE_SAMPLE_C_L_V1_V8, 1063 },
    { IMAGE_SAMPLE_C_L_V2_V2, 1064 },
    { IMAGE_SAMPLE_C_L_V2_V3, 1065 },
    { IMAGE_SAMPLE_C_L_V2_V4, 1066 },
    { IMAGE_SAMPLE_C_L_V2_V8, 1067 },
    { IMAGE_SAMPLE_C_L_V3_V2, 1068 },
    { IMAGE_SAMPLE_C_L_V3_V3, 1069 },
    { IMAGE_SAMPLE_C_L_V3_V4, 1070 },
    { IMAGE_SAMPLE_C_L_V3_V8, 1071 },
    { IMAGE_SAMPLE_C_L_V4_V2, 1072 },
    { IMAGE_SAMPLE_C_L_V4_V3, 1073 },
    { IMAGE_SAMPLE_C_L_V4_V4, 1074 },
    { IMAGE_SAMPLE_C_L_V4_V8, 1075 },
    { IMAGE_SAMPLE_C_L_V8_V2, 1076 },
    { IMAGE_SAMPLE_C_L_V8_V3, 1077 },
    { IMAGE_SAMPLE_C_L_V8_V4, 1078 },
    { IMAGE_SAMPLE_C_L_V8_V8, 1079 },
    { IMAGE_SAMPLE_C_O_V1_V3, 1125 },
    { IMAGE_SAMPLE_C_O_V1_V4, 1126 },
    { IMAGE_SAMPLE_C_O_V1_V8, 1127 },
    { IMAGE_SAMPLE_C_O_V2_V3, 1128 },
    { IMAGE_SAMPLE_C_O_V2_V4, 1129 },
    { IMAGE_SAMPLE_C_O_V2_V8, 1130 },
    { IMAGE_SAMPLE_C_O_V3_V3, 1131 },
    { IMAGE_SAMPLE_C_O_V3_V4, 1132 },
    { IMAGE_SAMPLE_C_O_V3_V8, 1133 },
    { IMAGE_SAMPLE_C_O_V4_V3, 1134 },
    { IMAGE_SAMPLE_C_O_V4_V4, 1135 },
    { IMAGE_SAMPLE_C_O_V4_V8, 1136 },
    { IMAGE_SAMPLE_C_O_V8_V3, 1137 },
    { IMAGE_SAMPLE_C_O_V8_V4, 1138 },
    { IMAGE_SAMPLE_C_O_V8_V8, 1139 },
    { IMAGE_SAMPLE_C_V1_V2, 690 },
    { IMAGE_SAMPLE_C_V1_V3, 691 },
    { IMAGE_SAMPLE_C_V1_V4, 692 },
    { IMAGE_SAMPLE_C_V2_V2, 693 },
    { IMAGE_SAMPLE_C_V2_V3, 694 },
    { IMAGE_SAMPLE_C_V2_V4, 695 },
    { IMAGE_SAMPLE_C_V3_V2, 696 },
    { IMAGE_SAMPLE_C_V3_V3, 697 },
    { IMAGE_SAMPLE_C_V3_V4, 698 },
    { IMAGE_SAMPLE_C_V4_V2, 699 },
    { IMAGE_SAMPLE_C_V4_V3, 700 },
    { IMAGE_SAMPLE_C_V4_V4, 701 },
    { IMAGE_SAMPLE_C_V8_V2, 702 },
    { IMAGE_SAMPLE_C_V8_V3, 703 },
    { IMAGE_SAMPLE_C_V8_V4, 704 },
    { IMAGE_SAMPLE_D_CL_O_V1_V16, 1193 },
    { IMAGE_SAMPLE_D_CL_O_V1_V3, 1190 },
    { IMAGE_SAMPLE_D_CL_O_V1_V4, 1191 },
    { IMAGE_SAMPLE_D_CL_O_V1_V8, 1192 },
    { IMAGE_SAMPLE_D_CL_O_V2_V16, 1197 },
    { IMAGE_SAMPLE_D_CL_O_V2_V3, 1194 },
    { IMAGE_SAMPLE_D_CL_O_V2_V4, 1195 },
    { IMAGE_SAMPLE_D_CL_O_V2_V8, 1196 },
    { IMAGE_SAMPLE_D_CL_O_V3_V16, 1201 },
    { IMAGE_SAMPLE_D_CL_O_V3_V3, 1198 },
    { IMAGE_SAMPLE_D_CL_O_V3_V4, 1199 },
    { IMAGE_SAMPLE_D_CL_O_V3_V8, 1200 },
    { IMAGE_SAMPLE_D_CL_O_V4_V16, 1205 },
    { IMAGE_SAMPLE_D_CL_O_V4_V3, 1202 },
    { IMAGE_SAMPLE_D_CL_O_V4_V4, 1203 },
    { IMAGE_SAMPLE_D_CL_O_V4_V8, 1204 },
    { IMAGE_SAMPLE_D_CL_O_V8_V16, 1209 },
    { IMAGE_SAMPLE_D_CL_O_V8_V3, 1206 },
    { IMAGE_SAMPLE_D_CL_O_V8_V4, 1207 },
    { IMAGE_SAMPLE_D_CL_O_V8_V8, 1208 },
    { IMAGE_SAMPLE_D_CL_V1_V16, 1169 },
    { IMAGE_SAMPLE_D_CL_V1_V2, 1165 },
    { IMAGE_SAMPLE_D_CL_V1_V3, 1166 },
    { IMAGE_SAMPLE_D_CL_V1_V4, 1167 },
    { IMAGE_SAMPLE_D_CL_V1_V8, 1168 },
    { IMAGE_SAMPLE_D_CL_V2_V16, 1174 },
    { IMAGE_SAMPLE_D_CL_V2_V2, 1170 },
    { IMAGE_SAMPLE_D_CL_V2_V3, 1171 },
    { IMAGE_SAMPLE_D_CL_V2_V4, 1172 },
    { IMAGE_SAMPLE_D_CL_V2_V8, 1173 },
    { IMAGE_SAMPLE_D_CL_V3_V16, 1179 },
    { IMAGE_SAMPLE_D_CL_V3_V2, 1175 },
    { IMAGE_SAMPLE_D_CL_V3_V3, 1176 },
    { IMAGE_SAMPLE_D_CL_V3_V4, 1177 },
    { IMAGE_SAMPLE_D_CL_V3_V8, 1178 },
    { IMAGE_SAMPLE_D_CL_V4_V16, 1184 },
    { IMAGE_SAMPLE_D_CL_V4_V2, 1180 },
    { IMAGE_SAMPLE_D_CL_V4_V3, 1181 },
    { IMAGE_SAMPLE_D_CL_V4_V4, 1182 },
    { IMAGE_SAMPLE_D_CL_V4_V8, 1183 },
    { IMAGE_SAMPLE_D_CL_V8_V16, 1189 },
    { IMAGE_SAMPLE_D_CL_V8_V2, 1185 },
    { IMAGE_SAMPLE_D_CL_V8_V3, 1186 },
    { IMAGE_SAMPLE_D_CL_V8_V4, 1187 },
    { IMAGE_SAMPLE_D_CL_V8_V8, 1188 },
    { IMAGE_SAMPLE_D_O_V1_V16, 1213 },
    { IMAGE_SAMPLE_D_O_V1_V3, 1210 },
    { IMAGE_SAMPLE_D_O_V1_V4, 1211 },
    { IMAGE_SAMPLE_D_O_V1_V8, 1212 },
    { IMAGE_SAMPLE_D_O_V2_V16, 1217 },
    { IMAGE_SAMPLE_D_O_V2_V3, 1214 },
    { IMAGE_SAMPLE_D_O_V2_V4, 1215 },
    { IMAGE_SAMPLE_D_O_V2_V8, 1216 },
    { IMAGE_SAMPLE_D_O_V3_V16, 1221 },
    { IMAGE_SAMPLE_D_O_V3_V3, 1218 },
    { IMAGE_SAMPLE_D_O_V3_V4, 1219 },
    { IMAGE_SAMPLE_D_O_V3_V8, 1220 },
    { IMAGE_SAMPLE_D_O_V4_V16, 1225 },
    { IMAGE_SAMPLE_D_O_V4_V3, 1222 },
    { IMAGE_SAMPLE_D_O_V4_V4, 1223 },
    { IMAGE_SAMPLE_D_O_V4_V8, 1224 },
    { IMAGE_SAMPLE_D_O_V8_V16, 1229 },
    { IMAGE_SAMPLE_D_O_V8_V3, 1226 },
    { IMAGE_SAMPLE_D_O_V8_V4, 1227 },
    { IMAGE_SAMPLE_D_O_V8_V8, 1228 },
    { IMAGE_SAMPLE_D_V1_V16, 1144 },
    { IMAGE_SAMPLE_D_V1_V2, 1140 },
    { IMAGE_SAMPLE_D_V1_V3, 1141 },
    { IMAGE_SAMPLE_D_V1_V4, 1142 },
    { IMAGE_SAMPLE_D_V1_V8, 1143 },
    { IMAGE_SAMPLE_D_V2_V16, 1149 },
    { IMAGE_SAMPLE_D_V2_V2, 1145 },
    { IMAGE_SAMPLE_D_V2_V3, 1146 },
    { IMAGE_SAMPLE_D_V2_V4, 1147 },
    { IMAGE_SAMPLE_D_V2_V8, 1148 },
    { IMAGE_SAMPLE_D_V3_V16, 1154 },
    { IMAGE_SAMPLE_D_V3_V2, 1150 },
    { IMAGE_SAMPLE_D_V3_V3, 1151 },
    { IMAGE_SAMPLE_D_V3_V4, 1152 },
    { IMAGE_SAMPLE_D_V3_V8, 1153 },
    { IMAGE_SAMPLE_D_V4_V16, 1159 },
    { IMAGE_SAMPLE_D_V4_V2, 1155 },
    { IMAGE_SAMPLE_D_V4_V3, 1156 },
    { IMAGE_SAMPLE_D_V4_V4, 1157 },
    { IMAGE_SAMPLE_D_V4_V8, 1158 },
    { IMAGE_SAMPLE_D_V8_V16, 1164 },
    { IMAGE_SAMPLE_D_V8_V2, 1160 },
    { IMAGE_SAMPLE_D_V8_V3, 1161 },
    { IMAGE_SAMPLE_D_V8_V4, 1162 },
    { IMAGE_SAMPLE_D_V8_V8, 1163 },
    { IMAGE_SAMPLE_LZ_O_V1_V2, 1270 },
    { IMAGE_SAMPLE_LZ_O_V1_V3, 1271 },
    { IMAGE_SAMPLE_LZ_O_V1_V4, 1272 },
    { IMAGE_SAMPLE_LZ_O_V2_V2, 1273 },
    { IMAGE_SAMPLE_LZ_O_V2_V3, 1274 },
    { IMAGE_SAMPLE_LZ_O_V2_V4, 1275 },
    { IMAGE_SAMPLE_LZ_O_V3_V2, 1276 },
    { IMAGE_SAMPLE_LZ_O_V3_V3, 1277 },
    { IMAGE_SAMPLE_LZ_O_V3_V4, 1278 },
    { IMAGE_SAMPLE_LZ_O_V4_V2, 1279 },
    { IMAGE_SAMPLE_LZ_O_V4_V3, 1280 },
    { IMAGE_SAMPLE_LZ_O_V4_V4, 1281 },
    { IMAGE_SAMPLE_LZ_O_V8_V2, 1282 },
    { IMAGE_SAMPLE_LZ_O_V8_V3, 1283 },
    { IMAGE_SAMPLE_LZ_O_V8_V4, 1284 },
    { IMAGE_SAMPLE_LZ_V1_V1, 1250 },
    { IMAGE_SAMPLE_LZ_V1_V2, 1251 },
    { IMAGE_SAMPLE_LZ_V1_V3, 1252 },
    { IMAGE_SAMPLE_LZ_V1_V4, 1253 },
    { IMAGE_SAMPLE_LZ_V2_V1, 1254 },
    { IMAGE_SAMPLE_LZ_V2_V2, 1255 },
    { IMAGE_SAMPLE_LZ_V2_V3, 1256 },
    { IMAGE_SAMPLE_LZ_V2_V4, 1257 },
    { IMAGE_SAMPLE_LZ_V3_V1, 1258 },
    { IMAGE_SAMPLE_LZ_V3_V2, 1259 },
    { IMAGE_SAMPLE_LZ_V3_V3, 1260 },
    { IMAGE_SAMPLE_LZ_V3_V4, 1261 },
    { IMAGE_SAMPLE_LZ_V4_V1, 1262 },
    { IMAGE_SAMPLE_LZ_V4_V2, 1263 },
    { IMAGE_SAMPLE_LZ_V4_V3, 1264 },
    { IMAGE_SAMPLE_LZ_V4_V4, 1265 },
    { IMAGE_SAMPLE_LZ_V8_V1, 1266 },
    { IMAGE_SAMPLE_LZ_V8_V2, 1267 },
    { IMAGE_SAMPLE_LZ_V8_V3, 1268 },
    { IMAGE_SAMPLE_LZ_V8_V4, 1269 },
    { IMAGE_SAMPLE_L_O_V1_V2, 1285 },
    { IMAGE_SAMPLE_L_O_V1_V3, 1286 },
    { IMAGE_SAMPLE_L_O_V1_V4, 1287 },
    { IMAGE_SAMPLE_L_O_V1_V8, 1288 },
    { IMAGE_SAMPLE_L_O_V2_V2, 1289 },
    { IMAGE_SAMPLE_L_O_V2_V3, 1290 },
    { IMAGE_SAMPLE_L_O_V2_V4, 1291 },
    { IMAGE_SAMPLE_L_O_V2_V8, 1292 },
    { IMAGE_SAMPLE_L_O_V3_V2, 1293 },
    { IMAGE_SAMPLE_L_O_V3_V3, 1294 },
    { IMAGE_SAMPLE_L_O_V3_V4, 1295 },
    { IMAGE_SAMPLE_L_O_V3_V8, 1296 },
    { IMAGE_SAMPLE_L_O_V4_V2, 1297 },
    { IMAGE_SAMPLE_L_O_V4_V3, 1298 },
    { IMAGE_SAMPLE_L_O_V4_V4, 1299 },
    { IMAGE_SAMPLE_L_O_V4_V8, 1300 },
    { IMAGE_SAMPLE_L_O_V8_V2, 1301 },
    { IMAGE_SAMPLE_L_O_V8_V3, 1302 },
    { IMAGE_SAMPLE_L_O_V8_V4, 1303 },
    { IMAGE_SAMPLE_L_O_V8_V8, 1304 },
    { IMAGE_SAMPLE_L_V1_V1, 1230 },
    { IMAGE_SAMPLE_L_V1_V2, 1231 },
    { IMAGE_SAMPLE_L_V1_V3, 1232 },
    { IMAGE_SAMPLE_L_V1_V4, 1233 },
    { IMAGE_SAMPLE_L_V2_V1, 1234 },
    { IMAGE_SAMPLE_L_V2_V2, 1235 },
    { IMAGE_SAMPLE_L_V2_V3, 1236 },
    { IMAGE_SAMPLE_L_V2_V4, 1237 },
    { IMAGE_SAMPLE_L_V3_V1, 1238 },
    { IMAGE_SAMPLE_L_V3_V2, 1239 },
    { IMAGE_SAMPLE_L_V3_V3, 1240 },
    { IMAGE_SAMPLE_L_V3_V4, 1241 },
    { IMAGE_SAMPLE_L_V4_V1, 1242 },
    { IMAGE_SAMPLE_L_V4_V2, 1243 },
    { IMAGE_SAMPLE_L_V4_V3, 1244 },
    { IMAGE_SAMPLE_L_V4_V4, 1245 },
    { IMAGE_SAMPLE_L_V8_V1, 1246 },
    { IMAGE_SAMPLE_L_V8_V2, 1247 },
    { IMAGE_SAMPLE_L_V8_V3, 1248 },
    { IMAGE_SAMPLE_L_V8_V4, 1249 },
    { IMAGE_SAMPLE_O_V1_V2, 1305 },
    { IMAGE_SAMPLE_O_V1_V3, 1306 },
    { IMAGE_SAMPLE_O_V1_V4, 1307 },
    { IMAGE_SAMPLE_O_V2_V2, 1308 },
    { IMAGE_SAMPLE_O_V2_V3, 1309 },
    { IMAGE_SAMPLE_O_V2_V4, 1310 },
    { IMAGE_SAMPLE_O_V3_V2, 1311 },
    { IMAGE_SAMPLE_O_V3_V3, 1312 },
    { IMAGE_SAMPLE_O_V3_V4, 1313 },
    { IMAGE_SAMPLE_O_V4_V2, 1314 },
    { IMAGE_SAMPLE_O_V4_V3, 1315 },
    { IMAGE_SAMPLE_O_V4_V4, 1316 },
    { IMAGE_SAMPLE_O_V8_V2, 1317 },
    { IMAGE_SAMPLE_O_V8_V3, 1318 },
    { IMAGE_SAMPLE_O_V8_V4, 1319 },
    { IMAGE_SAMPLE_V1_V1, 605 },
    { IMAGE_SAMPLE_V1_V2, 606 },
    { IMAGE_SAMPLE_V1_V3, 607 },
    { IMAGE_SAMPLE_V1_V4, 608 },
    { IMAGE_SAMPLE_V2_V1, 609 },
    { IMAGE_SAMPLE_V2_V2, 610 },
    { IMAGE_SAMPLE_V2_V3, 611 },
    { IMAGE_SAMPLE_V2_V4, 612 },
    { IMAGE_SAMPLE_V3_V1, 613 },
    { IMAGE_SAMPLE_V3_V2, 614 },
    { IMAGE_SAMPLE_V3_V3, 615 },
    { IMAGE_SAMPLE_V3_V4, 616 },
    { IMAGE_SAMPLE_V4_V1, 617 },
    { IMAGE_SAMPLE_V4_V2, 618 },
    { IMAGE_SAMPLE_V4_V3, 619 },
    { IMAGE_SAMPLE_V4_V4, 620 },
    { IMAGE_SAMPLE_V8_V1, 621 },
    { IMAGE_SAMPLE_V8_V2, 622 },
    { IMAGE_SAMPLE_V8_V3, 623 },
    { IMAGE_SAMPLE_V8_V4, 624 },
    { IMAGE_STORE_MIP_PCK_V1_V1, 1352 },
    { IMAGE_STORE_MIP_PCK_V1_V2, 1353 },
    { IMAGE_STORE_MIP_PCK_V1_V3, 1354 },
    { IMAGE_STORE_MIP_PCK_V1_V4, 1355 },
    { IMAGE_STORE_MIP_PCK_V2_V1, 1356 },
    { IMAGE_STORE_MIP_PCK_V2_V2, 1357 },
    { IMAGE_STORE_MIP_PCK_V2_V3, 1358 },
    { IMAGE_STORE_MIP_PCK_V2_V4, 1359 },
    { IMAGE_STORE_MIP_PCK_V3_V1, 1360 },
    { IMAGE_STORE_MIP_PCK_V3_V2, 1361 },
    { IMAGE_STORE_MIP_PCK_V3_V3, 1362 },
    { IMAGE_STORE_MIP_PCK_V3_V4, 1363 },
    { IMAGE_STORE_MIP_PCK_V4_V1, 1364 },
    { IMAGE_STORE_MIP_PCK_V4_V2, 1365 },
    { IMAGE_STORE_MIP_PCK_V4_V3, 1366 },
    { IMAGE_STORE_MIP_PCK_V4_V4, 1367 },
    { IMAGE_STORE_MIP_V1_V1, 1336 },
    { IMAGE_STORE_MIP_V1_V2, 1337 },
    { IMAGE_STORE_MIP_V1_V3, 1338 },
    { IMAGE_STORE_MIP_V1_V4, 1339 },
    { IMAGE_STORE_MIP_V2_V1, 1340 },
    { IMAGE_STORE_MIP_V2_V2, 1341 },
    { IMAGE_STORE_MIP_V2_V3, 1342 },
    { IMAGE_STORE_MIP_V2_V4, 1343 },
    { IMAGE_STORE_MIP_V3_V1, 1344 },
    { IMAGE_STORE_MIP_V3_V2, 1345 },
    { IMAGE_STORE_MIP_V3_V3, 1346 },
    { IMAGE_STORE_MIP_V3_V4, 1347 },
    { IMAGE_STORE_MIP_V4_V1, 1348 },
    { IMAGE_STORE_MIP_V4_V2, 1349 },
    { IMAGE_STORE_MIP_V4_V3, 1350 },
    { IMAGE_STORE_MIP_V4_V4, 1351 },
    { IMAGE_STORE_PCK_V1_V1, 1368 },
    { IMAGE_STORE_PCK_V1_V2, 1369 },
    { IMAGE_STORE_PCK_V1_V3, 1370 },
    { IMAGE_STORE_PCK_V1_V4, 1371 },
    { IMAGE_STORE_PCK_V2_V1, 1372 },
    { IMAGE_STORE_PCK_V2_V2, 1373 },
    { IMAGE_STORE_PCK_V2_V3, 1374 },
    { IMAGE_STORE_PCK_V2_V4, 1375 },
    { IMAGE_STORE_PCK_V3_V1, 1376 },
    { IMAGE_STORE_PCK_V3_V2, 1377 },
    { IMAGE_STORE_PCK_V3_V3, 1378 },
    { IMAGE_STORE_PCK_V3_V4, 1379 },
    { IMAGE_STORE_PCK_V4_V1, 1380 },
    { IMAGE_STORE_PCK_V4_V2, 1381 },
    { IMAGE_STORE_PCK_V4_V3, 1382 },
    { IMAGE_STORE_PCK_V4_V4, 1383 },
    { IMAGE_STORE_V1_V1, 1320 },
    { IMAGE_STORE_V1_V2, 1321 },
    { IMAGE_STORE_V1_V3, 1322 },
    { IMAGE_STORE_V1_V4, 1323 },
    { IMAGE_STORE_V2_V1, 1324 },
    { IMAGE_STORE_V2_V2, 1325 },
    { IMAGE_STORE_V2_V3, 1326 },
    { IMAGE_STORE_V2_V4, 1327 },
    { IMAGE_STORE_V3_V1, 1328 },
    { IMAGE_STORE_V3_V2, 1329 },
    { IMAGE_STORE_V3_V3, 1330 },
    { IMAGE_STORE_V3_V4, 1331 },
    { IMAGE_STORE_V4_V1, 1332 },
    { IMAGE_STORE_V4_V2, 1333 },
    { IMAGE_STORE_V4_V3, 1334 },
    { IMAGE_STORE_V4_V4, 1335 },
  };

  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &MIMGInfoTable[Idx->_index];
}
#endif

#ifdef GET_MIMGLZMappingTable_DECL
const MIMGLZMappingInfo *getMIMGLZMappingInfo(unsigned L);
#endif

#ifdef GET_MIMGLZMappingTable_IMPL
const MIMGLZMappingInfo MIMGLZMappingTable[] = {
  { IMAGE_GATHER4_C_L, IMAGE_GATHER4_C_LZ }, // 0
  { IMAGE_GATHER4_C_L_O, IMAGE_GATHER4_C_LZ_O }, // 1
  { IMAGE_GATHER4_L, IMAGE_GATHER4_LZ }, // 2
  { IMAGE_GATHER4_L_O, IMAGE_GATHER4_LZ_O }, // 3
  { IMAGE_SAMPLE_C_L, IMAGE_SAMPLE_C_LZ }, // 4
  { IMAGE_SAMPLE_C_L_O, IMAGE_SAMPLE_C_LZ_O }, // 5
  { IMAGE_SAMPLE_L, IMAGE_SAMPLE_LZ }, // 6
  { IMAGE_SAMPLE_L_O, IMAGE_SAMPLE_LZ_O }, // 7
 };

const MIMGLZMappingInfo *getMIMGLZMappingInfo(unsigned L) {
  struct KeyType {
    unsigned L;
  };
  KeyType Key = { L };
  auto Table = makeArrayRef(MIMGLZMappingTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MIMGLZMappingInfo &LHS, const KeyType &RHS) {
      if ((unsigned)LHS.L < (unsigned)RHS.L)
        return true;
      if ((unsigned)LHS.L > (unsigned)RHS.L)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.L != Idx->L)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_MUBUFInfoTable_DECL
const MUBUFInfo *getMUBUFOpcodeHelper(unsigned Opcode);
const MUBUFInfo *getMUBUFInfoFromBaseOpcodeAndDwords(unsigned BaseOpcode, uint8_t dwords);
const MUBUFInfo *getMUBUFInfoFromOpcode(unsigned Opcode);
#endif

#ifdef GET_MUBUFInfoTable_IMPL
const MUBUFInfo MUBUFInfoTable[] = {
  { BUFFER_ATOMIC_ADD_ADDR64, BUFFER_ATOMIC_ADD_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 0
  { BUFFER_ATOMIC_ADD_ADDR64_RTN, BUFFER_ATOMIC_ADD_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 1
  { BUFFER_ATOMIC_ADD_BOTHEN, BUFFER_ATOMIC_ADD_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 2
  { BUFFER_ATOMIC_ADD_BOTHEN_RTN, BUFFER_ATOMIC_ADD_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 3
  { BUFFER_ATOMIC_ADD_IDXEN, BUFFER_ATOMIC_ADD_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 4
  { BUFFER_ATOMIC_ADD_IDXEN_RTN, BUFFER_ATOMIC_ADD_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 5
  { BUFFER_ATOMIC_ADD_OFFEN, BUFFER_ATOMIC_ADD_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 6
  { BUFFER_ATOMIC_ADD_OFFEN_RTN, BUFFER_ATOMIC_ADD_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 7
  { BUFFER_ATOMIC_ADD_OFFSET, BUFFER_ATOMIC_ADD_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 8
  { BUFFER_ATOMIC_ADD_OFFSET_RTN, BUFFER_ATOMIC_ADD_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 9
  { BUFFER_ATOMIC_ADD_X2_ADDR64, BUFFER_ATOMIC_ADD_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 10
  { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 11
  { BUFFER_ATOMIC_ADD_X2_BOTHEN, BUFFER_ATOMIC_ADD_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 12
  { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 13
  { BUFFER_ATOMIC_ADD_X2_IDXEN, BUFFER_ATOMIC_ADD_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 14
  { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 15
  { BUFFER_ATOMIC_ADD_X2_OFFEN, BUFFER_ATOMIC_ADD_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 16
  { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 17
  { BUFFER_ATOMIC_ADD_X2_OFFSET, BUFFER_ATOMIC_ADD_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 18
  { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 19
  { BUFFER_ATOMIC_AND_ADDR64, BUFFER_ATOMIC_AND_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 20
  { BUFFER_ATOMIC_AND_ADDR64_RTN, BUFFER_ATOMIC_AND_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 21
  { BUFFER_ATOMIC_AND_BOTHEN, BUFFER_ATOMIC_AND_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 22
  { BUFFER_ATOMIC_AND_BOTHEN_RTN, BUFFER_ATOMIC_AND_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 23
  { BUFFER_ATOMIC_AND_IDXEN, BUFFER_ATOMIC_AND_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 24
  { BUFFER_ATOMIC_AND_IDXEN_RTN, BUFFER_ATOMIC_AND_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 25
  { BUFFER_ATOMIC_AND_OFFEN, BUFFER_ATOMIC_AND_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 26
  { BUFFER_ATOMIC_AND_OFFEN_RTN, BUFFER_ATOMIC_AND_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 27
  { BUFFER_ATOMIC_AND_OFFSET, BUFFER_ATOMIC_AND_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 28
  { BUFFER_ATOMIC_AND_OFFSET_RTN, BUFFER_ATOMIC_AND_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 29
  { BUFFER_ATOMIC_AND_X2_ADDR64, BUFFER_ATOMIC_AND_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 30
  { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 31
  { BUFFER_ATOMIC_AND_X2_BOTHEN, BUFFER_ATOMIC_AND_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 32
  { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 33
  { BUFFER_ATOMIC_AND_X2_IDXEN, BUFFER_ATOMIC_AND_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 34
  { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 35
  { BUFFER_ATOMIC_AND_X2_OFFEN, BUFFER_ATOMIC_AND_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 36
  { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 37
  { BUFFER_ATOMIC_AND_X2_OFFSET, BUFFER_ATOMIC_AND_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 38
  { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 39
  { BUFFER_ATOMIC_CMPSWAP_ADDR64, BUFFER_ATOMIC_CMPSWAP_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 40
  { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 41
  { BUFFER_ATOMIC_CMPSWAP_BOTHEN, BUFFER_ATOMIC_CMPSWAP_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 42
  { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 43
  { BUFFER_ATOMIC_CMPSWAP_IDXEN, BUFFER_ATOMIC_CMPSWAP_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 44
  { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 45
  { BUFFER_ATOMIC_CMPSWAP_OFFEN, BUFFER_ATOMIC_CMPSWAP_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 46
  { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 47
  { BUFFER_ATOMIC_CMPSWAP_OFFSET, BUFFER_ATOMIC_CMPSWAP_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 48
  { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 49
  { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 50
  { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 51
  { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 52
  { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 53
  { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 54
  { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 55
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 56
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 57
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 58
  { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 59
  { BUFFER_ATOMIC_DEC_ADDR64, BUFFER_ATOMIC_DEC_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 60
  { BUFFER_ATOMIC_DEC_ADDR64_RTN, BUFFER_ATOMIC_DEC_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 61
  { BUFFER_ATOMIC_DEC_BOTHEN, BUFFER_ATOMIC_DEC_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 62
  { BUFFER_ATOMIC_DEC_BOTHEN_RTN, BUFFER_ATOMIC_DEC_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 63
  { BUFFER_ATOMIC_DEC_IDXEN, BUFFER_ATOMIC_DEC_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 64
  { BUFFER_ATOMIC_DEC_IDXEN_RTN, BUFFER_ATOMIC_DEC_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 65
  { BUFFER_ATOMIC_DEC_OFFEN, BUFFER_ATOMIC_DEC_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 66
  { BUFFER_ATOMIC_DEC_OFFEN_RTN, BUFFER_ATOMIC_DEC_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 67
  { BUFFER_ATOMIC_DEC_OFFSET, BUFFER_ATOMIC_DEC_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 68
  { BUFFER_ATOMIC_DEC_OFFSET_RTN, BUFFER_ATOMIC_DEC_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 69
  { BUFFER_ATOMIC_DEC_X2_ADDR64, BUFFER_ATOMIC_DEC_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 70
  { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 71
  { BUFFER_ATOMIC_DEC_X2_BOTHEN, BUFFER_ATOMIC_DEC_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 72
  { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 73
  { BUFFER_ATOMIC_DEC_X2_IDXEN, BUFFER_ATOMIC_DEC_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 74
  { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 75
  { BUFFER_ATOMIC_DEC_X2_OFFEN, BUFFER_ATOMIC_DEC_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 76
  { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 77
  { BUFFER_ATOMIC_DEC_X2_OFFSET, BUFFER_ATOMIC_DEC_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 78
  { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 79
  { BUFFER_ATOMIC_INC_ADDR64, BUFFER_ATOMIC_INC_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 80
  { BUFFER_ATOMIC_INC_ADDR64_RTN, BUFFER_ATOMIC_INC_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 81
  { BUFFER_ATOMIC_INC_BOTHEN, BUFFER_ATOMIC_INC_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 82
  { BUFFER_ATOMIC_INC_BOTHEN_RTN, BUFFER_ATOMIC_INC_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 83
  { BUFFER_ATOMIC_INC_IDXEN, BUFFER_ATOMIC_INC_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 84
  { BUFFER_ATOMIC_INC_IDXEN_RTN, BUFFER_ATOMIC_INC_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 85
  { BUFFER_ATOMIC_INC_OFFEN, BUFFER_ATOMIC_INC_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 86
  { BUFFER_ATOMIC_INC_OFFEN_RTN, BUFFER_ATOMIC_INC_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 87
  { BUFFER_ATOMIC_INC_OFFSET, BUFFER_ATOMIC_INC_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 88
  { BUFFER_ATOMIC_INC_OFFSET_RTN, BUFFER_ATOMIC_INC_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 89
  { BUFFER_ATOMIC_INC_X2_ADDR64, BUFFER_ATOMIC_INC_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 90
  { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 91
  { BUFFER_ATOMIC_INC_X2_BOTHEN, BUFFER_ATOMIC_INC_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 92
  { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 93
  { BUFFER_ATOMIC_INC_X2_IDXEN, BUFFER_ATOMIC_INC_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 94
  { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 95
  { BUFFER_ATOMIC_INC_X2_OFFEN, BUFFER_ATOMIC_INC_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 96
  { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 97
  { BUFFER_ATOMIC_INC_X2_OFFSET, BUFFER_ATOMIC_INC_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 98
  { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 99
  { BUFFER_ATOMIC_OR_ADDR64, BUFFER_ATOMIC_OR_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 100
  { BUFFER_ATOMIC_OR_ADDR64_RTN, BUFFER_ATOMIC_OR_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 101
  { BUFFER_ATOMIC_OR_BOTHEN, BUFFER_ATOMIC_OR_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 102
  { BUFFER_ATOMIC_OR_BOTHEN_RTN, BUFFER_ATOMIC_OR_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 103
  { BUFFER_ATOMIC_OR_IDXEN, BUFFER_ATOMIC_OR_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 104
  { BUFFER_ATOMIC_OR_IDXEN_RTN, BUFFER_ATOMIC_OR_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 105
  { BUFFER_ATOMIC_OR_OFFEN, BUFFER_ATOMIC_OR_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 106
  { BUFFER_ATOMIC_OR_OFFEN_RTN, BUFFER_ATOMIC_OR_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 107
  { BUFFER_ATOMIC_OR_OFFSET, BUFFER_ATOMIC_OR_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 108
  { BUFFER_ATOMIC_OR_OFFSET_RTN, BUFFER_ATOMIC_OR_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 109
  { BUFFER_ATOMIC_OR_X2_ADDR64, BUFFER_ATOMIC_OR_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 110
  { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 111
  { BUFFER_ATOMIC_OR_X2_BOTHEN, BUFFER_ATOMIC_OR_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 112
  { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 113
  { BUFFER_ATOMIC_OR_X2_IDXEN, BUFFER_ATOMIC_OR_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 114
  { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 115
  { BUFFER_ATOMIC_OR_X2_OFFEN, BUFFER_ATOMIC_OR_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 116
  { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 117
  { BUFFER_ATOMIC_OR_X2_OFFSET, BUFFER_ATOMIC_OR_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 118
  { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 119
  { BUFFER_ATOMIC_SMAX_ADDR64, BUFFER_ATOMIC_SMAX_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 120
  { BUFFER_ATOMIC_SMAX_ADDR64_RTN, BUFFER_ATOMIC_SMAX_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 121
  { BUFFER_ATOMIC_SMAX_BOTHEN, BUFFER_ATOMIC_SMAX_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 122
  { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 123
  { BUFFER_ATOMIC_SMAX_IDXEN, BUFFER_ATOMIC_SMAX_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 124
  { BUFFER_ATOMIC_SMAX_IDXEN_RTN, BUFFER_ATOMIC_SMAX_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 125
  { BUFFER_ATOMIC_SMAX_OFFEN, BUFFER_ATOMIC_SMAX_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 126
  { BUFFER_ATOMIC_SMAX_OFFEN_RTN, BUFFER_ATOMIC_SMAX_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 127
  { BUFFER_ATOMIC_SMAX_OFFSET, BUFFER_ATOMIC_SMAX_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 128
  { BUFFER_ATOMIC_SMAX_OFFSET_RTN, BUFFER_ATOMIC_SMAX_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 129
  { BUFFER_ATOMIC_SMAX_X2_ADDR64, BUFFER_ATOMIC_SMAX_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 130
  { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 131
  { BUFFER_ATOMIC_SMAX_X2_BOTHEN, BUFFER_ATOMIC_SMAX_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 132
  { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 133
  { BUFFER_ATOMIC_SMAX_X2_IDXEN, BUFFER_ATOMIC_SMAX_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 134
  { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 135
  { BUFFER_ATOMIC_SMAX_X2_OFFEN, BUFFER_ATOMIC_SMAX_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 136
  { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 137
  { BUFFER_ATOMIC_SMAX_X2_OFFSET, BUFFER_ATOMIC_SMAX_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 138
  { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 139
  { BUFFER_ATOMIC_SMIN_ADDR64, BUFFER_ATOMIC_SMIN_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 140
  { BUFFER_ATOMIC_SMIN_ADDR64_RTN, BUFFER_ATOMIC_SMIN_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 141
  { BUFFER_ATOMIC_SMIN_BOTHEN, BUFFER_ATOMIC_SMIN_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 142
  { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 143
  { BUFFER_ATOMIC_SMIN_IDXEN, BUFFER_ATOMIC_SMIN_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 144
  { BUFFER_ATOMIC_SMIN_IDXEN_RTN, BUFFER_ATOMIC_SMIN_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 145
  { BUFFER_ATOMIC_SMIN_OFFEN, BUFFER_ATOMIC_SMIN_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 146
  { BUFFER_ATOMIC_SMIN_OFFEN_RTN, BUFFER_ATOMIC_SMIN_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 147
  { BUFFER_ATOMIC_SMIN_OFFSET, BUFFER_ATOMIC_SMIN_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 148
  { BUFFER_ATOMIC_SMIN_OFFSET_RTN, BUFFER_ATOMIC_SMIN_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 149
  { BUFFER_ATOMIC_SMIN_X2_ADDR64, BUFFER_ATOMIC_SMIN_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 150
  { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 151
  { BUFFER_ATOMIC_SMIN_X2_BOTHEN, BUFFER_ATOMIC_SMIN_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 152
  { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 153
  { BUFFER_ATOMIC_SMIN_X2_IDXEN, BUFFER_ATOMIC_SMIN_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 154
  { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 155
  { BUFFER_ATOMIC_SMIN_X2_OFFEN, BUFFER_ATOMIC_SMIN_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 156
  { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 157
  { BUFFER_ATOMIC_SMIN_X2_OFFSET, BUFFER_ATOMIC_SMIN_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 158
  { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 159
  { BUFFER_ATOMIC_SUB_ADDR64, BUFFER_ATOMIC_SUB_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 160
  { BUFFER_ATOMIC_SUB_ADDR64_RTN, BUFFER_ATOMIC_SUB_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 161
  { BUFFER_ATOMIC_SUB_BOTHEN, BUFFER_ATOMIC_SUB_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 162
  { BUFFER_ATOMIC_SUB_BOTHEN_RTN, BUFFER_ATOMIC_SUB_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 163
  { BUFFER_ATOMIC_SUB_IDXEN, BUFFER_ATOMIC_SUB_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 164
  { BUFFER_ATOMIC_SUB_IDXEN_RTN, BUFFER_ATOMIC_SUB_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 165
  { BUFFER_ATOMIC_SUB_OFFEN, BUFFER_ATOMIC_SUB_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 166
  { BUFFER_ATOMIC_SUB_OFFEN_RTN, BUFFER_ATOMIC_SUB_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 167
  { BUFFER_ATOMIC_SUB_OFFSET, BUFFER_ATOMIC_SUB_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 168
  { BUFFER_ATOMIC_SUB_OFFSET_RTN, BUFFER_ATOMIC_SUB_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 169
  { BUFFER_ATOMIC_SUB_X2_ADDR64, BUFFER_ATOMIC_SUB_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 170
  { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 171
  { BUFFER_ATOMIC_SUB_X2_BOTHEN, BUFFER_ATOMIC_SUB_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 172
  { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 173
  { BUFFER_ATOMIC_SUB_X2_IDXEN, BUFFER_ATOMIC_SUB_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 174
  { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 175
  { BUFFER_ATOMIC_SUB_X2_OFFEN, BUFFER_ATOMIC_SUB_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 176
  { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 177
  { BUFFER_ATOMIC_SUB_X2_OFFSET, BUFFER_ATOMIC_SUB_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 178
  { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 179
  { BUFFER_ATOMIC_SWAP_ADDR64, BUFFER_ATOMIC_SWAP_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 180
  { BUFFER_ATOMIC_SWAP_ADDR64_RTN, BUFFER_ATOMIC_SWAP_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 181
  { BUFFER_ATOMIC_SWAP_BOTHEN, BUFFER_ATOMIC_SWAP_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 182
  { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 183
  { BUFFER_ATOMIC_SWAP_IDXEN, BUFFER_ATOMIC_SWAP_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 184
  { BUFFER_ATOMIC_SWAP_IDXEN_RTN, BUFFER_ATOMIC_SWAP_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 185
  { BUFFER_ATOMIC_SWAP_OFFEN, BUFFER_ATOMIC_SWAP_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 186
  { BUFFER_ATOMIC_SWAP_OFFEN_RTN, BUFFER_ATOMIC_SWAP_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 187
  { BUFFER_ATOMIC_SWAP_OFFSET, BUFFER_ATOMIC_SWAP_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 188
  { BUFFER_ATOMIC_SWAP_OFFSET_RTN, BUFFER_ATOMIC_SWAP_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 189
  { BUFFER_ATOMIC_SWAP_X2_ADDR64, BUFFER_ATOMIC_SWAP_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 190
  { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 191
  { BUFFER_ATOMIC_SWAP_X2_BOTHEN, BUFFER_ATOMIC_SWAP_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 192
  { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 193
  { BUFFER_ATOMIC_SWAP_X2_IDXEN, BUFFER_ATOMIC_SWAP_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 194
  { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 195
  { BUFFER_ATOMIC_SWAP_X2_OFFEN, BUFFER_ATOMIC_SWAP_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 196
  { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 197
  { BUFFER_ATOMIC_SWAP_X2_OFFSET, BUFFER_ATOMIC_SWAP_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 198
  { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 199
  { BUFFER_ATOMIC_UMAX_ADDR64, BUFFER_ATOMIC_UMAX_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 200
  { BUFFER_ATOMIC_UMAX_ADDR64_RTN, BUFFER_ATOMIC_UMAX_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 201
  { BUFFER_ATOMIC_UMAX_BOTHEN, BUFFER_ATOMIC_UMAX_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 202
  { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 203
  { BUFFER_ATOMIC_UMAX_IDXEN, BUFFER_ATOMIC_UMAX_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 204
  { BUFFER_ATOMIC_UMAX_IDXEN_RTN, BUFFER_ATOMIC_UMAX_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 205
  { BUFFER_ATOMIC_UMAX_OFFEN, BUFFER_ATOMIC_UMAX_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 206
  { BUFFER_ATOMIC_UMAX_OFFEN_RTN, BUFFER_ATOMIC_UMAX_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 207
  { BUFFER_ATOMIC_UMAX_OFFSET, BUFFER_ATOMIC_UMAX_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 208
  { BUFFER_ATOMIC_UMAX_OFFSET_RTN, BUFFER_ATOMIC_UMAX_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 209
  { BUFFER_ATOMIC_UMAX_X2_ADDR64, BUFFER_ATOMIC_UMAX_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 210
  { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 211
  { BUFFER_ATOMIC_UMAX_X2_BOTHEN, BUFFER_ATOMIC_UMAX_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 212
  { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 213
  { BUFFER_ATOMIC_UMAX_X2_IDXEN, BUFFER_ATOMIC_UMAX_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 214
  { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 215
  { BUFFER_ATOMIC_UMAX_X2_OFFEN, BUFFER_ATOMIC_UMAX_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 216
  { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 217
  { BUFFER_ATOMIC_UMAX_X2_OFFSET, BUFFER_ATOMIC_UMAX_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 218
  { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 219
  { BUFFER_ATOMIC_UMIN_ADDR64, BUFFER_ATOMIC_UMIN_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 220
  { BUFFER_ATOMIC_UMIN_ADDR64_RTN, BUFFER_ATOMIC_UMIN_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 221
  { BUFFER_ATOMIC_UMIN_BOTHEN, BUFFER_ATOMIC_UMIN_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 222
  { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 223
  { BUFFER_ATOMIC_UMIN_IDXEN, BUFFER_ATOMIC_UMIN_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 224
  { BUFFER_ATOMIC_UMIN_IDXEN_RTN, BUFFER_ATOMIC_UMIN_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 225
  { BUFFER_ATOMIC_UMIN_OFFEN, BUFFER_ATOMIC_UMIN_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 226
  { BUFFER_ATOMIC_UMIN_OFFEN_RTN, BUFFER_ATOMIC_UMIN_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 227
  { BUFFER_ATOMIC_UMIN_OFFSET, BUFFER_ATOMIC_UMIN_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 228
  { BUFFER_ATOMIC_UMIN_OFFSET_RTN, BUFFER_ATOMIC_UMIN_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 229
  { BUFFER_ATOMIC_UMIN_X2_ADDR64, BUFFER_ATOMIC_UMIN_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 230
  { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 231
  { BUFFER_ATOMIC_UMIN_X2_BOTHEN, BUFFER_ATOMIC_UMIN_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 232
  { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 233
  { BUFFER_ATOMIC_UMIN_X2_IDXEN, BUFFER_ATOMIC_UMIN_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 234
  { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 235
  { BUFFER_ATOMIC_UMIN_X2_OFFEN, BUFFER_ATOMIC_UMIN_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 236
  { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 237
  { BUFFER_ATOMIC_UMIN_X2_OFFSET, BUFFER_ATOMIC_UMIN_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 238
  { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 239
  { BUFFER_ATOMIC_XOR_ADDR64, BUFFER_ATOMIC_XOR_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 240
  { BUFFER_ATOMIC_XOR_ADDR64_RTN, BUFFER_ATOMIC_XOR_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 241
  { BUFFER_ATOMIC_XOR_BOTHEN, BUFFER_ATOMIC_XOR_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 242
  { BUFFER_ATOMIC_XOR_BOTHEN_RTN, BUFFER_ATOMIC_XOR_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 243
  { BUFFER_ATOMIC_XOR_IDXEN, BUFFER_ATOMIC_XOR_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 244
  { BUFFER_ATOMIC_XOR_IDXEN_RTN, BUFFER_ATOMIC_XOR_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 245
  { BUFFER_ATOMIC_XOR_OFFEN, BUFFER_ATOMIC_XOR_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 246
  { BUFFER_ATOMIC_XOR_OFFEN_RTN, BUFFER_ATOMIC_XOR_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 247
  { BUFFER_ATOMIC_XOR_OFFSET, BUFFER_ATOMIC_XOR_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 248
  { BUFFER_ATOMIC_XOR_OFFSET_RTN, BUFFER_ATOMIC_XOR_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 249
  { BUFFER_ATOMIC_XOR_X2_ADDR64, BUFFER_ATOMIC_XOR_X2_ADDR64, 0x0, 0x1, 0x1, 0x1 }, // 250
  { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 0x0, 0x1, 0x1, 0x1 }, // 251
  { BUFFER_ATOMIC_XOR_X2_BOTHEN, BUFFER_ATOMIC_XOR_X2_BOTHEN, 0x0, 0x1, 0x1, 0x1 }, // 252
  { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 253
  { BUFFER_ATOMIC_XOR_X2_IDXEN, BUFFER_ATOMIC_XOR_X2_IDXEN, 0x0, 0x1, 0x1, 0x1 }, // 254
  { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 255
  { BUFFER_ATOMIC_XOR_X2_OFFEN, BUFFER_ATOMIC_XOR_X2_OFFEN, 0x0, 0x1, 0x1, 0x1 }, // 256
  { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 0x0, 0x1, 0x1, 0x1 }, // 257
  { BUFFER_ATOMIC_XOR_X2_OFFSET, BUFFER_ATOMIC_XOR_X2_OFFSET, 0x0, 0x0, 0x1, 0x1 }, // 258
  { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 0x0, 0x0, 0x1, 0x1 }, // 259
  { BUFFER_LOAD_DWORDX2_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 260
  { BUFFER_LOAD_DWORDX2_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 261
  { BUFFER_LOAD_DWORDX2_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 262
  { BUFFER_LOAD_DWORDX2_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 263
  { BUFFER_LOAD_DWORDX2_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 264
  { BUFFER_LOAD_DWORDX2_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 265
  { BUFFER_LOAD_DWORDX2_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 266
  { BUFFER_LOAD_DWORDX2_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 267
  { BUFFER_LOAD_DWORDX2_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 268
  { BUFFER_LOAD_DWORDX2_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 269
  { BUFFER_LOAD_DWORDX2_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 270
  { BUFFER_LOAD_DWORDX2_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 271
  { BUFFER_LOAD_DWORDX2_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 272
  { BUFFER_LOAD_DWORDX2_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 273
  { BUFFER_LOAD_DWORDX2_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 274
  { BUFFER_LOAD_DWORDX2_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 275
  { BUFFER_LOAD_DWORDX2_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 276
  { BUFFER_LOAD_DWORDX2_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 277
  { BUFFER_LOAD_DWORDX3_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 278
  { BUFFER_LOAD_DWORDX3_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 279
  { BUFFER_LOAD_DWORDX3_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 280
  { BUFFER_LOAD_DWORDX3_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 281
  { BUFFER_LOAD_DWORDX3_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 282
  { BUFFER_LOAD_DWORDX3_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 283
  { BUFFER_LOAD_DWORDX3_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 284
  { BUFFER_LOAD_DWORDX3_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 285
  { BUFFER_LOAD_DWORDX3_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 286
  { BUFFER_LOAD_DWORDX3_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 287
  { BUFFER_LOAD_DWORDX3_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 288
  { BUFFER_LOAD_DWORDX3_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 289
  { BUFFER_LOAD_DWORDX3_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 290
  { BUFFER_LOAD_DWORDX3_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 291
  { BUFFER_LOAD_DWORDX3_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 292
  { BUFFER_LOAD_DWORDX3_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 293
  { BUFFER_LOAD_DWORDX3_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 294
  { BUFFER_LOAD_DWORDX3_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 295
  { BUFFER_LOAD_DWORDX4_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 296
  { BUFFER_LOAD_DWORDX4_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 297
  { BUFFER_LOAD_DWORDX4_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 298
  { BUFFER_LOAD_DWORDX4_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 299
  { BUFFER_LOAD_DWORDX4_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 300
  { BUFFER_LOAD_DWORDX4_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 301
  { BUFFER_LOAD_DWORDX4_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 302
  { BUFFER_LOAD_DWORDX4_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 303
  { BUFFER_LOAD_DWORDX4_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 304
  { BUFFER_LOAD_DWORDX4_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 305
  { BUFFER_LOAD_DWORDX4_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 306
  { BUFFER_LOAD_DWORDX4_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 307
  { BUFFER_LOAD_DWORDX4_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 308
  { BUFFER_LOAD_DWORDX4_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 309
  { BUFFER_LOAD_DWORDX4_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 310
  { BUFFER_LOAD_DWORDX4_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 311
  { BUFFER_LOAD_DWORDX4_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 312
  { BUFFER_LOAD_DWORDX4_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 313
  { BUFFER_LOAD_DWORD_ADDR64, BUFFER_LOAD_DWORD_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 314
  { BUFFER_LOAD_DWORD_BOTHEN, BUFFER_LOAD_DWORD_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 315
  { BUFFER_LOAD_DWORD_BOTHEN_exact, BUFFER_LOAD_DWORD_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 316
  { BUFFER_LOAD_DWORD_IDXEN, BUFFER_LOAD_DWORD_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 317
  { BUFFER_LOAD_DWORD_IDXEN_exact, BUFFER_LOAD_DWORD_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 318
  { BUFFER_LOAD_DWORD_LDS_ADDR64, BUFFER_LOAD_DWORD_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 319
  { BUFFER_LOAD_DWORD_LDS_BOTHEN, BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 320
  { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 321
  { BUFFER_LOAD_DWORD_LDS_IDXEN, BUFFER_LOAD_DWORD_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 322
  { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 323
  { BUFFER_LOAD_DWORD_LDS_OFFEN, BUFFER_LOAD_DWORD_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 324
  { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 325
  { BUFFER_LOAD_DWORD_LDS_OFFSET, BUFFER_LOAD_DWORD_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 326
  { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 327
  { BUFFER_LOAD_DWORD_OFFEN, BUFFER_LOAD_DWORD_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 328
  { BUFFER_LOAD_DWORD_OFFEN_exact, BUFFER_LOAD_DWORD_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 329
  { BUFFER_LOAD_DWORD_OFFSET, BUFFER_LOAD_DWORD_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 330
  { BUFFER_LOAD_DWORD_OFFSET_exact, BUFFER_LOAD_DWORD_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 331
  { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 332
  { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 333
  { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 334
  { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 335
  { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 336
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 337
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 338
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 339
  { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 340
  { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 341
  { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 342
  { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 343
  { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 344
  { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 345
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 346
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 347
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 348
  { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 349
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 350
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 351
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 352
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 353
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 354
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 355
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 356
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 357
  { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 358
  { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 359
  { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 360
  { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 361
  { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 362
  { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 363
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 364
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 365
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 366
  { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 367
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 368
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 369
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 370
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 371
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 372
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 373
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 374
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 375
  { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 376
  { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 377
  { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 378
  { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 379
  { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 380
  { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 381
  { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 382
  { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 383
  { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 384
  { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 385
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 386
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 387
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 388
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 389
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 390
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 391
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 392
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 393
  { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 394
  { BUFFER_LOAD_FORMAT_D16_X_ADDR64, BUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 395
  { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 396
  { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 397
  { BUFFER_LOAD_FORMAT_D16_X_IDXEN, BUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 398
  { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 399
  { BUFFER_LOAD_FORMAT_D16_X_OFFEN, BUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 400
  { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 401
  { BUFFER_LOAD_FORMAT_D16_X_OFFSET, BUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 402
  { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 403
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 404
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 405
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 406
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 407
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 408
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 409
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 410
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 411
  { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 412
  { BUFFER_LOAD_FORMAT_XYZW_ADDR64, BUFFER_LOAD_FORMAT_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 413
  { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 414
  { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 415
  { BUFFER_LOAD_FORMAT_XYZW_IDXEN, BUFFER_LOAD_FORMAT_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 416
  { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 417
  { BUFFER_LOAD_FORMAT_XYZW_OFFEN, BUFFER_LOAD_FORMAT_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 418
  { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 419
  { BUFFER_LOAD_FORMAT_XYZW_OFFSET, BUFFER_LOAD_FORMAT_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 420
  { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 421
  { BUFFER_LOAD_FORMAT_XYZ_ADDR64, BUFFER_LOAD_FORMAT_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 422
  { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 423
  { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 424
  { BUFFER_LOAD_FORMAT_XYZ_IDXEN, BUFFER_LOAD_FORMAT_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 425
  { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 426
  { BUFFER_LOAD_FORMAT_XYZ_OFFEN, BUFFER_LOAD_FORMAT_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 427
  { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 428
  { BUFFER_LOAD_FORMAT_XYZ_OFFSET, BUFFER_LOAD_FORMAT_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 429
  { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 430
  { BUFFER_LOAD_FORMAT_XY_ADDR64, BUFFER_LOAD_FORMAT_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 431
  { BUFFER_LOAD_FORMAT_XY_BOTHEN, BUFFER_LOAD_FORMAT_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 432
  { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 433
  { BUFFER_LOAD_FORMAT_XY_IDXEN, BUFFER_LOAD_FORMAT_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 434
  { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 435
  { BUFFER_LOAD_FORMAT_XY_OFFEN, BUFFER_LOAD_FORMAT_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 436
  { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 437
  { BUFFER_LOAD_FORMAT_XY_OFFSET, BUFFER_LOAD_FORMAT_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 438
  { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 439
  { BUFFER_LOAD_FORMAT_X_ADDR64, BUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 440
  { BUFFER_LOAD_FORMAT_X_BOTHEN, BUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 441
  { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 442
  { BUFFER_LOAD_FORMAT_X_IDXEN, BUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 443
  { BUFFER_LOAD_FORMAT_X_IDXEN_exact, BUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 444
  { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 445
  { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 446
  { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 447
  { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 448
  { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 449
  { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 450
  { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 451
  { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 452
  { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 453
  { BUFFER_LOAD_FORMAT_X_OFFEN, BUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 454
  { BUFFER_LOAD_FORMAT_X_OFFEN_exact, BUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 455
  { BUFFER_LOAD_FORMAT_X_OFFSET, BUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 456
  { BUFFER_LOAD_FORMAT_X_OFFSET_exact, BUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 457
  { BUFFER_LOAD_SBYTE_ADDR64, BUFFER_LOAD_SBYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 458
  { BUFFER_LOAD_SBYTE_BOTHEN, BUFFER_LOAD_SBYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 459
  { BUFFER_LOAD_SBYTE_BOTHEN_exact, BUFFER_LOAD_SBYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 460
  { BUFFER_LOAD_SBYTE_D16_ADDR64, BUFFER_LOAD_SBYTE_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 461
  { BUFFER_LOAD_SBYTE_D16_BOTHEN, BUFFER_LOAD_SBYTE_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 462
  { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 463
  { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 464
  { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 465
  { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 466
  { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 467
  { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 468
  { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 469
  { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 470
  { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 471
  { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 472
  { BUFFER_LOAD_SBYTE_D16_IDXEN, BUFFER_LOAD_SBYTE_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 473
  { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 474
  { BUFFER_LOAD_SBYTE_D16_OFFEN, BUFFER_LOAD_SBYTE_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 475
  { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 476
  { BUFFER_LOAD_SBYTE_D16_OFFSET, BUFFER_LOAD_SBYTE_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 477
  { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 478
  { BUFFER_LOAD_SBYTE_IDXEN, BUFFER_LOAD_SBYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 479
  { BUFFER_LOAD_SBYTE_IDXEN_exact, BUFFER_LOAD_SBYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 480
  { BUFFER_LOAD_SBYTE_LDS_ADDR64, BUFFER_LOAD_SBYTE_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 481
  { BUFFER_LOAD_SBYTE_LDS_BOTHEN, BUFFER_LOAD_SBYTE_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 482
  { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 483
  { BUFFER_LOAD_SBYTE_LDS_IDXEN, BUFFER_LOAD_SBYTE_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 484
  { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 485
  { BUFFER_LOAD_SBYTE_LDS_OFFEN, BUFFER_LOAD_SBYTE_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 486
  { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 487
  { BUFFER_LOAD_SBYTE_LDS_OFFSET, BUFFER_LOAD_SBYTE_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 488
  { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 489
  { BUFFER_LOAD_SBYTE_OFFEN, BUFFER_LOAD_SBYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 490
  { BUFFER_LOAD_SBYTE_OFFEN_exact, BUFFER_LOAD_SBYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 491
  { BUFFER_LOAD_SBYTE_OFFSET, BUFFER_LOAD_SBYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 492
  { BUFFER_LOAD_SBYTE_OFFSET_exact, BUFFER_LOAD_SBYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 493
  { BUFFER_LOAD_SHORT_D16_ADDR64, BUFFER_LOAD_SHORT_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 494
  { BUFFER_LOAD_SHORT_D16_BOTHEN, BUFFER_LOAD_SHORT_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 495
  { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 496
  { BUFFER_LOAD_SHORT_D16_HI_ADDR64, BUFFER_LOAD_SHORT_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 497
  { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 498
  { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 499
  { BUFFER_LOAD_SHORT_D16_HI_IDXEN, BUFFER_LOAD_SHORT_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 500
  { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 501
  { BUFFER_LOAD_SHORT_D16_HI_OFFEN, BUFFER_LOAD_SHORT_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 502
  { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 503
  { BUFFER_LOAD_SHORT_D16_HI_OFFSET, BUFFER_LOAD_SHORT_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 504
  { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 505
  { BUFFER_LOAD_SHORT_D16_IDXEN, BUFFER_LOAD_SHORT_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 506
  { BUFFER_LOAD_SHORT_D16_IDXEN_exact, BUFFER_LOAD_SHORT_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 507
  { BUFFER_LOAD_SHORT_D16_OFFEN, BUFFER_LOAD_SHORT_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 508
  { BUFFER_LOAD_SHORT_D16_OFFEN_exact, BUFFER_LOAD_SHORT_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 509
  { BUFFER_LOAD_SHORT_D16_OFFSET, BUFFER_LOAD_SHORT_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 510
  { BUFFER_LOAD_SHORT_D16_OFFSET_exact, BUFFER_LOAD_SHORT_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 511
  { BUFFER_LOAD_SSHORT_ADDR64, BUFFER_LOAD_SSHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 512
  { BUFFER_LOAD_SSHORT_BOTHEN, BUFFER_LOAD_SSHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 513
  { BUFFER_LOAD_SSHORT_BOTHEN_exact, BUFFER_LOAD_SSHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 514
  { BUFFER_LOAD_SSHORT_IDXEN, BUFFER_LOAD_SSHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 515
  { BUFFER_LOAD_SSHORT_IDXEN_exact, BUFFER_LOAD_SSHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 516
  { BUFFER_LOAD_SSHORT_LDS_ADDR64, BUFFER_LOAD_SSHORT_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 517
  { BUFFER_LOAD_SSHORT_LDS_BOTHEN, BUFFER_LOAD_SSHORT_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 518
  { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 519
  { BUFFER_LOAD_SSHORT_LDS_IDXEN, BUFFER_LOAD_SSHORT_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 520
  { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 521
  { BUFFER_LOAD_SSHORT_LDS_OFFEN, BUFFER_LOAD_SSHORT_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 522
  { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 523
  { BUFFER_LOAD_SSHORT_LDS_OFFSET, BUFFER_LOAD_SSHORT_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 524
  { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 525
  { BUFFER_LOAD_SSHORT_OFFEN, BUFFER_LOAD_SSHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 526
  { BUFFER_LOAD_SSHORT_OFFEN_exact, BUFFER_LOAD_SSHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 527
  { BUFFER_LOAD_SSHORT_OFFSET, BUFFER_LOAD_SSHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 528
  { BUFFER_LOAD_SSHORT_OFFSET_exact, BUFFER_LOAD_SSHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 529
  { BUFFER_LOAD_UBYTE_ADDR64, BUFFER_LOAD_UBYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 530
  { BUFFER_LOAD_UBYTE_BOTHEN, BUFFER_LOAD_UBYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 531
  { BUFFER_LOAD_UBYTE_BOTHEN_exact, BUFFER_LOAD_UBYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 532
  { BUFFER_LOAD_UBYTE_D16_ADDR64, BUFFER_LOAD_UBYTE_D16_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 533
  { BUFFER_LOAD_UBYTE_D16_BOTHEN, BUFFER_LOAD_UBYTE_D16_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 534
  { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 535
  { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 536
  { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 537
  { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 538
  { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 539
  { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 540
  { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 541
  { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 542
  { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 543
  { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 544
  { BUFFER_LOAD_UBYTE_D16_IDXEN, BUFFER_LOAD_UBYTE_D16_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 545
  { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 546
  { BUFFER_LOAD_UBYTE_D16_OFFEN, BUFFER_LOAD_UBYTE_D16_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 547
  { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 548
  { BUFFER_LOAD_UBYTE_D16_OFFSET, BUFFER_LOAD_UBYTE_D16_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 549
  { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 550
  { BUFFER_LOAD_UBYTE_IDXEN, BUFFER_LOAD_UBYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 551
  { BUFFER_LOAD_UBYTE_IDXEN_exact, BUFFER_LOAD_UBYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 552
  { BUFFER_LOAD_UBYTE_LDS_ADDR64, BUFFER_LOAD_UBYTE_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 553
  { BUFFER_LOAD_UBYTE_LDS_BOTHEN, BUFFER_LOAD_UBYTE_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 554
  { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 555
  { BUFFER_LOAD_UBYTE_LDS_IDXEN, BUFFER_LOAD_UBYTE_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 556
  { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 557
  { BUFFER_LOAD_UBYTE_LDS_OFFEN, BUFFER_LOAD_UBYTE_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 558
  { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 559
  { BUFFER_LOAD_UBYTE_LDS_OFFSET, BUFFER_LOAD_UBYTE_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 560
  { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 561
  { BUFFER_LOAD_UBYTE_OFFEN, BUFFER_LOAD_UBYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 562
  { BUFFER_LOAD_UBYTE_OFFEN_exact, BUFFER_LOAD_UBYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 563
  { BUFFER_LOAD_UBYTE_OFFSET, BUFFER_LOAD_UBYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 564
  { BUFFER_LOAD_UBYTE_OFFSET_exact, BUFFER_LOAD_UBYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 565
  { BUFFER_LOAD_USHORT_ADDR64, BUFFER_LOAD_USHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 566
  { BUFFER_LOAD_USHORT_BOTHEN, BUFFER_LOAD_USHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 567
  { BUFFER_LOAD_USHORT_BOTHEN_exact, BUFFER_LOAD_USHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 568
  { BUFFER_LOAD_USHORT_IDXEN, BUFFER_LOAD_USHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 569
  { BUFFER_LOAD_USHORT_IDXEN_exact, BUFFER_LOAD_USHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 570
  { BUFFER_LOAD_USHORT_LDS_ADDR64, BUFFER_LOAD_USHORT_LDS_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 571
  { BUFFER_LOAD_USHORT_LDS_BOTHEN, BUFFER_LOAD_USHORT_LDS_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 572
  { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 573
  { BUFFER_LOAD_USHORT_LDS_IDXEN, BUFFER_LOAD_USHORT_LDS_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 574
  { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 575
  { BUFFER_LOAD_USHORT_LDS_OFFEN, BUFFER_LOAD_USHORT_LDS_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 576
  { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 577
  { BUFFER_LOAD_USHORT_LDS_OFFSET, BUFFER_LOAD_USHORT_LDS_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 578
  { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 579
  { BUFFER_LOAD_USHORT_OFFEN, BUFFER_LOAD_USHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 580
  { BUFFER_LOAD_USHORT_OFFEN_exact, BUFFER_LOAD_USHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 581
  { BUFFER_LOAD_USHORT_OFFSET, BUFFER_LOAD_USHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 582
  { BUFFER_LOAD_USHORT_OFFSET_exact, BUFFER_LOAD_USHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 583
  { BUFFER_STORE_BYTE_ADDR64, BUFFER_STORE_BYTE_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 584
  { BUFFER_STORE_BYTE_BOTHEN, BUFFER_STORE_BYTE_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 585
  { BUFFER_STORE_BYTE_BOTHEN_exact, BUFFER_STORE_BYTE_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 586
  { BUFFER_STORE_BYTE_D16_HI_ADDR64, BUFFER_STORE_BYTE_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 587
  { BUFFER_STORE_BYTE_D16_HI_BOTHEN, BUFFER_STORE_BYTE_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 588
  { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 589
  { BUFFER_STORE_BYTE_D16_HI_IDXEN, BUFFER_STORE_BYTE_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 590
  { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 591
  { BUFFER_STORE_BYTE_D16_HI_OFFEN, BUFFER_STORE_BYTE_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 592
  { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 593
  { BUFFER_STORE_BYTE_D16_HI_OFFSET, BUFFER_STORE_BYTE_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 594
  { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 595
  { BUFFER_STORE_BYTE_IDXEN, BUFFER_STORE_BYTE_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 596
  { BUFFER_STORE_BYTE_IDXEN_exact, BUFFER_STORE_BYTE_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 597
  { BUFFER_STORE_BYTE_OFFEN, BUFFER_STORE_BYTE_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 598
  { BUFFER_STORE_BYTE_OFFEN_exact, BUFFER_STORE_BYTE_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 599
  { BUFFER_STORE_BYTE_OFFSET, BUFFER_STORE_BYTE_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 600
  { BUFFER_STORE_BYTE_OFFSET_exact, BUFFER_STORE_BYTE_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 601
  { BUFFER_STORE_DWORDX2_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 602
  { BUFFER_STORE_DWORDX2_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 603
  { BUFFER_STORE_DWORDX2_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 604
  { BUFFER_STORE_DWORDX2_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 605
  { BUFFER_STORE_DWORDX2_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 606
  { BUFFER_STORE_DWORDX2_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 607
  { BUFFER_STORE_DWORDX2_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 608
  { BUFFER_STORE_DWORDX2_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 609
  { BUFFER_STORE_DWORDX2_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 610
  { BUFFER_STORE_DWORDX3_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 611
  { BUFFER_STORE_DWORDX3_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 612
  { BUFFER_STORE_DWORDX3_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 613
  { BUFFER_STORE_DWORDX3_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 614
  { BUFFER_STORE_DWORDX3_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 615
  { BUFFER_STORE_DWORDX3_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 616
  { BUFFER_STORE_DWORDX3_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 617
  { BUFFER_STORE_DWORDX3_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 618
  { BUFFER_STORE_DWORDX3_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 619
  { BUFFER_STORE_DWORDX4_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 620
  { BUFFER_STORE_DWORDX4_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 621
  { BUFFER_STORE_DWORDX4_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 622
  { BUFFER_STORE_DWORDX4_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 623
  { BUFFER_STORE_DWORDX4_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 624
  { BUFFER_STORE_DWORDX4_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 625
  { BUFFER_STORE_DWORDX4_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 626
  { BUFFER_STORE_DWORDX4_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 627
  { BUFFER_STORE_DWORDX4_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 628
  { BUFFER_STORE_DWORD_ADDR64, BUFFER_STORE_DWORD_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 629
  { BUFFER_STORE_DWORD_BOTHEN, BUFFER_STORE_DWORD_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 630
  { BUFFER_STORE_DWORD_BOTHEN_exact, BUFFER_STORE_DWORD_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 631
  { BUFFER_STORE_DWORD_IDXEN, BUFFER_STORE_DWORD_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 632
  { BUFFER_STORE_DWORD_IDXEN_exact, BUFFER_STORE_DWORD_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 633
  { BUFFER_STORE_DWORD_OFFEN, BUFFER_STORE_DWORD_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 634
  { BUFFER_STORE_DWORD_OFFEN_exact, BUFFER_STORE_DWORD_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 635
  { BUFFER_STORE_DWORD_OFFSET, BUFFER_STORE_DWORD_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 636
  { BUFFER_STORE_DWORD_OFFSET_exact, BUFFER_STORE_DWORD_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 637
  { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 638
  { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 639
  { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 640
  { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 641
  { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 642
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 643
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 644
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 645
  { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 646
  { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 647
  { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 648
  { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 649
  { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 650
  { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 651
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 652
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 653
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 654
  { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 655
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 656
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 657
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 658
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 659
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 660
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 661
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 662
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 663
  { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 664
  { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 665
  { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 666
  { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 667
  { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 668
  { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 669
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 670
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 671
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 672
  { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 673
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 674
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 675
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 676
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 677
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 678
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 679
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 680
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 681
  { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 682
  { BUFFER_STORE_FORMAT_D16_XY_ADDR64, BUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 683
  { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 684
  { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 685
  { BUFFER_STORE_FORMAT_D16_XY_IDXEN, BUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 686
  { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 687
  { BUFFER_STORE_FORMAT_D16_XY_OFFEN, BUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 688
  { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 689
  { BUFFER_STORE_FORMAT_D16_XY_OFFSET, BUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 690
  { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 691
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 692
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 693
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 694
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 695
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 696
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 697
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 698
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 699
  { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 700
  { BUFFER_STORE_FORMAT_D16_X_ADDR64, BUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 701
  { BUFFER_STORE_FORMAT_D16_X_BOTHEN, BUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 702
  { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 703
  { BUFFER_STORE_FORMAT_D16_X_IDXEN, BUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 704
  { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 705
  { BUFFER_STORE_FORMAT_D16_X_OFFEN, BUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 706
  { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 707
  { BUFFER_STORE_FORMAT_D16_X_OFFSET, BUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 708
  { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 709
  { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 710
  { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 711
  { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 712
  { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 713
  { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 714
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 715
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 716
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 717
  { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 718
  { BUFFER_STORE_FORMAT_XYZW_ADDR64, BUFFER_STORE_FORMAT_XYZW_ADDR64, 0x4, 0x1, 0x1, 0x1 }, // 719
  { BUFFER_STORE_FORMAT_XYZW_BOTHEN, BUFFER_STORE_FORMAT_XYZW_BOTHEN, 0x4, 0x1, 0x1, 0x1 }, // 720
  { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 721
  { BUFFER_STORE_FORMAT_XYZW_IDXEN, BUFFER_STORE_FORMAT_XYZW_IDXEN, 0x4, 0x1, 0x1, 0x1 }, // 722
  { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 723
  { BUFFER_STORE_FORMAT_XYZW_OFFEN, BUFFER_STORE_FORMAT_XYZW_OFFEN, 0x4, 0x1, 0x1, 0x1 }, // 724
  { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 0x4, 0x1, 0x1, 0x1 }, // 725
  { BUFFER_STORE_FORMAT_XYZW_OFFSET, BUFFER_STORE_FORMAT_XYZW_OFFSET, 0x4, 0x0, 0x1, 0x1 }, // 726
  { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 0x4, 0x0, 0x1, 0x1 }, // 727
  { BUFFER_STORE_FORMAT_XYZ_ADDR64, BUFFER_STORE_FORMAT_XYZ_ADDR64, 0x3, 0x1, 0x1, 0x1 }, // 728
  { BUFFER_STORE_FORMAT_XYZ_BOTHEN, BUFFER_STORE_FORMAT_XYZ_BOTHEN, 0x3, 0x1, 0x1, 0x1 }, // 729
  { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 730
  { BUFFER_STORE_FORMAT_XYZ_IDXEN, BUFFER_STORE_FORMAT_XYZ_IDXEN, 0x3, 0x1, 0x1, 0x1 }, // 731
  { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 732
  { BUFFER_STORE_FORMAT_XYZ_OFFEN, BUFFER_STORE_FORMAT_XYZ_OFFEN, 0x3, 0x1, 0x1, 0x1 }, // 733
  { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 0x3, 0x1, 0x1, 0x1 }, // 734
  { BUFFER_STORE_FORMAT_XYZ_OFFSET, BUFFER_STORE_FORMAT_XYZ_OFFSET, 0x3, 0x0, 0x1, 0x1 }, // 735
  { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 0x3, 0x0, 0x1, 0x1 }, // 736
  { BUFFER_STORE_FORMAT_XY_ADDR64, BUFFER_STORE_FORMAT_XY_ADDR64, 0x2, 0x1, 0x1, 0x1 }, // 737
  { BUFFER_STORE_FORMAT_XY_BOTHEN, BUFFER_STORE_FORMAT_XY_BOTHEN, 0x2, 0x1, 0x1, 0x1 }, // 738
  { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 739
  { BUFFER_STORE_FORMAT_XY_IDXEN, BUFFER_STORE_FORMAT_XY_IDXEN, 0x2, 0x1, 0x1, 0x1 }, // 740
  { BUFFER_STORE_FORMAT_XY_IDXEN_exact, BUFFER_STORE_FORMAT_XY_IDXEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 741
  { BUFFER_STORE_FORMAT_XY_OFFEN, BUFFER_STORE_FORMAT_XY_OFFEN, 0x2, 0x1, 0x1, 0x1 }, // 742
  { BUFFER_STORE_FORMAT_XY_OFFEN_exact, BUFFER_STORE_FORMAT_XY_OFFEN_exact, 0x2, 0x1, 0x1, 0x1 }, // 743
  { BUFFER_STORE_FORMAT_XY_OFFSET, BUFFER_STORE_FORMAT_XY_OFFSET, 0x2, 0x0, 0x1, 0x1 }, // 744
  { BUFFER_STORE_FORMAT_XY_OFFSET_exact, BUFFER_STORE_FORMAT_XY_OFFSET_exact, 0x2, 0x0, 0x1, 0x1 }, // 745
  { BUFFER_STORE_FORMAT_X_ADDR64, BUFFER_STORE_FORMAT_X_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 746
  { BUFFER_STORE_FORMAT_X_BOTHEN, BUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 747
  { BUFFER_STORE_FORMAT_X_BOTHEN_exact, BUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 748
  { BUFFER_STORE_FORMAT_X_IDXEN, BUFFER_STORE_FORMAT_X_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 749
  { BUFFER_STORE_FORMAT_X_IDXEN_exact, BUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 750
  { BUFFER_STORE_FORMAT_X_OFFEN, BUFFER_STORE_FORMAT_X_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 751
  { BUFFER_STORE_FORMAT_X_OFFEN_exact, BUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 752
  { BUFFER_STORE_FORMAT_X_OFFSET, BUFFER_STORE_FORMAT_X_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 753
  { BUFFER_STORE_FORMAT_X_OFFSET_exact, BUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 754
  { BUFFER_STORE_LDS_DWORD, BUFFER_STORE_LDS_DWORD, 0x0, 0x0, 0x1, 0x1 }, // 755
  { BUFFER_STORE_SHORT_ADDR64, BUFFER_STORE_SHORT_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 756
  { BUFFER_STORE_SHORT_BOTHEN, BUFFER_STORE_SHORT_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 757
  { BUFFER_STORE_SHORT_BOTHEN_exact, BUFFER_STORE_SHORT_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 758
  { BUFFER_STORE_SHORT_D16_HI_ADDR64, BUFFER_STORE_SHORT_D16_HI_ADDR64, 0x1, 0x1, 0x1, 0x1 }, // 759
  { BUFFER_STORE_SHORT_D16_HI_BOTHEN, BUFFER_STORE_SHORT_D16_HI_BOTHEN, 0x1, 0x1, 0x1, 0x1 }, // 760
  { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 761
  { BUFFER_STORE_SHORT_D16_HI_IDXEN, BUFFER_STORE_SHORT_D16_HI_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 762
  { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 763
  { BUFFER_STORE_SHORT_D16_HI_OFFEN, BUFFER_STORE_SHORT_D16_HI_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 764
  { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 765
  { BUFFER_STORE_SHORT_D16_HI_OFFSET, BUFFER_STORE_SHORT_D16_HI_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 766
  { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 767
  { BUFFER_STORE_SHORT_IDXEN, BUFFER_STORE_SHORT_IDXEN, 0x1, 0x1, 0x1, 0x1 }, // 768
  { BUFFER_STORE_SHORT_IDXEN_exact, BUFFER_STORE_SHORT_IDXEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 769
  { BUFFER_STORE_SHORT_OFFEN, BUFFER_STORE_SHORT_OFFEN, 0x1, 0x1, 0x1, 0x1 }, // 770
  { BUFFER_STORE_SHORT_OFFEN_exact, BUFFER_STORE_SHORT_OFFEN_exact, 0x1, 0x1, 0x1, 0x1 }, // 771
  { BUFFER_STORE_SHORT_OFFSET, BUFFER_STORE_SHORT_OFFSET, 0x1, 0x0, 0x1, 0x1 }, // 772
  { BUFFER_STORE_SHORT_OFFSET_exact, BUFFER_STORE_SHORT_OFFSET_exact, 0x1, 0x0, 0x1, 0x1 }, // 773
  { BUFFER_WBINVL1, BUFFER_WBINVL1, 0x0, 0x0, 0x0, 0x0 }, // 774
  { BUFFER_WBINVL1_SC, BUFFER_WBINVL1_SC, 0x0, 0x0, 0x0, 0x0 }, // 775
  { BUFFER_WBINVL1_VOL, BUFFER_WBINVL1_VOL, 0x0, 0x0, 0x0, 0x0 }, // 776
 };

const MUBUFInfo *getMUBUFOpcodeHelper(unsigned Opcode) {
  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(MUBUFInfoTable);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const MUBUFInfo &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &*Idx;
}

const MUBUFInfo *getMUBUFInfoFromBaseOpcodeAndDwords(unsigned BaseOpcode, uint8_t dwords) {
  struct IndexType {
    unsigned BaseOpcode;
    uint8_t dwords;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { BUFFER_ATOMIC_ADD_ADDR64, 0x0, 0 },
    { BUFFER_ATOMIC_ADD_ADDR64_RTN, 0x0, 1 },
    { BUFFER_ATOMIC_ADD_BOTHEN, 0x0, 2 },
    { BUFFER_ATOMIC_ADD_BOTHEN_RTN, 0x0, 3 },
    { BUFFER_ATOMIC_ADD_IDXEN, 0x0, 4 },
    { BUFFER_ATOMIC_ADD_IDXEN_RTN, 0x0, 5 },
    { BUFFER_ATOMIC_ADD_OFFEN, 0x0, 6 },
    { BUFFER_ATOMIC_ADD_OFFEN_RTN, 0x0, 7 },
    { BUFFER_ATOMIC_ADD_OFFSET, 0x0, 8 },
    { BUFFER_ATOMIC_ADD_OFFSET_RTN, 0x0, 9 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64, 0x0, 10 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 0x0, 11 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN, 0x0, 12 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 0x0, 13 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN, 0x0, 14 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 0x0, 15 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN, 0x0, 16 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 0x0, 17 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET, 0x0, 18 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 0x0, 19 },
    { BUFFER_ATOMIC_AND_ADDR64, 0x0, 20 },
    { BUFFER_ATOMIC_AND_ADDR64_RTN, 0x0, 21 },
    { BUFFER_ATOMIC_AND_BOTHEN, 0x0, 22 },
    { BUFFER_ATOMIC_AND_BOTHEN_RTN, 0x0, 23 },
    { BUFFER_ATOMIC_AND_IDXEN, 0x0, 24 },
    { BUFFER_ATOMIC_AND_IDXEN_RTN, 0x0, 25 },
    { BUFFER_ATOMIC_AND_OFFEN, 0x0, 26 },
    { BUFFER_ATOMIC_AND_OFFEN_RTN, 0x0, 27 },
    { BUFFER_ATOMIC_AND_OFFSET, 0x0, 28 },
    { BUFFER_ATOMIC_AND_OFFSET_RTN, 0x0, 29 },
    { BUFFER_ATOMIC_AND_X2_ADDR64, 0x0, 30 },
    { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 0x0, 31 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN, 0x0, 32 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 0x0, 33 },
    { BUFFER_ATOMIC_AND_X2_IDXEN, 0x0, 34 },
    { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 0x0, 35 },
    { BUFFER_ATOMIC_AND_X2_OFFEN, 0x0, 36 },
    { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 0x0, 37 },
    { BUFFER_ATOMIC_AND_X2_OFFSET, 0x0, 38 },
    { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 0x0, 39 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64, 0x0, 40 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 0x0, 41 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN, 0x0, 42 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 0x0, 43 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN, 0x0, 44 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 0x0, 45 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN, 0x0, 46 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 0x0, 47 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET, 0x0, 48 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 0x0, 49 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 0x0, 50 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 0x0, 51 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 0x0, 52 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 0x0, 53 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 0x0, 54 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 0x0, 55 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 0x0, 56 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 0x0, 57 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 0x0, 58 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 0x0, 59 },
    { BUFFER_ATOMIC_DEC_ADDR64, 0x0, 60 },
    { BUFFER_ATOMIC_DEC_ADDR64_RTN, 0x0, 61 },
    { BUFFER_ATOMIC_DEC_BOTHEN, 0x0, 62 },
    { BUFFER_ATOMIC_DEC_BOTHEN_RTN, 0x0, 63 },
    { BUFFER_ATOMIC_DEC_IDXEN, 0x0, 64 },
    { BUFFER_ATOMIC_DEC_IDXEN_RTN, 0x0, 65 },
    { BUFFER_ATOMIC_DEC_OFFEN, 0x0, 66 },
    { BUFFER_ATOMIC_DEC_OFFEN_RTN, 0x0, 67 },
    { BUFFER_ATOMIC_DEC_OFFSET, 0x0, 68 },
    { BUFFER_ATOMIC_DEC_OFFSET_RTN, 0x0, 69 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64, 0x0, 70 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 0x0, 71 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN, 0x0, 72 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 0x0, 73 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN, 0x0, 74 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 0x0, 75 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN, 0x0, 76 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 0x0, 77 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET, 0x0, 78 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 0x0, 79 },
    { BUFFER_ATOMIC_INC_ADDR64, 0x0, 80 },
    { BUFFER_ATOMIC_INC_ADDR64_RTN, 0x0, 81 },
    { BUFFER_ATOMIC_INC_BOTHEN, 0x0, 82 },
    { BUFFER_ATOMIC_INC_BOTHEN_RTN, 0x0, 83 },
    { BUFFER_ATOMIC_INC_IDXEN, 0x0, 84 },
    { BUFFER_ATOMIC_INC_IDXEN_RTN, 0x0, 85 },
    { BUFFER_ATOMIC_INC_OFFEN, 0x0, 86 },
    { BUFFER_ATOMIC_INC_OFFEN_RTN, 0x0, 87 },
    { BUFFER_ATOMIC_INC_OFFSET, 0x0, 88 },
    { BUFFER_ATOMIC_INC_OFFSET_RTN, 0x0, 89 },
    { BUFFER_ATOMIC_INC_X2_ADDR64, 0x0, 90 },
    { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 0x0, 91 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN, 0x0, 92 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 0x0, 93 },
    { BUFFER_ATOMIC_INC_X2_IDXEN, 0x0, 94 },
    { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 0x0, 95 },
    { BUFFER_ATOMIC_INC_X2_OFFEN, 0x0, 96 },
    { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 0x0, 97 },
    { BUFFER_ATOMIC_INC_X2_OFFSET, 0x0, 98 },
    { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 0x0, 99 },
    { BUFFER_ATOMIC_OR_ADDR64, 0x0, 100 },
    { BUFFER_ATOMIC_OR_ADDR64_RTN, 0x0, 101 },
    { BUFFER_ATOMIC_OR_BOTHEN, 0x0, 102 },
    { BUFFER_ATOMIC_OR_BOTHEN_RTN, 0x0, 103 },
    { BUFFER_ATOMIC_OR_IDXEN, 0x0, 104 },
    { BUFFER_ATOMIC_OR_IDXEN_RTN, 0x0, 105 },
    { BUFFER_ATOMIC_OR_OFFEN, 0x0, 106 },
    { BUFFER_ATOMIC_OR_OFFEN_RTN, 0x0, 107 },
    { BUFFER_ATOMIC_OR_OFFSET, 0x0, 108 },
    { BUFFER_ATOMIC_OR_OFFSET_RTN, 0x0, 109 },
    { BUFFER_ATOMIC_OR_X2_ADDR64, 0x0, 110 },
    { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 0x0, 111 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN, 0x0, 112 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 0x0, 113 },
    { BUFFER_ATOMIC_OR_X2_IDXEN, 0x0, 114 },
    { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 0x0, 115 },
    { BUFFER_ATOMIC_OR_X2_OFFEN, 0x0, 116 },
    { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 0x0, 117 },
    { BUFFER_ATOMIC_OR_X2_OFFSET, 0x0, 118 },
    { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 0x0, 119 },
    { BUFFER_ATOMIC_SMAX_ADDR64, 0x0, 120 },
    { BUFFER_ATOMIC_SMAX_ADDR64_RTN, 0x0, 121 },
    { BUFFER_ATOMIC_SMAX_BOTHEN, 0x0, 122 },
    { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 0x0, 123 },
    { BUFFER_ATOMIC_SMAX_IDXEN, 0x0, 124 },
    { BUFFER_ATOMIC_SMAX_IDXEN_RTN, 0x0, 125 },
    { BUFFER_ATOMIC_SMAX_OFFEN, 0x0, 126 },
    { BUFFER_ATOMIC_SMAX_OFFEN_RTN, 0x0, 127 },
    { BUFFER_ATOMIC_SMAX_OFFSET, 0x0, 128 },
    { BUFFER_ATOMIC_SMAX_OFFSET_RTN, 0x0, 129 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64, 0x0, 130 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 0x0, 131 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN, 0x0, 132 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 0x0, 133 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN, 0x0, 134 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 0x0, 135 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN, 0x0, 136 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 0x0, 137 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET, 0x0, 138 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 0x0, 139 },
    { BUFFER_ATOMIC_SMIN_ADDR64, 0x0, 140 },
    { BUFFER_ATOMIC_SMIN_ADDR64_RTN, 0x0, 141 },
    { BUFFER_ATOMIC_SMIN_BOTHEN, 0x0, 142 },
    { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 0x0, 143 },
    { BUFFER_ATOMIC_SMIN_IDXEN, 0x0, 144 },
    { BUFFER_ATOMIC_SMIN_IDXEN_RTN, 0x0, 145 },
    { BUFFER_ATOMIC_SMIN_OFFEN, 0x0, 146 },
    { BUFFER_ATOMIC_SMIN_OFFEN_RTN, 0x0, 147 },
    { BUFFER_ATOMIC_SMIN_OFFSET, 0x0, 148 },
    { BUFFER_ATOMIC_SMIN_OFFSET_RTN, 0x0, 149 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64, 0x0, 150 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 0x0, 151 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN, 0x0, 152 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 0x0, 153 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN, 0x0, 154 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 0x0, 155 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN, 0x0, 156 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 0x0, 157 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET, 0x0, 158 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 0x0, 159 },
    { BUFFER_ATOMIC_SUB_ADDR64, 0x0, 160 },
    { BUFFER_ATOMIC_SUB_ADDR64_RTN, 0x0, 161 },
    { BUFFER_ATOMIC_SUB_BOTHEN, 0x0, 162 },
    { BUFFER_ATOMIC_SUB_BOTHEN_RTN, 0x0, 163 },
    { BUFFER_ATOMIC_SUB_IDXEN, 0x0, 164 },
    { BUFFER_ATOMIC_SUB_IDXEN_RTN, 0x0, 165 },
    { BUFFER_ATOMIC_SUB_OFFEN, 0x0, 166 },
    { BUFFER_ATOMIC_SUB_OFFEN_RTN, 0x0, 167 },
    { BUFFER_ATOMIC_SUB_OFFSET, 0x0, 168 },
    { BUFFER_ATOMIC_SUB_OFFSET_RTN, 0x0, 169 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64, 0x0, 170 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 0x0, 171 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN, 0x0, 172 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 0x0, 173 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN, 0x0, 174 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 0x0, 175 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN, 0x0, 176 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 0x0, 177 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET, 0x0, 178 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 0x0, 179 },
    { BUFFER_ATOMIC_SWAP_ADDR64, 0x0, 180 },
    { BUFFER_ATOMIC_SWAP_ADDR64_RTN, 0x0, 181 },
    { BUFFER_ATOMIC_SWAP_BOTHEN, 0x0, 182 },
    { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 0x0, 183 },
    { BUFFER_ATOMIC_SWAP_IDXEN, 0x0, 184 },
    { BUFFER_ATOMIC_SWAP_IDXEN_RTN, 0x0, 185 },
    { BUFFER_ATOMIC_SWAP_OFFEN, 0x0, 186 },
    { BUFFER_ATOMIC_SWAP_OFFEN_RTN, 0x0, 187 },
    { BUFFER_ATOMIC_SWAP_OFFSET, 0x0, 188 },
    { BUFFER_ATOMIC_SWAP_OFFSET_RTN, 0x0, 189 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64, 0x0, 190 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 0x0, 191 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN, 0x0, 192 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 0x0, 193 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN, 0x0, 194 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 0x0, 195 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN, 0x0, 196 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 0x0, 197 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET, 0x0, 198 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 0x0, 199 },
    { BUFFER_ATOMIC_UMAX_ADDR64, 0x0, 200 },
    { BUFFER_ATOMIC_UMAX_ADDR64_RTN, 0x0, 201 },
    { BUFFER_ATOMIC_UMAX_BOTHEN, 0x0, 202 },
    { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 0x0, 203 },
    { BUFFER_ATOMIC_UMAX_IDXEN, 0x0, 204 },
    { BUFFER_ATOMIC_UMAX_IDXEN_RTN, 0x0, 205 },
    { BUFFER_ATOMIC_UMAX_OFFEN, 0x0, 206 },
    { BUFFER_ATOMIC_UMAX_OFFEN_RTN, 0x0, 207 },
    { BUFFER_ATOMIC_UMAX_OFFSET, 0x0, 208 },
    { BUFFER_ATOMIC_UMAX_OFFSET_RTN, 0x0, 209 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64, 0x0, 210 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 0x0, 211 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN, 0x0, 212 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 0x0, 213 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN, 0x0, 214 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 0x0, 215 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN, 0x0, 216 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 0x0, 217 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET, 0x0, 218 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 0x0, 219 },
    { BUFFER_ATOMIC_UMIN_ADDR64, 0x0, 220 },
    { BUFFER_ATOMIC_UMIN_ADDR64_RTN, 0x0, 221 },
    { BUFFER_ATOMIC_UMIN_BOTHEN, 0x0, 222 },
    { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 0x0, 223 },
    { BUFFER_ATOMIC_UMIN_IDXEN, 0x0, 224 },
    { BUFFER_ATOMIC_UMIN_IDXEN_RTN, 0x0, 225 },
    { BUFFER_ATOMIC_UMIN_OFFEN, 0x0, 226 },
    { BUFFER_ATOMIC_UMIN_OFFEN_RTN, 0x0, 227 },
    { BUFFER_ATOMIC_UMIN_OFFSET, 0x0, 228 },
    { BUFFER_ATOMIC_UMIN_OFFSET_RTN, 0x0, 229 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64, 0x0, 230 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 0x0, 231 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN, 0x0, 232 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 0x0, 233 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN, 0x0, 234 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 0x0, 235 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN, 0x0, 236 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 0x0, 237 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET, 0x0, 238 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 0x0, 239 },
    { BUFFER_ATOMIC_XOR_ADDR64, 0x0, 240 },
    { BUFFER_ATOMIC_XOR_ADDR64_RTN, 0x0, 241 },
    { BUFFER_ATOMIC_XOR_BOTHEN, 0x0, 242 },
    { BUFFER_ATOMIC_XOR_BOTHEN_RTN, 0x0, 243 },
    { BUFFER_ATOMIC_XOR_IDXEN, 0x0, 244 },
    { BUFFER_ATOMIC_XOR_IDXEN_RTN, 0x0, 245 },
    { BUFFER_ATOMIC_XOR_OFFEN, 0x0, 246 },
    { BUFFER_ATOMIC_XOR_OFFEN_RTN, 0x0, 247 },
    { BUFFER_ATOMIC_XOR_OFFSET, 0x0, 248 },
    { BUFFER_ATOMIC_XOR_OFFSET_RTN, 0x0, 249 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64, 0x0, 250 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 0x0, 251 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN, 0x0, 252 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 0x0, 253 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN, 0x0, 254 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 0x0, 255 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN, 0x0, 256 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 0x0, 257 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET, 0x0, 258 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 0x0, 259 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x1, 314 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x2, 260 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x3, 278 },
    { BUFFER_LOAD_DWORD_ADDR64, 0x4, 296 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x1, 315 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x2, 261 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x3, 279 },
    { BUFFER_LOAD_DWORD_BOTHEN, 0x4, 297 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x1, 316 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x2, 262 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x3, 280 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 0x4, 298 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x1, 317 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x2, 263 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x3, 281 },
    { BUFFER_LOAD_DWORD_IDXEN, 0x4, 299 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x1, 318 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x2, 264 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x3, 282 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 0x4, 300 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x1, 319 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x2, 265 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x3, 283 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 0x4, 301 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x1, 320 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x2, 266 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x3, 284 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 0x4, 302 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x1, 321 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x2, 267 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x3, 285 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 0x4, 303 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x1, 322 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x2, 268 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x3, 286 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 0x4, 304 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x1, 323 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x2, 269 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x3, 287 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 0x4, 305 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x1, 324 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x2, 270 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x3, 288 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 0x4, 306 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x1, 325 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x2, 271 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x3, 289 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 0x4, 307 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x1, 326 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x2, 272 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x3, 290 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 0x4, 308 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x1, 327 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x2, 273 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x3, 291 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 0x4, 309 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x1, 328 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x2, 274 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x3, 292 },
    { BUFFER_LOAD_DWORD_OFFEN, 0x4, 310 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x1, 329 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x2, 275 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x3, 293 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 0x4, 311 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x1, 330 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x2, 276 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x3, 294 },
    { BUFFER_LOAD_DWORD_OFFSET, 0x4, 312 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x1, 331 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x2, 277 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x3, 295 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 0x4, 313 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 0x1, 332 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 0x1, 333 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 334 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 0x1, 335 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 336 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 0x1, 337 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 338 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 0x1, 339 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 340 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 0x2, 341 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 0x2, 342 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 0x2, 343 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 0x2, 344 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 0x2, 345 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 0x2, 346 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 0x2, 347 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 0x2, 348 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 0x2, 349 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 350 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 351 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 352 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 353 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 354 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 355 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 356 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 357 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 358 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 0x2, 359 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 0x2, 360 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 0x2, 361 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 0x2, 362 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 0x2, 363 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 0x2, 364 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 0x2, 365 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 0x2, 366 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 0x2, 367 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 368 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 369 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 370 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 371 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 372 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 373 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 374 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 375 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 376 },
    { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 0x1, 377 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 0x1, 378 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 0x1, 379 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 0x1, 380 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 0x1, 381 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 0x1, 382 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 0x1, 383 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 0x1, 384 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 0x1, 385 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 386 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 387 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 388 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 389 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 390 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 391 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 392 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 393 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 394 },
    { BUFFER_LOAD_FORMAT_D16_X_ADDR64, 0x1, 395 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 0x1, 396 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 0x1, 397 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN, 0x1, 398 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 0x1, 399 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN, 0x1, 400 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 0x1, 401 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET, 0x1, 402 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 0x1, 403 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 0x1, 404 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 405 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 406 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 0x1, 407 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 408 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 0x1, 409 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 410 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 0x1, 411 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 412 },
    { BUFFER_LOAD_FORMAT_XYZW_ADDR64, 0x4, 413 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 0x4, 414 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 0x4, 415 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN, 0x4, 416 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 0x4, 417 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN, 0x4, 418 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 0x4, 419 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET, 0x4, 420 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 0x4, 421 },
    { BUFFER_LOAD_FORMAT_XYZ_ADDR64, 0x3, 422 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 0x3, 423 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 0x3, 424 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN, 0x3, 425 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 0x3, 426 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN, 0x3, 427 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 0x3, 428 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET, 0x3, 429 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 0x3, 430 },
    { BUFFER_LOAD_FORMAT_XY_ADDR64, 0x2, 431 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN, 0x2, 432 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 0x2, 433 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN, 0x2, 434 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 0x2, 435 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN, 0x2, 436 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 0x2, 437 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET, 0x2, 438 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 0x2, 439 },
    { BUFFER_LOAD_FORMAT_X_ADDR64, 0x1, 440 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN, 0x1, 441 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 0x1, 442 },
    { BUFFER_LOAD_FORMAT_X_IDXEN, 0x1, 443 },
    { BUFFER_LOAD_FORMAT_X_IDXEN_exact, 0x1, 444 },
    { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 0x1, 445 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 0x1, 446 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 0x1, 447 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 0x1, 448 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 0x1, 449 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 0x1, 450 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 0x1, 451 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 0x1, 452 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 0x1, 453 },
    { BUFFER_LOAD_FORMAT_X_OFFEN, 0x1, 454 },
    { BUFFER_LOAD_FORMAT_X_OFFEN_exact, 0x1, 455 },
    { BUFFER_LOAD_FORMAT_X_OFFSET, 0x1, 456 },
    { BUFFER_LOAD_FORMAT_X_OFFSET_exact, 0x1, 457 },
    { BUFFER_LOAD_SBYTE_ADDR64, 0x1, 458 },
    { BUFFER_LOAD_SBYTE_BOTHEN, 0x1, 459 },
    { BUFFER_LOAD_SBYTE_BOTHEN_exact, 0x1, 460 },
    { BUFFER_LOAD_SBYTE_D16_ADDR64, 0x1, 461 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN, 0x1, 462 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 0x1, 463 },
    { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 0x1, 464 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 0x1, 465 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 0x1, 466 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 0x1, 467 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 0x1, 468 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 0x1, 469 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 0x1, 470 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 0x1, 471 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 0x1, 472 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN, 0x1, 473 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 0x1, 474 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN, 0x1, 475 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 0x1, 476 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET, 0x1, 477 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 0x1, 478 },
    { BUFFER_LOAD_SBYTE_IDXEN, 0x1, 479 },
    { BUFFER_LOAD_SBYTE_IDXEN_exact, 0x1, 480 },
    { BUFFER_LOAD_SBYTE_LDS_ADDR64, 0x1, 481 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN, 0x1, 482 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 0x1, 483 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN, 0x1, 484 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 0x1, 485 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN, 0x1, 486 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 0x1, 487 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET, 0x1, 488 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 0x1, 489 },
    { BUFFER_LOAD_SBYTE_OFFEN, 0x1, 490 },
    { BUFFER_LOAD_SBYTE_OFFEN_exact, 0x1, 491 },
    { BUFFER_LOAD_SBYTE_OFFSET, 0x1, 492 },
    { BUFFER_LOAD_SBYTE_OFFSET_exact, 0x1, 493 },
    { BUFFER_LOAD_SHORT_D16_ADDR64, 0x1, 494 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN, 0x1, 495 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 0x1, 496 },
    { BUFFER_LOAD_SHORT_D16_HI_ADDR64, 0x1, 497 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 0x1, 498 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 0x1, 499 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN, 0x1, 500 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 0x1, 501 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN, 0x1, 502 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 0x1, 503 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET, 0x1, 504 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 0x1, 505 },
    { BUFFER_LOAD_SHORT_D16_IDXEN, 0x1, 506 },
    { BUFFER_LOAD_SHORT_D16_IDXEN_exact, 0x1, 507 },
    { BUFFER_LOAD_SHORT_D16_OFFEN, 0x1, 508 },
    { BUFFER_LOAD_SHORT_D16_OFFEN_exact, 0x1, 509 },
    { BUFFER_LOAD_SHORT_D16_OFFSET, 0x1, 510 },
    { BUFFER_LOAD_SHORT_D16_OFFSET_exact, 0x1, 511 },
    { BUFFER_LOAD_SSHORT_ADDR64, 0x1, 512 },
    { BUFFER_LOAD_SSHORT_BOTHEN, 0x1, 513 },
    { BUFFER_LOAD_SSHORT_BOTHEN_exact, 0x1, 514 },
    { BUFFER_LOAD_SSHORT_IDXEN, 0x1, 515 },
    { BUFFER_LOAD_SSHORT_IDXEN_exact, 0x1, 516 },
    { BUFFER_LOAD_SSHORT_LDS_ADDR64, 0x1, 517 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN, 0x1, 518 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 0x1, 519 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN, 0x1, 520 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 0x1, 521 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN, 0x1, 522 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 0x1, 523 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET, 0x1, 524 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 0x1, 525 },
    { BUFFER_LOAD_SSHORT_OFFEN, 0x1, 526 },
    { BUFFER_LOAD_SSHORT_OFFEN_exact, 0x1, 527 },
    { BUFFER_LOAD_SSHORT_OFFSET, 0x1, 528 },
    { BUFFER_LOAD_SSHORT_OFFSET_exact, 0x1, 529 },
    { BUFFER_LOAD_UBYTE_ADDR64, 0x1, 530 },
    { BUFFER_LOAD_UBYTE_BOTHEN, 0x1, 531 },
    { BUFFER_LOAD_UBYTE_BOTHEN_exact, 0x1, 532 },
    { BUFFER_LOAD_UBYTE_D16_ADDR64, 0x1, 533 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN, 0x1, 534 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 0x1, 535 },
    { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 0x1, 536 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 0x1, 537 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 0x1, 538 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 0x1, 539 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 0x1, 540 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 0x1, 541 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 0x1, 542 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 0x1, 543 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 0x1, 544 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN, 0x1, 545 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 0x1, 546 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN, 0x1, 547 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 0x1, 548 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET, 0x1, 549 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 0x1, 550 },
    { BUFFER_LOAD_UBYTE_IDXEN, 0x1, 551 },
    { BUFFER_LOAD_UBYTE_IDXEN_exact, 0x1, 552 },
    { BUFFER_LOAD_UBYTE_LDS_ADDR64, 0x1, 553 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN, 0x1, 554 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 0x1, 555 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN, 0x1, 556 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 0x1, 557 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN, 0x1, 558 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 0x1, 559 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET, 0x1, 560 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 0x1, 561 },
    { BUFFER_LOAD_UBYTE_OFFEN, 0x1, 562 },
    { BUFFER_LOAD_UBYTE_OFFEN_exact, 0x1, 563 },
    { BUFFER_LOAD_UBYTE_OFFSET, 0x1, 564 },
    { BUFFER_LOAD_UBYTE_OFFSET_exact, 0x1, 565 },
    { BUFFER_LOAD_USHORT_ADDR64, 0x1, 566 },
    { BUFFER_LOAD_USHORT_BOTHEN, 0x1, 567 },
    { BUFFER_LOAD_USHORT_BOTHEN_exact, 0x1, 568 },
    { BUFFER_LOAD_USHORT_IDXEN, 0x1, 569 },
    { BUFFER_LOAD_USHORT_IDXEN_exact, 0x1, 570 },
    { BUFFER_LOAD_USHORT_LDS_ADDR64, 0x1, 571 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN, 0x1, 572 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 0x1, 573 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN, 0x1, 574 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 0x1, 575 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN, 0x1, 576 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 0x1, 577 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET, 0x1, 578 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 0x1, 579 },
    { BUFFER_LOAD_USHORT_OFFEN, 0x1, 580 },
    { BUFFER_LOAD_USHORT_OFFEN_exact, 0x1, 581 },
    { BUFFER_LOAD_USHORT_OFFSET, 0x1, 582 },
    { BUFFER_LOAD_USHORT_OFFSET_exact, 0x1, 583 },
    { BUFFER_STORE_BYTE_ADDR64, 0x1, 584 },
    { BUFFER_STORE_BYTE_BOTHEN, 0x1, 585 },
    { BUFFER_STORE_BYTE_BOTHEN_exact, 0x1, 586 },
    { BUFFER_STORE_BYTE_D16_HI_ADDR64, 0x1, 587 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN, 0x1, 588 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 0x1, 589 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN, 0x1, 590 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 0x1, 591 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN, 0x1, 592 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 0x1, 593 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET, 0x1, 594 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 0x1, 595 },
    { BUFFER_STORE_BYTE_IDXEN, 0x1, 596 },
    { BUFFER_STORE_BYTE_IDXEN_exact, 0x1, 597 },
    { BUFFER_STORE_BYTE_OFFEN, 0x1, 598 },
    { BUFFER_STORE_BYTE_OFFEN_exact, 0x1, 599 },
    { BUFFER_STORE_BYTE_OFFSET, 0x1, 600 },
    { BUFFER_STORE_BYTE_OFFSET_exact, 0x1, 601 },
    { BUFFER_STORE_DWORD_ADDR64, 0x1, 629 },
    { BUFFER_STORE_DWORD_ADDR64, 0x2, 602 },
    { BUFFER_STORE_DWORD_ADDR64, 0x3, 611 },
    { BUFFER_STORE_DWORD_ADDR64, 0x4, 620 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x1, 630 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x2, 603 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x3, 612 },
    { BUFFER_STORE_DWORD_BOTHEN, 0x4, 621 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x1, 631 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x2, 604 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x3, 613 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 0x4, 622 },
    { BUFFER_STORE_DWORD_IDXEN, 0x1, 632 },
    { BUFFER_STORE_DWORD_IDXEN, 0x2, 605 },
    { BUFFER_STORE_DWORD_IDXEN, 0x3, 614 },
    { BUFFER_STORE_DWORD_IDXEN, 0x4, 623 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x1, 633 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x2, 606 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x3, 615 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 0x4, 624 },
    { BUFFER_STORE_DWORD_OFFEN, 0x1, 634 },
    { BUFFER_STORE_DWORD_OFFEN, 0x2, 607 },
    { BUFFER_STORE_DWORD_OFFEN, 0x3, 616 },
    { BUFFER_STORE_DWORD_OFFEN, 0x4, 625 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x1, 635 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x2, 608 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x3, 617 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 0x4, 626 },
    { BUFFER_STORE_DWORD_OFFSET, 0x1, 636 },
    { BUFFER_STORE_DWORD_OFFSET, 0x2, 609 },
    { BUFFER_STORE_DWORD_OFFSET, 0x3, 618 },
    { BUFFER_STORE_DWORD_OFFSET, 0x4, 627 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x1, 637 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x2, 610 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x3, 619 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 0x4, 628 },
    { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 0x1, 638 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 0x1, 639 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 0x1, 640 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 0x1, 641 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 0x1, 642 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 0x1, 643 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 0x1, 644 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 0x1, 645 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 0x1, 646 },
    { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 0x2, 647 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 0x2, 648 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 0x2, 649 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 0x2, 650 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 0x2, 651 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 0x2, 652 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 0x2, 653 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 0x2, 654 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 0x2, 655 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 0x4, 656 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 0x4, 657 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 0x4, 658 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 0x4, 659 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 0x4, 660 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 0x4, 661 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 0x4, 662 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 0x4, 663 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 0x4, 664 },
    { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 0x2, 665 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 0x2, 666 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 0x2, 667 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 0x2, 668 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 0x2, 669 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 0x2, 670 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 0x2, 671 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 0x2, 672 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 0x2, 673 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 0x3, 674 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 0x3, 675 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 0x3, 676 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 0x3, 677 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 0x3, 678 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 0x3, 679 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 0x3, 680 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 0x3, 681 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 0x3, 682 },
    { BUFFER_STORE_FORMAT_D16_XY_ADDR64, 0x1, 683 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 0x1, 684 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 0x1, 685 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN, 0x1, 686 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 0x1, 687 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN, 0x1, 688 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 0x1, 689 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET, 0x1, 690 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 0x1, 691 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 0x2, 692 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 0x2, 693 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 0x2, 694 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 0x2, 695 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 0x2, 696 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 0x2, 697 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 0x2, 698 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 0x2, 699 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 0x2, 700 },
    { BUFFER_STORE_FORMAT_D16_X_ADDR64, 0x1, 701 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN, 0x1, 702 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 0x1, 703 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN, 0x1, 704 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 0x1, 705 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN, 0x1, 706 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 0x1, 707 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET, 0x1, 708 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 0x1, 709 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 0x1, 710 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 0x1, 711 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 0x1, 712 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 0x1, 713 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 0x1, 714 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 0x1, 715 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 0x1, 716 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 0x1, 717 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 0x1, 718 },
    { BUFFER_STORE_FORMAT_XYZW_ADDR64, 0x4, 719 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN, 0x4, 720 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 0x4, 721 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN, 0x4, 722 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 0x4, 723 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN, 0x4, 724 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 0x4, 725 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET, 0x4, 726 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 0x4, 727 },
    { BUFFER_STORE_FORMAT_XYZ_ADDR64, 0x3, 728 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN, 0x3, 729 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 0x3, 730 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN, 0x3, 731 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 0x3, 732 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN, 0x3, 733 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 0x3, 734 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET, 0x3, 735 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 0x3, 736 },
    { BUFFER_STORE_FORMAT_XY_ADDR64, 0x2, 737 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN, 0x2, 738 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 0x2, 739 },
    { BUFFER_STORE_FORMAT_XY_IDXEN, 0x2, 740 },
    { BUFFER_STORE_FORMAT_XY_IDXEN_exact, 0x2, 741 },
    { BUFFER_STORE_FORMAT_XY_OFFEN, 0x2, 742 },
    { BUFFER_STORE_FORMAT_XY_OFFEN_exact, 0x2, 743 },
    { BUFFER_STORE_FORMAT_XY_OFFSET, 0x2, 744 },
    { BUFFER_STORE_FORMAT_XY_OFFSET_exact, 0x2, 745 },
    { BUFFER_STORE_FORMAT_X_ADDR64, 0x1, 746 },
    { BUFFER_STORE_FORMAT_X_BOTHEN, 0x1, 747 },
    { BUFFER_STORE_FORMAT_X_BOTHEN_exact, 0x1, 748 },
    { BUFFER_STORE_FORMAT_X_IDXEN, 0x1, 749 },
    { BUFFER_STORE_FORMAT_X_IDXEN_exact, 0x1, 750 },
    { BUFFER_STORE_FORMAT_X_OFFEN, 0x1, 751 },
    { BUFFER_STORE_FORMAT_X_OFFEN_exact, 0x1, 752 },
    { BUFFER_STORE_FORMAT_X_OFFSET, 0x1, 753 },
    { BUFFER_STORE_FORMAT_X_OFFSET_exact, 0x1, 754 },
    { BUFFER_STORE_LDS_DWORD, 0x0, 755 },
    { BUFFER_STORE_SHORT_ADDR64, 0x1, 756 },
    { BUFFER_STORE_SHORT_BOTHEN, 0x1, 757 },
    { BUFFER_STORE_SHORT_BOTHEN_exact, 0x1, 758 },
    { BUFFER_STORE_SHORT_D16_HI_ADDR64, 0x1, 759 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN, 0x1, 760 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 0x1, 761 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN, 0x1, 762 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 0x1, 763 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN, 0x1, 764 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 0x1, 765 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET, 0x1, 766 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 0x1, 767 },
    { BUFFER_STORE_SHORT_IDXEN, 0x1, 768 },
    { BUFFER_STORE_SHORT_IDXEN_exact, 0x1, 769 },
    { BUFFER_STORE_SHORT_OFFEN, 0x1, 770 },
    { BUFFER_STORE_SHORT_OFFEN_exact, 0x1, 771 },
    { BUFFER_STORE_SHORT_OFFSET, 0x1, 772 },
    { BUFFER_STORE_SHORT_OFFSET_exact, 0x1, 773 },
    { BUFFER_WBINVL1, 0x0, 774 },
    { BUFFER_WBINVL1_SC, 0x0, 775 },
    { BUFFER_WBINVL1_VOL, 0x0, 776 },
  };

  struct KeyType {
    unsigned BaseOpcode;
    uint8_t dwords;
  };
  KeyType Key = { BaseOpcode, dwords };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.BaseOpcode < RHS.BaseOpcode)
        return true;
      if (LHS.BaseOpcode > RHS.BaseOpcode)
        return false;
      if (LHS.dwords < RHS.dwords)
        return true;
      if (LHS.dwords > RHS.dwords)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.BaseOpcode != Idx->BaseOpcode ||
      Key.dwords != Idx->dwords)
    return nullptr;
  return &MUBUFInfoTable[Idx->_index];
}

const MUBUFInfo *getMUBUFInfoFromOpcode(unsigned Opcode) {
  struct IndexType {
    unsigned Opcode;
    unsigned _index;
  };
  static const struct IndexType Index[] = {
    { BUFFER_ATOMIC_ADD_ADDR64, 0 },
    { BUFFER_ATOMIC_ADD_ADDR64_RTN, 1 },
    { BUFFER_ATOMIC_ADD_BOTHEN, 2 },
    { BUFFER_ATOMIC_ADD_BOTHEN_RTN, 3 },
    { BUFFER_ATOMIC_ADD_IDXEN, 4 },
    { BUFFER_ATOMIC_ADD_IDXEN_RTN, 5 },
    { BUFFER_ATOMIC_ADD_OFFEN, 6 },
    { BUFFER_ATOMIC_ADD_OFFEN_RTN, 7 },
    { BUFFER_ATOMIC_ADD_OFFSET, 8 },
    { BUFFER_ATOMIC_ADD_OFFSET_RTN, 9 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64, 10 },
    { BUFFER_ATOMIC_ADD_X2_ADDR64_RTN, 11 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN, 12 },
    { BUFFER_ATOMIC_ADD_X2_BOTHEN_RTN, 13 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN, 14 },
    { BUFFER_ATOMIC_ADD_X2_IDXEN_RTN, 15 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN, 16 },
    { BUFFER_ATOMIC_ADD_X2_OFFEN_RTN, 17 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET, 18 },
    { BUFFER_ATOMIC_ADD_X2_OFFSET_RTN, 19 },
    { BUFFER_ATOMIC_AND_ADDR64, 20 },
    { BUFFER_ATOMIC_AND_ADDR64_RTN, 21 },
    { BUFFER_ATOMIC_AND_BOTHEN, 22 },
    { BUFFER_ATOMIC_AND_BOTHEN_RTN, 23 },
    { BUFFER_ATOMIC_AND_IDXEN, 24 },
    { BUFFER_ATOMIC_AND_IDXEN_RTN, 25 },
    { BUFFER_ATOMIC_AND_OFFEN, 26 },
    { BUFFER_ATOMIC_AND_OFFEN_RTN, 27 },
    { BUFFER_ATOMIC_AND_OFFSET, 28 },
    { BUFFER_ATOMIC_AND_OFFSET_RTN, 29 },
    { BUFFER_ATOMIC_AND_X2_ADDR64, 30 },
    { BUFFER_ATOMIC_AND_X2_ADDR64_RTN, 31 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN, 32 },
    { BUFFER_ATOMIC_AND_X2_BOTHEN_RTN, 33 },
    { BUFFER_ATOMIC_AND_X2_IDXEN, 34 },
    { BUFFER_ATOMIC_AND_X2_IDXEN_RTN, 35 },
    { BUFFER_ATOMIC_AND_X2_OFFEN, 36 },
    { BUFFER_ATOMIC_AND_X2_OFFEN_RTN, 37 },
    { BUFFER_ATOMIC_AND_X2_OFFSET, 38 },
    { BUFFER_ATOMIC_AND_X2_OFFSET_RTN, 39 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64, 40 },
    { BUFFER_ATOMIC_CMPSWAP_ADDR64_RTN, 41 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN, 42 },
    { BUFFER_ATOMIC_CMPSWAP_BOTHEN_RTN, 43 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN, 44 },
    { BUFFER_ATOMIC_CMPSWAP_IDXEN_RTN, 45 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN, 46 },
    { BUFFER_ATOMIC_CMPSWAP_OFFEN_RTN, 47 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET, 48 },
    { BUFFER_ATOMIC_CMPSWAP_OFFSET_RTN, 49 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64, 50 },
    { BUFFER_ATOMIC_CMPSWAP_X2_ADDR64_RTN, 51 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN, 52 },
    { BUFFER_ATOMIC_CMPSWAP_X2_BOTHEN_RTN, 53 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN, 54 },
    { BUFFER_ATOMIC_CMPSWAP_X2_IDXEN_RTN, 55 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN, 56 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFEN_RTN, 57 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET, 58 },
    { BUFFER_ATOMIC_CMPSWAP_X2_OFFSET_RTN, 59 },
    { BUFFER_ATOMIC_DEC_ADDR64, 60 },
    { BUFFER_ATOMIC_DEC_ADDR64_RTN, 61 },
    { BUFFER_ATOMIC_DEC_BOTHEN, 62 },
    { BUFFER_ATOMIC_DEC_BOTHEN_RTN, 63 },
    { BUFFER_ATOMIC_DEC_IDXEN, 64 },
    { BUFFER_ATOMIC_DEC_IDXEN_RTN, 65 },
    { BUFFER_ATOMIC_DEC_OFFEN, 66 },
    { BUFFER_ATOMIC_DEC_OFFEN_RTN, 67 },
    { BUFFER_ATOMIC_DEC_OFFSET, 68 },
    { BUFFER_ATOMIC_DEC_OFFSET_RTN, 69 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64, 70 },
    { BUFFER_ATOMIC_DEC_X2_ADDR64_RTN, 71 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN, 72 },
    { BUFFER_ATOMIC_DEC_X2_BOTHEN_RTN, 73 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN, 74 },
    { BUFFER_ATOMIC_DEC_X2_IDXEN_RTN, 75 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN, 76 },
    { BUFFER_ATOMIC_DEC_X2_OFFEN_RTN, 77 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET, 78 },
    { BUFFER_ATOMIC_DEC_X2_OFFSET_RTN, 79 },
    { BUFFER_ATOMIC_INC_ADDR64, 80 },
    { BUFFER_ATOMIC_INC_ADDR64_RTN, 81 },
    { BUFFER_ATOMIC_INC_BOTHEN, 82 },
    { BUFFER_ATOMIC_INC_BOTHEN_RTN, 83 },
    { BUFFER_ATOMIC_INC_IDXEN, 84 },
    { BUFFER_ATOMIC_INC_IDXEN_RTN, 85 },
    { BUFFER_ATOMIC_INC_OFFEN, 86 },
    { BUFFER_ATOMIC_INC_OFFEN_RTN, 87 },
    { BUFFER_ATOMIC_INC_OFFSET, 88 },
    { BUFFER_ATOMIC_INC_OFFSET_RTN, 89 },
    { BUFFER_ATOMIC_INC_X2_ADDR64, 90 },
    { BUFFER_ATOMIC_INC_X2_ADDR64_RTN, 91 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN, 92 },
    { BUFFER_ATOMIC_INC_X2_BOTHEN_RTN, 93 },
    { BUFFER_ATOMIC_INC_X2_IDXEN, 94 },
    { BUFFER_ATOMIC_INC_X2_IDXEN_RTN, 95 },
    { BUFFER_ATOMIC_INC_X2_OFFEN, 96 },
    { BUFFER_ATOMIC_INC_X2_OFFEN_RTN, 97 },
    { BUFFER_ATOMIC_INC_X2_OFFSET, 98 },
    { BUFFER_ATOMIC_INC_X2_OFFSET_RTN, 99 },
    { BUFFER_ATOMIC_OR_ADDR64, 100 },
    { BUFFER_ATOMIC_OR_ADDR64_RTN, 101 },
    { BUFFER_ATOMIC_OR_BOTHEN, 102 },
    { BUFFER_ATOMIC_OR_BOTHEN_RTN, 103 },
    { BUFFER_ATOMIC_OR_IDXEN, 104 },
    { BUFFER_ATOMIC_OR_IDXEN_RTN, 105 },
    { BUFFER_ATOMIC_OR_OFFEN, 106 },
    { BUFFER_ATOMIC_OR_OFFEN_RTN, 107 },
    { BUFFER_ATOMIC_OR_OFFSET, 108 },
    { BUFFER_ATOMIC_OR_OFFSET_RTN, 109 },
    { BUFFER_ATOMIC_OR_X2_ADDR64, 110 },
    { BUFFER_ATOMIC_OR_X2_ADDR64_RTN, 111 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN, 112 },
    { BUFFER_ATOMIC_OR_X2_BOTHEN_RTN, 113 },
    { BUFFER_ATOMIC_OR_X2_IDXEN, 114 },
    { BUFFER_ATOMIC_OR_X2_IDXEN_RTN, 115 },
    { BUFFER_ATOMIC_OR_X2_OFFEN, 116 },
    { BUFFER_ATOMIC_OR_X2_OFFEN_RTN, 117 },
    { BUFFER_ATOMIC_OR_X2_OFFSET, 118 },
    { BUFFER_ATOMIC_OR_X2_OFFSET_RTN, 119 },
    { BUFFER_ATOMIC_SMAX_ADDR64, 120 },
    { BUFFER_ATOMIC_SMAX_ADDR64_RTN, 121 },
    { BUFFER_ATOMIC_SMAX_BOTHEN, 122 },
    { BUFFER_ATOMIC_SMAX_BOTHEN_RTN, 123 },
    { BUFFER_ATOMIC_SMAX_IDXEN, 124 },
    { BUFFER_ATOMIC_SMAX_IDXEN_RTN, 125 },
    { BUFFER_ATOMIC_SMAX_OFFEN, 126 },
    { BUFFER_ATOMIC_SMAX_OFFEN_RTN, 127 },
    { BUFFER_ATOMIC_SMAX_OFFSET, 128 },
    { BUFFER_ATOMIC_SMAX_OFFSET_RTN, 129 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64, 130 },
    { BUFFER_ATOMIC_SMAX_X2_ADDR64_RTN, 131 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN, 132 },
    { BUFFER_ATOMIC_SMAX_X2_BOTHEN_RTN, 133 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN, 134 },
    { BUFFER_ATOMIC_SMAX_X2_IDXEN_RTN, 135 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN, 136 },
    { BUFFER_ATOMIC_SMAX_X2_OFFEN_RTN, 137 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET, 138 },
    { BUFFER_ATOMIC_SMAX_X2_OFFSET_RTN, 139 },
    { BUFFER_ATOMIC_SMIN_ADDR64, 140 },
    { BUFFER_ATOMIC_SMIN_ADDR64_RTN, 141 },
    { BUFFER_ATOMIC_SMIN_BOTHEN, 142 },
    { BUFFER_ATOMIC_SMIN_BOTHEN_RTN, 143 },
    { BUFFER_ATOMIC_SMIN_IDXEN, 144 },
    { BUFFER_ATOMIC_SMIN_IDXEN_RTN, 145 },
    { BUFFER_ATOMIC_SMIN_OFFEN, 146 },
    { BUFFER_ATOMIC_SMIN_OFFEN_RTN, 147 },
    { BUFFER_ATOMIC_SMIN_OFFSET, 148 },
    { BUFFER_ATOMIC_SMIN_OFFSET_RTN, 149 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64, 150 },
    { BUFFER_ATOMIC_SMIN_X2_ADDR64_RTN, 151 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN, 152 },
    { BUFFER_ATOMIC_SMIN_X2_BOTHEN_RTN, 153 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN, 154 },
    { BUFFER_ATOMIC_SMIN_X2_IDXEN_RTN, 155 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN, 156 },
    { BUFFER_ATOMIC_SMIN_X2_OFFEN_RTN, 157 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET, 158 },
    { BUFFER_ATOMIC_SMIN_X2_OFFSET_RTN, 159 },
    { BUFFER_ATOMIC_SUB_ADDR64, 160 },
    { BUFFER_ATOMIC_SUB_ADDR64_RTN, 161 },
    { BUFFER_ATOMIC_SUB_BOTHEN, 162 },
    { BUFFER_ATOMIC_SUB_BOTHEN_RTN, 163 },
    { BUFFER_ATOMIC_SUB_IDXEN, 164 },
    { BUFFER_ATOMIC_SUB_IDXEN_RTN, 165 },
    { BUFFER_ATOMIC_SUB_OFFEN, 166 },
    { BUFFER_ATOMIC_SUB_OFFEN_RTN, 167 },
    { BUFFER_ATOMIC_SUB_OFFSET, 168 },
    { BUFFER_ATOMIC_SUB_OFFSET_RTN, 169 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64, 170 },
    { BUFFER_ATOMIC_SUB_X2_ADDR64_RTN, 171 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN, 172 },
    { BUFFER_ATOMIC_SUB_X2_BOTHEN_RTN, 173 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN, 174 },
    { BUFFER_ATOMIC_SUB_X2_IDXEN_RTN, 175 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN, 176 },
    { BUFFER_ATOMIC_SUB_X2_OFFEN_RTN, 177 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET, 178 },
    { BUFFER_ATOMIC_SUB_X2_OFFSET_RTN, 179 },
    { BUFFER_ATOMIC_SWAP_ADDR64, 180 },
    { BUFFER_ATOMIC_SWAP_ADDR64_RTN, 181 },
    { BUFFER_ATOMIC_SWAP_BOTHEN, 182 },
    { BUFFER_ATOMIC_SWAP_BOTHEN_RTN, 183 },
    { BUFFER_ATOMIC_SWAP_IDXEN, 184 },
    { BUFFER_ATOMIC_SWAP_IDXEN_RTN, 185 },
    { BUFFER_ATOMIC_SWAP_OFFEN, 186 },
    { BUFFER_ATOMIC_SWAP_OFFEN_RTN, 187 },
    { BUFFER_ATOMIC_SWAP_OFFSET, 188 },
    { BUFFER_ATOMIC_SWAP_OFFSET_RTN, 189 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64, 190 },
    { BUFFER_ATOMIC_SWAP_X2_ADDR64_RTN, 191 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN, 192 },
    { BUFFER_ATOMIC_SWAP_X2_BOTHEN_RTN, 193 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN, 194 },
    { BUFFER_ATOMIC_SWAP_X2_IDXEN_RTN, 195 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN, 196 },
    { BUFFER_ATOMIC_SWAP_X2_OFFEN_RTN, 197 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET, 198 },
    { BUFFER_ATOMIC_SWAP_X2_OFFSET_RTN, 199 },
    { BUFFER_ATOMIC_UMAX_ADDR64, 200 },
    { BUFFER_ATOMIC_UMAX_ADDR64_RTN, 201 },
    { BUFFER_ATOMIC_UMAX_BOTHEN, 202 },
    { BUFFER_ATOMIC_UMAX_BOTHEN_RTN, 203 },
    { BUFFER_ATOMIC_UMAX_IDXEN, 204 },
    { BUFFER_ATOMIC_UMAX_IDXEN_RTN, 205 },
    { BUFFER_ATOMIC_UMAX_OFFEN, 206 },
    { BUFFER_ATOMIC_UMAX_OFFEN_RTN, 207 },
    { BUFFER_ATOMIC_UMAX_OFFSET, 208 },
    { BUFFER_ATOMIC_UMAX_OFFSET_RTN, 209 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64, 210 },
    { BUFFER_ATOMIC_UMAX_X2_ADDR64_RTN, 211 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN, 212 },
    { BUFFER_ATOMIC_UMAX_X2_BOTHEN_RTN, 213 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN, 214 },
    { BUFFER_ATOMIC_UMAX_X2_IDXEN_RTN, 215 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN, 216 },
    { BUFFER_ATOMIC_UMAX_X2_OFFEN_RTN, 217 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET, 218 },
    { BUFFER_ATOMIC_UMAX_X2_OFFSET_RTN, 219 },
    { BUFFER_ATOMIC_UMIN_ADDR64, 220 },
    { BUFFER_ATOMIC_UMIN_ADDR64_RTN, 221 },
    { BUFFER_ATOMIC_UMIN_BOTHEN, 222 },
    { BUFFER_ATOMIC_UMIN_BOTHEN_RTN, 223 },
    { BUFFER_ATOMIC_UMIN_IDXEN, 224 },
    { BUFFER_ATOMIC_UMIN_IDXEN_RTN, 225 },
    { BUFFER_ATOMIC_UMIN_OFFEN, 226 },
    { BUFFER_ATOMIC_UMIN_OFFEN_RTN, 227 },
    { BUFFER_ATOMIC_UMIN_OFFSET, 228 },
    { BUFFER_ATOMIC_UMIN_OFFSET_RTN, 229 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64, 230 },
    { BUFFER_ATOMIC_UMIN_X2_ADDR64_RTN, 231 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN, 232 },
    { BUFFER_ATOMIC_UMIN_X2_BOTHEN_RTN, 233 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN, 234 },
    { BUFFER_ATOMIC_UMIN_X2_IDXEN_RTN, 235 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN, 236 },
    { BUFFER_ATOMIC_UMIN_X2_OFFEN_RTN, 237 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET, 238 },
    { BUFFER_ATOMIC_UMIN_X2_OFFSET_RTN, 239 },
    { BUFFER_ATOMIC_XOR_ADDR64, 240 },
    { BUFFER_ATOMIC_XOR_ADDR64_RTN, 241 },
    { BUFFER_ATOMIC_XOR_BOTHEN, 242 },
    { BUFFER_ATOMIC_XOR_BOTHEN_RTN, 243 },
    { BUFFER_ATOMIC_XOR_IDXEN, 244 },
    { BUFFER_ATOMIC_XOR_IDXEN_RTN, 245 },
    { BUFFER_ATOMIC_XOR_OFFEN, 246 },
    { BUFFER_ATOMIC_XOR_OFFEN_RTN, 247 },
    { BUFFER_ATOMIC_XOR_OFFSET, 248 },
    { BUFFER_ATOMIC_XOR_OFFSET_RTN, 249 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64, 250 },
    { BUFFER_ATOMIC_XOR_X2_ADDR64_RTN, 251 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN, 252 },
    { BUFFER_ATOMIC_XOR_X2_BOTHEN_RTN, 253 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN, 254 },
    { BUFFER_ATOMIC_XOR_X2_IDXEN_RTN, 255 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN, 256 },
    { BUFFER_ATOMIC_XOR_X2_OFFEN_RTN, 257 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET, 258 },
    { BUFFER_ATOMIC_XOR_X2_OFFSET_RTN, 259 },
    { BUFFER_LOAD_DWORDX2_ADDR64, 260 },
    { BUFFER_LOAD_DWORDX2_BOTHEN, 261 },
    { BUFFER_LOAD_DWORDX2_BOTHEN_exact, 262 },
    { BUFFER_LOAD_DWORDX2_IDXEN, 263 },
    { BUFFER_LOAD_DWORDX2_IDXEN_exact, 264 },
    { BUFFER_LOAD_DWORDX2_LDS_ADDR64, 265 },
    { BUFFER_LOAD_DWORDX2_LDS_BOTHEN, 266 },
    { BUFFER_LOAD_DWORDX2_LDS_BOTHEN_exact, 267 },
    { BUFFER_LOAD_DWORDX2_LDS_IDXEN, 268 },
    { BUFFER_LOAD_DWORDX2_LDS_IDXEN_exact, 269 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFEN, 270 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFEN_exact, 271 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFSET, 272 },
    { BUFFER_LOAD_DWORDX2_LDS_OFFSET_exact, 273 },
    { BUFFER_LOAD_DWORDX2_OFFEN, 274 },
    { BUFFER_LOAD_DWORDX2_OFFEN_exact, 275 },
    { BUFFER_LOAD_DWORDX2_OFFSET, 276 },
    { BUFFER_LOAD_DWORDX2_OFFSET_exact, 277 },
    { BUFFER_LOAD_DWORDX3_ADDR64, 278 },
    { BUFFER_LOAD_DWORDX3_BOTHEN, 279 },
    { BUFFER_LOAD_DWORDX3_BOTHEN_exact, 280 },
    { BUFFER_LOAD_DWORDX3_IDXEN, 281 },
    { BUFFER_LOAD_DWORDX3_IDXEN_exact, 282 },
    { BUFFER_LOAD_DWORDX3_LDS_ADDR64, 283 },
    { BUFFER_LOAD_DWORDX3_LDS_BOTHEN, 284 },
    { BUFFER_LOAD_DWORDX3_LDS_BOTHEN_exact, 285 },
    { BUFFER_LOAD_DWORDX3_LDS_IDXEN, 286 },
    { BUFFER_LOAD_DWORDX3_LDS_IDXEN_exact, 287 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFEN, 288 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFEN_exact, 289 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFSET, 290 },
    { BUFFER_LOAD_DWORDX3_LDS_OFFSET_exact, 291 },
    { BUFFER_LOAD_DWORDX3_OFFEN, 292 },
    { BUFFER_LOAD_DWORDX3_OFFEN_exact, 293 },
    { BUFFER_LOAD_DWORDX3_OFFSET, 294 },
    { BUFFER_LOAD_DWORDX3_OFFSET_exact, 295 },
    { BUFFER_LOAD_DWORDX4_ADDR64, 296 },
    { BUFFER_LOAD_DWORDX4_BOTHEN, 297 },
    { BUFFER_LOAD_DWORDX4_BOTHEN_exact, 298 },
    { BUFFER_LOAD_DWORDX4_IDXEN, 299 },
    { BUFFER_LOAD_DWORDX4_IDXEN_exact, 300 },
    { BUFFER_LOAD_DWORDX4_LDS_ADDR64, 301 },
    { BUFFER_LOAD_DWORDX4_LDS_BOTHEN, 302 },
    { BUFFER_LOAD_DWORDX4_LDS_BOTHEN_exact, 303 },
    { BUFFER_LOAD_DWORDX4_LDS_IDXEN, 304 },
    { BUFFER_LOAD_DWORDX4_LDS_IDXEN_exact, 305 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFEN, 306 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFEN_exact, 307 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFSET, 308 },
    { BUFFER_LOAD_DWORDX4_LDS_OFFSET_exact, 309 },
    { BUFFER_LOAD_DWORDX4_OFFEN, 310 },
    { BUFFER_LOAD_DWORDX4_OFFEN_exact, 311 },
    { BUFFER_LOAD_DWORDX4_OFFSET, 312 },
    { BUFFER_LOAD_DWORDX4_OFFSET_exact, 313 },
    { BUFFER_LOAD_DWORD_ADDR64, 314 },
    { BUFFER_LOAD_DWORD_BOTHEN, 315 },
    { BUFFER_LOAD_DWORD_BOTHEN_exact, 316 },
    { BUFFER_LOAD_DWORD_IDXEN, 317 },
    { BUFFER_LOAD_DWORD_IDXEN_exact, 318 },
    { BUFFER_LOAD_DWORD_LDS_ADDR64, 319 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN, 320 },
    { BUFFER_LOAD_DWORD_LDS_BOTHEN_exact, 321 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN, 322 },
    { BUFFER_LOAD_DWORD_LDS_IDXEN_exact, 323 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN, 324 },
    { BUFFER_LOAD_DWORD_LDS_OFFEN_exact, 325 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET, 326 },
    { BUFFER_LOAD_DWORD_LDS_OFFSET_exact, 327 },
    { BUFFER_LOAD_DWORD_OFFEN, 328 },
    { BUFFER_LOAD_DWORD_OFFEN_exact, 329 },
    { BUFFER_LOAD_DWORD_OFFSET, 330 },
    { BUFFER_LOAD_DWORD_OFFSET_exact, 331 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_ADDR64, 332 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN, 333 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_BOTHEN_exact, 334 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN, 335 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_IDXEN_exact, 336 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN, 337 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFEN_exact, 338 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET, 339 },
    { BUFFER_LOAD_FORMAT_D16_HI_X_OFFSET_exact, 340 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_ADDR64, 341 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN, 342 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_BOTHEN_exact, 343 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN, 344 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_IDXEN_exact, 345 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN, 346 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFEN_exact, 347 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET, 348 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_OFFSET_exact, 349 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_ADDR64, 350 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN, 351 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 352 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN, 353 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 354 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN, 355 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 356 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET, 357 },
    { BUFFER_LOAD_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 358 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_ADDR64, 359 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN, 360 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_BOTHEN_exact, 361 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN, 362 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_IDXEN_exact, 363 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN, 364 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFEN_exact, 365 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET, 366 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_OFFSET_exact, 367 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_ADDR64, 368 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN, 369 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 370 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN, 371 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 372 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN, 373 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 374 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET, 375 },
    { BUFFER_LOAD_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 376 },
    { BUFFER_LOAD_FORMAT_D16_XY_ADDR64, 377 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN, 378 },
    { BUFFER_LOAD_FORMAT_D16_XY_BOTHEN_exact, 379 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN, 380 },
    { BUFFER_LOAD_FORMAT_D16_XY_IDXEN_exact, 381 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN, 382 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFEN_exact, 383 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET, 384 },
    { BUFFER_LOAD_FORMAT_D16_XY_OFFSET_exact, 385 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_ADDR64, 386 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN, 387 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_BOTHEN_exact, 388 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN, 389 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_IDXEN_exact, 390 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN, 391 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFEN_exact, 392 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET, 393 },
    { BUFFER_LOAD_FORMAT_D16_XY_gfx80_OFFSET_exact, 394 },
    { BUFFER_LOAD_FORMAT_D16_X_ADDR64, 395 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN, 396 },
    { BUFFER_LOAD_FORMAT_D16_X_BOTHEN_exact, 397 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN, 398 },
    { BUFFER_LOAD_FORMAT_D16_X_IDXEN_exact, 399 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN, 400 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFEN_exact, 401 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET, 402 },
    { BUFFER_LOAD_FORMAT_D16_X_OFFSET_exact, 403 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_ADDR64, 404 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN, 405 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_BOTHEN_exact, 406 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN, 407 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_IDXEN_exact, 408 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN, 409 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFEN_exact, 410 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET, 411 },
    { BUFFER_LOAD_FORMAT_D16_X_gfx80_OFFSET_exact, 412 },
    { BUFFER_LOAD_FORMAT_XYZW_ADDR64, 413 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN, 414 },
    { BUFFER_LOAD_FORMAT_XYZW_BOTHEN_exact, 415 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN, 416 },
    { BUFFER_LOAD_FORMAT_XYZW_IDXEN_exact, 417 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN, 418 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFEN_exact, 419 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET, 420 },
    { BUFFER_LOAD_FORMAT_XYZW_OFFSET_exact, 421 },
    { BUFFER_LOAD_FORMAT_XYZ_ADDR64, 422 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN, 423 },
    { BUFFER_LOAD_FORMAT_XYZ_BOTHEN_exact, 424 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN, 425 },
    { BUFFER_LOAD_FORMAT_XYZ_IDXEN_exact, 426 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN, 427 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFEN_exact, 428 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET, 429 },
    { BUFFER_LOAD_FORMAT_XYZ_OFFSET_exact, 430 },
    { BUFFER_LOAD_FORMAT_XY_ADDR64, 431 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN, 432 },
    { BUFFER_LOAD_FORMAT_XY_BOTHEN_exact, 433 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN, 434 },
    { BUFFER_LOAD_FORMAT_XY_IDXEN_exact, 435 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN, 436 },
    { BUFFER_LOAD_FORMAT_XY_OFFEN_exact, 437 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET, 438 },
    { BUFFER_LOAD_FORMAT_XY_OFFSET_exact, 439 },
    { BUFFER_LOAD_FORMAT_X_ADDR64, 440 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN, 441 },
    { BUFFER_LOAD_FORMAT_X_BOTHEN_exact, 442 },
    { BUFFER_LOAD_FORMAT_X_IDXEN, 443 },
    { BUFFER_LOAD_FORMAT_X_IDXEN_exact, 444 },
    { BUFFER_LOAD_FORMAT_X_LDS_ADDR64, 445 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN, 446 },
    { BUFFER_LOAD_FORMAT_X_LDS_BOTHEN_exact, 447 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN, 448 },
    { BUFFER_LOAD_FORMAT_X_LDS_IDXEN_exact, 449 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN, 450 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFEN_exact, 451 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET, 452 },
    { BUFFER_LOAD_FORMAT_X_LDS_OFFSET_exact, 453 },
    { BUFFER_LOAD_FORMAT_X_OFFEN, 454 },
    { BUFFER_LOAD_FORMAT_X_OFFEN_exact, 455 },
    { BUFFER_LOAD_FORMAT_X_OFFSET, 456 },
    { BUFFER_LOAD_FORMAT_X_OFFSET_exact, 457 },
    { BUFFER_LOAD_SBYTE_ADDR64, 458 },
    { BUFFER_LOAD_SBYTE_BOTHEN, 459 },
    { BUFFER_LOAD_SBYTE_BOTHEN_exact, 460 },
    { BUFFER_LOAD_SBYTE_D16_ADDR64, 461 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN, 462 },
    { BUFFER_LOAD_SBYTE_D16_BOTHEN_exact, 463 },
    { BUFFER_LOAD_SBYTE_D16_HI_ADDR64, 464 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN, 465 },
    { BUFFER_LOAD_SBYTE_D16_HI_BOTHEN_exact, 466 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN, 467 },
    { BUFFER_LOAD_SBYTE_D16_HI_IDXEN_exact, 468 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN, 469 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFEN_exact, 470 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET, 471 },
    { BUFFER_LOAD_SBYTE_D16_HI_OFFSET_exact, 472 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN, 473 },
    { BUFFER_LOAD_SBYTE_D16_IDXEN_exact, 474 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN, 475 },
    { BUFFER_LOAD_SBYTE_D16_OFFEN_exact, 476 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET, 477 },
    { BUFFER_LOAD_SBYTE_D16_OFFSET_exact, 478 },
    { BUFFER_LOAD_SBYTE_IDXEN, 479 },
    { BUFFER_LOAD_SBYTE_IDXEN_exact, 480 },
    { BUFFER_LOAD_SBYTE_LDS_ADDR64, 481 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN, 482 },
    { BUFFER_LOAD_SBYTE_LDS_BOTHEN_exact, 483 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN, 484 },
    { BUFFER_LOAD_SBYTE_LDS_IDXEN_exact, 485 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN, 486 },
    { BUFFER_LOAD_SBYTE_LDS_OFFEN_exact, 487 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET, 488 },
    { BUFFER_LOAD_SBYTE_LDS_OFFSET_exact, 489 },
    { BUFFER_LOAD_SBYTE_OFFEN, 490 },
    { BUFFER_LOAD_SBYTE_OFFEN_exact, 491 },
    { BUFFER_LOAD_SBYTE_OFFSET, 492 },
    { BUFFER_LOAD_SBYTE_OFFSET_exact, 493 },
    { BUFFER_LOAD_SHORT_D16_ADDR64, 494 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN, 495 },
    { BUFFER_LOAD_SHORT_D16_BOTHEN_exact, 496 },
    { BUFFER_LOAD_SHORT_D16_HI_ADDR64, 497 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN, 498 },
    { BUFFER_LOAD_SHORT_D16_HI_BOTHEN_exact, 499 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN, 500 },
    { BUFFER_LOAD_SHORT_D16_HI_IDXEN_exact, 501 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN, 502 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFEN_exact, 503 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET, 504 },
    { BUFFER_LOAD_SHORT_D16_HI_OFFSET_exact, 505 },
    { BUFFER_LOAD_SHORT_D16_IDXEN, 506 },
    { BUFFER_LOAD_SHORT_D16_IDXEN_exact, 507 },
    { BUFFER_LOAD_SHORT_D16_OFFEN, 508 },
    { BUFFER_LOAD_SHORT_D16_OFFEN_exact, 509 },
    { BUFFER_LOAD_SHORT_D16_OFFSET, 510 },
    { BUFFER_LOAD_SHORT_D16_OFFSET_exact, 511 },
    { BUFFER_LOAD_SSHORT_ADDR64, 512 },
    { BUFFER_LOAD_SSHORT_BOTHEN, 513 },
    { BUFFER_LOAD_SSHORT_BOTHEN_exact, 514 },
    { BUFFER_LOAD_SSHORT_IDXEN, 515 },
    { BUFFER_LOAD_SSHORT_IDXEN_exact, 516 },
    { BUFFER_LOAD_SSHORT_LDS_ADDR64, 517 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN, 518 },
    { BUFFER_LOAD_SSHORT_LDS_BOTHEN_exact, 519 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN, 520 },
    { BUFFER_LOAD_SSHORT_LDS_IDXEN_exact, 521 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN, 522 },
    { BUFFER_LOAD_SSHORT_LDS_OFFEN_exact, 523 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET, 524 },
    { BUFFER_LOAD_SSHORT_LDS_OFFSET_exact, 525 },
    { BUFFER_LOAD_SSHORT_OFFEN, 526 },
    { BUFFER_LOAD_SSHORT_OFFEN_exact, 527 },
    { BUFFER_LOAD_SSHORT_OFFSET, 528 },
    { BUFFER_LOAD_SSHORT_OFFSET_exact, 529 },
    { BUFFER_LOAD_UBYTE_ADDR64, 530 },
    { BUFFER_LOAD_UBYTE_BOTHEN, 531 },
    { BUFFER_LOAD_UBYTE_BOTHEN_exact, 532 },
    { BUFFER_LOAD_UBYTE_D16_ADDR64, 533 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN, 534 },
    { BUFFER_LOAD_UBYTE_D16_BOTHEN_exact, 535 },
    { BUFFER_LOAD_UBYTE_D16_HI_ADDR64, 536 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN, 537 },
    { BUFFER_LOAD_UBYTE_D16_HI_BOTHEN_exact, 538 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN, 539 },
    { BUFFER_LOAD_UBYTE_D16_HI_IDXEN_exact, 540 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN, 541 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFEN_exact, 542 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET, 543 },
    { BUFFER_LOAD_UBYTE_D16_HI_OFFSET_exact, 544 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN, 545 },
    { BUFFER_LOAD_UBYTE_D16_IDXEN_exact, 546 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN, 547 },
    { BUFFER_LOAD_UBYTE_D16_OFFEN_exact, 548 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET, 549 },
    { BUFFER_LOAD_UBYTE_D16_OFFSET_exact, 550 },
    { BUFFER_LOAD_UBYTE_IDXEN, 551 },
    { BUFFER_LOAD_UBYTE_IDXEN_exact, 552 },
    { BUFFER_LOAD_UBYTE_LDS_ADDR64, 553 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN, 554 },
    { BUFFER_LOAD_UBYTE_LDS_BOTHEN_exact, 555 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN, 556 },
    { BUFFER_LOAD_UBYTE_LDS_IDXEN_exact, 557 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN, 558 },
    { BUFFER_LOAD_UBYTE_LDS_OFFEN_exact, 559 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET, 560 },
    { BUFFER_LOAD_UBYTE_LDS_OFFSET_exact, 561 },
    { BUFFER_LOAD_UBYTE_OFFEN, 562 },
    { BUFFER_LOAD_UBYTE_OFFEN_exact, 563 },
    { BUFFER_LOAD_UBYTE_OFFSET, 564 },
    { BUFFER_LOAD_UBYTE_OFFSET_exact, 565 },
    { BUFFER_LOAD_USHORT_ADDR64, 566 },
    { BUFFER_LOAD_USHORT_BOTHEN, 567 },
    { BUFFER_LOAD_USHORT_BOTHEN_exact, 568 },
    { BUFFER_LOAD_USHORT_IDXEN, 569 },
    { BUFFER_LOAD_USHORT_IDXEN_exact, 570 },
    { BUFFER_LOAD_USHORT_LDS_ADDR64, 571 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN, 572 },
    { BUFFER_LOAD_USHORT_LDS_BOTHEN_exact, 573 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN, 574 },
    { BUFFER_LOAD_USHORT_LDS_IDXEN_exact, 575 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN, 576 },
    { BUFFER_LOAD_USHORT_LDS_OFFEN_exact, 577 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET, 578 },
    { BUFFER_LOAD_USHORT_LDS_OFFSET_exact, 579 },
    { BUFFER_LOAD_USHORT_OFFEN, 580 },
    { BUFFER_LOAD_USHORT_OFFEN_exact, 581 },
    { BUFFER_LOAD_USHORT_OFFSET, 582 },
    { BUFFER_LOAD_USHORT_OFFSET_exact, 583 },
    { BUFFER_STORE_BYTE_ADDR64, 584 },
    { BUFFER_STORE_BYTE_BOTHEN, 585 },
    { BUFFER_STORE_BYTE_BOTHEN_exact, 586 },
    { BUFFER_STORE_BYTE_D16_HI_ADDR64, 587 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN, 588 },
    { BUFFER_STORE_BYTE_D16_HI_BOTHEN_exact, 589 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN, 590 },
    { BUFFER_STORE_BYTE_D16_HI_IDXEN_exact, 591 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN, 592 },
    { BUFFER_STORE_BYTE_D16_HI_OFFEN_exact, 593 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET, 594 },
    { BUFFER_STORE_BYTE_D16_HI_OFFSET_exact, 595 },
    { BUFFER_STORE_BYTE_IDXEN, 596 },
    { BUFFER_STORE_BYTE_IDXEN_exact, 597 },
    { BUFFER_STORE_BYTE_OFFEN, 598 },
    { BUFFER_STORE_BYTE_OFFEN_exact, 599 },
    { BUFFER_STORE_BYTE_OFFSET, 600 },
    { BUFFER_STORE_BYTE_OFFSET_exact, 601 },
    { BUFFER_STORE_DWORDX2_ADDR64, 602 },
    { BUFFER_STORE_DWORDX2_BOTHEN, 603 },
    { BUFFER_STORE_DWORDX2_BOTHEN_exact, 604 },
    { BUFFER_STORE_DWORDX2_IDXEN, 605 },
    { BUFFER_STORE_DWORDX2_IDXEN_exact, 606 },
    { BUFFER_STORE_DWORDX2_OFFEN, 607 },
    { BUFFER_STORE_DWORDX2_OFFEN_exact, 608 },
    { BUFFER_STORE_DWORDX2_OFFSET, 609 },
    { BUFFER_STORE_DWORDX2_OFFSET_exact, 610 },
    { BUFFER_STORE_DWORDX3_ADDR64, 611 },
    { BUFFER_STORE_DWORDX3_BOTHEN, 612 },
    { BUFFER_STORE_DWORDX3_BOTHEN_exact, 613 },
    { BUFFER_STORE_DWORDX3_IDXEN, 614 },
    { BUFFER_STORE_DWORDX3_IDXEN_exact, 615 },
    { BUFFER_STORE_DWORDX3_OFFEN, 616 },
    { BUFFER_STORE_DWORDX3_OFFEN_exact, 617 },
    { BUFFER_STORE_DWORDX3_OFFSET, 618 },
    { BUFFER_STORE_DWORDX3_OFFSET_exact, 619 },
    { BUFFER_STORE_DWORDX4_ADDR64, 620 },
    { BUFFER_STORE_DWORDX4_BOTHEN, 621 },
    { BUFFER_STORE_DWORDX4_BOTHEN_exact, 622 },
    { BUFFER_STORE_DWORDX4_IDXEN, 623 },
    { BUFFER_STORE_DWORDX4_IDXEN_exact, 624 },
    { BUFFER_STORE_DWORDX4_OFFEN, 625 },
    { BUFFER_STORE_DWORDX4_OFFEN_exact, 626 },
    { BUFFER_STORE_DWORDX4_OFFSET, 627 },
    { BUFFER_STORE_DWORDX4_OFFSET_exact, 628 },
    { BUFFER_STORE_DWORD_ADDR64, 629 },
    { BUFFER_STORE_DWORD_BOTHEN, 630 },
    { BUFFER_STORE_DWORD_BOTHEN_exact, 631 },
    { BUFFER_STORE_DWORD_IDXEN, 632 },
    { BUFFER_STORE_DWORD_IDXEN_exact, 633 },
    { BUFFER_STORE_DWORD_OFFEN, 634 },
    { BUFFER_STORE_DWORD_OFFEN_exact, 635 },
    { BUFFER_STORE_DWORD_OFFSET, 636 },
    { BUFFER_STORE_DWORD_OFFSET_exact, 637 },
    { BUFFER_STORE_FORMAT_D16_HI_X_ADDR64, 638 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN, 639 },
    { BUFFER_STORE_FORMAT_D16_HI_X_BOTHEN_exact, 640 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN, 641 },
    { BUFFER_STORE_FORMAT_D16_HI_X_IDXEN_exact, 642 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN, 643 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFEN_exact, 644 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET, 645 },
    { BUFFER_STORE_FORMAT_D16_HI_X_OFFSET_exact, 646 },
    { BUFFER_STORE_FORMAT_D16_XYZW_ADDR64, 647 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN, 648 },
    { BUFFER_STORE_FORMAT_D16_XYZW_BOTHEN_exact, 649 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN, 650 },
    { BUFFER_STORE_FORMAT_D16_XYZW_IDXEN_exact, 651 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN, 652 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFEN_exact, 653 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET, 654 },
    { BUFFER_STORE_FORMAT_D16_XYZW_OFFSET_exact, 655 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_ADDR64, 656 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN, 657 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_BOTHEN_exact, 658 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN, 659 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_IDXEN_exact, 660 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN, 661 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFEN_exact, 662 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET, 663 },
    { BUFFER_STORE_FORMAT_D16_XYZW_gfx80_OFFSET_exact, 664 },
    { BUFFER_STORE_FORMAT_D16_XYZ_ADDR64, 665 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN, 666 },
    { BUFFER_STORE_FORMAT_D16_XYZ_BOTHEN_exact, 667 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN, 668 },
    { BUFFER_STORE_FORMAT_D16_XYZ_IDXEN_exact, 669 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN, 670 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFEN_exact, 671 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET, 672 },
    { BUFFER_STORE_FORMAT_D16_XYZ_OFFSET_exact, 673 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_ADDR64, 674 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN, 675 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_BOTHEN_exact, 676 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN, 677 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_IDXEN_exact, 678 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN, 679 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFEN_exact, 680 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET, 681 },
    { BUFFER_STORE_FORMAT_D16_XYZ_gfx80_OFFSET_exact, 682 },
    { BUFFER_STORE_FORMAT_D16_XY_ADDR64, 683 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN, 684 },
    { BUFFER_STORE_FORMAT_D16_XY_BOTHEN_exact, 685 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN, 686 },
    { BUFFER_STORE_FORMAT_D16_XY_IDXEN_exact, 687 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN, 688 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFEN_exact, 689 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET, 690 },
    { BUFFER_STORE_FORMAT_D16_XY_OFFSET_exact, 691 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_ADDR64, 692 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN, 693 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_BOTHEN_exact, 694 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN, 695 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_IDXEN_exact, 696 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN, 697 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFEN_exact, 698 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET, 699 },
    { BUFFER_STORE_FORMAT_D16_XY_gfx80_OFFSET_exact, 700 },
    { BUFFER_STORE_FORMAT_D16_X_ADDR64, 701 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN, 702 },
    { BUFFER_STORE_FORMAT_D16_X_BOTHEN_exact, 703 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN, 704 },
    { BUFFER_STORE_FORMAT_D16_X_IDXEN_exact, 705 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN, 706 },
    { BUFFER_STORE_FORMAT_D16_X_OFFEN_exact, 707 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET, 708 },
    { BUFFER_STORE_FORMAT_D16_X_OFFSET_exact, 709 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_ADDR64, 710 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN, 711 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_BOTHEN_exact, 712 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN, 713 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_IDXEN_exact, 714 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN, 715 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFEN_exact, 716 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET, 717 },
    { BUFFER_STORE_FORMAT_D16_X_gfx80_OFFSET_exact, 718 },
    { BUFFER_STORE_FORMAT_XYZW_ADDR64, 719 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN, 720 },
    { BUFFER_STORE_FORMAT_XYZW_BOTHEN_exact, 721 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN, 722 },
    { BUFFER_STORE_FORMAT_XYZW_IDXEN_exact, 723 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN, 724 },
    { BUFFER_STORE_FORMAT_XYZW_OFFEN_exact, 725 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET, 726 },
    { BUFFER_STORE_FORMAT_XYZW_OFFSET_exact, 727 },
    { BUFFER_STORE_FORMAT_XYZ_ADDR64, 728 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN, 729 },
    { BUFFER_STORE_FORMAT_XYZ_BOTHEN_exact, 730 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN, 731 },
    { BUFFER_STORE_FORMAT_XYZ_IDXEN_exact, 732 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN, 733 },
    { BUFFER_STORE_FORMAT_XYZ_OFFEN_exact, 734 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET, 735 },
    { BUFFER_STORE_FORMAT_XYZ_OFFSET_exact, 736 },
    { BUFFER_STORE_FORMAT_XY_ADDR64, 737 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN, 738 },
    { BUFFER_STORE_FORMAT_XY_BOTHEN_exact, 739 },
    { BUFFER_STORE_FORMAT_XY_IDXEN, 740 },
    { BUFFER_STORE_FORMAT_XY_IDXEN_exact, 741 },
    { BUFFER_STORE_FORMAT_XY_OFFEN, 742 },
    { BUFFER_STORE_FORMAT_XY_OFFEN_exact, 743 },
    { BUFFER_STORE_FORMAT_XY_OFFSET, 744 },
    { BUFFER_STORE_FORMAT_XY_OFFSET_exact, 745 },
    { BUFFER_STORE_FORMAT_X_ADDR64, 746 },
    { BUFFER_STORE_FORMAT_X_BOTHEN, 747 },
    { BUFFER_STORE_FORMAT_X_BOTHEN_exact, 748 },
    { BUFFER_STORE_FORMAT_X_IDXEN, 749 },
    { BUFFER_STORE_FORMAT_X_IDXEN_exact, 750 },
    { BUFFER_STORE_FORMAT_X_OFFEN, 751 },
    { BUFFER_STORE_FORMAT_X_OFFEN_exact, 752 },
    { BUFFER_STORE_FORMAT_X_OFFSET, 753 },
    { BUFFER_STORE_FORMAT_X_OFFSET_exact, 754 },
    { BUFFER_STORE_LDS_DWORD, 755 },
    { BUFFER_STORE_SHORT_ADDR64, 756 },
    { BUFFER_STORE_SHORT_BOTHEN, 757 },
    { BUFFER_STORE_SHORT_BOTHEN_exact, 758 },
    { BUFFER_STORE_SHORT_D16_HI_ADDR64, 759 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN, 760 },
    { BUFFER_STORE_SHORT_D16_HI_BOTHEN_exact, 761 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN, 762 },
    { BUFFER_STORE_SHORT_D16_HI_IDXEN_exact, 763 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN, 764 },
    { BUFFER_STORE_SHORT_D16_HI_OFFEN_exact, 765 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET, 766 },
    { BUFFER_STORE_SHORT_D16_HI_OFFSET_exact, 767 },
    { BUFFER_STORE_SHORT_IDXEN, 768 },
    { BUFFER_STORE_SHORT_IDXEN_exact, 769 },
    { BUFFER_STORE_SHORT_OFFEN, 770 },
    { BUFFER_STORE_SHORT_OFFEN_exact, 771 },
    { BUFFER_STORE_SHORT_OFFSET, 772 },
    { BUFFER_STORE_SHORT_OFFSET_exact, 773 },
    { BUFFER_WBINVL1, 774 },
    { BUFFER_WBINVL1_SC, 775 },
    { BUFFER_WBINVL1_VOL, 776 },
  };

  struct KeyType {
    unsigned Opcode;
  };
  KeyType Key = { Opcode };
  auto Table = makeArrayRef(Index);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const IndexType &LHS, const KeyType &RHS) {
      if (LHS.Opcode < RHS.Opcode)
        return true;
      if (LHS.Opcode > RHS.Opcode)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Opcode != Idx->Opcode)
    return nullptr;
  return &MUBUFInfoTable[Idx->_index];
}
#endif

#ifdef GET_RsrcIntrinsics_DECL
const RsrcIntrinsic *lookupRsrcIntrinsic(unsigned Intr);
#endif

#ifdef GET_RsrcIntrinsics_IMPL
const RsrcIntrinsic RsrcIntrinsics[] = {
  { Intrinsic::amdgcn_buffer_atomic_add, 0x1, false }, // 0
  { Intrinsic::amdgcn_buffer_atomic_and, 0x1, false }, // 1
  { Intrinsic::amdgcn_buffer_atomic_cmpswap, 0x2, false }, // 2
  { Intrinsic::amdgcn_buffer_atomic_or, 0x1, false }, // 3
  { Intrinsic::amdgcn_buffer_atomic_smax, 0x1, false }, // 4
  { Intrinsic::amdgcn_buffer_atomic_smin, 0x1, false }, // 5
  { Intrinsic::amdgcn_buffer_atomic_sub, 0x1, false }, // 6
  { Intrinsic::amdgcn_buffer_atomic_swap, 0x1, false }, // 7
  { Intrinsic::amdgcn_buffer_atomic_umax, 0x1, false }, // 8
  { Intrinsic::amdgcn_buffer_atomic_umin, 0x1, false }, // 9
  { Intrinsic::amdgcn_buffer_atomic_xor, 0x1, false }, // 10
  { Intrinsic::amdgcn_buffer_load, 0x0, false }, // 11
  { Intrinsic::amdgcn_buffer_load_format, 0x0, false }, // 12
  { Intrinsic::amdgcn_buffer_store, 0x1, false }, // 13
  { Intrinsic::amdgcn_buffer_store_format, 0x1, false }, // 14
  { Intrinsic::amdgcn_image_atomic_add_1d, 0x2, true }, // 15
  { Intrinsic::amdgcn_image_atomic_add_1darray, 0x3, true }, // 16
  { Intrinsic::amdgcn_image_atomic_add_2d, 0x3, true }, // 17
  { Intrinsic::amdgcn_image_atomic_add_2darray, 0x4, true }, // 18
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa, 0x5, true }, // 19
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa, 0x4, true }, // 20
  { Intrinsic::amdgcn_image_atomic_add_3d, 0x4, true }, // 21
  { Intrinsic::amdgcn_image_atomic_add_cube, 0x4, true }, // 22
  { Intrinsic::amdgcn_image_atomic_and_1d, 0x2, true }, // 23
  { Intrinsic::amdgcn_image_atomic_and_1darray, 0x3, true }, // 24
  { Intrinsic::amdgcn_image_atomic_and_2d, 0x3, true }, // 25
  { Intrinsic::amdgcn_image_atomic_and_2darray, 0x4, true }, // 26
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa, 0x5, true }, // 27
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa, 0x4, true }, // 28
  { Intrinsic::amdgcn_image_atomic_and_3d, 0x4, true }, // 29
  { Intrinsic::amdgcn_image_atomic_and_cube, 0x4, true }, // 30
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d, 0x3, true }, // 31
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray, 0x4, true }, // 32
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d, 0x4, true }, // 33
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray, 0x5, true }, // 34
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa, 0x6, true }, // 35
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa, 0x5, true }, // 36
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d, 0x5, true }, // 37
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube, 0x5, true }, // 38
  { Intrinsic::amdgcn_image_atomic_dec_1d, 0x2, true }, // 39
  { Intrinsic::amdgcn_image_atomic_dec_1darray, 0x3, true }, // 40
  { Intrinsic::amdgcn_image_atomic_dec_2d, 0x3, true }, // 41
  { Intrinsic::amdgcn_image_atomic_dec_2darray, 0x4, true }, // 42
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa, 0x5, true }, // 43
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa, 0x4, true }, // 44
  { Intrinsic::amdgcn_image_atomic_dec_3d, 0x4, true }, // 45
  { Intrinsic::amdgcn_image_atomic_dec_cube, 0x4, true }, // 46
  { Intrinsic::amdgcn_image_atomic_inc_1d, 0x2, true }, // 47
  { Intrinsic::amdgcn_image_atomic_inc_1darray, 0x3, true }, // 48
  { Intrinsic::amdgcn_image_atomic_inc_2d, 0x3, true }, // 49
  { Intrinsic::amdgcn_image_atomic_inc_2darray, 0x4, true }, // 50
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa, 0x5, true }, // 51
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa, 0x4, true }, // 52
  { Intrinsic::amdgcn_image_atomic_inc_3d, 0x4, true }, // 53
  { Intrinsic::amdgcn_image_atomic_inc_cube, 0x4, true }, // 54
  { Intrinsic::amdgcn_image_atomic_or_1d, 0x2, true }, // 55
  { Intrinsic::amdgcn_image_atomic_or_1darray, 0x3, true }, // 56
  { Intrinsic::amdgcn_image_atomic_or_2d, 0x3, true }, // 57
  { Intrinsic::amdgcn_image_atomic_or_2darray, 0x4, true }, // 58
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa, 0x5, true }, // 59
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa, 0x4, true }, // 60
  { Intrinsic::amdgcn_image_atomic_or_3d, 0x4, true }, // 61
  { Intrinsic::amdgcn_image_atomic_or_cube, 0x4, true }, // 62
  { Intrinsic::amdgcn_image_atomic_smax_1d, 0x2, true }, // 63
  { Intrinsic::amdgcn_image_atomic_smax_1darray, 0x3, true }, // 64
  { Intrinsic::amdgcn_image_atomic_smax_2d, 0x3, true }, // 65
  { Intrinsic::amdgcn_image_atomic_smax_2darray, 0x4, true }, // 66
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa, 0x5, true }, // 67
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa, 0x4, true }, // 68
  { Intrinsic::amdgcn_image_atomic_smax_3d, 0x4, true }, // 69
  { Intrinsic::amdgcn_image_atomic_smax_cube, 0x4, true }, // 70
  { Intrinsic::amdgcn_image_atomic_smin_1d, 0x2, true }, // 71
  { Intrinsic::amdgcn_image_atomic_smin_1darray, 0x3, true }, // 72
  { Intrinsic::amdgcn_image_atomic_smin_2d, 0x3, true }, // 73
  { Intrinsic::amdgcn_image_atomic_smin_2darray, 0x4, true }, // 74
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa, 0x5, true }, // 75
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa, 0x4, true }, // 76
  { Intrinsic::amdgcn_image_atomic_smin_3d, 0x4, true }, // 77
  { Intrinsic::amdgcn_image_atomic_smin_cube, 0x4, true }, // 78
  { Intrinsic::amdgcn_image_atomic_sub_1d, 0x2, true }, // 79
  { Intrinsic::amdgcn_image_atomic_sub_1darray, 0x3, true }, // 80
  { Intrinsic::amdgcn_image_atomic_sub_2d, 0x3, true }, // 81
  { Intrinsic::amdgcn_image_atomic_sub_2darray, 0x4, true }, // 82
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa, 0x5, true }, // 83
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa, 0x4, true }, // 84
  { Intrinsic::amdgcn_image_atomic_sub_3d, 0x4, true }, // 85
  { Intrinsic::amdgcn_image_atomic_sub_cube, 0x4, true }, // 86
  { Intrinsic::amdgcn_image_atomic_swap_1d, 0x2, true }, // 87
  { Intrinsic::amdgcn_image_atomic_swap_1darray, 0x3, true }, // 88
  { Intrinsic::amdgcn_image_atomic_swap_2d, 0x3, true }, // 89
  { Intrinsic::amdgcn_image_atomic_swap_2darray, 0x4, true }, // 90
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa, 0x5, true }, // 91
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa, 0x4, true }, // 92
  { Intrinsic::amdgcn_image_atomic_swap_3d, 0x4, true }, // 93
  { Intrinsic::amdgcn_image_atomic_swap_cube, 0x4, true }, // 94
  { Intrinsic::amdgcn_image_atomic_umax_1d, 0x2, true }, // 95
  { Intrinsic::amdgcn_image_atomic_umax_1darray, 0x3, true }, // 96
  { Intrinsic::amdgcn_image_atomic_umax_2d, 0x3, true }, // 97
  { Intrinsic::amdgcn_image_atomic_umax_2darray, 0x4, true }, // 98
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa, 0x5, true }, // 99
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa, 0x4, true }, // 100
  { Intrinsic::amdgcn_image_atomic_umax_3d, 0x4, true }, // 101
  { Intrinsic::amdgcn_image_atomic_umax_cube, 0x4, true }, // 102
  { Intrinsic::amdgcn_image_atomic_umin_1d, 0x2, true }, // 103
  { Intrinsic::amdgcn_image_atomic_umin_1darray, 0x3, true }, // 104
  { Intrinsic::amdgcn_image_atomic_umin_2d, 0x3, true }, // 105
  { Intrinsic::amdgcn_image_atomic_umin_2darray, 0x4, true }, // 106
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa, 0x5, true }, // 107
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa, 0x4, true }, // 108
  { Intrinsic::amdgcn_image_atomic_umin_3d, 0x4, true }, // 109
  { Intrinsic::amdgcn_image_atomic_umin_cube, 0x4, true }, // 110
  { Intrinsic::amdgcn_image_atomic_xor_1d, 0x2, true }, // 111
  { Intrinsic::amdgcn_image_atomic_xor_1darray, 0x3, true }, // 112
  { Intrinsic::amdgcn_image_atomic_xor_2d, 0x3, true }, // 113
  { Intrinsic::amdgcn_image_atomic_xor_2darray, 0x4, true }, // 114
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa, 0x5, true }, // 115
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa, 0x4, true }, // 116
  { Intrinsic::amdgcn_image_atomic_xor_3d, 0x4, true }, // 117
  { Intrinsic::amdgcn_image_atomic_xor_cube, 0x4, true }, // 118
  { Intrinsic::amdgcn_image_gather4_2d, 0x3, true }, // 119
  { Intrinsic::amdgcn_image_gather4_2darray, 0x4, true }, // 120
  { Intrinsic::amdgcn_image_gather4_b_2d, 0x4, true }, // 121
  { Intrinsic::amdgcn_image_gather4_b_2darray, 0x5, true }, // 122
  { Intrinsic::amdgcn_image_gather4_b_cl_2d, 0x5, true }, // 123
  { Intrinsic::amdgcn_image_gather4_b_cl_2darray, 0x6, true }, // 124
  { Intrinsic::amdgcn_image_gather4_b_cl_cube, 0x6, true }, // 125
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2d, 0x6, true }, // 126
  { Intrinsic::amdgcn_image_gather4_b_cl_o_2darray, 0x7, true }, // 127
  { Intrinsic::amdgcn_image_gather4_b_cl_o_cube, 0x7, true }, // 128
  { Intrinsic::amdgcn_image_gather4_b_cube, 0x5, true }, // 129
  { Intrinsic::amdgcn_image_gather4_b_o_2d, 0x5, true }, // 130
  { Intrinsic::amdgcn_image_gather4_b_o_2darray, 0x6, true }, // 131
  { Intrinsic::amdgcn_image_gather4_b_o_cube, 0x6, true }, // 132
  { Intrinsic::amdgcn_image_gather4_c_2d, 0x4, true }, // 133
  { Intrinsic::amdgcn_image_gather4_c_2darray, 0x5, true }, // 134
  { Intrinsic::amdgcn_image_gather4_c_b_2d, 0x5, true }, // 135
  { Intrinsic::amdgcn_image_gather4_c_b_2darray, 0x6, true }, // 136
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2d, 0x6, true }, // 137
  { Intrinsic::amdgcn_image_gather4_c_b_cl_2darray, 0x7, true }, // 138
  { Intrinsic::amdgcn_image_gather4_c_b_cl_cube, 0x7, true }, // 139
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2d, 0x7, true }, // 140
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_2darray, 0x8, true }, // 141
  { Intrinsic::amdgcn_image_gather4_c_b_cl_o_cube, 0x8, true }, // 142
  { Intrinsic::amdgcn_image_gather4_c_b_cube, 0x6, true }, // 143
  { Intrinsic::amdgcn_image_gather4_c_b_o_2d, 0x6, true }, // 144
  { Intrinsic::amdgcn_image_gather4_c_b_o_2darray, 0x7, true }, // 145
  { Intrinsic::amdgcn_image_gather4_c_b_o_cube, 0x7, true }, // 146
  { Intrinsic::amdgcn_image_gather4_c_cl_2d, 0x5, true }, // 147
  { Intrinsic::amdgcn_image_gather4_c_cl_2darray, 0x6, true }, // 148
  { Intrinsic::amdgcn_image_gather4_c_cl_cube, 0x6, true }, // 149
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2d, 0x6, true }, // 150
  { Intrinsic::amdgcn_image_gather4_c_cl_o_2darray, 0x7, true }, // 151
  { Intrinsic::amdgcn_image_gather4_c_cl_o_cube, 0x7, true }, // 152
  { Intrinsic::amdgcn_image_gather4_c_cube, 0x5, true }, // 153
  { Intrinsic::amdgcn_image_gather4_c_l_2d, 0x5, true }, // 154
  { Intrinsic::amdgcn_image_gather4_c_l_2darray, 0x6, true }, // 155
  { Intrinsic::amdgcn_image_gather4_c_l_cube, 0x6, true }, // 156
  { Intrinsic::amdgcn_image_gather4_c_l_o_2d, 0x6, true }, // 157
  { Intrinsic::amdgcn_image_gather4_c_l_o_2darray, 0x7, true }, // 158
  { Intrinsic::amdgcn_image_gather4_c_l_o_cube, 0x7, true }, // 159
  { Intrinsic::amdgcn_image_gather4_c_lz_2d, 0x4, true }, // 160
  { Intrinsic::amdgcn_image_gather4_c_lz_2darray, 0x5, true }, // 161
  { Intrinsic::amdgcn_image_gather4_c_lz_cube, 0x5, true }, // 162
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2d, 0x5, true }, // 163
  { Intrinsic::amdgcn_image_gather4_c_lz_o_2darray, 0x6, true }, // 164
  { Intrinsic::amdgcn_image_gather4_c_lz_o_cube, 0x6, true }, // 165
  { Intrinsic::amdgcn_image_gather4_c_o_2d, 0x5, true }, // 166
  { Intrinsic::amdgcn_image_gather4_c_o_2darray, 0x6, true }, // 167
  { Intrinsic::amdgcn_image_gather4_c_o_cube, 0x6, true }, // 168
  { Intrinsic::amdgcn_image_gather4_cl_2d, 0x4, true }, // 169
  { Intrinsic::amdgcn_image_gather4_cl_2darray, 0x5, true }, // 170
  { Intrinsic::amdgcn_image_gather4_cl_cube, 0x5, true }, // 171
  { Intrinsic::amdgcn_image_gather4_cl_o_2d, 0x5, true }, // 172
  { Intrinsic::amdgcn_image_gather4_cl_o_2darray, 0x6, true }, // 173
  { Intrinsic::amdgcn_image_gather4_cl_o_cube, 0x6, true }, // 174
  { Intrinsic::amdgcn_image_gather4_cube, 0x4, true }, // 175
  { Intrinsic::amdgcn_image_gather4_l_2d, 0x4, true }, // 176
  { Intrinsic::amdgcn_image_gather4_l_2darray, 0x5, true }, // 177
  { Intrinsic::amdgcn_image_gather4_l_cube, 0x5, true }, // 178
  { Intrinsic::amdgcn_image_gather4_l_o_2d, 0x5, true }, // 179
  { Intrinsic::amdgcn_image_gather4_l_o_2darray, 0x6, true }, // 180
  { Intrinsic::amdgcn_image_gather4_l_o_cube, 0x6, true }, // 181
  { Intrinsic::amdgcn_image_gather4_lz_2d, 0x3, true }, // 182
  { Intrinsic::amdgcn_image_gather4_lz_2darray, 0x4, true }, // 183
  { Intrinsic::amdgcn_image_gather4_lz_cube, 0x4, true }, // 184
  { Intrinsic::amdgcn_image_gather4_lz_o_2d, 0x4, true }, // 185
  { Intrinsic::amdgcn_image_gather4_lz_o_2darray, 0x5, true }, // 186
  { Intrinsic::amdgcn_image_gather4_lz_o_cube, 0x5, true }, // 187
  { Intrinsic::amdgcn_image_gather4_o_2d, 0x4, true }, // 188
  { Intrinsic::amdgcn_image_gather4_o_2darray, 0x5, true }, // 189
  { Intrinsic::amdgcn_image_gather4_o_cube, 0x5, true }, // 190
  { Intrinsic::amdgcn_image_getlod_1d, 0x2, true }, // 191
  { Intrinsic::amdgcn_image_getlod_1darray, 0x3, true }, // 192
  { Intrinsic::amdgcn_image_getlod_2d, 0x3, true }, // 193
  { Intrinsic::amdgcn_image_getlod_2darray, 0x4, true }, // 194
  { Intrinsic::amdgcn_image_getlod_3d, 0x4, true }, // 195
  { Intrinsic::amdgcn_image_getlod_cube, 0x4, true }, // 196
  { Intrinsic::amdgcn_image_getresinfo_1d, 0x2, true }, // 197
  { Intrinsic::amdgcn_image_getresinfo_1darray, 0x2, true }, // 198
  { Intrinsic::amdgcn_image_getresinfo_2d, 0x2, true }, // 199
  { Intrinsic::amdgcn_image_getresinfo_2darray, 0x2, true }, // 200
  { Intrinsic::amdgcn_image_getresinfo_2darraymsaa, 0x2, true }, // 201
  { Intrinsic::amdgcn_image_getresinfo_2dmsaa, 0x2, true }, // 202
  { Intrinsic::amdgcn_image_getresinfo_3d, 0x2, true }, // 203
  { Intrinsic::amdgcn_image_getresinfo_cube, 0x2, true }, // 204
  { Intrinsic::amdgcn_image_load_1d, 0x2, true }, // 205
  { Intrinsic::amdgcn_image_load_1darray, 0x3, true }, // 206
  { Intrinsic::amdgcn_image_load_2d, 0x3, true }, // 207
  { Intrinsic::amdgcn_image_load_2darray, 0x4, true }, // 208
  { Intrinsic::amdgcn_image_load_2darraymsaa, 0x5, true }, // 209
  { Intrinsic::amdgcn_image_load_2dmsaa, 0x4, true }, // 210
  { Intrinsic::amdgcn_image_load_3d, 0x4, true }, // 211
  { Intrinsic::amdgcn_image_load_cube, 0x4, true }, // 212
  { Intrinsic::amdgcn_image_load_mip_1d, 0x3, true }, // 213
  { Intrinsic::amdgcn_image_load_mip_1darray, 0x4, true }, // 214
  { Intrinsic::amdgcn_image_load_mip_2d, 0x4, true }, // 215
  { Intrinsic::amdgcn_image_load_mip_2darray, 0x5, true }, // 216
  { Intrinsic::amdgcn_image_load_mip_3d, 0x5, true }, // 217
  { Intrinsic::amdgcn_image_load_mip_cube, 0x5, true }, // 218
  { Intrinsic::amdgcn_image_sample_1d, 0x2, true }, // 219
  { Intrinsic::amdgcn_image_sample_1darray, 0x3, true }, // 220
  { Intrinsic::amdgcn_image_sample_2d, 0x3, true }, // 221
  { Intrinsic::amdgcn_image_sample_2darray, 0x4, true }, // 222
  { Intrinsic::amdgcn_image_sample_3d, 0x4, true }, // 223
  { Intrinsic::amdgcn_image_sample_b_1d, 0x3, true }, // 224
  { Intrinsic::amdgcn_image_sample_b_1darray, 0x4, true }, // 225
  { Intrinsic::amdgcn_image_sample_b_2d, 0x4, true }, // 226
  { Intrinsic::amdgcn_image_sample_b_2darray, 0x5, true }, // 227
  { Intrinsic::amdgcn_image_sample_b_3d, 0x5, true }, // 228
  { Intrinsic::amdgcn_image_sample_b_cl_1d, 0x4, true }, // 229
  { Intrinsic::amdgcn_image_sample_b_cl_1darray, 0x5, true }, // 230
  { Intrinsic::amdgcn_image_sample_b_cl_2d, 0x5, true }, // 231
  { Intrinsic::amdgcn_image_sample_b_cl_2darray, 0x6, true }, // 232
  { Intrinsic::amdgcn_image_sample_b_cl_3d, 0x6, true }, // 233
  { Intrinsic::amdgcn_image_sample_b_cl_cube, 0x6, true }, // 234
  { Intrinsic::amdgcn_image_sample_b_cl_o_1d, 0x5, true }, // 235
  { Intrinsic::amdgcn_image_sample_b_cl_o_1darray, 0x6, true }, // 236
  { Intrinsic::amdgcn_image_sample_b_cl_o_2d, 0x6, true }, // 237
  { Intrinsic::amdgcn_image_sample_b_cl_o_2darray, 0x7, true }, // 238
  { Intrinsic::amdgcn_image_sample_b_cl_o_3d, 0x7, true }, // 239
  { Intrinsic::amdgcn_image_sample_b_cl_o_cube, 0x7, true }, // 240
  { Intrinsic::amdgcn_image_sample_b_cube, 0x5, true }, // 241
  { Intrinsic::amdgcn_image_sample_b_o_1d, 0x4, true }, // 242
  { Intrinsic::amdgcn_image_sample_b_o_1darray, 0x5, true }, // 243
  { Intrinsic::amdgcn_image_sample_b_o_2d, 0x5, true }, // 244
  { Intrinsic::amdgcn_image_sample_b_o_2darray, 0x6, true }, // 245
  { Intrinsic::amdgcn_image_sample_b_o_3d, 0x6, true }, // 246
  { Intrinsic::amdgcn_image_sample_b_o_cube, 0x6, true }, // 247
  { Intrinsic::amdgcn_image_sample_c_1d, 0x3, true }, // 248
  { Intrinsic::amdgcn_image_sample_c_1darray, 0x4, true }, // 249
  { Intrinsic::amdgcn_image_sample_c_2d, 0x4, true }, // 250
  { Intrinsic::amdgcn_image_sample_c_2darray, 0x5, true }, // 251
  { Intrinsic::amdgcn_image_sample_c_3d, 0x5, true }, // 252
  { Intrinsic::amdgcn_image_sample_c_b_1d, 0x4, true }, // 253
  { Intrinsic::amdgcn_image_sample_c_b_1darray, 0x5, true }, // 254
  { Intrinsic::amdgcn_image_sample_c_b_2d, 0x5, true }, // 255
  { Intrinsic::amdgcn_image_sample_c_b_2darray, 0x6, true }, // 256
  { Intrinsic::amdgcn_image_sample_c_b_3d, 0x6, true }, // 257
  { Intrinsic::amdgcn_image_sample_c_b_cl_1d, 0x5, true }, // 258
  { Intrinsic::amdgcn_image_sample_c_b_cl_1darray, 0x6, true }, // 259
  { Intrinsic::amdgcn_image_sample_c_b_cl_2d, 0x6, true }, // 260
  { Intrinsic::amdgcn_image_sample_c_b_cl_2darray, 0x7, true }, // 261
  { Intrinsic::amdgcn_image_sample_c_b_cl_3d, 0x7, true }, // 262
  { Intrinsic::amdgcn_image_sample_c_b_cl_cube, 0x7, true }, // 263
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1d, 0x6, true }, // 264
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_1darray, 0x7, true }, // 265
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2d, 0x7, true }, // 266
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_2darray, 0x8, true }, // 267
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_3d, 0x8, true }, // 268
  { Intrinsic::amdgcn_image_sample_c_b_cl_o_cube, 0x8, true }, // 269
  { Intrinsic::amdgcn_image_sample_c_b_cube, 0x6, true }, // 270
  { Intrinsic::amdgcn_image_sample_c_b_o_1d, 0x5, true }, // 271
  { Intrinsic::amdgcn_image_sample_c_b_o_1darray, 0x6, true }, // 272
  { Intrinsic::amdgcn_image_sample_c_b_o_2d, 0x6, true }, // 273
  { Intrinsic::amdgcn_image_sample_c_b_o_2darray, 0x7, true }, // 274
  { Intrinsic::amdgcn_image_sample_c_b_o_3d, 0x7, true }, // 275
  { Intrinsic::amdgcn_image_sample_c_b_o_cube, 0x7, true }, // 276
  { Intrinsic::amdgcn_image_sample_c_cd_1d, 0x5, true }, // 277
  { Intrinsic::amdgcn_image_sample_c_cd_1darray, 0x6, true }, // 278
  { Intrinsic::amdgcn_image_sample_c_cd_2d, 0x8, true }, // 279
  { Intrinsic::amdgcn_image_sample_c_cd_2darray, 0x9, true }, // 280
  { Intrinsic::amdgcn_image_sample_c_cd_3d, 0xB, true }, // 281
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1d, 0x6, true }, // 282
  { Intrinsic::amdgcn_image_sample_c_cd_cl_1darray, 0x7, true }, // 283
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2d, 0x9, true }, // 284
  { Intrinsic::amdgcn_image_sample_c_cd_cl_2darray, 0xA, true }, // 285
  { Intrinsic::amdgcn_image_sample_c_cd_cl_3d, 0xC, true }, // 286
  { Intrinsic::amdgcn_image_sample_c_cd_cl_cube, 0xA, true }, // 287
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1d, 0x7, true }, // 288
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_1darray, 0x8, true }, // 289
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2d, 0xA, true }, // 290
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_2darray, 0xB, true }, // 291
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_3d, 0xD, true }, // 292
  { Intrinsic::amdgcn_image_sample_c_cd_cl_o_cube, 0xB, true }, // 293
  { Intrinsic::amdgcn_image_sample_c_cd_cube, 0x9, true }, // 294
  { Intrinsic::amdgcn_image_sample_c_cd_o_1d, 0x6, true }, // 295
  { Intrinsic::amdgcn_image_sample_c_cd_o_1darray, 0x7, true }, // 296
  { Intrinsic::amdgcn_image_sample_c_cd_o_2d, 0x9, true }, // 297
  { Intrinsic::amdgcn_image_sample_c_cd_o_2darray, 0xA, true }, // 298
  { Intrinsic::amdgcn_image_sample_c_cd_o_3d, 0xC, true }, // 299
  { Intrinsic::amdgcn_image_sample_c_cd_o_cube, 0xA, true }, // 300
  { Intrinsic::amdgcn_image_sample_c_cl_1d, 0x4, true }, // 301
  { Intrinsic::amdgcn_image_sample_c_cl_1darray, 0x5, true }, // 302
  { Intrinsic::amdgcn_image_sample_c_cl_2d, 0x5, true }, // 303
  { Intrinsic::amdgcn_image_sample_c_cl_2darray, 0x6, true }, // 304
  { Intrinsic::amdgcn_image_sample_c_cl_3d, 0x6, true }, // 305
  { Intrinsic::amdgcn_image_sample_c_cl_cube, 0x6, true }, // 306
  { Intrinsic::amdgcn_image_sample_c_cl_o_1d, 0x5, true }, // 307
  { Intrinsic::amdgcn_image_sample_c_cl_o_1darray, 0x6, true }, // 308
  { Intrinsic::amdgcn_image_sample_c_cl_o_2d, 0x6, true }, // 309
  { Intrinsic::amdgcn_image_sample_c_cl_o_2darray, 0x7, true }, // 310
  { Intrinsic::amdgcn_image_sample_c_cl_o_3d, 0x7, true }, // 311
  { Intrinsic::amdgcn_image_sample_c_cl_o_cube, 0x7, true }, // 312
  { Intrinsic::amdgcn_image_sample_c_cube, 0x5, true }, // 313
  { Intrinsic::amdgcn_image_sample_c_d_1d, 0x5, true }, // 314
  { Intrinsic::amdgcn_image_sample_c_d_1darray, 0x6, true }, // 315
  { Intrinsic::amdgcn_image_sample_c_d_2d, 0x8, true }, // 316
  { Intrinsic::amdgcn_image_sample_c_d_2darray, 0x9, true }, // 317
  { Intrinsic::amdgcn_image_sample_c_d_3d, 0xB, true }, // 318
  { Intrinsic::amdgcn_image_sample_c_d_cl_1d, 0x6, true }, // 319
  { Intrinsic::amdgcn_image_sample_c_d_cl_1darray, 0x7, true }, // 320
  { Intrinsic::amdgcn_image_sample_c_d_cl_2d, 0x9, true }, // 321
  { Intrinsic::amdgcn_image_sample_c_d_cl_2darray, 0xA, true }, // 322
  { Intrinsic::amdgcn_image_sample_c_d_cl_3d, 0xC, true }, // 323
  { Intrinsic::amdgcn_image_sample_c_d_cl_cube, 0xA, true }, // 324
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1d, 0x7, true }, // 325
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_1darray, 0x8, true }, // 326
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2d, 0xA, true }, // 327
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_2darray, 0xB, true }, // 328
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_3d, 0xD, true }, // 329
  { Intrinsic::amdgcn_image_sample_c_d_cl_o_cube, 0xB, true }, // 330
  { Intrinsic::amdgcn_image_sample_c_d_cube, 0x9, true }, // 331
  { Intrinsic::amdgcn_image_sample_c_d_o_1d, 0x6, true }, // 332
  { Intrinsic::amdgcn_image_sample_c_d_o_1darray, 0x7, true }, // 333
  { Intrinsic::amdgcn_image_sample_c_d_o_2d, 0x9, true }, // 334
  { Intrinsic::amdgcn_image_sample_c_d_o_2darray, 0xA, true }, // 335
  { Intrinsic::amdgcn_image_sample_c_d_o_3d, 0xC, true }, // 336
  { Intrinsic::amdgcn_image_sample_c_d_o_cube, 0xA, true }, // 337
  { Intrinsic::amdgcn_image_sample_c_l_1d, 0x4, true }, // 338
  { Intrinsic::amdgcn_image_sample_c_l_1darray, 0x5, true }, // 339
  { Intrinsic::amdgcn_image_sample_c_l_2d, 0x5, true }, // 340
  { Intrinsic::amdgcn_image_sample_c_l_2darray, 0x6, true }, // 341
  { Intrinsic::amdgcn_image_sample_c_l_3d, 0x6, true }, // 342
  { Intrinsic::amdgcn_image_sample_c_l_cube, 0x6, true }, // 343
  { Intrinsic::amdgcn_image_sample_c_l_o_1d, 0x5, true }, // 344
  { Intrinsic::amdgcn_image_sample_c_l_o_1darray, 0x6, true }, // 345
  { Intrinsic::amdgcn_image_sample_c_l_o_2d, 0x6, true }, // 346
  { Intrinsic::amdgcn_image_sample_c_l_o_2darray, 0x7, true }, // 347
  { Intrinsic::amdgcn_image_sample_c_l_o_3d, 0x7, true }, // 348
  { Intrinsic::amdgcn_image_sample_c_l_o_cube, 0x7, true }, // 349
  { Intrinsic::amdgcn_image_sample_c_lz_1d, 0x3, true }, // 350
  { Intrinsic::amdgcn_image_sample_c_lz_1darray, 0x4, true }, // 351
  { Intrinsic::amdgcn_image_sample_c_lz_2d, 0x4, true }, // 352
  { Intrinsic::amdgcn_image_sample_c_lz_2darray, 0x5, true }, // 353
  { Intrinsic::amdgcn_image_sample_c_lz_3d, 0x5, true }, // 354
  { Intrinsic::amdgcn_image_sample_c_lz_cube, 0x5, true }, // 355
  { Intrinsic::amdgcn_image_sample_c_lz_o_1d, 0x4, true }, // 356
  { Intrinsic::amdgcn_image_sample_c_lz_o_1darray, 0x5, true }, // 357
  { Intrinsic::amdgcn_image_sample_c_lz_o_2d, 0x5, true }, // 358
  { Intrinsic::amdgcn_image_sample_c_lz_o_2darray, 0x6, true }, // 359
  { Intrinsic::amdgcn_image_sample_c_lz_o_3d, 0x6, true }, // 360
  { Intrinsic::amdgcn_image_sample_c_lz_o_cube, 0x6, true }, // 361
  { Intrinsic::amdgcn_image_sample_c_o_1d, 0x4, true }, // 362
  { Intrinsic::amdgcn_image_sample_c_o_1darray, 0x5, true }, // 363
  { Intrinsic::amdgcn_image_sample_c_o_2d, 0x5, true }, // 364
  { Intrinsic::amdgcn_image_sample_c_o_2darray, 0x6, true }, // 365
  { Intrinsic::amdgcn_image_sample_c_o_3d, 0x6, true }, // 366
  { Intrinsic::amdgcn_image_sample_c_o_cube, 0x6, true }, // 367
  { Intrinsic::amdgcn_image_sample_cd_1d, 0x4, true }, // 368
  { Intrinsic::amdgcn_image_sample_cd_1darray, 0x5, true }, // 369
  { Intrinsic::amdgcn_image_sample_cd_2d, 0x7, true }, // 370
  { Intrinsic::amdgcn_image_sample_cd_2darray, 0x8, true }, // 371
  { Intrinsic::amdgcn_image_sample_cd_3d, 0xA, true }, // 372
  { Intrinsic::amdgcn_image_sample_cd_cl_1d, 0x5, true }, // 373
  { Intrinsic::amdgcn_image_sample_cd_cl_1darray, 0x6, true }, // 374
  { Intrinsic::amdgcn_image_sample_cd_cl_2d, 0x8, true }, // 375
  { Intrinsic::amdgcn_image_sample_cd_cl_2darray, 0x9, true }, // 376
  { Intrinsic::amdgcn_image_sample_cd_cl_3d, 0xB, true }, // 377
  { Intrinsic::amdgcn_image_sample_cd_cl_cube, 0x9, true }, // 378
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1d, 0x6, true }, // 379
  { Intrinsic::amdgcn_image_sample_cd_cl_o_1darray, 0x7, true }, // 380
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2d, 0x9, true }, // 381
  { Intrinsic::amdgcn_image_sample_cd_cl_o_2darray, 0xA, true }, // 382
  { Intrinsic::amdgcn_image_sample_cd_cl_o_3d, 0xC, true }, // 383
  { Intrinsic::amdgcn_image_sample_cd_cl_o_cube, 0xA, true }, // 384
  { Intrinsic::amdgcn_image_sample_cd_cube, 0x8, true }, // 385
  { Intrinsic::amdgcn_image_sample_cd_o_1d, 0x5, true }, // 386
  { Intrinsic::amdgcn_image_sample_cd_o_1darray, 0x6, true }, // 387
  { Intrinsic::amdgcn_image_sample_cd_o_2d, 0x8, true }, // 388
  { Intrinsic::amdgcn_image_sample_cd_o_2darray, 0x9, true }, // 389
  { Intrinsic::amdgcn_image_sample_cd_o_3d, 0xB, true }, // 390
  { Intrinsic::amdgcn_image_sample_cd_o_cube, 0x9, true }, // 391
  { Intrinsic::amdgcn_image_sample_cl_1d, 0x3, true }, // 392
  { Intrinsic::amdgcn_image_sample_cl_1darray, 0x4, true }, // 393
  { Intrinsic::amdgcn_image_sample_cl_2d, 0x4, true }, // 394
  { Intrinsic::amdgcn_image_sample_cl_2darray, 0x5, true }, // 395
  { Intrinsic::amdgcn_image_sample_cl_3d, 0x5, true }, // 396
  { Intrinsic::amdgcn_image_sample_cl_cube, 0x5, true }, // 397
  { Intrinsic::amdgcn_image_sample_cl_o_1d, 0x4, true }, // 398
  { Intrinsic::amdgcn_image_sample_cl_o_1darray, 0x5, true }, // 399
  { Intrinsic::amdgcn_image_sample_cl_o_2d, 0x5, true }, // 400
  { Intrinsic::amdgcn_image_sample_cl_o_2darray, 0x6, true }, // 401
  { Intrinsic::amdgcn_image_sample_cl_o_3d, 0x6, true }, // 402
  { Intrinsic::amdgcn_image_sample_cl_o_cube, 0x6, true }, // 403
  { Intrinsic::amdgcn_image_sample_cube, 0x4, true }, // 404
  { Intrinsic::amdgcn_image_sample_d_1d, 0x4, true }, // 405
  { Intrinsic::amdgcn_image_sample_d_1darray, 0x5, true }, // 406
  { Intrinsic::amdgcn_image_sample_d_2d, 0x7, true }, // 407
  { Intrinsic::amdgcn_image_sample_d_2darray, 0x8, true }, // 408
  { Intrinsic::amdgcn_image_sample_d_3d, 0xA, true }, // 409
  { Intrinsic::amdgcn_image_sample_d_cl_1d, 0x5, true }, // 410
  { Intrinsic::amdgcn_image_sample_d_cl_1darray, 0x6, true }, // 411
  { Intrinsic::amdgcn_image_sample_d_cl_2d, 0x8, true }, // 412
  { Intrinsic::amdgcn_image_sample_d_cl_2darray, 0x9, true }, // 413
  { Intrinsic::amdgcn_image_sample_d_cl_3d, 0xB, true }, // 414
  { Intrinsic::amdgcn_image_sample_d_cl_cube, 0x9, true }, // 415
  { Intrinsic::amdgcn_image_sample_d_cl_o_1d, 0x6, true }, // 416
  { Intrinsic::amdgcn_image_sample_d_cl_o_1darray, 0x7, true }, // 417
  { Intrinsic::amdgcn_image_sample_d_cl_o_2d, 0x9, true }, // 418
  { Intrinsic::amdgcn_image_sample_d_cl_o_2darray, 0xA, true }, // 419
  { Intrinsic::amdgcn_image_sample_d_cl_o_3d, 0xC, true }, // 420
  { Intrinsic::amdgcn_image_sample_d_cl_o_cube, 0xA, true }, // 421
  { Intrinsic::amdgcn_image_sample_d_cube, 0x8, true }, // 422
  { Intrinsic::amdgcn_image_sample_d_o_1d, 0x5, true }, // 423
  { Intrinsic::amdgcn_image_sample_d_o_1darray, 0x6, true }, // 424
  { Intrinsic::amdgcn_image_sample_d_o_2d, 0x8, true }, // 425
  { Intrinsic::amdgcn_image_sample_d_o_2darray, 0x9, true }, // 426
  { Intrinsic::amdgcn_image_sample_d_o_3d, 0xB, true }, // 427
  { Intrinsic::amdgcn_image_sample_d_o_cube, 0x9, true }, // 428
  { Intrinsic::amdgcn_image_sample_l_1d, 0x3, true }, // 429
  { Intrinsic::amdgcn_image_sample_l_1darray, 0x4, true }, // 430
  { Intrinsic::amdgcn_image_sample_l_2d, 0x4, true }, // 431
  { Intrinsic::amdgcn_image_sample_l_2darray, 0x5, true }, // 432
  { Intrinsic::amdgcn_image_sample_l_3d, 0x5, true }, // 433
  { Intrinsic::amdgcn_image_sample_l_cube, 0x5, true }, // 434
  { Intrinsic::amdgcn_image_sample_l_o_1d, 0x4, true }, // 435
  { Intrinsic::amdgcn_image_sample_l_o_1darray, 0x5, true }, // 436
  { Intrinsic::amdgcn_image_sample_l_o_2d, 0x5, true }, // 437
  { Intrinsic::amdgcn_image_sample_l_o_2darray, 0x6, true }, // 438
  { Intrinsic::amdgcn_image_sample_l_o_3d, 0x6, true }, // 439
  { Intrinsic::amdgcn_image_sample_l_o_cube, 0x6, true }, // 440
  { Intrinsic::amdgcn_image_sample_lz_1d, 0x2, true }, // 441
  { Intrinsic::amdgcn_image_sample_lz_1darray, 0x3, true }, // 442
  { Intrinsic::amdgcn_image_sample_lz_2d, 0x3, true }, // 443
  { Intrinsic::amdgcn_image_sample_lz_2darray, 0x4, true }, // 444
  { Intrinsic::amdgcn_image_sample_lz_3d, 0x4, true }, // 445
  { Intrinsic::amdgcn_image_sample_lz_cube, 0x4, true }, // 446
  { Intrinsic::amdgcn_image_sample_lz_o_1d, 0x3, true }, // 447
  { Intrinsic::amdgcn_image_sample_lz_o_1darray, 0x4, true }, // 448
  { Intrinsic::amdgcn_image_sample_lz_o_2d, 0x4, true }, // 449
  { Intrinsic::amdgcn_image_sample_lz_o_2darray, 0x5, true }, // 450
  { Intrinsic::amdgcn_image_sample_lz_o_3d, 0x5, true }, // 451
  { Intrinsic::amdgcn_image_sample_lz_o_cube, 0x5, true }, // 452
  { Intrinsic::amdgcn_image_sample_o_1d, 0x3, true }, // 453
  { Intrinsic::amdgcn_image_sample_o_1darray, 0x4, true }, // 454
  { Intrinsic::amdgcn_image_sample_o_2d, 0x4, true }, // 455
  { Intrinsic::amdgcn_image_sample_o_2darray, 0x5, true }, // 456
  { Intrinsic::amdgcn_image_sample_o_3d, 0x5, true }, // 457
  { Intrinsic::amdgcn_image_sample_o_cube, 0x5, true }, // 458
  { Intrinsic::amdgcn_image_store_1d, 0x3, true }, // 459
  { Intrinsic::amdgcn_image_store_1darray, 0x4, true }, // 460
  { Intrinsic::amdgcn_image_store_2d, 0x4, true }, // 461
  { Intrinsic::amdgcn_image_store_2darray, 0x5, true }, // 462
  { Intrinsic::amdgcn_image_store_2darraymsaa, 0x6, true }, // 463
  { Intrinsic::amdgcn_image_store_2dmsaa, 0x5, true }, // 464
  { Intrinsic::amdgcn_image_store_3d, 0x5, true }, // 465
  { Intrinsic::amdgcn_image_store_cube, 0x5, true }, // 466
  { Intrinsic::amdgcn_image_store_mip_1d, 0x4, true }, // 467
  { Intrinsic::amdgcn_image_store_mip_1darray, 0x5, true }, // 468
  { Intrinsic::amdgcn_image_store_mip_2d, 0x5, true }, // 469
  { Intrinsic::amdgcn_image_store_mip_2darray, 0x6, true }, // 470
  { Intrinsic::amdgcn_image_store_mip_3d, 0x6, true }, // 471
  { Intrinsic::amdgcn_image_store_mip_cube, 0x6, true }, // 472
  { Intrinsic::amdgcn_raw_buffer_atomic_add, 0x1, false }, // 473
  { Intrinsic::amdgcn_raw_buffer_atomic_and, 0x1, false }, // 474
  { Intrinsic::amdgcn_raw_buffer_atomic_cmpswap, 0x2, false }, // 475
  { Intrinsic::amdgcn_raw_buffer_atomic_or, 0x1, false }, // 476
  { Intrinsic::amdgcn_raw_buffer_atomic_smax, 0x1, false }, // 477
  { Intrinsic::amdgcn_raw_buffer_atomic_smin, 0x1, false }, // 478
  { Intrinsic::amdgcn_raw_buffer_atomic_sub, 0x1, false }, // 479
  { Intrinsic::amdgcn_raw_buffer_atomic_swap, 0x1, false }, // 480
  { Intrinsic::amdgcn_raw_buffer_atomic_umax, 0x1, false }, // 481
  { Intrinsic::amdgcn_raw_buffer_atomic_umin, 0x1, false }, // 482
  { Intrinsic::amdgcn_raw_buffer_atomic_xor, 0x1, false }, // 483
  { Intrinsic::amdgcn_raw_buffer_load, 0x0, false }, // 484
  { Intrinsic::amdgcn_raw_buffer_load_format, 0x0, false }, // 485
  { Intrinsic::amdgcn_raw_buffer_store, 0x1, false }, // 486
  { Intrinsic::amdgcn_raw_buffer_store_format, 0x1, false }, // 487
  { Intrinsic::amdgcn_raw_tbuffer_load, 0x0, false }, // 488
  { Intrinsic::amdgcn_raw_tbuffer_store, 0x1, false }, // 489
  { Intrinsic::amdgcn_s_buffer_load, 0x0, false }, // 490
  { Intrinsic::amdgcn_struct_buffer_atomic_add, 0x1, false }, // 491
  { Intrinsic::amdgcn_struct_buffer_atomic_and, 0x1, false }, // 492
  { Intrinsic::amdgcn_struct_buffer_atomic_cmpswap, 0x2, false }, // 493
  { Intrinsic::amdgcn_struct_buffer_atomic_or, 0x1, false }, // 494
  { Intrinsic::amdgcn_struct_buffer_atomic_smax, 0x1, false }, // 495
  { Intrinsic::amdgcn_struct_buffer_atomic_smin, 0x1, false }, // 496
  { Intrinsic::amdgcn_struct_buffer_atomic_sub, 0x1, false }, // 497
  { Intrinsic::amdgcn_struct_buffer_atomic_swap, 0x1, false }, // 498
  { Intrinsic::amdgcn_struct_buffer_atomic_umax, 0x1, false }, // 499
  { Intrinsic::amdgcn_struct_buffer_atomic_umin, 0x1, false }, // 500
  { Intrinsic::amdgcn_struct_buffer_atomic_xor, 0x1, false }, // 501
  { Intrinsic::amdgcn_struct_buffer_load, 0x0, false }, // 502
  { Intrinsic::amdgcn_struct_buffer_load_format, 0x0, false }, // 503
  { Intrinsic::amdgcn_struct_buffer_store, 0x1, false }, // 504
  { Intrinsic::amdgcn_struct_buffer_store_format, 0x1, false }, // 505
  { Intrinsic::amdgcn_struct_tbuffer_load, 0x0, false }, // 506
  { Intrinsic::amdgcn_struct_tbuffer_store, 0x1, false }, // 507
  { Intrinsic::amdgcn_tbuffer_load, 0x0, false }, // 508
  { Intrinsic::amdgcn_tbuffer_store, 0x1, false }, // 509
 };

const RsrcIntrinsic *lookupRsrcIntrinsic(unsigned Intr) {
  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(RsrcIntrinsics);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const RsrcIntrinsic &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#ifdef GET_SourcesOfDivergence_DECL
const SourceOfDivergence *lookupSourceOfDivergence(unsigned Intr);
#endif

#ifdef GET_SourcesOfDivergence_IMPL
const SourceOfDivergence SourcesOfDivergence[] = {
  { Intrinsic::amdgcn_atomic_dec }, // 0
  { Intrinsic::amdgcn_atomic_inc }, // 1
  { Intrinsic::amdgcn_buffer_atomic_add }, // 2
  { Intrinsic::amdgcn_buffer_atomic_and }, // 3
  { Intrinsic::amdgcn_buffer_atomic_cmpswap }, // 4
  { Intrinsic::amdgcn_buffer_atomic_or }, // 5
  { Intrinsic::amdgcn_buffer_atomic_smax }, // 6
  { Intrinsic::amdgcn_buffer_atomic_smin }, // 7
  { Intrinsic::amdgcn_buffer_atomic_sub }, // 8
  { Intrinsic::amdgcn_buffer_atomic_swap }, // 9
  { Intrinsic::amdgcn_buffer_atomic_umax }, // 10
  { Intrinsic::amdgcn_buffer_atomic_umin }, // 11
  { Intrinsic::amdgcn_buffer_atomic_xor }, // 12
  { Intrinsic::amdgcn_ds_fadd }, // 13
  { Intrinsic::amdgcn_ds_fmax }, // 14
  { Intrinsic::amdgcn_ds_fmin }, // 15
  { Intrinsic::amdgcn_ds_ordered_add }, // 16
  { Intrinsic::amdgcn_ds_ordered_swap }, // 17
  { Intrinsic::amdgcn_ds_swizzle }, // 18
  { Intrinsic::amdgcn_image_atomic_add_1d }, // 19
  { Intrinsic::amdgcn_image_atomic_add_1darray }, // 20
  { Intrinsic::amdgcn_image_atomic_add_2d }, // 21
  { Intrinsic::amdgcn_image_atomic_add_2darray }, // 22
  { Intrinsic::amdgcn_image_atomic_add_2darraymsaa }, // 23
  { Intrinsic::amdgcn_image_atomic_add_2dmsaa }, // 24
  { Intrinsic::amdgcn_image_atomic_add_3d }, // 25
  { Intrinsic::amdgcn_image_atomic_add_cube }, // 26
  { Intrinsic::amdgcn_image_atomic_and_1d }, // 27
  { Intrinsic::amdgcn_image_atomic_and_1darray }, // 28
  { Intrinsic::amdgcn_image_atomic_and_2d }, // 29
  { Intrinsic::amdgcn_image_atomic_and_2darray }, // 30
  { Intrinsic::amdgcn_image_atomic_and_2darraymsaa }, // 31
  { Intrinsic::amdgcn_image_atomic_and_2dmsaa }, // 32
  { Intrinsic::amdgcn_image_atomic_and_3d }, // 33
  { Intrinsic::amdgcn_image_atomic_and_cube }, // 34
  { Intrinsic::amdgcn_image_atomic_cmpswap_1d }, // 35
  { Intrinsic::amdgcn_image_atomic_cmpswap_1darray }, // 36
  { Intrinsic::amdgcn_image_atomic_cmpswap_2d }, // 37
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darray }, // 38
  { Intrinsic::amdgcn_image_atomic_cmpswap_2darraymsaa }, // 39
  { Intrinsic::amdgcn_image_atomic_cmpswap_2dmsaa }, // 40
  { Intrinsic::amdgcn_image_atomic_cmpswap_3d }, // 41
  { Intrinsic::amdgcn_image_atomic_cmpswap_cube }, // 42
  { Intrinsic::amdgcn_image_atomic_dec_1d }, // 43
  { Intrinsic::amdgcn_image_atomic_dec_1darray }, // 44
  { Intrinsic::amdgcn_image_atomic_dec_2d }, // 45
  { Intrinsic::amdgcn_image_atomic_dec_2darray }, // 46
  { Intrinsic::amdgcn_image_atomic_dec_2darraymsaa }, // 47
  { Intrinsic::amdgcn_image_atomic_dec_2dmsaa }, // 48
  { Intrinsic::amdgcn_image_atomic_dec_3d }, // 49
  { Intrinsic::amdgcn_image_atomic_dec_cube }, // 50
  { Intrinsic::amdgcn_image_atomic_inc_1d }, // 51
  { Intrinsic::amdgcn_image_atomic_inc_1darray }, // 52
  { Intrinsic::amdgcn_image_atomic_inc_2d }, // 53
  { Intrinsic::amdgcn_image_atomic_inc_2darray }, // 54
  { Intrinsic::amdgcn_image_atomic_inc_2darraymsaa }, // 55
  { Intrinsic::amdgcn_image_atomic_inc_2dmsaa }, // 56
  { Intrinsic::amdgcn_image_atomic_inc_3d }, // 57
  { Intrinsic::amdgcn_image_atomic_inc_cube }, // 58
  { Intrinsic::amdgcn_image_atomic_or_1d }, // 59
  { Intrinsic::amdgcn_image_atomic_or_1darray }, // 60
  { Intrinsic::amdgcn_image_atomic_or_2d }, // 61
  { Intrinsic::amdgcn_image_atomic_or_2darray }, // 62
  { Intrinsic::amdgcn_image_atomic_or_2darraymsaa }, // 63
  { Intrinsic::amdgcn_image_atomic_or_2dmsaa }, // 64
  { Intrinsic::amdgcn_image_atomic_or_3d }, // 65
  { Intrinsic::amdgcn_image_atomic_or_cube }, // 66
  { Intrinsic::amdgcn_image_atomic_smax_1d }, // 67
  { Intrinsic::amdgcn_image_atomic_smax_1darray }, // 68
  { Intrinsic::amdgcn_image_atomic_smax_2d }, // 69
  { Intrinsic::amdgcn_image_atomic_smax_2darray }, // 70
  { Intrinsic::amdgcn_image_atomic_smax_2darraymsaa }, // 71
  { Intrinsic::amdgcn_image_atomic_smax_2dmsaa }, // 72
  { Intrinsic::amdgcn_image_atomic_smax_3d }, // 73
  { Intrinsic::amdgcn_image_atomic_smax_cube }, // 74
  { Intrinsic::amdgcn_image_atomic_smin_1d }, // 75
  { Intrinsic::amdgcn_image_atomic_smin_1darray }, // 76
  { Intrinsic::amdgcn_image_atomic_smin_2d }, // 77
  { Intrinsic::amdgcn_image_atomic_smin_2darray }, // 78
  { Intrinsic::amdgcn_image_atomic_smin_2darraymsaa }, // 79
  { Intrinsic::amdgcn_image_atomic_smin_2dmsaa }, // 80
  { Intrinsic::amdgcn_image_atomic_smin_3d }, // 81
  { Intrinsic::amdgcn_image_atomic_smin_cube }, // 82
  { Intrinsic::amdgcn_image_atomic_sub_1d }, // 83
  { Intrinsic::amdgcn_image_atomic_sub_1darray }, // 84
  { Intrinsic::amdgcn_image_atomic_sub_2d }, // 85
  { Intrinsic::amdgcn_image_atomic_sub_2darray }, // 86
  { Intrinsic::amdgcn_image_atomic_sub_2darraymsaa }, // 87
  { Intrinsic::amdgcn_image_atomic_sub_2dmsaa }, // 88
  { Intrinsic::amdgcn_image_atomic_sub_3d }, // 89
  { Intrinsic::amdgcn_image_atomic_sub_cube }, // 90
  { Intrinsic::amdgcn_image_atomic_swap_1d }, // 91
  { Intrinsic::amdgcn_image_atomic_swap_1darray }, // 92
  { Intrinsic::amdgcn_image_atomic_swap_2d }, // 93
  { Intrinsic::amdgcn_image_atomic_swap_2darray }, // 94
  { Intrinsic::amdgcn_image_atomic_swap_2darraymsaa }, // 95
  { Intrinsic::amdgcn_image_atomic_swap_2dmsaa }, // 96
  { Intrinsic::amdgcn_image_atomic_swap_3d }, // 97
  { Intrinsic::amdgcn_image_atomic_swap_cube }, // 98
  { Intrinsic::amdgcn_image_atomic_umax_1d }, // 99
  { Intrinsic::amdgcn_image_atomic_umax_1darray }, // 100
  { Intrinsic::amdgcn_image_atomic_umax_2d }, // 101
  { Intrinsic::amdgcn_image_atomic_umax_2darray }, // 102
  { Intrinsic::amdgcn_image_atomic_umax_2darraymsaa }, // 103
  { Intrinsic::amdgcn_image_atomic_umax_2dmsaa }, // 104
  { Intrinsic::amdgcn_image_atomic_umax_3d }, // 105
  { Intrinsic::amdgcn_image_atomic_umax_cube }, // 106
  { Intrinsic::amdgcn_image_atomic_umin_1d }, // 107
  { Intrinsic::amdgcn_image_atomic_umin_1darray }, // 108
  { Intrinsic::amdgcn_image_atomic_umin_2d }, // 109
  { Intrinsic::amdgcn_image_atomic_umin_2darray }, // 110
  { Intrinsic::amdgcn_image_atomic_umin_2darraymsaa }, // 111
  { Intrinsic::amdgcn_image_atomic_umin_2dmsaa }, // 112
  { Intrinsic::amdgcn_image_atomic_umin_3d }, // 113
  { Intrinsic::amdgcn_image_atomic_umin_cube }, // 114
  { Intrinsic::amdgcn_image_atomic_xor_1d }, // 115
  { Intrinsic::amdgcn_image_atomic_xor_1darray }, // 116
  { Intrinsic::amdgcn_image_atomic_xor_2d }, // 117
  { Intrinsic::amdgcn_image_atomic_xor_2darray }, // 118
  { Intrinsic::amdgcn_image_atomic_xor_2darraymsaa }, // 119
  { Intrinsic::amdgcn_image_atomic_xor_2dmsaa }, // 120
  { Intrinsic::amdgcn_image_atomic_xor_3d }, // 121
  { Intrinsic::amdgcn_image_atomic_xor_cube }, // 122
  { Intrinsic::amdgcn_interp_mov }, // 123
  { Intrinsic::amdgcn_interp_p1 }, // 124
  { Intrinsic::amdgcn_interp_p2 }, // 125
  { Intrinsic::amdgcn_mbcnt_hi }, // 126
  { Intrinsic::amdgcn_mbcnt_lo }, // 127
  { Intrinsic::amdgcn_ps_live }, // 128
  { Intrinsic::amdgcn_workitem_id_x }, // 129
  { Intrinsic::amdgcn_workitem_id_y }, // 130
  { Intrinsic::amdgcn_workitem_id_z }, // 131
  { Intrinsic::r600_read_tidig_x }, // 132
  { Intrinsic::r600_read_tidig_y }, // 133
  { Intrinsic::r600_read_tidig_z }, // 134
 };

const SourceOfDivergence *lookupSourceOfDivergence(unsigned Intr) {
  struct KeyType {
    unsigned Intr;
  };
  KeyType Key = { Intr };
  auto Table = makeArrayRef(SourcesOfDivergence);
  auto Idx = std::lower_bound(Table.begin(), Table.end(), Key,
    [](const SourceOfDivergence &LHS, const KeyType &RHS) {
      if (LHS.Intr < RHS.Intr)
        return true;
      if (LHS.Intr > RHS.Intr)
        return false;
      return false;
    });

  if (Idx == Table.end() ||
      Key.Intr != Idx->Intr)
    return nullptr;
  return &*Idx;
}
#endif

#undef GET_ImageDimIntrinsicTable_DECL
#undef GET_ImageDimIntrinsicTable_IMPL
#undef GET_MIMGBaseOpcode_DECL
#undef GET_MIMGBaseOpcodesTable_DECL
#undef GET_MIMGBaseOpcodesTable_IMPL
#undef GET_MIMGDimInfoTable_DECL
#undef GET_MIMGDimInfoTable_IMPL
#undef GET_MIMGDim_DECL
#undef GET_MIMGEncoding_DECL
#undef GET_MIMGInfoTable_DECL
#undef GET_MIMGInfoTable_IMPL
#undef GET_MIMGLZMappingTable_DECL
#undef GET_MIMGLZMappingTable_IMPL
#undef GET_MUBUFInfoTable_DECL
#undef GET_MUBUFInfoTable_IMPL
#undef GET_RsrcIntrinsics_DECL
#undef GET_RsrcIntrinsics_IMPL
#undef GET_SourcesOfDivergence_DECL
#undef GET_SourcesOfDivergence_IMPL

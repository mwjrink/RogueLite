/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Intrinsic Function Source Fragment                                         *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// VisualStudio defines setjmp as _setjmp
#if defined(_MSC_VER) && defined(setjmp) && \
                         !defined(setjmp_undefined_for_msvc)
#  pragma push_macro("setjmp")
#  undef setjmp
#  define setjmp_undefined_for_msvc
#endif

// Target mapping
#ifdef GET_INTRINSIC_TARGET_DATA
struct IntrinsicTargetInfo {
  llvm::StringLiteral Name;
  size_t Offset;
  size_t Count;
};
static constexpr IntrinsicTargetInfo TargetInfos[] = {
  {llvm::StringLiteral(""), 0, 0},
  {llvm::StringLiteral("SI"), 0, 1},
};
#endif

// Intrinsic ID to name table
#ifdef GET_INTRINSIC_NAME_TABLE
  // Note that entry #0 is the invalid intrinsic!
  "llvm.SI.load.const",
#endif

// Intrinsic ID to overload bitset
#ifdef GET_INTRINSIC_OVERLOAD_TABLE
static const uint8_t OTable[] = {
  0 | (1<<1)
};

return (OTable[id/8] & (1 << (id%8))) != 0;
#endif

// Global intrinsic function declaration type table.
#ifdef GET_INTRINSIC_GENERATOR_GLOBAL
static const unsigned IIT_Table[] = {
  0x41f7, 0
};

static const unsigned char IIT_LongEncodingTable[] = {
  255
};

#endif

// Add parameter attributes that are not common to all intrinsics.
#ifdef GET_INTRINSIC_ATTRIBUTES
static AttributeList getAttributes(LLVMContext &C, SIIntrinsic::ID id) {
  static const uint8_t IntrinsicsToAttributesMap[] = {
    1, // llvm.SI.load.const
  };

  AttributeList AS[1];
  unsigned NumAttrs = 0;
  if (id != 0) {
    switch(IntrinsicsToAttributesMap[id - Intrinsic::num_intrinsics]) {
    default: llvm_unreachable("Invalid attribute number");
    case 1: {
      const Attribute::AttrKind Atts[] = {Attribute::NoUnwind,Attribute::ReadNone};
      AS[0] = AttributeList::get(C, AttributeList::FunctionIndex, Atts);
      NumAttrs = 1;
      break;
      }
    }
  }
  return AttributeList::get(C, makeArrayRef(AS, NumAttrs));
}
#endif // GET_INTRINSIC_ATTRIBUTES

// Get the LLVM intrinsic that corresponds to a builtin.
// This is used by the C front-end.  The builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_GCC_BUILTIN
static SIIntrinsic::ID getIntrinsicForGCCBuiltin(const char *TargetPrefixStr, StringRef BuiltinNameStr) {
  return (SIIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

// Get the LLVM intrinsic that corresponds to a builtin.
// This is used by the C front-end.  The builtin name is passed
// in as BuiltinName, and a target prefix (e.g. 'ppc') is passed
// in as TargetPrefix.  The result is assigned to 'IntrinsicID'.
#ifdef GET_LLVM_INTRINSIC_FOR_MS_BUILTIN
static SIIntrinsic::ID getIntrinsicForMSBuiltin(const char *TargetPrefixStr, StringRef BuiltinNameStr) {
  return (SIIntrinsic::ID)Intrinsic::not_intrinsic;
}
#endif

#if defined(_MSC_VER) && defined(setjmp_undefined_for_msvc)
// let's return it to _setjmp state
#  pragma pop_macro("setjmp")
#  undef setjmp_undefined_for_msvc
#endif


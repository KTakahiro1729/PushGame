/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/allosteric/.choosenim/toolchains/nim-0.18.0/lib -o /media/allosteric/Data/Arts/nim/BeforeGamer/Push/src/nimcache/stdlib_tables.o /media/allosteric/Data/Arts/nim/BeforeGamer/Push/src/nimcache/stdlib_tables.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef powerpc
#undef unix
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple_DTy5no9cl66GOLoMhrMJm8A tyTuple_DTy5no9cl66GOLoMhrMJm8A;
typedef struct tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA;
typedef struct tySequence_y9aTBJ79cxanGa2fAuei6iIg tySequence_y9aTBJ79cxanGa2fAuei6iIg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_Yt1nTvhqbfseJu4tLVyjRw tyTuple_Yt1nTvhqbfseJu4tLVyjRw;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg;
typedef struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence_uB9b75OUPRENsBAu4AnoePA tySequence_uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA;
typedef struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w;
typedef struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA {
tySequence_y9aTBJ79cxanGa2fAuei6iIg* data;
NI counter;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw;
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyTuple_Yt1nTvhqbfseJu4tLVyjRw {
NI Field0;
tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw Field1;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ Field2;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tyTuple_DTy5no9cl66GOLoMhrMJm8A {
tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw Field0;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ Field1;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence_uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA {
  Exception Sup;
};
struct tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg {
  tyObject_ValueError_Gi06FkNeykJn7mrqRZYrkA Sup;
};
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w {
NI prevSize;
NI size;
};
struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* next;
tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* prev;
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* freeList;
NI free;
NI acc;
NF data;
};
struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg {
  tyObject_BaseChunk_Sdq7WpT6qAH858F5ZEdG3w Sup;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* next;
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* prev;
NF data;
};
struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw {
NI size;
NI acc;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* next;
};
typedef NI tyArray_9a8QARi5WsUggNU9bom7kzTQ[8];
struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw {
tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg {
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* next;
NI key;
tyArray_9a8QARi5WsUggNU9bom7kzTQ bits;
};
struct tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ {
tyObject_FreeCell_u6M5LHprqzkn9axr04yg9bGQ* next;
NI zeroField;
};
struct tySequence_y9aTBJ79cxanGa2fAuei6iIg {
  TGenericSeq Sup;
  tyTuple_Yt1nTvhqbfseJu4tLVyjRw data[SEQ_DECL_SIZE];
};
struct tySequence_uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry_oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
static N_INLINE(NIM_BOOL, isEmpty_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode);
static N_INLINE(NIM_BOOL, mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables)(NI length, NI counter);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA)(NimStringDesc* msg);
N_NIMCALL(NI, mulInt)(NI a, NI b);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash);
static N_INLINE(NI, addInt)(NI a, NI b);
static N_INLINE(NI, rightSize_l3wfAVpWNBWtzL8kQfvMMAtables)(NI count);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA)(NI x);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NOINLINE(void, chckNil)(void* p);
static N_NIMCALL(void, Marker_tySequence_y9aTBJ79cxanGa2fAuei6iIg)(void* p, NI op);
N_NIMCALL(void, genericReset)(void* dest, TNimType* mt);
N_LIB_PRIVATE N_NIMCALL(void, initTable_N7bjLk6dihuKs0wAHJ9cAaQ)(NI initialSize, tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* Result);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg)(NI x);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOINLINE(void, raiseIndexError)(void);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq__mGV0T7Bw850xV3ze03Q9cJw)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ val);
static N_INLINE(NI, rawGet_AHdLKezz07NuzDUvZosDZgtables)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, NI* hc);
static N_INLINE(NI, hash_wja033thh0Z4NAd9bdBGScwtables)(tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw x);
N_LIB_PRIVATE N_NIMCALL(void, enlarge_aOo9ajIlXKCyMmB9ajxWw9a4g)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t);
N_LIB_PRIVATE N_NIMCALL(void, rawInsert_JIx5ModQQZZoBfiSfMt3gQ)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t, tySequence_y9aTBJ79cxanGa2fAuei6iIg** data, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ val, NI hc, NI h);
static N_INLINE(NI, rawGetKnownHC_n60yivyEBqJdPM2o7lYUhQtables)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, NI hc);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr);
static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_fCDI7oO1NNVXXURtxSzsRw)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_;
TNimType NTI_Yt1nTvhqbfseJu4tLVyjRw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_cLjoWhgzLRaR7YLGawE7Uw_;
extern TNimType NTI_1v9bKyksXWMsm0vNwmZ4EuQ_;
TNimType NTI_y9aTBJ79cxanGa2fAuei6iIg_;
extern TNimType NTI_axqhRnwd09cVJkRcojfw6mA_;
extern TNimType NTI_ifYAhUumNzWR9c9cN9amyJLtg_;
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
STRING_LITERAL(TM_4SoG2KRQy3oMm9aUzSLtGrA_2, "\012counter < length ", 18);
STRING_LITERAL(TM_4SoG2KRQy3oMm9aUzSLtGrA_12, "isPowerOfTwo(initialSize) ", 26);
STRING_LITERAL(TM_4SoG2KRQy3oMm9aUzSLtGrA_20, "key not found: ", 15);

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

static N_INLINE(NIM_BOOL, isEmpty_IxXD1UAPoEehVDW9cv9cRaewtables)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isEmpty", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(15, "tableimpl.nim");
	result = (hcode == ((NI) 0));
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables)(NI hcode) {
	NIM_BOOL result;
	nimfr_("isFilled", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(18, "tableimpl.nim");
	nimln_(398, "system.nim");
	nimln_(18, "tableimpl.nim");
	result = !((hcode == ((NI) 0)));
	popFrame();
	return result;
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NIM_BOOL, mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables)(NI length, NI counter) {
	NIM_BOOL result;
	NIM_BOOL T5_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_3;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_4;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_5;
	nimfr_("mustRehash", "tableimpl.nim");
	result = (NIM_BOOL)0;
	nimln_(24, "tableimpl.nim");
	{
		if (!!((counter < length))) goto LA3_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_4SoG2KRQy3oMm9aUzSLtGrA_2));
	}
	LA3_: ;
	nimln_(25, "tableimpl.nim");
	T5_ = (NIM_BOOL)0;
	TM_4SoG2KRQy3oMm9aUzSLtGrA_3 = mulInt(length, ((NI) 2));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_4 = mulInt(counter, ((NI) 3));
	T5_ = ((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_3) < (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_4));
	if (T5_) goto LA6_;
	TM_4SoG2KRQy3oMm9aUzSLtGrA_5 = subInt(length, counter);
	T5_ = ((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_5) < ((NI) 4));
	LA6_: ;
	result = T5_;
	popFrame();
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, nextTry_OLPhxSyW9bte5CwHzzQVhfAtables)(NI h, NI maxHash) {
	NI result;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_6;
	nimfr_("nextTry", "tableimpl.nim");
	result = (NI)0;
	nimln_(28, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_6 = addInt(h, ((NI) 1));
	result = (NI)((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_6) & maxHash);
	popFrame();
	return result;
}

static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	{
		NIM_BOOL T7_;
		T7_ = (NIM_BOOL)0;
		T7_ = (a == ((NI) (IL64(-9223372036854775807) - IL64(1))));
		if (!(T7_)) goto LA8_;
		T7_ = (b == ((NI) -1));
		LA8_: ;
		if (!T7_) goto LA9_;
		raiseOverflow();
	}
	LA9_: ;
	result = (NI)(a / b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, rightSize_l3wfAVpWNBWtzL8kQfvMMAtables)(NI count) {
	NI result;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_7;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_8;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_9;
	nimfr_("rightSize", "tables.nim");
	result = (NI)0;
	nimln_(136, "tables.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_7 = mulInt(((NI) (count)), ((NI) 3));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_8 = divInt((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_7), ((NI) 2));
	TM_4SoG2KRQy3oMm9aUzSLtGrA_9 = addInt((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_8), ((NI) 4));
	result = nextPowerOfTwo_gcitR3TEXHJ3GR9bmwIvtRA((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_9));
	popFrame();
	return result;
}
static N_NIMCALL(void, Marker_tySequence_y9aTBJ79cxanGa2fAuei6iIg)(void* p, NI op) {
	tySequence_y9aTBJ79cxanGa2fAuei6iIg* a;
	NI T1_;
	a = (tySequence_y9aTBJ79cxanGa2fAuei6iIg*)p;
	T1_ = (NI)0;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, initTable_N7bjLk6dihuKs0wAHJ9cAaQ)(NI initialSize, tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* Result) {
	nimfr_("initTable", "tables.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_));
	nimln_(324, "tables.nim");
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = isPowerOfTwo_M0Db9b9cHxuUgw2ZF0P8utPg(initialSize);
		if (!!(T3_)) goto LA4_;
		failedAssertImpl_aDmpBTs9cPuXp0Mp9cfiNeyA(((NimStringDesc*) &TM_4SoG2KRQy3oMm9aUzSLtGrA_12));
	}
	LA4_: ;
	nimln_(325, "tables.nim");
	(*Result).counter = ((NI) 0);
	nimln_(326, "tables.nim");
	unsureAsgnRef((void**) (&(*Result).data), (tySequence_y9aTBJ79cxanGa2fAuei6iIg*) newSeq((&NTI_y9aTBJ79cxanGa2fAuei6iIg_), ((NI)chckRange(initialSize, ((NI) 0), ((NI) IL64(9223372036854775807))))));
	popFrame();
}

static N_INLINE(NI, hash_wja033thh0Z4NAd9bdBGScwtables)(tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw x) {
	NI result;
	nimfr_("hash", "hashes.nim");
	result = (NI)0;
	nimln_(129, "hashes.nim");
	result = x;
	popFrame();
	return result;
}

static N_INLINE(NI, rawGet_AHdLKezz07NuzDUvZosDZgtables)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, NI* hc) {
	NI result;
	NI h;
	NI T5_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_13;
	nimfr_("rawGet", "tableimpl.nim");
{	result = (NI)0;
	nimln_(53, "tableimpl.nim");
	(*hc) = hash_wja033thh0Z4NAd9bdBGScwtables(key);
	{
		if (!((*hc) == ((NI) 0))) goto LA3_;
		nimln_(45, "tableimpl.nim");
		(*hc) = ((NI) 314159265);
	}
	LA3_: ;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T5_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)((*hc) & T5_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T8_;
			NI T15_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T8_ = (NIM_BOOL)0;
			T8_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T8_) goto LA7;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T11_;
				T11_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field0 == (*hc));
				if (!(T11_)) goto LA12_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T11_ = (t.data->data[h].Field1 == key);
				LA12_: ;
				if (!T11_) goto LA13_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA13_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T15_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T15_);
		} LA7: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_13 = subInt(((NI) -1), h);
	result = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_13);
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, rawInsert_JIx5ModQQZZoBfiSfMt3gQ)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t, tySequence_y9aTBJ79cxanGa2fAuei6iIg** data, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ val, NI hc, NI h) {
	nimfr_("rawInsert", "tableimpl.nim");
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(64, "tableimpl.nim");
	(*data)->data[h].Field1 = key;
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(65, "tableimpl.nim");
	(*data)->data[h].Field2 = val;
	if ((NU)(h) >= (NU)((*data)->Sup.len)) raiseIndexError();
	nimln_(66, "tableimpl.nim");
	(*data)->data[h].Field0 = hc;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, enlarge_aOo9ajIlXKCyMmB9ajxWw9a4g)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t) {
	tySequence_y9aTBJ79cxanGa2fAuei6iIg* n;
	NI T1_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_14;
	tySequence_y9aTBJ79cxanGa2fAuei6iIg* T2_;
	nimfr_("enlarge", "tables.nim");
	n = (tySequence_y9aTBJ79cxanGa2fAuei6iIg*)0;
	nimln_(286, "tables.nim");
	T1_ = ((*t).data ? (*t).data->Sup.len : 0);
	TM_4SoG2KRQy3oMm9aUzSLtGrA_14 = mulInt(T1_, ((NI) 2));
	n = (tySequence_y9aTBJ79cxanGa2fAuei6iIg*) newSeq((&NTI_y9aTBJ79cxanGa2fAuei6iIg_), ((NI)chckRange((NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_14), ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(287, "tables.nim");
	T2_ = (tySequence_y9aTBJ79cxanGa2fAuei6iIg*)0;
	T2_ = (*t).data;
	unsureAsgnRef((void**) (&(*t).data), n);
	n = T2_;
	{
		NI i;
		NI colontmp_;
		NI T4_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(288, "tables.nim");
		T4_ = (n ? (n->Sup.len-1) : -1);
		colontmp_ = T4_;
		nimln_(2032, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2033, "system.nim");
			while (1) {
				NI eh;
				NI TM_4SoG2KRQy3oMm9aUzSLtGrA_15;
				if (!(res <= colontmp_)) goto LA6;
				nimln_(2034, "system.nim");
				i = res;
				nimln_(289, "tables.nim");
				if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
				eh = n->data[i].Field0;
				nimln_(290, "tables.nim");
				{
					NIM_BOOL T9_;
					NI j;
					NI T12_;
					T9_ = (NIM_BOOL)0;
					T9_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(eh);
					if (!T9_) goto LA10_;
					nimln_(291, "tables.nim");
					nimln_(116, "tables.nim");
					T12_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
					j = (NI)(eh & T12_);
					{
						nimln_(292, "tables.nim");
						while (1) {
							NIM_BOOL T15_;
							NI T16_;
							if ((NU)(j) >= (NU)((*t).data->Sup.len)) raiseIndexError();
							T15_ = (NIM_BOOL)0;
							T15_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables((*t).data->data[j].Field0);
							if (!T15_) goto LA14;
							nimln_(293, "tables.nim");
							nimln_(116, "tables.nim");
							T16_ = ((*t).data ? ((*t).data->Sup.len-1) : -1);
							j = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(j, T16_);
						} LA14: ;
					}
					nimln_(294, "tables.nim");
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					if ((NU)(i) >= (NU)(n->Sup.len)) raiseIndexError();
					rawInsert_JIx5ModQQZZoBfiSfMt3gQ(t, (&(*t).data), n->data[i].Field1, n->data[i].Field2, eh, j);
				}
				LA10_: ;
				nimln_(2035, "system.nim");
				TM_4SoG2KRQy3oMm9aUzSLtGrA_15 = addInt(res, ((NI) 1));
				res = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_15);
			} LA6: ;
		}
	}
	popFrame();
}

static N_INLINE(NI, rawGetKnownHC_n60yivyEBqJdPM2o7lYUhQtables)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, NI hc) {
	NI result;
	NI h;
	NI T1_;
	NI TM_4SoG2KRQy3oMm9aUzSLtGrA_16;
	nimfr_("rawGetKnownHC", "tableimpl.nim");
{	result = (NI)0;
	nimln_(31, "tableimpl.nim");
	nimln_(116, "tables.nim");
	T1_ = (t.data ? (t.data->Sup.len-1) : -1);
	h = (NI)(hc & T1_);
	{
		nimln_(32, "tableimpl.nim");
		while (1) {
			NIM_BOOL T4_;
			NI T11_;
			if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
			T4_ = (NIM_BOOL)0;
			T4_ = isFilled_IxXD1UAPoEehVDW9cv9cRaew_2tables(t.data->data[h].Field0);
			if (!T4_) goto LA3;
			nimln_(37, "tableimpl.nim");
			{
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field0 == hc);
				if (!(T7_)) goto LA8_;
				if ((NU)(h) >= (NU)(t.data->Sup.len)) raiseIndexError();
				T7_ = (t.data->data[h].Field1 == key);
				LA8_: ;
				if (!T7_) goto LA9_;
				nimln_(38, "tableimpl.nim");
				result = h;
				goto BeforeRet_;
			}
			LA9_: ;
			nimln_(39, "tableimpl.nim");
			nimln_(116, "tables.nim");
			T11_ = (t.data ? (t.data->Sup.len-1) : -1);
			h = nextTry_OLPhxSyW9bte5CwHzzQVhfAtables(h, T11_);
		} LA3: ;
	}
	nimln_(40, "tableimpl.nim");
	TM_4SoG2KRQy3oMm9aUzSLtGrA_16 = subInt(((NI) -1), h);
	result = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_16);
	}BeforeRet_: ;
	popFrame();
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq__mGV0T7Bw850xV3ze03Q9cJw)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ val) {
	NI hc;
	NI index;
	nimfr_("[]=", "tables.nim");
	hc = (NI)0;
	nimln_(98, "tableimpl.nim");
	index = rawGet_AHdLKezz07NuzDUvZosDZgtables((*t), key, (&hc));
	nimln_(307, "tables.nim");
	{
		nimln_(99, "tableimpl.nim");
		if (!(((NI) 0) <= index)) goto LA3_;
		if ((NU)(index) >= (NU)((*t).data->Sup.len)) raiseIndexError();
		(*t).data->data[index].Field2 = val;
	}
	goto LA1_;
	LA3_: ;
	{
		NI TM_4SoG2KRQy3oMm9aUzSLtGrA_17;
		NI TM_4SoG2KRQy3oMm9aUzSLtGrA_18;
		nimln_(89, "tableimpl.nim");
		{
			NI T8_;
			NIM_BOOL T9_;
			nimln_(117, "tables.nim");
			T8_ = ((*t).data ? (*t).data->Sup.len : 0);
			T9_ = (NIM_BOOL)0;
			T9_ = mustRehash_CT8KHtrz1uoHrT4RgfOSmQtables(T8_, (*t).counter);
			if (!T9_) goto LA10_;
			nimln_(90, "tableimpl.nim");
			enlarge_aOo9ajIlXKCyMmB9ajxWw9a4g(t);
			nimln_(91, "tableimpl.nim");
			index = rawGetKnownHC_n60yivyEBqJdPM2o7lYUhQtables((*t), key, hc);
		}
		LA10_: ;
		nimln_(92, "tableimpl.nim");
		TM_4SoG2KRQy3oMm9aUzSLtGrA_17 = subInt(((NI) -1), index);
		index = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_17);
		nimln_(93, "tableimpl.nim");
		rawInsert_JIx5ModQQZZoBfiSfMt3gQ(t, (&(*t).data), key, val, hc, index);
		nimln_(94, "tableimpl.nim");
		TM_4SoG2KRQy3oMm9aUzSLtGrA_18 = addInt((*t).counter, ((NI) 1));
		(*t).counter = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_18);
	}
	LA1_: ;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(void, toTable_9aiFeC7cDng115aPs81eeFQ)(tyTuple_DTy5no9cl66GOLoMhrMJm8A* pairs, NI pairsLen_0, tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA* Result) {
	NI T1_;
	nimfr_("toTable", "tables.nim");
	chckNil((void*)Result);
	genericReset((void*)Result, (&NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_));
	nimln_(331, "tables.nim");
	T1_ = (NI)0;
	T1_ = rightSize_l3wfAVpWNBWtzL8kQfvMMAtables(((NI)chckRange(pairsLen_0, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	initTable_N7bjLk6dihuKs0wAHJ9cAaQ(T1_, Result);
	{
		tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key;
		tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ val;
		NI i;
		key = (tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw)0;
		memset((void*)(&val), 0, sizeof(val));
		nimln_(2185, "system.nim");
		i = ((NI) 0);
		{
			nimln_(2186, "system.nim");
			while (1) {
				NI TM_4SoG2KRQy3oMm9aUzSLtGrA_19;
				if (!(i < pairsLen_0)) goto LA4;
				nimln_(2187, "system.nim");
				if ((NU)(i) >= (NU)(pairsLen_0)) raiseIndexError();
				key = pairs[i].Field0;
				if ((NU)(i) >= (NU)(pairsLen_0)) raiseIndexError();
				val = pairs[i].Field1;
				nimln_(332, "tables.nim");
				X5BX5Deq__mGV0T7Bw850xV3ze03Q9cJw(Result, key, val);
				nimln_(2188, "system.nim");
				TM_4SoG2KRQy3oMm9aUzSLtGrA_19 = addInt(i, ((NI) 1));
				i = (NI)(TM_4SoG2KRQy3oMm9aUzSLtGrA_19);
			} LA4: ;
		}
	}
	popFrame();
}

static N_INLINE(void, copyMem_E1xtACub5WcDa3vbrIXbwgsystem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	copyMem_E1xtACub5WcDa3vbrIXbwgsystem(((void*) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	nimfr_("usrToCell", "gc.nim");
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	nimln_(132, "gc.nim");
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI)sizeof(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g))))));
	popFrame();
	return result;
}

static N_INLINE(void, rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("rtlAddZCT", "gc.nim");
	nimln_(211, "gc.nim");
	addZCT_fCDI7oO1NNVXXURtxSzsRw((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr_("asgnRefNoCycle", "gc.nim");
	nimln_(271, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c;
		nimln_(398, "system.nim");
		nimln_(271, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		nimln_(272, "gc.nim");
		c = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		nimln_(273, "gc.nim");
		(*c).refcount += ((NI) 8);
	}
	LA3_: ;
	nimln_(274, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c_2;
		nimln_(398, "system.nim");
		nimln_(274, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7_;
		nimln_(275, "gc.nim");
		c_2 = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		nimln_(276, "gc.nim");
		{
			(*c_2).refcount -= ((NI) 8);
			if (!((NU64)((*c_2).refcount) < (NU64)(((NI) 8)))) goto LA11_;
			nimln_(277, "gc.nim");
			rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c_2);
		}
		LA11_: ;
	}
	LA7_: ;
	nimln_(278, "gc.nim");
	(*dest) = src;
	popFrame();
}

static N_INLINE(void, incRef_9cAA5YuQAAC3MVbnGeV86swsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("incRef", "gc.nim");
	nimln_(191, "gc.nim");
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
	popFrame();
}

static N_INLINE(void, decRef_MV4BBk6J1qu70IbBxwEn4wsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	nimfr_("decRef", "gc.nim");
	nimln_(218, "gc.nim");
	{
		(*c).refcount -= ((NI) 8);
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		nimln_(219, "gc.nim");
		rtlAddZCT_MV4BBk6J1qu70IbBxwEn4w_2system(c);
	}
	LA3_: ;
	popFrame();
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	nimfr_("asgnRef", "gc.nim");
	nimln_(264, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		nimln_(398, "system.nim");
		nimln_(264, "gc.nim");
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem(src);
		incRef_9cAA5YuQAAC3MVbnGeV86swsystem(T5_);
	}
	LA3_: ;
	nimln_(265, "gc.nim");
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		nimln_(398, "system.nim");
		nimln_(265, "gc.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_yB9aH5WIlwd0xkYrcdPeXrQsystem((*dest));
		decRef_MV4BBk6J1qu70IbBxwEn4wsystem(T10_);
	}
	LA8_: ;
	nimln_(266, "gc.nim");
	(*dest) = src;
	popFrame();
}

N_LIB_PRIVATE N_NIMCALL(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, X5BX5D__M8fLPtDcT9aAoQyfTfVp6TA)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key) {
	tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ result;
	NI hc;
	NI index;
	nimfr_("[]", "tables.nim");
	memset((void*)(&result), 0, sizeof(result));
	hc = (NI)0;
	nimln_(147, "tables.nim");
	index = rawGet_AHdLKezz07NuzDUvZosDZgtables(t, key, (&hc));
	nimln_(165, "tables.nim");
	{
		nimln_(148, "tables.nim");
		if (!(((NI) 0) <= index)) goto LA3_;
		if ((NU)(index) >= (NU)(t.data->Sup.len)) raiseIndexError();
		result = t.data->data[index].Field2;
	}
	goto LA1_;
	LA3_: ;
	{
		tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg* e;
		NimStringDesc* T6_;
		e = (tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg*)0;
		nimln_(2811, "system.nim");
		e = (tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg*) newObj((&NTI_axqhRnwd09cVJkRcojfw6mA_), sizeof(tyObject_KeyError_ifYAhUumNzWR9c9cN9amyJLtg));
		(*e).Sup.Sup.Sup.m_type = (&NTI_ifYAhUumNzWR9c9cN9amyJLtg_);
		nimln_(151, "tables.nim");
		T6_ = (NimStringDesc*)0;
		nimln_(165, "tables.nim");
		T6_ = rawNewString(reprEnum((NI)key, (&NTI_cLjoWhgzLRaR7YLGawE7Uw_))->Sup.len + 15);
appendString(T6_, ((NimStringDesc*) &TM_4SoG2KRQy3oMm9aUzSLtGrA_20));
appendString(T6_, reprEnum((NI)key, (&NTI_cLjoWhgzLRaR7YLGawE7Uw_)));
		asgnRefNoCycle((void**) (&(*e).Sup.Sup.message), T6_);
		nimln_(2806, "system.nim");
		asgnRef((void**) (&(*e).Sup.Sup.parent), NIM_NIL);
		nimln_(151, "tables.nim");
		raiseException((Exception*)e, "KeyError");
	}
	LA1_: ;
	popFrame();
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void) {
	nimfr_("tables", "tables.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void) {
static TNimNode* TM_4SoG2KRQy3oMm9aUzSLtGrA_10[2];
static TNimNode* TM_4SoG2KRQy3oMm9aUzSLtGrA_11[3];
static TNimNode TM_4SoG2KRQy3oMm9aUzSLtGrA_0[7];
NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_.size = sizeof(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA);
NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_.kind = 18;
NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_.base = 0;
NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_.flags = 2;
TM_4SoG2KRQy3oMm9aUzSLtGrA_10[0] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1];
NTI_Yt1nTvhqbfseJu4tLVyjRw_.size = sizeof(tyTuple_Yt1nTvhqbfseJu4tLVyjRw);
NTI_Yt1nTvhqbfseJu4tLVyjRw_.kind = 18;
NTI_Yt1nTvhqbfseJu4tLVyjRw_.base = 0;
NTI_Yt1nTvhqbfseJu4tLVyjRw_.flags = 3;
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[0] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].offset = offsetof(tyTuple_Yt1nTvhqbfseJu4tLVyjRw, Field0);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[3].name = "Field0";
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[1] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].offset = offsetof(tyTuple_Yt1nTvhqbfseJu4tLVyjRw, Field1);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].typ = (&NTI_cLjoWhgzLRaR7YLGawE7Uw_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[4].name = "Field1";
TM_4SoG2KRQy3oMm9aUzSLtGrA_11[2] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].offset = offsetof(tyTuple_Yt1nTvhqbfseJu4tLVyjRw, Field2);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].typ = (&NTI_1v9bKyksXWMsm0vNwmZ4EuQ_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[5].name = "Field2";
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].len = 3; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].kind = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2].sons = &TM_4SoG2KRQy3oMm9aUzSLtGrA_11[0];
NTI_Yt1nTvhqbfseJu4tLVyjRw_.node = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[2];
NTI_y9aTBJ79cxanGa2fAuei6iIg_.size = sizeof(tySequence_y9aTBJ79cxanGa2fAuei6iIg*);
NTI_y9aTBJ79cxanGa2fAuei6iIg_.kind = 24;
NTI_y9aTBJ79cxanGa2fAuei6iIg_.base = (&NTI_Yt1nTvhqbfseJu4tLVyjRw_);
NTI_y9aTBJ79cxanGa2fAuei6iIg_.flags = 2;
NTI_y9aTBJ79cxanGa2fAuei6iIg_.marker = Marker_tySequence_y9aTBJ79cxanGa2fAuei6iIg;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].offset = offsetof(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA, data);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].typ = (&NTI_y9aTBJ79cxanGa2fAuei6iIg_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[1].name = "data";
TM_4SoG2KRQy3oMm9aUzSLtGrA_10[1] = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6];
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].kind = 1;
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].offset = offsetof(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA, counter);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[6].name = "counter";
TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].len = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].kind = 2; TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0].sons = &TM_4SoG2KRQy3oMm9aUzSLtGrA_10[0];
NTI_nIG4O9c9a3gnDGm0H0nP9aqvA_.node = &TM_4SoG2KRQy3oMm9aUzSLtGrA_0[0];
}


/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -I/home/allosteric/.choosenim/toolchains/nim-0.18.0/lib -o /media/allosteric/Data/Arts/nim/BeforeGamer/Push/src/nimcache/main.o /media/allosteric/Data/Arts/nim/BeforeGamer/Push/src/nimcache/main.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg;
typedef struct tyObject_PlayercolonObjectType__YKSlBm59bz8cnvLRFi6TueA tyObject_PlayercolonObjectType__YKSlBm59bz8cnvLRFi6TueA;
typedef struct tyObject_BoxcolonObjectType__CcD6IYPdn4nlPMYfEQhewQ tyObject_BoxcolonObjectType__CcD6IYPdn4nlPMYfEQhewQ;
typedef struct tyObject_BoxTargetcolonObjectType__RZuy9cwz9cfw8y9ab8un3pUpQ tyObject_BoxTargetcolonObjectType__RZuy9cwz9cfw8y9ab8un3pUpQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA;
typedef struct tySequence_y9aTBJ79cxanGa2fAuei6iIg tySequence_y9aTBJ79cxanGa2fAuei6iIg;
typedef struct tyTuple_qmFwV9bFQ9a4cxfYwLzDR0lQ tyTuple_qmFwV9bFQ9a4cxfYwLzDR0lQ;
typedef struct tyTuple_Yt1nTvhqbfseJu4tLVyjRw tyTuple_Yt1nTvhqbfseJu4tLVyjRw;
typedef tyObject_BoxcolonObjectType__CcD6IYPdn4nlPMYfEQhewQ* tyArray_O1t8Odh9cUegkP1sczBQjlA[2];
typedef tyObject_BoxTargetcolonObjectType__RZuy9cwz9cfw8y9ab8un3pUpQ* tyArray_PWHgkvTkJgyby9afHn9a1osw[2];
struct tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg {
tyObject_PlayercolonObjectType__YKSlBm59bz8cnvLRFi6TueA* player;
tyArray_O1t8Odh9cUegkP1sczBQjlA boxes;
tyArray_PWHgkvTkJgyby9afHn9a1osw boxTargets;
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
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
struct tyObject_PlayercolonObjectType__YKSlBm59bz8cnvLRFi6TueA {
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ pos;
};
struct tyObject_BoxcolonObjectType__CcD6IYPdn4nlPMYfEQhewQ {
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ pos;
};
struct tyObject_BoxTargetcolonObjectType__RZuy9cwz9cfw8y9ab8un3pUpQ {
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ pos;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NU8 tyEnum_InputAction_65PXn9bhXPOUlLz1qL3PCeQ;
typedef NU8 tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw;
struct tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA {
tySequence_y9aTBJ79cxanGa2fAuei6iIg* data;
NI counter;
};
typedef NU8 tyEnum_DestinStatus_uWnJ20JvX6gkNBB7pR6M6w;
struct tyTuple_qmFwV9bFQ9a4cxfYwLzDR0lQ {
tyEnum_DestinStatus_uWnJ20JvX6gkNBB7pR6M6w Field0;
NI Field1;
};
struct tyTuple_Yt1nTvhqbfseJu4tLVyjRw {
NI Field0;
tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw Field1;
tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ Field2;
};
struct tySequence_y9aTBJ79cxanGa2fAuei6iIg {
  TGenericSeq Sup;
  tyTuple_Yt1nTvhqbfseJu4tLVyjRw data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, TM_V45tF8B8NBcxFcjfe7lhBw_2)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(tyProc_T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
N_LIB_PRIVATE N_NIMCALL(void, newMap_VJhoxGoZVbUbQ9cyCIktnLA)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* Result);
N_LIB_PRIVATE N_NIMCALL(void, draw_Ubbw9cPGosWWYaTZuFFYaVw)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, checkBoxOnTarget_Ev69bcTWOnjGjYUgAreqB7A)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map);
N_LIB_PRIVATE N_NIMCALL(tyEnum_InputAction_65PXn9bhXPOUlLz1qL3PCeQ, getInput_RfMgKTO9bx69b9bT3oeCLrvwA)(void);
N_LIB_PRIVATE N_NIMCALL(void, updateGame_o1gLFsrKoVd9cUlm4BRafRQ)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map, tyEnum_InputAction_65PXn9bhXPOUlLz1qL3PCeQ inputAction);
N_LIB_PRIVATE N_NIMCALL(tyObject_PlayercolonObjectType__YKSlBm59bz8cnvLRFi6TueA*, new_Z9bPY53FJdVBzfJKSz2bGgA)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_BoxcolonObjectType__CcD6IYPdn4nlPMYfEQhewQ*, new_vJa1Px3VC82L38Sg03Basg)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_BoxTargetcolonObjectType__RZuy9cwz9cfw8y9ab8un3pUpQ*, new_pGC2AQ3Hz7ppk6U7Vccb3w)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, getVisualMap_RhT0OpkXSHhOHnnNAmrMfA)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map);
N_LIB_PRIVATE N_NIMCALL(NI, getIBoxAt_HWq9axnMLwPIY9bd6Ojr39bhA)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ pos);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq__GMdYAiXVYFtXgUAy83DYgg)(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ x, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ y);
N_LIB_PRIVATE N_NIMCALL(void, movePlayer_hHlfeVjp62CR2MvBikJH2g)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw direct);
N_LIB_PRIVATE N_NIMCALL(tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ, X5BX5D__M8fLPtDcT9aAoQyfTfVp6TA)(tyObject_Table_nIG4O9c9a3gnDGm0H0nP9aqvA t, tyEnum_Direct_cLjoWhgzLRaR7YLGawE7Uw key);
N_LIB_PRIVATE N_NIMCALL(tyTuple_qmFwV9bFQ9a4cxfYwLzDR0lQ, getDestinStatus_U3MREanvOWwZ9a3ts14lQtA)(tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg* map, tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ destin);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_parseutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_mathDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_algorithmDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_strutilsDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_hashesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesInit000)(void);
NIM_EXTERNC N_NOINLINE(void, stdlib_tablesDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, unknown_pushInit000)(void);
NIM_EXTERNC N_NOINLINE(void, unknown_pushDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void);
tyObject_Map_bwPsPqooz39aY9cFequ9cPMZg map_XZTr0qCt9bI7B29a6PLDdRSQ;
extern TNimType NTI_bwPsPqooz39aY9cFequ9cPMZg_;
tyEnum_InputAction_65PXn9bhXPOUlLz1qL3PCeQ input_eD7n5A9bs7m1aVXSzlVtDCQ;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
NIM_CONST tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ TM_V45tF8B8NBcxFcjfe7lhBw_3 = {((NI) 4),
((NI) 0)}
;
NIM_CONST tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ TM_V45tF8B8NBcxFcjfe7lhBw_4 = {((NI) 0),
((NI) 1)}
;
NIM_CONST tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ TM_V45tF8B8NBcxFcjfe7lhBw_5 = {((NI) 1),
((NI) 1)}
;
NIM_CONST tyTuple_1v9bKyksXWMsm0vNwmZ4EuQ TM_V45tF8B8NBcxFcjfe7lhBw_6 = {((NI) 0),
((NI) 0)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_8, "start Game!", 11);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_7 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_8)}
;
STRING_LITERAL(TM_V45tF8B8NBcxFcjfe7lhBw_10, "clear!", 6);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_V45tF8B8NBcxFcjfe7lhBw_9 = {((NimStringDesc*) &TM_V45tF8B8NBcxFcjfe7lhBw_10)}
;
static N_NIMCALL(void, TM_V45tF8B8NBcxFcjfe7lhBw_2)(void) {
	NI T1_;
	NI T2_;
	nimGCvisit((void*)map_XZTr0qCt9bI7B29a6PLDdRSQ.player, 0);
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < 2; T1_++) {
	nimGCvisit((void*)map_XZTr0qCt9bI7B29a6PLDdRSQ.boxes[T1_], 0);
	}
	T2_ = (NI)0;
	for (T2_ = 0; T2_ < 2; T2_++) {
	nimGCvisit((void*)map_XZTr0qCt9bI7B29a6PLDdRSQ.boxTargets[T2_], 0);
	}
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	stdlib_parseutilsDatInit000();
	stdlib_mathDatInit000();
	stdlib_algorithmDatInit000();
	stdlib_strutilsDatInit000();
	stdlib_hashesDatInit000();
	stdlib_tablesDatInit000();
	unknown_pushDatInit000();
	mainDatInit000();
	stdlib_parseutilsInit000();
	stdlib_mathInit000();
	stdlib_algorithmInit000();
	stdlib_strutilsInit000();
	stdlib_hashesInit000();
	stdlib_tablesInit000();
	unknown_pushInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}


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
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	nimfr_("main", "main.nim");
nimRegisterGlobalMarker(TM_V45tF8B8NBcxFcjfe7lhBw_2);
	nimln_(3, "main.nim");
	newMap_VJhoxGoZVbUbQ9cyCIktnLA((&map_XZTr0qCt9bI7B29a6PLDdRSQ));
	nimln_(4, "main.nim");
	(*map_XZTr0qCt9bI7B29a6PLDdRSQ.player).pos = TM_V45tF8B8NBcxFcjfe7lhBw_3;
	nimln_(5, "main.nim");
	(*map_XZTr0qCt9bI7B29a6PLDdRSQ.boxes[(((NI) 0))- 0]).pos = TM_V45tF8B8NBcxFcjfe7lhBw_4;
	nimln_(6, "main.nim");
	(*map_XZTr0qCt9bI7B29a6PLDdRSQ.boxes[(((NI) 1))- 0]).pos = TM_V45tF8B8NBcxFcjfe7lhBw_5;
	nimln_(7, "main.nim");
	(*map_XZTr0qCt9bI7B29a6PLDdRSQ.boxTargets[(((NI) 1))- 0]).pos = TM_V45tF8B8NBcxFcjfe7lhBw_6;
	nimln_(8, "main.nim");
	draw_Ubbw9cPGosWWYaTZuFFYaVw((&map_XZTr0qCt9bI7B29a6PLDdRSQ));
	nimln_(9, "main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_7, 1);
	{
		nimln_(10, "main.nim");
		while (1) {
			NIM_BOOL T3_;
			T3_ = (NIM_BOOL)0;
			T3_ = checkBoxOnTarget_Ev69bcTWOnjGjYUgAreqB7A((&map_XZTr0qCt9bI7B29a6PLDdRSQ));
			if (!!(T3_)) goto LA2;
			input_eD7n5A9bs7m1aVXSzlVtDCQ = 0;
			nimln_(11, "main.nim");
			input_eD7n5A9bs7m1aVXSzlVtDCQ = getInput_RfMgKTO9bx69b9bT3oeCLrvwA();
			nimln_(12, "main.nim");
			updateGame_o1gLFsrKoVd9cUlm4BRafRQ((&map_XZTr0qCt9bI7B29a6PLDdRSQ), input_eD7n5A9bs7m1aVXSzlVtDCQ);
			nimln_(13, "main.nim");
			draw_Ubbw9cPGosWWYaTZuFFYaVw((&map_XZTr0qCt9bI7B29a6PLDdRSQ));
		} LA2: ;
	}
	nimln_(14, "main.nim");
	echoBinSafe(TM_V45tF8B8NBcxFcjfe7lhBw_9, 1);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void) {
}


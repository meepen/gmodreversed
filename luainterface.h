#ifndef LUAINTERFACE_H
#define LUAINTERFACE_H
#include "types.h"

struct lua_State;
class Color;
class GarrysMod__Lua__IThreadedCall;
class std__string;
class Bootil__Buffer;
typedef class CLuaCallback ILuaCallback;
typedef class CLuaObject ILuaObject;
typedef class CLuaInterface ILuaInterface;

class CLuaInterface
{
public
	vtable_start
	virtual void *vfunc(Top)(CLuaInterface *this, void);
	virtual void *vfunc(Push)(CLuaInterface *this, int);
	virtual void *vfunc(Pop)(CLuaInterface *this, int);
	virtual void *vfunc(GetTable)(CLuaInterface *this, int);
	virtual void *vfunc(GetField)(CLuaInterface *this, int,char  const*);
	virtual void *vfunc(SetField)(CLuaInterface *this, int,char  const*);
	virtual void *vfunc(CreateTable)(CLuaInterface *this, void);
	virtual void *vfunc(SetTable)(CLuaInterface *this, int);
	virtual void *vfunc(SetMetaTable)(CLuaInterface *this, int);
	virtual void *vfunc(GetMetaTable)(CLuaInterface *this, int);
	virtual void *vfunc(Call)(CLuaInterface *this, int,int);
	virtual void *vfunc(PCall)(CLuaInterface *this, int,int,int);
	virtual void *vfunc(Equal)(CLuaInterface *this, int,int);
	virtual void *vfunc(RawEqual)(CLuaInterface *this, int,int);
	virtual void *vfunc(Insert)(CLuaInterface *this, int);
	virtual void *vfunc(Remove)(CLuaInterface *this, int);
	virtual void *vfunc(Next)(CLuaInterface *this, int);
	virtual void *vfunc(NewUserdata)(CLuaInterface *this, uint);
	virtual void *vfunc(ThrowError)(CLuaInterface *this, char  const*);
	virtual void *vfunc(CheckType)(CLuaInterface *this, int,int);
	virtual void *vfunc(ArgError)(CLuaInterface *this, int,char  const*);
	virtual void *vfunc(RawGet)(CLuaInterface *this, int);
	virtual void *vfunc(RawSet)(CLuaInterface *this, int);
	virtual void *vfunc(GetString)(CLuaInterface *this, int,uint *);
	virtual void *vfunc(GetNumber)(CLuaInterface *this, int);
	virtual void *vfunc(GetBool)(CLuaInterface *this, int);
	virtual void *vfunc(GetCFunction)(CLuaInterface *this, int);
	virtual void *vfunc(GetUserdata)(CLuaInterface *this, int);
	virtual void *vfunc(PushNil)(CLuaInterface *this, void);
	virtual void *vfunc(PushString)(CLuaInterface *this, char  const*,uint);
	virtual void *vfunc(PushNumber)(CLuaInterface *this, double);
	virtual void *vfunc(PushBool)(CLuaInterface *this, bool);
	virtual void *vfunc(PushCFunction)(CLuaInterface *this, int (*)(lua_State *));
	virtual void *vfunc(PushCClosure)(CLuaInterface *this, int (*)(lua_State *),int);
	virtual void *vfunc(PushUserdata)(CLuaInterface *this, void *);
	virtual void *vfunc(ReferenceCreate)(CLuaInterface *this, void);
	virtual void *vfunc(ReferenceFree)(CLuaInterface *this, int);
	virtual void *vfunc(ReferencePush)(CLuaInterface *this, int);
	virtual void *vfunc(PushSpecial)(CLuaInterface *this, int);
	virtual void *vfunc(IsType)(CLuaInterface *this, int,int);
	virtual void *vfunc(GetType)(CLuaInterface *this, int);
	virtual void *vfunc(GetTypeName)(CLuaInterface *this, int);
	virtual void *vfunc(CreateMetaTableType)(CLuaInterface *this, char  const*,int);
	virtual void *vfunc(CheckString)(CLuaInterface *this, int);
	virtual void *vfunc(CheckNumber)(CLuaInterface *this, int);
	virtual void *vfunc(ObjLen)(CLuaInterface *this, int);
	virtual void *vfunc(AddThreadedCall)(CLuaInterface *this, GarrysMod__Lua__IThreadedCall *);
	virtual void *vfunc(Init)(CLuaInterface *this, ILuaCallback *,bool);
	virtual void *vfunc(Shutdown)(CLuaInterface *this, void);
	virtual void *vfunc(Cycle)(CLuaInterface *this, void);
	virtual void *vfunc(GetLuaState)(CLuaInterface *this, void);
	virtual void *vfunc(Global)(CLuaInterface *this, void);
	virtual void *vfunc(GetObject)(CLuaInterface *this, int);
	virtual void *vfunc(DELETE_ME_5437)(CLuaInterface *this, int);
	virtual void *vfunc(_DELETE_ME2466)(CLuaInterface *this, int);
	virtual void *vfunc(PushLuaObject)(CLuaInterface *this, ILuaObject *);
	virtual void *vfunc(PushLuaFunction)(CLuaInterface *this, int (*)(lua_State *));
	virtual void *vfunc(LuaError)(CLuaInterface *this, char  const*,int);
	virtual void *vfunc(TypeError)(CLuaInterface *this, char  const*,int);
	virtual void *vfunc(CallInternal)(CLuaInterface *this, int,int);
	virtual void *vfunc(CallInternalNoReturns)(CLuaInterface *this, int);
	virtual void *vfunc(CallInternalGetBool)(CLuaInterface *this, int);
	virtual void *vfunc(CallInternalGetString)(CLuaInterface *this, int);
	virtual void *vfunc(CallInternalGet)(CLuaInterface *this, int,ILuaObject *);
	virtual void *vfunc(_DELETE_ME)(CLuaInterface *this, ILuaObject *,void *);
	virtual void *vfunc(NewGlobalTable)(CLuaInterface *this, char  const*);
	virtual void *vfunc(NewTemporaryObject)(CLuaInterface *this, void);
	virtual void *vfunc(isUserData)(CLuaInterface *this, int);
	virtual void *vfunc(GetMetaTableObject)(CLuaInterface *this, char  const*,int);
	virtual void *vfunc(GetMetaTableObject)(CLuaInterface *this, int);
	virtual void *vfunc(GetReturn)(CLuaInterface *this, int);
	virtual void *vfunc(IsServer)(CLuaInterface *this, void);
	virtual void *vfunc(IsClient)(CLuaInterface *this, void);
	virtual void *vfunc(IsDedicatedServer)(CLuaInterface *this, void);
	virtual void *vfunc(DestroyObject)(CLuaInterface *this, ILuaObject *);
	virtual void *vfunc(CreateObject)(CLuaInterface *this, void);
	virtual void *vfunc(SetMember)(CLuaInterface *this, ILuaObject *,ILuaObject *,ILuaObject *);
	virtual void *vfunc(GetNewTable)(CLuaInterface *this, void);
	virtual void *vfunc(SetMember)(CLuaInterface *this, ILuaObject *,float);
	virtual void *vfunc(SetMember)(CLuaInterface *this, ILuaObject *,float,ILuaObject *);
	virtual void *vfunc(SetMember)(CLuaInterface *this, ILuaObject *,char  const*);
	virtual void *vfunc(SetMember)(CLuaInterface *this, ILuaObject *,char  const*,ILuaObject *);
	virtual void *vfunc(SetIsServer)(CLuaInterface *this, bool);
	virtual void *vfunc(PushLong)(CLuaInterface *this, long);
	virtual void *vfunc(GetFlags)(CLuaInterface *this, int);
	virtual void *vfunc(FindOnObjectsMetaTable)(CLuaInterface *this, int,int);
	virtual void *vfunc(FindObjectOnTable)(CLuaInterface *this, int,int);
	virtual void *vfunc(SetMemberFast)(CLuaInterface *this, ILuaObject *,int,int);
	virtual void *vfunc(RunString)(CLuaInterface *this, char  const*,char  const*,char  const*,bool,bool);
	virtual void *vfunc(IsEqual)(CLuaInterface *this, ILuaObject *,ILuaObject *);
	virtual void *vfunc(Error)(CLuaInterface *this, char  const*);
	virtual void *vfunc(GetStringOrError)(CLuaInterface *this, int);
	virtual void *vfunc(RunLuaModule)(CLuaInterface *this, char  const*);
	virtual void *vfunc(FindAndRunScript)(CLuaInterface *this, char  const*,bool,bool,char  const*);
	virtual void *vfunc(SetPathID)(CLuaInterface *this, char  const*);
	virtual void *vfunc(GetPathID)(CLuaInterface *this, void);
	virtual void *vfunc(ErrorNoHalt)(CLuaInterface *this, char  const*,...);
	virtual void *vfunc(Msg)(CLuaInterface *this, char  const*,...);
	virtual void *vfunc(PushPath)(CLuaInterface *this, char  const*);
	virtual void *vfunc(PopPath)(CLuaInterface *this, void);
	virtual void *vfunc(GetPath)(CLuaInterface *this, void);
	virtual void *vfunc(GetColor)(CLuaInterface *this, int);
	virtual void *vfunc(PushColor)(CLuaInterface *this, int,int,int,int);
	virtual void *vfunc(GetStack)(CLuaInterface *this, int,void *);
	virtual void *vfunc(GetInfo)(CLuaInterface *this, char  const*,void *);
	virtual void *vfunc(GetLocal)(CLuaInterface *this, void *,int);
	virtual void *vfunc(GetUpvalue)(CLuaInterface *this, int,int);
	virtual void *vfunc(RunStringEx)(CLuaInterface *this, char  const*,char  const*,char  const*,bool,bool,bool);
	virtual void *vfunc(DELETE_ME1)(CLuaInterface *this, char  const*,int);
	virtual void *vfunc(GetDataString)(CLuaInterface *this, int,void **);
	virtual void *vfunc(ErrorFromLua)(CLuaInterface *this, char  const*,...);
	virtual void *vfunc(GetCurrentLocation)(CLuaInterface *this, void);
	virtual void *vfunc(MsgColour)(CLuaInterface *this, Color  const&,char  const*,...);
	virtual void *vfunc(SetState)(CLuaInterface *this, lua_State *);
	virtual void *vfunc(DELETE_ME2)(CLuaInterface *this, void);
	virtual void *vfunc(GetCurrentFile)(CLuaInterface *this, std__string &);
	virtual void *vfunc(CompileString)(CLuaInterface *this, Bootil__Buffer &,std__string  const&);
	virtual void *vfunc(ThreadLock)(CLuaInterface *this, void);
	virtual void *vfunc(ThreadUnlock)(CLuaInterface *this, void);
	virtual void *vfunc(CallFunctionProtected)(CLuaInterface *this, int,int,bool);
	virtual void *vfunc(Require)(CLuaInterface *this, char  const*);
	virtual void *vfunc(GetActualTypeName)(CLuaInterface *this, int);
	virtual void *vfunc(SetupInfiniteLoopProtection)(CLuaInterface *this, void);
	vtable_end
	
	lua_State *L;
};

#endif
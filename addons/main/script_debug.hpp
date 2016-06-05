/**
STACK TRACING
**/
//#define ENABLE_CALLSTACK
//#define ENABLE_PERFORMANCE_COUNTERS
//#define DEBUG_EVENTS

#ifdef ENABLE_CALLSTACK

#define CALLSTACK(function) {private ['_ret']; if(LSR_IS_ERRORED) then { ['AUTO','AUTO'] call LSR_DUMPSTACK_FNC; LSR_IS_ERRORED = false; }; LSR_IS_ERRORED = true; LSR_STACK_TRLSR set [LSR_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, LSR_CURRENT_FUNCTION, 'ANON', _this]]; LSR_STACK_DEPTH = LSR_STACK_DEPTH + 1; LSR_CURRENT_FUNCTION = 'ANON'; _ret = _this call ##function; LSR_STACK_DEPTH = LSR_STACK_DEPTH - 1; LSR_IS_ERRORED = false; _ret;}
#define CALLSTACK_NAMED(function, functionName) {private ['_ret']; if(LSR_IS_ERRORED) then { ['AUTO','AUTO'] call LSR_DUMPSTACK_FNC; LSR_IS_ERRORED = false; }; LSR_IS_ERRORED = true; LSR_STACK_TRLSR set [LSR_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, LSR_CURRENT_FUNCTION, functionName, _this]]; LSR_STACK_DEPTH = LSR_STACK_DEPTH + 1; LSR_CURRENT_FUNCTION = functionName; _ret = _this call ##function; LSR_STACK_DEPTH = LSR_STACK_DEPTH - 1; LSR_IS_ERRORED = false; _ret;}
#define DUMPSTACK ([__FILE__, __LINE__] call LSR_DUMPSTACK_FNC)

#define FUNC(var1) {private ['_ret']; if(LSR_IS_ERRORED) then { ['AUTO','AUTO'] call LSR_DUMPSTACK_FNC; LSR_IS_ERRORED = false; }; LSR_IS_ERRORED = true; LSR_STACK_TRLSR set [LSR_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, LSR_CURRENT_FUNCTION, 'TRIPLES(ADDON,fnc,var1)', _this]]; LSR_STACK_DEPTH = LSR_STACK_DEPTH + 1; LSR_CURRENT_FUNCTION = 'TRIPLES(ADDON,fnc,var1)'; _ret = _this call TRIPLES(ADDON,fnc,var1); LSR_STACK_DEPTH = LSR_STACK_DEPTH - 1; LSR_IS_ERRORED = false; _ret;}
#define EFUNC(var1,var2) {private ['_ret']; if(LSR_IS_ERRORED) then { ['AUTO','AUTO'] call LSR_DUMPSTACK_FNC; LSR_IS_ERRORED = false; }; LSR_IS_ERRORED = true; LSR_STACK_TRLSR set [LSR_STACK_DEPTH, [diag_tickTime, __FILE__, __LINE__, LSR_CURRENT_FUNCTION, 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)', _this]]; LSR_STACK_DEPTH = LSR_STACK_DEPTH + 1; LSR_CURRENT_FUNCTION = 'TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)'; _ret = _this call TRIPLES(DOUBLES(PREFIX,var1),fnc,var2); LSR_STACK_DEPTH = LSR_STACK_DEPTH - 1; LSR_IS_ERRORED = false; _ret;}

#else
#define CALLSTACK(function) function
#define CALLSTACK_NAMED(function, functionName) function
#define DUMPSTACK

#define FUNC(var1) TRIPLES(ADDON,fnc,var1)
#define EFUNC(var1,var2) TRIPLES(DOUBLES(PREFIX,var1),fnc,var2)

#endif

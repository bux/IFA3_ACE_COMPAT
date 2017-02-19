class Extended_PreInit_EventHandlers
{
	class ADDON
	{
		init = QUOTE(call COMPILE_FILE(XEH_preInit));
	};
};
class Extended_PostInit_EventHandlers
{
	class ADDON
	{
		clientInit = QUOTE( call COMPILE_FILE(XEH_clientInit) );
	};
};
class Extended_FiredBIS_EventHandlers
{
	class rhs_2b14_82mm_Base
	{
		class ADDON
		{
			firedBIS = QUOTE(_this call FUNC(handleFired));
		};
	};
	class RHS_M252_Base
	{
		class ADDON
		{
			firedBIS = QUOTE(_this call FUNC(handleFired));
		};
	};
	class rhs_D30_base
	{
		class ADDON
		{
			firedBIS = QUOTE(_this call FUNC(handleFired));
		};
	};
	class RHS_M119_base
	{
		class ADDON
		{
			firedBIS = QUOTE(_this call FUNC(handleFired));
		};
	};
};

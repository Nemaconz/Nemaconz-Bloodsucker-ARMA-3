
#define _ARMA_

class CfgPatches
{
	class ns_modules
	{
		units[] = {"Mutants_NS_MUT"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"ns_sounds"};
		author[] = {"Sumrak, Nemaconz"};
	};
};
class CfgVehicles
{
	class Logic;
	class Mutants_NS_MUT: Logic
	{
		displayName = "$STR_NS_MUT";
		icon = "\Nemaconz_BS\ns_modules\scripts\icon_mutants_ca.paa";
		picture = "\Nemaconz_BS\ns_modules\scripts\icon_mutants_ca.paa";
		vehicleClass = "Modules";
		class Eventhandlers
		{
			init = "_this execVM '\Nemaconz_BS\ns_modules\scripts\init.sqf';";
		};
	};
};



/*
 **  Mutants script, Nightstalkers: Shadow of Namalsk
 *   ..created by Nemaconz and Sumrak, ©2015
 *   http://www.nightstalkers.cz
 *   sumrak<at>nightstalkers.cz
 *	 Nemaconz<at>gmail.com
 *   PBO edition
 *   Random sounds for bloodsucker
*/

if (isServer) then {
	private["_zombie","_sound","_blood_sound"];
	_zombie = _this select 0;
	
	while {alive _zombie} do {
		sleep random 20;
		_blood_sound = round(random 7);
		switch (_blood_sound) do {
			case 0: {_sound = "blood_distant_growl_0";};
			case 1: {_sound = "blood_distant_growl_1";};
			case 2: {_sound = "blood_distant_growl_2";};
			case 3: {_sound = "blood_distant_growl_3";};
			case 4: {_sound = "blood_forest_hidden_4";};
			case 5: {_sound = "blood_forest_hidden_3";};
			case 6: {_sound = "blood_forest_hidden_2";};
			case 7: {_sound = "blood_forest_hidden_1";};
			default   {_sound = "blood_forest_hidden_3";};
		};
		_zombie say _sound;
		if (isMultiplayer) then {
			_zombie say3D "_sound" call BIS_fnc_MP;
		};
		sleep random 25;
	};
};
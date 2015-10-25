/*
 **  Mutants script, Nightstalkers: Shadow of Namalsk
 *   ..created by Sumrak, ©2010
 *   http://www.nightstalkers.cz
 *   sumrak<at>nightstalkers.cz
 *   PBO edition
 *   Random sounds for zombies
*/

if (isServer) then {
	private["_zombie","_sound","_zomb_sound"];
	_zombie = _this select 0;
	
	while {alive _zombie} do {
		sleep random 35; 
		_zomb_sound = round(random 17);
		switch (_zomb_sound) do {
		   case 0:  {_sound = "z_id1";};
		   case 1:  {_sound = "z_id2";};
		   case 2:  {_sound = "z_id3";};
		   case 3:  {_sound = "z_id4";};
		   case 4:  {_sound = "z_id4";};
		   case 5:  {_sound = "z_id5";};
		   case 6:  {_sound = "z_id6";};
		   case 7:  {_sound = "z_id7";};
		   case 8:  {_sound = "z_id8";};
		   case 9:  {_sound = "z_id9";};
		   case 10: {_sound = "z_id10";};
		   case 11: {_sound = "z_id11";};
		   case 12: {_sound = "z_id12";};
		   case 13: {_sound = "z_id13";};
		   case 14: {_sound = "z_id14";};
		   case 15: {_sound = "z_id15";};
		   case 16: {_sound = "z_id16";};
		   case 17: {_sound = "z_id17";};
		   default  {_sound = "z_id1";};
		};
		_zombie say _sound;
		if (isMultiplayer) then {
			[nil, _zombie, rSAY, _sound] call RE;
		};
	};
};
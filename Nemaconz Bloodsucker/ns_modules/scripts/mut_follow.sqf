/*
**  Mutants script, Nightstalkers: Shadow of Namalsk
*   ..created by Sumrak, ©2010
*   http://www.nightstalkers.cz
*   sumrak<at>nightstalkers.cz
*   PBO edition
*   Version for zombie
*/

ns_mut_target_search = {
  _mutant = _this select 0;
  _cover_area = _this select 1;
  _refresh = false;
  _i = 1;
  _targets = nearestObjects [_mutant, ["CAManBase"], _cover_area];
  while {!_refresh && (_i < (count _targets))} do {
  _mut_target = _targets select _i;
    if (alive _mut_target) then {
      if (!(_mut_target hasWeapon "mut_heart")) then {
         _refresh = true;
         _i = 1;
      } else {
       _i = _i + 1;
       _mut_target = nil;
      };
    } else {
      _i = _i + 1;
      _mut_target = nil;
    };
  };
};

private["_mutant", "_cover_area", "_mut_target", "_bul", "_sound"];

if (isServer) then {
	_mutant = _this select 0;
	
	// init
	[_mutant] join grpNull;
	_mutant disableConversation true;
	_mutant setVariable ["BIS_noCoreConversations", true];
	_mutant disableAI "TARGET";
	_mutant disableAI "AUTOTARGET"; 
	_mutant setBehaviour "CARELESS";
	
	(side _mutant) setFriend [east, 1];
	(side _mutant) setFriend [west, 1];
	
	_cover_area = 500;
	_mut_target = nil;
	
	while {alive _mutant} do {
		_bul = [_mutant, _cover_area] call ns_mut_target_search; 
		_mutant doMove (getPos _mut_target);
		sleep 1;
		if (((_mutant distance _mut_target) < 2) && (alive _mutant) && (alive _mut_target)) then {
			_mutant doWatch _mut_target;
			_mutant switchMove "AmelPercMstpSnonWnonDnon_amaterUder2"; 
			if (isMultiplayer) then { 
				[nil, _mutant, rSwitchMove, "AmelPercMstpSnonWnonDnon_amaterUder2"] call RE;
			};
			_mut_target setDamage ((damage _mut_target) + 0.05);
			if (isMultiplayer) then {
				//Normal MP
				[nil, _mut_target, rEXECVM, "\nst\ns_modules\mutants\scripts\zomb_att.sqf", _mut_target] call RE;
			} else {
			    //Normal SP
			    [player] execVM "\nst\ns_modules\mutants\scripts\zomb_att.sqf";
			};
			_s = round (random 3);
			switch (_s) do {
				case 0: {_sound = "z_at1";};
				case 1: {_sound = "z_at2";};
				case 2: {_sound = "z_at3";};
				case 3: {_sound = "z_at4";};
			};
			_mutant say _sound;
			if (isMultiplayer) then {
				[nil, _mutant, rSAY, _sound] call RE;
			};
			sleep 0.9; 
			_mutant switchMove "";  
			if (isMultiplayer) then { 
				[nil, _mutant, rSwitchMove, ""] call RE;
			};
		};
	}; 
	_mutant removeWeapon "mut_heart";
	_mutant removeWeapon "APSI";
};
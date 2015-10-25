/*
 **  Mutants script, Nightstalkers: Shadow of Namalsk
 *   ..created by Nemaconz and Sumrak, ©2015
 *   http://www.nightstalkers.cz
 *   sumrak<at>nightstalkers.cz
 *	 Nemaconz<at>gmail.com
 *   PBO edition
 *  Version for bloodsucker
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
      if (!(_mut_target hasWeapon "mut_heart") && !(_mut_target isKindOf "zZombie_Base")) then {
         _refresh = true;
         _i = 1;
      } else {
       _i = _i + 1;
       _mut_target = objNull;
      };
    } else {
      _i = _i + 1;
      _mut_target = objNull;
    };
  };
};
private["_mutant", "_blood_skin", "_cover_area", "_mutant_skin", "_mut_target", "_bul", "_sound", "_refresh"];

if (isServer) then {
	_mutant = _this select 0;
	_blood_skin = round(random 3);
	switch (_blood_skin) do {
		case 0: { _mutant_skin = "\Nemaconz_BS\addons\bs\blood\act_krovosos_new1.paa";};
		case 1: { _mutant_skin = "\Nemaconz_BS\addons\bs\blood\act_krovosos_3.paa"; };
		case 2: { _mutant_skin = "\Nemaconz_BS\addons\bs\blood\act_krovosos_2.paa"; };
		case 3: { _mutant_skin = "\Nemaconz_BS\addons\bs\blood\act_krovosos_2.paa"; };
	};
	// init
	[_mutant] join grpNull;
	_mutant disableConversation true;
	_mutant setVariable ["BIS_noCoreConversations", true];
	_mutant disableAI "TARGET";
	_mutant disableAI "AUTOTARGET"; 
	_mutant setBehaviour "CARELESS";
	_mutant setObjectTexture [0,""];
	
	if (isNil("dzn_ns_bloodsucker")) then { dzn_ns_bloodsucker = false; };
	
	(side _mutant) setFriend [east, 1];
	(side _mutant) setFriend [west, 1];
	
	_cover_area = 500;
	_mut_target = objNull;
	
	while {alive _mutant} do {
	  _bul = [_mutant, _cover_area] call ns_mut_target_search;
	  //hint format ["%1 %2 %3", _mutant, _cover_area, _mut_target];
	  _mutant doMove (getPos _mut_target); 
	  sleep 1;
		if ((_mutant distance _mut_target) <= 5) then {
				_mutant setObjectTexture [0, _mutant_skin];
			if (isMultiplayer) then {
				[nil, nil, rSETOBJECTTEXTURE, _mutant, 0, _mutant_skin] call RE;
			};
			if (((_mutant distance _mut_target) < 2) && (alive _mutant) && (alive _mut_target)) then {
				_mutant doWatch _mut_target;
				_mutant switchMove "AmelPercMstpSnonWnonDnon_amaterUder2";   
				if (isMultiplayer) then {
					[nil, _mutant, rSwitchMove, "AmelPercMstpSnonWnonDnon_amaterUder2"] call RE;
				};
				if (dzn_ns_bloodsucker) then {
					// DayZ: Namalsk - damage done by decreasing blood count
					if (isMultiplayer) then {
						//DayZ MP
						[nil, _mut_target, rEXECVM, "bs_modules\scripts\blood_dayz_att.sqf", _mut_target] call RE;
					} else {
						//DayZ SP
						r_player_blood = r_player_blood - (((random 2) * 560) + 450);
					};
				} else {
					// normal mode - damage done by setDamage
					_mut_target setDamage ((damage _mut_target) + 0.15);
					if (isMultiplayer) then {
						//Normal MP
						[nil, _mut_target, rEXECVM, "bs_modules\scripts\blood_att.sqf", _mut_target] call RE;
					} else {
						//Normal SP
						if (_mut_target == player) then {
							[player] execVM "bs_modules\scripts\blood_att.sqf";
						};
					};
				};
				_s = round (random 3);
				switch (_s) do {
					case 0: {_sound = "blood_att_1";};
					case 1: {_sound = "blood_att_2";};
					case 2: {_sound = "blood_att_3";};
					case 3: {_sound = "blood_att_4";};
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
		} else {
			_mutant setObjectTexture [0, ""];
			if (isMultiplayer) then {
				[nil, nil, rSETOBJECTTEXTURE, _mutant, 0, ""] call RE;
			};
		};
	};
	_mutant setObjectTexture [0, _mutant_skin];
	if (isMultiplayer) then {
		[nil, nil, rSETOBJECTTEXTURE, _mutant, 0, _mutant_skin] call RE;
	};
	
	_mutant removeWeapon "mut_heart";
	_mutant removeWeapon "APSI";
};
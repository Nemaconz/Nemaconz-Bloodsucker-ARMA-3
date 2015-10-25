_victim = _this select 0;
if (_victim == player) then {
	r_player_blood = r_player_blood - (((random 2) * 560) + 450);
	[] execVM "bs_modules\scripts\mut_att.sqf";
	[] execVM "bs_modules\scripts\mut_stuj.sqf";
};
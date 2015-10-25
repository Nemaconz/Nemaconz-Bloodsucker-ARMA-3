_victim = _this select 0;
if (_victim == player) then {
	[] execVM "bs_modules\scripts\mut_att.sqf";
	[] execVM "bs_modules\scripts\mut_stuj.sqf";
};
_victim = _this select 0;
if (_victim == player) then {
	[] execVM "\nst\ns_modules\mutants\scripts\mut_att.sqf";
	[] execVM "\nst\ns_modules\mutants\scripts\mut_stuj.sqf";
};
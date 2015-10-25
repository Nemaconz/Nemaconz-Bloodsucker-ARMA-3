/*
 **  Mutants spawing script
 *   Nightstalkers: Shadow of Namalsk
 *   Edited BIS animal spawning module
 *    by Nemaconz and Sumrak 
 *      http://www.nightstalkers.cz
 *      Sumrak<at>nightstalkers.cz
 *		Nemaconz<at>gmail.com
 *   init file
*/

_logic = _this select 0;
_logic setPos [1000,10,1];

if (isServer) then {
  _fsm = [] execfsm "Nemaconz_BS\ns_modules\fsms\Mutants_main.fsm";
};
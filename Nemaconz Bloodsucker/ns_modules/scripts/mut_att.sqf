/*
 **  Mutants script, Nightstalkers: Shadow of Namalsk
 *   ..created by Sumrak, ©2010
 *   http://www.nightstalkers.cz
 *   sumrak<at>nightstalkers.cz
 *   PBO edition
 *   Melee attack effects (if _target == player)
*/

 sleep 0.1;    
 if (!dzn_ns_bloodsucker) then { cutRSC["ns_skr","PLAIN"];};
 "dynamicBlur" ppEffectEnable true;
 "dynamicBlur" ppEffectAdjust [2];
 "dynamicBlur" ppEffectCommit 0.1;  

 _ns_mut_skr = ppEffectCreate ["colorCorrections", 1553]; 
 _ns_mut_skr ppEffectEnable true;
 _ns_mut_skr ppEffectAdjust [1, 1, 0, [0.1, 0.0, 0.0, 1], [1.0, 0.5, 0.5, 0.1], [0.199, 0.587, 0.114, 0.0]];
 _ns_mut_skr ppEffectCommit 0.1;	
 sleep 0.1;
 _ns_mut_skr ppEffectAdjust [1, 1, 0, [0.1, 0.0, 0.0, 0.5], [1.0, 0.5, 0.5, 0.1], [0.199, 0.587, 0.114, 0.0]];
 _ns_mut_skr ppEffectCommit 0.3;
 sleep 0.3;
 
 ppEffectDestroy _ns_mut_skr; 
 sleep 4;
 "dynamicBlur" ppEffectEnable false;
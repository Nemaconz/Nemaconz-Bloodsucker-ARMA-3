#define _ARMA_

class CfgPatches
{
	class ns_anims
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_f","A3_Characters_f","A3_Anims_F"};
	};
};
class CfgMovesBasic;
class CfgMovesMaleSdr;
class NS_CfgMoves_Bloodsucker: CfgMovesMaleSdr
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class StandBase;
	class StatesExt
	{
		class AmovPercMstpSnonWnonDnon: StandBase
		{
			actions = "CivilStandActions";
			duty = -1;
			equivalentTo = "";
			preload = 0;
			file = "ns_anims\forward.rtm";
			showWeaponAim = 0;
			disableWeapons = 1;
			canPullTrigger = 0;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			looped = 1;
			soundEnabled = 0;
			soundOverride = "";
			soundEdge[] = {0.5,1};
			enableBinocular = 1;
			leftHandIKBeg = 0.0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0.0;
			rightHandIKBeg = 0.0;
			rightHandIKCurve[] = {};
			rightHandIKEnd = 0.0;
			hasCollShapeSafe = 0;
			collisionShapeSafe = "";
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Mrun_Slow_Wrfl.p3d";
			headBobStrength = 0.21393;
			limitGunMovement = 0.1;
			enableOptics = -1;
			ConnectTo[] = {"ActsPercMstpSnonWpstDnon_suicide1A",0.02,"ActsPercMstpSnonWpstDnon_suicide2A",0.02,"AmovPercMstpSnonWnonDnon_sekaniIn",0.02,"AidlPercMstpSnonWnonDnon",0.01,"AidlPercMstpSnonWnonDnon_player",0.01,"AovrPercMstpSnonWnonDf",0.01,"AmovPercMstpSnonWnonDnon_turnL",0.02,"AmovPercMstpSnonWnonDnon_turnR",0.02,"AmovPercMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon",0.03,"AmovPercMstpSnonWnonDnon_AwopPercMstpSoptWbinDnon",0.02,"ActsPercMstpSnonWnonDnon_varStayLeant",2.0,"ActsPercMstpSnonWrflDnon_Interrogate01",2.0,"ActsPercMstpSnonWrflDnon_Interrogate02",2.0,"ActsPsitMstpSnonWnonDnon_InterrogateLeaves",2.0,"AmovPercMstpSnonWnonDnon_Scared",2.0,"AmovPercMstpSnonWnonDnon_Scared2",2.0,"AmovPercMstpSnonWnonDnon_carCheckPush",2.0,"AmovPercMstpSnonWnonDnon_carCheckWash",2.0,"AmovPercMstpSnonWnonDnon_carCheckWheel",2.0,"AmovPercMstpSnonWnonDnon_exerciseKata",2.0,"ActsPercMstpSnonWnonDnon_DancingDuoIvan",2.0,"ActsPercMstpSnonWnonDnon_DancingDuoStefan",2.0,"ActsPercMstpSnonWnonDnon_DancingStefan",2.0,"AmovPercMstpSnonWnonDnon_exercisekneeBendA",2.0,"AmovPercMstpSnonWnonDnon_exercisekneeBendB",2.0,"AmovPercMstpSnonWnonDnon_exercisePushup",2.0,"AmovPercMstpSnonWnonDnon_seeWatch",2.0,"AmovPercMstpSnonWnonDnon_talking",2.0,"ActsPercMstpSnonWpstDnon_sceneBardak01",0.1,"AmovPercMstpSnonWnonDnon_normalizationTest",0.1,"AmovPercMstpSnonWnonDnon_SaluteIn",0.1,"AmovPercMstpSnonWnonDnon_EaseIn",0.1,"AmovPercMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground",0.1,"AmovPercMstpSnonWnonDnon_AmovPercMstpSsurWnonDnon",0.1,"AwopPercMstpSgthWnonDnon_start",0.1,"LadderCivilOn",1.0,"AswmPercMstpSnonWnonDnon",0.3,"ActsPknlMstpWunaSnonDnon_sceneCrashSite_Villager",0.1,"AmovPercMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInLow",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium",0.02,"AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInHigh",0.02,"amovpercmstpsnonwnondnon_amovpercmstpsraswlnrdnon",0.02,"ActsPercSnonWnonDnon_assembling",0.01,"ActsPercSnonWnonDnon_carFixing",0.01,"ActsPercSnonWnonDnon_carFixing2",0.01,"ActsPercSnonWnonDnon_tableSupport_TalkIn",0.01,"ActsPercMstpSrasWunaDnon_sceneLopotevBandCaptured_Kostey",0.01,"AidlPpneMstpSnonWnonDnon_SleepA_layDown",0.01,"AidlPpneMstpSnonWnonDnon_SleepB_layDown",0.01,"AidlPpneMstpSnonWnonDnon_SleepC_layDown",0.01,"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Nikitin",0.01,"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Bardak",0.01,"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Homeless",0.01,"ActsPercMstpSnonWunaDnon_sceneNikitinDisloyalty_Lopotev1",0.01,"ErcUnarm_sitUnarm_L",0.01,"ErcUnarm_sitUnarm_R",0.01,"sitTableRfl_listening_onTTractor",0.01,"sitUnarm_L_idleLoop_onFoiledPallets",0.01,"sitUnarm_L_idleLoop_onFoiledPallets2",0.01,"ErcUnarm_sitTable",0.01,"sitTableUnarm_talkingListening_TowingTractor",0.01,"UnaErc_UnaErcPoslechVelitele",0.01,"Csdr_LHD_oprenOzabradli118cm_A",0.01,"UnaErcVelitelProslov1",0.01,"FPS_shift",0.01,"ctsLopoHover_cdf2",0.01,"ctsLopoHover_lopotev",0.01,"sitUnarm_L_idleLoop_inUH1Y",0.01,"AmelPercMstpSnonWnonDnon_amaterUder1",0.02,"AmelPercMstpSnonWnonDnon_amaterUder2",0.02,"AmelPercMstpSnonWnonDnon_amaterUder3",0.02,"AmelPercMstpSnonWnonDnon_zasah1",0.02,"AmelPercMstpSnonWnonDnon_zasah2",0.02,"AmelPercMstpSnonWnonDnon_zasah3hard",0.02,"AmelPercMstpSnonWnonDnon_zasah4",0.02,"AmelPercMstpSnonWnonDnon_zasah5hard",0.02,"AmelPercMstpSnonWnonDnon_zasah6hlava",0.02,"AmelPercMstpSnonWnonDnon_zasah7bricho",0.02,"NavigationDriverReverse",0.01,"RepairingKneel",0.01,"RepairingErc",0.01,"NavigationHeli",0.01,"AmovPercMstpSnonWnonDnon_initLoop",0.01,"AmovPercMstpSnonWnonDnon_idle70chozeniPoRukou",0.01,"AmovPercMstpSnonWnonDnon_idle68boxing",0.01,"AmovPercMstpSnonWnonDnon_zevl",0.01};
			InterpolateTo[] = {"AinvPknlMstpSnonWnonDnon_AinvPknlMstpSnonWnonDnon_medic",0.02,"AmovPercMstpSnonWnonDnon_turnL",0.02,"AmovPercMstpSnonWnonDnon_turnR",0.02,"AmovPercMwlkSnonWnonDf",0.02,"AmovPercMwlkSnonWnonDfl",0.02,"AmovPercMwlkSnonWnonDl",0.02,"AmovPercMwlkSnonWnonDbl",0.02,"AmovPercMwlkSnonWnonDb",0.02,"AmovPercMwlkSnonWnonDbr",0.02,"AmovPercMwlkSnonWnonDr",0.02,"AmovPercMwlkSnonWnonDfr",0.02,"AmovPercMrunSnonWnonDf",0.02,"AmovPercMrunSnonWnonDfl",0.02,"AmovPercMrunSnonWnonDl",0.02,"AmovPercMrunSnonWnonDbl",0.02,"AmovPercMrunSnonWnonDb",0.02,"AmovPercMrunSnonWnonDbr",0.02,"AmovPercMrunSnonWnonDr",0.02,"AmovPercMrunSnonWnonDfr",0.02,"AmovPercMevaSnonWnonDf",0.02,"AmovPercMevaSnonWnonDfl",0.02,"AmovPercMevaSnonWnonDfr",0.02,"AdthPercMstpSnonWnonDnon_1",0.01,"AdthPercMstpSnonWnonDnon_2",0.01,"AdthPercMstpSnonWnonDnon_3",0.01,"ActsPsitMstpSnonWnonDnon_varSittingDrinking",0.02,"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",0.1,"ActsPercMstpSnonWnonDnon_talking01",0.1,"ActsPercMstpSnonWnonDnon_talking02",0.1,"ActsPercMstpSnonWnonDnon_talking03",0.1,"ActsPercMstpSnonWnonDnon_talking04",0.1,"AidlPercSnonWnonDnon_talkBS",0.01,"sitTableRfl_listening_onTTractor",0.01,"sitUnarm_L_idleLoop_onFoiledPallets",0.01,"sitUnarm_L_idleLoop_onFoiledPallets2",0.01,"sitUnarm_L_idleLoop_inUH1Y",0.01};
		};
		class AmovPercMrunSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			actions = "CivilRunActionsF";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			soundEdge[] = {0.25,0.5,0.75,1};
			duty = 0.4;
			soundOverride = "run";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			walkcycles = 2;
			disableWeapons = 1;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMrunSnonWnonDf",0.03,"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMevaSnonWnonDf",0.02};
		};
		class AmovPercMwlkSnonWnonDf: AmovPercMstpSnonWnonDnon
		{
			actions = "CivilWlkActionsF";
			file = "ns_anims\forward.rtm";
			soundEdge[] = {0.25,0.5,0.75,1};
			speed = 3.21;
			duty = -0.1;
			soundOverride = "walk";
			soundEnabled = 1;
			walkcycles = 2;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMwlkSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDf",0.025,"AmovPknlMwlkSnonWnonDf",0.03,"AmovPercMevaSnonWnonDf",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1};
		};
		class AmovPercMwlkSnonWnonDfl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsFL";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMwlkSnonWnonDl",0.025,"AmovPercMrunSnonWnonDfl",0.025,"AmovPknlMwlkSnonWnonDfl",0.03,"AmovPercMevaSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1};
		};
		class AmovPercMwlkSnonWnonDl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsL";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMwlkSnonWnonDbl",0.025,"AmovPercMrunSnonWnonDl",0.025,"AmovPknlMwlkSnonWnonDl",0.03};
		};
		class AmovPercMwlkSnonWnonDbl: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsBL";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDl",0.025,"AmovPercMwlkSnonWnonDb",0.025,"AmovPercMrunSnonWnonDbl",0.025,"AmovPknlMwlkSnonWnonDbl",0.03};
		};
		class AmovPercMwlkSnonWnonDb: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsB";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDbl",0.025,"AmovPercMwlkSnonWnonDbr",0.025,"AmovPercMrunSnonWnonDb",0.025,"AmovPknlMwlkSnonWnonDb",0.03};
		};
		class AmovPercMwlkSnonWnonDbr: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsBR";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDb",0.025,"AmovPercMwlkSnonWnonDr",0.025,"AmovPercMrunSnonWnonDbr",0.025,"AmovPknlMwlkSnonWnonDbr",0.03};
		};
		class AmovPercMwlkSnonWnonDr: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsR";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDbr",0.025,"AmovPercMwlkSnonWnonDfr",0.15,"AmovPercMrunSnonWnonDr",0.025,"AmovPknlMwlkSnonWnonDr",0.03};
		};
		class AmovPercMwlkSnonWnonDfr: AmovPercMwlkSnonWnonDf
		{
			actions = "CivilWlkActionsFR";
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMwlkSnonWnonDnon_transition",0.015,"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMwlkSnonWnonDr",0.15,"AmovPercMrunSnonWnonDfr",0.025,"AmovPknlMwlkSnonWnonDfr",0.03,"AmovPercMevaSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDf_AmovPercMstpSnonWnonDnon_gthStart",0.1};
		};
		class SprintBaseDf: StandBase
		{
			actions = "CivilStandActions";
			preload = 0;
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			soundOverride = "sprint";
			duty = 0.6;
			showWeaponAim = 0;
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Mrun_Slow_Wrfl.p3d";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			limitGunMovement = 0;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.1;
			enableAutoActions = 0;
			visibleSize = 1.000121;
			soundEnabled = 1;
			aiming = "aimingCivil";
			aimingBody = "aimingUpCivil";
			headBobStrength = 0.154229;
			headBobMode = 2;
			ConnectTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02};
			InterpolateTo[] = {"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02};
		};
		class SprintBaseDfl: SprintBaseDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Mrun_Slow_Wrfl_Dl.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class SprintBaseDfr: SprintBaseDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Mrun_Slow_Wrfl_Dr.p3d";
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class SprintCivilBaseDf: SprintBaseDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Wnon.p3d";
			visibleSize = 1.000121;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class SprintCivilBaseDfl: SprintCivilBaseDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class SprintCivilBaseDfr: SprintCivilBaseDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
		class AmovPercMevaSnonWnonDf: SprintCivilBaseDf
		{
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			speed = 3.21;
			canPullTrigger = 0;
			duty = 0.6;
			walkcycles = 1;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMwlkSnonWnonDf",0.025,"AmovPercMrunSnonWnonDf",0.02,"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMevaSnonWnonDfl",0.02,"AmovPercMevaSnonWnonDfr",0.02};
		};
		class AmovPercMevaSnonWnonDfl: SprintCivilBaseDfl
		{
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			canPullTrigger = 0;
			duty = 0.6;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.106489;
			walkcycles = 2;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMwlkSnonWnonDfl",0.025,"AmovPercMrunSnonWnonDfl",0.02,"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMevaSnonWnonDf",0.02,"AmovPercMevaSnonWnonDfr",0.02};
		};
		class AmovPercMevaSnonWnonDfr: SprintCivilBaseDfr
		{
			actions = "CivilEvasiveActions";
			soundOverride = "sprint";
			soundEnabled = 1;
			canPullTrigger = 0;
			duty = 0.6;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.106489;
			walkcycles = 2;
			ConnectTo[] = {"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPercMstpSnonWnonDnon",0.02,"AmovPercMwlkSnonWnonDfr",0.025,"AmovPercMrunSnonWnonDfr",0.02,"AmovPercMsprSnonWnonDf_AmovPpneMstpSnonWnonDnon",0.02,"AmovPercMevaSnonWnonDf",0.02,"AmovPercMevaSnonWnonDfl",0.02};
		};
		class AmovPercMevaSrasWrflDf: SprintBaseDf
		{
			actions = "CivilStandActions";
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Mrun_Slow_Wrfl.p3d";
			relSpeedMin = 0.797005;
			soundOverride = "sprint";
			soundEnabled = 1;
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			duty = 0.6;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon",0.02,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMwlkSrasWrflDf",0.025,"AmovPercMrunSrasWrflDf",0.025,"AmovPercMsprSlowWrflDf_AmovPpneMstpSrasWrflDnon",0.02,"AmovPknlMevaSrasWrflDf",0.025,"AmovPercMevaSlowWrflDf",0.025,"AmovPercMevaSrasWrflDfl",0.025,"AmovPercMevaSrasWrflDfr",0.025,"AdthPercMrunSlowWrflDf_6",0.01,"AdthPercMrunSlowWrflDf_A1short",0.01,"AdthPercMrunSlowWrflDf_A2short",0.01,"AdthPercMrunSlowWrflDf_A3short",0.01,"AdthPercMrunSlowWrflDf_A4short",0.01};
		};
		class AmovPknlMevaSrasWrflDf: AmovPercMevaSrasWrflDf
		{
			actions = "CivilStandActions";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPknlMrunSlowWrflDf",0.025,"AmovPknlMrunSrasWrflDf",0.025,"AmovPercMevaSrasWrflDf",0.025,"AmovPercMevaSlowWrflDf",0.025};
		};
		class AmovPercMevaSlowWrflDf: AmovPercMevaSrasWrflDf
		{
			actions = "CivilStandActions";
			limitGunMovement = 0.1;
			weaponIK = 1;
			headBobStrength = 0.253731;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon",0.025,"AmovPercMwlkSlowWrflDf",0.025,"AmovPercMrunSlowWrflDf",0.025,"AmovPercMevaSrasWrflDf",0.025,"AidlPercMevaSrasWrflDf",0.01,"AmovPercMevaSlowWrflDfl",0.025,"AmovPercMevaSlowWrflDfr",0.025,"AdthPercMrunSlowWrflDf_A1short",0.01,"AdthPercMrunSlowWrflDf_A2short",0.01,"AdthPercMrunSlowWrflDf_A3short",0.01,"AdthPercMrunSlowWrflDf_A4short",0.01};
		};
		class AmovPercMstpSrasWpstDnon: StandBase
		{
			actions = "CivilStandActions";
			duty = -1;
			file = "ns_anims\forward.rtm";
			showWeaponAim = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			showHandGun = 1;
			speed = 1e+010;
			relSpeedMin = 0.700001;
			relSpeedMax = 1.1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Wpst.p3d";
			weaponIK = 2;
			enableOptics = 2;
			headBobStrength = 0.223881;
			headBobMode = 2;
			ConnectTo[] = {"AidlPercMstpSrasWpstDnon_player_0S",0.02,"AovrPercMstpSrasWpstDf",0.01,"AmovPercMstpSrasWpstDnon_AidlPercMstpSlowWpstDnon",0.01,"AmovPercMstpSrasWpstDnon_turnL",0.02,"AmovPercMstpSrasWpstDnon_turnR",0.02,"PistolMagazineReloadStand",0.1,"AmovPercMstpSrasWpstDnon_AmovPercMstpSlowWpstDnon",0.02,"AmovPercMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWpstDnon_AmovPpneMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWpstDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPercMstpSrasWpstDnon_AwopPercMstpSoptWbinDnon",0.02,"AmovPercMstpSrasWpstDnon_AmovPercMstpSnonWnonDnon",0.02,"ActsPercMstpSnonWpstDnon_sceneBardakPistol01",0.1,"AmovPercMstpSrasWpstDnon_SaluteIn",0.02,"AwopPercMstpSgthWpstDnon_Part1",0.1,"AswmPercMstpSnonWnonDnon",0.3,"AmovPercMstpSrasWpstDnon_AinvPknlMstpSnonWnonDnon",0.02,"amovpercmstpsraswpstdnon_amovpercmstpsraswlnrdnon",0.02,"ctsLopoHover_shagarov",0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWpstDnon_turnL",0.02,"AmovPercMstpSrasWpstDnon_turnR",0.02,"AmovPercMwlkSrasWpstDf",0.02,"AmovPercMwlkSrasWpstDfl",0.02,"AmovPercMwlkSrasWpstDl",0.02,"AmovPercMwlkSrasWpstDbl",0.02,"AmovPercMwlkSrasWpstDb",0.02,"AmovPercMwlkSrasWpstDbr",0.02,"AmovPercMwlkSrasWpstDr",0.02,"AmovPercMwlkSrasWpstDfr",0.02,"AmovPercMrunSrasWpstDf",0.02,"AmovPercMrunSrasWpstDfl",0.02,"AmovPercMrunSrasWpstDl",0.02,"AmovPercMrunSrasWpstDbl",0.02,"AmovPercMrunSrasWpstDb",0.02,"AmovPercMrunSrasWpstDbr",0.02,"AmovPercMrunSrasWpstDr",0.02,"AmovPercMrunSrasWpstDfr",0.02,"AmovPercMevaSrasWpstDf",0.02,"AmovPercMevaSrasWpstDfl",0.02,"AmovPercMevaSrasWpstDfr",0.02,"AdthPercMstpSrasWpstDnon_1",0.01,"AdthPercMstpSrasWpstDnon_3",0.01,"AdthPercMstpSrasWpstDnon_5",0.01};
		};
		class AmovPpneMstpSrasWpstDnon: AmovPercMstpSrasWpstDnon
		{
			actions = "CivilStandActions";
			file = "ns_anims\forward.rtm";
			showWeaponAim = 1;
			visibleSize = 0.100123;
			onLandBeg = 1;
			onLandEnd = 1;
			aiming = "aimingPistol";
			aimingBody = "aimingUpPistol";
			legs = "legsDefault";
			collisionShape = "A3\anims_f\data\geom\sdr\Ppne.p3d";
			leaningFactorBeg = 0.0;
			leaningFactorEnd = 0.0;
			leaning = "leaningDefault";
			soundOverride = "crawl";
			weaponIK = 2;
			limitGunMovement = 1.0;
			ConnectTo[] = {"AmovPpneMstpSrasWpstDnon_turnL",0.02,"AmovPpneMstpSrasWpstDnon_turnR",0.02,"PistolMagazineReloadProne",0.1,"AmovPpneMstpSrasWpstDnon_AmovPercMstpSrasWpstDnon",0.02,"AmovPpneMstpSrasWpstDnon_AmovPknlMstpSrasWpstDnon",0.02,"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWpstDnon_AwopPpneMstpSoptWbinDnon",0.02,"AmovPpneMstpSrasWpstDnon_AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDl",0.02,"AmovPpneMstpSrasWpstDnon_AmovPpneMevaSlowWpstDr",0.02,"AwopPpneMstpSgthWpstDnon_Part1",0.1,"AidlPpneMstpSrasWpstDnon0S",0.1,"AidlPpneMstpSrasWpstDnon01",0.1,"AidlPpneMstpSrasWpstDnon02",0.1,"AidlPpneMstpSrasWpstDnon03",0.1,"AmovPpneMstpSrasWpstDnon_healed",0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon_turnL",0.02,"AmovPpneMstpSrasWpstDnon_turnR",0.02,"AmovPpneMrunSlowWpstDf",0.02,"AmovPpneMrunSlowWpstDfl",0.02,"AmovPpneMrunSlowWpstDl",0.02,"AmovPpneMrunSlowWpstDbl",0.02,"AmovPpneMrunSlowWpstDb",0.02,"AmovPpneMrunSlowWpstDbr",0.02,"AmovPpneMrunSlowWpstDr",0.02,"AmovPpneMrunSlowWpstDfr",0.02,"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",0.01,"AdthPpneMstpSrasWpstDnon_1",0.01,"AdthPpneMstpSrasWpstDnon_2",0.01,"AidlPpneMstpSrasWpstDnon0S",0.02,"AidlPpneMstpSrasWpstDnon01",0.02,"AidlPpneMstpSrasWpstDnon02",0.02,"AidlPpneMstpSrasWpstDnon03",0.02};
		};
		class AmovPpneMrunSlowWpstDf: AmovPpneMstpSrasWpstDnon
		{
			visibleSize = 0.150123;
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			soundOverride = "crawl";
			duty = 0.4;
			showWeaponAim = 0;
			disableWeapons = 1;
			limitGunMovement = 0.0;
			soundEnabled = 1;
			legs = "wholeBody";
			leaning = "empty";
			aimingBody = "empty";
			aiming = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDl",0.025,"AmovPpneMrunSlowWpstDfr",0.025,"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",0.01};
		};
		class AmovPpneMrunSlowWpstDfl: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDl",0.025,"AmovPpneMrunSlowWpstDb",0.025,"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",0.01};
		};
		class AmovPpneMrunSlowWpstDl: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDf",0.025,"AmovPpneMrunSlowWpstDfl",0.025};
		};
		class AmovPpneMrunSlowWpstDbl: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDb",0.025,"AmovPpneMrunSlowWpstDbr",0.025};
		};
		class AmovPpneMrunSlowWpstDb: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDfl",0.025,"AmovPpneMrunSlowWpstDbl",0.025};
		};
		class AmovPpneMrunSlowWpstDbr: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDbl",0.025,"AmovPpneMrunSlowWpstDr",0.025};
		};
		class AmovPpneMrunSlowWpstDr: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDbr",0.025,"AmovPpneMrunSlowWpstDfr",0.025};
		};
		class AmovPpneMrunSlowWpstDfr: AmovPpneMrunSlowWpstDf
		{
			file = "ns_anims\forward.rtm";
			speed = 3.21;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMrunSlowWpstDf",0.025,"AmovPpneMrunSlowWpstDr",0.025,"AmovPpneMstpSrasWpstDnon_AmovPercMsprSlowWpstDf",0.01};
		};
		class AmovPercMstpSlowWrflDnon: StandBase
		{
			actions = "CivilStandActions";
			duty = -1.0;
			file = "ns_anims\forward.rtm";
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Idle.p3d";
			showWeaponAim = 0;
			disableWeapons = 0;
			disableWeaponsLong = 1;
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			soundEnabled = 0;
			enableBinocular = 1;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			leftHandIKBeg = 1;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = 1;
			rightHandIKBeg = 1;
			rightHandIKCurve[] = {1};
			rightHandIKEnd = 1;
			aimPrecision = 1.0;
			weaponIK = 1;
			headBobMode = 2;
			canPullTrigger = 0;
			ConnectTo[] = {"AidlPercMstpSlowWrflDnon_player_0S",0.01,"AovrPercMstpSlowWrflDf",0.01,"AmovPercMstpSlowWrflDnon_turnL",0.02,"AmovPercMstpSlowWrflDnon_turnR",0.02,"AmovPercMstpSlowWrflDnon_AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMstpSlowWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMstpSlowWrflDnon_AmovPercMstpSrasWrflDnon",0.01,"ActsPsitMstpSnonWrflDnon_varSittingDrinking",10.0,"AmovPercMstpSlowWrflDnon_ScaredTalking",2.0,"AmovPercMstpSlowWrflDnon_talking",2.0,"AmovPercMstpSlowWrflDnon_seeWatch",2.0,"AmovPercMstpSlowWrflDnon_SaluteIn",0.1,"AmovPercMstpSrasWrflDnon_SaluteIn",0.15,"AmovPercMstpSlowWrflDnon_AmovPsitMstpSlowWrflDnon",0.1,"AmovPercMstpSlowWrflDnon_AmovPsitMstpSrasWrflDnon",0.1,"LadderRifleOn",1.0,"AswmPercMstpSnonWnonDnon",0.3,"AidlPercMstpSrasWrflDnon0S",0.01,"ActsPpneMstpWunaSnonDnon_sceneCrashSite_Cooper",0.1,"AidlPercMstpSlowWrflDnon0S",0.01,"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Ohara",0.1,"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Sykes",0.1,"ActsPpneMstpWrflSlowDnon_sceneCrashSite_Rodriguez",0.1,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,"AmovPercMstpSnonWnonDnon_AcinPknlMwlkSnonWnonDb_1",0.1,"ActsPercMstpSnonWnonDnon_talking01a",0.1,"AidlPercSlowWrflDnon_talkCalm",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Rodriguez1",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Ohara1",0.01,"ActsPercMstpSlowWrflDnon_sceneLopotevBandCaptured_Cooper",0.1,"AidlPercSlowWrflDnon_talkHeated",0.01,"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Steve",0.01,"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Simms",0.01,"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Kostey",0.01,"ActsPercMstpSlowWrflDnon_sceneNikitinDisloyalty_Adamson",0.01,"ActsPercMstpSgthWmagDnon_sceneNikitinDisloyalty_USflashbang1",10.0,"ActsPercMstpSlowWpstDnon_sceneLopotevBandCaptured_Sykes",0.01,"ErcRflLow_sitRfl_L",0.01,"ErcRflLow_sitRfl_L2",0.01,"ErcRflLow_sitRfl_R",0.01,"ErcRflLow_sitTable",0.01,"ErcRflLow_sitRfl_L_CARGO",0.01,"CtsDoktor_Doktor_uder4",0.01,"CtsDoktor_Doktor_uder5",0.01,"CtsDoktor_Vojak_vyslechStand2unaerc_reverse",0.01,"otockaErcRflLow_180leva",0.01,"ctsLopoHover_cooper",0.01,"ctsLopoHover_ohara",0.01,"ctsLopoHover_rodriguez",0.01,"ctsLopoHover_sykes",0.01,"sitRfl_R_BidleLoopTest",0.01,"AmelPercMstpSlowWrflDnon_StrokeGun",0.02,"ActsPercMstpSlowWrflDnon_listeningOrdersUnderFireShort",0.01,"AmovPercMstpSlowWrflDnon_ActsPercMstpSlowWrflDr_HideFromFire",0.01,"AsigPercMstpSlowWrflDnon_GoGo",0.01,"AsigPercMstpSlowWrflDnon_AmovPercMrunSlowWrflDnon_GoGo",0.01,"AsigPercMstpSlowWrflDnon_SendMenInAction",0.01,"AmovPercMstpSnonWnonDnon_zevl",0.01,"c4coming2cdf_genericstani",0.01};
			InterpolateTo[] = {"AmovPercMstpSlowWrflDnon_turnL",0.02,"AmovPercMstpSlowWrflDnon_turnR",0.02,"AmovPercMwlkSlowWrflDf",0.02,"AmovPercMwlkSlowWrflDfl",0.02,"AmovPercMwlkSlowWrflDl",0.02,"AmovPercMwlkSlowWrflDbl",0.02,"AmovPercMwlkSlowWrflDb",0.02,"AmovPercMwlkSlowWrflDbr",0.02,"AmovPercMwlkSlowWrflDr",0.02,"AmovPercMwlkSlowWrflDfr",0.02,"AmovPercMrunSlowWrflDf",0.02,"AmovPercMrunSlowWrflDfl",0.02,"AmovPercMrunSlowWrflDl",0.02,"AmovPercMrunSlowWrflDbl",0.02,"AmovPercMrunSlowWrflDb",0.02,"AmovPercMrunSlowWrflDbr",0.02,"AmovPercMrunSlowWrflDr",0.02,"AmovPercMrunSlowWrflDfr",0.02,"AmovPercMevaSlowWrflDf",0.025,"AmovPercMevaSlowWrflDfl",0.025,"AmovPercMevaSlowWrflDfr",0.025,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDl",0.02,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDr",0.02,"AmovPercMstpSlowWrflDnon_AmovPercMevaSrasWrflDb",0.02,"AdthPercMstpSlowWrflDnon_1",0.01,"AdthPercMstpSlowWrflDnon_2",0.01,"AdthPercMstpSlowWrflDnon_4",0.01,"AdthPercMstpSlowWrflDnon_8",0.01,"AdthPercMstpSlowWrflDnon_rS0",0.01,"AwopPercMstpSgthWrflDnon_Start1",0.1,"AwopPercMstpSgthWrflDnon_Throw1",0.1,"AwopPercMstpSgthWrflDnon_End1",0.1,"AwopPercMstpSgthWrflDnon_Throw2",0.1,"AwopPercMstpSgthWrflDnon_End2",0.1,"AidlPercMstpSlowWrflDnon01",0.02,"AidlPercMstpSlowWrflDnon02",0.02,"AidlPercMstpSlowWrflDnon03",0.02,"AidlPercMstpSlowWrflDnon04",0.02,"AidlPercMstpSlowWrflDnon_i01",0.02,"AidlPercMstpSlowWrflDnon_i02",0.02,"AidlPercMstpSlowWrflDnon_i03",0.02,"AidlPercMstpSlowWrflDnon_i04",0.02,"AidlPercMstpSlowWrflDnon_i05",0.02,"AidlPercMstpSlowWrflDnon_i06",0.02,"AidlPercMstpSlowWrflDnon_i07",0.02,"AidlPercMstpSlowWrflDnon_i08",0.02,"AidlPercMstpSlowWrflDnon_i09",0.02,"AidlPercMstpSlowWrflDnon_i10",0.02,"AidlPercMstpSlowWrflDnon_i11",0.02,"AidlPercMstpSlowWrflDnon_i12",0.02,"AidlPercMstpSlowWrflDnon_i13",0.02,"AidlPercMstpSlowWrflDnon05",0.02,"AidlPercMstpSlowWrflDnon06",0.02,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,"AdthPercMstpSlowWrflDnon_16",0.01,"AdthPercMstpSlowWrflDnon_32",0.01,"ActsPercMstpSlowWrflDnon_talking_C3BeginBriefing",0.1,"AidlPercSlowWrflDnon_talkListeningS",0.01,"AidlPercSnonWnonDnon_talkAS",0.01};
		};
		class AmovPercMstpSrasWrflDnon: AmovPercMstpSlowWrflDnon
		{
			visibleSize = 0.700121;
			actions = "CivilStandActions";
			file = "ns_anims\forward.rtm";
			collisionShape = "A3\anims_f\data\geom\sdr\Perc_Wrfl.p3d";
			showWeaponAim = 1;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			relSpeedMax = 1.1;
			relSpeedMin = 0.700001;
			aimPrecision = 1.0;
			weaponIK = 1;
			canPullTrigger = 1;
			ConnectTo[] = {"AidlPercMstpSrasWrflDnon_aiming0S",0.02,"AovrPercMstpSrasWrflDf",0.01,"AmovPercMwlkSrasWrflDnon_transition",0.02,"AmovPercMstpSrasWrflDnon_turnL",0.02,"AmovPercMstpSrasWrflDnon_turnR",0.02,"WeaponMagazineReloadStand",0.1,"amovpercmstpsraswrfldnon_amovpercmstpsraswlnrdnon",0.01,"AmovPercMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPercMstpSrasWrflDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPercMstpSrasWrflDnon_AmovPercMstpSlowWrflDnon",0.01,"AmovPercMstpSrasWrflDnon_AmovPercMstpSrasWpstDnon",0.02,"AmovPercMstpSrasWrflDnon_AwopPercMstpSoptWbinDnon",0.02,"AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon",0.02,"AwopPercMstpSgthWrflDnon_Start2",0.1,"AswmPercMstpSnonWnonDnon",0.3,"AmovPercMstpSrasWrflDnon_AinvPknlMstpSlayWrflDnon",0.02,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,"ActsPercMstpSnonWpstDnon_sceneBardakRifle01",0.1,"adthpercmstpsraswrfldnon_NikitinDead",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_zevl1",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_zevl2",0.01,"ActsPercMstpSrasWunaDnon_sceneLopotevBandCaptured_Bardak",10.0,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Lopotev",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Miles",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Nameless",0.01,"ActsPercMstpSrasWrflDnon_sceneLopotevBandCaptured_Nikitin",0.01};
			InterpolateTo[] = {"AmovPercMstpSrasWrflDnon_turnL",0.02,"AmovPercMstpSrasWrflDnon_turnR",0.02,"AmovPercMwlkSrasWrflDf",0.02,"AmovPercMwlkSrasWrflDfl",0.02,"AmovPercMwlkSrasWrflDl",0.02,"AmovPercMwlkSrasWrflDbl",0.02,"AmovPercMwlkSrasWrflDb",0.02,"AmovPercMwlkSrasWrflDbr",0.02,"AmovPercMwlkSrasWrflDr",0.02,"AmovPercMwlkSrasWrflDfr",0.02,"AmovPercMrunSrasWrflDf",0.02,"AmovPercMrunSrasWrflDfl",0.02,"AmovPercMrunSrasWrflDl",0.02,"AmovPercMrunSrasWrflDbl",0.02,"AmovPercMrunSrasWrflDb",0.02,"AmovPercMrunSrasWrflDbr",0.02,"AmovPercMrunSrasWrflDr",0.02,"AmovPercMrunSrasWrflDfr",0.02,"AmovPercMstpSrasWrflDnon_AmovPknlMstpSlowWrflDnon",0.02,"AmovPercMevaSrasWrflDf",0.02,"AmovPercMevaSrasWrflDfl",0.02,"AmovPercMevaSrasWrflDfr",0.02,"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDl",0.02,"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDr",0.02,"AmovPercMstpSrasWrflDnon_AmovPercMevaSrasWrflDb",0.02,"AdthPercMstpSrasWrflDnon_1",0.01,"AdthPercMstpSrasWrflDnon_2",0.01,"AdthPercMstpSrasWrflDnon_4",0.01,"AdthPercMstpSrasWrflDnon_8",0.01,"AdthPercMstpSrasWrflDnon_rS0",0.01,"AidlPercMstpSrasWrflDnon0S",0.02,"AidlPercMstpSrasWrflDnon",0.01,"AmovPercMstpSlowWrflDnon_AcinPknlMwlkSlowWrflDb_1",0.01,"AdthPercMstpSrasWrflDnon_16",0.01,"AdthPercMstpSrasWrflDnon_32",0.01,"adthpercmstpsraswrfldnon_NikitinDead",0.01};
		};
		class AmovPpneMstpSrasWrflDnon: AmovPercMstpSrasWrflDnon
		{
			variantsAI[] = {};
			actions = "CivilStandActions";
			file = "ns_anims\forward.rtm";
			collisionShape = "A3\anims_f\data\geom\sdr\Ppne.p3d";
			onLandBeg = 1;
			onLandEnd = 1;
			showWeaponAim = 1;
			disableWeapons = 0;
			visibleSize = 0.100123;
			aimPrecision = 0.3;
			aiming = "aimingDefault";
			aimingBody = "aimingUpDefault";
			leaning = "leaningDefault";
			legs = "legsDefault";
			leaningFactorBeg = 0.0;
			leaningFactorEnd = 0.0;
			limitGunMovement = 1.0;
			soundOverride = "crawl";
			weaponIK = 1;
			headBobStrength = 0.20398;
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon_injured",0.1,"AmovPpneMstpSrasWrflDnon_turnL",0.02,"AmovPpneMstpSrasWrflDnon_turnR",0.02,"WeaponMagazineReloadProne",0.1,"AmovPpneMstpSrasWrflDnon_AmovPercMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPknlMstpSrasWrflDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMstpSrasWrflDnon_AwopPpneMstpSoptWbinDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDl",0.02,"AmovPpneMstpSrasWrflDnon_AmovPpneMevaSlowWrflDr",0.02,"AwopPpneMstpSgthWrflDnon_Start",0.1,"AwopPpneMstpSgthWrflDnon_End",0.1,"AidlPpneMstpSrasWrflDnon0S",0.1,"AidlPpneMstpSrasWrflDnon01",0.1,"AidlPpneMstpSrasWrflDnon02",0.1,"AidlPpneMstpSrasWrflDnon03",0.1,"AmovPpneMstpSrasWrflDnon_healed",0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon_turnL",0.02,"AmovPpneMstpSrasWrflDnon_turnR",0.02,"AmovPpneMrunSlowWrflDf",0.02,"AmovPpneMrunSlowWrflDfl",0.02,"AmovPpneMrunSlowWrflDl",0.02,"AmovPpneMrunSlowWrflDbl",0.02,"AmovPpneMrunSlowWrflDb",0.02,"AmovPpneMrunSlowWrflDbr",0.02,"AmovPpneMrunSlowWrflDr",0.02,"AmovPpneMrunSlowWrflDfr",0.02,"AmovPpneMsprSlowWrflDf",0.02,"AmovPpneMsprSlowWrflDbl",0.02,"AmovPpneMsprSlowWrflDl",0.02,"AmovPpneMsprSlowWrflDr",0.02,"AmovPpneMsprSlowWrflDbr",0.02,"AmovPpneMsprSlowWrflDb",0.02,"AmovPpneMsprSlowWrflDfl",0.02,"AmovPpneMsprSlowWrflDfr",0.02,"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",0.05,"AdthPpneMstpSrasWrflDnon_1",0.01,"AdthPpneMstpSrasWrflDnon_2",0.01,"AidlPpneMstpSrasWrflDnon0S",0.02,"AidlPpneMstpSrasWrflDnon01",0.02,"AidlPpneMstpSrasWrflDnon02",0.02,"AidlPpneMstpSrasWrflDnon03",0.02};
		};
		class AmovPpneMrunSlowWrflDf: AmovPpneMstpSrasWrflDnon
		{
			visibleSize = 0.150123;
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			soundOverride = "crawl";
			duty = 0.4;
			showWeaponAim = 0;
			disableWeapons = 1;
			soundEnabled = 1;
			limitGunMovement = 0.0;
			legs = "wholeBody";
			aiming = "empty";
			aimingBody = "empty";
			leaning = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			leftHandIKBeg = 0.0;
			leftHandIKCurve[] = {};
			leftHandIKEnd = 0.0;
			actions = "RifleProneActionsRunF";
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMrunSlowWrflDfl",0.025,"AmovPpneMrunSlowWrflDfr",0.025,"AmovPpneMsprSlowWrflDf",0.025,"AmovPpneMstpSrasWrflDnon_AmovPercMsprSlowWrflDf",0.05,"AdthPpneMstpSlowWrflDf_1",0.01,"AdthPpneMstpSlowWrflDf_2",0.01};
		};
		class AmovPpneMstpSrasWrflDnon_turnL: AmovPpneMstpSrasWrflDnon
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon",0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02};
		};
		class AmovPpneMstpSrasWrflDnon_turnR: AmovPpneMstpSrasWrflDnon
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			soundOverride = "crawl";
			ConnectTo[] = {"AmovPpneMstpSrasWrflDnon",0.02};
			InterpolateTo[] = {"AmovPpneMstpSrasWrflDnon",0.02};
		};
		class AmovPpneMstpSnonWnonDnon: AmovPercMstpSnonWnonDnon
		{
			actions = "CivilProneActions";
			file = "ns_anims\forward.rtm";
			legs = "Wholebody";
			onLandBeg = 1;
			onLandEnd = 1;
			collisionShape = "A3\anims_f\data\geom\sdr\Ppne.p3d";
			aimingBody = "empty";
			disableWeapons = 0;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon_turnL",0.02,"AmovPpneMstpSnonWnonDnon_turnR",0.02,"AmovPpneMstpSnonWnonDnon_AmovPercMstpSnonWnonDnon",0.02,"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSnonWnonDnon",0.02,"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.05,"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWrflDnon",0.02,"AmovPpneMstpSnonWnonDnon_AmovPpneMstpSrasWpstDnon",0.02,"AmovPpneMstpSnonWnonDnon_AmovPknlMstpSrasWlnrDnon",0.02,"AmovPpneMstpSnonWnonDnon_AwopPpneMstpSoptWbinDnon",0.02,"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDl",0.02,"AmovPpneMstpSnonWnonDnon_AmovPpneMevaSnonWnonDr",0.02,"AmovPpneMstpSnonWnonDnon_AmovPsitMstpSnonWnonDnon_ground",0.1,"AwopPpneMstpSgthWnonDnon_start",0.1,"AidlPpneMstpSnonWnonDnon0S",0.1,"AidlPpneMstpSnonWnonDnon01",0.1,"AidlPpneMstpSnonWnonDnon02",0.1,"AidlPpneMstpSnonWnonDnon03",0.1,"AmovPpneMstpSnonWnonDnon_healed",0.02,"AmovPpneMstpSnonWnonDnon_injured",0.1};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon_turnL",0.02,"AmovPpneMstpSnonWnonDnon_turnR",0.02,"AmovPpneMrunSnonWnonDf",0.02,"AmovPpneMrunSnonWnonDfl",0.02,"AmovPpneMrunSnonWnonDl",0.02,"AmovPpneMrunSnonWnonDbl",0.02,"AmovPpneMrunSnonWnonDb",0.02,"AmovPpneMrunSnonWnonDbr",0.02,"AmovPpneMrunSnonWnonDr",0.02,"AmovPpneMrunSnonWnonDfr",0.02,"AdthPpneMstpSnonWnonDnon",0.01};
		};
		class AmovPpneMrunSnonWnonDf: AmovPpneMstpSnonWnonDnon
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			soundOverride = "crawl";
			leaningFactorBeg = 0;
			leaningFactorEnd = 0;
			soundEnabled = 1;
			legs = "wholeBody";
			aimingBody = "empty";
			leaning = "empty";
			aiming = "empty";
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDfl",0.025,"AmovPpneMrunSnonWnonDfr",0.025,"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.05};
		};
		class AmovPpneMstpSnonWnonDnon_turnL: AmovPpneMstpSnonWnonDnon
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02};
		};
		class AmovPpneMstpSnonWnonDnon_turnR: AmovPpneMstpSnonWnonDnon
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			soundOverride = "crawl";
			canPullTrigger = 0;
			ConnectTo[] = {"AmovPpneMstpSnonWnonDnon",0.02};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02};
		};
		class AmovPpneMrunSnonWnonDfl: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDf",0.025,"AmovPpneMrunSnonWnonDl",0.025,"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.05};
		};
		class AmovPpneMrunSnonWnonDl: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDfl",0.025,"AmovPpneMrunSnonWnonDbl",0.025};
		};
		class AmovPpneMrunSnonWnonDbl: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDl",0.025,"AmovPpneMrunSnonWnonDb",0.025};
		};
		class AmovPpneMrunSnonWnonDb: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDbl",0.025,"AmovPpneMrunSnonWnonDbr",0.025};
		};
		class AmovPpneMrunSnonWnonDbr: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDb",0.025,"AmovPpneMrunSnonWnonDr",0.025};
		};
		class AmovPpneMrunSnonWnonDr: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 0.5;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDbr",0.025,"AmovPpneMrunSnonWnonDfr",0.025};
		};
		class AmovPpneMrunSnonWnonDfr: AmovPpneMrunSnonWnonDf
		{
			file = "ns_anims\forward.rtm";
			speed = 1.05;
			duty = 0.4;
			relSpeedMin = 0.697171;
			relSpeedMax = 1.096506;
			soundOverride = "crawl";
			soundEnabled = 1;
			canPullTrigger = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {"AmovPpneMstpSnonWnonDnon",0.02,"AmovPpneMrunSnonWnonDf",0.025,"AmovPpneMrunSnonWnonDr",0.025,"AmovPpneMstpSnonWnonDnon_AmovPercMsprSnonWnonDf",0.05};
		};
	};
};

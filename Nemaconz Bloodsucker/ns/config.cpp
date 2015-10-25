//  NIGHTSTALKERS: Shadow of Namalsk, Mutant Bloodsuckers-> ArmA III version
//  Mutants for modification -> v1.0
//  Created by Sumrak and Nemaconz, © 2015

//  WARNING: Any changes inside PBO files or using content of these files without permission of author is forbidden.
//  Any form of commercial use is strictly forbidden.
//  If you would like to use ANYTHING of this MOD for your own project, please contact me via e-mail.
//  This is not an official addon and i take no responsibilities for any possible damages or data loss in your computer. 

// begin of basic defines for Arma --

#define ReadAndWrite		 0
#define ReadAndCreate		 1
#define ReadOnly		     2
#define ReadOnlyVerified 3
#define true			       1
#define false			       0
#define private		    	 0
#define protected		     1
#define public		    	 2
#define VSoft			       0
#define VArmor		    	 1
#define VAir			       2
#define LockNo		    	 0
#define LockCadet	    	 1
#define LockYes		    	 2
#define TEast		    	   0
#define TWest			       1
#define TGuerrila		     2
#define TCivilian		     3
#define TSideUnknown		 4
#define TEnemy			     5
#define TFriendly		     6
#define TLogic		     	 7

// end of Basic defines for Arma --

class cfgAddOns {
    class preloadAddOns {
		   class ns {
			    list[] = {"ns"};
       };   
		};
};

class CfgPatches
{
	class ns 
	{
		units[]=
		{
			"NS_zombie1", "NS_zombie2", "NS_zombie3", "ns_bloodsucker"
		};
		weapons[]={};
		requiredVersion=1.000000;
		requiredAddons[]=
    {      
      "ns_anims",
      "ns_sounds",
      "ns_modules"
    };
    author[] = {
    	"Sumrak, Nemaconz"
    };
	};
};

/* Definition of texture, which is in use by mutant script */

// Control types 
#define CT_STATIC 0 
#define CT_BUTTON 1 
#define CT_EDIT 2 
#define CT_SLIDER 3 
#define CT_COMBO 4 
#define CT_LISTBOX 5 
#define CT_TOOLBOX 6 
#define CT_CHECKBOXES 7 
#define CT_PROGRESS 8 
#define CT_HTML 9 
#define CT_STATIC_SKEW 10 
#define CT_ACTIVETEXT 11 
#define CT_TREE 12 
#define CT_STRUCTURED_TEXT 13 
#define CT_CONTEXT_MENU 14 
#define CT_CONTROLS_GROUP 15 
#define CT_XKEYDESC 40 
#define CT_XBUTTON 41 
#define CT_XLISTBOX 42 
#define CT_XSLIDER 43 
#define CT_XCOMBO 44 
#define CT_ANIMATED_TEXTURE 45 
#define CT_OBJECT 80 
#define CT_OBJECT_ZOOM 81 
#define CT_OBJECT_CONTAINER 82 
#define CT_OBJECT_CONT_ANIM 83 
#define CT_LINEBREAK 98 
#define CT_USER 99 
#define CT_MAP 100 
#define CT_MAP_MAIN 101 
#define NS_db 892

// Static styles 
#define ST_POS 0x0F 
#define ST_HPOS 0x03 
#define ST_VPOS 0x0C 
#define ST_LEFT 0x00 
#define ST_RIGHT 0x01 
#define ST_CENTER 0x02 
#define ST_DOWN 0x04 
#define ST_UP 0x08 
#define ST_VCENTER 0x0c 
#define ST_TYPE 0xF0 
#define ST_SINGLE 0 
#define ST_MULTI 16 
#define ST_TITLE_BAR 32 
#define ST_PICTURE 48 
#define ST_FRAME 64 
#define ST_BACKGROUND 80 
#define ST_GROUP_BOX 96 
#define ST_GROUP_BOX2 112 
#define ST_HUD_BACKGROUND 128 
#define ST_TILE_PICTURE 144 
#define ST_WITH_RECT 160 
#define ST_LINE 176 
#define FontM "Zeppelin32"

class RscPicture
{
   type = CT_STATIC;
   IDC = -1;
   style = ST_PICTURE;
   ColorBackground[] = {0,0,0,0};
   ColorText[] = {1,1,1,1};
   font = FontM;
   SizeEx = 0;
};

class RscTitles
{
  class ns_skr
  {	
    idd = -1;	
    movingEnable = false;
    duration = 1;
    fadein = 0;
    name = "Skrabanec"; 
    controls[] = {"skrabanec"};
    class skrabanec: RscPicture
    {	
      x = 0;
      y = 0;
      w = 1;
      h = 1;
      text = "Nemaconz_BS\ns\blood\skrabanec.paa";
    };	
  };
};

class CfgFactionClasses
{
    class MUT
	  {
		 displayName="$STR_DN_MUT";
		 priority = 10;
		 side = 2;
	  };	  
};

class CfgVehicleClasses
{
	  class NST_mut
	  {
		 displayName = "$STR_DN_MUT_MEM";
	  };
};

class CfgVehicles
{
  class Man;
	class CAManBase: Man
	{
		class TalkTopics;
		class HitPoints
		{
			class HitHead;
			class HitBody;
		};
	};
	class SoldierGB: CAManBase
	{
		class TalkTopics: TalkTopics
		{
		};
	};
	class NS_zombie1: SoldierGB
	{
		nameSound="veh_man";  
	  faction = "MUT";
    scope = public;	
		vehicleClass="NST_mut";	
    weapons[] = {"Throw", "Put"};		    				
    magazines[] = {};	
    respawnweapons[] = {"Throw", "Put"};	    				
    respawnmagazines[] = {};
		model="ns\blood\zomb\NS_zombie1.p3d";
		moves="TCP_CfgMovesMaleZombie";
		accuracy=1000;
		armor=8;	
		displayName="Zombie 1";
		picture="\A3\characters_f\data\ui\i_null_CA.paa";
		Icon="ns\blood\i_wojak_CA.paa";
		camouflage=1.000000;
		
  	class eventHandlers
    {
      init = "_this execVM ""Nemaconz_BS\ns_modules\scripts\mut_follow.sqf""; _this execVM ""\Nemaconz_BS\ns_modules\scripts\zomb_sounds.sqf"";";
    };

    class HitDamage
		{
			class Group0
			{
				hitSounds[]=
				{
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit01.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit02.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit03.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit04.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit05.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit06.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit07.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					}
				};
				damageSounds[]=
				{
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit08.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							6,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit09.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							7.500000,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit10.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							6,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit11.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							7.500000,
							10
						}
					},
					
					{
						"hands",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit12.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							2.500000,
							5
						}
					},
					
					{
						"hands",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit13.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							2.500000,
							5
						}
					},
					
					{
						"legs",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit14.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							1,
							2
						}
					},
					
					{
						"legs",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit15.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							1,
							2
						}
					}
				};
			};
     }; 
	};
	class NS_zombie2: NS_zombie1 {
		model="ns\zomb\NS_zombie2.p3d";
		displayName="Zombie 2";
	};
	class NS_zombie3: NS_zombie1 {
		model="ns\zomb\NS_zombie3.p3d";
		displayName="Zombie 3";
	};
	class ns_bloodsucker: NS_zombie1 {
		model="ns\blood\bloodsucker1.p3d";
		accuracy=1000;
		armor=46;
		faction = "MUT";
		camouflage = 0.01;
		zombieLoot = "bloodsucker";
		moves="NS_CfgMoves_Bloodsucker";
		displayName="Bloodsucker";
		vehicleClass="NST_mut"; 
		hiddenSelections[]= {
			"invisible"
		};
		class eventHandlers {
			init = "_this execVM ""\Nemaconz_BS\ns_modules\scripts\blood_follow.sqf""; _this execVM ""\Nemaconz_BS\ns_modules\scripts\blood_sounds.sqf"";";
		};
	class HitDamage
		{
			class Group0
			{
				hitSounds[]=
				{
					{
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit01.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit02.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit03.ogg",
							0.177828,
							1,
							120
						},
						0.200000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit01.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit02.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit03.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					},
					
					{
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit04.ogg",
							0.177828,
							1,
							120
						},
						0.100000
					}
				};
				damageSounds[]=
				{
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit01.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							6,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit02.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							7.500000,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit03.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							6,
							10
						}
					},
					
					{
						"body",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit04.ogg",
							0.056234,
							1,
							120,
							0.250000,
							5,
							7.500000,
							10
						}
					},
					
					{
						"hands",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit01.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							2.500000,
							5
						}
					},
					
					{
						"hands",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit02.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							2.500000,
							5
						}
					},
					
					{
						"legs",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit03.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							1,
							2
						}
					},
					
					{
						"legs",
						
						{
							"\Nemaconz_BS\ns_sounds\bloodsucker\Hit04.ogg",
							0.056234,
							1,
							120,
							0.500000,
							0,
							1,
							2
						}
					}
				};
			};
     }; 		
	};
};

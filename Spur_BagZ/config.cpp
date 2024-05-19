#define SPUR_BAGZ
class CfgPatches
{
	class Spur_BagZ
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class Spur_Mod
	{
		dir="Spur_BagZ";
		picture="Spur_Bagz/BagZlogo.edds";
		action="https://discord.gg/KuJZDvP";
		hideName=1;
		hidePicture=1;
		name="Spur_BagZ";
		credits="Spurgle,HelkHiana,WindStride,Cleetus,Sicks,DannyDoomno1";
		author="Spurgle";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
//			"Game",
			"World"//,
//			"Mission"
		};
		class defs
		{
			class imageSets
            {
                files[]=
                {
                    "Spur_BagZ/gui/imagesets/Spur_BagZ_Slots.imageset"
                };
            };

/*			class gameScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BagZ/scripts/3_game"
				};
			};
*/
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BagZ/scripts/4_world"
				};
			};
/*			class missionScriptModule
			{
				value="";
				files[]=
				{
					"Spur_BagZ/scripts/5_mission"
				};
			};
*/
		};
	};
};
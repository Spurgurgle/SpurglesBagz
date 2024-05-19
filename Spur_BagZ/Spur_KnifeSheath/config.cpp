class CfgPatches
{
	class Spur_KnifeSheath
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Spur_BagZ",
			"Spur_BagZ_Scripts",
			"DZ_Characters_Belts"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class Spur_KnifeSheath: Clothing
	{
		scope=0;
		displayName="$STR_cfgvehicles_knifesheath0";
		descriptionShort="$STR_cfgvehicles_knifesheath1";
		model="Spur_BagZ\Spur_KnifeSheath\Spur_KnifeSheath.p3d";
		inventorySlot[]=
		{
			"Belt_Back"
		};
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Belt"
		};
		weight=110;
		itemSize[]={3,1};
		attachments[]=
		{
			"Knife",
			"Whetstone"
		};
		absorbency=0.1;
		heatIsolation=0;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_green_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath.rvmat"
							}
						},
						
						{
							0.51,
							
							{
								"Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_damage.rvmat"
							}
						},
						
						{
							0.01,
							
							{
								"Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Spur_KnifeSheath_Black: Spur_KnifeSheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_black_co.paa"
		};
	};
	class Spur_KnifeSheath_Green: Spur_KnifeSheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_green_co.paa"
		};
	};
	class Spur_KnifeSheath_Tan: Spur_KnifeSheath
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\Spur_BagZ\Spur_KnifeSheath\data\Spur_KnifeSheath_tan_co.paa"
		};
	};
};
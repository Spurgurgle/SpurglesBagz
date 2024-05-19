class CfgPatches
{
	class Spur_CarryRig
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Spur_BagZ",
			"Spur_BagZ_Scripts",
			"DZ_Characters"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class Spur_CarryRig_ColorBase: Clothing
	{
		scope=0;
		displayName="Spur_CarryRig";
		descriptionShort="tbc";
		model="Spur_BagZ\Spur_CarryRig\Spur_CarryRig_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie"
		};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={9,6};
		//itemsCargoSize[]={9,7};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.8000008;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		canBeDigged=1;
		soundAttType="Outdoor";
		randomQuantity=4;
	/*	hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
	*/	
		class ClothingTypes
		{
			male="Spur_BagZ\Spur_CarryRig\Spur_CarryRig_m.p3d";
			female="Spur_BagZ\Spur_CarryRig\Spur_CarryRig_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig.rvmat",
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_damage.rvmat"
							}
						},
						
						{
							0.70,
							
							{
								"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig.rvmat",
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_damage.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_damage.rvmat",
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_damage.rvmat"
							}
						},
						
						{
							0.30,
							
							{
								"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_damage.rvmat",
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_destruct.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_destruct.rvmat",
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_destruct.rvmat"
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
				class pickUpItem_Light
				{
					soundSet="pickUpBackPack_Plastic_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Plastic_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="taloonbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class Spur_CarryRig: Spur_CarryRig_ColorBase
	{
		scope=2;
	/*	hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_co.paa",
			"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_co.paa",
			"Spur_BagZ\Spur_CarryRig\data\Spur_CarryRig_co.paa"
		};
	*/
	};	
};
class CfgPatches
{
	class Spur_CamelBag
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
	class Spur_CamelBag_ColorBase: Clothing
	{
		scope=0;
		displayName="Camel Backpack";
		descriptionShort="A Large Military style backpack";
		model="Spur_BagZ\Spur_CamelBag\Spur_CamelBag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Belt_Right",
			"Belt_Back",
			"VestBackpack",
			"Melee",
			"Shoulder"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={6,7};
		itemsCargoSize[]={9,9};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.89999998;
		visibilityModifier=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale"
		};
		simpleHiddenSelections[]=
        {
			"slot_melee_rifle",
			"slot_melee_melee",
			"slot_shoulder_rifle",
			"slot_shoulder_melee",
			"StrapLeft",
			"StrapLeftLoose",
			"StrapRight",
			"StrapRightLoose"
        };

		class ClothingTypes
		{
			male="Spur_BagZ\Spur_CamelBag\Spur_CamelBag_m.p3d";
			female="Spur_BagZ\Spur_CamelBag\Spur_CamelBag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=750;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
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
					soundSet="pickUpBackPack_Metal_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpBackPack_Metal_SoundSet";
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
	class Spur_CamelBag_Black: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Black_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Black_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Black_co.paa"
		};
	};
	class Spur_CamelBag_Green: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Green_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Green_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Green_co.paa"
		};
	};
	class Spur_CamelBag_Tan: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Tan_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Tan_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Tan_co.paa"
		};
	};
	class Spur_CamelBag_WoodlandCamo: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_WoodlandCamo_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_WoodlandCamo_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_WoodlandCamo_co.paa"
		};
	};
	class Spur_CamelBag_MultiCamo: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_MultiCamo_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_MultiCamo_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_MultiCamo_co.paa"
		};
	};
	class Spur_CamelBag_WinterCamo: Spur_CamelBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Winter_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Winter_co.paa",
			"Spur_BagZ\Spur_CamelBag\data\Spur_CamelBag_Winter_co.paa"
		};
	};
};

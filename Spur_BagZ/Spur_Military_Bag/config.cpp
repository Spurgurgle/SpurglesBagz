class CfgPatches
{
	class Spur_Military_Bag
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
	class Spur_MilBag_ColorBase: Clothing
	{
		scope=0;
		displayName="Military Backpack";
		descriptionShort="A Military style backpack";
		model="Spur_BagZ\Spur_Military_Bag\Spur_Military_Bag_g.p3d";
		inventorySlot[]=
		{
			"Back"
		};
		attachments[]=
		{
			"Chemlight",
			"WalkieTalkie",
			"Belt_Left", //Canteen
			"Melee", //weapon
			"knife",
			"Belt_Right", //pistol holster
			"VestGrenadeA",
			"VestGrenadeB",
			"VestBackpack"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={5,6};
		itemsCargoSize[]={9,7};
		weight=600;
		varWetMax=0.249;
		heatIsolation=0.89999998;
		visibilityModifier=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="Military";
		//randomQuantity=4;
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
			"StrapLeft",
			"StrapRifle"
        };
		class ClothingTypes
		{
			male="Spur_BagZ\Spur_Military_Bag\Spur_Military_Bag_m.p3d";
			female="Spur_BagZ\Spur_Military_Bag\Spur_Military_Bag_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.00,
							
							{
								"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag.rvmat"
							}
						},
						
						{
							0.50,
							
							{
								"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_damage.rvmat"
							}
						},
						
						{
							0.00,
							
							{
								"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_destruct.rvmat"
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
	class Spur_MilBag_Black: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Black_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Black_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Black_co.paa"
		};
	};
	class Spur_MilBag_Green: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Green_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Green_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Green_co.paa"
		};
	};
	class Spur_MilBag_Tan: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Tan_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Tan_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Tan_co.paa"
		};
	};
	class Spur_MilBag_WoodlandCamo: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_WoodlandCamo_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_WoodlandCamo_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_WoodlandCamo_co.paa"
		};
	};
	class Spur_MilBag_MultiCamo: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_MultiCamo_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_MultiCamo_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_MultiCamo_co.paa"
		};
	};
	class Spur_MilBag_WinterCamo: Spur_MilBag_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Winter_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Winter_co.paa",
			"Spur_BagZ\Spur_Military_Bag\data\Spur_MilBag_Winter_co.paa"
		};
	};
};

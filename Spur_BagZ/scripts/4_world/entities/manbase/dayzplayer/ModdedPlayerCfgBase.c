modded class ModItemRegisterCallbacks
{
	override void RegisterTwoHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterTwoHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_MilBag_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior , 				"dz/anims/anm/player/ik/two_handed/coyote_g.anm");
		pType.AddItemInHandsProfileIK("Spur_LW_Bag_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior , 				"dz/anims/anm/player/ik/two_handed/taloon_g.anm");
		pType.AddItemInHandsProfileIK("Spur_Treker_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior , 				"dz/anims/anm/player/ik/two_handed/taloon_g.anm");
		pType.AddItemInHandsProfileIK("Spur_CamelBag_ColorBase", "dz/anims/workspaces/player/player_main/weapons/player_main_2h_extinguisher.asi", pBehavior , 				"dz/anims/anm/player/ik/two_handed/coyote_g.anm");
	};
	
	override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
	{
		super.RegisterOneHanded(pType, pBehavior);
		pType.AddItemInHandsProfileIK("Spur_KnifeSheath", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, 					"dz/anims/anm/player/ik/clothing/belts/nylon_KnifeSheath.anm");
	};	
};


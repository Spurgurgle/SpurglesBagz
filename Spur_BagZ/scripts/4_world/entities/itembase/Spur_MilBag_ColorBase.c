class Spur_MilBag_ColorBase extends Clothing 
{
	override void EEInit()
	{	
		super.EEInit();
        ToggleStraps("StrapLeft", 1);
		ToggleStraps("StrapRifle", 0);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee")
		{
		UpdateWeaponProxyVisibility(item.IsWeapon());
		ToggleStraps("StrapLeft", 0);
		ToggleStraps("StrapRifle", 1);
		};
    }
	
	override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
        if (slot_name == "Melee")
		{
		ToggleStraps("StrapLeft", 1);
		ToggleStraps("StrapRifle", 0);
		};
    }

    void UpdateWeaponProxyVisibility(bool boo)
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
	
	void ToggleStraps(string selectionName, bool hide = false)
    {
        TStringArray selections = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selections);
        int selectionId = selections.Find(selectionName);  
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
	
};

class Spur_MilBag_Black extends Spur_MilBag_ColorBase {};
class Spur_MilBag_Green extends Spur_MilBag_ColorBase {};
class Spur_MilBag_Tan extends Spur_MilBag_ColorBase {};
class Spur_MilBag_WoodlandCamo extends Spur_MilBag_ColorBase {};
class Spur_MilBag_MultiCamo extends Spur_MilBag_ColorBase {};
class Spur_MilBag_WinterCamo extends Spur_MilBag_ColorBase {};

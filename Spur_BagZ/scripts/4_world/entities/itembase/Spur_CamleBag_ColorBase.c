class Spur_CamelBag_ColorBase extends Clothing 
{
	override void EEInit()
	{	
		super.EEInit();
        ToggleStraps("StrapLeft", 1);
		ToggleStraps("StrapLeftLoose", 0);
		ToggleStraps("StrapRight", 1);
		ToggleStraps("StrapRightLoose", 0);
	}
	
	override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        if (slot_name == "Melee")
		{
		UpdateWeaponProxyVisibility(item.IsWeapon());
		ToggleStraps("StrapLeft", 0);
		ToggleStraps("StrapLeftLoose", 1);
		};
		if (slot_name == "Shoulder")
		{
		UpdateRifleProxyVisibility(item.IsMeleeWeapon());
		ToggleStraps("StrapRight", 0);
		ToggleStraps("StrapRightLoose", 1);
		};
    }
	
	override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
        if (slot_name == "Melee")
		{
		ToggleStraps("StrapLeft", 1);
		ToggleStraps("StrapLeftLoose", 0);
		};
		if (slot_name == "Shoulder")
		{
		ToggleStraps("StrapRight", 1);
		ToggleStraps("StrapRightLoose", 0);
		};
    }

    void UpdateWeaponProxyVisibility(bool boo) 
    {
        SetSimpleHiddenSelectionState(0, boo);
        SetSimpleHiddenSelectionState(1, !boo);
    }
	
	void UpdateRifleProxyVisibility(bool boo) 
    {
		SetSimpleHiddenSelectionState(2, !boo);
        SetSimpleHiddenSelectionState(3, boo);
    }
	
	void ToggleStraps(string selectionName, bool hide = false)
    {
        TStringArray selections = new TStringArray;
        ConfigGetTextArray("simpleHiddenSelections",selections);
        int selectionId = selections.Find(selectionName);  
        SetSimpleHiddenSelectionState(selectionId, hide);
    }
	
};

class Spur_CamelBag_Black extends Spur_CamelBag_ColorBase {};
class Spur_CamelBag_Green extends Spur_CamelBag_ColorBase {};
class Spur_CamelBag_Tan extends Spur_CamelBag_ColorBase {};
class Spur_CamelBag_WoodlandCamo extends Spur_CamelBag_ColorBase {};
class Spur_CamelBag_MultiCamo extends Spur_CamelBag_ColorBase {};
class Spur_CamelBag_WinterCamo extends Spur_CamelBag_ColorBase {};

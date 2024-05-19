class Spur_LW_Bag_ColorBase extends Clothing 
{
	ref array<string> m_Blades = {"Machete", "Hatchet", "KukriKnife", "CrudeMachete", "OrientalMachete"};
	
	override void EEInit()
	{	
		super.EEInit();
        ToggleStraps("StrapLeft", 1);
		ToggleStraps("StrapRifle", 0);
		ToggleStraps("StrapRight", 1);
		ToggleStraps("StrapBlade", 0);
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
		if (m_Blades.Find(slot_name) > -1)
        {
            ToggleStraps("StrapRight", 0);
            ToggleStraps("StrapBlade", 1);
        }
    }
	
	override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);
        if (slot_name == "Melee")
		{
			ToggleStraps("StrapLeft", 1);
			ToggleStraps("StrapRifle", 0);
		};
		if (m_Blades.Find(slot_name) > -1)
        {
            ToggleStraps("StrapRight", 1);
            ToggleStraps("StrapBlade", 0);
        }
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
	
    
	override bool CanReceiveAttachment( EntityAI attachment, int slotId )
    {
        if ( attachment.IsKindOf("Machete") || attachment.IsKindOf("Hatchet") || attachment.IsKindOf("KukriKnife") || attachment.IsKindOf("CrudeMachete") || attachment.IsKindOf("OrientalMachete") )
        {
            if (this.FindAttachmentBySlotName("Machete") != NULL || this.FindAttachmentBySlotName("Hatchet") != NULL || this.FindAttachmentBySlotName("KukriKnife") != NULL || this.FindAttachmentBySlotName("CrudeMachete") != NULL || this.FindAttachmentBySlotName("OrientalMachete") != NULL)
                return false;
        }
        return true;
    }
	
	override bool CanDisplayAttachmentSlot( string slot_name )
    {    
        if (!super.CanDisplayAttachmentSlot(slot_name))
            return false;
        int RightSlot = m_Blades.Find(slot_name);
        if (RightSlot > -1)
			return this.FindAttachmentBySlotName(m_Blades[RightSlot]) != NULL;	
        if ( slot_name == "BladeSlot" )
            return ( this.FindAttachmentBySlotName("Hatchet") == NULL && this.FindAttachmentBySlotName("Machete") == NULL && this.FindAttachmentBySlotName("KukriKnife") == NULL && this.FindAttachmentBySlotName("CrudeMachete") == NULL && this.FindAttachmentBySlotName("OrientalMachete") == NULL);
    
        return true;
    }

};
class Spur_LW_Bag_Black extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Blue extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Brown extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Green extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Grey extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Orange extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Purple extends Spur_LW_Bag_ColorBase {};
class Spur_LW_Bag_Red extends Spur_LW_Bag_ColorBase {};

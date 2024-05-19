modded class Clothing
{
	
	override bool SmershException(EntityAI hierarchyParent)
	{
		super.SmershException(hierarchyParent);
		EntityAI hp = hierarchyParent.GetHierarchyParent();
		if (hp)
		{
			if (!hp.IsMan())
				return false;
		}
		
		return (IsInherited(SmershBag) && (hierarchyParent.IsInherited(SmershVest) || hierarchyParent.IsInherited(Spur_MilBag_ColorBase) || hierarchyParent.IsInherited(Spur_CamelBag_ColorBase));
	}

};
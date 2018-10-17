// AUTHOR: CLEETUS @DayZ SA discord

// Usage: addItem(itemEnt, ItemBase, itemBs, player, item_name, count, stackSize, invSlot);

void addItem(EntityAI itemEnt=null, ItemBase itemBs=null, PlayerBase player=null, string item_name="", int count=0, int stackSize=0, int invSlot=-1) {
    if (player != null && itemBs != null && itemEnt != null && item_name != "") {
        for (int i = 0; i < count; i++) {
            itemEnt = player.GetInventory().CreateInInventory(item_name);
            itemBs = ItemBase.Cast(itemEnt);
            if (stackSize > 0) {
                itemBs.SetQuantity(stackSize);
            }
            if (invSlot >= 0 || invSlot <= 9) {
                player.SetQuickBarEntityShortcut(itemEnt, invSlot, true);
            }
        }
    }
}
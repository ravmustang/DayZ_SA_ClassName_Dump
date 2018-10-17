// AUTHOR: CLEETUS @DayZ SA discord

// Usage: add_Player_Clothes(player, "HelmetName", "GlassesName", "MaskName", "ShirtName", "VestName", "BeltName", "PantsName", "BootsName", "BackPackName", itemBs, itemEnt);


void add_Player_Clothes(Playerbase _player=null, string _helmet="", string _glasses="", string _mask="", string _shirt="", string _vest="", string _belt="", string _pants="", string _boots="", string _backpack="", ItemBase _itemBs=null, EntityAI _itemEnt=null) {
    if (player != null && itemBs != null && itemEnt != null) {
        if (_helmet != "") {
            addItem(_itemEnt, _itemBs, _player, _helmet, 1, 0, -1);
        }
        if (_glasses != "") {
            addItem(_itemEnt, _itemBs, _player, _glasses, 1, 0, -1);
        }
        if (_mask != "") {
            addItem(_itemEnt, _itemBs, _player, _mask, 1, 0, -1);
        }
        if (_shirt != "") {
            addItem(_itemEnt, _itemBs, _player, _shirt, 1, 0, -1);
        }
        if (_vest != "") {
            addItem(_itemEnt, _itemBs, _player, _vest, 1, 0, -1);
        }
        if (_belt != "") {
            addItem(_itemEnt, _itemBs, _player, _belt, 1, 0, -1);
        }
        if (_pants != "") {
            addItem(_itemEnt, _itemBs, _player, _pants, 1, 0, -1);
        }
        if (_boots != "") {
            addItem(_itemEnt, _itemBs, _player, _boots, 1, 0, -1);
        }
        if (_backpack != "") {
            addItem(_itemEnt, _itemBs, _player, _backpack, 1, 0, -1);
        }
    }
}
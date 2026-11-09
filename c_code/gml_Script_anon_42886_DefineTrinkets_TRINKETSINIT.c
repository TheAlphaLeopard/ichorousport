// gml_Script_anon_42886_DefineTrinkets_TRINKETSINIT @ 0x14061a7b0

undefined8 *
gml_Script_anon_42886_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@42140@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x5da;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_50 = CONCAT44(0xd,(undefined4)uStack_50);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = uStack_50;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e87930(uVar1,DAT_1419ff858,0x80000000,&local_68);
  local_28 = 0x5db;
  uStack_50 = CONCAT44(0xd,(undefined4)uStack_50);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = uStack_50;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_48);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar1,DAT_1419ffd68,0x80000000,&local_78);
  local_28 = 0x5dc;
  uStack_50 = CONCAT44(0xd,(undefined4)uStack_50);
  local_58 = 0;
  local_48 = 0;
  uStack_40 = uStack_50;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_48);
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87930(uVar1,DAT_1419ffa98,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


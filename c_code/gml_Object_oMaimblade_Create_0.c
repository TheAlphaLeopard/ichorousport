// gml_Object_oMaimblade_Create_0 @ 0x140b469c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMaimblade_Create_0(longlong *param_1)

{
  longlong **pplVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined4 local_5c;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oLockedShop_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uStack_4c = 0xffffff;
  local_58 = (longlong *)0x0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3f48);
  uStack_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e609c0(param_1);
  if (&local_58 != pplVar1) {
    local_48 = local_58;
    uStack_40 = uStack_50;
    uStack_3c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_48);
  }
  FUN_140e60910(1);
  local_18 = 6;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  local_48._0_4_ = _DAT_141dd9a68;
  local_48._4_4_ = uRam0000000141dd9a6c;
  uStack_40 = uRam0000000141dd9a70;
  uStack_3c = DAT_141dd9a74;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e87930(uVar2,DAT_141a0a8a8,0x80000000,&local_68);
  local_18 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56c20);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Script_anon_533_gml_Object_oMaimblade_Create_0,param_1);
  if (&local_48 != puVar3) {
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


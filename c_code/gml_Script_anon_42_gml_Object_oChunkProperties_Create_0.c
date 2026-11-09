// gml_Script_anon_42_gml_Object_oChunkProperties_Create_0 @ 0x1408a6670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_42_gml_Object_oChunkProperties_Create_0(longlong *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oChestSqualor_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_5c = 0xffffff;
  local_68 = (longlong *)0x0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_18 = 3;
  FUN_140e98b30(param_1);
  local_18 = 5;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56b40);
  if (puVar1 != &DAT_141dd7558) {
    local_38 = _DAT_141dd7558;
    uStack_34 = uRam0000000141dd755c;
    uStack_30 = uRam0000000141dd7560;
    uStack_2c = DAT_141dd7564;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 7;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b90);
  uStack_4c = 6;
  local_58 = param_1;
  FUN_140e87440(&local_58,DAT_1419fe158,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  uStack_4c = local_5c;
  uStack_50 = local_60;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_58 = local_68;
  }
  else {
    FUN_1400419b0(&local_58,&local_68);
  }
  uStack_2c = 7;
  local_38 = 0x20;
  FUN_1400462a0(&local_58,&local_38);
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_38);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140e86c30(uVar2,DAT_1419fe158,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


// gml_Script_DebugDraw_anon_2035___InputClassVirtualButton___InputClassVirtualButton @ 0x140053a20

undefined8 *
gml_Script_DebugDraw_anon_2035___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_Destroy@anon@1869@__InputClassVirtualButton@__InputClassVirtualButton";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x46;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe108);
  uStack_4c = 0xd;
  local_58 = 0x3ff0000000000000;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0x3ff00000;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  local_28 = 0x47;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcb48);
  local_58 = 0x3ff0000000000000;
  uStack_4c = 0xd;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = uStack_50;
  uStack_3c = 0xd;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_48);
  FUN_140e87930(uVar2,DAT_1419fe0a8,0x80000000,&local_68);
  local_28 = 0x49;
  if (param_3 != &DAT_1419df7b0) {
    local_48 = (undefined4)DAT_1419df7b0;
    uStack_44 = DAT_1419df7b0._4_4_;
    uStack_40 = DAT_1419df7b8;
    uStack_3c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


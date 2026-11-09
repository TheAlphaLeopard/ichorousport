// gml_Object_oTutorial_Step_0 @ 0x140df3df0

undefined8 * gml_Object_oTutorial_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_78;
  undefined4 local_6c;
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
  
  local_30 = "gml_Script_anon@232@gml_Object_oTutorial_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x13;
  uStack_4c = 0xf;
  local_58 = 0x100000000000143;
  FUN_140e87440(&local_58,DAT_1419f8678,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  uStack_4c = 0;
  local_58 = 0x4008000000000000;
  iVar1 = FUN_140e851f0(&local_68,&local_58,DAT_141955260,0);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (iVar1 == 0) {
    local_28 = 0x15;
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    local_6c = 0;
    local_78 = 0x4010000000000000;
    uStack_4c = 0xf;
    local_58 = 0x100000000000143;
    FUN_140e87930(&local_58,DAT_1419f8678,0x80000000,&local_78);
    if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
    local_28 = 0x16;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
    uStack_4c = 0xd;
    local_58 = 0;
    if (&local_58 != puVar2) {
      local_48 = 0;
      uStack_44 = 0;
      uStack_40 = uStack_50;
      uStack_3c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_48);
    }
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


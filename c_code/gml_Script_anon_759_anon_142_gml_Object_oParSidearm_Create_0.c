// gml_Script_anon_759_anon_142_gml_Object_oParSidearm_Create_0 @ 0x140bbeba0

void gml_Script_anon_759_anon_142_gml_Object_oParSidearm_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
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
  
  local_20 = "gml_Object_oParSidearm_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_18 = 3;
  FUN_140e98b30();
  local_18 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57520);
  uStack_3c = 0xd;
  local_48 = (longlong *)0x0;
  if (&local_48 != puVar1) {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = uStack_40;
    uStack_2c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  local_18 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6b58);
  uStack_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e609c0(param_1);
  if (&local_58 != puVar1) {
    local_38 = (undefined4)local_58;
    uStack_34 = local_58._4_4_;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 7;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6ab8);
  uStack_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe158,0x80000000,&local_68,0,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e609c0(param_1);
  if (&local_68 != puVar1) {
    local_38 = (undefined4)local_68;
    uStack_34 = local_68._4_4_;
    uStack_30 = uStack_60;
    uStack_2c = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  local_18 = 9;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_78 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,1,&local_78);
  local_18 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01b58);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_48,gml_Object_oParticleManager_Create_0,param_1);
  if (&local_48 != puVar1) {
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


// gml_Object_oBuffProjectile_CleanUp_0 @ 0x1408671e0

void gml_Object_oBuffProjectile_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_68;
  undefined4 local_60;
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
  
  local_30 = "gml_Object_oBuffProjectile_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 2;
  FUN_140e98b30();
  local_28 = 4;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a878);
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_68,0,DAT_1419ef5d8,0);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  local_28 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fde08);
  uStack_4c = 0xd;
  local_58 = 0;
  if (&local_58 != puVar1) {
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = uStack_50;
    uStack_3c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}


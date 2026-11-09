// gml_Script_anon_2256_gml_Object_oBossPatron_Create_0 @ 0x1407a8290

undefined8 *
gml_Script_anon_2256_gml_Object_oBossPatron_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@887@gml_Object_oBossPatron_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x31;
  local_4c = 0xffffff;
  local_58 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x33;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_70 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_78,puVar2);
  }
  FUN_140042560(&local_78,uVar1);
  FUN_1400460e0(&local_58,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  local_38 = 0x34;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  local_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_68,0,0);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_70 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_78,puVar2);
  }
  FUN_140042560(&local_78,uVar1);
  FUN_1400460e0(&local_68,&local_78);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


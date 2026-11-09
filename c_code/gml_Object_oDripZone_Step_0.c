// gml_Object_oDripZone_Step_0 @ 0x14091d870

undefined8 * gml_Object_oDripZone_Step_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@547@gml_Object_oDischarge_Step_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x21;
  local_4c = 0;
  local_58 = 0x3fe8000000000000;
  FUN_140e86fa0(0x3fe8000000000000,DAT_141a0a818,0x80000000,&local_58);
  local_38 = 0x22;
  local_5c = 6;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_141a0cfc8,0x80000000,&local_78,0,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0x4010000000000000;
  iVar1 = FUN_140e851f0(&local_78,&local_68,DAT_141955260,1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (0 < iVar1) {
    local_38 = 0x24;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_7c = 0;
    local_88 = 0;
    FUN_140e86fa0(param_1,DAT_1419fdd68,0x80000000,&local_88);
    local_38 = 0x25;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_8c = 0;
    local_98 = 0;
    FUN_140e86fa0(param_1,DAT_1419fdde8,0x80000000,&local_98);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Object_oTutorialCombat_Step_0 @ 0x140df64d0

undefined8 *
gml_Object_oTutorialCombat_Step_0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@83@gml_Object_oTutorialCombat_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 6;
  local_3c = 0xf;
  local_48 = 0x100000000000144;
  FUN_140e87440(&local_48,DAT_1419ff228,0x80000000,&local_58,0,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = 0x4000000000000000;
  iVar1 = FUN_140e851f0(&local_58,&local_48,DAT_141955260,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    local_28 = 8;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_5c = 0;
    local_68 = 0x4008000000000000;
    local_3c = 0xf;
    local_48 = 0x100000000000144;
    FUN_140e87930(&local_48,DAT_1419ff228,0x80000000,&local_68);
    if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_48);
    }
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


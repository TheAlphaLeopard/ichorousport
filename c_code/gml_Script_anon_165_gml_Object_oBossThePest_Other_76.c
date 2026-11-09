// gml_Script_anon_165_gml_Object_oBossThePest_Other_76 @ 0x140832cf0

undefined8 *
gml_Script_anon_165_gml_Object_oBossThePest_Other_76
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined4 local_4c;
  longlong *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@41@gml_Object_oBossThePest_Other_76";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  local_3c = 6;
  local_48 = param_1;
  FUN_140e87440(&local_48,DAT_1419fe0e8,0x80000000,&local_58,0,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  local_3c = 0;
  local_48 = (longlong *)0x4008000000000000;
  FUN_140042560(&local_48,uVar1);
  FUN_1400460e0(&local_58,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


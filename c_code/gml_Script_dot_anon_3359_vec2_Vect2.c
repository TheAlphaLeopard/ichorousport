// gml_Script_dot_anon_3359_vec2_Vect2 @ 0x140638420

longlong *
gml_Script_dot_anon_3359_vec2_Vect2(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_is_normalized@anon@3041@vec2@Vect2";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x73;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a008f8);
  uVar2 = FUN_140e63610(param_1,param_2,&local_58,0,uVar2,0);
  local_5c = 0;
  uVar3 = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  iVar1 = FUN_140e851f0(uVar2,&local_68,DAT_141955260,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar1 != 0) {
    uVar3 = 0;
  }
  *param_3 = (ulonglong)uVar3 << 0x20;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


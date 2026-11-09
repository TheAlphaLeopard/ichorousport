// gml_Script___InputRegisterUpdate @ 0x1400cba90

undefined8 *
gml_Script___InputRegisterUpdate
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@6075@anon@139@__InputRegisterUpdate@__InputRegisterUpdate";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x93;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
    FUN_140e87440(&DAT_1419df7b0,DAT_1419fe658,0x80000000,&local_68,0,0);
    if (param_4 < 1) goto LAB_1400cbb4f;
  }
  else {
    FUN_140e87440(param_5[1],DAT_1419fe658,0x80000000,&local_68,0,0);
  }
  puVar1 = (undefined8 *)*param_5;
LAB_1400cbb4f:
  FUN_140e87440(puVar1,DAT_1419fe658,0x80000000,&local_58,0,0);
  local_6c = local_5c;
  local_70 = local_60;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_78 = local_68;
  }
  else {
    FUN_1400419b0(&local_78,&local_68);
  }
  FUN_1400462a0(&local_78,&local_58);
  if ((local_6c & 0xffffff) == 0) {
    uVar2 = local_78;
  }
  else {
    uVar2 = FUN_140e4b060(&local_78);
  }
  uVar2 = FUN_140e79500(uVar2);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = uVar2;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


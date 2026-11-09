// gml_Script_rolled_list_new_run @ 0x1405e1950

undefined8 *
gml_Script_rolled_list_new_run
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_rolled_list_add";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x69;
  local_5c = 0;
  local_68 = 0x4008000000000000;
  local_6c = DAT_141dd4de4;
  local_70 = DAT_141dd4de0;
  if ((1 << ((byte)DAT_141dd4de4 & 0x1f) & 0x46U) == 0) {
    local_78 = DAT_141dd4dd8;
  }
  else {
    FUN_1400419b0(&local_78,&DAT_141dd4dd8);
  }
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
  local_90 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  FUN_1400460e0(&local_98,&local_78);
  if (1 < param_4) {
    puVar3 = (undefined8 *)param_5[1];
  }
  local_7c = local_8c;
  local_80 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_88 = local_98;
  }
  else {
    FUN_1400419b0(&local_88,&local_98);
  }
  FUN_1400460e0(&local_88,puVar3);
  uVar1 = gml_Script_rolled_list_blocked(param_1,param_2,&local_58,0,0);
  FUN_140e98ef0(param_1,param_2,uVar1,&local_88,&local_68);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


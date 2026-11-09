// gml_Script_anon_10911_DefineStatus_STATUSINIT @ 0x1405cdb60

undefined8 *
gml_Script_anon_10911_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@10582@DefineStatus@STATUSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x1da;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff2f8);
  FUN_140e609c0(param_1);
  if (puVar2 != &DAT_1419df7b0) {
    local_48 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_40 = DAT_1419df7b8;
    uStack_3c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x1db;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  FUN_140e87170(uVar3,DAT_141a1f580,0x80000000,&local_58,param_1,param_2);
  uStack_3c = 0xf;
  local_48 = 0x1000000000000ee;
  iVar1 = FUN_140e851f0(&local_58,&local_48,DAT_141955260,0);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if (iVar1 == 0) {
    local_28 = 0x1dc;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_5c = 0;
    local_68 = 0;
    uStack_3c = 0xf;
    local_48 = 0x100000000000106;
    FUN_140e87930(&local_48,DAT_1419ff1c8,0x80000000,&local_68);
    if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
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


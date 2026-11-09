// gml_Script_anon_2238_DefineStatus_STATUSINIT @ 0x1405c23b0

undefined8 *
gml_Script_anon_2238_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@1989@DefineStatus@STATUSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x6b;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x6c;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff218);
  uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_5c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_60 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = (undefined1 *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_68,puVar3);
  }
  FUN_140042560(&local_68,uVar2);
  FUN_1400462a0(uVar4,&local_68);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_38 = 0x6e;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  FUN_140e87170(uVar2,DAT_141a0a7e8,0,&local_58,param_1,param_2);
  local_5c = 0;
  local_68 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_58,&local_68,DAT_141955260,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (iVar1 != 0) {
    local_38 = 0x6f;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


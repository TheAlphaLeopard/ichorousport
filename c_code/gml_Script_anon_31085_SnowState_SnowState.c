// gml_Script_anon_31085_SnowState_SnowState @ 0x1405108e0

undefined8 *
gml_Script_anon_31085_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
  
  local_30 = "gml_Script_anon@30664@SnowState@SnowState";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x3d3;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419fcab8);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_28 = 0x3d4;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fcab8);
    uStack_4c = 0xd;
    local_58 = 0x3ff0000000000000;
    if (&local_58 != puVar3) {
      local_48 = 0;
      uStack_44 = 0x3ff00000;
      uStack_40 = uStack_50;
      uStack_3c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
    local_28 = 0x3d5;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    local_68 = 0;
    local_60 = 0;
    local_5c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcdc8);
    FUN_140e63610(param_1,param_2,&local_68,0,uVar2,0);
  }
  local_28 = 0x3d8;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


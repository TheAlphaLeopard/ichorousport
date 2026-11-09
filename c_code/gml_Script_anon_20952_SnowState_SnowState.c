// gml_Script_anon_20952_SnowState_SnowState @ 0x1405084f0

undefined8 *
gml_Script_anon_20952_SnowState_SnowState(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 *local_res8;
  undefined4 uVar3;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@20699@SnowState@SnowState";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x293;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x294;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
  if (puVar1 != local_68) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
  }
  local_res8 = local_68;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar3,DAT_141a063c8),&local_res8);
  if (puVar2 != param_3) {
    local_48 = *(undefined4 *)puVar2;
    uStack_44 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_40 = *(undefined4 *)(puVar2 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


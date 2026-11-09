// gml_Script_anon_11322_DefineStatus_STATUSINIT @ 0x1405ce180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11322_DefineStatus_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_50 = "gml_Script_anon@11322@DefineStatus@STATUSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x1fc;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x1fd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff218);
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_b8,puVar2);
  }
  FUN_140042560(&local_b8,uVar1);
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_88);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_48 = 0x1ff;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
  local_88 = _DAT_141dc6740;
  uStack_84 = uRam0000000141dc6744;
  uStack_80 = uRam0000000141dc6748;
  uStack_7c = uRam0000000141dc674c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_88);
  local_40 = local_78;
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
    local_b8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_b8,puVar2);
  }
  FUN_1400462a0(&local_b8,&local_98);
  local_88 = (undefined4)local_b8;
  uStack_84 = local_b8._4_4_;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_38 = local_68;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e79090(&local_a8,2,&local_40);
  if (puVar4 != puVar3) {
    local_88 = *puVar4;
    uStack_84 = puVar4[1];
    uStack_80 = puVar4[2];
    uStack_7c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


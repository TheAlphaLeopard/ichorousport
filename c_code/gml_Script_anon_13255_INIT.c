// gml_Script_anon_13255_INIT @ 0x1402e9290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_anon_13255_INIT(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = "gml_Script_anon@12712@INIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1e2;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef528);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1e4;
  local_b8 = CONCAT44(uRam0000000141dceebc,_DAT_141dceeb8);
  uStack_b0 = uRam0000000141dceec0;
  uStack_ac = DAT_141dceec4;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  local_78 = 0x1e6;
  uStack_ac = DAT_141dcef34;
  uStack_b0 = DAT_141dcef30;
  if ((1 << ((byte)DAT_141dcef34 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dcef28;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dcef28);
  }
  iVar2 = FUN_140e851f0(uVar3,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar2 != 0) {
    local_78 = 0x1e7;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_b8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_b8);
    local_70 = local_60;
    puVar4 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_a8,1,&local_70);
    if (puVar4 != &local_98) {
      local_b8 = *puVar4;
      uStack_b0 = *(undefined4 *)(puVar4 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_b8);
    }
  }
  local_78 = 0x1e9;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uStack_ac = DAT_141dcf2b4;
  uStack_b0 = DAT_141dcf2b0;
  if ((1 << ((byte)DAT_141dcf2b4 & 0x1f) & 0x46U) == 0) {
    local_b8 = DAT_141dcf2a8;
  }
  else {
    FUN_1400419b0(&local_b8,&DAT_141dcf2a8);
  }
  uVar1 = uStack_ac;
  local_38 = (undefined4)local_b8;
  uStack_34 = local_b8._4_4_;
  uStack_30 = uStack_b0;
  uStack_2c = uStack_ac;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_38);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_70 = local_60;
  local_68 = &local_98;
  puVar4 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_a8,2,&local_70);
  if (puVar4 != param_3) {
    local_38 = *(undefined4 *)puVar4;
    uStack_34 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_30 = *(undefined4 *)(puVar4 + 1);
    uStack_2c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_38);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


// gml_Script_anon_4898_SnowState_SnowState @ 0x1404f56e0

undefined8 *
gml_Script_anon_4898_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_88 [16];
  undefined8 local_78;
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  
  local_a0 = "gml_Script_anon@4411@SnowState@SnowState";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x91;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcca8);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x92;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcb68);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_e8,gml_Script_anon_4411_SnowState_SnowState,0);
  if (&local_e8 != puVar1) {
    local_d8 = (undefined4)local_e8;
    uStack_d4 = local_e8._4_4_;
    uStack_d0 = uStack_e0;
    uStack_cc = uStack_dc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_d8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_78) {
    local_d8 = *(undefined4 *)puVar1;
    uStack_d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_d8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = &local_78;
  if (puVar2 != local_68) {
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_d8);
  }
  local_38 = local_68;
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_58) goto LAB_1404f58fb;
  }
  local_d8 = *(undefined4 *)puVar3;
  uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_d8);
LAB_1404f58fb:
  local_30 = &local_58;
  uVar4 = CONCAT44(uVar5,DAT_1419fd6d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,3,uVar4,&local_40);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_b8) {
    local_d8 = *(undefined4 *)puVar3;
    uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_d0 = *(undefined4 *)(puVar3 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_98 = 0x96;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_48 = &local_b8;
  FUN_140e645a0(&local_e8,gml_Script_anon_5008_anon_4898_SnowState_SnowState,param_1);
  local_d8 = (undefined4)local_e8;
  uStack_d4 = local_e8._4_4_;
  uStack_d0 = uStack_e0;
  uStack_cc = uStack_dc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_d8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = &local_78;
  uStack_dc = 6;
  if (0 < param_4) {
    puVar1 = (undefined8 *)*param_5;
  }
  local_e8 = param_1;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar5,DAT_1419fed78),&local_48);
  FUN_140e98ef0(param_1,param_2,&local_e8,puVar1,uVar4);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_98 = 0xa2;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


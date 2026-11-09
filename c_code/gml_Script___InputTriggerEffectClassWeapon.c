// gml_Script___InputTriggerEffectClassWeapon @ 0x1400d9000

undefined8 *
gml_Script___InputTriggerEffectClassWeapon
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined1 local_178 [48];
  undefined8 local_148;
  byte local_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_80;
  double *local_78;
  undefined8 *local_70;
  double *local_68;
  undefined8 *local_60;
  double *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  
  local_190 = 
  "gml_Script___ApplyPS5@anon@549@__InputTriggerEffectClassWeapon@__InputTriggerEffectClassWeapon";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0xd;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_178,0x10,0xe,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  if (puVar2 != &local_148) {
    local_1f8 = *puVar2;
    uStack_1f0 = puVar2[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1f8);
  }
  iVar1 = DAT_141a03908;
  local_80 = &local_148;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = (double)iVar1;
  local_78 = &local_138;
  if (puVar2 != &local_128) {
    local_1f8 = *puVar2;
    uStack_1f0 = puVar2[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1f8);
  }
  iVar1 = DAT_141a03918;
  local_70 = &local_128;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = (double)iVar1;
  local_68 = &local_118;
  if (puVar2 != &local_108) {
    local_1f8 = *puVar2;
    uStack_1f0 = puVar2[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1f8);
  }
  iVar1 = DAT_141a03598;
  local_60 = &local_108;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar1;
  local_58 = &local_f8;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1400d9278:
    local_1f8 = *puVar3;
    uStack_1f0 = puVar3[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1f8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_e8) goto LAB_1400d9278;
  }
  local_50 = &local_e8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_d8) goto LAB_1400d92f4;
  }
  local_1f8 = *puVar3;
  uStack_1f0 = puVar3[1];
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1f8);
LAB_1400d92f4:
  local_48 = &local_d8;
  uVar4 = CONCAT44(uVar5,DAT_141a035d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar4,&local_80);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_c8) {
    local_1f8 = *puVar3;
    uStack_1f0 = puVar3[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1f8);
  }
  local_40 = &local_c8;
  uVar4 = CONCAT44(uVar5,DAT_141a035d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar4,&local_70);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_b8) {
    local_1f8 = *puVar3;
    uStack_1f0 = puVar3[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_1f8);
  }
  local_38 = &local_b8;
  if (2 < param_4) {
    puVar2 = (undefined8 *)param_5[2];
  }
  uVar4 = CONCAT44(uVar5,DAT_141a035d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar4,&local_60);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1f0 = puVar3[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1f8,puVar3);
  }
  FUN_140042560(&local_1f8,puVar2);
  local_1a8 = local_1f8;
  uStack_1a0 = uStack_1f0;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1a8);
  if ((1 << ((byte)((ulonglong)uStack_1f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_30 = local_a8;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1b8,5,CONCAT44(uVar5,DAT_141a038f8),&local_50);
  if (puVar2 != param_3) {
    local_1a8 = *puVar2;
    uStack_1a0 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_178,0x10,0xe,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}


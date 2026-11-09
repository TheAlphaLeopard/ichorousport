// gml_Script___InputTrggerEffectClassFeedback @ 0x1400d6840

undefined8 *
gml_Script___InputTrggerEffectClassFeedback
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined1 local_138 [48];
  undefined8 local_108;
  byte local_fc;
  double local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  double local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 *local_70;
  double *local_68;
  undefined8 *local_60;
  double *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  
  local_150 = 
  "gml_Script___ApplyPS5@anon@427@__InputTrggerEffectClassFeedback@__InputTrggerEffectClassFeedback"
  ;
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0xc;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_138,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0xe;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03588);
  if (puVar2 != &local_108) {
    local_1a8 = *puVar2;
    uStack_1a0 = puVar2[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  iVar1 = DAT_141a035f8;
  local_70 = &local_108;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = (double)iVar1;
  local_68 = &local_f8;
  if (puVar2 != &local_e8) {
    local_1a8 = *puVar2;
    uStack_1a0 = puVar2[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  iVar1 = DAT_141a03598;
  local_60 = &local_e8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = (double)iVar1;
  puVar2 = &DAT_1419df7b0;
  local_58 = &local_d8;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1400d6a28:
    local_1a8 = *puVar3;
    uStack_1a0 = puVar3[1];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1a8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_c8) goto LAB_1400d6a28;
  }
  local_50 = &local_c8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_b8) goto LAB_1400d6aa4;
  }
  local_1a8 = *puVar3;
  uStack_1a0 = puVar3[1];
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_1a8);
LAB_1400d6aa4:
  local_48 = &local_b8;
  uVar4 = CONCAT44(uVar5,DAT_141a035d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,2,uVar4,&local_70);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar3 != &local_a8) {
    local_1a8 = *puVar3;
    uStack_1a0 = puVar3[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_1a8);
  }
  local_40 = &local_a8;
  if (2 < param_4) {
    puVar2 = (undefined8 *)param_5[2];
  }
  uVar4 = CONCAT44(uVar5,DAT_141a035d8);
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_198,2,uVar4,&local_60);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_1a0 = puVar3[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar3);
  }
  FUN_140042560(&local_1a8,puVar2);
  local_168 = local_1a8;
  uStack_160 = uStack_1a0;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_168);
  if ((1 << ((byte)((ulonglong)uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_38 = local_98;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_178,4,CONCAT44(uVar5,DAT_141a035b8),&local_50);
  if (puVar2 != param_3) {
    local_168 = *puVar2;
    uStack_160 = puVar2[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}


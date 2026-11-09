// gml_Script_anon_18578_DefineTrinkets_TRINKETSINIT @ 0x1405f7160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_18578_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe40;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 local_f8 [16];
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_110 = "gml_Script_anon@18058@DefineTrinkets@TRINKETSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x2d7;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1a8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff7f8);
  local_11c = 0;
  local_128 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x2d8;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_198,uVar10,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_1b8 = (undefined4)local_198;
  uStack_1b4 = local_198._4_4_;
  uStack_1b0 = uStack_190;
  uStack_1ac = uStack_18c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1b8);
  ppuVar11 = &local_70;
  uVar10 = CONCAT44(uVar3,DAT_141a02ef8);
  local_70 = local_e8;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar10,ppuVar11);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') goto LAB_1405f7791;
  local_108 = 0x2d9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_198,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_198,DAT_141a1edd0,0x80000000,&local_138,uVar10,uVar12);
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(local_1a8,DAT_1419f5958,0x80000000,&local_148,uVar10,uVar12);
  if (0 < param_4) {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f4e0,0x80000000,&local_158,uVar10,uVar12 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar10 >> 0x20);
  local_1b8 = _DAT_141dc6760;
  uStack_1b4 = uRam0000000141dc6764;
  uStack_1b0 = uRam0000000141dc6768;
  uStack_1ac = uRam0000000141dc676c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_1b8);
  local_68 = local_d8;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1a8,gml_Script_anon_18291_DefineTrinkets_TRINKETSINIT,0);
  if (&local_1a8 != puVar4) {
    local_1b8 = (undefined4)local_1a8;
    uStack_1b4 = local_1a8._4_4_;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1b8);
  }
  FUN_140e60910(1);
  if (puVar4 != &local_c8) {
    local_1b8 = *(undefined4 *)puVar4;
    uStack_1b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1b0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_60 = &local_c8;
  uVar5 = CONCAT44(uVar3,DAT_141a0a0d8);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar5,&local_68);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_19c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = *puVar8;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar8);
  }
  uStack_1ac = 7;
  local_1b8 = 1;
  FUN_140042560(&local_1a8,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = (undefined4)local_1a8;
  uStack_1b4 = local_1a8._4_4_;
  uStack_1b0 = uStack_1a0;
  uStack_1ac = uStack_19c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_58 = local_b8;
  local_1b8 = (undefined4)local_148;
  uStack_1b4 = local_148._4_4_;
  uStack_1b0 = uStack_140;
  uStack_1ac = uStack_13c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_1b8);
  local_50 = local_a8;
  local_1b8 = (undefined4)local_158;
  uStack_1b4 = local_158._4_4_;
  uStack_1b0 = uStack_150;
  uStack_1ac = uStack_14c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_1b8);
  local_48 = local_98;
  puVar6 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar3,DAT_1419fd6d8),&local_60);
  if (puVar6 != local_88) {
    local_1b8 = *puVar6;
    uStack_1b4 = puVar6[1];
    uStack_1b0 = puVar6[2];
    uStack_1ac = puVar6[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1b8);
  }
  local_40 = local_88;
  uVar5 = 0;
  switch(uStack_18c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1405f7732_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_198);
    uVar5 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar5 = local_198;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_198 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1405f7732_caseD_0;
  }
  FUN_140e63610(uVar5,param_2,&local_168,3,&local_138,&local_50);
LAB_1405f7791:
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}


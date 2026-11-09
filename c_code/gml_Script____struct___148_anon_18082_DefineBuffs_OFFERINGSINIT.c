// gml_Script____struct___148_anon_18082_DefineBuffs_OFFERINGSINIT @ 0x1403d69d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___148_anon_18082_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined4 **ppuVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffdd0;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined4 local_108 [3];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined4 local_e8 [3];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  
  local_160 = "gml_Script_anon@17723@DefineBuffs@OFFERINGSINIT";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x2db;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_18c = 0xffffff;
  local_198 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  puVar5 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5aa8);
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x2dd;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5d68,0x80000000,&local_198,(ulonglong)pcVar10 & 0xffffffffffffff00,
                in_stack_fffffffffffffdd0);
  local_228 = (undefined4)local_198;
  uStack_224 = local_198._4_4_;
  uStack_220 = uStack_190;
  uStack_21c = uStack_18c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_228);
  local_88 = local_128;
  local_228 = _DAT_1419e4740;
  uStack_224 = uRam00000001419e4744;
  uStack_220 = uRam00000001419e4748;
  uStack_21c = uRam00000001419e474c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_228);
  local_80 = local_118;
  puVar7 = (undefined4 *)FUN_140e79090(&local_188,2,&local_88);
  if (puVar7 != local_108) {
    local_228 = *puVar7;
    uStack_224 = puVar7[1];
    uStack_220 = puVar7[2];
    uStack_21c = puVar7[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_228);
  }
  local_78 = local_108;
  ppuVar11 = &local_78;
  uVar6 = gml_Script_choose_weighted(param_1,param_2,&local_178,1,ppuVar11);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') goto LAB_1403d7064;
  local_158 = 0x2df;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = *(undefined8 **)(param_5 + 8);
  }
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  FUN_140e87440(puVar8,DAT_141a1f440,0x80000000,&local_208,uVar12,in_stack_fffffffffffffdd0);
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_208,DAT_141a1edd0,0x80000000,&local_1a8,uVar12,in_stack_fffffffffffffdd0);
  in_stack_fffffffffffffdd0 = in_stack_fffffffffffffdd0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5958,0x80000000,&local_1b8,uVar12,in_stack_fffffffffffffdd0);
  if (1 < param_4) {
    puVar9 = *(undefined8 **)(param_5 + 8);
  }
  uVar12 = uVar12 & 0xffffffffffffff00;
  FUN_140e87440(puVar9,DAT_141a1f4e0,0x80000000,&local_1c8,uVar12,
                in_stack_fffffffffffffdd0 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar12 >> 0x20);
  local_228 = _DAT_141dc6550;
  uStack_224 = uRam0000000141dc6554;
  uStack_220 = uRam0000000141dc6558;
  uStack_21c = uRam0000000141dc655c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_228);
  local_70 = local_f8;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_228,gml_Script_anon_17913_DefineBuffs_OFFERINGSINIT,0);
  if (&local_228 != puVar5) {
    local_218 = local_228;
    uStack_214 = uStack_224;
    uStack_210 = uStack_220;
    uStack_20c = uStack_21c;
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_218);
  }
  FUN_140e60910(1);
  if (puVar5 != local_e8) {
    local_218 = *puVar5;
    uStack_214 = puVar5[1];
    uStack_210 = puVar5[2];
    uStack_20c = puVar5[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_218);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_68 = local_e8;
  uVar4 = CONCAT44(uVar3,DAT_141a0a0d8);
  puVar5 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar4,&local_70);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar5 != local_d8) {
    local_218 = *puVar5;
    uStack_214 = puVar5[1];
    uStack_210 = puVar5[2];
    uStack_20c = puVar5[3];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_218);
  }
  local_60 = local_d8;
  local_218 = (undefined4)local_1b8;
  uStack_214 = local_1b8._4_4_;
  uStack_210 = uStack_1b0;
  uStack_20c = uStack_1ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_218);
  local_58 = local_c8;
  local_218 = (undefined4)local_1c8;
  uStack_214 = local_1c8._4_4_;
  uStack_210 = uStack_1c0;
  uStack_20c = uStack_1bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_218);
  local_50 = local_b8;
  puVar5 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar3,DAT_1419fd6d8),&local_68);
  if (puVar5 != local_a8) {
    local_218 = *puVar5;
    uStack_214 = puVar5[1];
    uStack_210 = puVar5[2];
    uStack_20c = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_218);
  }
  local_48 = local_a8;
  uVar4 = 0;
  switch(local_1fc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1403d6ff8_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_208);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_208;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_208 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1403d6ff8_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_1d8,3,&local_1a8,&local_58);
LAB_1403d7064:
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,0xb,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}


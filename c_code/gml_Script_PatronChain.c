// gml_Script_PatronChain @ 0x140416ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_PatronChain(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  longlong local_f8;
  uint uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined4 *local_48;
  longlong *local_40;
  
  local_1b0 = "gml_Script_anon@3999@PatronChain@PatronChainPoints";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x73;
  _eh_vector_constructor_iterator_(local_d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_20c = 0;
  local_218 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x74;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6398);
  plVar4 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_1f8,param_1,param_2);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f5ef8,0x80000000,&local_e8,uVar9,uVar11);
  uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_240 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
    local_248 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_248,puVar3);
  }
  FUN_140042560(&local_248,&local_e8);
  uStack_21c = local_1ec;
  uStack_220 = local_1f0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
    local_228 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_228,&local_1f8);
  }
  FUN_1400460e0(&local_228,&local_248);
  local_238 = local_228;
  uStack_230 = uStack_220;
  uStack_22c = uStack_21c;
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_238);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1a8 = 0x76;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87440(uVar2,DAT_1419f6388,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  FUN_140e87170(uVar2,DAT_141a0a728,0x80000000,&local_78,param_1,param_2);
  plVar4 = param_1;
  FUN_140e87170(uVar2,DAT_141a0cfc8,0x80000000,&local_88,param_1,param_2);
  uVar10 = (undefined4)((ulonglong)plVar4 >> 0x20);
  local_238 = local_88;
  uStack_230 = uStack_80;
  uStack_22c = uStack_7c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_238);
  local_58 = local_d8;
  local_238 = local_68;
  uStack_230 = uStack_60;
  uStack_22c = uStack_5c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_238);
  local_50 = local_c8;
  local_238 = local_78;
  uStack_230 = uStack_70;
  uStack_22c = uStack_6c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_238);
  local_48 = local_b8;
  plVar4 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_218,1,CONCAT44(uVar10,DAT_1419fe728),&local_58);
  if (plVar4 != &local_a8) {
    local_238 = *plVar4;
    uStack_230 = (undefined4)plVar4[1];
    uStack_22c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_238);
  }
  local_40 = &local_a8;
  plVar4 = (longlong *)
           gml_Script_anon_4440_PatronChain_PatronChainPoints
                     (param_1,param_2,&local_208,3,&local_50);
  lVar8 = 0;
  uVar7 = 0xffffff;
  if (plVar4 != &local_f8) {
    local_238 = *plVar4;
    uStack_230 = (undefined4)plVar4[1];
    uStack_22c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_f8,&local_238);
    lVar8 = local_f8;
    uVar7 = uStack_ec;
  }
  local_1a8 = 0x77;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f62f8);
  iVar1 = FUN_140e4a740(uVar2);
  plVar4 = (longlong *)0x0;
  if (((uVar7 & 0xffffff) == 2) && (lVar8 != 0)) {
    if ((iVar1 < 0) || (*(int *)(lVar8 + 0x24) <= iVar1)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                    *(undefined4 *)(lVar8 + 0x24));
    }
    else {
      plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar8 + 8));
    }
    if (plVar4 == &local_1d8) goto LAB_1404170dd;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar4 = &local_f8;
  }
  local_238 = *plVar4;
  uStack_230 = (undefined4)plVar4[1];
  uStack_22c = *(undefined4 *)((longlong)plVar4 + 0xc);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_238);
LAB_1404170dd:
  local_1a8 = 0x79;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6378);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_1f8,param_1,param_2);
  plVar4 = param_1;
  uVar11 = param_2;
  FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_160,param_1,param_2);
  FUN_140e87440(uVar5,DAT_1419f5ef8,0x80000000,&local_e8,(ulonglong)plVar4 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uStack_21c = local_154;
  uStack_220 = local_158;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
    local_228 = local_160;
  }
  else {
    FUN_1400419b0(&local_228,&local_160);
  }
  FUN_140042560(&local_228,&local_e8);
  uStack_23c = local_1ec;
  uStack_240 = local_1f0;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
    local_248 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_248,&local_1f8);
  }
  FUN_1400460e0(&local_248,&local_228);
  local_238 = local_248;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140e86c30(uVar2,DAT_1419fe0e8,0x80000000,&local_108);
  local_1a8 = 0x7a;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6378);
  FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_170,param_1,param_2);
  FUN_140e87170(&local_1d8,DAT_1419fe158,0x80000000,&local_98,param_1,param_2);
  uStack_23c = local_164;
  uStack_240 = local_168;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
    local_248 = local_170;
  }
  else {
    FUN_1400419b0(&local_248,&local_170);
  }
  FUN_1400460e0(&local_248,&local_98);
  local_238 = local_248;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_118);
  local_1a8 = 0x7c;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6378);
  plVar4 = param_1;
  FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_180,param_1,param_2);
  uVar10 = (undefined4)((ulonglong)plVar4 >> 0x20);
  uStack_23c = local_174;
  uStack_240 = local_178;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
    local_248 = local_180;
  }
  else {
    FUN_1400419b0(&local_248,&local_180);
  }
  FUN_1400462a0(&local_248,&local_148);
  local_238 = local_248;
  uStack_230 = uStack_240;
  uStack_22c = uStack_23c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_1a8 = 0x7d;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6348);
  local_238 = CONCAT44(uRam0000000141dc6574,_DAT_141dc6570);
  uStack_230 = uRam0000000141dc6578;
  uStack_22c = uRam0000000141dc657c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_238);
  local_58 = local_d8;
  uStack_22c = local_1dc;
  uStack_230 = local_1e0;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
    local_238 = local_1e8;
  }
  else {
    FUN_1400419b0(&local_238,&local_1e8);
  }
  FUN_140042560(&local_238,&local_1e8);
  uStack_21c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_220 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_228,puVar3);
  }
  FUN_140042560(&local_228,puVar3);
  uStack_23c = uStack_21c;
  uStack_240 = uStack_220;
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_248 = local_228;
  }
  else {
    FUN_1400419b0(&local_248,&local_228);
  }
  FUN_1400462a0(&local_248,&local_238);
  local_1c8 = (undefined4)local_248;
  uStack_1c4 = local_248._4_4_;
  uStack_1c0 = uStack_240;
  uStack_1bc = uStack_23c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1c8);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_50 = local_c8;
  puVar6 = (undefined4 *)FUN_140e79090(&local_218,2,&local_58);
  if (puVar6 != local_b8) {
    local_1c8 = *puVar6;
    uStack_1c4 = puVar6[1];
    uStack_1c0 = puVar6[2];
    uStack_1bc = puVar6[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1c8);
  }
  local_48 = local_b8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_208,1,CONCAT44(uVar10,DAT_1419fd718),&local_48);
  if (puVar3 != &local_190) {
    local_1c8 = *(undefined4 *)puVar3;
    uStack_1c4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1c0 = *(undefined4 *)(puVar3 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_1c8);
  }
  local_1a8 = 0x7f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1dbd0);
  local_1c8 = (undefined4)local_148;
  uStack_1c4 = local_148._4_4_;
  uStack_1c0 = uStack_140;
  uStack_1bc = uStack_13c;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
  FUN_140e86c30(uVar2,DAT_1419fe0e8,0x80000000,&local_128);
  local_1a8 = 0x80;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f6378);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1dbd0);
  FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_1a0,param_1,param_2);
  uStack_22c = local_194;
  uStack_230 = local_198;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) == 0) {
    local_238 = local_1a0;
  }
  else {
    FUN_1400419b0(&local_238,&local_1a0);
  }
  FUN_1400460e0(&local_238,&local_190);
  local_1c8 = (undefined4)local_238;
  uStack_1c4 = local_238._4_4_;
  uStack_1c0 = uStack_230;
  uStack_1bc = uStack_22c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_138);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}


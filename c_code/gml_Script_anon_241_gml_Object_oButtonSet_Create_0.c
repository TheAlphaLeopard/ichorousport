// gml_Script_anon_241_gml_Object_oButtonSet_Create_0 @ 0x14086acd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_241_gml_Object_oButtonSet_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  double **ppdVar10;
  ulonglong uVar11;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  char *local_170;
  undefined4 local_168;
  double local_160;
  undefined4 local_158;
  undefined4 local_154;
  double local_150;
  undefined4 local_148;
  undefined4 local_144;
  double local_140;
  uint local_134;
  double *local_130;
  double *local_128;
  double *local_120;
  undefined8 *local_118;
  undefined4 *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  double local_e0;
  undefined4 local_d4;
  double local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 local_5c;
  double local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_170 = "gml_Object_oBurstRing_Draw_0";
  local_168 = 0;
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_144 = 0xffffff;
  local_150 = 0.0;
  local_154 = 0xffffff;
  local_160 = 0.0;
  local_d4 = 0xffffff;
  local_e0 = 0.0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_134 = 0xffffff;
  local_140 = 0.0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_168 = 2;
  pdVar2 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
  uStack_1ac = 0;
  local_1b8 = (longlong *)0x0;
  iVar1 = FUN_140e851f0(pdVar2,&local_1b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar1 == -2 || 0 < iVar1) {
    local_168 = 4;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if (pdVar2 != &local_c8) {
      local_1b8 = (longlong *)*pdVar2;
      uStack_1b0 = *(undefined4 *)(pdVar2 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pdVar2 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1b8);
    }
    local_130 = &local_c8;
    uVar4 = CONCAT44(uVar9,DAT_141a08838);
    pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pdVar3 != &local_150) {
      local_1b8 = (longlong *)*pdVar3;
      uStack_1b0 = *(undefined4 *)(pdVar3 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      FUN_140041b80(&local_150,&local_1b8);
    }
    local_168 = 5;
    local_18c = local_144;
    local_190 = local_148;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
      local_198 = local_150;
    }
    else {
      FUN_1400419b0(&local_198,&local_150);
    }
    uStack_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,2);
    FUN_140042560(&local_198,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_19c = local_18c;
    uStack_1a0 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_198);
    }
    uStack_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,4);
    FUN_1400460e0(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = (longlong *)local_1a8;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    FUN_140041b80(&local_160,&local_1b8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_168 = 6;
    uStack_19c = local_154;
    uStack_1a0 = local_158;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_160;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_160);
    }
    uStack_1ac = 0;
    local_1b8 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = (longlong *)local_1a8;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_1b8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_168 = 7;
    uStack_19c = local_154;
    uStack_1a0 = local_158;
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_160;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_160);
    }
    uStack_1ac = 0;
    local_1b8 = (longlong *)0x3fe0000000000000;
    FUN_140042560(&local_1a8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = (longlong *)local_1a8;
    uStack_1b0 = uStack_1a0;
    uStack_1ac = uStack_19c;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_1b8);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_168 = 9;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_130 = &local_160;
    local_128 = &local_160;
    uVar4 = CONCAT44(uVar9,DAT_141a04a78);
    pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pdVar3 != &local_140) {
      local_1b8 = (longlong *)*pdVar3;
      uStack_1b0 = *(undefined4 *)(pdVar3 + 1);
      uStack_1ac = *(undefined4 *)((longlong)pdVar3 + 0xc);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      FUN_140041b80(&local_140,&local_1b8);
    }
    local_168 = 10;
    dVar7 = local_140;
    if ((local_134 & 0xffffff) != 0) {
      dVar7 = (double)FUN_140e4b060(&local_140);
    }
    FUN_140ec60c0((longlong)dVar7,0xffffffff);
    local_168 = 0xb;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = (longlong *)CONCAT44(uRam0000000141dc6b24,_DAT_141dc6b20);
    uStack_1b0 = uRam0000000141dc6b28;
    uStack_1ac = uRam0000000141dc6b2c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
    local_130 = &local_c8;
    local_1b8 = (longlong *)CONCAT44(uRam0000000141dc6b24,_DAT_141dc6b20);
    uStack_1b0 = uRam0000000141dc6b28;
    uStack_1ac = uRam0000000141dc6b2c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_128 = (double *)local_b8;
    uVar4 = CONCAT44(uVar9,DAT_141a04558);
    FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_168 = 0xd;
    FUN_140e9c1f0(0x3f800000);
    local_168 = 0xe;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b78);
    uVar4 = FUN_140e4a8b0(uVar4);
    FUN_140e9c240(uVar4);
    local_168 = 0xf;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_130 = &local_e0;
    local_128 = (double *)&local_f0;
    local_120 = &local_150;
    local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_1b0 = uRam00000001419df7a8;
    uStack_1ac = uRam00000001419df7ac;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1b8);
    local_118 = (undefined8 *)local_98;
    uVar4 = CONCAT44(uVar9,DAT_1419fe448);
    FUN_140e634e0(param_1,param_2,&local_1c8,4,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_168 = 0x11;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = (longlong *)CONCAT44(uRam00000001419e91e4,_DAT_1419e91e0);
    uStack_1b0 = uRam00000001419e91e8;
    uStack_1ac = uRam00000001419e91ec;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
    local_130 = &local_c8;
    uVar4 = CONCAT44(uVar9,DAT_141a04848);
    FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_168 = 0x12;
    FUN_140e9c240(0xffffff);
    local_168 = 0x13;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    pdVar3 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6108);
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
    local_1b8 = (longlong *)CONCAT44(uRam00000001419e91f4,_DAT_1419e91f0);
    uStack_1b0 = uRam00000001419e91f8;
    uStack_1ac = uRam00000001419e91fc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
    local_130 = &local_c8;
    local_18c = *(undefined4 *)((longlong)pdVar2 + 0xc);
    local_190 = *(undefined4 *)(pdVar2 + 1);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *pdVar2;
    }
    else {
      FUN_1400419b0(&local_198,pdVar2);
    }
    FUN_140046500(&local_198,uVar4);
    uStack_1ac = 0;
    local_1b8 = (longlong *)0x3ff0000000000000;
    FUN_1400462a0(&local_1b8,&local_198);
    uStack_19c = *(undefined4 *)((longlong)pdVar3 + 0xc);
    uStack_1a0 = *(undefined4 *)(pdVar3 + 1);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *pdVar3;
    }
    else {
      FUN_1400419b0(&local_1a8,pdVar3);
    }
    FUN_140042560(&local_1a8,&local_1b8);
    local_188 = (undefined4)local_1a8;
    uStack_184 = local_1a8._4_4_;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_188);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_128 = (double *)local_b8;
    puVar5 = (undefined8 *)FUN_140e79090(&local_1c8,2,&local_130);
    if (puVar5 != &local_48) {
      local_188 = *(undefined4 *)puVar5;
      uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_48);
      }
      FUN_140041b80(&local_48,&local_188);
    }
    local_168 = 0x14;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 5;
    local_188 = _DAT_141dc6b20;
    uStack_184 = uRam0000000141dc6b24;
    uStack_180 = uRam0000000141dc6b28;
    uStack_17c = uRam0000000141dc6b2c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_188);
    local_130 = &local_c8;
    uStack_19c = local_144;
    uStack_1a0 = local_148;
    if ((1 << ((byte)local_144 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_150;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_150);
    }
    FUN_1400462a0(&local_1a8,&local_48);
    local_188 = (undefined4)local_1a8;
    uStack_184 = local_1a8._4_4_;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_188);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_128 = (double *)local_b8;
    local_120 = &local_e0;
    local_118 = &local_f0;
    puVar6 = (undefined4 *)FUN_140e79090(&local_100,2,&local_130);
    if (puVar6 != local_88) {
      local_188 = *puVar6;
      uStack_184 = puVar6[1];
      uStack_180 = puVar6[2];
      uStack_17c = puVar6[3];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_188);
    }
    local_110 = local_88;
    local_188 = _DAT_1419df7a0;
    uStack_184 = uRam00000001419df7a4;
    uStack_180 = uRam00000001419df7a8;
    uStack_17c = uRam00000001419df7ac;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_188);
    local_108 = local_78;
    uVar4 = CONCAT44(uVar9,DAT_1419fe448);
    FUN_140e634e0(param_1,param_2,&local_1c8,4,uVar4,&local_120);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_168 = 0x15;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_188 = _DAT_141dc6b20;
    uStack_184 = uRam0000000141dc6b24;
    uStack_180 = uRam0000000141dc6b28;
    uStack_17c = uRam0000000141dc6b2c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_188);
    local_130 = &local_c8;
    ppdVar10 = &local_130;
    uVar8 = CONCAT44(uVar9,DAT_141a04848);
    FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar8,ppdVar10);
    local_168 = 0x17;
    FUN_140ec7870();
    local_168 = 0x18;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uStack_1ac = 6;
    uVar11 = (ulonglong)ppdVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_58,uVar8,uVar11);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 6;
    uVar8 = uVar8 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_68,uVar8,uVar11 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_130 = &local_140;
    uStack_19c = local_4c;
    uStack_1a0 = local_50;
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_58;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_58);
    }
    FUN_1400462a0(&local_1a8,&local_e0);
    local_188 = (undefined4)local_1a8;
    uStack_184 = local_1a8._4_4_;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_188);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_128 = (double *)local_b8;
    uStack_19c = local_5c;
    uStack_1a0 = local_60;
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_68;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_68);
    }
    FUN_1400462a0(&local_1a8,&local_f0);
    local_188 = (undefined4)local_1a8;
    uStack_184 = local_1a8._4_4_;
    uStack_180 = uStack_1a0;
    uStack_17c = uStack_19c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_188);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_120 = (double *)&local_a8;
    uVar4 = CONCAT44(uVar9,DAT_141a049d8);
    FUN_140e634e0(param_1,param_2,&local_1c8,3,uVar4,&local_130);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_168 = 0x19;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_130 = &local_140;
    FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar9,DAT_141a04918),&local_130);
    local_168 = 0x1b;
    FUN_140e9c1f0(0x3f800000);
    local_168 = 0x1c;
    FUN_140e9c240(0xffffff);
  }
  else {
    local_168 = 2;
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_178;
  return;
}


// gml_Script_seg_meeting @ 0x14049cfb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
gml_Script_seg_meeting
          (longlong *param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auVar2 [12];
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar18 [16];
  undefined4 uVar24;
  undefined8 uVar22;
  ulonglong uVar23;
  ulonglong **ppuVar25;
  ulonglong uVar26;
  undefined8 local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  undefined4 local_250;
  undefined4 local_24c;
  ulonglong local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  ulonglong local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  ulonglong local_218;
  undefined4 local_210;
  undefined4 local_20c;
  ulonglong local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  ulonglong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  ulonglong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulonglong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  ulonglong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  ulonglong local_138;
  undefined4 local_12c;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  undefined1 *local_110;
  ulonglong local_108;
  byte local_fc;
  ulonglong local_f8;
  byte local_ec;
  ulonglong local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  ulonglong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  local_1c0 = "gml_Script_seg_meeting_mask";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 4;
  uVar24 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_20c = 0xffffff;
  local_218 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_21c = 0;
  local_228 = 0;
  local_16c = 0;
  local_178 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 6;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_14049d11e:
    local_268 = (longlong *)*puVar6;
    uStack_260 = puVar6[1];
    FUN_140041b80(&local_218,&local_268);
  }
  else {
    puVar6 = (ulonglong *)*param_5;
    if (puVar6 != &local_218) goto LAB_14049d11e;
  }
  if ((param_4 < 2) || (puVar10 = (ulonglong *)param_5[1], puVar10 != &local_138)) {
    local_268 = (longlong *)*puVar10;
    uStack_260 = puVar10[1];
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_268);
  }
  puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fba8);
  iVar4 = FUN_140e4a740(&local_218);
  if (((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 2) && (uVar23 = *puVar10, uVar23 != 0)) {
    if ((iVar4 < 0) || (*(int *)(uVar23 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(uVar23 + 0x24));
      puVar10 = (ulonglong *)0x0;
    }
    else {
      puVar10 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar23 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (puVar10 != &local_158) {
    local_268 = (longlong *)*puVar10;
    uStack_260 = puVar10[1];
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_268);
  }
  local_1b8 = 10;
  uStack_260 = uStack_260 & 0xffffffff;
  local_268 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(&local_218,&local_268,DAT_141955260,1);
  if ((1 << ((byte)(uStack_260 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_218,uVar5,DAT_141955260,1);
    if ((iVar4 == -2) || (iVar4 < 1)) goto LAB_14049d697;
  }
  local_1b8 = 10;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
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
  puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
  local_128 = &local_218;
  if (puVar10 != &local_f8) {
    local_268 = (longlong *)*puVar10;
    uStack_260 = puVar10[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_268);
  }
  local_120 = &local_f8;
  uStack_260 = CONCAT44(DAT_141dd38b4,DAT_141dd38b0);
  if ((1 << ((byte)DAT_141dd38b4 & 0x1f) & 0x46U) == 0) {
    local_268 = (longlong *)DAT_141dd38a8;
  }
  else {
    FUN_1400419b0(&local_268,&DAT_141dd38a8);
  }
  local_1ec = DAT_141dd38c4;
  local_1f0 = DAT_141dd38c0;
  if ((1 << ((byte)DAT_141dd38c4 & 0x1f) & 0x46U) == 0) {
    local_1f8 = DAT_141dd38b8;
  }
  else {
    FUN_1400419b0(&local_1f8,&DAT_141dd38b8);
  }
  uVar19 = local_1ec;
  uVar12 = local_1f0;
  uVar23 = local_1f8;
  uVar22 = CONCAT44(uVar24,DAT_1419fcb18);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar22,&local_128);
  uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
  uVar9 = 1 << ((byte)uVar19 & 0x1f) & 0x46;
  local_250 = uVar12;
  local_24c = uVar19;
  if (uVar9 == 0) {
    local_258 = uVar23;
  }
  else {
    FUN_1400419b0(&local_258,&local_1f8);
  }
  FUN_1400460e0(&local_258,uVar5);
  local_1fc = local_24c;
  local_200 = local_250;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
    local_208 = local_258;
  }
  else {
    FUN_1400419b0(&local_208,&local_258);
  }
  FUN_1400460e0(&local_208,&local_268);
  uVar22 = CONCAT44(uVar24,DAT_1419fcb18);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_188,1,uVar22,&local_120);
  uVar24 = (undefined4)((ulonglong)uVar22 >> 0x20);
  uStack_23c = local_1fc;
  uStack_240 = local_200;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
    local_248 = local_208;
  }
  else {
    FUN_1400419b0(&local_248,&local_208);
  }
  FUN_1400460e0(&local_248,uVar5);
  uStack_230 = CONCAT44(uStack_23c,uStack_240);
  local_238 = local_248;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_238);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (uVar9 != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)(uStack_260 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_118 = &local_e8;
  local_238 = _DAT_1419df7c0;
  uStack_230 = uRam00000001419df7c8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_238);
  local_110 = local_d8;
  uVar5 = CONCAT44(uVar24,DAT_141a010a8);
  FUN_140e634e0(param_1,param_2,&local_228,2,uVar5,&local_118);
  uVar24 = (undefined4)((ulonglong)uVar5 >> 0x20);
LAB_14049d697:
  local_1b8 = 0xb;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  local_128 = &local_158;
  ppuVar25 = &local_128;
  uVar23 = CONCAT44(uVar24,DAT_141a04628);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_228,1,uVar23,ppuVar25);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_1b8 = 0xc;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
  else {
    local_1b8 = 0xe;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    uStack_23c = local_20c;
    uStack_240 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_248 = local_218;
    }
    else {
      FUN_1400419b0(&local_248,&local_218);
    }
    uStack_260._4_4_ = 7;
    local_268 = (longlong *)CONCAT44(local_268._4_4_,1);
    FUN_1400460e0(&local_248,&local_268);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uVar9 = FUN_140e851f0(&local_248,uVar5,DAT_141955260,1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = (double)(byte)((uVar9 < 0x80000000) * '\x02');
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_24c = local_20c;
    local_250 = local_210;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
      local_258 = local_218;
    }
    else {
      FUN_1400419b0(&local_258,&local_218);
    }
    uStack_260._4_4_ = 7;
    local_268 = (longlong *)CONCAT44(local_268._4_4_,1);
    FUN_1400460e0(&local_258,&local_268);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uStack_23c = local_24c;
    uStack_240 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_248 = local_258;
    }
    else {
      FUN_1400419b0(&local_248,&local_258);
    }
    FUN_1400462a0(&local_248,&local_168);
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_238);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_260._4_4_ = 6;
    uVar26 = (ulonglong)ppuVar25 & 0xffffffffffffff00;
    uVar23 = uVar23 & 0xffffffffffffff00;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_141a0a728,0x80000000,&local_98,uVar23,uVar26);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uStack_230 = CONCAT44(uStack_8c,uStack_90);
    local_238 = local_98;
    FUN_140041b80(&local_a8,&local_238);
    uStack_260._4_4_ = 6;
    uVar26 = uVar26 & 0xffffffffffffff00;
    uVar23 = uVar23 & 0xffffffffffffff00;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_141a0a778,0x80000000,&local_198,uVar23,uVar26);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uStack_230 = CONCAT44(uStack_18c,uStack_190);
    local_238 = local_198;
    FUN_140041b80(&local_b8,&local_238);
    puVar10 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    puVar6 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
    uStack_260._4_4_ = 6;
    uVar23 = uVar23 & 0xffffffffffffff00;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_141a0a778,0x80000000,&local_198,uVar23,uVar26 & 0xffffffffffffff00)
    ;
    uVar24 = (undefined4)(uVar23 >> 0x20);
    if ((1 << ((byte)uStack_260._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uStack_260 = (ulonglong)(uint)uStack_260;
    local_268 = (longlong *)0x4056800000000000;
    FUN_140042560(&local_268,&local_168);
    iVar4 = FUN_140e4a740(&local_148);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 0) {
      uVar12 = (undefined4)*plVar8;
      uVar19 = (undefined4)((ulonglong)*plVar8 >> 0x20);
    }
    else {
      uVar5 = FUN_140e4b060(plVar8);
      uVar12 = (undefined4)uVar5;
      uVar19 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    iVar4 = FUN_140e4a740(&local_148);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if ((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 0) {
      uVar13 = (undefined4)*plVar7;
      uVar20 = (undefined4)((ulonglong)*plVar7 >> 0x20);
    }
    else {
      uVar5 = FUN_140e4b060(plVar7);
      uVar13 = (undefined4)uVar5;
      uVar20 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    iVar4 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 2) && (uVar23 = *puVar6, uVar23 != 0)) {
      if ((iVar4 < 0) || (*(int *)(uVar23 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(uVar23 + 0x24));
        puVar11 = (ulonglong *)0x0;
      }
      else {
        puVar11 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar23 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      puVar11 = puVar6;
    }
    if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
      uVar14 = (undefined4)*puVar11;
      uVar21 = (undefined4)(*puVar11 >> 0x20);
    }
    else {
      uVar5 = FUN_140e4b060(puVar11);
      uVar14 = (undefined4)uVar5;
      uVar21 = (undefined4)((ulonglong)uVar5 >> 0x20);
    }
    iVar4 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 2) && (uVar23 = *puVar10, uVar23 != 0))
    {
      if ((iVar4 < 0) || (*(int *)(uVar23 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(uVar23 + 0x24));
        puVar11 = (ulonglong *)0x0;
      }
      else {
        puVar11 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar23 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      puVar11 = puVar10;
    }
    if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = *puVar11;
    }
    else {
      auVar16._0_8_ = FUN_140e4b060(puVar11);
      auVar16._8_8_ = extraout_XMM0_Qb;
    }
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = (float)auVar16._0_8_;
    fVar15 = (float)FUN_140e793d0(auVar17._0_8_,(float)(double)CONCAT44(uVar21,uVar14),
                                  (float)(double)CONCAT44(uVar20,uVar13),
                                  (float)(double)CONCAT44(uVar19,uVar12));
    local_1fc = uStack_18c;
    local_200 = uStack_190;
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_208 = local_198;
    }
    else {
      FUN_1400419b0(&local_208,&local_198);
    }
    FUN_140162c50(&local_208,(double)fVar15);
    local_24c = local_1fc;
    local_250 = local_200;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) == 0) {
      local_258 = local_208;
    }
    else {
      FUN_1400419b0(&local_258,&local_208);
    }
    FUN_1400460e0(&local_258,&local_268);
    uStack_23c = local_24c;
    uStack_240 = local_250;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_248 = local_258;
    }
    else {
      FUN_1400419b0(&local_248,&local_258);
    }
    local_1ec = 7;
    local_1f8 = CONCAT44(local_1f8._4_4_,0x168);
    FUN_140046880(&local_248,&local_1f8);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uStack_230 = CONCAT44(uStack_23c,uStack_240);
    local_238 = local_248;
    FUN_140041b80(&local_c8,&local_238);
    uVar5 = extraout_XMM0_Qb_00;
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
      uVar5 = extraout_XMM0_Qb_01;
    }
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
      uVar5 = extraout_XMM0_Qb_02;
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
      uVar5 = extraout_XMM0_Qb_03;
    }
    if ((1 << ((byte)(uStack_260 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
      uVar5 = extraout_XMM0_Qb_04;
    }
    auVar2._4_8_ = uVar5;
    auVar2._0_4_ = local_268._4_4_;
    auVar18._0_8_ = auVar2._0_8_ << 0x20;
    auVar18._8_4_ = (uint)uStack_260;
    auVar18._12_4_ = 0xd;
    uStack_260 = auVar18._8_8_;
    local_268 = (longlong *)0x0;
    local_238 = 0;
    uStack_230 = uStack_260;
    FUN_140041b80(&local_1a8,&local_238);
    local_1b8 = 0x15;
    uStack_230 = CONCAT44(uStack_14c,uStack_150);
    local_238 = local_158;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_238);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_1d8);
    local_1b8 = 0x16;
    uStack_230 = CONCAT44(uStack_bc,uStack_c0);
    local_238 = local_c8;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_238);
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_1e8);
    local_1b8 = 0x18;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    iVar4 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)puVar10 + 0xc) & 0xffffff) == 2) && (uVar23 = *puVar10, uVar23 != 0))
    {
      if ((iVar4 < 0) || (*(int *)(uVar23 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(uVar23 + 0x24));
        puVar10 = (ulonglong *)0x0;
      }
      else {
        puVar10 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar23 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (puVar10 != &local_108) {
      local_238 = *puVar10;
      uStack_230 = puVar10[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_238);
    }
    local_128 = &local_108;
    iVar4 = FUN_140e4a740(&local_218);
    if (((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 2) && (uVar23 = *puVar6, uVar23 != 0)) {
      if ((iVar4 < 0) || (*(int *)(uVar23 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(uVar23 + 0x24));
        puVar6 = (ulonglong *)0x0;
      }
      else {
        puVar6 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar23 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (puVar6 != &local_f8) {
      local_238 = *puVar6;
      uStack_230 = puVar6[1];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_238);
    }
    local_120 = &local_f8;
    local_118 = &local_138;
    puVar10 = (ulonglong *)
              FUN_140e634e0(param_1,param_2,&local_228,3,CONCAT44(uVar24,DAT_141a12628),&local_128);
    if (puVar10 != &local_1a8) {
      local_238 = *puVar10;
      uStack_230 = puVar10[1];
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_238);
    }
    local_1b8 = 0x1a;
    uStack_230 = CONCAT44(uStack_9c,uStack_a0);
    local_238 = local_a8;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_238);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_1d8);
    local_1b8 = 0x1b;
    uStack_230 = CONCAT44(uStack_ac,uStack_b0);
    local_238 = local_b8;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_238);
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_1e8);
    local_1b8 = 0x1d;
    if (&local_1a8 != param_3) {
      uStack_230 = CONCAT44(uStack_19c,uStack_1a0);
      local_238 = local_1a8;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_238);
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}


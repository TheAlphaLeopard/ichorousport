// gml_Object_oUnlockHurter_Create_0 @ 0x140e1d190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oUnlockHurter_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  byte bVar9;
  byte bVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 **ppuVar23;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  double local_188;
  undefined4 local_180;
  uint local_17c;
  double local_178;
  undefined4 local_170;
  uint local_16c;
  uint local_168;
  uint local_164;
  undefined8 local_160;
  char *local_158;
  undefined4 local_150;
  double local_148;
  undefined4 local_140;
  uint local_13c;
  uint local_138 [2];
  undefined8 *local_130;
  double local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_110;
  uint local_10c;
  double local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  double *local_e8;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  
  local_158 = "gml_Script_anon@12642@gml_Object_oUIManager_Other_10";
  local_160 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_160;
  local_150 = 0x19c;
  FUN_140041df0(local_138,param_4,2,param_5);
  uVar17 = 1;
  _eh_vector_constructor_iterator_(local_e0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_ec = 0xffffff;
  local_f8 = 0;
  bVar10 = 0xff;
  local_10c = 0xffffff;
  local_118 = 0.0;
  bVar9 = 0xff;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_b0 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_150 = 0x19d;
  cVar2 = FUN_140e491e0(uVar4);
  uVar14 = local_138[0];
  if (cVar2 != '\0') {
    local_150 = 0x19d;
    goto LAB_140e1e266;
  }
  local_150 = 0x19f;
  if ((int)local_138[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_130[1];
  }
  cVar2 = FUN_140e491e0(puVar5);
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff638);
    uStack_1cc = 0;
    local_1d8 = 0.0;
    iVar3 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar3 == -2 || 0 < iVar3) goto LAB_140e1d376;
LAB_140e1d3da:
    local_150 = 0x1a1;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff638);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_150 = 0x1a2;
    uVar12 = 0xffffff;
    local_138[0] = uVar14;
    uVar14 = 0xffffff;
  }
  else {
LAB_140e1d376:
    if ((int)uVar14 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_130;
    }
    uStack_1cc = 0;
    local_1d8 = 0.0;
    iVar3 = FUN_140e851f0(puVar5,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    puVar5 = local_130;
    if (iVar3 != -2 && iVar3 < 0) goto LAB_140e1d3da;
    local_150 = 0x1a5;
    if ((int)uVar14 < 1) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)*local_130;
    }
    if ((*(uint *)((longlong)puVar11 + 0xc) & 0xffffff) == 0) {
      uVar16 = (undefined4)*puVar11;
    }
    else {
      uVar16 = FUN_140e4b060();
    }
    if ((int)uVar14 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar4 = FUN_140e78ec0(uVar16,0,0x402c000000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = uVar4;
    local_150 = 0x1a7;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff638);
    uStack_1cc = 0;
    local_1d8 = 3.0;
    local_e8 = pdVar6;
    FUN_1400462a0(&local_1d8,pdVar6);
    local_1b8 = (undefined8 *)local_1d8;
    uStack_1b0 = (char *)CONCAT44(uStack_1cc,uStack_1d0);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1b8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_150 = 0x1a9;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02fb8);
    uStack_1bc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    uStack_1c0 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
      local_1c8 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_1c8,pdVar7);
    }
    uStack_1cc = 7;
    local_1d8 = (double)CONCAT44(local_1d8._4_4_,0x10);
    FUN_1400460e0(&local_1c8,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1b8 = (undefined8 *)local_1c8;
    uStack_1b0 = (char *)CONCAT44(uStack_1bc,uStack_1c0);
    FUN_140041b80(&local_118,&local_1b8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_150 = 0x1aa;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a031c8);
    local_17c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    local_180 = *(undefined4 *)(pdVar7 + 1);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
      local_188 = *pdVar7;
    }
    else {
      FUN_1400419b0(&local_188,pdVar7);
    }
    uStack_1cc = 7;
    local_1d8 = (double)CONCAT44(local_1d8._4_4_,0xc);
    FUN_1400460e0(&local_188,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1bc = local_17c;
    uStack_1c0 = local_180;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
      local_1c8 = local_188;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_188);
    }
    FUN_1400462a0(&local_1c8,&local_f8);
    local_1b8 = (undefined8 *)local_1c8;
    uStack_1b0 = (char *)CONCAT44(uStack_1bc,uStack_1c0);
    FUN_140041b80(&local_108,&local_1b8);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_150 = 0x1ac;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_1b0 = (char *)CONCAT44(0xf,(uint)uStack_1b0);
    local_1b8 = (undefined8 *)0x100000100000050;
    local_1d8 = 7.291128972912335e-304;
    uStack_1d0 = (uint)uStack_1b0;
    uStack_1cc = 0xf;
    if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e0);
    }
    FUN_140041b80(local_e0,&local_1d8);
    local_a8 = local_e0;
    uVar4 = CONCAT44(uVar17,DAT_141a047c8);
    pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_198,1,uVar4,&local_a8);
    uVar17 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pdVar7 != &local_128) {
      local_1b8 = (undefined8 *)*pdVar7;
      uStack_1b0 = (char *)pdVar7[1];
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1b8);
    }
    local_150 = 0x1ae;
    uStack_1cc = 0;
    local_1d8 = 3.0;
    iVar3 = FUN_140e851f0(pdVar6,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_150 = 0x1af;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff638);
      uStack_1b0 = (char *)CONCAT44(0xf,(uint)uStack_1b0);
      local_1b8 = (undefined8 *)0x10000010000002f;
      local_1d8 = 7.291128972912281e-304;
      uStack_1d0 = (uint)uStack_1b0;
      uStack_1cc = 0xf;
      local_e8 = pdVar6;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_1d8);
      local_a8 = local_e0;
      uStack_1cc = 0;
      local_1d8 = 2.0;
      iVar3 = FUN_140e851f0(pdVar6,&local_1d8,DAT_141955260,1);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      bVar15 = iVar3 == -2 || -1 < iVar3;
      if (bVar15) {
        uStack_1cc = 0;
        local_1d8 = 2.0;
        pdVar6 = &local_1d8;
      }
      else {
        uStack_1bc = 0;
        local_1c8 = 1.0;
        pdVar6 = &local_1c8;
      }
      uVar12 = uStack_1bc;
      uVar14 = uStack_1cc;
      local_1b8 = (undefined8 *)*pdVar6;
      uStack_1b0 = (char *)pdVar6[1];
      if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d0);
      }
      FUN_140041b80(local_d0,&local_1b8);
      if ((bVar15) && ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1d8);
      }
      if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1c8);
      }
      local_a0 = local_d0;
      local_1b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_1b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c0);
      }
      FUN_140041b80(local_c0,&local_1b8);
      local_98 = local_c0;
      ppuVar23 = &local_a8;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_198,3,ppuVar23);
      uVar17 = (undefined4)((ulonglong)ppuVar23 >> 0x20);
    }
    dVar22 = local_108;
    local_150 = 0x1b1;
    local_164 = local_fc;
    uStack_1bc = local_fc;
    uStack_1c0 = local_100;
    bVar9 = (byte)local_fc & 0x1f;
    if ((1 << bVar9 & 0x46U) == 0) {
      local_1c8 = local_108;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_108);
    }
    uStack_1b0._4_4_ = 7;
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,4);
    FUN_1400460e0(&local_1c8,&local_1b8);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    dVar19 = local_118;
    local_168 = local_10c;
    local_17c = local_10c;
    local_180 = local_110;
    bVar10 = (byte)local_10c & 0x1f;
    if ((1 << bVar10 & 0x46U) == 0) {
      local_188 = local_118;
    }
    else {
      FUN_1400419b0(&local_188,&local_118);
    }
    FUN_1400462a0(&local_188,&local_128);
    local_16c = local_17c;
    local_170 = local_180;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
      local_178 = local_188;
    }
    else {
      FUN_1400419b0(&local_178,&local_188);
    }
    uStack_1b0._4_4_ = 7;
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,8);
    FUN_1400462a0(&local_178,&local_1b8);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1cc = 0xf;
    local_1d8 = 7.291128972912324e-304;
    dVar20 = local_1c8;
    if ((uStack_1bc & 0xffffff) != 0) {
      dVar20 = (double)FUN_140e4b060(&local_1c8);
    }
    dVar21 = local_178;
    if ((local_16c & 0xffffff) != 0) {
      dVar21 = (double)FUN_140e4b060(&local_178);
    }
    dVar18 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar18 = (double)FUN_140e4b060(&local_1d8);
    }
    uVar4 = CONCAT44(uVar17,(float)dVar20);
    FUN_140ec5d30(param_1,(int)dVar18,0,(float)dVar21,uVar4);
    uVar17 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_150 = 0x1b2;
    local_16c = local_164;
    local_170 = local_100;
    if ((1 << bVar9 & 0x46U) == 0) {
      local_178 = dVar22;
    }
    else {
      FUN_1400419b0(&local_178,&local_108);
    }
    uStack_1b0._4_4_ = 7;
    local_1b8 = (undefined8 *)CONCAT44(local_1b8._4_4_,4);
    FUN_1400460e0(&local_178,&local_1b8);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1bc = local_168;
    uStack_1c0 = local_110;
    if ((1 << bVar10 & 0x46U) == 0) {
      local_1c8 = dVar19;
    }
    else {
      FUN_1400419b0(&local_1c8,&local_118);
    }
    FUN_1400462a0(&local_1c8,&local_128);
    uStack_1cc = 0xf;
    local_1d8 = 7.291128972912335e-304;
    dVar22 = local_178;
    if ((local_16c & 0xffffff) != 0) {
      dVar22 = (double)FUN_140e4b060(&local_178);
    }
    dVar19 = local_1c8;
    if ((uStack_1bc & 0xffffff) != 0) {
      dVar19 = (double)FUN_140e4b060(&local_1c8);
    }
    puVar11 = local_130;
    puVar5 = &DAT_1419df7b0;
    if ((int)local_138[0] < 1) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)*local_130;
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar20 = *pdVar6;
    }
    else {
      dVar20 = (double)FUN_140e4b060();
    }
    dVar21 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar21 = (double)FUN_140e4b060(&local_1d8);
    }
    FUN_140ec5d30(param_1,(int)dVar21,(float)dVar20,(float)dVar19,CONCAT44(uVar17,(float)dVar22));
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    pdVar6 = local_e8;
    local_150 = 0x1b4;
    uStack_1b0 = (char *)(ulonglong)(uint)uStack_1b0;
    local_1b8 = (undefined8 *)0x4008000000000000;
    iVar3 = FUN_140e851f0(local_e8,&local_1b8,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_150 = 0x1b5;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff638);
      uStack_1b0 = "gml_Script_pal_swap_reset";
      local_1b8 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_1b8;
      local_18c = 5;
      local_198 = 0;
      local_1a8 = 0x71;
      iVar3 = FUN_140ec9d80();
      if (iVar3 != -1) {
        local_1a8 = 0x71;
        FUN_140ec9dc0();
      }
      DAT_141dc7a50 = local_1b8;
    }
    local_150 = 0x1b7;
    uStack_1cc = 0;
    local_1d8 = 0.5;
    FUN_140042560(&local_1d8,local_b0);
    local_1b8 = (undefined8 *)local_1d8;
    uStack_1b0 = (char *)CONCAT44(uStack_1cc,uStack_1d0);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1b8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_150 = 0x1b8;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff638);
    if (1 < (int)local_138[0]) {
      puVar5 = (undefined8 *)puVar11[1];
    }
    cVar2 = FUN_140e491e0(puVar5);
    if (cVar2 == '\0') {
      dVar22 = local_148;
      if ((local_13c & 0xffffff) != 0) {
        dVar22 = (double)FUN_140e4b060(&local_148);
      }
      uStack_1b0 = (char *)((ulonglong)uStack_1b0 & 0xffffffff);
      local_1b8 = (undefined8 *)-dVar22;
      pdVar7 = (double *)&local_1b8;
      bVar1 = false;
      bVar15 = true;
    }
    else {
      uStack_1cc = local_13c;
      uStack_1d0 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_148;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_148);
      }
      pdVar7 = &local_1d8;
      bVar1 = true;
      bVar15 = false;
    }
    uStack_1bc = *(uint *)((longlong)pdVar6 + 0xc);
    uStack_1c0 = *(undefined4 *)(pdVar6 + 1);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
      local_1c8 = *pdVar6;
    }
    else {
      FUN_1400419b0(&local_1c8,pdVar6);
    }
    FUN_1400460e0(&local_1c8,pdVar7);
    if ((uStack_1bc & 0xffffff) == 0) {
      uVar17 = SUB84(local_1c8,0);
    }
    else {
      uVar17 = FUN_140e4b060(&local_1c8);
    }
    uVar4 = FUN_140e78ec0(uVar17,0,0x4008000000000000);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = uVar4;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((bVar15) && ((1 << ((byte)((ulonglong)uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1b8);
    }
    if ((bVar1) && ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1d8);
    }
    uVar12 = local_164;
    uVar14 = local_168;
  }
  bVar10 = (byte)uVar14;
  bVar9 = (byte)uVar12;
  uVar14 = local_138[0];
LAB_140e1e266:
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e0,0x10,3,FUN_140041b30);
  if (0 < (int)uVar14) {
    uVar13 = (ulonglong)uVar14;
    puVar5 = local_130;
    do {
      puVar11 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 1) = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_130);
  DAT_141dc7a50 = (undefined8 *)local_160;
  return param_3;
}


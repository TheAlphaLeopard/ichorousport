// gml_Object_oShopPedistal_PreCreate_0 @ 0x140d71b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oShopPedistal_PreCreate_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  code *pcVar17;
  ulonglong uVar18;
  undefined4 uVar20;
  undefined1 **ppuVar19;
  uint in_stack_fffffffffffffe20;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  double local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_170;
  uint local_16c;
  double local_168;
  undefined4 local_160;
  uint local_15c;
  longlong *local_158;
  undefined4 local_150;
  uint local_14c;
  longlong local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  char *local_120;
  undefined4 local_118;
  double local_110;
  uint local_104;
  double local_100;
  uint local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined1 local_d0 [12];
  byte local_c4;
  undefined1 local_c0 [12];
  byte local_b4;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  
  local_120 = "gml_Object_oShopPedistal_Draw_0";
  local_118 = 0;
  local_128 = (longlong)DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_118 = 2;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ff568);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar18,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar18,in_stack_fffffffffffffe20);
  uVar20 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  plVar13 = local_178;
  if ((local_16c & 0xffffff) != 0) {
    plVar13 = (longlong *)FUN_140e4b060(&local_178);
  }
  dVar10 = local_168;
  if ((local_15c & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_168);
  }
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar11 = *pdVar4;
  }
  else {
    dVar11 = (double)FUN_140e4b060(pdVar4);
  }
  uVar18 = CONCAT44(uVar20,(float)(double)plVar13);
  FUN_140ec5d30(param_1,(longlong)dVar11,0,(float)dVar10,uVar18);
  local_118 = 4;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uStack_1b0 = (char *)(ulonglong)(uint)uStack_1b0;
  local_1b8 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar5,&local_1b8,DAT_141955260,0);
  if ((1 << ((byte)((ulonglong)uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar2 != 0) {
    local_118 = 6;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
    uStack_1b0._4_4_ = 0xf;
    local_1b8 = (longlong *)0x100000000000106;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_1419f5998,0x80000000,&local_f0,uVar18,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
    ppuVar19 = (undefined1 **)(uVar18 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_141a0a918,0x80000000,&local_138,ppuVar19,in_stack_fffffffffffffe20);
    uStack_1b0 = (char *)CONCAT44(local_12c,local_130);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) == 0) {
      local_1b8 = (longlong *)local_138;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_138);
    }
    uStack_18c = 7;
    local_198 = (double)CONCAT44(local_198._4_4_,1);
    FUN_1400460e0(&local_1b8,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uVar3 = FUN_140e851f0(&local_f0,&local_1b8,DAT_141955260,1);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_13c = 0xd;
    if (uVar3 < 0x80000000) {
      uVar3 = 0x3ff00000;
    }
    else {
      uVar3 = 0;
    }
    local_148 = (ulonglong)uVar3 << 0x20;
    if ((1 << ((byte)((ulonglong)uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_118 = 7;
    cVar1 = FUN_140e491e0(&local_148);
    if (cVar1 == '\0') {
      local_118 = 7;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uStack_1b0 = (char *)CONCAT44(0xf,(uint)uStack_1b0);
      local_1b8 = (longlong *)0x10000010000002c;
      local_198 = 7.291128972912277e-304;
      uStack_190 = (uint)uStack_1b0;
      uStack_18c = 0xf;
      if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_198);
      local_b0 = local_e0;
      local_1b8 = (longlong *)CONCAT44(uRam00000001419edcd4,_DAT_1419edcd0);
      uStack_1b0 = (char *)CONCAT44(uRam00000001419edcdc,uRam00000001419edcd8);
      if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d0);
      }
      FUN_140041b80(local_d0,&local_1b8);
      local_a8 = local_d0;
      local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_1b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c0);
      }
      FUN_140041b80(local_c0,&local_1b8);
      local_a0 = local_c0;
      ppuVar19 = &local_b0;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_188,3,ppuVar19);
    }
    local_118 = 8;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff598);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    uStack_1b0._4_4_ = 6;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
    uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0a728,0x80000000,&local_100,uVar18,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1b0._4_4_ = 6;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_141a0cfc8,0x80000000,&local_110,uVar18,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1b0._4_4_ = 6;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar18,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1b0._4_4_ = 6;
    uVar18 = uVar18 & 0xffffffffffffff00;
    local_1b8 = param_1;
    FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar18,
                  in_stack_fffffffffffffe20 & 0xffffff00);
    uVar20 = (undefined4)(uVar18 >> 0x20);
    if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_14c = local_16c;
    local_150 = local_170;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
      local_158 = local_178;
    }
    else {
      FUN_1400419b0(&local_158,&local_178);
    }
    FUN_1400460e0(&local_158,uVar6);
    uStack_1b0 = (char *)CONCAT44(local_14c,local_150);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_158;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_158);
    }
    FUN_1400460e0(&local_1b8,uVar7);
    uStack_18c = local_15c;
    uStack_190 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_198 = local_168;
    }
    else {
      FUN_1400419b0(&local_198,&local_168);
    }
    FUN_1400460e0(&local_198,uVar5);
    if ((*(uint *)((longlong)pdVar9 + 0xc) & 0xffffff) == 0) {
      dVar10 = *pdVar9;
    }
    else {
      dVar10 = (double)FUN_140e4b060(pdVar9);
    }
    if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
      dVar11 = *pdVar8;
    }
    else {
      dVar11 = (double)FUN_140e4b060(pdVar8);
    }
    if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar4;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar4);
    }
    plVar13 = local_1b8;
    if (((ulonglong)uStack_1b0 & 0xffffff00000000) != 0) {
      plVar13 = (longlong *)FUN_140e4b060(&local_1b8);
    }
    dVar14 = local_198;
    if ((uStack_18c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_198);
    }
    dVar15 = local_110;
    if ((local_104 & 0xffffff) != 0) {
      dVar15 = (double)FUN_140e4b060(&local_110);
    }
    dVar16 = local_100;
    if ((local_f4 & 0xffffff) != 0) {
      dVar16 = (double)FUN_140e4b060(&local_100);
    }
    FUN_140ec5dd0(param_1,(longlong)dVar16,(float)dVar15,(float)dVar14,
                  CONCAT44(uVar20,(float)(double)plVar13),(float)dVar12,(float)dVar11,(float)dVar10,
                  0xffffff,0x3f800000);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)((ulonglong)uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_118 = 9;
    cVar1 = FUN_140e491e0(&local_148);
    if (cVar1 == '\0') {
      local_118 = 9;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50();
      }
      local_180 = 0;
      uStack_1b0 = "gml_Script_pal_swap_reset";
      local_1b8 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_1b8;
      local_17c = 5;
      local_188 = 0;
      local_1a8 = 0x71;
      iVar2 = FUN_140ec9d80();
      if (iVar2 != -1) {
        local_1a8 = 0x71;
        FUN_140ec9dc0();
      }
      DAT_141dc7a50 = local_1b8;
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(local_e0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (longlong *)local_128;
  return;
}


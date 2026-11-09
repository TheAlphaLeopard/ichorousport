// gml_Script_DefineTrinkets @ 0x14061b5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_DefineTrinkets(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  double *pdVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  double **ppdVar9;
  undefined1 **ppuVar10;
  ulonglong uVar11;
  double local_188;
  uint local_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  double dStack_150;
  longlong local_148;
  undefined4 uStack_140;
  int iStack_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 local_100 [16];
  double local_f0;
  byte local_e4;
  undefined1 local_e0 [16];
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 *local_80;
  double *local_78;
  undefined1 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  
  local_120 = "gml_Script_anon@42886@DefineTrinkets@TRINKETSINIT";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x5f8;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_100,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0.0;
  iStack_13c = 0xffffff;
  local_148 = 0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_15c = 0;
  local_168 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x5f9;
  pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if (pdVar6 != &local_f0) {
    local_158 = *pdVar6;
    dStack_150 = pdVar6[1];
    if ((1 << (local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_158);
  }
  local_78 = &local_f0;
  local_158 = _DAT_141dd4f28;
  dStack_150 = dRam0000000141dd4f30;
  if ((1 << (local_e0[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_158);
  local_70 = local_e0;
  ppdVar9 = &local_78;
  uVar8 = CONCAT44(uVar4,DAT_1419fcba8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_168,2,uVar8,ppdVar9);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_118 = 0x5fa;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    pdVar6 = (double *)FUN_140e8da20(&local_90,param_1,0);
    if (pdVar6 != &local_138) {
      local_158 = *pdVar6;
      dStack_150 = pdVar6[1];
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_158);
    }
    FUN_140e87930(uVar7,DAT_1419ffe48,0x80000000,&local_138);
  }
  local_118 = 0x5fc;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  ppuVar10 = (undefined1 **)((ulonglong)ppdVar9 & 0xffffffffffffff00);
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar7,DAT_1419ffe48,0x80000000,&local_148,uVar8,ppuVar10);
  iVar5 = 0;
  if ((iStack_13c == 2) && (local_148 != 0)) {
    iVar5 = *(int *)(local_148 + 0x24);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_17c = 0;
  local_188 = (double)(iVar5 + -1);
  bVar1 = true;
  do {
    if (!bVar1) {
      local_118 = 0x5fc;
      uVar3 = local_17c & 0xffffff;
      if (uVar3 == 0) {
LAB_14061b8f8:
        local_188 = local_188 + -1.0;
      }
      else if (uVar3 == 1) {
        local_188 = (double)FUN_140e4b060(&local_188);
        local_188 = local_188 - 1.0;
        local_17c = 0;
      }
      else if (uVar3 == 7) {
        local_188 = (double)CONCAT44(local_188._4_4_,local_188._0_4_ + -1);
      }
      else if (uVar3 == 10) {
        local_188 = (double)((longlong)local_188 + -1);
      }
      else {
        if (uVar3 == 0xd) {
          local_17c = 0;
          goto LAB_14061b8f8;
        }
        FUN_140042910(&DAT_14172c450,&local_188,&local_188);
      }
    }
    bVar1 = false;
    local_b4 = 0;
    local_c0 = 0;
    uVar3 = FUN_140e851f0(&local_188,&local_c0,DAT_141955260,1);
    if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    if (0x7fffffff < uVar3) {
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)iStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      _eh_vector_destructor_iterator_(local_100,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_128;
      return param_3;
    }
    local_118 = 0x5fe;
    local_a4 = 0xf;
    local_b0 = 0x1000000000000ee;
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_b0,DAT_141a1f170,0x80000000,&local_110,uVar8,uVar11);
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140162d40(&local_110,5);
    local_94 = 0xf;
    local_a0 = 0x1000000000000ee;
    FUN_140e87930(&local_a0,DAT_141a1f170,0x80000000,&local_110);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_118 = 0x5ff;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar4 = FUN_140e4a740(&local_188);
    uVar11 = uVar11 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419ffe48,uVar4,&local_178,uVar8,uVar11);
    uVar3 = local_16c & 0xffffff;
    if (uVar3 == 0) {
LAB_14061baa3:
      local_178 = local_178 + -1.0;
    }
    else if (uVar3 == 1) {
      local_178 = (double)FUN_140e4b060(&local_178);
      local_178 = local_178 - 1.0;
      local_16c = 0;
    }
    else if (uVar3 == 7) {
      local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + -1);
    }
    else if (uVar3 == 10) {
      local_178 = (double)((longlong)local_178 + -1);
    }
    else {
      if (uVar3 == 0xd) {
        local_16c = 0;
        goto LAB_14061baa3;
      }
      FUN_140042910(&DAT_14172c450,&local_178,&local_178);
    }
    uVar4 = FUN_140e4a740(&local_188);
    FUN_140e87930(uVar7,DAT_1419ffe48,uVar4,&local_178);
    local_118 = 0x601;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar4 = FUN_140e4a740(&local_188);
    ppuVar10 = (undefined1 **)(uVar11 & 0xffffffffffffff00);
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419ffe48,uVar4,&local_d0,uVar8,ppuVar10);
    dStack_150 = (double)((ulonglong)dStack_150 & 0xffffffff);
    local_158 = 0.0;
    iVar5 = FUN_140e851f0(&local_d0,&local_158,DAT_141955260,1);
    if ((1 << ((byte)((ulonglong)dStack_150 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar5 != -2 && iVar5 < 1) {
      local_118 = 0x602;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      uVar8 = uVar8 & 0xffffffffffffff00;
      FUN_140e87440(uVar7,DAT_1419ffe48,0x80000000,&local_148,uVar8,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      uVar4 = (undefined4)(uVar8 >> 0x20);
      uStack_60 = CONCAT44(iStack_13c,uStack_140);
      local_68 = local_148;
      if ((1 << (local_100[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_100);
      }
      FUN_140041b80(local_100,&local_68);
      local_80 = local_100;
      local_78 = &local_188;
      local_68 = _DAT_1419e6aa0;
      uStack_60 = uRam00000001419e6aa8;
      if ((1 << (local_e0[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_68);
      local_70 = local_e0;
      ppuVar10 = &local_80;
      uVar8 = CONCAT44(uVar4,DAT_1419fd808);
      FUN_140e634e0(param_1,param_2,&local_168,3,uVar8,ppuVar10);
    }
  } while( true );
}


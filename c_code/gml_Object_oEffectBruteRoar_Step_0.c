// gml_Object_oEffectBruteRoar_Step_0 @ 0x14091ea30

void gml_Object_oEffectBruteRoar_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe10;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  uint local_114;
  undefined8 local_110;
  uint local_104;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_1b0 = "gml_Object_oDripZone_Step_0";
  local_1a8 = 0;
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1a8 = 2;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_1cc = 0;
  local_1d8 = 0.0;
  iVar2 = FUN_140e851f0(uVar4,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_1a8 = 4;
    pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1d8a0);
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    uStack_1cc = *(uint *)((longlong)pdVar5 + 0xc);
    uStack_1d0 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
      local_1d8 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_1d8,pdVar5);
    }
    local_res18 = 1;
    uStack_1dc = 0;
    local_1e8 = (longlong *)0x3fb999999999999a;
    FUN_140042560(&local_1d8,&local_1e8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uVar4 = FUN_140e4a8b0(pdVar5);
    dVar10 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_1d8);
    }
    uVar4 = FUN_140e78f40((longlong)dVar10,uVar4);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = uVar4;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1a8 = 6;
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a0a808,0x80000000,&local_110,uVar12,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a0a798,0x80000000,&local_120,uVar12,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((local_114 & 0xffffff) == 0) {
      uVar7 = (undefined4)local_120;
    }
    else {
      uVar7 = FUN_140e4b060(&local_120);
    }
    if ((local_104 & 0xffffff) == 0) {
      uVar8 = (undefined4)local_110;
    }
    else {
      uVar8 = FUN_140e4b060(&local_110);
    }
    uVar4 = FUN_140e794b0(uVar8,uVar7);
    if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_160);
    }
    local_154 = 0;
    local_1a8 = 7;
    uStack_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_160 = uVar4;
    FUN_140e87440(&local_1e8,DAT_141a0a788,0x80000000,&local_130,uVar12,in_stack_fffffffffffffe10);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 6;
    local_1e8 = local_res8;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_141a101f8,0x80000000,&local_140,uVar12,
                  in_stack_fffffffffffffe10 & 0xffffffffffffff00);
    uVar7 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((local_134 & 0xffffff) == 0) {
      uVar8 = (undefined4)local_140;
    }
    else {
      uVar8 = FUN_140e4b060(&local_140);
    }
    if ((local_124 & 0xffffff) == 0) {
      uVar9 = (undefined4)local_130;
    }
    else {
      uVar9 = FUN_140e4b060(&local_130);
    }
    uVar4 = FUN_140e794b0(uVar9,uVar8);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_164 = 0;
    local_1a8 = 8;
    local_170 = uVar4;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efb88);
    local_b8 = &local_160;
    local_b0 = &local_170;
    if (puVar6 != &local_d8) {
      local_1e8 = (longlong *)*puVar6;
      uStack_1e0 = *(undefined4 *)(puVar6 + 1);
      uStack_1dc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1e8);
    }
    local_a8 = &local_d8;
    uStack_1dc = 0xf;
    local_1e8 = (longlong *)0x10000000000012d;
    local_1d8 = 7.291122019556885e-304;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    local_a0 = local_c8;
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,CONCAT44(uVar7,DAT_141a0a7c8),
                          &local_b8);
    iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_1a8 = 10;
        uStack_1dc = 0xf;
        local_1e8 = (longlong *)0x10000010000025f;
        local_1d8 = 7.291128972913188e-304;
        uStack_1d0 = uStack_1e0;
        uStack_1cc = 0xf;
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        FUN_140041b80(&local_150,&local_1d8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_150);
        local_1a8 = 0xb;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_174 = 0;
        local_180 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_180);
        local_1a8 = 0xc;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_184 = 0;
        local_190 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_190);
        local_1a8 = 0xe;
        uVar4 = FUN_140e79480(0x33333333);
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        local_194 = 0;
        local_1a0 = uVar4;
        FUN_140e86fa0(local_res8,DAT_1419fdde8,0x80000000,&local_1a0);
        cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_98,&local_res8,&local_res10);
    if (local_88 != 0) {
      FUN_140e4cd60();
    }
  }
  local_1a8 = 0x14;
  uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400462a0(uVar4,uVar3);
  FUN_140e60910(1);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return;
}


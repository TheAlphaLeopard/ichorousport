// gml_Script_anon_27077_DefineTrinkets_TRINKETSINIT @ 0x1406037e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_27077_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  double dVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong in_stack_fffffffffffffdf0;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b4;
  double local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
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
  uint local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  byte local_114;
  undefined1 local_110 [12];
  byte local_104;
  double local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  
  local_1d0 = "gml_Script_anon@26086@DefineTrinkets@TRINKETSINIT";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 0x3e1;
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_120,0x10,2,FUN_1400424d0,FUN_140041b30);
  bVar10 = 0xff;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_194 = 0xffffff;
  local_1a0 = 0;
  uStack_8c = 0xffffff;
  local_98 = (undefined1 *)0x0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_f4 = 0xffffff;
  local_100 = 0.0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  uStack_ac = 0xffffff;
  local_b8 = (undefined1 *)0x0;
  local_184 = 0xffffff;
  local_190 = 0;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_78 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 0x3e2;
  puVar11 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(puVar9,DAT_1419f5a88,0x80000000,&local_88,uVar14,in_stack_fffffffffffffdf0);
  local_208 = (undefined1 *)local_88;
  uStack_200 = CONCAT44(uStack_7c,uStack_80);
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  FUN_140041b80(&local_1a0,&local_208);
  local_1c8 = 0x3e3;
  if (0 < param_4) {
    puVar11 = (undefined8 *)*param_5;
  }
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(puVar11,DAT_141a1f440,0x80000000,&local_98,uVar14,
                in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar14 >> 0x20);
  local_208 = local_98;
  uStack_200 = CONCAT44(uStack_8c,uStack_90);
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  FUN_140041b80(&local_1c0,&local_208);
  local_1c8 = 0x3e4;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_140 = &local_1c0;
  uVar15 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar15,&local_140);
  uVar12 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar4 = FUN_140e491e0(uVar8);
  if (cVar4 == '\0') {
    local_1c8 = 0x3e4;
  }
  else {
    local_1c8 = 0x3e5;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    local_140 = &local_1a0;
    local_208 = (undefined1 *)CONCAT44(uRam0000000141dd4e8c,_DAT_141dd4e88);
    uStack_200 = CONCAT44(DAT_141dd4e94,uRam0000000141dd4e90);
    if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_110);
    }
    FUN_140041b80(local_110,&local_208);
    local_138 = local_110;
    ppuVar16 = &local_140;
    uVar14 = CONCAT44(uVar12,DAT_1419fcba8);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar14,ppuVar16);
    cVar4 = FUN_140e491e0(uVar8);
    if (cVar4 == '\0') {
      local_1c8 = 0x3e5;
    }
    else {
      local_1c8 = 0x3e6;
      uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(&local_1a0,DAT_1419ff958,0x80000000,&local_a8,uVar14,uVar17);
      cVar4 = FUN_140e491e0(&local_a8);
      if (cVar4 == '\0') {
        local_1c8 = 1000;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_1a0,DAT_1419ff828,0x80000000,&local_160,uVar14,uVar17);
        uStack_1dc = local_154;
        uStack_1e0 = local_158;
        if ((1 << ((byte)local_154 & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_160;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_160);
        }
        local_1a4 = 0;
        local_1b0 = 160.0;
        FUN_140046500(&local_1e8,&local_1b0);
        if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        if ((uStack_1dc & 0xffffff) == 0) {
          uVar12 = (undefined4)local_1e8;
        }
        else {
          uVar12 = FUN_140e4b060(&local_1e8);
        }
        dVar1 = (double)FUN_140e78ec0(uVar12,0,0x3ff0000000000000);
        local_100 = dVar1 * 2.5 + 1.0;
        bVar10 = 0;
        local_f4 = 0;
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1c8 = 0x3e9;
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c0,DAT_1419f62b8,0x80000000,&local_170,uVar14,uVar17);
        uVar17 = uVar17 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_1a0,DAT_141a0a7d8,0x80000000,&local_180,uVar14,uVar17);
        local_1a4 = 0;
        local_1a8 = local_f8;
        local_1b0 = local_100;
        uStack_200._4_4_ = 7;
        local_208 = (undefined1 *)CONCAT44(local_208._4_4_,1);
        FUN_1400462a0(&local_1b0,&local_208);
        if ((1 << ((byte)uStack_200._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_144 = local_174;
        local_148 = local_178;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) == 0) {
          local_150 = local_180;
        }
        else {
          FUN_1400419b0(&local_150,&local_180);
        }
        FUN_140042560(&local_150,&local_1b0);
        uStack_1dc = local_164;
        uStack_1e0 = local_168;
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
          local_1e8 = local_170;
        }
        else {
          FUN_1400419b0(&local_1e8,&local_170);
        }
        FUN_1400460e0(&local_1e8,&local_150);
        local_208 = (undefined1 *)local_1e8;
        uStack_200 = CONCAT44(uStack_1dc,uStack_1e0);
        FUN_140041b80(&local_b8,&local_208);
        if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        puVar3 = local_b8;
        local_1c8 = 0x3eb;
        uVar2 = CONCAT44(uStack_ac,uStack_b0);
        local_208 = local_b8;
        uStack_200 = uVar2;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        FUN_140041b80(&local_190,&local_208);
        local_1c8 = 0x3ec;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(local_78,DAT_1419ffd08,0x80000000,&local_c8,uVar14,uVar17 & 0xffffffffffffff00
                     );
        uVar12 = (undefined4)(uVar14 >> 0x20);
        if (puVar7 != &local_120) {
          local_208 = (undefined1 *)*puVar7;
          uStack_200 = puVar7[1];
          if ((1 << (local_114 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_120);
          }
          FUN_140041b80(&local_120,&local_208);
        }
        local_140 = &local_120;
        local_208 = (undefined1 *)local_c8;
        uStack_200 = CONCAT44(uStack_bc,uStack_c0);
        if ((1 << (local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_110);
        }
        FUN_140041b80(local_110,&local_208);
        local_138 = local_110;
        ppuVar16 = &local_140;
        uVar14 = CONCAT44(uVar12,DAT_141a573f0);
        uVar8 = FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar14,ppuVar16);
        uStack_200 = uStack_200 & 0xffffffff;
        local_208 = &DAT_bff0000000000000;
        iVar5 = FUN_140e851f0(uVar8,&local_208,DAT_141955260,0);
        if ((1 << ((byte)(uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if (iVar5 != 0) {
          local_1c8 = 0x3ed;
          uStack_200 = uStack_200 & 0xffffffff;
          local_208 = (undefined1 *)0x3feccccccccccccd;
          FUN_140042560(&local_190,&local_208);
          if ((1 << ((byte)(uStack_200 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
        }
        local_1c8 = 0x3ee;
        uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c0,DAT_141a1f170,0x80000000,&local_e0,uVar14,uVar17);
        FUN_1400462a0(&local_190,&local_e0);
        local_1c8 = 0x3f0;
        FUN_140e87440(&local_1c0,DAT_141a1f090,0x80000000,&local_f0,uVar14 & 0xffffffffffffff00,
                      uVar17 & 0xffffffffffffff00);
        uVar6 = FUN_140e851f0(&local_190,&local_f0,DAT_141955260,1);
        if (uVar6 < 0x80000000) {
          local_1c8 = 0x3f1;
          local_208 = puVar3;
          uStack_200 = uVar2;
          if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_130);
          }
          FUN_140041b80(&local_130,&local_208);
          FUN_140e87930(&local_1c0,DAT_1419f62b8,0x80000000,&local_130);
        }
      }
      else {
        local_1c8 = 0x3e6;
      }
    }
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << (bVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_120,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}


// gml_Object_oSplitAcidWave_Step_0 @ 0x140d9f3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSplitAcidWave_Step_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar13;
  ulonglong in_stack_fffffffffffffe00;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  longlong *local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  longlong *local_190;
  undefined4 local_188;
  uint local_184;
  longlong *local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined4 local_78 [3];
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_1a0 = "gml_Object_oSplitAcidRain_Step_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_138,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_184 = 0xffffff;
  local_190 = (longlong *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  iVar10 = 2;
  local_198 = 2;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57f90);
  uStack_1ec = 0;
  local_1f8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar5,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar2 == 0) {
    local_198 = 4;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uStack_1ec = 6;
    local_1f8 = local_res8;
    uVar9 = (ulonglong)pcVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_178,uVar9,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1c8 = local_178;
    uStack_1c0 = uStack_170;
    uStack_1bc = uStack_16c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1c8);
    local_98 = local_138;
    local_1c8 = (longlong *)CONCAT44(uRam00000001419edf24,_DAT_1419edf20);
    uStack_1c0 = uRam00000001419edf28;
    uStack_1bc = uRam00000001419edf2c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
    local_1c8 = (longlong *)CONCAT44(uRam00000001419edf34,_DAT_1419edf30);
    uStack_1c0 = uRam00000001419edf38;
    uStack_1bc = uRam00000001419edf3c;
    local_90 = local_128;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_88 = local_118;
    uVar5 = CONCAT44(uVar11,DAT_141a00c58);
    puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1d8,3,uVar5,&local_98);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar6 != &local_158) {
      local_1c8 = (longlong *)*puVar6;
      uStack_1c0 = *(undefined4 *)(puVar6 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1c8);
    }
    FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_158);
    local_198 = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
    local_1c8 = (longlong *)CONCAT44(uRam0000000141dc7784,_DAT_141dc7780);
    uStack_1c0 = uRam0000000141dc7788;
    uStack_1bc = uRam0000000141dc778c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1c8);
    local_98 = local_138;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_1d8,1,CONCAT44(uVar11,DAT_141a0a0d8),
                           &local_98);
    uStack_1ec = *(uint *)((longlong)puVar6 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar6);
    }
    local_res18 = 1;
    local_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,2);
    FUN_140042560(&local_1f8,&local_1b8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uVar3 = FUN_140e851f0(uVar5,&local_1f8,DAT_141955260,1);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (uVar3 < 0x80000000) {
      local_198 = 7;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57f90);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x3ff0000000000000;
      local_198 = 8;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      *puVar6 = 0x4008000000000000;
      local_198 = 9;
      FUN_140e85f80(local_res8,DAT_141a00d18,0x80000000,&local_190);
      uStack_1ec = local_184;
      uStack_1f0 = local_188;
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_190;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_190);
      }
      local_res18 = 2;
      local_1dc = 0;
      local_1e8 = (longlong *)0x3fe4cccccccccccd;
      FUN_140042560(&local_1f8,&local_1e8);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1ac = local_184;
      local_1b0 = local_188;
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) == 0) {
        local_1b8 = local_190;
      }
      else {
        FUN_1400419b0(&local_1b8,&local_190);
      }
      local_res18 = 6;
      local_1dc = 0;
      local_1e8 = (longlong *)0x3fd6666666666666;
      FUN_140042560(&local_1b8,&local_1e8);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      plVar12 = local_1f8;
      if ((uStack_1ec & 0xffffff) != 0) {
        plVar12 = (longlong *)FUN_140e4b060(&local_1f8);
      }
      if ((local_1ac & 0xffffff) == 0) {
        uVar11 = SUB84(local_1b8,0);
      }
      else {
        uVar11 = FUN_140e4b060(&local_1b8);
      }
      uVar5 = FUN_140e794b0(uVar11,plVar12);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_ac = 0;
      local_res18 = 2;
      local_b8 = uVar5;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_b8);
    }
    local_198 = 0xb;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    FUN_140e609c0(local_res8);
    FUN_1400460e0(uVar5,uVar4);
    FUN_140e60910(1);
    local_198 = 0xd;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    uVar4 = 0x4056800000000000;
  }
  else {
    local_198 = 0x12;
    uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
    FUN_140162c50(uVar4,0x3fc999999999999a);
    local_198 = 0x13;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a012b8);
    if (puVar6 != &local_c8) {
      local_1c8 = (longlong *)*puVar6;
      uStack_1c0 = *(undefined4 *)(puVar6 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1c8);
    }
    FUN_140e86fa0(local_res8,DAT_141a1b910,0x80000000,&local_c8);
    local_198 = 0x14;
    local_1dc = 6;
    local_1e8 = local_res8;
    in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
    uVar9 = (ulonglong)pcVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_178,uVar9,in_stack_fffffffffffffe00);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140e85f80(local_res8,DAT_141a00c48,0x80000000,&local_d8);
    uStack_1ec = local_cc;
    uStack_1f0 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_d8);
    }
    local_res18 = 8;
    local_1dc = 0;
    local_1e8 = (longlong *)0x4000000000000000;
    FUN_140046500(&local_1f8,&local_1e8);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    iVar2 = FUN_140e851f0(&local_178,&local_1f8,DAT_141955260,1);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (0 < iVar2) {
      local_198 = 0x16;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
      local_1dc = 6;
      local_1e8 = local_res8;
      in_stack_fffffffffffffe00 = in_stack_fffffffffffffe00 & 0xffffffffffffff00;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_a8,uVar9,in_stack_fffffffffffffe00);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1dc = 6;
      local_1e8 = local_res8;
      uVar9 = uVar9 & 0xffffffffffffff00;
      FUN_140e87440(&local_1e8,DAT_1419fe158,0x80000000,&local_178,uVar9,
                    in_stack_fffffffffffffe00 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1c8 = (longlong *)local_a8;
      uStack_1c0 = uStack_a0;
      uStack_1bc = uStack_9c;
      if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1c8);
      local_98 = local_138;
      uStack_1ec = uStack_16c;
      uStack_1f0 = uStack_170;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
        local_1f8 = local_178;
      }
      else {
        FUN_1400419b0(&local_1f8,&local_178);
      }
      local_res18 = 0x10;
      FUN_1400460e0(&local_1f8,uVar4);
      local_1c8 = local_1f8;
      uStack_1c0 = uStack_1f0;
      uStack_1bc = uStack_1ec;
      if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1c8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_15c = 0xf;
      local_168 = (longlong *)0x100000000000149;
      local_1c8 = (longlong *)0x100000000000149;
      uStack_1c0 = uStack_160;
      uStack_1bc = 0xf;
      local_90 = local_128;
      if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1c8);
      local_88 = local_118;
      ppuVar14 = &local_98;
      uVar9 = CONCAT44(uVar11,DAT_141a12628);
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1d8,3,uVar9,ppuVar14);
      cVar1 = FUN_140e491e0(uVar4);
      if (cVar1 != '\0') {
        local_198 = 0x18;
        FUN_140edd0e0(local_res8,local_res10,0,0);
        local_198 = 0x19;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        uStack_ec = 0;
        local_f8 = 0x3ff0000000000000;
        do {
          iVar10 = iVar10 + -1;
          local_198 = 0x1c;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          local_1dc = 6;
          local_1e8 = local_res8;
          uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_1e8,DAT_1419fe0e8,0x80000000,&local_a8,uVar9,uVar15);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1ac = 6;
          local_1b8 = local_res8;
          uVar9 = uVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_1b8,DAT_141a101f8,0x80000000,&local_e8,uVar9,
                        uVar15 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar9 >> 0x20);
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_148 = (undefined4)local_a8;
          uStack_144 = local_a8._4_4_;
          uStack_140 = uStack_a0;
          uStack_13c = uStack_9c;
          if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_148);
          local_98 = local_138;
          uStack_1ec = local_dc;
          uStack_1f0 = local_e0;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
            local_1f8 = local_e8;
          }
          else {
            FUN_1400419b0(&local_1f8,&local_e8);
          }
          local_res18 = 0x20;
          local_6c = 7;
          local_78[0] = 5;
          FUN_1400460e0(&local_1f8,local_78);
          if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          local_148 = (undefined4)local_1f8;
          uStack_144 = local_1f8._4_4_;
          uStack_140 = uStack_1f0;
          uStack_13c = uStack_1ec;
          if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_148);
          local_res18 = 0;
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          local_148 = _DAT_141ddb968;
          uStack_144 = uRam0000000141ddb96c;
          uStack_140 = uRam0000000141ddb970;
          uStack_13c = DAT_141ddb974;
          local_90 = local_128;
          if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_148);
          local_88 = local_118;
          uStack_1bc = 0xf;
          local_1c8 = (longlong *)0x100000000000125;
          local_148 = 0x125;
          uStack_144 = 0x1000000;
          uStack_140 = uStack_1c0;
          uStack_13c = 0xf;
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_148);
          local_80 = local_108;
          ppuVar14 = &local_98;
          uVar9 = CONCAT44(uVar11,DAT_141a0a7c8);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1d8,4,uVar9,ppuVar14);
          iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar4);
          if (0 < iVar2) {
            do {
              local_198 = 0x1e;
              puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
              FUN_140e609c0(local_res8);
              if (&local_f8 != puVar6) {
                local_148 = (undefined4)local_f8;
                uStack_144 = local_f8._4_4_;
                uStack_140 = uStack_f0;
                uStack_13c = uStack_ec;
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                FUN_140041b80(puVar6,&local_148);
              }
              FUN_140e60910(1);
              local_198 = 0x1f;
              puVar7 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
              puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
              FUN_140e609c0(local_res8);
              if (puVar7 != puVar8) {
                local_148 = *puVar7;
                uStack_144 = puVar7[1];
                uStack_140 = puVar7[2];
                uStack_13c = puVar7[3];
                if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar8);
                }
                FUN_140041b80(puVar8,&local_148);
              }
              FUN_140e60910(1);
              cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_68,&local_res8,&local_res10);
          local_198 = 0x23;
          uStack_15c = 0;
          local_168 = (longlong *)&DAT_bff0000000000000;
          FUN_140042560(&local_f8,&local_168);
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          if (local_58 != 0) {
            FUN_140e4cd60();
          }
        } while (0 < iVar10);
      }
    }
    local_198 = 0x29;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7f8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    uVar4 = 0x4070e00000000000;
  }
  *puVar6 = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  local_198 = 0x2c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  uVar9 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
  uVar15 = 0;
  FUN_140e63610(local_res8,local_res10,&local_1d8,0,uVar9,0);
  local_198 = 0x2e;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
  uStack_15c = 6;
  local_168 = local_res8;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_158,uVar9 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_1400460e0(&local_158,uVar4);
  FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_158);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}


// gml_Object_oAcidGlob_Destroy_0 @ 0x14067d6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oAcidGlob_Destroy_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_174;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
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
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_190 = "gml_Object_oAcidBubbleUp_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = (longlong *)0x0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_188 = 1;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x4028000000000000;
  uVar2 = FUN_140e851f0(uVar5,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (uVar2 < 0x80000000) {
    local_188 = 3;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_1cc = 6;
    local_1d8 = local_res8;
    in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
    uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_148,uVar8,in_stack_fffffffffffffe20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 6;
    local_1d8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_1b8,uVar8,
                  in_stack_fffffffffffffe20 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1c8 = local_148;
    uStack_1c0 = uStack_140;
    uStack_1bc = uStack_13c;
    if ((1 << ((byte)_local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1c8);
    local_a8 = local_f8;
    uStack_1cc = local_1ac;
    uStack_1d0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1b8);
    }
    local_res18 = 1;
    uStack_15c = 7;
    local_168 = (longlong *)CONCAT44(local_168._4_4_,8);
    FUN_1400460e0(&local_1d8,&local_168);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_1c8 = local_1d8;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = uStack_1cc;
    if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1c8);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_a0 = local_e8;
    uStack_1bc = 0xf;
    local_1c8 = (longlong *)0x100000000000150;
    local_168 = (longlong *)0x100000000000150;
    uStack_160 = uStack_1c0;
    uStack_15c = 0xf;
    if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_168);
    local_98 = local_d8;
    ppuVar11 = &local_a8;
    uVar8 = CONCAT44(uVar9,DAT_141a10448);
    puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,3,uVar8,ppuVar11);
    if (puVar6 != &local_118) {
      local_1c8 = (longlong *)*puVar6;
      uStack_1c0 = *(undefined4 *)(puVar6 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1c8);
    }
    local_188 = 4;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    local_174 = 0;
    local_180 = 0;
    local_188 = 5;
    iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_118);
    if (0 < iVar3) {
      do {
        local_188 = 7;
        uStack_15c = 6;
        local_168 = local_res8;
        uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_1b8,uVar8,uVar10);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uStack_1bc = 6;
        local_1c8 = local_res8;
        ppuVar11 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
        uVar8 = uVar8 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c8,DAT_1419fec88,0x80000000,&local_b8,uVar8,ppuVar11);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uStack_1cc = local_1ac;
        uStack_1d0 = local_1b0;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
          local_1d8 = local_1b8;
        }
        else {
          FUN_1400419b0(&local_1d8,&local_1b8);
        }
        local_res18 = 2;
        FUN_1400462a0(&local_1d8,&local_b8);
        local_158 = (undefined4)local_1d8;
        uStack_154 = local_1d8._4_4_;
        uStack_150 = uStack_1d0;
        uStack_14c = uStack_1cc;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_158);
        local_res18 = 0;
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    local_188 = 10;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_1bc = 6;
    local_1c8 = local_res8;
    uVar10 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_148,uVar8,uVar10);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uStack_1bc = 6;
    local_1c8 = local_res8;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_1b8,uVar8,uVar10 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar5 = FUN_140e794b0(0,0x4018000000000000);
    uStack_1cc = uStack_13c;
    uStack_1d0 = uStack_140;
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_148;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_148);
    }
    local_res18 = 4;
    FUN_140162c50(&local_1d8,uVar5);
    local_158 = (undefined4)local_1d8;
    uStack_154 = local_1d8._4_4_;
    uStack_150 = uStack_1d0;
    uStack_14c = uStack_1cc;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_158);
    local_res18 = 0;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_a8 = local_f8;
    uStack_1cc = local_1ac;
    uStack_1d0 = local_1b0;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1b8);
    }
    local_res18 = 8;
    FUN_1400460e0(&local_1d8,&local_180);
    local_158 = (undefined4)local_1d8;
    uStack_154 = local_1d8._4_4_;
    uStack_150 = uStack_1d0;
    uStack_14c = uStack_1cc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_158);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_a0 = local_e8;
    local_158 = _DAT_141dd5108;
    uStack_154 = uRam0000000141dd510c;
    uStack_150 = uRam0000000141dd5110;
    uStack_14c = DAT_141dd5114;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_158);
    local_98 = local_d8;
    uStack_1bc = 0xf;
    local_1c8 = (longlong *)0x10000000000012d;
    local_158 = 0x12d;
    uStack_154 = 0x1000000;
    uStack_150 = uStack_1c0;
    uStack_14c = 0xf;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_158);
    local_90 = local_c8;
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,CONCAT44(uVar9,DAT_141a0a7c8),
                          &local_a8);
    iVar3 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar5);
    if (0 < iVar3) {
      do {
        local_188 = 0xc;
        uStack_1bc = 0xf;
        local_1c8 = (longlong *)0x10000010000025e;
        local_158 = 0x25e;
        uStack_154 = 0x1000001;
        uStack_150 = uStack_1c0;
        uStack_14c = 0xf;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_158);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_108);
        local_188 = 0xd;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_128);
        local_188 = 0xe;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_12c = 0;
        local_138 = 0x3ff4cccccccccccd;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_138);
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    local_188 = 0x11;
    uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01aa8);
    FUN_1400bdd80(uVar5);
    local_188 = 0x12;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    if (local_78 != 0) {
      FUN_140e4cd60();
      local_78 = 0;
    }
    if (local_58 != 0) {
      FUN_140e4cd60();
    }
  }
  local_188 = 0x15;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01aa8);
  uStack_1bc = 0;
  local_1c8 = (longlong *)0x0;
  iVar3 = FUN_140e851f0(uVar5,&local_1c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar3 != -2 && iVar3 < 1) {
    local_188 = 0x16;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  local_188 = 0x19;
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar5,uVar4);
  FUN_140e60910(1);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}


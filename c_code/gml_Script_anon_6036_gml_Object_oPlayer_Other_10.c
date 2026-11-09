// gml_Script_anon_6036_gml_Object_oPlayer_Other_10 @ 0x140c67d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_6036_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  ulonglong in_stack_fffffffffffffe20;
  ulonglong uVar13;
  undefined1 **ppuVar14;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_154;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
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
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_190 = "gml_Script_anon@4607@gml_Object_oPlayer_Other_10";
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  local_188 = 0xb1;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_148,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_4c = 0xffffff;
  local_58 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_19c = 0xffffff;
  local_1a8 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_154 = 0xffffff;
  local_160 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_188 = 0xb2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar3,DAT_1419f5df8,0x80000000,&local_58,(ulonglong)pcVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar13 = 0;
  puVar5 = &local_58;
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,param_2,&local_1b8,0,puVar5,0);
  if (puVar4 != &local_c8) {
    local_1d8 = (longlong *)*puVar4;
    uStack_1d0 = *(undefined4 *)(puVar4 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1d8);
  }
  local_188 = 0xb3;
  uStack_1bc = DAT_141ddaaa4;
  uStack_1c0 = DAT_141ddaaa0;
  if ((1 << ((byte)DAT_141ddaaa4 & 0x1f) & 0x46U) == 0) {
    local_1c8 = DAT_141ddaa98;
  }
  else {
    FUN_1400419b0(&local_1c8,&DAT_141ddaa98);
  }
  iVar2 = FUN_140e851f0(&local_c8,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar2 == 0) {
    bVar6 = true;
  }
  else {
    uStack_1bc = DAT_141ddaae4;
    uStack_1c0 = DAT_141ddaae0;
    if ((1 << ((byte)DAT_141ddaae4 & 0x1f) & 0x46U) == 0) {
      local_1c8 = DAT_141ddaad8;
    }
    else {
      FUN_1400419b0(&local_1c8,&DAT_141ddaad8);
    }
    iVar2 = FUN_140e851f0(&local_c8,&local_1c8,DAT_141955260,0);
    bVar6 = iVar2 == 0;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0xd;
  uVar7 = 0x3ff00000;
  if (bVar6) {
    local_d8 = 0x3ff0000000000000;
  }
  else {
    local_d8 = 0;
  }
  local_188 = 0xb5;
  uStack_1bc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  uVar9 = (ulonglong)puVar5 & 0xffffffffffffff00;
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419f5c58,0x80000000,&local_a8,uVar9,uVar13);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1d8 = (longlong *)local_a8;
  uStack_1d0 = uStack_a0;
  uStack_1cc = uStack_9c;
  FUN_140041b80(&local_68,&local_1d8);
  local_188 = 0xb6;
  uStack_1bc = 6;
  ppuVar14 = (undefined1 **)(uVar13 & 0xffffffffffffff00);
  ppuVar10 = (undefined1 **)(uVar9 & 0xffffffffffffff00);
  local_1c8 = param_1;
  FUN_140e87440(&local_1c8,DAT_1419f5c58,0x80000000,&local_a8,ppuVar10,ppuVar14);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = 0xf;
  local_1c8 = (longlong *)0x100000100000411;
  iVar2 = FUN_140e851f0(&local_a8,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar2 == 0) {
    local_188 = 0xb6;
    uStack_1cc = 0xf;
    local_1d8 = (longlong *)0x1000001000003f0;
    local_1c8 = (longlong *)0x1000001000003f0;
    uStack_1c0 = uStack_1d0;
    uStack_1bc = 0xf;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_1c8);
    FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_170);
  }
  local_188 = 0xb8;
  cVar1 = FUN_140e491e0(&local_d8);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ed0b4,_DAT_1419ed0b0);
    uStack_1d0 = uRam00000001419ed0b8;
    uStack_1cc = uRam00000001419ed0bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_1d8);
    local_98 = local_148;
    local_1d8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1d0 = DAT_1419df7b8;
    uStack_1cc = DAT_1419df7bc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1d8);
    local_90 = local_138;
    ppuVar10 = &local_98;
    uVar3 = gml_Script_InputPressedMany(param_1,param_2,&local_1b8,2,ppuVar10);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_188 = 0xba;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f84b8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f81b8);
      FUN_140e609c0(param_1);
      if (puVar5 != puVar4) {
        local_1d8 = (longlong *)*puVar5;
        uStack_1d0 = *(undefined4 *)(puVar5 + 1);
        uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_1d8);
      }
      FUN_140e60910(1);
      local_188 = 0xbc;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      local_180 = 0;
      local_178 = 0;
      local_174 = 5;
      uStack_1bc = 6;
      uVar9 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar13 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar13,uVar9);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = 6;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_1c8 = param_1;
      FUN_140e87440(&local_1c8,DAT_1419fe158,0x80000000,&local_e8,uVar13,uVar9 & 0xffffffffffffff00)
      ;
      uVar12 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      uStack_1bc = local_19c;
      uStack_1c0 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1a8);
      }
      uStack_1cc = 7;
      local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
      FUN_1400460e0(&local_1c8,&local_1d8);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_98 = local_148;
      local_1d8 = (longlong *)local_e8;
      uStack_1d0 = uStack_e0;
      uStack_1cc = uStack_dc;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1d8);
      local_90 = local_138;
      uStack_1cc = 0xf;
      local_1d8 = (longlong *)0x100000000000149;
      local_1c8 = (longlong *)0x100000000000149;
      uStack_1c0 = uStack_1d0;
      uStack_1bc = 0xf;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1c8);
      local_88 = local_128;
      uStack_1bc = local_19c;
      uStack_1c0 = local_1a0;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_1a8;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_1a8);
      }
      uStack_1cc = 7;
      local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
      FUN_1400462a0(&local_1c8,&local_1d8);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_80 = local_118;
      local_1d8 = (longlong *)local_e8;
      uStack_1d0 = uStack_e0;
      uStack_1cc = uStack_dc;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1d8);
      uStack_1cc = 0xf;
      local_1d8 = (longlong *)0x100000000000149;
      local_1c8 = (longlong *)0x100000000000149;
      uStack_1c0 = uStack_1d0;
      uStack_1bc = 0xf;
      local_78 = local_108;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1c8);
      local_70 = local_f8;
      uVar11 = CONCAT44(uVar12,DAT_141a12628);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_180,3,uVar11,&local_80);
      ppuVar14 = &local_98;
      ppuVar10 = (undefined1 **)CONCAT44((int)((ulonglong)uVar11 >> 0x20),DAT_141a12628);
      puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,3,ppuVar10,ppuVar14);
      uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_1c0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
        local_1c8 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_1c8,puVar5);
      }
      FUN_1400462a0(&local_1c8,uVar3);
      local_1d8 = local_1c8;
      uStack_1d0 = uStack_1c0;
      uStack_1cc = uStack_1bc;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      FUN_140041b80(&local_160,&local_1d8);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_188 = 0xbe;
      uStack_1cc = 0;
      local_1d8 = (longlong *)0x0;
      iVar2 = FUN_140e851f0(&local_160,&local_1d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if (iVar2 != 0) {
        local_188 = 0xc0;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b38);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_188 = 0xc1;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f81b8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
        local_188 = 0xc2;
        local_1d8 = (longlong *)local_68;
        uStack_1d0 = uStack_60;
        uStack_1cc = uStack_5c;
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1d8);
        FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_170);
        local_188 = 0xc3;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_b8,
                      (ulonglong)ppuVar10 & 0xffffffffffffff00,
                      (ulonglong)ppuVar14 & 0xffffffffffffff00);
        local_1d8 = (longlong *)CONCAT44(uRam0000000141ddaa5c,_DAT_141ddaa58);
        uStack_1d0 = uRam0000000141ddaa60;
        uStack_1cc = DAT_141ddaa64;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1d8);
        local_98 = local_148;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,param_2,&local_1b8,1,&local_b8,&local_98);
        local_188 = 0xc4;
        goto LAB_140c690bc;
      }
    }
  }
  local_188 = 0xc9;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  uStack_1cc = 6;
  uVar9 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar13 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar13,uVar9);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_e8,uVar13,uVar9 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1bc = local_19c;
  uStack_1c0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_1a8);
  }
  uStack_1cc = 7;
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
  FUN_1400460e0(&local_1c8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_98 = local_148;
  local_1d8 = (longlong *)local_e8;
  uStack_1d0 = uStack_e0;
  uStack_1cc = uStack_dc;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_1d8);
  local_90 = local_138;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  local_1c8 = (longlong *)0x100000000000149;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = 0xf;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_1c8);
  local_88 = local_128;
  uStack_1bc = local_19c;
  uStack_1c0 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_1a8);
  }
  uStack_1cc = 7;
  local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
  FUN_1400462a0(&local_1c8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_80 = local_118;
  local_1d8 = (longlong *)local_e8;
  uStack_1d0 = uStack_e0;
  uStack_1cc = uStack_dc;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1d8);
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  local_1c8 = (longlong *)0x100000000000149;
  uStack_1c0 = uStack_1d0;
  uStack_1bc = 0xf;
  local_78 = local_108;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1c8);
  local_70 = local_f8;
  uVar11 = CONCAT44(uVar12,DAT_141a12628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_180,3,uVar11,&local_80);
  ppuVar10 = &local_98;
  uVar13 = CONCAT44((int)((ulonglong)uVar11 >> 0x20),DAT_141a12628);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,3,uVar13,ppuVar10);
  uStack_1bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1c0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar5);
  }
  FUN_1400462a0(&local_1c8,uVar3);
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  FUN_140041b80(&local_160,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_188 = 0xcb;
  local_1d8 = (longlong *)local_68;
  uStack_1d0 = uStack_60;
  uStack_1cc = uStack_5c;
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  FUN_140041b80(&local_170,&local_1d8);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_170);
  local_188 = 0xcd;
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(&local_160,&local_1d8,DAT_141955260,0);
  bVar6 = iVar2 == 0;
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (!bVar6) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f81b8);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar3,&local_1d8,DAT_141955260,1);
    if (iVar2 != -2) {
      bVar6 = 0 < iVar2;
    }
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (bVar6) {
      local_188 = 0xcf;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7b38);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_188 = 0xd0;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f81b8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      *puVar5 = 0;
      local_188 = 0xd1;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_b8,uVar13 & 0xffffffffffffff00,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      local_1d8 = (longlong *)CONCAT44(uRam0000000141ddaa5c,_DAT_141ddaa58);
      uStack_1d0 = uRam0000000141ddaa60;
      uStack_1cc = DAT_141ddaa64;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1d8);
      local_98 = local_148;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_1b8,1,&local_b8,&local_98);
      local_188 = 0xd2;
      goto LAB_140c690bc;
    }
  }
  local_188 = 0xd5;
  uVar7 = 0;
LAB_140c690bc:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
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
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return param_3;
}


// gml_Object_oToxicBreath_Create_0 @ 0x140dc6f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oToxicBreath_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffdf0;
  ulonglong uVar15;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c8;
  undefined4 local_1c0;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined4 local_138 [3];
  byte local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_110 = "gml_Object_oTongue_Step_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  _eh_vector_constructor_iterator_(&local_188,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_18c = 0xffffff;
  local_198 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_108 = 2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdea8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_108 = 8;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdd08);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdcf8);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd08);
    if (puVar5 != &local_188) {
      local_1d8 = *puVar5;
      uStack_1d0 = *(undefined4 *)(puVar5 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1d8);
    }
    local_b8 = &local_188;
    if (puVar6 != &local_178) {
      local_1d8 = *puVar6;
      uStack_1d0 = *(undefined4 *)(puVar6 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1d8);
    }
    local_b0 = &local_178;
    uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar8;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar8);
    }
    FUN_140042560(&local_1f8,uVar3);
    local_1d8 = local_1f8;
    uStack_1d0 = uStack_1f0;
    uStack_1cc = uStack_1ec;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_a8 = local_168;
    FUN_140e609c0(param_1);
  }
  else {
    local_108 = 4;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdd08);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd08);
    if (puVar5 != &local_188) {
      local_1d8 = *puVar5;
      uStack_1d0 = *(undefined4 *)(puVar5 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1d8);
    }
    local_b8 = &local_188;
    local_1d8 = CONCAT44(uRam0000000141dc7874,_DAT_141dc7870);
    uStack_1d0 = uRam0000000141dc7878;
    uStack_1cc = uRam0000000141dc787c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
    local_b0 = &local_178;
    uStack_1ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar6);
    }
    FUN_140042560(&local_1f8,uVar3);
    local_1d8 = local_1f8;
    uStack_1d0 = uStack_1f0;
    uStack_1cc = uStack_1ec;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1d8);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_a8 = local_168;
    FUN_140e609c0(param_1);
  }
  ppuVar13 = &local_b8;
  puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1e8,3,ppuVar13);
  if (puVar5 != puVar7) {
    local_1d8 = *puVar5;
    uStack_1d0 = *(undefined4 *)(puVar5 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1d8);
  }
  FUN_140e60910(1);
  local_108 = 0xc;
  puVar9 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdd08);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
  uStack_1fc = 6;
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fde18,0x80000000,&local_198,uVar12,in_stack_fffffffffffffdf0);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1bc = *(undefined4 *)((longlong)puVar9 + 0xc);
  local_1c0 = (undefined4)puVar9[1];
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *puVar9;
  }
  else {
    FUN_1400419b0(&local_1c8,puVar9);
  }
  FUN_140042560(&local_1c8,uVar3);
  uStack_1ec = local_18c;
  uStack_1f0 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_198);
  }
  FUN_1400460e0(&local_1f8,&local_1c8);
  local_1d8 = local_1f8;
  uStack_1d0 = uStack_1f0;
  uStack_1cc = uStack_1ec;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_1d8);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c8);
  local_108 = 0xd;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uStack_1fc = 6;
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1a8,uVar12,in_stack_fffffffffffffdf0);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fde18,0x80000000,&local_198,uVar12,in_stack_fffffffffffffdf0);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_d8,uVar12,
                in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1d8 = local_d8;
  uStack_1d0 = uStack_d0;
  uStack_1cc = uStack_cc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1d8);
  local_b8 = &local_188;
  uStack_1ec = uStack_19c;
  uStack_1f0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_1a8);
  }
  FUN_1400462a0(&local_1f8,&local_198);
  if ((uStack_1ec & 0xffffff) == 0) {
    uVar11 = (undefined4)local_1f8;
  }
  else {
    uVar11 = FUN_140e4b060(&local_1f8);
  }
  ppuVar13 = &local_b8;
  uVar12 = CONCAT44(uVar14,DAT_141a047c8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar12,ppuVar13);
  local_1c8 = FUN_140e78d00(uVar11);
  local_1bc = 0;
  FUN_140046500(&local_1c8,uVar4);
  if ((local_1bc & 0xffffff) == 0) {
    uVar15 = local_1c8;
  }
  else {
    uVar15 = FUN_140e4b060(&local_1c8);
  }
  uStack_1cc = 0;
  local_208 = (longlong *)(uVar15 ^ 0x8000000000000000);
  uStack_1fc = 0;
  uStack_200 = uStack_1d0;
  local_1d8 = (ulonglong)local_208;
  FUN_140042560(&local_208,uVar3);
  local_1b8 = (undefined4)local_208;
  uStack_1b4 = local_208._4_4_;
  uStack_1b0 = uStack_200;
  uStack_1ac = uStack_1fc;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_1b8);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_f0);
  local_108 = 0xe;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  uStack_1fc = 6;
  uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1a8,uVar12,uVar15);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fde18,0x80000000,&local_198,uVar12,uVar15);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_141a0a728,0x80000000,&local_d8,uVar12,uVar15 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1b8 = (undefined4)local_d8;
  uStack_1b4 = local_d8._4_4_;
  uStack_1b0 = uStack_d0;
  uStack_1ac = uStack_cc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1b8);
  local_b8 = &local_188;
  FUN_140e609c0(param_1);
  uStack_1ec = uStack_19c;
  uStack_1f0 = uStack_1a0;
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1f8 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_1f8,&local_1a8);
  }
  FUN_1400462a0(&local_1f8,&local_198);
  if ((uStack_1ec & 0xffffff) == 0) {
    uVar11 = (undefined4)local_1f8;
  }
  else {
    uVar11 = FUN_140e4b060(&local_1f8);
  }
  uVar3 = FUN_140e634e0(param_1,param_2,&local_1e8,1,CONCAT44(uVar14,DAT_141a047c8),&local_b8);
  uVar12 = FUN_140e78d00(uVar11);
  local_1bc = 0;
  local_1c8 = uVar12;
  FUN_140046500(&local_1c8,uVar3);
  if ((local_1bc & 0xffffff) == 0) {
    uVar12 = local_1c8;
  }
  else {
    uVar12 = FUN_140e4b060(&local_1c8);
  }
  uStack_1cc = 0;
  local_1d8 = uVar12 ^ 0x8000000000000000;
  if (&local_1d8 != puVar7) {
    local_1d8._4_4_ = (undefined4)(local_1d8 >> 0x20);
    uStack_1b4 = local_1d8._4_4_;
    uStack_1b0 = uStack_1d0;
    uStack_1ac = 0;
    local_1b8 = (int)uVar12;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_1b8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140e60910(1);
  local_108 = 0x11;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar15 = 0;
  FUN_140e63610(param_1,param_2,&local_1e8,0,uVar12,0);
  local_108 = 0x13;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uStack_1fc = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe0e8,0x80000000,&local_1a8,uVar12,uVar15);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  uStack_1fc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_208 = param_1;
  FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_68,uVar12,uVar15 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1b8 = (undefined4)local_1a8;
  uStack_1b4 = local_1a8._4_4_;
  uStack_1b0 = uStack_1a0;
  uStack_1ac = uStack_19c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_1b8);
  local_b8 = &local_188;
  local_1b8 = (undefined4)local_68;
  uStack_1b4 = local_68._4_4_;
  uStack_1b0 = uStack_60;
  uStack_1ac = uStack_5c;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1b8);
  local_b0 = &local_178;
  uStack_1cc = 0xf;
  local_1d8 = 0x1000000000000ee;
  local_1b8 = 0xee;
  uStack_1b4 = 0x1000000;
  uStack_1b0 = uStack_1d0;
  uStack_1ac = 0xf;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_1b8);
  local_a8 = local_168;
  ppuVar13 = &local_b8;
  uVar12 = CONCAT44(uVar14,DAT_141a12628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar12,ppuVar13);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fddd8);
    uStack_1fc = 6;
    uVar15 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_208 = param_1;
    FUN_140e87440(&local_208,DAT_141a0a7e8,2,&local_78,uVar12,uVar15);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    uStack_1fc = 0;
    local_208 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_78,&local_208,DAT_141955260,0);
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if (iVar2 == 0) {
      local_108 = 0x15;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar10 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      FUN_140e87440(puVar10,DAT_141a0a7d8,0x80000000,&local_88,uVar12 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      uStack_1cc = 0xf;
      local_1d8 = 0x1000000000000ee;
      local_1b8 = 0xee;
      uStack_1b4 = 0x1000000;
      uStack_1b0 = uStack_1d0;
      uStack_1ac = 0xf;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1b8);
      local_a0 = local_158;
      local_1b8 = (undefined4)local_88;
      uStack_1b4 = local_88._4_4_;
      uStack_1b0 = uStack_80;
      uStack_1ac = uStack_7c;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1b8);
      local_98 = local_148;
      if (puVar10 != local_138) {
        local_1b8 = *puVar10;
        uStack_1b4 = puVar10[1];
        uStack_1b0 = puVar10[2];
        uStack_1ac = puVar10[3];
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1b8);
      }
      local_90 = local_138;
      gml_Script_draw_line_sprite(param_1,param_2,&local_128,3,&local_a0);
      local_108 = 0x16;
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      local_f4 = 0;
      local_100 = 0x4034000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a7e8,2,&local_100);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(&local_188,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}


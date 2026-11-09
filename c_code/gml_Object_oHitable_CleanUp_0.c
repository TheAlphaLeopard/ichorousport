// gml_Object_oHitable_CleanUp_0 @ 0x140b0bfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oHitable_CleanUp_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  ulonglong in_stack_fffffffffffffd90;
  ulonglong uVar14;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined1 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 local_218;
  undefined1 *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  longlong *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined1 *local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_1c0 = "gml_Script_anon@3425@gml_Object_oHitable_Create_0";
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  local_1b8 = 0xb9;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_158,0x10,9,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_174 = 0xffffff;
  local_180 = (undefined1 *)0x0;
  local_218 = 0xffffff;
  local_184 = 0xffffff;
  local_190 = (undefined1 *)0x0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_194 = 0xffffff;
  local_1a0 = (longlong *)0x0;
  local_1a4 = 0xffffff;
  local_1b0 = (longlong *)0x0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1b8 = 0xbb;
  uStack_25c = 6;
  ppuVar13 = (undefined8 **)(in_stack_fffffffffffffd90 & 0xffffffffffffff00);
  ppuVar11 = (undefined8 **)((ulonglong)pcVar10 & 0xffffffffffffff00);
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a7e8,0,&local_1d8,ppuVar11,ppuVar13);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 0;
  local_268 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_1d8,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a574b0);
    uStack_25c = 0;
    local_268 = (longlong *)&DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(uVar2,&local_268,DAT_141955260,0);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if (iVar1 != 0) {
      local_1b8 = 0xbd;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uVar9 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a574b0);
      if (puVar3 != &local_158) {
        local_268 = (longlong *)*puVar3;
        uStack_260 = *(undefined4 *)(puVar3 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_268);
      }
      local_98 = &local_158;
      ppuVar13 = &local_98;
      uVar12 = CONCAT44(uVar9,DAT_141a047c8);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,1,uVar12,ppuVar13);
      if (puVar4 != &local_1e8) {
        local_268 = (longlong *)*puVar4;
        uStack_260 = *(undefined4 *)(puVar4 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_268);
      }
      local_1b8 = 0xbe;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b48);
      uStack_23c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_240 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
        local_248 = (undefined1 *)*puVar4;
      }
      else {
        FUN_1400419b0(&local_248,puVar4);
      }
      FUN_140042560(&local_248,&local_1e8);
      local_268 = (longlong *)local_248;
      uStack_260 = uStack_240;
      uStack_25c = uStack_23c;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_1b8 = 0xc0;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uStack_25c = 6;
      uVar12 = uVar12 & 0xffffffffffffff00;
      local_268 = param_1;
      FUN_140e87440(&local_268,DAT_141a0a7e8,0,&local_1d8,uVar12,
                    (ulonglong)ppuVar13 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar12 >> 0x20);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = (longlong *)local_1d8;
      uStack_260 = uStack_1d0;
      uStack_25c = uStack_1cc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_268);
      local_98 = &local_158;
      local_90 = &local_170;
      local_268 = (longlong *)CONCAT44(uRam0000000141dc7154,_DAT_141dc7150);
      uStack_260 = uRam0000000141dc7158;
      uStack_25c = uRam0000000141dc715c;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_268);
      local_88 = local_138;
      puVar4 = (undefined8 *)FUN_140e79230(&local_1f8,2,&local_98);
      if (puVar4 != &local_128) {
        local_268 = (longlong *)*puVar4;
        uStack_260 = *(undefined4 *)(puVar4 + 1);
        uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_268);
      }
      local_80 = &local_128;
      ppuVar5 = (undefined1 **)FUN_140e79090(&local_258,2,&local_88);
      puVar8 = (undefined1 *)0x0;
      if (ppuVar5 != &local_180) {
        local_268 = (longlong *)*ppuVar5;
        uStack_260 = *(undefined4 *)(ppuVar5 + 1);
        uStack_25c = *(undefined4 *)((longlong)ppuVar5 + 0xc);
        FUN_140041b80(&local_180,&local_268);
        puVar8 = local_180;
        uVar7 = local_174;
      }
      local_1b8 = 0xc2;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      uStack_260 = local_178;
      uStack_25c = uVar7;
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) == 0) {
        local_268 = (longlong *)puVar8;
      }
      else {
        FUN_1400419b0(&local_268,&local_180);
      }
      FUN_140046500(&local_268,&local_170);
      uStack_23c = 0;
      local_248 = (undefined1 *)0x3ff0000000000000;
      FUN_1400462a0(&local_248,&local_268);
      uStack_1fc = uStack_23c;
      uStack_200 = uStack_240;
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
        local_208 = local_248;
      }
      else {
        FUN_1400419b0(&local_208,&local_248);
      }
      FUN_140042560(&local_208,&local_1e8);
      local_238 = (longlong *)local_208;
      uStack_230 = (char *)CONCAT44(uStack_1fc,uStack_200);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_238);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_98 = &local_158;
      ppuVar13 = &local_98;
      ppuVar5 = (undefined1 **)
                FUN_140e634e0(param_1,param_2,&local_258,1,CONCAT44(uVar9,DAT_1419fe728),ppuVar13);
      puVar8 = (undefined1 *)0x0;
      uVar9 = 0xffffff;
      if (ppuVar5 != &local_190) {
        local_238 = (longlong *)*ppuVar5;
        uStack_230 = ppuVar5[1];
        FUN_140041b80(&local_190,&local_238);
        local_218 = local_184;
        puVar8 = local_190;
        uVar9 = local_184;
      }
      local_1b8 = 0xc4;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      if (puVar3 != &local_158) {
        local_238 = (longlong *)*puVar3;
        uStack_230 = (char *)puVar3[1];
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_238);
      }
      local_98 = &local_158;
      uStack_260 = local_188;
      uStack_25c = uVar9;
      if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
        local_268 = (longlong *)puVar8;
      }
      else {
        FUN_1400419b0(&local_268,&local_190);
      }
      uStack_23c = 7;
      local_248 = (undefined1 *)CONCAT44(local_248._4_4_,1);
      FUN_1400460e0(&local_268,&local_248);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_238 = local_268;
      uStack_230 = (char *)CONCAT44(uStack_25c,uStack_260);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_238);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_90 = (undefined8 *)local_148;
      local_238 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_230 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_238);
      local_88 = local_138;
      ppuVar11 = &local_98;
      gml_Script_pal_swap_layer_init(param_1,param_2,&local_258,3,ppuVar11);
    }
  }
  local_1b8 = 200;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd428);
  local_208 = (undefined1 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5d8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  local_248 = (undefined1 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  uStack_25c = 6;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a728,0x80000000,&local_a8,uVar12,uVar14);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0cfc8,0x80000000,&local_b8,uVar12,uVar14);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_1a0,uVar12,uVar14);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_1b0,uVar12,uVar14);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 6;
  uVar14 = uVar14 & 0xffffffffffffff00;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0f9d8,0x80000000,&local_c8,uVar12 & 0xffffffffffffff00,uVar14);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_238 = (longlong *)local_a8;
  uStack_230 = (char *)CONCAT44(uStack_9c,uStack_a0);
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_238);
  local_98 = &local_158;
  local_238 = (longlong *)local_b8;
  uStack_230 = (char *)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_238);
  local_90 = (undefined8 *)local_148;
  uStack_25c = local_194;
  uStack_260 = local_198;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) == 0) {
    local_268 = local_1a0;
  }
  else {
    FUN_1400419b0(&local_268,&local_1a0);
  }
  FUN_1400460e0(&local_268,uVar2);
  local_238 = local_268;
  uStack_230 = (char *)CONCAT44(uStack_25c,uStack_260);
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_238);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_88 = local_138;
  uStack_25c = local_1a4;
  uStack_260 = local_1a8;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) == 0) {
    local_268 = local_1b0;
  }
  else {
    FUN_1400419b0(&local_268,&local_1b0);
  }
  FUN_1400460e0(&local_268,local_208);
  local_238 = local_268;
  uStack_230 = (char *)CONCAT44(uStack_25c,uStack_260);
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_238);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_80 = &local_128;
  uStack_25c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_260 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
    local_268 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_268,puVar3);
  }
  FUN_140042560(&local_268,local_248);
  local_238 = local_268;
  uStack_230 = (char *)CONCAT44(uStack_25c,uStack_260);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_238);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_78 = local_118;
  if (puVar4 != &local_108) {
    local_238 = (longlong *)*puVar4;
    uStack_230 = (char *)puVar4[1];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_238);
  }
  local_70 = &local_108;
  if (puVar6 != &local_f8) {
    local_238 = (longlong *)*puVar6;
    uStack_230 = (char *)puVar6[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_238);
  }
  local_68 = &local_f8;
  local_238 = (longlong *)local_c8;
  uStack_230 = (char *)CONCAT44(uStack_bc,uStack_c0);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_238);
  local_60 = local_e8;
  local_238 = (longlong *)CONCAT44(uRam00000001419eba64,_DAT_1419eba60);
  uStack_230 = (char *)CONCAT44(uRam00000001419eba6c,uRam00000001419eba68);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_238);
  local_58 = local_d8;
  ppuVar13 = &local_98;
  FUN_1403ae470(param_1,param_2,&local_258,9,ppuVar13);
  local_1b8 = 0xca;
  uStack_25c = 6;
  local_268 = param_1;
  FUN_140e87440(&local_268,DAT_141a0a7e8,0,&local_1d8,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                uVar14 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uStack_25c = 0;
  local_268 = (longlong *)&DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_1d8,&local_268,DAT_141955260,0);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (iVar1 != 0) {
    local_1b8 = 0xcb;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_250 = 0;
    uStack_230 = "gml_Script_pal_swap_reset";
    local_238 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_238;
    local_24c = 5;
    local_258 = 0;
    local_228 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_228 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_238;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_218 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(&local_158,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1c8;
  return param_3;
}


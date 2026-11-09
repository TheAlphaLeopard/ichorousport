// gml_Object_oProjectile_Create_0 @ 0x140c9d450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oProjectile_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined4 local_5c;
  
  local_220 = "gml_Object_oPoisonRing_Step_0";
  local_218 = 0;
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_1d8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_218 = 3;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9318);
  uStack_25c = 0;
  local_268 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(puVar7,&local_268,DAT_141955260,1);
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  uVar3 = 1 << ((byte)local_26c & 0x1f);
  if (iVar2 == -2 || -1 < iVar2) {
    local_218 = 0x21;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9338);
    puVar12 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9318);
    if (puVar7 != &local_1d8) {
      local_248 = *(undefined4 *)puVar7;
      uStack_244 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_240 = *(undefined4 *)(puVar7 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_248);
    }
    local_158 = &local_1d8;
    uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_260 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
      local_268 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_268,puVar8);
    }
    uStack_24c = 7;
    local_258 = CONCAT44(local_258._4_4_,1);
    FUN_1400460e0(&local_268,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_248 = (undefined4)local_268;
    uStack_244 = local_268._4_4_;
    uStack_240 = uStack_260;
    uStack_23c = uStack_25c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_248);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_150 = &local_1c8;
    uStack_25c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_260 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
      local_268 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_268,puVar9);
    }
    FUN_140042560(&local_268,uVar5);
    local_248 = (undefined4)local_268;
    uStack_244 = local_268._4_4_;
    uStack_240 = uStack_260;
    uStack_23c = uStack_25c;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_248);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_148 = &local_1b8;
    FUN_140e609c0(param_1);
    puVar13 = (undefined4 *)
              FUN_140e634e0(param_1,param_2,&local_278,3,CONCAT44(uVar4,DAT_141a00c58),&local_158);
    if (puVar13 != puVar12) {
      local_248 = *puVar13;
      uStack_244 = puVar13[1];
      uStack_240 = puVar13[2];
      uStack_23c = puVar13[3];
      if ((1 << ((byte)puVar12[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar12);
      }
      FUN_140041b80(puVar12,&local_248);
    }
    FUN_140e60910(1);
    local_218 = 0x23;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
    uVar3 = FUN_140e851f0(puVar7,uVar5,DAT_141955260,1);
    if (uVar3 < 0x80000000) {
      local_218 = 0x24;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f9318);
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  else {
    local_218 = 5;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f92d8);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0b9a8);
    if (puVar7 != &local_1d8) {
      local_258 = *puVar7;
      uStack_250 = *(undefined4 *)(puVar7 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_258);
    }
    local_158 = &local_1d8;
    if (puVar8 != &local_1c8) {
      local_258 = *puVar8;
      uStack_250 = *(undefined4 *)(puVar8 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_258);
    }
    local_150 = &local_1c8;
    uStack_1ec = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_1f0 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_1f8 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_1f8,puVar9);
    }
    FUN_140042560(&local_1f8,uVar5);
    local_258 = local_1f8;
    uStack_250 = uStack_1f0;
    uStack_24c = uStack_1ec;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_258);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_148 = &local_1b8;
    FUN_140e609c0(param_1);
    uVar5 = CONCAT44(uVar4,DAT_141a00c58);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,3,uVar5,&local_158);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar9 != puVar10) {
      local_258 = *puVar9;
      uStack_250 = *(undefined4 *)(puVar9 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_258);
    }
    FUN_140e60910(1);
    local_218 = 7;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    uVar16 = 0;
    uVar14 = CONCAT44(uVar4,DAT_1419ef5d8);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_278,0,uVar14,0);
    if (puVar9 != &local_1e8) {
      local_258 = *puVar9;
      uStack_250 = *(undefined4 *)(puVar9 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_258);
    }
    local_218 = 8;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    uStack_25c = 6;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_1419fe0e8,0x80000000,&local_88,uVar14,uVar16);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    uStack_25c = 6;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_268 = param_1;
    FUN_140e87440(&local_268,DAT_1419fe158,0x80000000,&local_98,uVar14,uVar16 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_258 = local_88;
    uStack_250 = uStack_80;
    uStack_24c = uStack_7c;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_258);
    local_158 = &local_1d8;
    local_258 = local_98;
    uStack_250 = uStack_90;
    uStack_24c = uStack_8c;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_258);
    local_150 = &local_1c8;
    if (puVar7 != &local_1b8) {
      local_258 = *puVar7;
      uStack_250 = *(undefined4 *)(puVar7 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_258);
    }
    local_148 = &local_1b8;
    uStack_24c = 0xf;
    local_258 = 0x10000000000009d;
    local_d8 = (undefined1 *)0x10000000000009d;
    uStack_d0 = uStack_250;
    uStack_cc = 0xf;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_d8);
    local_258 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_250 = uRam00000001419df7a8;
    uStack_24c = uRam00000001419df7ac;
    local_140 = local_1a8;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_258);
    local_138 = local_198;
    local_258 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
    uStack_250 = uRam00000001419df7c8;
    uStack_24c = uRam00000001419df7cc;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_258);
    local_130 = local_188;
    local_128 = &local_1e8;
    local_258 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_250 = uRam00000001419df7a8;
    uStack_24c = uRam00000001419df7ac;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_258);
    local_120 = local_168;
    puVar7 = (undefined8 *)CONCAT44(uVar4,DAT_1419f5fe8);
    FUN_140e634e0(param_1,param_2,&local_278,8,puVar7,&local_158);
    local_218 = 9;
    while( true ) {
      uVar4 = (undefined4)((ulonglong)puVar7 >> 0x20);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
      local_158 = &local_1e8;
      uVar15 = CONCAT44(uVar4,DAT_1419f58d8);
      uVar11 = FUN_140e634e0(param_1,param_2,&local_278,1,uVar15,&local_158);
      uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
      cVar1 = FUN_140e491e0(uVar11);
      if (cVar1 != '\0') break;
      local_218 = 0xb;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      local_210 = 0;
      local_208 = 0;
      local_204 = 5;
      local_150 = &local_1e8;
      local_248 = _DAT_141dc74f0;
      uStack_244 = uRam0000000141dc74f4;
      uStack_240 = uRam0000000141dc74f8;
      uStack_23c = uRam0000000141dc74fc;
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_248);
      local_148 = &local_1b8;
      uVar5 = CONCAT44(uVar4,DAT_1419f5a78);
      puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_210,2,uVar5,&local_150);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar7 != &local_238) {
        local_248 = *(undefined4 *)puVar7;
        uStack_244 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_240 = *(undefined4 *)(puVar7 + 1);
        uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_248);
      }
      local_218 = 0xc;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      local_158 = &local_1e8;
      local_248 = _DAT_141dc74f0;
      uStack_244 = uRam0000000141dc74f4;
      uStack_240 = uRam0000000141dc74f8;
      uStack_23c = uRam0000000141dc74fc;
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_248);
      local_150 = &local_1c8;
      uVar5 = CONCAT44(uVar4,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_278,2,uVar5,&local_158);
      uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_218 = 0xd;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      local_278 = 0;
      local_270 = 0;
      local_26c = 5;
      local_158 = &local_238;
      ppuVar17 = &local_158;
      puVar7 = (undefined8 *)CONCAT44(uVar4,DAT_141a02ef8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_278,1,puVar7,ppuVar17);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 == '\0') {
        local_218 = 0xd;
      }
      else {
        local_218 = 0xe;
        puVar7 = (undefined8 *)((ulonglong)puVar7 & 0xffffffffffffff00);
        FUN_140e87440(&local_238,DAT_141a56cd0,0x80000000,&local_a8,puVar7,
                      (ulonglong)ppuVar17 & 0xffffffffffffff00);
        local_6c = 10;
        local_78 = 2;
        iVar2 = FUN_140e851f0(&local_a8,&local_78,DAT_141955260,0);
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        uVar4 = (undefined4)((ulonglong)puVar7 >> 0x20);
        if (iVar2 == 0) {
          local_218 = 0xe;
        }
        else {
          local_218 = 0xf;
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_278 = 0;
          local_270 = 0;
          local_26c = 5;
          puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
          if (puVar9 != &local_1d8) {
            local_248 = *(undefined4 *)puVar9;
            uStack_244 = *(undefined4 *)((longlong)puVar9 + 4);
            uStack_240 = *(undefined4 *)(puVar9 + 1);
            uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_248);
          }
          local_158 = &local_1d8;
          local_150 = &local_238;
          puVar7 = (undefined8 *)CONCAT44(uVar4,DAT_141a573f0);
          uVar5 = FUN_140e634e0(param_1,param_2,&local_278,2,puVar7,&local_158);
          local_5c = 0;
          local_68 = &DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(uVar5,&local_68,DAT_141955260,0);
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
          uVar4 = (undefined4)((ulonglong)puVar7 >> 0x20);
          if (iVar2 == 0) {
            local_218 = 0x11;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            if (puVar9 != &local_1d8) {
              local_248 = *(undefined4 *)puVar9;
              uStack_244 = *(undefined4 *)((longlong)puVar9 + 4);
              uStack_240 = *(undefined4 *)(puVar9 + 1);
              uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
              if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140041b80(&local_1d8,&local_248);
            }
            local_158 = &local_1d8;
            local_150 = &local_238;
            ppuVar17 = &local_158;
            uVar14 = CONCAT44(uVar4,DAT_141a57350);
            FUN_140e634e0(param_1,param_2,&local_278,2,uVar14,ppuVar17);
            local_218 = 0x12;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
            (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
            uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
            uVar14 = uVar14 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_141a1edd0,0x80000000,&local_b8,uVar14,uVar16);
            FUN_140e87440(uVar6,DAT_141a1f540,0x80000000,&local_e8,uVar14 & 0xffffffffffffff00,
                          uVar16 & 0xffffffffffffff00);
            local_248 = (undefined4)local_e8;
            uStack_244 = local_e8._4_4_;
            uStack_240 = uStack_e0;
            uStack_23c = uStack_dc;
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_248);
            local_158 = &local_1d8;
            if (puVar7 != &local_1c8) {
              local_248 = *(undefined4 *)puVar7;
              uStack_244 = *(undefined4 *)((longlong)puVar7 + 4);
              uStack_240 = *(undefined4 *)(puVar7 + 1);
              uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
              if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              FUN_140041b80(&local_1c8,&local_248);
            }
            local_150 = &local_1c8;
            switch(local_22c) {
            default:
switchD_140c9e18c_caseD_1:
              uVar5 = 0;
              break;
            case 6:
              uVar5 = local_238;
              break;
            case 0xf:
              iVar2 = (int)((ulonglong)local_238 >> 0x20);
              if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c9e18c_caseD_1;
            case 0:
            case 7:
            case 10:
            case 0xd:
              uVar4 = FUN_140e4a8b0(&local_238);
              uVar5 = FUN_140e87250(uVar4);
            }
            ppuVar17 = &local_158;
            puVar7 = &local_b8;
            FUN_140e63610(uVar5,param_2,&local_278,2,puVar7,ppuVar17);
            local_218 = 0x14;
            if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_278);
            }
            local_278 = 0;
            local_270 = 0;
            local_26c = 5;
            uVar16 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
            uVar14 = (ulonglong)puVar7 & 0xffffffffffffff00;
            FUN_140e87440(&local_238,DAT_1419f59d8,0x80000000,&local_c8,uVar14,uVar16);
            FUN_140e87440(uVar6,DAT_141a1f540,0x80000000,&local_e8,uVar14 & 0xffffffffffffff00,
                          uVar16 & 0xffffffffffffff00);
            local_248 = (undefined4)local_e8;
            uStack_244 = local_e8._4_4_;
            uStack_240 = uStack_e0;
            uStack_23c = uStack_dc;
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_248);
            local_158 = &local_1d8;
            switch(local_22c) {
            default:
switchD_140c9e2b7_caseD_1:
              uVar5 = 0;
              break;
            case 6:
              uVar5 = local_238;
              break;
            case 0xf:
              iVar2 = (int)((ulonglong)local_238 >> 0x20);
              if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c9e2b7_caseD_1;
            case 0:
            case 7:
            case 10:
            case 0xd:
              uVar4 = FUN_140e4a8b0(&local_238);
              uVar5 = FUN_140e87250(uVar4);
            }
            ppuVar17 = &local_158;
            puVar7 = &local_c8;
            puVar9 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_278,1,puVar7,ppuVar17);
            if (puVar9 != &local_118) {
              local_248 = *(undefined4 *)puVar9;
              uStack_244 = *(undefined4 *)((longlong)puVar9 + 4);
              uStack_240 = *(undefined4 *)(puVar9 + 1);
              uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              FUN_140041b80(&local_118,&local_248);
            }
            local_218 = 0x15;
            uStack_cc = 0;
            local_d8 = &DAT_bff0000000000000;
            iVar2 = FUN_140e851f0(&local_118,&local_d8,DAT_141955260,0);
            if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            if (iVar2 != 0) {
              local_218 = 0x16;
              if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_278 = 0;
              local_270 = 0;
              local_26c = 5;
              if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_210);
              }
              local_210 = 0;
              local_208 = 0;
              local_204 = 5;
              uVar14 = (ulonglong)puVar7 & 0xffffffffffffff00;
              FUN_140e87440(&local_118,DAT_1419f5838,0x80000000,&local_f8,uVar14,
                            (ulonglong)ppuVar17 & 0xffffffffffffff00);
              uVar4 = (undefined4)(uVar14 >> 0x20);
              local_248 = _DAT_141dc74f0;
              uStack_244 = uRam0000000141dc74f4;
              uStack_240 = uRam0000000141dc74f8;
              uStack_23c = uRam0000000141dc74fc;
              if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140041b80(&local_1d8,&local_248);
              local_158 = &local_1d8;
              local_248 = _DAT_141dc74f0;
              uStack_244 = uRam0000000141dc74f4;
              uStack_240 = uRam0000000141dc74f8;
              uStack_23c = uRam0000000141dc74fc;
              if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1c8);
              }
              FUN_140041b80(&local_1c8,&local_248);
              local_150 = &local_1c8;
              puVar7 = (undefined8 *)CONCAT44(uVar4,DAT_141a0a0d8);
              puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_210,1,puVar7,&local_158);
              uStack_25c = *(undefined4 *)((longlong)puVar9 + 0xc);
              uStack_260 = *(undefined4 *)(puVar9 + 1);
              if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
                local_268 = (longlong *)*puVar9;
              }
              else {
                FUN_1400419b0(&local_268,puVar9);
              }
              uStack_24c = 7;
              local_258 = CONCAT44(local_258._4_4_,2);
              FUN_140042560(&local_268,&local_258);
              if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_258);
              }
              uStack_1ec = local_ec;
              uStack_1f0 = local_f0;
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
                local_1f8 = local_f8;
              }
              else {
                FUN_1400419b0(&local_1f8,&local_f8);
              }
              FUN_1400462a0(&local_1f8,&local_268);
              local_248 = (undefined4)local_1f8;
              uStack_244 = local_1f8._4_4_;
              uStack_240 = uStack_1f0;
              uStack_23c = uStack_1ec;
              if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              FUN_140041b80(&local_1b8,&local_248);
              if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f8);
              }
              if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              local_148 = &local_1b8;
              puVar9 = (undefined8 *)FUN_140e79090(&local_278,2,&local_150);
              if (puVar9 != &local_108) {
                local_248 = *(undefined4 *)puVar9;
                uStack_244 = *(undefined4 *)((longlong)puVar9 + 4);
                uStack_240 = *(undefined4 *)(puVar9 + 1);
                uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
                if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_108);
                }
                FUN_140041b80(&local_108,&local_248);
              }
              FUN_140e87930(&local_118,DAT_1419f5838,0x80000000,&local_108);
            }
          }
          else {
            local_218 = 0xf;
          }
        }
      }
    }
    local_218 = 0x18;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    local_158 = &local_1e8;
    FUN_140e634e0(param_1,param_2,&local_278,1,CONCAT44(uVar4,DAT_1419f6038),&local_158);
    local_218 = 0x1a;
    uStack_25c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_260 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
      local_268 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_268);
    }
    uStack_24c = 7;
    local_258 = CONCAT44(local_258._4_4_,1);
    FUN_1400462a0(&local_268,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uVar3 = FUN_140e851f0(uVar5,&local_268,DAT_141955260,1);
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if (uVar3 < 0x80000000) {
      local_218 = 0x1c;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a0b9a8);
      puVar12 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b88);
      puVar13 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0b9a8);
      FUN_140e609c0(param_1);
      if (puVar12 != puVar13) {
        local_248 = *puVar12;
        uStack_244 = puVar12[1];
        uStack_240 = puVar12[2];
        uStack_23c = puVar12[3];
        if ((1 << ((byte)puVar13[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar13);
        }
        FUN_140041b80(puVar13,&local_248);
      }
      FUN_140e60910(1);
      local_218 = 0x1d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9318);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
      *puVar7 = 0;
    }
    local_218 = 0x1f;
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  _eh_vector_destructor_iterator_(&local_1d8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return;
}


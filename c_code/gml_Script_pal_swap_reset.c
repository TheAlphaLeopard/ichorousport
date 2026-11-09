// gml_Script_pal_swap_reset @ 0x140447000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_pal_swap_reset
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined4 uVar9;
  ulonglong uVar8;
  undefined4 **ppuVar10;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_288;
  byte local_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined4 local_258 [3];
  byte local_24c;
  undefined4 local_248 [3];
  byte local_23c;
  undefined4 local_238 [3];
  byte local_22c;
  undefined4 local_228 [3];
  byte local_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined8 *local_208;
  undefined1 *local_200;
  undefined4 *local_1f0;
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  undefined4 *local_1d8;
  undefined4 *local_1d0;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_2a0 = "gml_Script_pal_swap_init_system";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 7;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_288,0x10,8,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74a8);
  uStack_2ac = 0xffffff;
  local_2b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  local_2bc = 0;
  local_2c8 = 0;
  local_3c = 0;
  local_48 = 0;
  local_4c = 0;
  local_58 = 0;
  local_5c = 0;
  local_68 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 9;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_88,gml_Script_pal_swap_set,0);
  if (&local_88 != puVar3) {
    local_2d8 = local_88;
    uStack_2d4 = uStack_84;
    uStack_2d0 = uStack_80;
    uStack_2cc = uStack_7c;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_2d8);
  }
  FUN_140e60910(1);
  if (puVar3 != local_258) {
    local_2d8 = *puVar3;
    uStack_2d4 = puVar3[1];
    uStack_2d0 = puVar3[2];
    uStack_2cc = puVar3[3];
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_2d8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_1f0 = local_258;
  puVar3 = (undefined4 *)FUN_140e8da20(&local_48,param_1,1,&DAT_141dc65e0);
  if (puVar3 != local_248) {
    local_2d8 = *puVar3;
    uStack_2d4 = puVar3[1];
    uStack_2d0 = puVar3[2];
    uStack_2cc = puVar3[3];
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_2d8);
  }
  local_1e8 = local_248;
  puVar3 = (undefined4 *)FUN_140e8da20(&local_58,param_1,1,&DAT_141dc65e0);
  if (puVar3 != local_238) {
    local_2d8 = *puVar3;
    uStack_2d4 = puVar3[1];
    uStack_2d0 = puVar3[2];
    uStack_2cc = puVar3[3];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2d8);
  }
  local_1e0 = local_238;
  puVar3 = (undefined4 *)FUN_140e8da20(&local_68,param_1,1,&DAT_141dc65e0);
  if (puVar3 != local_228) {
    local_2d8 = *puVar3;
    uStack_2d4 = puVar3[1];
    uStack_2d0 = puVar3[2];
    uStack_2cc = puVar3[3];
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_2d8);
  }
  local_1d8 = local_228;
  puVar3 = (undefined4 *)FUN_140e8da20(&local_78,param_1,1,&DAT_141dc65e0);
  if (puVar3 != local_218) {
    local_2d8 = *puVar3;
    uStack_2d4 = puVar3[1];
    uStack_2d0 = puVar3[2];
    uStack_2cc = puVar3[3];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2d8);
  }
  local_1d0 = local_218;
  ppuVar10 = &local_1f0;
  uVar8 = CONCAT44(uVar9,DAT_1419fd6d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,5,uVar8,ppuVar10);
  if (puVar5 != &local_2b8) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    FUN_140041b80(&local_2b8,&local_2d8);
  }
  local_298 = 0x1d;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e87930(&local_2b8,DAT_1419f5138,0x80000000,&local_a8);
  local_298 = 0x1f;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_2b8,DAT_1419f5138,0x80000000,&local_98,uVar8,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar9 = (undefined4)(uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(&local_98);
  puVar5 = &DAT_1419df7b0;
  if (cVar1 != '\0') {
    local_298 = 0x26;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
    }
    iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 == 0) {
LAB_140447b30:
      local_298 = 0x27;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2c8 = 0;
      local_2c0 = 0;
      local_2bc = 5;
      local_2d8 = _DAT_141dd2d68;
      uStack_2d4 = uRam0000000141dd2d6c;
      uStack_2d0 = uRam0000000141dd2d70;
      uStack_2cc = DAT_141dd2d74;
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
      local_208 = &local_288;
      uVar7 = CONCAT44(uVar9,DAT_141a0a1d8);
      FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar7,&local_208);
      uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_298 = 0x28;
      FUN_140edce70(0,0);
    }
    else {
      if (param_4 < 3) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)param_5[2];
      }
      iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 == 0) goto LAB_140447b30;
    }
    local_298 = 0x2a;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140447bf7:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_108) goto LAB_140447bf7;
    }
    FUN_140e87930(&local_2b8,DAT_1419f52a8,0x80000000,&local_108);
    local_298 = 0x2b;
    if (param_4 < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140447c6d:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[2];
      if (puVar6 != &local_118) goto LAB_140447c6d;
    }
    FUN_140e87930(&local_2b8,DAT_1419f50b8,0x80000000,&local_118);
    local_298 = 0x2d;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140447d0c:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_288) goto LAB_140447d0c;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d58;
    uStack_2d4 = uRam0000000141dd2d5c;
    uStack_2d0 = uRam0000000141dd2d60;
    uStack_2cc = DAT_141dd2d64;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_128) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_1419f5028,1,&local_128);
    local_298 = 0x2e;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140447e4b:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_288) goto LAB_140447e4b;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d88;
    uStack_2d4 = uRam0000000141dd2d8c;
    uStack_2d0 = uRam0000000141dd2d90;
    uStack_2cc = DAT_141dd2d94;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_138) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_1419f4f88,1,&local_138);
    local_298 = 0x2f;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140447f8a:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_288) goto LAB_140447f8a;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d48;
    uStack_2d4 = uRam0000000141dd2d4c;
    uStack_2d0 = uRam0000000141dd2d50;
    uStack_2cc = DAT_141dd2d54;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_148) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_141a57830,1,&local_148);
    local_298 = 0x30;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_1404480c9:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_288) goto LAB_1404480c9;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d78;
    uStack_2d4 = uRam0000000141dd2d7c;
    uStack_2d0 = uRam0000000141dd2d80;
    uStack_2cc = DAT_141dd2d84;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_1419f54d8);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_158) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_141a08768,1,&local_158);
    local_298 = 0x32;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_140448208:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[2];
      if (puVar6 != &local_288) goto LAB_140448208;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d58;
    uStack_2d4 = uRam0000000141dd2d5c;
    uStack_2d0 = uRam0000000141dd2d60;
    uStack_2cc = DAT_141dd2d64;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_168) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_1419f5028,2,&local_168);
    local_298 = 0x33;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_14044834a:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[2];
      if (puVar6 != &local_288) goto LAB_14044834a;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d88;
    uStack_2d4 = uRam0000000141dd2d8c;
    uStack_2d0 = uRam0000000141dd2d90;
    uStack_2cc = DAT_141dd2d94;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_178) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_1419f4f88,2,&local_178);
    local_298 = 0x34;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (param_4 < 3) {
      puVar6 = &DAT_1419df7b0;
LAB_14044848c:
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    else {
      puVar6 = (undefined8 *)param_5[2];
      if (puVar6 != &local_288) goto LAB_14044848c;
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d48;
    uStack_2d4 = uRam0000000141dd2d4c;
    uStack_2d0 = uRam0000000141dd2d50;
    uStack_2cc = DAT_141dd2d54;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_141a04778);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != &local_188) {
      local_2d8 = *(undefined4 *)puVar6;
      uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_2d0 = *(undefined4 *)(puVar6 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_2d8);
    }
    FUN_140e87930(&local_2b8,DAT_141a57830,2,&local_188);
    local_298 = 0x35;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((param_4 < 3) || (puVar5 = (undefined8 *)param_5[2], puVar5 != &local_288)) {
      local_2d8 = *(undefined4 *)puVar5;
      uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_2d0 = *(undefined4 *)(puVar5 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2d8);
    }
    local_208 = &local_288;
    local_2d8 = _DAT_141dd2d78;
    uStack_2d4 = uRam0000000141dd2d7c;
    uStack_2d0 = uRam0000000141dd2d80;
    uStack_2cc = DAT_141dd2d84;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_278);
    }
    FUN_140041b80(local_278,&local_2d8);
    local_200 = local_278;
    uVar7 = CONCAT44(uVar9,DAT_1419f54d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar5 != &local_198) {
      local_2d8 = *(undefined4 *)puVar5;
      uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_2d0 = *(undefined4 *)(puVar5 + 1);
      uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2d8);
    }
    puVar5 = &local_198;
    uVar7 = 2;
    goto LAB_1404486a0;
  }
  local_298 = 0x20;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1404475a1:
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_2d8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_b8) goto LAB_1404475a1;
  }
  FUN_140e87930(&local_2b8,DAT_1419f5388,0x80000000,&local_b8);
  local_298 = 0x21;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_14044763e:
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_288) goto LAB_14044763e;
  }
  local_208 = &local_288;
  local_2d8 = _DAT_141dd2d58;
  uStack_2d4 = uRam0000000141dd2d5c;
  uStack_2d0 = uRam0000000141dd2d60;
  uStack_2cc = DAT_141dd2d64;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2d8);
  local_200 = local_278;
  uVar7 = CONCAT44(uVar9,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != &local_c8) {
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_1419f5028,0,&local_c8);
  local_298 = 0x22;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_14044777b:
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_288) goto LAB_14044777b;
  }
  local_208 = &local_288;
  local_2d8 = _DAT_141dd2d88;
  uStack_2d4 = uRam0000000141dd2d8c;
  uStack_2d0 = uRam0000000141dd2d90;
  uStack_2cc = DAT_141dd2d94;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2d8);
  local_200 = local_278;
  uVar7 = CONCAT44(uVar9,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != &local_d8) {
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_1419f4f88,0,&local_d8);
  local_298 = 0x23;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1404478b8:
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 != &local_288) goto LAB_1404478b8;
  }
  local_208 = &local_288;
  local_2d8 = _DAT_141dd2d48;
  uStack_2d4 = uRam0000000141dd2d4c;
  uStack_2d0 = uRam0000000141dd2d50;
  uStack_2cc = DAT_141dd2d54;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2d8);
  local_200 = local_278;
  uVar7 = CONCAT44(uVar9,DAT_141a04778);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != &local_e8) {
    local_2d8 = *(undefined4 *)puVar6;
    uStack_2d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_2d0 = *(undefined4 *)(puVar6 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_141a57830,0,&local_e8);
  local_298 = 0x24;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_288)) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  local_208 = &local_288;
  local_2d8 = _DAT_141dd2d78;
  uStack_2d4 = uRam0000000141dd2d7c;
  uStack_2d0 = uRam0000000141dd2d80;
  uStack_2cc = DAT_141dd2d84;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_278);
  }
  FUN_140041b80(local_278,&local_2d8);
  local_200 = local_278;
  uVar7 = CONCAT44(uVar9,DAT_1419f54d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar7,&local_208);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_f8) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_2d8);
  }
  puVar5 = &local_f8;
  uVar7 = 0;
LAB_1404486a0:
  FUN_140e87930(&local_2b8,DAT_141a08768,uVar7,puVar5);
  local_298 = 0x38;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  uVar7 = CONCAT44(uVar9,DAT_1419f5158);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,0,uVar7,0);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_1a8) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_1419f5248,0x80000000,&local_1a8);
  local_298 = 0x39;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  uVar7 = CONCAT44(uVar9,DAT_1419f5158);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,0,uVar7,0);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_1b8) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_1419f4f38,0x80000000,&local_1b8);
  local_298 = 0x3a;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2c8,0,CONCAT44(uVar9,DAT_1419ff3e8),0)
  ;
  if (puVar5 != &local_1c8) {
    local_2d8 = *(undefined4 *)puVar5;
    uStack_2d4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_2d0 = *(undefined4 *)(puVar5 + 1);
    uStack_2cc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2d8);
  }
  FUN_140e87930(&local_2b8,DAT_1419f5398,0x80000000,&local_1c8);
  local_298 = 0x3c;
  FUN_140e609c0(DAT_141a729d8);
  if (&local_2b8 != puVar4) {
    local_2d8 = (undefined4)local_2b8;
    uStack_2d4 = local_2b8._4_4_;
    uStack_2d0 = uStack_2b0;
    uStack_2cc = uStack_2ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_2d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
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
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  _eh_vector_destructor_iterator_(&local_288,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}


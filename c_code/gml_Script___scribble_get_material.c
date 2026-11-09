// gml_Script___scribble_get_material @ 0x1401dc590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___scribble_get_material(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  double *pdVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined4 uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  double dVar19;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar20;
  ulonglong **ppuVar21;
  undefined4 uVar22;
  ulonglong in_stack_fffffffffffffd40;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  double local_250;
  uint local_244;
  ulonglong *local_238;
  ulonglong *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_200;
  ulonglong local_1f8;
  byte local_1ec;
  ulonglong local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  ulonglong local_178;
  undefined4 local_170;
  undefined4 local_16c;
  ulonglong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  ulonglong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  ulonglong local_148;
  undefined4 local_140;
  undefined4 local_13c;
  ulonglong local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  ulonglong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  ulonglong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  ulonglong local_c8;
  undefined4 local_bc;
  ulonglong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_260 = "gml_Script___scribble_gen_9_build_vbuff_grids";
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  local_258 = 3;
  pcVar20 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uVar14 = 0xffffff;
  local_fc = 0xffffff;
  local_108 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddda38) &&
     (_Init_thread_header(&DAT_141ddda38), DAT_141ddda38 == -1)) {
    DAT_141ddda40 = (longlong *)FUN_140e63aa0(DAT_141a09578);
    _Init_thread_footer(&DAT_141ddda38);
  }
  if (DAT_141ddc09a == '\0') {
    FUN_140e64380(DAT_141ddda40,"gml_Script___scribble_gen_9_build_vbuff_grids");
    FUN_140e64380(local_res8,"gml_Script___scribble_gen_9_build_vbuff_grids");
  }
  local_258 = 5;
  if (DAT_141ddc09a == '\0') {
    DAT_141ddc09a = '\x01';
    puVar5 = (ulonglong *)(**(code **)(*DAT_141ddda40 + 0x10))(DAT_141ddda40,DAT_141a06b18);
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_2a0 = DAT_1419df7b8;
    uStack_29c = DAT_1419df7bc;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_2a8);
    local_238 = &local_1f8;
    ppuVar21 = &local_238;
    uVar6 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_2b8,1,ppuVar21)
    ;
    pcVar20 = (code *)((ulonglong)ppuVar21 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a06b58,0x80000000,&local_b8,pcVar20,
                  in_stack_fffffffffffffd40 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddda40);
    if (&local_b8 != puVar5) {
      local_2a8 = local_b8;
      uStack_2a0 = uStack_b0;
      uStack_29c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_2a8);
    }
    FUN_140e60910(1);
  }
  local_258 = 7;
  uVar6 = (**(code **)(*DAT_141ddda40 + 8))(DAT_141ddda40,DAT_141a06b18);
  iVar3 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar6);
  uVar22 = (undefined4)((ulonglong)pcVar20 >> 0x20);
  uVar16 = 0;
  if (0 < iVar3) {
    do {
      local_258 = 9;
      puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a066a8);
      if (puVar5 != &local_f8) {
        local_2a8 = *puVar5;
        uStack_2a0 = (undefined4)puVar5[1];
        uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_2a8);
      }
      local_258 = 10;
      puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06798);
      if (puVar5 != &local_128) {
        local_2a8 = *puVar5;
        uStack_2a0 = (undefined4)puVar5[1];
        uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_2a8);
      }
      local_258 = 0xb;
      puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06818);
      if (puVar5 != &local_108) {
        local_2a8 = *puVar5;
        uStack_2a0 = (undefined4)puVar5[1];
        uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_2a8);
        uVar14 = local_fc;
      }
      local_258 = 0xc;
      puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a067e8);
      if (puVar5 != &local_c8) {
        local_2a8 = *puVar5;
        uStack_2a0 = (undefined4)puVar5[1];
        uStack_29c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_2a8);
      }
      cVar2 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      uVar22 = (undefined4)((ulonglong)pcVar20 >> 0x20);
    } while (cVar2 != '\0');
    uVar16 = local_108;
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_258 = 0x12;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  local_238 = &local_128;
  local_230 = &local_f8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2a8);
  local_228 = local_1d8;
  local_2a8 = CONCAT44(uRam00000001419e24e4,_DAT_1419e24e0);
  uStack_2a0 = uRam00000001419e24e8;
  uStack_29c = uRam00000001419e24ec;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2a8);
  local_220 = &local_1c8;
  uStack_290 = local_100;
  bVar13 = (byte)uVar14 & 0x1f;
  uStack_28c = uVar14;
  if ((1 << bVar13 & 0x46U) == 0) {
    local_298 = uVar16;
  }
  else {
    FUN_1400419b0(&local_298,&local_108);
  }
  local_res18 = 0x100;
  uStack_26c = 7;
  local_278 = CONCAT44(local_278._4_4_,1);
  FUN_1400462a0(&local_298,&local_278);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_2a8 = local_298;
  uStack_2a0 = uStack_290;
  uStack_29c = uStack_28c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2a8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_218 = local_1b8;
  local_2a8 = CONCAT44(uRam00000001419e2534,_DAT_1419e2530);
  uStack_2a0 = uRam00000001419e2538;
  uStack_29c = uRam00000001419e253c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2a8);
  local_210 = local_1a8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_2a8);
  local_208 = local_198;
  local_2a8 = CONCAT44(uRam00000001419e2514,_DAT_1419e2510);
  uStack_2a0 = uRam00000001419e2518;
  uStack_29c = uRam00000001419e251c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2a8);
  local_200 = local_188;
  uVar6 = CONCAT44(uVar22,DAT_141a08ab8);
  FUN_140e634e0(local_res8,local_res10,&local_2b8,8,uVar6,&local_238);
  uVar22 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_258 = 0x13;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  local_238 = &local_128;
  local_230 = &local_f8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2a8);
  local_228 = local_1d8;
  local_2a8 = CONCAT44(uRam00000001419e24e4,_DAT_1419e24e0);
  uStack_2a0 = uRam00000001419e24e8;
  uStack_29c = uRam00000001419e24ec;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2a8);
  local_220 = &local_1c8;
  uStack_290 = local_100;
  if ((1 << bVar13 & 0x46U) == 0) {
    local_298 = uVar16;
    uStack_28c = uVar14;
  }
  else {
    uStack_28c = uVar14;
    FUN_1400419b0(&local_298,&local_108);
  }
  local_res18 = 0x200;
  uStack_26c = 7;
  local_278 = CONCAT44(local_278._4_4_,1);
  FUN_1400462a0(&local_298,&local_278);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_2a8 = local_298;
  uStack_2a0 = uStack_290;
  uStack_29c = uStack_28c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2a8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_218 = local_1b8;
  local_2a8 = CONCAT44(uRam00000001419e2534,_DAT_1419e2530);
  uStack_2a0 = uRam00000001419e2538;
  uStack_29c = uRam00000001419e253c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2a8);
  local_210 = local_1a8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_2a8);
  local_208 = local_198;
  local_2a8 = CONCAT44(uRam00000001419e24e4,_DAT_1419e24e0);
  uStack_2a0 = uRam00000001419e24e8;
  uStack_29c = uRam00000001419e24ec;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2a8);
  local_200 = local_188;
  uVar6 = CONCAT44(uVar22,DAT_141a08ab8);
  FUN_140e634e0(local_res8,local_res10,&local_2b8,8,uVar6,&local_238);
  uVar22 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_258 = 0x17;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  local_238 = &local_128;
  local_230 = &local_f8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2a8);
  local_228 = local_1d8;
  local_2a8 = CONCAT44(uRam00000001419e24f4,_DAT_1419e24f0);
  uStack_2a0 = uRam00000001419e24f8;
  uStack_29c = uRam00000001419e24fc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2a8);
  local_220 = &local_1c8;
  uStack_290 = local_100;
  if ((1 << bVar13 & 0x46U) == 0) {
    local_298 = uVar16;
    uStack_28c = uVar14;
  }
  else {
    uStack_28c = uVar14;
    FUN_1400419b0(&local_298,&local_108);
  }
  local_res18 = 0x400;
  uStack_26c = 7;
  local_278 = CONCAT44(local_278._4_4_,1);
  FUN_1400462a0(&local_298,&local_278);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_2a8 = local_298;
  uStack_2a0 = uStack_290;
  uStack_29c = uStack_28c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2a8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_218 = local_1b8;
  local_2a8 = CONCAT44(uRam00000001419e24f4,_DAT_1419e24f0);
  uStack_2a0 = uRam00000001419e24f8;
  uStack_29c = uRam00000001419e24fc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2a8);
  local_210 = local_1a8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_2a8);
  local_208 = local_198;
  local_2a8 = CONCAT44(uRam00000001419e24e4,_DAT_1419e24e0);
  uStack_2a0 = uRam00000001419e24e8;
  uStack_29c = uRam00000001419e24ec;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2a8);
  local_200 = local_188;
  uVar6 = CONCAT44(uVar22,DAT_141a08a88);
  FUN_140e634e0(local_res8,local_res10,&local_2b8,8,uVar6,&local_238);
  uVar22 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_258 = 0x18;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  local_238 = &local_128;
  local_230 = &local_f8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2a8);
  local_228 = local_1d8;
  local_2a8 = CONCAT44(uRam00000001419e2524,_DAT_1419e2520);
  uStack_2a0 = uRam00000001419e2528;
  uStack_29c = uRam00000001419e252c;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_2a8);
  local_220 = &local_1c8;
  uStack_290 = local_100;
  if ((1 << bVar13 & 0x46U) == 0) {
    local_298 = uVar16;
    uStack_28c = uVar14;
  }
  else {
    uStack_28c = uVar14;
    FUN_1400419b0(&local_298,&local_108);
  }
  local_res18 = 0x800;
  uStack_26c = 7;
  local_278 = CONCAT44(local_278._4_4_,1);
  FUN_1400462a0(&local_298,&local_278);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_2a8 = local_298;
  uStack_2a0 = uStack_290;
  uStack_29c = uStack_28c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_2a8);
  local_res18 = 0;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_218 = local_1b8;
  local_2a8 = CONCAT44(uRam00000001419e2524,_DAT_1419e2520);
  uStack_2a0 = uRam00000001419e2528;
  uStack_29c = uRam00000001419e252c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_2a8);
  local_210 = local_1a8;
  local_2a8 = CONCAT44(uRam0000000141dc6264,_DAT_141dc6260);
  uStack_2a0 = uRam0000000141dc6268;
  uStack_29c = uRam0000000141dc626c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_2a8);
  local_208 = local_198;
  local_2a8 = CONCAT44(uRam00000001419e2534,_DAT_1419e2530);
  uStack_2a0 = uRam00000001419e2538;
  uStack_29c = uRam00000001419e253c;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_2a8);
  local_200 = local_188;
  ppuVar21 = &local_238;
  uVar16 = CONCAT44(uVar22,DAT_141a08a88);
  FUN_140e634e0(local_res8,local_res10,&local_2b8,8,uVar16,ppuVar21);
  local_258 = 0x1c;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_c8,DAT_141a051e8,0x80000000,&local_a8,uVar16,
                (ulonglong)ppuVar21 & 0xffffffffffffff00);
  cVar2 = FUN_140e491e0(&local_a8);
  if (cVar2 != '\0') {
    local_258 = 0x1e;
    FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_138);
    local_2a8 = local_138;
    uStack_2a0 = uStack_130;
    uStack_29c = uStack_12c;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_2a8);
    local_258 = 0x1f;
    FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_138);
    local_2a8 = local_138;
    uStack_2a0 = uStack_130;
    uStack_29c = uStack_12c;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_2a8);
    local_258 = 0x20;
    FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_138);
    uVar17 = local_138;
    if ((uStack_12c & 0xffffff) != 0) {
      uVar17 = FUN_140e4b060(&local_138);
    }
    local_2a8 = uVar17 ^ 0x8000000000000000;
    uStack_29c = 0;
    local_298 = uVar17 ^ 0x8000000000000000;
    uStack_290 = uStack_2a0;
    uStack_28c = 0;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_298);
    local_258 = 0x21;
    FUN_140e85f80(local_res8,DAT_1419fd4e8,0x80000000,&local_138);
    uVar17 = local_138;
    if ((uStack_12c & 0xffffff) != 0) {
      uVar17 = FUN_140e4b060(&local_138);
    }
    local_2a8 = uVar17 ^ 0x8000000000000000;
    uStack_29c = 0;
    local_298 = uVar17 ^ 0x8000000000000000;
    uStack_290 = uStack_2a0;
    uStack_28c = 0;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_298);
    local_258 = 0x23;
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    local_244 = 0;
    local_250 = 0.0;
    local_258 = 0x24;
    pdVar7 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06b48);
    if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
      dVar19 = *pdVar7;
    }
    else {
      dVar19 = (double)FUN_140e4b060(pdVar7);
    }
    uVar17 = (ulonglong)dVar19;
    uVar15 = (uint)uVar17;
    while (uVar14 = (undefined4)(uVar16 >> 0x20), 0 < (int)uVar15) {
      uVar15 = (int)uVar17 - 1;
      uVar17 = (ulonglong)uVar15;
      local_258 = 0x26;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05ec8);
      iVar3 = FUN_140e4a740(&local_250);
      if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar8 = (longlong *)0x0;
        }
        else {
          plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar8 != &local_d8) {
        local_288 = (undefined4)*plVar8;
        uStack_284 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_280 = (undefined4)plVar8[1];
        uStack_27c = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_288);
      }
      local_258 = 0x27;
      iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_d8);
      if (0 < iVar3) {
        do {
          uVar14 = (undefined4)(uVar16 >> 0x20);
          local_258 = 0x29;
          puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a071f8);
          if (puVar9 != &local_118) {
            local_288 = *(undefined4 *)puVar9;
            uStack_284 = *(undefined4 *)((longlong)puVar9 + 4);
            uStack_280 = *(undefined4 *)(puVar9 + 1);
            uStack_27c = *(undefined4 *)((longlong)puVar9 + 0xc);
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            FUN_140041b80(&local_118,&local_288);
          }
          local_258 = 0x2a;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06818);
          uStack_26c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_270 = (undefined4)puVar5[1];
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
            local_278 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_278,puVar5);
          }
          local_res18 = 0x1000;
          uStack_29c = 7;
          local_2a8 = CONCAT44(local_2a8._4_4_,1);
          FUN_1400462a0(&local_278,&local_2a8);
          if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          uStack_28c = uStack_26c;
          uStack_290 = uStack_270;
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
            local_298 = local_278;
          }
          else {
            FUN_1400419b0(&local_298,&local_278);
          }
          local_res18 = 0x3000;
          FUN_1400460e0(&local_298,&local_118);
          local_288 = (undefined4)local_298;
          uStack_284 = local_298._4_4_;
          uStack_280 = uStack_290;
          uStack_27c = uStack_28c;
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_288);
          local_res18 = 0x1000;
          if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_298);
          }
          local_res18 = 0;
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_258 = 0x2c;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06b78);
          local_238 = &local_128;
          local_230 = &local_118;
          local_288 = _DAT_1419e2510;
          uStack_284 = uRam00000001419e2514;
          uStack_280 = uRam00000001419e2518;
          uStack_27c = uRam00000001419e251c;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_288);
          local_228 = local_1d8;
          local_220 = &local_e8;
          local_288 = _DAT_1419e2510;
          uStack_284 = uRam00000001419e2514;
          uStack_280 = uRam00000001419e2518;
          uStack_27c = uRam00000001419e251c;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_288);
          local_218 = local_1b8;
          FUN_140e609c0(local_res8);
          uVar6 = CONCAT44(uVar14,DAT_141a069f8);
          puVar11 = (undefined4 *)
                    FUN_140e634e0(local_res8,local_res10,&local_2b8,5,uVar6,&local_238);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (puVar11 != puVar10) {
            local_288 = *puVar11;
            uStack_284 = puVar11[1];
            uStack_280 = puVar11[2];
            uStack_27c = puVar11[3];
            if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_288);
          }
          FUN_140e60910(1);
          local_258 = 0x2d;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06b08);
          local_238 = &local_128;
          local_230 = &local_118;
          local_288 = _DAT_1419e2500;
          uStack_284 = uRam00000001419e2504;
          uStack_280 = uRam00000001419e2508;
          uStack_27c = uRam00000001419e250c;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_288);
          local_228 = local_1d8;
          local_220 = &local_e8;
          local_288 = _DAT_1419e2500;
          uStack_284 = uRam00000001419e2504;
          uStack_280 = uRam00000001419e2508;
          uStack_27c = uRam00000001419e250c;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_288);
          local_218 = local_1b8;
          FUN_140e609c0(local_res8);
          uVar6 = CONCAT44(uVar14,DAT_141a069f8);
          puVar11 = (undefined4 *)
                    FUN_140e634e0(local_res8,local_res10,&local_2b8,5,uVar6,&local_238);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (puVar11 != puVar10) {
            local_288 = *puVar11;
            uStack_284 = puVar11[1];
            uStack_280 = puVar11[2];
            uStack_27c = puVar11[3];
            if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_288);
          }
          FUN_140e60910(1);
          local_258 = 0x2e;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06a48);
          local_238 = &local_128;
          local_230 = &local_118;
          local_288 = _DAT_1419e24e0;
          uStack_284 = uRam00000001419e24e4;
          uStack_280 = uRam00000001419e24e8;
          uStack_27c = uRam00000001419e24ec;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_288);
          local_228 = local_1d8;
          local_220 = &local_e8;
          local_288 = _DAT_1419e24e0;
          uStack_284 = uRam00000001419e24e4;
          uStack_280 = uRam00000001419e24e8;
          uStack_27c = uRam00000001419e24ec;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_288);
          local_218 = local_1b8;
          FUN_140e609c0(local_res8);
          uVar6 = CONCAT44(uVar14,DAT_141a06a78);
          puVar11 = (undefined4 *)
                    FUN_140e634e0(local_res8,local_res10,&local_2b8,5,uVar6,&local_238);
          uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (puVar11 != puVar10) {
            local_288 = *puVar11;
            uStack_284 = puVar11[1];
            uStack_280 = puVar11[2];
            uStack_27c = puVar11[3];
            if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_288);
          }
          FUN_140e60910(1);
          local_258 = 0x2f;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06a38);
          local_238 = &local_128;
          local_230 = &local_118;
          local_288 = _DAT_1419e2530;
          uStack_284 = uRam00000001419e2534;
          uStack_280 = uRam00000001419e2538;
          uStack_27c = uRam00000001419e253c;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_288);
          local_228 = local_1d8;
          local_220 = &local_e8;
          local_288 = _DAT_1419e2530;
          uStack_284 = uRam00000001419e2534;
          uStack_280 = uRam00000001419e2538;
          uStack_27c = uRam00000001419e253c;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_288);
          local_218 = local_1b8;
          FUN_140e609c0(local_res8);
          uVar16 = CONCAT44(uVar14,DAT_141a06a78);
          puVar11 = (undefined4 *)
                    FUN_140e634e0(local_res8,local_res10,&local_2b8,5,uVar16,&local_238);
          if (puVar11 != puVar10) {
            local_288 = *puVar11;
            uStack_284 = puVar11[1];
            uStack_280 = puVar11[2];
            uStack_27c = puVar11[3];
            if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar10);
            }
            FUN_140041b80(puVar10,&local_288);
          }
          FUN_140e60910(1);
          local_258 = 0x31;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06b78);
          local_238 = &local_148;
          if (puVar5 != &local_1e8) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_288);
          }
          local_230 = &local_1e8;
          puVar5 = (ulonglong *)FUN_140e79230(&local_2b8,2,&local_238);
          if (puVar5 != &local_148) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_288);
          }
          local_258 = 0x32;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06b08);
          local_238 = &local_158;
          if (puVar5 != &local_1e8) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_288);
          }
          local_230 = &local_1e8;
          puVar5 = (ulonglong *)FUN_140e79230(&local_2b8,2,&local_238);
          if (puVar5 != &local_158) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_288);
          }
          local_258 = 0x33;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a48);
          local_238 = &local_168;
          if (puVar5 != &local_1e8) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_288);
          }
          local_230 = &local_1e8;
          puVar5 = (ulonglong *)FUN_140e79090(&local_2b8,2,&local_238);
          if (puVar5 != &local_168) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_288);
          }
          local_258 = 0x34;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          puVar5 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a38);
          local_238 = &local_178;
          if (puVar5 != &local_1e8) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_288);
          }
          local_230 = &local_1e8;
          puVar5 = (ulonglong *)FUN_140e79090(&local_2b8,2,&local_238);
          if (puVar5 != &local_178) {
            local_288 = (undefined4)*puVar5;
            uStack_284 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_280 = (undefined4)puVar5[1];
            uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_288);
          }
          cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
        } while (cVar2 != '\0');
      }
      FUN_140e63970(local_78,&local_res8,&local_res10);
      local_258 = 0x37;
      uVar4 = local_244 & 0xffffff;
      if (uVar4 == 0) {
LAB_1401de2b4:
        local_250 = local_250 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_250 = (double)FUN_140e4b060(&local_250);
          local_244 = 0;
          goto LAB_1401de2b4;
        }
        if (uVar4 == 7) {
          local_250 = (double)CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_250 = (double)((longlong)local_250 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_244 = 0;
            goto LAB_1401de2b4;
          }
          FUN_140042910(&DAT_14172c3d8,&local_250,&local_250);
        }
      }
      if (local_68 != 0) {
        FUN_140e4cd60();
      }
    }
    local_258 = 0x3a;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06b78);
    local_238 = &local_148;
    uVar12 = CONCAT44(uVar14,DAT_141a05f08);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar12,&local_238);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      uStack_28c = local_13c;
      uStack_290 = local_140;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) == 0) {
        local_298 = local_148;
      }
      else {
        FUN_1400419b0(&local_298,&local_148);
      }
      puVar18 = &local_298;
      uVar15 = 2;
    }
    else {
      uStack_29c = 0;
      local_2a8 = 0;
      puVar18 = &local_2a8;
      uVar15 = 1;
    }
    uVar4 = uStack_29c;
    local_res18 = uVar15;
    FUN_140e609c0(local_res8);
    if (puVar18 != puVar9) {
      local_288 = *(undefined4 *)puVar18;
      uStack_284 = *(undefined4 *)((longlong)puVar18 + 4);
      uStack_280 = *(undefined4 *)(puVar18 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar18 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    if (((uVar15 & 2) != 0) &&
       (uVar15 = uVar15 & 0xfffffffd, local_res18 = uVar15,
       (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_298);
    }
    if (((uVar15 & 1) != 0) &&
       (uVar15 = uVar15 & 0xfffffffe, local_res18 = uVar15, (1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0
       )) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140e60910(1);
    local_258 = 0x3b;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06b08);
    local_238 = &local_158;
    uVar12 = CONCAT44(uVar14,DAT_141a05f08);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar12,&local_238);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      uStack_28c = local_14c;
      uStack_290 = local_150;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
        local_298 = local_158;
      }
      else {
        FUN_1400419b0(&local_298,&local_158);
      }
      puVar18 = &local_298;
      uVar15 = uVar15 | 8;
    }
    else {
      uStack_29c = 0;
      local_2a8 = 0;
      puVar18 = &local_2a8;
      uVar15 = uVar15 | 4;
    }
    uVar4 = uStack_29c;
    local_res18 = uVar15;
    FUN_140e609c0(local_res8);
    if (puVar18 != puVar9) {
      local_288 = *(undefined4 *)puVar18;
      uStack_284 = *(undefined4 *)((longlong)puVar18 + 4);
      uStack_280 = *(undefined4 *)(puVar18 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar18 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    if (((uVar15 & 8) != 0) &&
       (uVar15 = uVar15 & 0xfffffff7, local_res18 = uVar15,
       (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_298);
    }
    if (((uVar15 & 4) != 0) &&
       (uVar15 = uVar15 & 0xfffffffb, local_res18 = uVar15, (1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0
       )) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140e60910(1);
    local_258 = 0x3c;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06a48);
    local_238 = &local_168;
    uVar12 = CONCAT44(uVar14,DAT_141a05f08);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar12,&local_238);
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      uStack_28c = local_15c;
      uStack_290 = local_160;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
        local_298 = local_168;
      }
      else {
        FUN_1400419b0(&local_298,&local_168);
      }
      puVar18 = &local_298;
      uVar15 = uVar15 | 0x20;
    }
    else {
      uStack_29c = 0;
      local_2a8 = 0;
      puVar18 = &local_2a8;
      uVar15 = uVar15 | 0x10;
    }
    uVar4 = uStack_29c;
    local_res18 = uVar15;
    FUN_140e609c0(local_res8);
    if (puVar18 != puVar9) {
      local_288 = *(undefined4 *)puVar18;
      uStack_284 = *(undefined4 *)((longlong)puVar18 + 4);
      uStack_280 = *(undefined4 *)(puVar18 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar18 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    if (((uVar15 & 0x20) != 0) &&
       (uVar15 = uVar15 & 0xffffffdf, local_res18 = uVar15,
       (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_298);
    }
    if (((uVar15 & 0x10) != 0) &&
       (uVar15 = uVar15 & 0xffffffef, local_res18 = uVar15, (1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0
       )) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140e60910(1);
    local_258 = 0x3d;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06a38);
    local_238 = &local_178;
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,CONCAT44(uVar14,DAT_141a05f08),
                          &local_238);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      uStack_28c = local_16c;
      uStack_290 = local_170;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
        local_298 = local_178;
      }
      else {
        FUN_1400419b0(&local_298,&local_178);
      }
      puVar18 = &local_298;
      uVar15 = uVar15 | 0x80;
    }
    else {
      uStack_29c = 0;
      local_2a8 = 0;
      puVar18 = &local_2a8;
      uVar15 = uVar15 | 0x40;
    }
    uVar4 = uStack_29c;
    local_res18 = uVar15;
    FUN_140e609c0(local_res8);
    if (puVar18 != puVar9) {
      local_288 = *(undefined4 *)puVar18;
      uStack_284 = *(undefined4 *)((longlong)puVar18 + 4);
      uStack_280 = *(undefined4 *)(puVar18 + 1);
      uStack_27c = *(undefined4 *)((longlong)puVar18 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    if (((char)uVar15 < '\0') &&
       (uVar15 = uVar15 & 0xffffff7f, local_res18 = uVar15,
       (1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_298);
    }
    if (((uVar15 & 0x40) != 0) &&
       (uVar15 = uVar15 & 0xffffffbf, (1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140e60910(1);
    local_258 = 0x3f;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a48);
    uVar12 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06b78);
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe278);
    FUN_140e609c0(local_res8);
    uStack_28c = 0;
    local_298 = 0x3ff0000000000000;
    local_res18 = uVar15 | 0x4000;
    FUN_1400460e0(&local_298,uVar6);
    uStack_26c = uStack_28c;
    uStack_270 = uStack_290;
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
      local_278 = local_298;
    }
    else {
      FUN_1400419b0(&local_278,&local_298);
    }
    local_res18 = uVar15 | 0xc000;
    FUN_1400462a0(&local_278,uVar12);
    if (&local_278 != puVar9) {
      local_288 = (undefined4)local_278;
      uStack_284 = local_278._4_4_;
      uStack_280 = uStack_270;
      uStack_27c = uStack_26c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    local_res18 = uVar15 | 0x4000;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140e60910(1);
    local_258 = 0x40;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a38);
    uVar12 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06b08);
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe3f8);
    FUN_140e609c0(local_res8);
    uStack_26c = 0;
    local_278 = 0x3ff0000000000000;
    local_res18 = uVar15 | 0x10000;
    FUN_1400460e0(&local_278,uVar6);
    uStack_28c = uStack_26c;
    uStack_290 = uStack_270;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_298 = local_278;
    }
    else {
      FUN_1400419b0(&local_298,&local_278);
    }
    local_res18 = uVar15 | 0x30000;
    FUN_1400462a0(&local_298,uVar12);
    if (&local_298 != puVar9) {
      local_288 = (undefined4)local_298;
      uStack_284 = local_298._4_4_;
      uStack_280 = uStack_290;
      uStack_27c = uStack_28c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_288);
    }
    local_res18 = uVar15 | 0x10000;
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140e60910(1);
  }
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
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
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << bVar13 & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_1f8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_268;
  return param_3;
}


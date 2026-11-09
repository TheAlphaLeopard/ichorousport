// gml_Object_oOcean_Create_0 @ 0x140b64a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oOcean_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffd20;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 *local_2c8;
  char *pcStack_2c0;
  undefined4 local_2b8;
  double local_2a8;
  uint local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  char *local_240;
  undefined4 local_238;
  undefined8 *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 *local_e8;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  
  bVar4 = false;
  bVar3 = false;
  local_240 = "gml_Object_oMeatLock_Draw_0";
  local_238 = 0;
  local_248 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_248;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1e8,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_27c = 0xffffff;
  local_288 = 0;
  uStack_24c = 0xffffff;
  local_258 = (undefined8 *)0x0;
  local_1fc = 0xffffff;
  local_208 = 0;
  uStack_11c = 0xffffff;
  local_128 = (undefined8 *)0x0;
  uStack_12c = 0xffffff;
  local_138 = (undefined8 *)0x0;
  uStack_13c = 0xffffff;
  local_148 = (undefined8 *)0x0;
  uStack_25c = 0xffffff;
  local_268 = (undefined8 *)0x0;
  local_20c = 0xffffff;
  local_218 = 0;
  uStack_14c = 0xffffff;
  local_158 = (undefined8 *)0x0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_238 = 2;
  local_29c = 0;
  local_2a8 = 0.0;
  bVar2 = true;
  do {
    iVar7 = 0;
    if (!bVar2) {
      local_238 = 2;
      uVar6 = local_29c & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_2a8 = (double)CONCAT44(local_2a8._4_4_,local_2a8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_2a8 = (double)((longlong)local_2a8 + 1);
          }
          else {
            if (uVar6 == 0xd) goto LAB_140b64c36;
            FUN_140042910(&DAT_14172c3d8,&local_2a8,&local_2a8);
          }
          goto LAB_140b64c44;
        }
        local_2a8 = (double)FUN_140e4b060(&local_2a8);
LAB_140b64c36:
        local_29c = 0;
      }
      local_2a8 = local_2a8 + 1.0;
    }
LAB_140b64c44:
    bVar2 = false;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4448);
    if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
      iVar7 = *(int *)(*plVar8 + 0x24);
    }
    local_10c = 0;
    local_118 = (double)iVar7;
    iVar7 = FUN_140e851f0(&local_2a8,&local_118,DAT_141955260,1);
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar7 == -2 || -1 < iVar7) {
      local_238 = 9;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
      FUN_140e87440(uVar10,DAT_1419f2958,0x80000000,&local_218,
                    (ulonglong)pcVar12 & 0xffffffffffffff00,
                    in_stack_fffffffffffffd20 & 0xffffffffffffff00);
      uVar10 = FUN_140069500(uVar10);
      uVar14 = 0;
      puVar11 = &local_218;
      uVar10 = FUN_140e63610(uVar10,param_2,&local_2d8,0,puVar11,0);
      cVar5 = FUN_140e491e0(uVar10);
      if (cVar5 != '\0') {
        local_238 = 10;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_298 = 0;
        local_290 = 0;
        local_28c = 5;
        if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        local_278 = 0;
        local_270 = 0;
        local_26c = 5;
        uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
        uVar15 = (ulonglong)puVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar10,DAT_1419f2978,0x80000000,&local_158,uVar15,uVar14 & 0xffffffffffffff00)
        ;
        uVar13 = (undefined4)(uVar15 >> 0x20);
        pcStack_2c0 = (char *)CONCAT44(uStack_14c,uStack_150);
        local_2c8 = local_158;
        if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1e8);
        }
        FUN_140041b80(local_1e8,&local_2c8);
        local_b8 = local_1e8;
        uStack_1ec = 0xf;
        local_1f8 = (longlong *)0x100000100000032;
        pcStack_2c0 = (char *)CONCAT44(0xf,uStack_1f0);
        local_2c8 = (undefined8 *)0x100000100000032;
        if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_2c8);
        local_b0 = local_1d8;
        puVar11 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_278,1,CONCAT44(uVar13,DAT_1419fe728),
                                &local_b8);
        if (puVar11 != &local_1c8) {
          local_2c8 = (undefined8 *)*puVar11;
          pcStack_2c0 = (char *)puVar11[1];
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_2c8);
        }
        local_a8 = &local_1c8;
        local_2c8 = _DAT_1419df7a0;
        pcStack_2c0 = pcRam00000001419df7a8;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_2c8);
        local_a0 = local_1b8;
        gml_Script_pal_swap_layer_init(param_1,param_2,&local_298,3,&local_b0);
      }
      local_238 = 0xc;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      uVar14 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
      uVar15 = 0;
      FUN_140e63610(param_1,param_2,&local_2d8,0,uVar14,0);
      local_238 = 0xe;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2d8 = 0;
      local_2d0 = 0;
      local_2cc = 5;
      uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
      FUN_140e87440(uVar10,DAT_1419f2958,0x80000000,&local_218,uVar14 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      uVar10 = FUN_140069500(uVar10);
      uVar10 = FUN_140e63610(uVar10,param_2,&local_2d8,0,&local_218,0);
      cVar5 = FUN_140e491e0(uVar10);
      if (cVar5 != '\0') {
        local_238 = 0xf;
        if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        local_290 = 0;
        pcStack_2c0 = "gml_Script_pal_swap_reset";
        local_2c8 = DAT_141dc7a50;
        DAT_141dc7a50 = &local_2c8;
        local_28c = 5;
        local_298 = 0;
        local_2b8 = 0x71;
        iVar7 = FUN_140ec9d80();
        if (iVar7 != -1) {
          local_2b8 = 0x71;
          FUN_140ec9dc0();
        }
        DAT_141dc7a50 = (undefined8 **)local_2c8;
      }
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      _eh_vector_destructor_iterator_(local_1e8,0x10,9,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 **)local_248;
      return;
    }
    local_238 = 4;
    plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4448);
    iVar7 = FUN_140e4a740(&local_2a8);
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar7 < 0) || (*(int *)(lVar1 + 0x24) <= iVar7)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar8 != &local_288) {
      local_2c8 = (undefined8 *)*plVar8;
      pcStack_2c0 = (char *)plVar8[1];
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2c8);
    }
    local_238 = 5;
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    uVar14 = (ulonglong)pcVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a0a7f8,0x80000000,&local_258,uVar14,in_stack_fffffffffffffd20);
    local_fc = 0;
    local_108 = 0x4056800000000000;
    iVar7 = FUN_140e851f0(&local_258,&local_108,DAT_141955260,1);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (iVar7 < 1) {
LAB_140b64e9b:
      uStack_dc = 0;
      local_e8 = (undefined1 *)0x3ff0000000000000;
      ppuVar9 = &local_e8;
      bVar3 = true;
    }
    else {
      in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(&local_288,DAT_141a0a7f8,0x80000000,&local_258,uVar14,in_stack_fffffffffffffd20)
      ;
      local_ec = 0;
      local_f8 = 0x4070e00000000000;
      iVar7 = FUN_140e851f0(&local_258,&local_f8,DAT_141955260,1);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if (iVar7 == -2 || -1 < iVar7) goto LAB_140b64e9b;
      local_cc = 0;
      local_d8 = &DAT_bff0000000000000;
      ppuVar9 = &local_d8;
      bVar4 = true;
    }
    local_2c8 = (undefined8 *)*ppuVar9;
    pcStack_2c0 = ppuVar9[1];
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2c8);
    if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_e8);
    }
    if ((bVar4) && (bVar4 = false, (1 << ((byte)local_cc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_d8);
    }
    local_238 = 6;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a0a9f8,0x80000000,&local_128,uVar14,in_stack_fffffffffffffd20);
    local_bc = 6;
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_c8 = param_1;
    FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_138,uVar14,in_stack_fffffffffffffd20);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uStack_1ec = 6;
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    local_1f8 = param_1;
    FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_148,uVar14,in_stack_fffffffffffffd20);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a05568,0x80000000,&local_268,uVar14,in_stack_fffffffffffffd20);
    in_stack_fffffffffffffd20 = in_stack_fffffffffffffd20 & 0xffffffffffffff00;
    FUN_140e87440(&local_288,DAT_141a0a7f8,0x80000000,&local_258,uVar14 & 0xffffffffffffff00,
                  in_stack_fffffffffffffd20);
    pcStack_2c0 = (char *)CONCAT44(uStack_11c,uStack_120);
    local_2c8 = local_128;
    if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_b8 = local_1e8;
    local_2c8 = _DAT_141dc72c0;
    pcStack_2c0 = (char *)uRam0000000141dc72c8;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2c8);
    local_b0 = local_1d8;
    pcStack_2c0 = (char *)CONCAT44(uStack_12c,uStack_130);
    local_2c8 = local_138;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_2c8);
    local_a8 = &local_1c8;
    pcStack_2c0 = (char *)CONCAT44(uStack_13c,uStack_140);
    local_2c8 = local_148;
    if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_2c8);
    local_a0 = local_1b8;
    pcStack_2c0 = (char *)CONCAT44(uStack_25c,uStack_260);
    local_2c8 = local_268;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_2c8);
    local_98 = local_1a8;
    uStack_21c = uStack_25c;
    uStack_220 = uStack_260;
    if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) == 0) {
      local_228 = local_268;
    }
    else {
      FUN_1400419b0(&local_228,&local_268);
    }
    FUN_140042560(&local_228,&local_208);
    pcStack_2c0 = (char *)CONCAT44(uStack_21c,uStack_220);
    local_2c8 = local_228;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_2c8);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_90 = local_198;
    pcStack_2c0 = (char *)CONCAT44(uStack_24c,uStack_250);
    local_2c8 = local_258;
    if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_2c8);
    local_88 = local_188;
    local_2c8 = _DAT_1419ec3f0;
    pcStack_2c0 = (char *)uRam00000001419ec3f8;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_2c8);
    local_80 = local_178;
    local_2c8 = _DAT_1419ec400;
    pcStack_2c0 = pcRam00000001419ec408;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2c8);
    local_78 = local_168;
    pcVar12 = (code *)&local_b8;
    FUN_1403ae470(param_1,param_2,&local_2d8,9,pcVar12);
  } while( true );
}


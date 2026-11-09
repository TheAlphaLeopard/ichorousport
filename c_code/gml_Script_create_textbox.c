// gml_Script_create_textbox @ 0x140264620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_create_textbox
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 **ppuVar12;
  undefined4 uVar13;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined4 local_2f0;
  uint local_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  double local_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  double local_2c4;
  undefined4 local_2bc;
  uint local_2b8;
  double local_2b4;
  undefined4 local_2ac;
  undefined4 local_2a8;
  double local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  double local_280;
  undefined4 local_278;
  undefined4 local_274;
  double local_270;
  undefined4 local_264;
  double local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  double local_248;
  undefined4 local_240;
  undefined4 local_23c;
  double local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined4 local_200 [3];
  undefined4 local_1f4;
  double local_1e8 [4];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  
  local_210 = "gml_Script_title_draw_lines";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x3f;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_1e8,0x10,0xf,FUN_1400424d0,FUN_140041b30);
  local_264 = 0xffffff;
  local_270 = 0.0;
  local_2c8 = 0xffffff;
  local_274 = 0xffffff;
  local_280 = 0.0;
  local_2ec = 0xffffff;
  local_2f8 = 0.0;
  uVar10 = 0;
  uVar11 = 0;
  local_284 = 0;
  local_290 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (param_4 < 3) {
    plVar8 = (longlong *)&DAT_1419df7b0;
  }
  else {
    plVar8 = (longlong *)param_5[2];
  }
  iVar4 = 0;
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    iVar4 = *(int *)(*plVar8 + 0x24);
  }
  local_294 = 0;
  local_2a0 = (double)iVar4;
  local_208 = 0x42;
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if (param_4 < 1) {
    pdVar5 = &DAT_1419df7b0;
LAB_14026478d:
    local_2d8 = *pdVar5;
    dStack_2d0 = pdVar5[1];
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2d8);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != local_1e8) goto LAB_14026478d;
  }
  local_f8 = local_1e8;
  uVar6 = CONCAT44(uVar9,DAT_1419fd658);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_2e8,1,uVar6,&local_f8);
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (pdVar5 != &local_270) {
    local_2d8 = *pdVar5;
    dStack_2d0 = pdVar5[1];
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    FUN_140041b80(&local_270,&local_2d8);
  }
  local_208 = 0x43;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if (param_4 < 2) {
    pdVar5 = &DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)param_5[1];
    if (pdVar5 == local_1e8) goto LAB_1402648a6;
  }
  local_2d8 = *pdVar5;
  dStack_2d0 = pdVar5[1];
  if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2d8);
LAB_1402648a6:
  local_f8 = local_1e8;
  ppuVar12 = (undefined8 **)CONCAT44(uVar9,DAT_1419fd658);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_2e8,1,ppuVar12,&local_f8);
  uVar9 = 0xffffff;
  if (pdVar5 != &local_280) {
    local_2d8 = *pdVar5;
    dStack_2d0 = pdVar5[1];
    FUN_140041b80(&local_280,&local_2d8);
    local_2c8 = local_274;
    uVar9 = local_274;
  }
  local_208 = 0x45;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2ec = 0;
  local_2f8 = 0.0;
  bVar2 = true;
  do {
    uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    if (!bVar2) {
      local_208 = 0x45;
      uVar3 = local_2ec & 0xffffff;
      if (uVar3 == 0) {
LAB_140264994:
        local_2f8 = (double)CONCAT44(uVar11,uVar10) + 1.0;
      }
      else if (uVar3 == 1) {
        local_2f8 = (double)FUN_140e4b060(&local_2f8);
        local_2f8 = local_2f8 + 1.0;
        local_2ec = 0;
      }
      else if (uVar3 == 7) {
        local_2f8 = (double)CONCAT44(local_2f8._4_4_,local_2f8._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_2f8 = (double)((longlong)local_2f8 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_2ec = 0;
          goto LAB_140264994;
        }
        FUN_140042910(&DAT_14172c3d8,&local_2f8,&local_2f8);
      }
    }
    bVar2 = false;
    iVar4 = FUN_140e851f0(&local_2f8,&local_2a0,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      _eh_vector_destructor_iterator_(local_1e8,0x10,0xf,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_218;
      return param_3;
    }
    local_208 = 0x46;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_290);
    }
    local_290 = 0;
    local_288 = 0;
    local_284 = 5;
    local_2a8 = local_294;
    local_2ac = local_298;
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
      local_2b4 = local_2a0;
    }
    else {
      FUN_1400419b0(&local_2b4,&local_2a0);
    }
    local_1f4 = 7;
    local_200[0] = 1;
    FUN_1400462a0(&local_2b4,local_200);
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_200);
    }
    local_23c = local_2a8;
    local_240 = local_2ac;
    if ((1 << ((byte)local_2a8 & 0x1f) & 0x46U) == 0) {
      local_248 = local_2b4;
    }
    else {
      FUN_1400419b0(&local_248,&local_2b4);
    }
    dStack_2d0 = (double)((ulonglong)dStack_2d0 & 0xffffffff);
    local_2d8 = 2.0;
    FUN_140046500(&local_248,&local_2d8);
    if ((1 << ((byte)((ulonglong)dStack_2d0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2b8 = local_2ec;
    local_2bc = local_2f0;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) == 0) {
      local_2c4 = local_2f8;
    }
    else {
      FUN_1400419b0(&local_2c4,&local_2f8);
    }
    FUN_1400462a0(&local_2c4,&local_248);
    if (param_4 < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[4];
    }
    uStack_24c = local_2b8;
    uStack_250 = local_2bc;
    if ((1 << ((byte)local_2b8 & 0x1f) & 0x46U) == 0) {
      local_258 = local_2c4;
    }
    else {
      FUN_1400419b0(&local_258,&local_2c4);
    }
    FUN_140042560(&local_258,puVar7);
    uStack_300 = CONCAT44(uStack_24c,uStack_250);
    local_308 = local_258;
    if ((1 << ((byte)local_1e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_308);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)local_2b8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c4);
    }
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if ((1 << ((byte)local_2a8 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b4);
    }
    local_f8 = local_1e8;
    local_f0 = &local_270;
    uVar6 = FUN_140e634e0(param_1,param_2,&local_290,1,CONCAT44(uVar13,DAT_1419fe728),&local_f8);
    uStack_230 = local_278;
    uStack_22c = uVar9;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) == 0) {
      local_238 = local_280;
    }
    else {
      FUN_1400419b0(&local_238,&local_280);
    }
    FUN_1400460e0(&local_238,uVar6);
    uStack_300 = CONCAT44(uStack_22c,uStack_230);
    local_308 = local_238;
    if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_308);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_e8 = local_1c8;
    iVar4 = FUN_140e4a740(&local_2f8);
    if (param_4 < 3) {
      plVar8 = (longlong *)&DAT_1419df7b0;
    }
    else {
      plVar8 = (longlong *)param_5[2];
    }
    if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (param_4 < 4) {
      pdVar5 = &DAT_1419df7b0;
    }
    else {
      pdVar5 = (double *)param_5[3];
    }
    uStack_21c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    uStack_220 = *(undefined4 *)(pdVar5 + 1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_228 = *pdVar5;
    }
    else {
      FUN_1400419b0(&local_228);
    }
    FUN_1400460e0(&local_228,plVar8);
    uStack_300 = CONCAT44(uStack_21c,uStack_220);
    local_308 = local_228;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_308);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_e0 = local_1b8;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_308);
    local_d8 = local_1a8;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_308);
    local_d0 = local_198;
    local_308 = _DAT_1419e38e0;
    uStack_300 = uRam00000001419e38e8;
    if ((1 << (local_188[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_308);
    local_c8 = local_188;
    local_308 = _DAT_1419e38e0;
    uStack_300 = uRam00000001419e38e8;
    if ((1 << (local_178[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_308);
    local_c0 = local_178;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_308);
    local_b8 = local_168;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_308);
    local_b0 = local_158;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_308);
    local_a8 = local_148;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_308);
    local_a0 = local_138;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_128[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_308);
    local_98 = local_128;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_118[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_308);
    local_90 = local_118;
    local_308 = DAT_1419df7b0;
    uStack_300 = _DAT_1419df7b8;
    if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_308);
    local_88 = local_108;
    ppuVar12 = &local_f0;
    gml_Script_draw_sprite_hires(param_1,param_2,&local_2e8,0xe,ppuVar12);
    uVar10 = SUB84(local_2f8,0);
    uVar11 = (undefined4)((ulonglong)local_2f8 >> 0x20);
    uVar9 = local_2c8;
  } while( true );
}


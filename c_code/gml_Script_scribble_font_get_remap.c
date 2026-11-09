// gml_Script_scribble_font_get_remap @ 0x14046ccd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble_font_get_remap
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffda0;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong local_228;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  double local_1f8;
  uint local_1ec;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  longlong local_180;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined4 *local_120;
  longlong *local_118;
  undefined4 *local_110;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  byte local_dc;
  longlong local_d8;
  undefined4 local_cc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined4 local_98 [3];
  undefined4 local_8c;
  undefined4 local_78 [3];
  undefined4 local_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_1d0 = "gml_Script_scribble_font_get_glyph_ranges";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 5;
  FUN_140041df0(local_58,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_22c = 0;
  local_238 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_20c = 0;
  local_218 = 0;
  local_184 = 0;
  local_190 = 0;
  local_194 = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 5;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[1];
  }
  iVar2 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_1c8 = 5;
    uStack_23c = 0xd;
    local_248 = 0;
    if (((int)local_58[0] < 2) || (puVar9 = (undefined8 *)local_50[1], &local_248 != puVar9)) {
      local_108 = 0;
      uStack_100 = uStack_240;
      uStack_fc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_108);
    }
  }
  local_1c8 = 7;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((int)local_58[0] < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_14046cf2b:
    local_248 = *plVar5;
    uStack_240 = (undefined4)plVar5[1];
    uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_248);
  }
  else {
    plVar5 = (longlong *)*local_50;
    if (plVar5 != &local_e8) goto LAB_14046cf2b;
  }
  local_148 = &local_e8;
  pplVar7 = &local_148;
  plVar5 = (longlong *)FUN_1401effd0(param_1,param_2,&local_238,1,pplVar7);
  if (plVar5 != &local_f8) {
    local_248 = *plVar5;
    uStack_240 = (undefined4)plVar5[1];
    uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_248);
  }
  local_1c8 = 9;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar11 = (ulonglong)pplVar7 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_141a06148,0x80000000,&local_68,uVar11,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar11 >> 0x20);
  local_248 = local_68;
  uStack_240 = uStack_60;
  uStack_23c = uStack_5c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_248);
  local_148 = &local_e8;
  uVar12 = CONCAT44(uVar13,DAT_141a095f8);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_238,1,uVar12,&local_148);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (plVar5 != &local_228) {
    local_248 = *plVar5;
    uStack_240 = (undefined4)plVar5[1];
    uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
  }
  local_1c8 = 10;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  local_148 = &local_228;
  local_248 = CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_240 = uRam00000001419df7c8;
  uStack_23c = uRam00000001419df7cc;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_248);
  local_140 = &local_d8;
  uVar12 = CONCAT44(uVar13,DAT_141a02658);
  FUN_140e634e0(param_1,param_2,&local_238,2,uVar12,&local_148);
  local_1c8 = 0xc;
  plVar5 = (longlong *)FUN_140e8da20(&local_238,param_1,0);
  if (plVar5 != &local_168) {
    local_248 = *plVar5;
    uStack_240 = (undefined4)plVar5[1];
    uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_248);
  }
  local_1c8 = 0xe;
  plVar5 = (longlong *)0x0;
  if (((uStack_21c & 0xffffff) == 2) && (local_228 != 0)) {
    if (*(int *)(local_228 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar5 = *(longlong **)(local_228 + 8);
    }
    if (plVar5 != &local_180) goto LAB_14046d23f;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_228;
LAB_14046d23f:
    local_248 = *plVar5;
    uStack_240 = (undefined4)plVar5[1];
    uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_248);
  }
  local_1c8 = 0xf;
  plVar5 = (longlong *)0x0;
  if (((uStack_21c & 0xffffff) == 2) && (local_228 != 0)) {
    if (*(int *)(local_228 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar5 = *(longlong **)(local_228 + 8);
    }
    if (plVar5 == &local_1e8) goto LAB_14046d304;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_228;
  }
  local_248 = *plVar5;
  uStack_240 = (undefined4)plVar5[1];
  uStack_23c = *(undefined4 *)((longlong)plVar5 + 0xc);
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_248);
LAB_14046d304:
  local_1c8 = 0x11;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1ec = 0;
  local_1f8 = 1.0;
  iVar2 = 0;
  if ((uStack_21c == 2) && (local_228 != 0)) {
    iVar2 = *(int *)(local_228 + 0x24);
  }
  do {
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    iVar2 = iVar2 + -1;
    if (iVar2 < 1) {
      local_1c8 = 0x2c;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_218 = 0;
      local_210 = 0;
      local_20c = 5;
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      local_190 = 0;
      local_188 = 0;
      local_184 = 5;
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      local_1a0 = 0;
      local_198 = 0;
      local_194 = 5;
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 5;
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b4 = 5;
      local_148 = &local_180;
      uVar12 = CONCAT44(uVar13,DAT_141a05338);
      plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a0,1,uVar12,&local_148);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (plVar5 != &local_d8) {
        local_258 = (undefined4)*plVar5;
        uStack_254 = *(undefined4 *)((longlong)plVar5 + 4);
        uStack_250 = (undefined4)plVar5[1];
        uStack_24c = *(undefined4 *)((longlong)plVar5 + 0xc);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_258);
      }
      local_140 = &local_d8;
      local_138 = &local_1e8;
      uVar12 = CONCAT44(uVar13,DAT_141a05338);
      puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar12,&local_138);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (puVar6 != local_b8) {
        local_258 = *puVar6;
        uStack_254 = puVar6[1];
        uStack_250 = puVar6[2];
        uStack_24c = puVar6[3];
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_258);
      }
      local_130 = local_b8;
      uVar12 = CONCAT44(uVar13,DAT_1419fcb18);
      puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_190,1,uVar12,&local_140);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (puVar6 != local_a8) {
        local_258 = *puVar6;
        uStack_254 = puVar6[1];
        uStack_250 = puVar6[2];
        uStack_24c = puVar6[3];
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_258);
      }
      local_128 = local_a8;
      uVar12 = CONCAT44(uVar13,DAT_1419fcb18);
      puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1b0,1,uVar12,&local_130);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (puVar6 != local_98) {
        local_258 = *puVar6;
        uStack_254 = puVar6[1];
        uStack_250 = puVar6[2];
        uStack_24c = puVar6[3];
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_258);
      }
      local_120 = local_98;
      local_118 = &local_168;
      uVar12 = CONCAT44(uVar13,DAT_1419fdca8);
      puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_218,2,uVar12,&local_128);
      uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if (puVar6 != local_78) {
        local_258 = *puVar6;
        uStack_254 = puVar6[1];
        uStack_250 = puVar6[2];
        uStack_24c = puVar6[3];
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_78);
        }
        FUN_140041b80(local_78,&local_258);
      }
      local_110 = local_78;
      FUN_140e634e0(param_1,param_2,&local_208,2,CONCAT44(uVar13,DAT_1419fe568),&local_118);
      local_1c8 = 0x2e;
      if (&local_168 != param_3) {
        local_258 = (undefined4)local_168;
        uStack_254 = local_168._4_4_;
        uStack_250 = uStack_160;
        uStack_24c = uStack_15c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_258);
      }
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b0);
      }
      if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a0);
      }
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      _eh_vector_destructor_iterator_(&local_e8,0x10,8,FUN_140041b30);
      if (0 < (int)local_58[0]) {
        puVar9 = local_50;
        do {
          puVar8 = (undefined8 *)*puVar9;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          *puVar8 = 0;
          *(undefined4 *)(puVar8 + 1) = 0;
          *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
          puVar9 = puVar9 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_140e4cd60(local_50);
      DAT_141dc7a50 = (undefined8 *)local_1d8;
      return param_3;
    }
    local_1c8 = 0x14;
    iVar3 = FUN_140e4a740(&local_1f8);
    plVar5 = (longlong *)0x0;
    if (((uStack_21c & 0xffffff) == 2) && (local_228 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_228 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_228 + 0x24));
      }
      else {
        plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_228 + 8));
      }
      if (plVar5 != &local_158) goto LAB_14046d3d3;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar5 = &local_228;
LAB_14046d3d3:
      local_258 = (undefined4)*plVar5;
      uStack_254 = *(undefined4 *)((longlong)plVar5 + 4);
      uStack_250 = (undefined4)plVar5[1];
      uStack_24c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_258);
    }
    local_1c8 = 0x16;
    uStack_fc = local_1dc;
    uStack_100 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_108 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_108,&local_1e8);
    }
    uStack_23c = 7;
    local_248 = CONCAT44(local_248._4_4_,1);
    FUN_1400460e0(&local_108,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    iVar3 = FUN_140e851f0(&local_158,&local_108,DAT_141955260,1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (iVar3 < 1) {
      local_1c8 = 0x26;
    }
    else {
      local_1c8 = 0x18;
      if ((int)local_58[0] < 2) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_50[1];
      }
      cVar1 = FUN_140e491e0(puVar9);
      if (cVar1 == '\0') {
        local_1c8 = 0x1e;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        local_148 = &local_180;
        local_140 = &local_1e8;
        local_138 = &local_168;
        uVar12 = CONCAT44(uVar13,DAT_1419fdca8);
        puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_218,2,uVar12,&local_148);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (puVar6 != local_b8) {
          local_258 = *puVar6;
          uStack_254 = puVar6[1];
          uStack_250 = puVar6[2];
          uStack_24c = puVar6[3];
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_258);
        }
        local_130 = local_b8;
        pplVar7 = &local_138;
      }
      else {
        local_1c8 = 0x1a;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = 0;
        local_210 = 0;
        local_20c = 5;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a0);
        }
        local_1a0 = 0;
        local_198 = 0;
        local_194 = 5;
        if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b0);
        }
        local_1b0 = 0;
        local_1a8 = 0;
        local_1a4 = 5;
        if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c0);
        }
        local_1c0 = 0;
        local_1b8 = 0;
        local_1b4 = 5;
        local_148 = &local_180;
        uVar12 = CONCAT44(uVar13,DAT_141a05338);
        plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a0,1,uVar12,&local_148);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (plVar5 != &local_d8) {
          local_258 = (undefined4)*plVar5;
          uStack_254 = *(undefined4 *)((longlong)plVar5 + 4);
          uStack_250 = (undefined4)plVar5[1];
          uStack_24c = *(undefined4 *)((longlong)plVar5 + 0xc);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_258);
        }
        local_140 = &local_d8;
        local_138 = &local_1e8;
        uVar12 = CONCAT44(uVar13,DAT_141a05338);
        puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1c0,1,uVar12,&local_138);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (puVar6 != local_b8) {
          local_258 = *puVar6;
          uStack_254 = puVar6[1];
          uStack_250 = puVar6[2];
          uStack_24c = puVar6[3];
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_258);
        }
        local_130 = local_b8;
        uVar12 = CONCAT44(uVar13,DAT_1419fcb18);
        puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_190,1,uVar12,&local_140);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (puVar6 != local_a8) {
          local_258 = *puVar6;
          uStack_254 = puVar6[1];
          uStack_250 = puVar6[2];
          uStack_24c = puVar6[3];
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_258);
        }
        local_128 = local_a8;
        uVar12 = CONCAT44(uVar13,DAT_1419fcb18);
        puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1b0,1,uVar12,&local_130);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (puVar6 != local_98) {
          local_258 = *puVar6;
          uStack_254 = puVar6[1];
          uStack_250 = puVar6[2];
          uStack_24c = puVar6[3];
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_258);
        }
        local_120 = local_98;
        local_118 = &local_168;
        uVar12 = CONCAT44(uVar13,DAT_1419fdca8);
        puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_218,2,uVar12,&local_128);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
        if (puVar6 != local_78) {
          local_258 = *puVar6;
          uStack_254 = puVar6[1];
          uStack_250 = puVar6[2];
          uStack_24c = puVar6[3];
          if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_78);
          }
          FUN_140041b80(local_78,&local_258);
        }
        local_110 = local_78;
        pplVar7 = &local_118;
      }
      uVar12 = CONCAT44(uVar13,DAT_1419fe568);
      FUN_140e634e0(param_1,param_2,&local_208,2,uVar12,pplVar7);
      local_1c8 = 0x21;
      local_258 = (undefined4)local_158;
      uStack_254 = local_158._4_4_;
      uStack_250 = uStack_150;
      uStack_24c = uStack_14c;
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      FUN_140041b80(&local_180,&local_258);
      local_1c8 = 0x22;
    }
    local_258 = (undefined4)local_158;
    uStack_254 = local_158._4_4_;
    uStack_250 = uStack_150;
    uStack_24c = uStack_14c;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_258);
    local_1c8 = 0x29;
    uVar4 = local_1ec & 0xffffff;
    if (uVar4 == 0) {
LAB_14046da68:
      local_1f8 = local_1f8 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_1f8 = (double)FUN_140e4b060(&local_1f8);
        local_1ec = 0;
        goto LAB_14046da68;
      }
      if (uVar4 == 7) {
        local_1f8 = (double)CONCAT44(local_1f8._4_4_,local_1f8._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_1f8 = (double)((longlong)local_1f8 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_1ec = 0;
          goto LAB_14046da68;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1f8,&local_1f8);
      }
    }
  } while( true );
}


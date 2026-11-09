// gml_GlobalScript_AMBIANCEINIT @ 0x140219160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * gml_GlobalScript_AMBIANCEINIT(ulonglong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  code *pcVar10;
  undefined4 uVar14;
  undefined8 uVar11;
  longlong **pplVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffd40;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  char local_2a8;
  longlong local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 local_264;
  double local_260;
  uint local_254;
  double local_250;
  uint local_244;
  undefined8 local_240;
  undefined4 local_234;
  longlong local_228;
  ulonglong uStack_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  undefined4 local_1ac;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  byte local_16c;
  longlong local_168 [2];
  longlong local_158 [4];
  longlong local_138;
  undefined4 local_12c;
  longlong *local_128;
  longlong local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  uint uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  double local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_280 = "gml_Script_pick_sidearm";
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  local_278 = 0xb4;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_178,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_234 = 0xffffff;
  local_240 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_244 = 0xffffff;
  local_250 = 0.0;
  plVar5 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0aac8);
  uVar7 = 0xffffff;
  uStack_fc = 0xffffff;
  lVar8 = 0;
  local_108 = 0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_254 = 0xffffff;
  local_260 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_264 = 0;
  local_270 = 0;
  local_18c = 0;
  local_198 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_278 = 0xb6;
  uStack_220 = CONCAT44(DAT_141dcdc94,DAT_141dcdc90);
  local_228 = DAT_141dcdc88;
  local_128 = plVar5;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  FUN_140041b80(&local_240,&local_228);
  local_278 = 0xb7;
  local_19c = 0xf;
  local_1a8 = 0x100000000000106;
  uVar13 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_1a8,DAT_141a0a958,0x80000000,&local_98,uVar13,
                in_stack_fffffffffffffd40 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  uStack_220 = CONCAT44(uStack_8c,uStack_90);
  local_228 = local_98;
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  FUN_140041b80(&local_1c8,&local_228);
  local_278 = 0xb9;
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  local_270 = 0;
  local_268 = 0;
  local_264 = 5;
  local_218 = &local_1c8;
  uVar11 = CONCAT44(uVar14,DAT_1419fcb88);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_270,1,uVar11,&local_218);
  uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_278 = 0xbc;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    local_270 = 0;
    local_268 = 0;
    local_264 = 5;
    local_218 = &local_1c8;
    uVar13 = CONCAT44(uVar14,DAT_1419fdbf8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_270,1,uVar13,&local_218);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') goto LAB_1402196c9;
    local_278 = 0xbd;
    uStack_220 = CONCAT44(uStack_1bc,uStack_1c0);
    local_228 = local_1c8;
  }
  else {
    local_278 = 0xba;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_210 = &local_1c8;
    local_228 = _DAT_141dcdcf8;
    uStack_220 = uRam0000000141dcdd00;
    if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_228);
    local_208 = local_158;
    pplVar12 = &local_210;
    uVar13 = CONCAT44(uVar14,DAT_1419fcba8);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_198,2,uVar13,pplVar12);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_278 = 0xbb;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      uVar14 = (undefined4)(uVar13 >> 0x20);
      local_270 = 0;
      local_268 = 0;
      local_264 = 5;
      local_218 = &local_1c8;
      local_228 = _DAT_141dcdd58;
      uStack_220 = uRam0000000141dcdd60;
      if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_228);
      local_210 = local_168;
      uVar13 = CONCAT44(uVar14,DAT_1419fcba8);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_270,2,uVar13,&local_218);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 == '\0') goto LAB_1402196c9;
      local_278 = 0xbb;
      uVar13 = param_1;
      FUN_140e87170(&local_1c8,DAT_141a0a828,0x80000000,&local_b8,param_1,param_2);
      uStack_220 = CONCAT44(uStack_ac,uStack_b0);
      local_228 = local_b8;
    }
    else {
      local_278 = 0xba;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_141a0a8a8,0x80000000,&local_a8,uVar13,
                    (ulonglong)pplVar12 & 0xffffffffffffff00);
      uStack_220 = CONCAT44(uStack_9c,uStack_a0);
      local_228 = local_a8;
    }
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  FUN_140041b80(&local_240,&local_228);
LAB_1402196c9:
  local_278 = 0xc0;
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  local_244 = 0;
  local_250 = 0.0;
  cVar2 = '\x01';
LAB_140219703:
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if (cVar2 == '\0') {
    local_278 = 0xc0;
    uVar3 = local_244 & 0xffffff;
    if (uVar3 != 0) {
      if (uVar3 != 1) {
        if (uVar3 == 7) {
          local_250 = (double)CONCAT44(local_250._4_4_,local_250._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_250 = (double)((longlong)local_250 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_244 = 0;
            goto LAB_14021974b;
          }
          FUN_140042910(&DAT_14172c3d8,&local_250,&local_250);
        }
        goto LAB_140219754;
      }
      local_250 = (double)FUN_140e4b060(&local_250);
      local_244 = 0;
    }
LAB_14021974b:
    local_250 = local_250 + 1.0;
  }
LAB_140219754:
  local_2a8 = '\0';
  local_7c = 0;
  local_88 = 0x4000000000000000;
  iVar4 = FUN_140e851f0(&local_250,&local_88,DAT_141955260,1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar4 != -2 && iVar4 < 0) {
    local_278 = 0xc2;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    local_270 = 0;
    local_268 = 0;
    local_264 = 5;
    if (plVar5 != &local_178) {
      local_298 = *plVar5;
      uStack_290 = plVar5[1];
      if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_298);
    }
    local_218 = &local_178;
    uVar13 = CONCAT44(uVar14,DAT_141a0aa48);
    plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_270,1,uVar13,&local_218);
    if (plVar5 != &local_108) {
      local_298 = *plVar5;
      uStack_290 = plVar5[1];
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_298);
      lVar8 = local_108;
      uVar7 = uStack_fc;
    }
    local_278 = 0xc3;
    plVar5 = (longlong *)FUN_140e8da20(&local_270,param_1,0);
    if (plVar5 != &local_1f8) {
      local_298 = *plVar5;
      uStack_290 = plVar5[1];
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_298);
    }
    local_278 = 0xc4;
    plVar5 = (longlong *)FUN_140e8da20(&local_198,param_1,0);
    if (plVar5 != &local_118) {
      local_298 = *plVar5;
      uStack_290 = plVar5[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_298);
    }
    local_278 = 0xc6;
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_260);
    }
    local_254 = 0;
    local_260 = 0.0;
    bVar1 = true;
LAB_140219984:
    do {
      iVar4 = 0;
      if (!bVar1) {
        local_278 = 0xc6;
        uVar3 = local_254 & 0xffffff;
        if (uVar3 != 0) {
          if (uVar3 != 1) {
            if (uVar3 == 7) {
              local_260 = (double)CONCAT44(local_260._4_4_,local_260._0_4_ + 1);
            }
            else if (uVar3 == 10) {
              local_260 = (double)((longlong)local_260 + 1);
            }
            else {
              if (uVar3 == 0xd) {
                local_254 = 0;
                goto LAB_1402199d5;
              }
              FUN_140042910(&DAT_14172c3d8,&local_260,&local_260);
            }
            goto LAB_1402199de;
          }
          local_260 = (double)FUN_140e4b060(&local_260);
          local_254 = 0;
        }
LAB_1402199d5:
        local_260 = local_260 + 1.0;
      }
LAB_1402199de:
      bVar1 = false;
      if ((uVar7 == 2) && (lVar8 != 0)) {
        iVar4 = *(int *)(lVar8 + 0x24);
      }
      local_6c = 0;
      local_78 = (double)iVar4;
      iVar4 = FUN_140e851f0(&local_260,&local_78,DAT_141955260,1);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      uVar14 = (undefined4)(uVar13 >> 0x20);
      if (iVar4 == -2 || -1 < iVar4) goto LAB_14021a11c;
      local_278 = 200;
      iVar4 = FUN_140e4a740(&local_260);
      plVar5 = (longlong *)0x0;
      if (((uVar7 & 0xffffff) == 2) && (lVar8 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar8 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar8 + 0x24));
        }
        else {
          plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar8 + 8));
        }
        if (plVar5 != &local_1b8) goto LAB_140219add;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar5 = &local_108;
LAB_140219add:
        local_298 = *plVar5;
        uStack_290 = plVar5[1];
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_298);
      }
      local_278 = 0xc9;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      if (local_128 != &local_178) {
        local_298 = *local_128;
        uStack_290 = local_128[1];
        if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_298);
      }
      local_218 = &local_178;
      local_210 = &local_1b8;
      pplVar12 = &local_218;
      uVar13 = CONCAT44(uVar14,DAT_141a01138);
      plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar13,pplVar12);
      if (plVar5 != &local_1d8) {
        local_298 = *plVar5;
        uStack_290 = plVar5[1];
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_298);
      }
      local_278 = 0xcb;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_1d8,DAT_141a0ab58,0x80000000,&local_c8,uVar13,
                    (ulonglong)pplVar12 & 0xffffffffffffff00);
      local_5c = 0;
      local_68 = 0;
      iVar4 = FUN_140e851f0(&local_c8,&local_68,DAT_141955260,0);
      if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      if (iVar4 == 0) {
        local_278 = 0xcb;
        goto LAB_140219984;
      }
      local_278 = 0xcc;
      iVar4 = FUN_140e851f0(&local_1b8,&local_240,DAT_141955260,0);
      uVar14 = (undefined4)(uVar13 >> 0x20);
      if (iVar4 != 0) {
        local_278 = 0xce;
        local_19c = DAT_141dcdc94;
        local_1a0 = DAT_141dcdc90;
        if ((1 << ((byte)DAT_141dcdc94 & 0x1f) & 0x46U) == 0) {
          local_1a8 = DAT_141dcdc88;
        }
        else {
          FUN_1400419b0(&local_1a8,&DAT_141dcdc88);
        }
        iVar4 = FUN_140e851f0(&local_240,&local_1a8,DAT_141955260,0);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if (iVar4 != 0) {
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          local_218 = &local_1d8;
          uVar11 = CONCAT44(uVar14,DAT_1419fcb88);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_2b8,1,uVar11,&local_218);
          uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
          cVar2 = FUN_140e491e0(uVar6);
          if (cVar2 != '\0') {
            local_278 = 0xcf;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            local_210 = &local_1d8;
            local_298 = _DAT_141dcdcf8;
            uStack_290 = uRam0000000141dcdd00;
            if ((1 << ((byte)local_158[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_298);
            local_208 = local_158;
            pplVar12 = &local_210;
            uVar13 = CONCAT44(uVar14,DAT_1419fcba8);
            uVar6 = FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar13,pplVar12);
            cVar2 = FUN_140e491e0(uVar6);
            if (cVar2 != '\0') {
              uVar13 = uVar13 & 0xffffffffffffff00;
              FUN_140e87440(&local_1d8,DAT_141a0a8a8,0x80000000,&local_d8,uVar13,
                            (ulonglong)pplVar12 & 0xffffffffffffff00);
              iVar4 = FUN_140e851f0(&local_d8,&local_240,DAT_141955260,0);
              if (iVar4 == 0) {
                local_278 = 0xcf;
                goto LAB_140219984;
              }
            }
            uVar14 = (undefined4)(uVar13 >> 0x20);
            local_278 = 0xd0;
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2b8);
            }
            local_2b8 = 0;
            local_2b0 = 0;
            local_2ac = 5;
            local_218 = &local_1d8;
            local_298 = _DAT_141dcdd58;
            uStack_290 = uRam0000000141dcdd60;
            if ((1 << ((byte)local_168[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            FUN_140041b80(local_168,&local_298);
            local_210 = local_168;
            uVar6 = FUN_140e634e0(param_1,param_2,&local_2b8,2,CONCAT44(uVar14,DAT_1419fcba8),
                                  &local_218);
            cVar2 = FUN_140e491e0(uVar6);
            if (cVar2 != '\0') {
              uVar13 = param_1;
              FUN_140e87170(&local_1d8,DAT_141a0a828,0x80000000,&local_e8,param_1,param_2);
              iVar4 = FUN_140e851f0(&local_e8,&local_240,DAT_141955260,0);
              if (iVar4 == 0) {
                local_278 = 0xd0;
                goto LAB_140219984;
              }
            }
          }
        }
        local_278 = 0xd3;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        local_298 = _DAT_141dcdd18;
        uStack_290 = uRam0000000141dcdd20;
        if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_298);
        local_218 = &local_178;
        local_210 = &local_1b8;
        pplVar12 = &local_218;
        uVar6 = gml_Script_rolled_list_clear(param_1,param_2,&local_2b8,2,pplVar12);
        uVar14 = (undefined4)((ulonglong)pplVar12 >> 0x20);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 == '\0') {
          local_278 = 0xd4;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          local_218 = &local_1f8;
          local_210 = &local_1b8;
          uVar13 = CONCAT44(uVar14,DAT_1419fe568);
          FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar13,&local_218);
        }
        else {
          local_278 = 0xd3;
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = 0;
          local_1e0 = 0;
          local_1dc = 5;
          local_208 = &local_118;
          local_200 = &local_1b8;
          uVar13 = CONCAT44(uVar14,DAT_1419fe568);
          FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar13,&local_208);
        }
        goto LAB_140219984;
      }
      local_278 = 0xcc;
    } while( true );
  }
  local_278 = 0xe8;
  if (param_3 == &DAT_1419df7b0) goto LAB_14021a530;
  local_298 = DAT_1419df7b0;
  uStack_290 = _DAT_1419df7b8;
  goto LAB_14021a50c;
LAB_14021a11c:
  if (((uStack_1ec != 2) || (local_1f8 == 0)) || (*(int *)(local_1f8 + 0x24) == 0)) {
    local_278 = 0xd7;
    uStack_290 = CONCAT44(uStack_10c,uStack_110);
    local_298 = local_118;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_298);
  }
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if (((uStack_1ec != 2) || (local_1f8 == 0)) || (*(int *)(local_1f8 + 0x24) < 1)) {
    local_278 = 0xe4;
    uStack_220 = uStack_220 & 0xffffffff;
    local_228 = 0;
    iVar4 = FUN_140e851f0(&local_250,&local_228,DAT_141955260,0);
    if ((1 << ((byte)(uStack_220 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    plVar5 = local_128;
    cVar2 = local_2a8;
    if (iVar4 == 0) {
      local_278 = 0xe4;
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2b8 = 0;
      local_2b0 = 0;
      local_2ac = 5;
      uVar13 = 0;
      gml_Script_ambience_set(param_1,param_2,&local_2b8,0,0);
      cVar2 = '\0';
    }
    goto LAB_140219703;
  }
  local_278 = 0xdb;
  dVar9 = (double)FUN_140e78f00((longlong)(*(int *)(local_1f8 + 0x24) + -1));
  iVar4 = (int)dVar9;
  plVar5 = (longlong *)0x0;
  if (((uStack_1ec & 0xffffff) == 2) && (local_1f8 != 0)) {
    if ((iVar4 < 0) || (*(int *)(local_1f8 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(local_1f8 + 0x24));
    }
    else {
      plVar5 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_1f8 + 8));
    }
    if (plVar5 == &local_138) goto LAB_14021a2f9;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_1f8;
  }
  local_298 = *plVar5;
  uStack_290 = plVar5[1];
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_298);
LAB_14021a2f9:
  local_278 = 0xdc;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  if (local_128 != &local_178) {
    local_298 = *local_128;
    uStack_290 = local_128[1];
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_298);
  }
  local_218 = &local_178;
  local_210 = &local_138;
  plVar5 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_2b8,2,CONCAT44(uVar14,DAT_141a01138),&local_218);
  if (plVar5 != &local_188) {
    local_298 = *plVar5;
    uStack_290 = plVar5[1];
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_298);
  }
  local_278 = 0xde;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0;
  FUN_140e87930(&local_188,DAT_141a0ab58,0x80000000,&local_f8);
  local_278 = 0xdf;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  local_298 = _DAT_141dcdd18;
  uStack_290 = uRam0000000141dcdd20;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_298);
  local_218 = &local_178;
  local_210 = &local_138;
  gml_Script_rolled_list_new_run(param_1,param_2,&local_2b8,2,&local_218);
  local_278 = 0xe1;
  if (&local_188 != param_3) {
    uStack_290 = CONCAT44(uStack_17c,uStack_180);
    local_298 = local_188;
LAB_14021a50c:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_298);
  }
LAB_14021a530:
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
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
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_240);
  }
  _eh_vector_destructor_iterator_(&local_178,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return param_3;
}


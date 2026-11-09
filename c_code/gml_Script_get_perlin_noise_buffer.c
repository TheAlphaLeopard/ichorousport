// gml_Script_get_perlin_noise_buffer @ 0x140430100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_get_perlin_noise_buffer
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar8;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  double local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  double local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  double local_2a0;
  undefined4 local_298;
  uint local_294;
  double local_290;
  uint local_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  double local_270;
  undefined4 local_264;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  double local_220;
  undefined4 local_214;
  double local_210;
  undefined4 local_208;
  uint local_204;
  double local_200;
  undefined4 local_1f8;
  uint local_1f4;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined4 local_198 [3];
  undefined4 local_18c;
  undefined4 local_188 [3];
  undefined4 local_17c;
  undefined4 local_178 [3];
  undefined4 local_16c;
  double *local_168;
  double *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  undefined1 *local_128;
  undefined1 local_118 [16];
  longlong local_108;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined1 local_e8 [80];
  undefined1 local_98 [96];
  
  local_230 = "gml_Script_draw_perlin_noise_buffer";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x40;
  _eh_vector_constructor_iterator_(local_118,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_214 = 0xffffff;
  local_220 = 0.0;
  local_294 = 0xffffff;
  local_2a0 = 0.0;
  local_2c4 = 0xffffff;
  local_2d0 = 0.0;
  local_284 = 0xffffff;
  local_290 = 0.0;
  local_264 = 0xffffff;
  local_270 = 0.0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  local_2b4 = 0xffffff;
  local_2c0 = 0.0;
  local_274 = 0;
  local_280 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x43;
  uVar11 = 0;
  pdVar5 = (double *)gml_Script_create_perlin_hash_table(param_1,param_2,&local_280,0,0);
  if (pdVar5 != &local_220) {
    local_248 = *pdVar5;
    uStack_240 = pdVar5[1];
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    FUN_140041b80(&local_220,&local_248);
  }
  if (param_4 < 1) {
    pdVar5 = (double *)&DAT_1419df7b0;
LAB_14043028e:
    local_248 = *pdVar5;
    uStack_240 = pdVar5[1];
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    FUN_140041b80(&local_2a0,&local_248);
  }
  else {
    pdVar5 = (double *)*param_5;
    if (pdVar5 != &local_2a0) goto LAB_14043028e;
  }
  if (param_4 < 2) {
    pdVar5 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar5 = (double *)param_5[1];
    if (pdVar5 == &local_2d0) goto LAB_140430305;
  }
  local_248 = *pdVar5;
  uStack_240 = pdVar5[1];
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  FUN_140041b80(&local_2d0,&local_248);
LAB_140430305:
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  local_284 = 0;
  local_290 = 0.0;
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  local_264 = 0;
  local_270 = 0.0;
  local_228 = 0x49;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2a4 = 0;
  local_2b0 = 0.0;
  bVar2 = true;
LAB_140430390:
  do {
    if (!bVar2) {
      local_228 = 0x49;
      uVar3 = local_2a4 & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_2b0 = (double)CONCAT44(local_2b0._4_4_,local_2b0._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_2b0 = (double)((longlong)local_2b0 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_2a4 = 0;
              goto LAB_1404303e5;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2b0,&local_2b0);
          }
          goto LAB_1404303f0;
        }
        local_2b0 = (double)FUN_140e4b060(&local_2b0);
        local_2a4 = 0;
      }
LAB_1404303e5:
      local_2b0 = local_2b0 + 1.0;
    }
LAB_1404303f0:
    bVar2 = false;
    local_1ac = 0;
    local_1b8 = 0x4090000000000000;
    iVar4 = FUN_140e851f0(&local_2b0,&local_1b8,DAT_141955260,1);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar4 == -2 || -1 < iVar4) {
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c0);
      }
      if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b0);
      }
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d0);
      }
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      _eh_vector_destructor_iterator_(local_118,0x10,9,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_238;
      return param_3;
    }
    local_228 = 0x4b;
    if (param_4 < 2) {
      pdVar5 = (double *)&DAT_1419df7b0;
LAB_140430492:
      local_258 = *pdVar5;
      dStack_250 = pdVar5[1];
      if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d0);
      }
      FUN_140041b80(&local_2d0,&local_258);
    }
    else {
      pdVar5 = (double *)param_5[1];
      if (pdVar5 != &local_2d0) goto LAB_140430492;
    }
    local_228 = 0x4d;
    if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c0);
    }
    local_2b4 = 0;
    local_2c0 = 0.0;
    bVar1 = true;
LAB_1404304f0:
    if (!bVar1) {
      local_228 = 0x4d;
      uVar3 = local_2b4 & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_2c0 = (double)CONCAT44(local_2c0._4_4_,local_2c0._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_2c0 = (double)((longlong)local_2c0 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_2b4 = 0;
              goto LAB_14043053d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2c0,&local_2c0);
          }
          goto LAB_140430548;
        }
        local_2c0 = (double)FUN_140e4b060(&local_2c0);
        local_2b4 = 0;
      }
LAB_14043053d:
      local_2c0 = local_2c0 + 1.0;
    }
LAB_140430548:
    bVar1 = false;
    local_19c = 0;
    local_1a8 = 0x4090000000000000;
    iVar4 = FUN_140e851f0(&local_2c0,&local_1a8,DAT_141955260,1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (iVar4 != -2 && iVar4 < 0) {
      local_228 = 0x4f;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_280 = 0;
      local_278 = 0;
      local_274 = 5;
      local_168 = &local_220;
      local_1f4 = local_2b4;
      local_1f8 = local_2b8;
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
        local_200 = local_2c0;
      }
      else {
        FUN_1400419b0(&local_200,&local_2c0);
      }
      local_18c = 7;
      local_198[0] = 0x400;
      FUN_140042560(&local_200,local_198);
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      local_204 = local_2a4;
      local_208 = local_2a8;
      if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
        local_210 = local_2b0;
      }
      else {
        FUN_1400419b0(&local_210,&local_2b0);
      }
      FUN_1400460e0(&local_210,&local_200);
      lVar6 = FUN_140e4a8b0(&local_210);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 10;
      local_108 = lVar6 * 4;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      uVar13 = 0;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      local_160 = (double *)&local_108;
      local_258 = _DAT_1419e4c60;
      dStack_250 = (double)uRam00000001419e4c68;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_258);
      local_158 = local_f8;
      uVar11 = CONCAT44(uVar12,DAT_141a0a178);
      pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_280,3,uVar11,&local_168,uVar13);
      uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_1dc = *(undefined4 *)((longlong)pdVar5 + 0xc);
      uStack_1e0 = *(undefined4 *)(pdVar5 + 1);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) == 0) {
        local_1e8 = *pdVar5;
      }
      else {
        FUN_1400419b0(&local_1e8,pdVar5);
      }
      local_17c = 7;
      local_188[0] = 0xff;
      FUN_140042560(&local_1e8,local_188);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      dStack_250 = (double)CONCAT44(uStack_1dc,uStack_1e0);
      local_258 = local_1e8;
      if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_290);
      }
      FUN_140041b80(&local_290,&local_258);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_228 = 0x50;
      if ((local_284 & 0xffffff) == 0) {
        uVar13 = SUB84(local_290,0);
        uVar9 = (undefined4)((ulonglong)local_290 >> 0x20);
      }
      else {
        uVar11 = FUN_140e4b060(&local_290);
        uVar13 = (undefined4)uVar11;
        uVar9 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
      if ((local_284 & 0xffffff) == 0) {
        uVar7 = SUB84(local_290,0);
        uVar10 = (undefined4)((ulonglong)local_290 >> 0x20);
      }
      else {
        uVar11 = FUN_140e4b060(&local_290);
        uVar7 = (undefined4)uVar11;
        uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
      }
      dVar8 = local_290;
      if ((local_284 & 0xffffff) != 0) {
        dVar8 = (double)FUN_140e4b060(&local_290);
      }
      iVar4 = FUN_140ec6000((longlong)dVar8,(longlong)(double)CONCAT44(uVar10,uVar7),
                            (longlong)(double)CONCAT44(uVar9,uVar13));
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_270);
      }
      local_264 = 0;
      local_270 = (double)iVar4;
      local_228 = 0x51;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_280 = 0;
      local_278 = 0;
      local_274 = 5;
      local_168 = &local_2a0;
      local_160 = &local_2d0;
      uStack_1cc = local_294;
      uStack_1d0 = local_298;
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
        local_1d8 = local_2a0;
      }
      else {
        FUN_1400419b0(&local_1d8,&local_2a0);
      }
      local_16c = 7;
      local_178[0] = 1;
      FUN_1400460e0(&local_1d8,local_178);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      dStack_250 = (double)CONCAT44(uStack_1cc,uStack_1d0);
      local_258 = local_1d8;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_258);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_158 = local_f8;
      uStack_1bc = local_2c4;
      uStack_1c0 = local_2c8;
      if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_2d0;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_2d0);
      }
      uStack_240 = (double)CONCAT44(7,(undefined4)uStack_240);
      local_248 = (double)CONCAT44(local_248._4_4_,1);
      FUN_1400460e0(&local_1c8,&local_248);
      if ((1 << ((byte)((ulonglong)uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      dStack_250 = (double)CONCAT44(uStack_1bc,uStack_1c0);
      local_258 = local_1c8;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_258);
      uVar13 = 0;
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_150 = local_e8;
      local_148 = &local_270;
      local_140 = &local_270;
      local_138 = &local_270;
      local_130 = &local_270;
      local_258 = _DAT_1419df7a0;
      dStack_250 = dRam00000001419df7a8;
      if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_258);
      local_128 = local_98;
      uVar11 = CONCAT44(uVar12,DAT_1419f6de8);
      FUN_140e634e0(param_1,param_2,&local_280,9,uVar11,&local_168,uVar13);
      local_228 = 0x53;
      uVar3 = local_2c4 & 0xffffff;
      if (uVar3 == 0) {
LAB_140430be0:
        local_2d0 = local_2d0 + 1.0;
      }
      else if (uVar3 == 1) {
        local_2d0 = (double)FUN_140e4b060(&local_2d0);
        local_2d0 = local_2d0 + 1.0;
        local_2c4 = 0;
      }
      else if (uVar3 == 7) {
        local_2d0 = (double)CONCAT44(local_2d0._4_4_,local_2d0._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_2d0 = (double)((longlong)local_2d0 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_2c4 = 0;
          goto LAB_140430be0;
        }
        FUN_140042910(&DAT_14172c3d8,&local_2d0,&local_2d0);
      }
      goto LAB_1404304f0;
    }
    local_228 = 0x55;
    uVar3 = local_294 & 0xffffff;
    if (uVar3 == 0) {
LAB_140430c77:
      local_2a0 = local_2a0 + 1.0;
      goto LAB_140430390;
    }
    if (uVar3 == 1) {
      local_2a0 = (double)FUN_140e4b060(&local_2a0);
      local_2a0 = local_2a0 + 1.0;
      local_294 = 0;
    }
    else if (uVar3 == 7) {
      local_2a0 = (double)CONCAT44(local_2a0._4_4_,local_2a0._0_4_ + 1);
    }
    else if (uVar3 == 10) {
      local_2a0 = (double)((longlong)local_2a0 + 1);
    }
    else {
      if (uVar3 == 0xd) {
        local_294 = 0;
        goto LAB_140430c77;
      }
      FUN_140042910(&DAT_14172c3d8,&local_2a0,&local_2a0);
    }
  } while( true );
}


// gml_Script___scribble_krutidev_matra_lookup_map_initialize @ 0x1401eb8b0

undefined8 *
gml_Script___scribble_krutidev_matra_lookup_map_initialize
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  double *pdVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  undefined *puVar13;
  undefined4 uVar15;
  undefined8 uVar14;
  double local_228;
  uint local_21c;
  double local_218;
  uint local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  uint local_1c0;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_19c;
  uint local_198;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  undefined4 local_13c;
  uint local_138;
  int local_134;
  uint local_130;
  double local_128;
  uint uStack_11c;
  double local_118;
  uint uStack_10c;
  double *local_108;
  double *local_100;
  double *local_f8;
  undefined4 *local_f0;
  double *local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  double local_98;
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined4 local_68 [3];
  undefined4 local_5c;
  
  local_1d0 = "gml_Script___scribble_krutidev_lookup_map_initialize";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 3;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_198 = 0xffffff;
  uStack_10c = 0xffffff;
  local_118 = 0.0;
  local_1c0 = 0xffffff;
  uStack_11c = 0xffffff;
  local_128 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_14c = 0;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1c8 = 5;
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,0,DAT_1419ff3e8,0);
  if (puVar3 != &local_188) {
    local_1f8 = *(undefined4 *)puVar3;
    uStack_1f4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
  }
  local_1c8 = 9;
  pdVar4 = (double *)
           FUN_140e8da20(&local_d8,param_1,0xa9,&DAT_141dcc918,&DAT_141dcd008,&DAT_141dccd28,
                         &DAT_141dccaa8,&DAT_141dcd3d8,&DAT_141dccbd8,&DAT_141dccc88,&DAT_141dcc4d8,
                         &DAT_141dcd568,&DAT_141dcc688,&DAT_141dcc858,&DAT_141dccb68,&DAT_141dcd2c8,
                         &DAT_141dccdd8,&DAT_141dcc3e8,&DAT_141dcd098,&DAT_141dcd4f8,&DAT_141dcc5d8,
                         &DAT_141dcc958,&DAT_141dcc948,&DAT_141dccf78,&DAT_141dcc9a8,&DAT_141dcd3f8,
                         &DAT_141dcd048,&DAT_141dcc478,&DAT_141dccf98,&DAT_141dccf08,&DAT_141dcc468,
                         &DAT_141dcc428,&DAT_141dcc778,&DAT_141dccb38,&DAT_141dcc978,&DAT_141dcc398,
                         &DAT_141dcd078,&DAT_141dcc568,&DAT_141dccc48,&DAT_141dcc508,&DAT_141dcc6a8,
                         &DAT_141dcc348,&DAT_141dcced8,&DAT_141dcd3a8,&DAT_141dccdb8,&DAT_141dcd688,
                         &DAT_141dcccd8,&DAT_141dcd2f8,&DAT_141dcc438,&DAT_141dcd478,&DAT_141dcd178,
                         &DAT_141dcd258,&DAT_141dcc718,&DAT_141dcc828,&DAT_141dcd628,&DAT_141dcce88,
                         &DAT_141dcc888,&DAT_141dcca88,&DAT_141dcd2b8,&DAT_141dccbb8,&DAT_141dcc678,
                         &DAT_141dcd138,&DAT_141dccae8,&DAT_141dccc58,&DAT_141dcd118,&DAT_141dcc588)
  ;
  dVar11 = 0.0;
  uVar9 = 0xffffff;
  if (pdVar4 != &local_118) {
    local_1f8 = *(undefined4 *)pdVar4;
    uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
    uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
    FUN_140041b80(&local_118,&local_1f8);
    local_198 = uStack_10c;
    dVar11 = local_118;
    uVar9 = uStack_10c;
  }
  local_1c8 = 0x27;
  puVar13 = &DAT_141dcce38;
  pdVar4 = (double *)
           FUN_140e8da20(&local_c8,param_1,0xa9,&DAT_141dcd4d8,&DAT_141dcce38,&DAT_141dcc4c8,
                         &DAT_141dccc28,&DAT_141dcd0f8,&DAT_141dccbf8,&DAT_141dcc6f8,&DAT_141dccd88,
                         &DAT_141dcd348,&DAT_141dcc448,&DAT_141dcc4f8,&DAT_141dccc98,&DAT_141dccc98,
                         &DAT_141dcce68,&DAT_141dcce28,&DAT_141dccb68,&DAT_141dccac8,&DAT_141dcd1d8,
                         &DAT_141dcc5b8,&DAT_141dcce18,&DAT_141dcca08,&DAT_141dcca48,&DAT_141dcd488,
                         &DAT_141dcd558,&DAT_141dcd608,&DAT_141dcd3e8,&DAT_141dccf88,&DAT_141dccca8,
                         &DAT_141dcd318,&DAT_141dccaf8,&DAT_141dccf08,&DAT_141dcc3c8,&DAT_141dcd028,
                         &DAT_141dcccf8,&DAT_141dcd6d8,&DAT_141dccfe8,&DAT_141dcc598,&DAT_141dcd668,
                         &DAT_141dcc388,&DAT_141dcd398,&DAT_141dcd518,&DAT_141dccb18,&DAT_141dcd4b8,
                         &DAT_141dccef8,&DAT_141dcc3f8,&DAT_141dccd38,&DAT_141dcc3b8,&DAT_141dcd068,
                         &DAT_141dcd148,&DAT_141dccb58,&DAT_141dccbc8,&DAT_141dccc88,&DAT_141dcc668,
                         &DAT_141dcd548,&DAT_141dcd568,&DAT_141dcc358,&DAT_141dcc608,&DAT_141dcd6c8,
                         &DAT_141dcd5d8,&DAT_141dcc6c8,&DAT_141dcc518,&DAT_141dcc788,&DAT_141dcc4d8)
  ;
  if (pdVar4 != &local_128) {
    local_1f8 = *(undefined4 *)pdVar4;
    uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
    uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
    FUN_140041b80(&local_128,&local_1f8);
    local_1c0 = uStack_11c;
  }
  uVar2 = local_1c0;
  local_1c8 = 0x45;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_20c = 0;
  local_218 = 0.0;
  iVar1 = 0;
  if ((uVar9 == 2) && (dVar11 != 0.0)) {
    iVar1 = *(int *)((longlong)dVar11 + 0x24);
  }
  if (0 < iVar1) {
    local_130 = uVar9 & 0xffffff;
    local_138 = uVar2 & 0xffffff;
    local_134 = iVar1;
    do {
      uVar9 = local_130;
      uVar15 = (undefined4)((ulonglong)puVar13 >> 0x20);
      pdVar4 = (double *)0x0;
      local_134 = local_134 + -1;
      local_1c8 = 0x48;
      iVar1 = FUN_140e4a740(&local_218);
      if ((uVar9 == 2) && (dVar11 != 0.0)) {
        if ((iVar1 < 0) || (*(int *)((longlong)dVar11 + 0x24) <= iVar1)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                        *(undefined4 *)((longlong)dVar11 + 0x24));
        }
        else {
          pdVar4 = (double *)((longlong)iVar1 * 0x10 + *(longlong *)((longlong)dVar11 + 8));
        }
        if (pdVar4 != &local_1b8) goto LAB_1401ecf2a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_118;
LAB_1401ecf2a:
        local_1f8 = *(undefined4 *)pdVar4;
        uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1f8);
      }
      local_1c8 = 0x4a;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_19c = 0;
      local_1a8 = 0.0;
      local_1c8 = 0x4b;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_108 = &local_1b8;
      uVar14 = CONCAT44(uVar15,DAT_141a07b08);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar14,&local_108);
      if (pdVar4 != &local_228) {
        local_1f8 = *(undefined4 *)pdVar4;
        uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_1f8);
      }
      local_1c8 = 0x4c;
      dVar12 = local_228;
      if ((local_21c & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_228);
      }
      uVar10 = (ulonglong)dVar12;
      uVar9 = (uint)uVar10;
      while (uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20), 0 < (int)uVar9) {
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        local_1c8 = 0x4e;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        local_208 = 0;
        local_200 = 0;
        local_1fc = 5;
        local_108 = &local_1b8;
        local_100 = &local_228;
        uVar14 = CONCAT44(uVar15,DAT_141a079a8);
        pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_208,2,uVar14,&local_108);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if (pdVar4 != &local_98) {
          local_1f8 = *(undefined4 *)pdVar4;
          uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
          uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
          uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          FUN_140041b80(&local_98,&local_1f8);
        }
        local_f8 = &local_98;
        lVar5 = FUN_140e4a8b0(&local_1a8);
        uVar14 = CONCAT44(uVar15,DAT_1419fdc48);
        uVar6 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar14,&local_f8);
        uVar7 = FUN_140e4a8b0(uVar6);
        dVar12 = (double)(uVar7 | lVar5 << 0x10);
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_19c = 10;
        local_1c8 = 0x4f;
        uVar2 = local_21c & 0xffffff;
        local_1a8 = dVar12;
        if (uVar2 == 0) {
LAB_1401ed1d7:
          local_228 = local_228 + -1.0;
        }
        else if (uVar2 == 1) {
          local_228 = (double)FUN_140e4b060(&local_228);
          local_228 = local_228 - 1.0;
          local_21c = 0;
        }
        else if (uVar2 == 7) {
          local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + -1);
        }
        else if (uVar2 == 10) {
          local_228 = (double)((longlong)local_228 + -1);
        }
        else {
          if (uVar2 == 0xd) {
            local_21c = 0;
            goto LAB_1401ed1d7;
          }
          FUN_140042910(&DAT_14172c450,&local_228,&local_228);
        }
      }
      pdVar4 = (double *)0x0;
      local_1c8 = 0x52;
      iVar1 = FUN_140e4a740(&local_218);
      if ((local_138 == 2) && (local_128 != 0.0)) {
        if ((iVar1 < 0) || (*(int *)((longlong)local_128 + 0x24) <= iVar1)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                        *(undefined4 *)((longlong)local_128 + 0x24));
        }
        else {
          pdVar4 = (double *)((longlong)iVar1 * 0x10 + *(longlong *)((longlong)local_128 + 8));
        }
        if (pdVar4 != &local_1b8) goto LAB_1401ed283;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pdVar4 = &local_128;
LAB_1401ed283:
        local_1f8 = *(undefined4 *)pdVar4;
        uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1f8);
      }
      local_1c8 = 0x53;
      pdVar4 = (double *)FUN_140e8da20(&local_1e8,param_1,0);
      if (pdVar4 != &local_148) {
        local_1f8 = *(undefined4 *)pdVar4;
        uStack_1f4 = *(undefined4 *)((longlong)pdVar4 + 4);
        uStack_1f0 = *(undefined4 *)(pdVar4 + 1);
        uStack_1ec = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1f8);
      }
      local_1c8 = 0x54;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_21c = 0;
      local_228 = 1.0;
      local_1c8 = 0x55;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_108 = &local_1b8;
      uVar14 = CONCAT44(uVar15,DAT_141a07b08);
      pdVar4 = (double *)FUN_140e634e0(param_1,param_2,&local_208,1,uVar14,&local_108);
      if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar4;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar4);
      }
      uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
      iVar1 = (int)dVar12;
      while (0 < iVar1) {
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        iVar1 = iVar1 + -1;
        local_1c8 = 0x57;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_100 = &local_1b8;
        local_f8 = &local_228;
        uVar14 = CONCAT44(uVar15,DAT_141a079a8);
        puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar14,&local_100);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if (puVar8 != local_88) {
          local_1f8 = *puVar8;
          uStack_1f4 = puVar8[1];
          uStack_1f0 = puVar8[2];
          uStack_1ec = puVar8[3];
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          FUN_140041b80(local_88,&local_1f8);
        }
        local_f0 = local_88;
        local_e8 = &local_148;
        uVar14 = CONCAT44(uVar15,DAT_1419fdc48);
        puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar14,&local_f0);
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
        if (puVar8 != local_68) {
          local_1f8 = *puVar8;
          uStack_1f4 = puVar8[1];
          uStack_1f0 = puVar8[2];
          uStack_1ec = puVar8[3];
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_68);
          }
          FUN_140041b80(local_68,&local_1f8);
        }
        local_e0 = local_68;
        uVar14 = CONCAT44(uVar15,DAT_1419fe568);
        FUN_140e634e0(param_1,param_2,&local_158,2,uVar14,&local_e8);
        local_1c8 = 0x58;
        uVar9 = local_21c & 0xffffff;
        if (uVar9 == 0) {
LAB_1401ed5b5:
          local_228 = local_228 + 1.0;
        }
        else {
          if (uVar9 == 1) {
            local_228 = (double)FUN_140e4b060(&local_228);
            local_21c = 0;
            goto LAB_1401ed5b5;
          }
          if (uVar9 == 7) {
            local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + 1);
          }
          else if (uVar9 == 10) {
            local_228 = (double)((longlong)local_228 + 1);
          }
          else {
            if (uVar9 == 0xd) {
              local_21c = 0;
              goto LAB_1401ed5b5;
            }
            FUN_140042910(&DAT_14172c3d8,&local_228,&local_228);
          }
        }
        uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
      }
      local_1c8 = 0x5b;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      local_108 = (double *)&local_188;
      local_f8 = &local_148;
      puVar13 = (undefined *)CONCAT44(uVar15,DAT_1419ff3d8);
      local_100 = &local_1a8;
      FUN_140e634e0(param_1,param_2,&local_208,3,puVar13,&local_108);
      local_1c8 = 0x5d;
      uVar9 = local_20c & 0xffffff;
      if (uVar9 == 0) {
LAB_1401ed6b1:
        local_218 = local_218 + 1.0;
      }
      else {
        if (uVar9 == 1) {
          local_218 = (double)FUN_140e4b060(&local_218);
          local_20c = 0;
          goto LAB_1401ed6b1;
        }
        if (uVar9 == 7) {
          local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
        }
        else if (uVar9 == 10) {
          local_218 = (double)((longlong)local_218 + 1);
        }
        else {
          if (uVar9 == 0xd) {
            local_20c = 0;
            goto LAB_1401ed6b1;
          }
          FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
        }
      }
    } while (0 < local_134);
    uVar9 = local_198;
  }
  local_1c8 = 0x60;
  if (&local_188 != param_3) {
    local_1f8 = (undefined4)local_188;
    uStack_1f4 = local_188._4_4_;
    uStack_1f0 = uStack_180;
    uStack_1ec = uStack_17c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1f8);
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
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1c0 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}


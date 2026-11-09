// gml_Script_InputDeviceEnumerate @ 0x14031afc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputDeviceEnumerate
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  double *pdVar8;
  double *pdVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  double dVar14;
  double *pdVar15;
  undefined4 uVar16;
  double dVar17;
  uint uVar18;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  uint local_res20;
  undefined8 uVar19;
  double **ppdVar20;
  undefined8 local_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  double local_2c8;
  uint local_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  double local_280;
  uint local_274;
  longlong local_270;
  uint local_264;
  double local_258;
  byte local_24c;
  undefined8 local_248;
  byte local_23c;
  undefined1 local_238 [12];
  byte local_22c;
  undefined8 local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  double local_208;
  uint uStack_1fc;
  double *local_1f8;
  undefined8 *local_1f0;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  undefined1 *local_1d8;
  uint local_1d0 [2];
  undefined8 *local_1c8;
  undefined4 local_1c0;
  double local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined4 local_18c;
  longlong local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
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
  undefined1 local_f8 [16];
  longlong local_e8;
  
  local_res18 = 0;
  local_2b0 = "gml_Script_InputDeviceCheckViaPlayer";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2a8 = 9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_1d0,param_4,3,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_258,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_res20 = 0xffffff;
  uStack_1fc = 0xffffff;
  dVar14 = 0.0;
  local_208 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_294 = 0xffffff;
  local_2a0 = 0;
  local_274 = 0xffffff;
  local_280 = 0.0;
  local_2dc = 0;
  local_2e8 = 0;
  local_1c0 = 0;
  local_16c = 0;
  local_178 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde154) &&
     (_Init_thread_header(&DAT_141dde154), DAT_141dde154 == -1)) {
    DAT_141dde158 = (longlong *)FUN_140e63aa0(DAT_1419f0b38);
    _Init_thread_footer(&DAT_141dde154);
  }
  uVar6 = local_1d0[0];
  local_2a8 = 9;
  pdVar15 = (double *)&DAT_1419df7b0;
  uVar13 = (ulonglong)local_1d0[0];
  if ((int)local_1d0[0] < 3) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_1c8[2];
  }
  iVar4 = FUN_140e851f0(puVar11,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_2a8 = 9;
    if ((int)uVar6 < 3) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_1c8[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0;
  }
  if (DAT_141ddc0d1 == '\0') {
    FUN_140e64380(DAT_141dde158,"gml_Script_InputDeviceCheckViaPlayer");
    FUN_140e64380(local_res8,"gml_Script_InputDeviceCheckViaPlayer");
  }
  local_2a8 = 0xb;
  if (DAT_141ddc0d1 == '\0') {
    DAT_141ddc0d1 = '\x01';
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    pdVar8 = (double *)(**(code **)(*DAT_141dde158 + 0x10))(DAT_141dde158,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde158);
    uVar16 = 0;
    pdVar9 = (double *)gml_Script___InputTrace(local_res8,local_res10,&local_2e8,0,0);
    if (pdVar9 != pdVar8) {
      local_2f8 = *pdVar9;
      uStack_2f0 = *(undefined4 *)(pdVar9 + 1);
      uStack_2ec = *(undefined4 *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar8);
      }
      FUN_140041b80(pdVar8,&local_2f8);
    }
    FUN_140e60910(1);
  }
  local_2a8 = 6;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if ((int)uVar6 < 3) {
    pdVar8 = (double *)&DAT_1419df7b0;
LAB_14031b33f:
    local_2f8 = *pdVar8;
    uStack_2f0 = *(undefined4 *)(pdVar8 + 1);
    uStack_2ec = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2f8);
  }
  else {
    pdVar8 = (double *)local_1c8[2];
    if (pdVar8 != &local_258) goto LAB_14031b33f;
  }
  local_1f8 = &local_258;
  uVar19 = CONCAT44(uVar16,DAT_141a014a8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,uVar19,&local_1f8);
  uVar16 = (undefined4)((ulonglong)uVar19 >> 0x20);
  cVar3 = FUN_140e491e0(uVar10);
  if (cVar3 == '\0') {
    local_2a8 = 9;
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((int)uVar6 < 3) {
      puVar11 = &DAT_1419df7b0;
LAB_14031b424:
      local_2f8 = (double)*puVar11;
      uStack_2f0 = *(undefined4 *)(puVar11 + 1);
      uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_2f8);
    }
    else {
      puVar11 = (undefined8 *)local_1c8[2];
      if (puVar11 != &local_248) goto LAB_14031b424;
    }
    local_1f0 = &local_248;
    local_2f8 = (double)CONCAT44(uRam0000000141dd011c,_DAT_141dd0118);
    uStack_2f0 = uRam0000000141dd0120;
    uStack_2ec = DAT_141dd0124;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2f8);
    local_1e8 = local_238;
    puVar11 = (undefined8 *)
              FUN_140e634e0(local_res8,local_res10,&local_1a8,1,CONCAT44(uVar16,DAT_1419fdc58),
                            &local_1f0);
    if (puVar11 != &local_228) {
      local_2f8 = (double)*puVar11;
      uStack_2f0 = *(undefined4 *)(puVar11 + 1);
      uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2f8);
    }
    local_2f8 = (double)CONCAT44(uRam0000000141dd012c,_DAT_141dd0128);
    uStack_2f0 = uRam0000000141dd0130;
    uStack_2ec = DAT_141dd0134;
    local_1e0 = &local_228;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2f8);
    local_1d8 = local_218;
    FUN_14008e020(local_res8,local_res10,&local_178,3,&local_1e8);
    local_1c0 = local_16c;
  }
  local_2a8 = 0xf;
  if ((int)uVar6 < 3) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_1c8[2];
  }
  local_2cc = 0;
  uVar18 = 0x3ff00000;
  local_2d8 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar11,&local_2d8,DAT_141955260,1);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if (uVar5 < 0x80000000) {
    local_2a8 = 0x15;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    local_2f8 = (double)CONCAT44(uRam0000000141dd014c,_DAT_141dd0148);
    uStack_2f0 = uRam0000000141dd0150;
    uStack_2ec = DAT_141dd0154;
    if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2f8);
    local_1f8 = &local_258;
    if ((int)uVar6 < 3) {
      puVar11 = &DAT_1419df7b0;
LAB_14031b672:
      local_2f8 = (double)*puVar11;
      uStack_2f0 = *(undefined4 *)(puVar11 + 1);
      uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_2f8);
    }
    else {
      puVar11 = (undefined8 *)local_1c8[2];
      if (puVar11 != &local_248) goto LAB_14031b672;
    }
    local_1f0 = &local_248;
    local_2f8 = (double)CONCAT44(uRam0000000141dd016c,_DAT_141dd0168);
    uStack_2f0 = uRam0000000141dd0170;
    uStack_2ec = DAT_141dd0174;
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_238);
    }
    FUN_140041b80(local_238,&local_2f8);
    local_1e8 = local_238;
    local_2f8 = (double)CONCAT44(uRam00000001419e3fa4,_DAT_1419e3fa0);
    uStack_2f0 = uRam00000001419e3fa8;
    uStack_2ec = uRam00000001419e3fac;
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2f8);
    local_2f8 = (double)CONCAT44(uRam0000000141dd013c,_DAT_141dd0138);
    uStack_2f0 = uRam0000000141dd0140;
    uStack_2ec = DAT_141dd0144;
    local_1e0 = &local_228;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2f8);
    local_1d8 = local_218;
    FUN_14008e020(local_res8,local_res10,&local_2e8,5,&local_1f8);
  }
  local_2a8 = 0x19;
  if ((int)uVar6 < 3) {
    puVar11 = &DAT_1419df7b0;
  }
  else {
    puVar11 = (undefined8 *)local_1c8[2];
  }
  local_2cc = 0;
  local_2d8 = 0;
  iVar4 = FUN_140e851f0(puVar11,&local_2d8,DAT_141955260,1);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if (iVar4 == -2 || -1 < iVar4) goto LAB_14031b919;
  local_2a8 = 0x1c;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_2f8 = (double)CONCAT44(uRam0000000141dd014c,_DAT_141dd0148);
  uStack_2f0 = uRam0000000141dd0150;
  uStack_2ec = DAT_141dd0154;
  if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  FUN_140041b80(&local_258,&local_2f8);
  local_1f8 = &local_258;
  if ((int)uVar6 < 3) {
    puVar11 = &DAT_1419df7b0;
LAB_14031b87a:
    local_2f8 = (double)*puVar11;
    uStack_2f0 = *(undefined4 *)(puVar11 + 1);
    uStack_2ec = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2f8);
  }
  else {
    puVar11 = (undefined8 *)local_1c8[2];
    if (puVar11 != &local_248) goto LAB_14031b87a;
  }
  local_1f0 = &local_248;
  local_2f8 = (double)CONCAT44(uRam0000000141dd015c,_DAT_141dd0158);
  uStack_2f0 = uRam0000000141dd0160;
  uStack_2ec = DAT_141dd0164;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_2f8);
  local_1e8 = local_238;
  FUN_14008e020(local_res8,local_res10,&local_2e8,3,&local_1f8);
LAB_14031b919:
  local_2a8 = 0xf;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  ppdVar20 = (double **)0x0;
  uVar10 = gml_Script_InputGetBindingName(local_res8,local_res10,&local_2e8,0,0);
  cVar3 = FUN_140e491e0(uVar10);
  if (cVar3 == '\0') {
    local_2a8 = 0xf;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    uVar6 = 0xffffff;
  }
  else {
    local_2a8 = 0x11;
    plVar12 = (longlong *)(**(code **)(*DAT_141dde158 + 8))(DAT_141dde158,DAT_141a026b8);
    if ((int)uVar6 < 3) {
      puVar11 = &DAT_1419df7b0;
    }
    else {
      puVar11 = (undefined8 *)local_1c8[2];
    }
    iVar4 = FUN_140e4a740(puVar11);
    if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar4 = FUN_140e63cb0(local_f8,&local_res8,&local_res10,plVar12);
    if (0 < iVar4) {
      do {
        local_2a8 = 0x13;
        iVar4 = (int)uVar13;
        if (iVar4 < 1) {
          puVar11 = &DAT_1419df7b0;
        }
        else {
          puVar11 = (undefined8 *)*local_1c8;
        }
        local_2cc = 0;
        local_2d8 = 0;
        uVar6 = FUN_140e851f0(puVar11,&local_2d8,DAT_141955260,1);
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        if (uVar6 < 0x80000000) {
          local_2a8 = 0x15;
          plVar12 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7c8);
          if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) &&
             (lVar1 = *plVar12, lVar1 != 0)) {
            if (*(int *)(lVar1 + 0x24) < 1) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = *(longlong **)(lVar1 + 8);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar12 != &local_188) {
            local_290 = (undefined4)*plVar12;
            uStack_28c = *(undefined4 *)((longlong)plVar12 + 4);
            uStack_288 = (undefined4)plVar12[1];
            uStack_284 = *(undefined4 *)((longlong)plVar12 + 0xc);
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_290);
          }
          local_2a8 = 0x16;
          plVar12 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7c8);
          if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) &&
             (lVar1 = *plVar12, lVar1 != 0)) {
            if (*(int *)(lVar1 + 0x24) < 2) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (plVar12 != &local_198) {
            local_290 = (undefined4)*plVar12;
            uStack_28c = *(undefined4 *)((longlong)plVar12 + 4);
            uStack_288 = (undefined4)plVar12[1];
            uStack_284 = *(undefined4 *)((longlong)plVar12 + 0xc);
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_290);
          }
          local_2a8 = 0x18;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          if (iVar4 < 1) {
            pdVar8 = (double *)&DAT_1419df7b0;
LAB_14031bc7b:
            local_290 = *(undefined4 *)pdVar8;
            uStack_28c = *(undefined4 *)((longlong)pdVar8 + 4);
            uStack_288 = *(undefined4 *)(pdVar8 + 1);
            uStack_284 = *(undefined4 *)((longlong)pdVar8 + 0xc);
            if ((1 << ((byte)_local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            FUN_140041b80(&local_258,&local_290);
          }
          else {
            pdVar8 = (double *)*local_1c8;
            if (pdVar8 != &local_258) goto LAB_14031bc7b;
          }
          local_1f8 = &local_258;
          ppdVar20 = &local_1f8;
          plVar12 = (longlong *)
                    gml_Script___InputGamepadGUIDParse(local_res8,local_res10,&local_2e8,1,ppdVar20)
          ;
          if (plVar12 != &local_270) {
            local_290 = (undefined4)*plVar12;
            uStack_28c = *(undefined4 *)((longlong)plVar12 + 4);
            uStack_288 = (undefined4)plVar12[1];
            uStack_284 = *(undefined4 *)((longlong)plVar12 + 0xc);
            if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_270);
            }
            FUN_140041b80(&local_270,&local_290);
          }
          local_2a8 = 0x1a;
          pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4c8);
          if (iVar4 < 2) {
            puVar11 = &DAT_1419df7b0;
          }
          else {
            puVar11 = (undefined8 *)local_1c8[1];
          }
          iVar4 = FUN_140e4a740(puVar11);
          if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) &&
             (dVar17 = *pdVar8, dVar17 != 0.0)) {
            if ((iVar4 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)((longlong)dVar17 + 0x24));
              pdVar8 = (double *)0x0;
            }
            else {
              pdVar8 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (pdVar8 != &local_208) {
            local_290 = *(undefined4 *)pdVar8;
            uStack_28c = *(undefined4 *)((longlong)pdVar8 + 4);
            uStack_288 = *(undefined4 *)(pdVar8 + 1);
            uStack_284 = *(undefined4 *)((longlong)pdVar8 + 0xc);
            if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140041b80(&local_208,&local_290);
            local_res20 = uStack_1fc;
            dVar14 = local_208;
          }
          uVar6 = local_res20;
          local_2a8 = 0x1b;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2bc = 0;
          local_2c8 = 0.0;
          local_2a8 = 0x1c;
          iVar4 = 0;
          if ((uVar6 == 2) && (dVar14 != 0.0)) {
            iVar4 = *(int *)((longlong)dVar14 + 0x24);
          }
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              local_2a8 = 0x1e;
              iVar7 = FUN_140e4a740(&local_2c8);
              pdVar8 = (double *)0x0;
              if (((uVar6 & 0xffffff) == 2) && (dVar14 != 0.0)) {
                if ((iVar7 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar7)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                *(undefined4 *)((longlong)dVar14 + 0x24));
                }
                else {
                  pdVar8 = (double *)((longlong)iVar7 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
                }
                if (pdVar8 != &local_1b8) goto LAB_14031bea3;
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                pdVar8 = &local_208;
LAB_14031bea3:
                local_290 = *(undefined4 *)pdVar8;
                uStack_28c = *(undefined4 *)((longlong)pdVar8 + 4);
                uStack_288 = *(undefined4 *)(pdVar8 + 1);
                uStack_284 = *(undefined4 *)((longlong)pdVar8 + 0xc);
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                FUN_140041b80(&local_1b8,&local_290);
              }
              local_2a8 = 0x1f;
              iVar7 = FUN_140e851f0(&local_1b8,&DAT_1419df7b0,DAT_141955260,0);
              if (iVar7 != 0) {
                local_2a8 = 0x21;
                if ((local_1ac & 0xffffff) == 0) {
                  uVar16 = SUB84(local_1b8,0);
                }
                else {
                  uVar16 = FUN_140e4b060(&local_1b8);
                }
                uVar10 = FUN_140e78d00(uVar16);
                if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2a0);
                }
                local_294 = 0;
                local_2a8 = 0x22;
                uStack_2ec = 0;
                local_2f8 = 32775.0;
                local_2a0 = uVar10;
                iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                if (iVar4 == 0) {
LAB_14031d191:
                  local_2a8 = 0x24;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  if (((int)local_1d0[0] < 1) ||
                     (pdVar15 = (double *)*local_1c8, pdVar15 != &local_258)) {
                    local_290 = *(undefined4 *)pdVar15;
                    uStack_28c = *(undefined4 *)((longlong)pdVar15 + 4);
                    uStack_288 = *(undefined4 *)(pdVar15 + 1);
                    uStack_284 = *(undefined4 *)((longlong)pdVar15 + 0xc);
                    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_258);
                    }
                    FUN_140041b80(&local_258,&local_290);
                  }
                  local_1f8 = &local_258;
                  local_1f0 = &local_2a0;
                  local_2cc = local_294;
                  local_2d0 = local_298;
                  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
                    local_2d8 = local_2a0;
                  }
                  else {
                    FUN_1400419b0(&local_2d8,&local_2a0);
                  }
                  local_res18 = 1;
                  uStack_2ec = 7;
                  local_2f8 = (double)CONCAT44(local_2f8._4_4_,0x8001);
                  FUN_1400462a0(&local_2d8,&local_2f8);
                  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  iVar4 = FUN_140e4a740(&local_2d8);
                  plVar12 = (longlong *)0x0;
                  if (((local_264 & 0xffffff) == 2) && (local_270 != 0)) {
                    if ((iVar4 < 0) || (*(int *)(local_270 + 0x24) <= iVar4)) {
                      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                    *(undefined4 *)(local_270 + 0x24));
                    }
                    else {
                      plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_270 + 8));
                    }
                  }
                  else {
                    FUN_140e632c0("trying to index variable that is not an array");
                    plVar12 = &local_270;
                  }
                  uVar10 = FUN_140e63610(local_res8,local_res10,&local_2e8,2,plVar12,&local_1f8);
                  uStack_2ec = 0;
                  local_2f8 = 0.05;
                  iVar4 = FUN_140e851f0(uVar10,&local_2f8,DAT_141955260,1);
                  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(param_3);
                  }
                  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
                  if (iVar4 < 1) {
                    uVar18 = 0;
                  }
                  *param_3 = (ulonglong)uVar18 << 0x20;
                }
                else {
                  uStack_2ec = 0;
                  local_2f8 = 32776.0;
                  iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  if (iVar4 == 0) goto LAB_14031d191;
                  local_2a8 = 0x26;
                  uStack_2ec = 0;
                  local_2f8 = 32785.0;
                  iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  if (iVar4 != 0) {
                    uStack_2ec = 0;
                    local_2f8 = 32786.0;
                    iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                    if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_2f8);
                    }
                    if (iVar4 != 0) {
                      local_2a8 = 0x2a;
                      uStack_2ec = 0;
                      local_2f8 = 32787.0;
                      iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2f8);
                      }
                      if (iVar4 != 0) {
                        uStack_2ec = 0;
                        local_2f8 = 32788.0;
                        iVar4 = FUN_140e851f0(&local_2a0,&local_2f8,DAT_141955260,0);
                        if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_2f8);
                        }
                        if (iVar4 != 0) {
                          local_2a8 = 0x30;
                          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_2e8);
                          }
                          local_2e8 = 0;
                          local_2e0 = 0;
                          local_2dc = 5;
                          uVar13 = (ulonglong)local_1d0[0];
                          if (((int)local_1d0[0] < 1) ||
                             (pdVar15 = (double *)*local_1c8, pdVar15 != &local_258)) {
                            local_290 = *(undefined4 *)pdVar15;
                            uStack_28c = *(undefined4 *)((longlong)pdVar15 + 4);
                            uStack_288 = *(undefined4 *)(pdVar15 + 1);
                            uStack_284 = *(undefined4 *)((longlong)pdVar15 + 0xc);
                            if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                              FUN_140041a50(&local_258);
                            }
                            FUN_140041b80(&local_258,&local_290);
                          }
                          local_1f8 = &local_258;
                          local_1f0 = &local_2a0;
                          local_2cc = local_294;
                          local_2d0 = local_298;
                          if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
                            local_2d8 = local_2a0;
                          }
                          else {
                            FUN_1400419b0(&local_2d8,&local_2a0);
                          }
                          local_res18 = 8;
                          uStack_2ec = 7;
                          local_2f8 = (double)CONCAT44(local_2f8._4_4_,0x8001);
                          FUN_1400462a0(&local_2d8,&local_2f8);
                          if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_2f8);
                          }
                          iVar4 = FUN_140e4a740(&local_2d8);
                          plVar12 = (longlong *)0x0;
                          if (((local_264 & 0xffffff) == 2) && (local_270 != 0)) {
                            if ((iVar4 < 0) || (*(int *)(local_270 + 0x24) <= iVar4)) {
                              FUN_140e632c0("index out of bounds request %d maximum size is %d",
                                            iVar4,*(undefined4 *)(local_270 + 0x24));
                            }
                            else {
                              plVar12 = (longlong *)
                                        ((longlong)iVar4 * 0x10 + *(longlong *)(local_270 + 8));
                            }
                          }
                          else {
                            FUN_140e632c0("trying to index variable that is not an array");
                            plVar12 = &local_270;
                          }
                          uVar10 = FUN_140e63610(local_res8,local_res10,&local_2e8,2,plVar12,
                                                 &local_1f8);
                          uStack_2ec = 0;
                          local_2f8 = 0.0;
                          iVar4 = FUN_140e851f0(uVar10,&local_2f8,DAT_141955260,1);
                          if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_2f8);
                          }
                          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U)
                              != 0) {
                            FUN_140041a50(param_3);
                          }
                          *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
                          if (iVar4 < 1) {
                            uVar18 = 0;
                          }
                          *param_3 = (ulonglong)uVar18 << 0x20;
                          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                            FUN_140041a50(&local_2d8);
                          }
                          goto LAB_14031c6ce;
                        }
                      }
                      local_2a8 = 0x2c;
                      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2e8);
                      }
                      local_2e8 = 0;
                      local_2e0 = 0;
                      local_2dc = 5;
                      uVar13 = (ulonglong)local_1d0[0];
                      if (((int)local_1d0[0] < 1) ||
                         (pdVar15 = (double *)*local_1c8, pdVar15 != &local_258)) {
                        local_290 = *(undefined4 *)pdVar15;
                        uStack_28c = *(undefined4 *)((longlong)pdVar15 + 4);
                        uStack_288 = *(undefined4 *)(pdVar15 + 1);
                        uStack_284 = *(undefined4 *)((longlong)pdVar15 + 0xc);
                        if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_258);
                        }
                        FUN_140041b80(&local_258,&local_290);
                      }
                      local_1f8 = &local_258;
                      local_1f0 = &local_2a0;
                      local_2cc = local_294;
                      local_2d0 = local_298;
                      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
                        local_2d8 = local_2a0;
                      }
                      else {
                        FUN_1400419b0(&local_2d8,&local_2a0);
                      }
                      local_res18 = 4;
                      uStack_2ec = 7;
                      local_2f8 = (double)CONCAT44(local_2f8._4_4_,0x8001);
                      FUN_1400462a0(&local_2d8,&local_2f8);
                      if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2f8);
                      }
                      iVar4 = FUN_140e4a740(&local_2d8);
                      plVar12 = (longlong *)0x0;
                      if (((local_264 & 0xffffff) == 2) && (local_270 != 0)) {
                        if ((iVar4 < 0) || (*(int *)(local_270 + 0x24) <= iVar4)) {
                          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                        *(undefined4 *)(local_270 + 0x24));
                        }
                        else {
                          plVar12 = (longlong *)
                                    ((longlong)iVar4 * 0x10 + *(longlong *)(local_270 + 8));
                        }
                      }
                      else {
                        FUN_140e632c0("trying to index variable that is not an array");
                        plVar12 = &local_270;
                      }
                      uVar10 = FUN_140e63610(local_res8,local_res10,&local_2e8,2,plVar12,&local_1f8)
                      ;
                      iVar4 = FUN_140e851f0(uVar10,&local_198,DAT_141955260,1);
                      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) !=
                          0) {
                        FUN_140041a50(param_3);
                      }
                      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
                      if (iVar4 < 1) {
                        uVar18 = 0;
                      }
                      *param_3 = (ulonglong)uVar18 << 0x20;
                      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2d8);
                      }
                      goto LAB_14031c6ce;
                    }
                  }
                  local_2a8 = 0x28;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  if (((int)local_1d0[0] < 1) ||
                     (pdVar15 = (double *)*local_1c8, pdVar15 != &local_258)) {
                    local_290 = *(undefined4 *)pdVar15;
                    uStack_28c = *(undefined4 *)((longlong)pdVar15 + 4);
                    uStack_288 = *(undefined4 *)(pdVar15 + 1);
                    uStack_284 = *(undefined4 *)((longlong)pdVar15 + 0xc);
                    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_258);
                    }
                    FUN_140041b80(&local_258,&local_290);
                  }
                  local_1f8 = &local_258;
                  local_1f0 = &local_2a0;
                  local_2cc = local_294;
                  local_2d0 = local_298;
                  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) == 0) {
                    local_2d8 = local_2a0;
                  }
                  else {
                    FUN_1400419b0(&local_2d8,&local_2a0);
                  }
                  local_res18 = 2;
                  uStack_2ec = 7;
                  local_2f8 = (double)CONCAT44(local_2f8._4_4_,0x8001);
                  FUN_1400462a0(&local_2d8,&local_2f8);
                  if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  iVar4 = FUN_140e4a740(&local_2d8);
                  plVar12 = (longlong *)0x0;
                  if (((local_264 & 0xffffff) == 2) && (local_270 != 0)) {
                    if ((iVar4 < 0) || (*(int *)(local_270 + 0x24) <= iVar4)) {
                      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                    *(undefined4 *)(local_270 + 0x24));
                    }
                    else {
                      plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_270 + 8));
                    }
                  }
                  else {
                    FUN_140e632c0("trying to index variable that is not an array");
                    plVar12 = &local_270;
                  }
                  uVar10 = FUN_140e63610(local_res8,local_res10,&local_2e8,2,plVar12,&local_1f8);
                  iVar4 = FUN_140e851f0(uVar10,&local_188,DAT_141955260,1);
                  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(param_3);
                  }
                  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
                  if (iVar4 < 1) {
                    uVar18 = 0;
                  }
                  *param_3 = (ulonglong)uVar18 << 0x20;
                }
                uVar13 = (ulonglong)local_1d0[0];
                if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2d8);
                }
                goto LAB_14031c6ce;
              }
              local_2a8 = 0x34;
              uVar5 = local_2bc & 0xffffff;
              if (uVar5 == 0) {
LAB_14031bf43:
                local_2c8 = local_2c8 + 1.0;
              }
              else {
                if (uVar5 == 1) {
                  local_2c8 = (double)FUN_140e4b060(&local_2c8);
                  local_2bc = 0;
                  goto LAB_14031bf43;
                }
                if (uVar5 == 7) {
                  local_2c8 = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_ + 1);
                }
                else if (uVar5 == 10) {
                  local_2c8 = (double)((longlong)local_2c8 + 1);
                }
                else {
                  if (uVar5 == 0xd) {
                    local_2bc = 0;
                    goto LAB_14031bf43;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2c8,&local_2c8);
                }
              }
            } while (0 < iVar4);
LAB_14031c68d:
            uVar13 = (ulonglong)local_1d0[0];
          }
        }
        else {
          local_2a8 = 0x37;
          if (iVar4 < 1) {
            puVar11 = &DAT_1419df7b0;
          }
          else {
            puVar11 = (undefined8 *)*local_1c8;
          }
          local_15c = 0;
          local_168 = 0xc059000000000000;
          iVar7 = FUN_140e851f0(puVar11,&local_168,DAT_141955260,0);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          if (iVar7 != 0) {
            local_2a8 = 0x59;
            *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
            *param_3 = 0;
            goto LAB_14031c6ce;
          }
          local_2a8 = 0x39;
          pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4d8);
          if (iVar4 < 2) {
            puVar11 = &DAT_1419df7b0;
          }
          else {
            puVar11 = (undefined8 *)local_1c8[1];
          }
          iVar4 = FUN_140e4a740(puVar11);
          if (((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 2) &&
             (dVar17 = *pdVar8, dVar17 != 0.0)) {
            if ((iVar4 < 0) || (*(int *)((longlong)dVar17 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)((longlong)dVar17 + 0x24));
              pdVar8 = (double *)0x0;
            }
            else {
              pdVar8 = (double *)((longlong)iVar4 * 0x10 + *(longlong *)((longlong)dVar17 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
          }
          if (pdVar8 != &local_208) {
            local_290 = *(undefined4 *)pdVar8;
            uStack_28c = *(undefined4 *)((longlong)pdVar8 + 4);
            uStack_288 = *(undefined4 *)(pdVar8 + 1);
            uStack_284 = *(undefined4 *)((longlong)pdVar8 + 0xc);
            if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            FUN_140041b80(&local_208,&local_290);
            local_res20 = uStack_1fc;
            dVar14 = local_208;
          }
          uVar6 = local_res20;
          local_2a8 = 0x3a;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2bc = 0;
          local_2c8 = 0.0;
          local_2a8 = 0x3b;
          iVar4 = 0;
          if ((uVar6 == 2) && (dVar14 != 0.0)) {
            iVar4 = *(int *)((longlong)dVar14 + 0x24);
          }
          if (0 < iVar4) {
            do {
              pdVar8 = (double *)0x0;
              iVar4 = iVar4 + -1;
              local_2a8 = 0x3d;
              iVar7 = FUN_140e4a740(&local_2c8);
              if (((uVar6 & 0xffffff) == 2) && (dVar14 != 0.0)) {
                if ((iVar7 < 0) || (*(int *)((longlong)dVar14 + 0x24) <= iVar7)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                *(undefined4 *)((longlong)dVar14 + 0x24));
                }
                else {
                  pdVar8 = (double *)((longlong)iVar7 * 0x10 + *(longlong *)((longlong)dVar14 + 8));
                }
                if (pdVar8 != &local_280) goto LAB_14031c171;
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                pdVar8 = &local_208;
LAB_14031c171:
                local_290 = *(undefined4 *)pdVar8;
                uStack_28c = *(undefined4 *)((longlong)pdVar8 + 4);
                uStack_288 = *(undefined4 *)(pdVar8 + 1);
                uStack_284 = *(undefined4 *)((longlong)pdVar8 + 0xc);
                if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_280);
                }
                FUN_140041b80(&local_280,&local_290);
              }
              local_2a8 = 0x3f;
              local_14c = 0;
              local_158 = 0x3ff0000000000000;
              iVar7 = FUN_140e851f0(&local_280,&local_158,DAT_141955260,0);
              if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_158);
              }
              uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
              if (iVar7 == 0) {
LAB_14031c5a0:
                local_2a8 = 0x45;
                if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2e8);
                }
                local_2e8 = 0;
                local_2e0 = 0;
                local_2dc = 5;
                local_1f8 = &local_280;
                ppdVar20 = (double **)CONCAT44(uVar16,DAT_141a02988);
                uVar10 = FUN_140e634e0(local_res8,local_res10,&local_2e8,1,ppdVar20,&local_1f8);
                cVar3 = FUN_140e491e0(uVar10);
                if (cVar3 != '\0') {
                  local_2a8 = 0x45;
LAB_14031c51b:
                  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
                  *param_3 = 0x3ff0000000000000;
                  uVar13 = (ulonglong)local_1d0[0];
                  goto LAB_14031c6ce;
                }
              }
              else {
                local_13c = 0;
                local_148 = 0x4008000000000000;
                iVar7 = FUN_140e851f0(&local_280,&local_148,DAT_141955260,0);
                if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_148);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) goto LAB_14031c5a0;
                local_12c = 0;
                local_138 = 0x4000000000000000;
                iVar7 = FUN_140e851f0(&local_280,&local_138,DAT_141955260,0);
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_138);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) goto LAB_14031c5a0;
                local_11c = 0;
                local_128 = 0x4010000000000000;
                iVar7 = FUN_140e851f0(&local_280,&local_128,DAT_141955260,0);
                if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_128);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) goto LAB_14031c5a0;
                local_10c = 0;
                local_118 = 0x4014000000000000;
                iVar7 = FUN_140e851f0(&local_280,&local_118,DAT_141955260,0);
                if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_118);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) goto LAB_14031c5a0;
                local_2a8 = 0x47;
                local_fc = 0;
                local_108 = 0x40e4008000000000;
                iVar7 = FUN_140e851f0(&local_280,&local_108,DAT_141955260,0);
                if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_108);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) {
                  local_2a8 = 0x49;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  ppdVar20 = (double **)CONCAT44(uVar16,DAT_141a01608);
                  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_2e8,0,ppdVar20,0);
                  cVar3 = FUN_140e491e0(uVar10);
                  if (cVar3 == '\0') goto LAB_14031c627;
                  local_2a8 = 0x49;
                  goto LAB_14031c51b;
                }
                local_2a8 = 0x4b;
                uStack_2ec = 0;
                local_2f8 = 40965.0;
                iVar7 = FUN_140e851f0(&local_280,&local_2f8,DAT_141955260,0);
                if ((1 << ((byte)uStack_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                uVar16 = (undefined4)((ulonglong)ppdVar20 >> 0x20);
                if (iVar7 == 0) {
                  local_2a8 = 0x4d;
                  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2e8);
                  }
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_2dc = 5;
                  ppdVar20 = (double **)CONCAT44(uVar16,DAT_141a015e8);
                  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_2e8,0,ppdVar20,0);
                  cVar3 = FUN_140e491e0(uVar10);
                  if (cVar3 != '\0') {
                    local_2a8 = 0x4d;
                    goto LAB_14031c51b;
                  }
                }
                else {
                  local_2a8 = 0x4f;
                  iVar7 = FUN_140e851f0(&local_280,&DAT_1419df7b0,DAT_141955260,0);
                  if (iVar7 != 0) {
                    local_2a8 = 0x51;
                    dVar17 = local_280;
                    if ((local_274 & 0xffffff) != 0) {
                      dVar17 = (double)FUN_140e4b060(&local_280);
                    }
                    cVar3 = FUN_140eab100((longlong)dVar17);
                    if (cVar3 != '\0') {
                      local_2a8 = 0x51;
                      goto LAB_14031c51b;
                    }
                  }
                }
              }
LAB_14031c627:
              local_2a8 = 0x54;
              uVar5 = local_2bc & 0xffffff;
              if (uVar5 == 0) {
LAB_14031c67b:
                local_2c8 = local_2c8 + 1.0;
              }
              else {
                if (uVar5 == 1) {
                  local_2c8 = (double)FUN_140e4b060(&local_2c8);
                  local_2bc = 0;
                  goto LAB_14031c67b;
                }
                if (uVar5 == 7) {
                  local_2c8 = (double)CONCAT44(local_2c8._4_4_,local_2c8._0_4_ + 1);
                }
                else if (uVar5 == 10) {
                  local_2c8 = (double)((longlong)local_2c8 + 1);
                }
                else {
                  if (uVar5 == 0xd) {
                    local_2bc = 0;
                    goto LAB_14031c67b;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2c8,&local_2c8);
                }
              }
            } while (0 < iVar4);
            goto LAB_14031c68d;
          }
        }
        cVar3 = FUN_140e643f0(local_f8,&local_res8,&local_res10);
      } while (cVar3 != '\0');
    }
    FUN_140e63970(local_f8,&local_res8,&local_res10);
LAB_14031c6ce:
    if (local_e8 != 0) {
      FUN_140e4cd60();
      local_e8 = 0;
    }
    uVar6 = local_res20;
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1c0 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_270);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_258,0x10,5,FUN_140041b30);
  if (0 < (int)uVar13) {
    puVar11 = local_1c8;
    do {
      puVar2 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_1c8);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return param_3;
}


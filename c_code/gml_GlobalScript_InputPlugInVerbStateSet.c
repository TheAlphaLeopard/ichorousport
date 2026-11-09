// gml_GlobalScript_InputPlugInVerbStateSet @ 0x14035eae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_InputPlugInVerbStateSet
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  double dVar16;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 local_res20;
  ulonglong uVar17;
  undefined8 **ppuVar18;
  undefined8 **ppuVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  double local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  double *local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  double local_138;
  uint local_12c;
  double local_128;
  undefined4 local_11c;
  longlong local_118;
  uint local_10c;
  double local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res20 = 0;
  local_1a0 = "gml_Script_InputPlugInVerbStateRead";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 8;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a0,param_4,2,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_1f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_22c = 0;
  local_238 = 0;
  local_15c = 0;
  local_168 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde6b0) &&
     (_Init_thread_header(&DAT_141dde6b0), DAT_141dde6b0 == -1)) {
    DAT_141dde6a8 = (longlong *)FUN_140e63aa0(DAT_1419f3508);
    _Init_thread_footer(&DAT_141dde6b0);
  }
  local_198 = 8;
  puVar13 = &DAT_1419df7b0;
  uVar14 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_198 = 8;
    if ((int)local_a0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_98[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc12f == '\0') {
    FUN_140e64380(DAT_141dde6a8,"gml_Script_InputPlugInVerbStateRead");
    FUN_140e64380(local_res8,"gml_Script_InputPlugInVerbStateRead");
  }
  local_198 = 10;
  if (DAT_141ddc12f == '\0') {
    DAT_141ddc12f = '\x01';
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde6a8 + 0x10))(DAT_141dde6a8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde6a8);
    puVar6 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_238,0,0);
    if (puVar6 != puVar5) {
      local_228 = (double)*puVar6;
      uStack_220 = *(undefined4 *)(puVar6 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_228);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde6a8 + 0x10))(DAT_141dde6a8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6a8);
    uVar15 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_168,0,0);
    if (puVar6 != puVar5) {
      local_228 = (double)*puVar6;
      uStack_220 = *(undefined4 *)(puVar6 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_228);
    }
    FUN_140e60910(1);
  }
  local_198 = 6;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14035eed6:
    local_228 = (double)*puVar5;
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
    if (puVar5 != &local_1f8) goto LAB_14035eed6;
  }
  local_190 = &local_1f8;
  ppuVar18 = &local_190;
  ppuVar19 = (undefined8 **)CONCAT44(uVar15,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_238,1,ppuVar19,ppuVar18);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_198 = 8;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    uVar15 = (undefined4)((ulonglong)ppuVar19 >> 0x20);
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((int)local_a0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14035efc2:
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_228);
    }
    else {
      puVar5 = (undefined8 *)local_98[1];
      if (puVar5 != &local_1e8) goto LAB_14035efc2;
    }
    local_188 = &local_1e8;
    local_228 = (double)CONCAT44(uRam0000000141dd147c,_DAT_141dd1478);
    uStack_220 = uRam0000000141dd1480;
    uStack_21c = DAT_141dd1484;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_180 = &local_1d8;
    ppuVar18 = &local_188;
    pdVar8 = (double *)
             FUN_140e634e0(local_res8,local_res10,&local_148,1,CONCAT44(uVar15,DAT_1419fdc58),
                           ppuVar18);
    if (pdVar8 != &local_1c8) {
      local_228 = *pdVar8;
      uStack_220 = *(undefined4 *)(pdVar8 + 1);
      uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_178 = &local_1c8;
    local_228 = (double)CONCAT44(uRam0000000141dd141c,_DAT_141dd1418);
    uStack_220 = uRam0000000141dd1420;
    uStack_21c = DAT_141dd1424;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_228);
    local_170 = local_1b8;
    ppuVar19 = &local_180;
    FUN_14008e020(local_res8,local_res10,&local_168,3,ppuVar19);
  }
  local_198 = 0xf;
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
  }
  uStack_20c = 0;
  local_218 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_218,DAT_141955260,1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (uVar4 < 0x80000000) {
    local_198 = 0x11;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_228 = (double)CONCAT44(uRam0000000141dd148c,_DAT_141dd1488);
    uStack_220 = uRam0000000141dd1490;
    uStack_21c = DAT_141dd1494;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_190 = &local_1f8;
    if ((int)local_a0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14035f205:
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_228);
    }
    else {
      puVar5 = (undefined8 *)local_98[1];
      if (puVar5 != &local_1e8) goto LAB_14035f205;
    }
    local_188 = &local_1e8;
    local_228 = (double)CONCAT44(uRam0000000141dd145c,_DAT_141dd1458);
    uStack_220 = uRam0000000141dd1460;
    uStack_21c = DAT_141dd1464;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_180 = &local_1d8;
    local_228 = (double)CONCAT44(uRam00000001419e4404,_DAT_1419e4400);
    uStack_220 = uRam00000001419e4408;
    uStack_21c = uRam00000001419e440c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_228);
    local_178 = &local_1c8;
    local_228 = (double)CONCAT44(uRam0000000141dd143c,_DAT_141dd1438);
    uStack_220 = uRam0000000141dd1440;
    uStack_21c = DAT_141dd1444;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_228);
    local_170 = local_1b8;
    ppuVar19 = &local_190;
    FUN_14008e020(local_res8,local_res10,&local_238,5,ppuVar19);
  }
  local_198 = 0x19;
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
  }
  uStack_20c = 0;
  local_218 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_218,DAT_141955260,1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_198 = 0x1c;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_228 = (double)CONCAT44(uRam0000000141dd148c,_DAT_141dd1488);
    uStack_220 = uRam0000000141dd1490;
    uStack_21c = DAT_141dd1494;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_190 = &local_1f8;
    if ((int)local_a0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14035f40c:
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_228);
    }
    else {
      puVar5 = (undefined8 *)local_98[1];
      if (puVar5 != &local_1e8) goto LAB_14035f40c;
    }
    local_188 = &local_1e8;
    local_228 = (double)CONCAT44(uRam0000000141dd14dc,_DAT_141dd14d8);
    uStack_220 = uRam0000000141dd14e0;
    uStack_21c = DAT_141dd14e4;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_180 = &local_1d8;
    ppuVar19 = &local_190;
    FUN_14008e020(local_res8,local_res10,&local_238,3,ppuVar19);
  }
  local_198 = 0xf;
  uVar7 = (**(code **)(*DAT_141dde6a8 + 8))(DAT_141dde6a8,DAT_1419fcb48);
  uVar20 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
  ppuVar19 = (undefined8 **)((ulonglong)ppuVar19 & 0xffffffffffffff00);
  FUN_140e87440(uVar7,DAT_141a024e8,0x80000000,&local_c8,ppuVar19,uVar20);
  uStack_20c = 10;
  local_218 = 6;
  iVar3 = FUN_140e851f0(&local_c8,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 != 0) {
    local_198 = 0x11;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_228 = (double)CONCAT44(uRam0000000141dd144c,_DAT_141dd1448);
    uStack_220 = uRam0000000141dd1450;
    uStack_21c = DAT_141dd1454;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_190 = &local_1f8;
    ppuVar19 = &local_190;
    FUN_14008e020(local_res8,local_res10,&local_238,1,ppuVar19);
  }
  local_198 = 0x14;
  local_b0 = (**(code **)(*DAT_141dde6a8 + 8))(DAT_141dde6a8,DAT_1419fcb48);
  uVar17 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  FUN_140e87440(local_b0,DAT_1419fe1c8,0x80000000,&local_d8,uVar17,uVar20 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar17 >> 0x20);
  local_228 = (double)local_d8;
  uStack_220 = uStack_d0;
  uStack_21c = uStack_cc;
  FUN_140041b80(&local_f8,&local_228);
  local_198 = 0x16;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((int)local_a0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14035f684:
    local_228 = (double)*puVar5;
    uStack_220 = *(undefined4 *)(puVar5 + 1);
    uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
  }
  else {
    puVar5 = (undefined8 *)*local_98;
    if (puVar5 != &local_1f8) goto LAB_14035f684;
  }
  local_190 = &local_1f8;
  local_228 = (double)CONCAT44(uRam00000001419e43f4,_DAT_1419e43f0);
  uStack_220 = uRam00000001419e43f8;
  uStack_21c = uRam00000001419e43fc;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_228);
  local_188 = &local_1e8;
  uVar7 = CONCAT44(uVar15,DAT_141a04da8);
  pdVar8 = (double *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar7,&local_190);
  uVar15 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (pdVar8 != &local_108) {
    local_228 = *pdVar8;
    uStack_220 = *(undefined4 *)(pdVar8 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_228);
  }
  local_198 = 0x17;
  uStack_20c = DAT_141dd14a4;
  uStack_210 = DAT_141dd14a0;
  if ((1 << ((byte)DAT_141dd14a4 & 0x1f) & 0x46U) == 0) {
    local_218 = CONCAT44(DAT_141dd1498._4_4_,(undefined4)DAT_141dd1498);
  }
  else {
    FUN_1400419b0(&local_218,&DAT_141dd1498);
  }
  iVar3 = FUN_140e851f0(&local_108,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 != 0) {
    local_198 = 0x19;
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    local_228 = (double)CONCAT44(uRam0000000141dd146c,_DAT_141dd1468);
    uStack_220 = uRam0000000141dd1470;
    uStack_21c = DAT_141dd1474;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_190 = &local_1f8;
    local_228 = (double)CONCAT44(DAT_141dd1498._4_4_,(undefined4)DAT_141dd1498);
    uStack_220 = DAT_141dd14a0;
    uStack_21c = DAT_141dd14a4;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_228);
    local_188 = &local_1e8;
    local_228 = (double)CONCAT44(uRam0000000141dd142c,_DAT_141dd1428);
    uStack_220 = uRam0000000141dd1430;
    uStack_21c = DAT_141dd1434;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_180 = &local_1d8;
    local_178 = &local_108;
    local_228 = (double)CONCAT44(uRam0000000141dd14cc,_DAT_141dd14c8);
    uStack_220 = uRam0000000141dd14d0;
    uStack_21c = DAT_141dd14d4;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_228);
    local_170 = local_1b8;
    ppuVar18 = &local_190;
    FUN_14008e020(local_res8,local_res10,&local_238,5,ppuVar18);
    uVar15 = (undefined4)((ulonglong)ppuVar18 >> 0x20);
  }
  local_198 = 0x1c;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  if ((int)local_a0[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_98;
    if (puVar5 == &local_1f8) goto LAB_14035f9c6;
  }
  local_228 = (double)*puVar5;
  uStack_220 = *(undefined4 *)(puVar5 + 1);
  uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  FUN_140041b80(&local_1f8,&local_228);
LAB_14035f9c6:
  local_190 = &local_1f8;
  local_228 = (double)CONCAT44(uRam00000001419e43e4,_DAT_1419e43e0);
  uStack_220 = uRam00000001419e43e8;
  uStack_21c = uRam00000001419e43ec;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_228);
  local_188 = &local_1e8;
  ppuVar18 = &local_190;
  pdVar8 = (double *)
           FUN_140e634e0(local_res8,local_res10,&local_238,2,CONCAT44(uVar15,DAT_141a04da8),ppuVar18
                        );
  if (pdVar8 != &local_138) {
    local_228 = *pdVar8;
    uStack_220 = *(undefined4 *)(pdVar8 + 1);
    uStack_21c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_228);
  }
  local_198 = 0x1d;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  ppuVar19 = (undefined8 **)0x0;
  uVar7 = gml_Script_InputVerbGetBindingName(local_res8,local_res10,&local_238,0,0);
  iVar3 = FUN_140e851f0(&local_138,uVar7,DAT_141955260,0);
  if (iVar3 != 0) {
    local_198 = 0x1f;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_228 = (double)CONCAT44(uRam0000000141dd14ec,_DAT_141dd14e8);
    uStack_220 = uRam0000000141dd14f0;
    uStack_21c = DAT_141dd14f4;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_228);
    local_190 = &local_1f8;
    puVar5 = (undefined8 *)gml_Script_InputVerbGetBindingName(local_res8,local_res10,&local_148,0,0)
    ;
    if (puVar5 != &local_1e8) {
      local_228 = (double)*puVar5;
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_228);
    }
    local_188 = &local_1e8;
    local_228 = (double)CONCAT44(uRam0000000141dd142c,_DAT_141dd1428);
    uStack_220 = uRam0000000141dd1430;
    uStack_21c = DAT_141dd1434;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_228);
    local_180 = &local_1d8;
    local_178 = &local_138;
    local_228 = (double)CONCAT44(uRam0000000141dd14cc,_DAT_141dd14c8);
    uStack_220 = uRam0000000141dd14d0;
    uStack_21c = DAT_141dd14d4;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_228);
    local_170 = local_1b8;
    ppuVar19 = &local_190;
    FUN_14008e020(local_res8,local_res10,&local_168,5,ppuVar19);
  }
  local_198 = 0x22;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde6a8 + 8))(DAT_141dde6a8,DAT_141a026b8);
  if ((int)local_a0[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_98[1];
  }
  local_b8 = plVar9;
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar12 = plVar9;
  }
  ppuVar18 = (undefined8 **)((ulonglong)ppuVar18 & 0xffffffffffffff00);
  uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  FUN_140e87440(plVar12,DAT_1419fd6e8,0x80000000,&local_e8,uVar20,ppuVar18);
  local_228 = (double)local_e8;
  uStack_220 = uStack_e0;
  uStack_21c = uStack_dc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_228);
  local_198 = 0x23;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0.0;
  local_198 = 0x24;
  dVar16 = local_138;
  if ((local_12c & 0xffffff) != 0) {
    dVar16 = (double)FUN_140e4b060(&local_138);
  }
  iVar3 = (int)(longlong)dVar16;
  uVar17 = (longlong)dVar16;
  uVar15 = local_ec;
  do {
    if (iVar3 < 1) {
      uVar21 = (undefined4)(uVar20 >> 0x20);
      local_198 = 0x33;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      if (((int)local_a0[0] < 1) || (puVar13 = (undefined8 *)*local_98, puVar13 != &local_1f8)) {
        local_208 = *(undefined4 *)puVar13;
        uStack_204 = *(undefined4 *)((longlong)puVar13 + 4);
        uStack_200 = *(undefined4 *)(puVar13 + 1);
        uStack_1fc = *(undefined4 *)((longlong)puVar13 + 0xc);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_208);
      }
      local_190 = &local_1f8;
      local_208 = _DAT_1419e43f0;
      uStack_204 = uRam00000001419e43f4;
      uStack_200 = uRam00000001419e43f8;
      uStack_1fc = uRam00000001419e43fc;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_208);
      local_188 = &local_1e8;
      pdVar8 = (double *)
               FUN_140e634e0(local_res8,local_res10,&local_238,2,CONCAT44(uVar21,DAT_141a04da8),
                             &local_190);
      if (pdVar8 != &local_128) {
        local_208 = *(undefined4 *)pdVar8;
        uStack_204 = *(undefined4 *)((longlong)pdVar8 + 4);
        uStack_200 = *(undefined4 *)(pdVar8 + 1);
        uStack_1fc = *(undefined4 *)((longlong)pdVar8 + 0xc);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_208);
      }
      local_198 = 0x34;
      uStack_20c = DAT_141dd14c4;
      uStack_210 = DAT_141dd14c0;
      if ((1 << ((byte)DAT_141dd14c4 & 0x1f) & 0x46U) == 0) {
        local_218 = CONCAT44(DAT_141dd14b8._4_4_,(undefined4)DAT_141dd14b8);
      }
      else {
        FUN_1400419b0(&local_218,&DAT_141dd14b8);
      }
      iVar3 = FUN_140e851f0(&local_128,&local_218,DAT_141955260,0);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      if (iVar3 != 0) {
        local_198 = 0x36;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_208 = _DAT_141dd14a8;
        uStack_204 = uRam0000000141dd14ac;
        uStack_200 = uRam0000000141dd14b0;
        uStack_1fc = DAT_141dd14b4;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        FUN_140041b80(&local_1f8,&local_208);
        local_190 = &local_1f8;
        local_208 = (undefined4)DAT_141dd14b8;
        uStack_204 = DAT_141dd14b8._4_4_;
        uStack_200 = DAT_141dd14c0;
        uStack_1fc = DAT_141dd14c4;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_208);
        local_188 = &local_1e8;
        local_208 = _DAT_141dd1428;
        uStack_204 = uRam0000000141dd142c;
        uStack_200 = uRam0000000141dd1430;
        uStack_1fc = DAT_141dd1434;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_208);
        local_180 = &local_1d8;
        local_178 = &local_128;
        local_208 = _DAT_141dd14c8;
        uStack_204 = uRam0000000141dd14cc;
        uStack_200 = uRam0000000141dd14d0;
        uStack_1fc = DAT_141dd14d4;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_208);
        local_170 = local_1b8;
        FUN_14008e020(local_res8,local_res10,&local_238,5,&local_190);
      }
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      _eh_vector_destructor_iterator_(&local_1f8,0x10,5,FUN_140041b30);
      if (0 < (int)local_a0[0]) {
        puVar13 = local_98;
        do {
          puVar5 = (undefined8 *)*puVar13;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
          puVar13 = puVar13 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      FUN_140e4cd60(local_98);
      DAT_141dc7a50 = (undefined8 *)local_1a8;
      return local_res18;
    }
    local_a8 = (ulonglong)((int)uVar17 - 1);
    local_198 = 0x26;
    iVar3 = FUN_140e4a740(&local_158);
    plVar12 = (longlong *)0x0;
    if (((local_10c & 0xffffff) == 2) && (local_118 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_118 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_118 + 0x24));
      }
      else {
        plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_118 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar12 = &local_118;
    }
    iVar3 = FUN_140e63cb0(local_90,&local_res8,&local_res10,plVar12);
    if (0 < iVar3) {
      do {
        uVar21 = (undefined4)(uVar20 >> 0x20);
        local_198 = 0x28;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde28);
        if ((int)local_a0[0] < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_14035fee3:
          local_208 = *(undefined4 *)puVar5;
          uStack_204 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_200 = *(undefined4 *)(puVar5 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_208);
        }
        else {
          puVar5 = (undefined8 *)*local_98;
          if (puVar5 != &local_1f8) goto LAB_14035fee3;
        }
        local_190 = &local_1f8;
        local_208 = _DAT_1419e43b0;
        uStack_204 = uRam00000001419e43b4;
        uStack_200 = uRam00000001419e43b8;
        uStack_1fc = uRam00000001419e43bc;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_208);
        local_188 = &local_1e8;
        FUN_140e609c0(local_res8);
        uVar7 = CONCAT44(uVar21,DAT_141a04da8);
        puVar11 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar7,&local_190);
        uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar11 != puVar10) {
          local_208 = *puVar11;
          uStack_204 = puVar11[1];
          uStack_200 = puVar11[2];
          uStack_1fc = puVar11[3];
          if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_208);
        }
        FUN_140e60910(1);
        local_198 = 0x29;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd488);
        if ((int)local_a0[0] < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_140360036:
          local_208 = *(undefined4 *)puVar5;
          uStack_204 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_200 = *(undefined4 *)(puVar5 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_208);
        }
        else {
          puVar5 = (undefined8 *)*local_98;
          if (puVar5 != &local_1f8) goto LAB_140360036;
        }
        local_190 = &local_1f8;
        local_208 = _DAT_1419e43c0;
        uStack_204 = uRam00000001419e43c4;
        uStack_200 = uRam00000001419e43c8;
        uStack_1fc = uRam00000001419e43cc;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_208);
        local_188 = &local_1e8;
        FUN_140e609c0(local_res8);
        uVar7 = CONCAT44(uVar21,DAT_141a04da8);
        puVar11 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar7,&local_190);
        uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar11 != puVar10) {
          local_208 = *puVar11;
          uStack_204 = puVar11[1];
          uStack_200 = puVar11[2];
          uStack_1fc = puVar11[3];
          if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_208);
        }
        FUN_140e60910(1);
        local_198 = 0x2a;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar10 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6f8);
        if ((int)local_a0[0] < 1) {
          puVar5 = &DAT_1419df7b0;
LAB_140360189:
          local_208 = *(undefined4 *)puVar5;
          uStack_204 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_200 = *(undefined4 *)(puVar5 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_208);
        }
        else {
          puVar5 = (undefined8 *)*local_98;
          if (puVar5 != &local_1f8) goto LAB_140360189;
        }
        local_190 = &local_1f8;
        local_208 = _DAT_1419e43c0;
        uStack_204 = uRam00000001419e43c4;
        uStack_200 = uRam00000001419e43c8;
        uStack_1fc = uRam00000001419e43cc;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_208);
        local_188 = &local_1e8;
        FUN_140e609c0(local_res8);
        uVar7 = CONCAT44(uVar21,DAT_141a04da8);
        puVar11 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar7,&local_190);
        uVar21 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar11 != puVar10) {
          local_208 = *puVar11;
          uStack_204 = puVar11[1];
          uStack_200 = puVar11[2];
          uStack_1fc = puVar11[3];
          if ((1 << ((byte)puVar10[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar10);
          }
          FUN_140041b80(puVar10,&local_208);
        }
        FUN_140e60910(1);
        local_198 = 0x2b;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd758);
        if ((int)local_a0[0] < 1) {
          puVar6 = &DAT_1419df7b0;
LAB_1403602dc:
          local_208 = *(undefined4 *)puVar6;
          uStack_204 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_200 = *(undefined4 *)(puVar6 + 1);
          uStack_1fc = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          FUN_140041b80(&local_1f8,&local_208);
        }
        else {
          puVar6 = (undefined8 *)*local_98;
          if (puVar6 != &local_1f8) goto LAB_1403602dc;
        }
        local_190 = &local_1f8;
        local_208 = _DAT_1419e43d0;
        uStack_204 = uRam00000001419e43d4;
        uStack_200 = uRam00000001419e43d8;
        uStack_1fc = uRam00000001419e43dc;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_208);
        local_188 = &local_1e8;
        FUN_140e609c0(local_res8);
        ppuVar18 = &local_190;
        uVar20 = CONCAT44(uVar21,DAT_141a04da8);
        uVar7 = FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar20,ppuVar18);
        uStack_20c = local_ec;
        uStack_210 = local_f0;
        if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) == 0) {
          local_218 = local_f8;
        }
        else {
          FUN_1400419b0(&local_218,&local_f8);
        }
        local_res20 = 1;
        FUN_1400462a0(&local_218,uVar7);
        if (&local_218 != puVar5) {
          local_208 = (undefined4)local_218;
          uStack_204 = local_218._4_4_;
          uStack_200 = uStack_210;
          uStack_1fc = uStack_20c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_208);
        }
        local_res20 = 0;
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140e60910(1);
        local_198 = 0x2d;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6f8);
        plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
        FUN_140e609c0(local_res8);
        uStack_21c = 0;
        local_228 = 0.0;
        iVar3 = FUN_140e851f0(uVar7,&local_228,DAT_141955260,1);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        *(undefined4 *)((longlong)plVar9 + 0xc) = 0xd;
        if (iVar3 < 1) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x3ff00000;
        }
        *plVar9 = (ulonglong)uVar4 << 0x20;
        FUN_140e60910(1);
        cVar2 = FUN_140e643f0(local_90,&local_res8,&local_res10);
      } while (cVar2 != '\0');
      plVar9 = local_b8;
      uVar15 = local_ec;
    }
    FUN_140e63970(local_90,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    uVar17 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
    uVar20 = uVar20 & 0xffffffffffffff00;
    FUN_140e87440(local_b0,DAT_141a024e8,0x80000000,&local_c8,uVar20,uVar17);
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar20 = uVar20 & 0xffffffffffffff00;
    FUN_140e87440(local_b0,DAT_1419fe1c8,0x80000000,&local_d8,uVar20,uVar17);
    if ((int)local_a0[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_98[1];
    }
    iVar3 = FUN_140e4a740(puVar5);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar12 = (longlong *)0x0;
      }
      else {
        plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar12 = plVar9;
    }
    ppuVar18 = (undefined8 **)(uVar17 & 0xffffffffffffff00);
    uVar20 = uVar20 & 0xffffffffffffff00;
    FUN_140e87440(plVar12,DAT_1419fd6e8,0x80000000,&local_e8,uVar20,ppuVar18);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    local_198 = 0x30;
    uVar4 = local_14c & 0xffffff;
    if (uVar4 == 0) {
LAB_14036069c:
      local_158 = local_158 + 1.0;
    }
    else {
      if (uVar4 == 1) {
        local_158 = (double)FUN_140e4b060(&local_158);
        local_14c = 0;
        goto LAB_14036069c;
      }
      if (uVar4 == 7) {
        local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_158 = (double)((longlong)local_158 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_14c = 0;
          goto LAB_14036069c;
        }
        FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
      }
    }
    if (local_80 != 0) {
      FUN_140e4cd60();
    }
    iVar3 = (int)local_a8;
    uVar17 = local_a8;
  } while( true );
}


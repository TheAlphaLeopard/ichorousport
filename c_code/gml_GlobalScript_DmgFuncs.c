// gml_GlobalScript_DmgFuncs @ 0x1402725b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_DmgFuncs
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  double *pdVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  code *pcVar20;
  longlong **in_stack_fffffffffffffc20;
  longlong **pplVar21;
  undefined1 **ppuVar22;
  ulonglong uVar23;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 *local_1f8 [2];
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined8 local_1d8 [2];
  longlong local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined4 local_17c;
  undefined8 *local_178;
  undefined4 local_16c;
  undefined8 **local_168;
  undefined1 *local_160;
  undefined8 *local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 *local_110;
  undefined4 local_108;
  undefined4 local_104;
  uint local_100 [2];
  undefined8 *local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_230 = "gml_Script_debug_resources_imguigm";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x136;
  if (DAT_141dc7a60 == (undefined8 *)0x0) {
    DAT_141dc7a60 = (undefined8 *)FUN_140e63aa0(DAT_141a57070);
  }
  FUN_140041df0(local_100,param_4,1,param_5);
  pcVar20 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_64 = 0;
  local_70 = 0;
  local_27c = 0;
  local_288 = 0;
  local_18c = 0;
  local_198 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddd18) &&
     (_Init_thread_header(&DAT_141dddd18), DAT_141dddd18 == -1)) {
    DAT_141dddce0 = (longlong *)FUN_140e63aa0(DAT_141a571d0);
    _Init_thread_footer(&DAT_141dddd18);
  }
  puVar13 = local_f8;
  uVar18 = local_100[0];
  local_228 = 0x136;
  puVar17 = &DAT_1419df7b0;
  if ((int)local_100[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_f8;
  }
  iVar8 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar8 == 0) {
    local_228 = 0x136;
    if (0 < (int)uVar18) {
      puVar17 = (undefined8 *)*puVar13;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar17);
    }
    *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
    *puVar17 = 0x3ff0000000000000;
  }
  iVar8 = 0;
  if (DAT_141ddc0a6 == '\0') {
    FUN_140e64380(DAT_141dddce0,"gml_Script_debug_resources_imguigm");
    FUN_140e64380(param_1,"gml_Script_debug_resources_imguigm");
  }
  local_228 = 0x137;
  if (DAT_141ddc0a6 == '\0') {
    DAT_141ddc0a6 = '\x01';
    puVar17 = (undefined8 *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a56e00);
    FUN_140e609c0(DAT_141dddce0);
    in_stack_fffffffffffffc20 = (longlong **)&DAT_141dce498;
    pcVar20 = (code *)&DAT_141dce1f8;
    puVar9 = (undefined8 *)
             FUN_140e8da20(&local_70,param_1,0x2c,&DAT_141dce268,&DAT_141dce1f8,&DAT_141dce498,
                           &DAT_141dce258,&DAT_141dce2e8,&DAT_141dce4d8,&DAT_141dce488,
                           &DAT_141dce3b8,&DAT_141dce338,&DAT_141dce128,&DAT_141dce118,
                           &DAT_141dce158,&DAT_141dce4f8,&DAT_141dce478,&DAT_141dce3e8,
                           &DAT_141dce138,&DAT_141dce388,&DAT_141dce188,&DAT_141dce1e8,
                           &DAT_141dce468,&DAT_141dce358,&DAT_141dce2f8,&DAT_141dce378,
                           &DAT_141dce248,&DAT_141dce2c8,&DAT_141dce1c8,&DAT_141dce208,
                           &DAT_141dce218,&DAT_1419df7b0,&DAT_1419df7b0,&DAT_141dce438,
                           &DAT_141dce1b8,&DAT_141dce228,&DAT_141dce3f8,&DAT_141dce318,
                           &DAT_141dce298,&DAT_141dce108,&DAT_141dce368,&DAT_141dce198,
                           &DAT_141dce458,&DAT_1419df7b0,&DAT_1419df7b0,&DAT_141dce328,
                           &DAT_141dce2a8);
    if (puVar9 != puVar17) {
      local_258 = *puVar9;
      uStack_250 = puVar9[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar17);
      }
      FUN_140041b80(puVar17,&local_258);
    }
    FUN_140e60910(1);
    plVar10 = (longlong *)(**(code **)(*DAT_141dddce0 + 8))(DAT_141dddce0,DAT_141a56e00);
    pdVar11 = (double *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a571f0);
    if ((*(int *)((longlong)plVar10 + 0xc) == 2) && (*plVar10 != 0)) {
      iVar8 = *(int *)(*plVar10 + 0x24);
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)pdVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pdVar11);
    }
    *(undefined4 *)((longlong)pdVar11 + 0xc) = 0;
    *pdVar11 = (double)iVar8;
    puVar17 = (undefined8 *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a57200);
    FUN_140e609c0(DAT_141dddce0);
    if (puVar17 != &DAT_1419df7b0) {
      local_258 = DAT_1419df7b0;
      uStack_250 = _DAT_1419df7b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar17);
      }
      FUN_140041b80(puVar17,&local_258);
    }
    FUN_140e60910(1);
    puVar17 = (undefined8 *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a56dd0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar17);
    }
    *(undefined4 *)((longlong)puVar17 + 0xc) = 0;
    *puVar17 = 0;
  }
  local_228 = 0x153;
  uVar12 = (**(code **)(*DAT_141dddce0 + 8))(DAT_141dddce0,DAT_141a57200);
  iVar8 = FUN_140e851f0(uVar12,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar8 != 0) {
    plVar10 = (longlong *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a56dd0);
    uVar15 = *(undefined4 *)((longlong)plVar10 + 0xc);
    uVar19 = (undefined4)plVar10[1];
    uStack_260 = (undefined8 *)plVar10[1];
    if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) == 0) {
      local_268 = (undefined8 *)*plVar10;
    }
    else {
      FUN_1400419b0(&local_268,plVar10);
      uVar15 = uStack_260._4_4_;
      uVar19 = (undefined4)uStack_260;
    }
    puVar17 = local_268;
    FUN_140046040(plVar10);
    if ((int)uVar18 < 1) {
      puVar13 = &DAT_1419df7b0;
    }
    else {
      puVar13 = (undefined8 *)*puVar13;
    }
    uVar16 = 1 << ((byte)uVar15 & 0x1f) & 0x46;
    uStack_240 = uVar19;
    uStack_23c = uVar15;
    if (uVar16 == 0) {
      local_248 = puVar17;
    }
    else {
      FUN_1400419b0(&local_248,&local_268);
    }
    FUN_140046880(&local_248,puVar13);
    uStack_26c = 0;
    local_278 = (undefined8 *)0x0;
    iVar8 = FUN_140e851f0(&local_248,&local_278,DAT_141955260,0);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar16 != 0) {
      FUN_140041a50(&local_268);
    }
    if (iVar8 != 0) goto LAB_140272f08;
  }
  uVar15 = (undefined4)((ulonglong)pcVar20 >> 0x20);
  local_228 = 0x154;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  puVar17 = (undefined8 *)(**(code **)(*DAT_141dddce0 + 0x10))(DAT_141dddce0,DAT_141a57200);
  local_258 = _DAT_141dce448;
  uStack_250 = uRam0000000141dce450;
  if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_258);
  local_168 = local_1f8;
  local_258 = _DAT_1419df7c0;
  uStack_250 = uRam00000001419df7c8;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_258);
  local_160 = local_1e8;
  FUN_140e609c0(DAT_141dddce0);
  in_stack_fffffffffffffc20 = (longlong **)&local_168;
  pcVar20 = (code *)CONCAT44(uVar15,DAT_141a570c0);
  puVar13 = (undefined8 *)
            FUN_140e634e0(param_1,param_2,&local_288,2,pcVar20,in_stack_fffffffffffffc20);
  if (puVar13 != puVar17) {
    local_258 = *puVar13;
    uStack_250 = puVar13[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar17);
    }
    FUN_140041b80(puVar17,&local_258);
  }
  FUN_140e60910(1);
LAB_140272f08:
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  local_228 = 0x157;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  uStack_26c = 6;
  local_278 = DAT_141dc7a60;
  FUN_140e87440(&local_278,DAT_141a56da0,0x80000000,&local_c0,
                (ulonglong)pcVar20 & 0xffffffffffffff00,
                (ulonglong)in_stack_fffffffffffffc20 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_258 = _DAT_141dce168;
  uStack_250 = uRam0000000141dce170;
  if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_258);
  local_168 = local_1f8;
  local_258 = _DAT_1419e3910;
  uStack_250 = uRam00000001419e3918;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_258);
  local_160 = local_1e8;
  local_258 = _DAT_1419e38f0;
  uStack_250 = uRam00000001419e38f8;
  if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_258);
  local_158 = local_1d8;
  pplVar21 = (longlong **)&local_168;
  puVar17 = &local_c0;
  uVar12 = FUN_140e63610(DAT_141dc7a60,param_2,&local_288,3,puVar17,pplVar21);
  cVar7 = FUN_140e491e0(uVar12);
  if (cVar7 != '\0') {
    local_228 = 0x158;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uStack_26c = 6;
    local_278 = DAT_141dc7a60;
    FUN_140e87440(&local_278,DAT_141a56ed0,0x80000000,&local_120,
                  (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)pplVar21 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_258 = _DAT_141dce4b8;
    uStack_250 = uRam0000000141dce4c0;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_258);
    local_150 = &local_1c8;
    pplVar21 = &local_150;
    puVar17 = &local_120;
    FUN_140e63610(DAT_141dc7a60,param_2,&local_198,1,puVar17,pplVar21);
    local_228 = 0x159;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uStack_26c = 6;
    local_278 = DAT_141dc7a60;
    FUN_140e87440(&local_278,DAT_141a56ed0,0x80000000,&local_120,
                  (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)pplVar21 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_258 = _DAT_141dce2d8;
    uStack_250 = uRam0000000141dce2e0;
    if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_258);
    local_168 = local_1f8;
    pplVar21 = (longlong **)&local_168;
    puVar17 = &local_120;
    FUN_140e63610(DAT_141dc7a60,param_2,&local_288,1,puVar17,pplVar21);
    local_228 = 0x15a;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uStack_26c = 6;
    local_278 = DAT_141dc7a60;
    FUN_140e87440(&local_278,DAT_141a56e10,0x80000000,&local_d0,
                  (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)pplVar21 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    ppuVar22 = (undefined1 **)0x0;
    puVar17 = &local_d0;
    FUN_140e63610(DAT_141dc7a60,param_2,&local_288,0,puVar17,0);
    local_228 = 0x15b;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_214 = 0;
    local_220 = 0;
    bVar2 = true;
    while( true ) {
      if (!bVar2) {
        local_228 = 0x15b;
        FUN_140162d40(&local_220,2);
      }
      bVar2 = false;
      uVar12 = (**(code **)(*DAT_141dddce0 + 8))(DAT_141dddce0,DAT_141a571f0);
      iVar8 = FUN_140e851f0(&local_220,uVar12,DAT_141955260,1);
      if ((iVar8 == -2) || (-1 < iVar8)) break;
      local_228 = 0x15c;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_a4 = 6;
      local_b0 = DAT_141dc7a60;
      FUN_140e87440(&local_b0,DAT_141a56d30,0x80000000,&local_e0,
                    (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)ppuVar22 & 0xffffffffffffff00
                   );
      if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b0);
      }
      uVar23 = 0;
      puVar17 = &local_e0;
      FUN_140e63610(DAT_141dc7a60,param_2,&local_288,0,puVar17,0);
      local_228 = 0x15d;
      plVar10 = (longlong *)(**(code **)(*DAT_141dddce0 + 8))(DAT_141dddce0,DAT_141a56e00);
      iVar8 = FUN_140e4a740(&local_220);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar8 < 0) || (*(int *)(lVar1 + 0x24) <= iVar8)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar8,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar8 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar10 != &local_188) {
        local_268 = (undefined8 *)*plVar10;
        uStack_260 = (undefined8 *)plVar10[1];
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_268);
      }
      local_228 = 0x15e;
      iVar8 = FUN_140e851f0(&local_188,&DAT_1419df7b0,DAT_141955260,0);
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      local_204 = 0xd;
      if (iVar8 == 0) {
        local_210 = 0x3ff0000000000000;
      }
      else {
        local_210 = 0;
      }
      local_228 = 0x15f;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_94 = 6;
      local_a0 = DAT_141dc7a60;
      FUN_140e87440(&local_a0,DAT_141a57060,0x80000000,&local_130,
                    (ulonglong)puVar17 & 0xffffffffffffff00,uVar23 & 0xffffffffffffff00);
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      local_268 = _DAT_141dc6390;
      uStack_260 = puRam0000000141dc6398;
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_268);
      local_168 = local_1f8;
      pplVar21 = (longlong **)&local_168;
      puVar17 = &local_130;
      FUN_140e63610(DAT_141dc7a60,param_2,&local_288,1,puVar17,pplVar21);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_84 = 6;
      local_90 = DAT_141dc7a60;
      FUN_140e87440(&local_90,DAT_141a57100,0x80000000,&local_140,
                    (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)pplVar21 & 0xffffffffffffff00
                   );
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      cVar7 = FUN_140e491e0(&local_210);
      if (cVar7 == '\0') {
        local_268 = &local_220;
        ppuVar14 = (undefined8 **)FUN_140273f10(&local_268,&local_258);
        bVar3 = true;
        if (ppuVar14 != local_1f8) goto LAB_140273780;
      }
      else {
        uStack_23c = DAT_141dce3b4;
        uStack_240 = DAT_141dce3b0;
        if ((1 << ((byte)DAT_141dce3b4 & 0x1f) & 0x46U) == 0) {
          local_248 = DAT_141dce3a8;
        }
        else {
          FUN_1400419b0(&local_248,&DAT_141dce3a8);
        }
        ppuVar14 = &local_248;
        bVar4 = true;
LAB_140273780:
        local_268 = *ppuVar14;
        uStack_260 = ppuVar14[1];
        if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_268);
      }
      if ((bVar3) &&
         (bVar3 = false, (1 << ((byte)((ulonglong)uStack_250 >> 0x20) & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_258);
      }
      if ((bVar4) && (bVar4 = false, (1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_248);
      }
      local_168 = local_1f8;
      pplVar21 = (longlong **)&local_168;
      puVar17 = &local_140;
      FUN_140e63610(DAT_141dc7a60,param_2,&local_288,1,puVar17,pplVar21);
      local_228 = 0x160;
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_74 = 6;
      local_80 = DAT_141dc7a60;
      FUN_140e87440(&local_80,DAT_141a57060,0x80000000,&local_130,
                    (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)pplVar21 & 0xffffffffffffff00
                   );
      if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_80);
      }
      local_268 = _DAT_1419e3900;
      uStack_260 = (undefined8 *)uRam00000001419e3908;
      if ((1 << ((byte)local_1f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_268);
      local_168 = local_1f8;
      pplVar21 = (longlong **)&local_168;
      puVar17 = &local_130;
      FUN_140e63610(DAT_141dc7a60,param_2,&local_288,1,puVar17,pplVar21);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      local_16c = 6;
      local_178 = DAT_141dc7a60;
      uVar23 = (ulonglong)puVar17 & 0xffffffffffffff00;
      FUN_140e87440(&local_178,DAT_141a57100,0x80000000,&local_140,uVar23,
                    (ulonglong)pplVar21 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar23 >> 0x20);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      cVar7 = FUN_140e491e0(&local_210);
      if (cVar7 == '\0') {
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        puVar17 = (undefined8 *)(**(code **)(*DAT_141dddce0 + 8))(DAT_141dddce0,DAT_141a57200);
        if (puVar17 != local_1d8) {
          local_268 = (undefined8 *)*puVar17;
          uStack_260 = (undefined8 *)puVar17[1];
          if ((1 << ((byte)local_1d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_268);
        }
        local_158 = local_1d8;
        local_150 = &local_188;
        puVar17 = (undefined8 *)
                  FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar15,DAT_141a01138),
                                &local_158);
        local_104 = *(undefined4 *)((longlong)puVar17 + 0xc);
        local_108 = *(undefined4 *)(puVar17 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar17 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_110 = (undefined8 *)*puVar17;
        }
        else {
          FUN_1400419b0(&local_110,puVar17);
        }
        ppuVar14 = &local_110;
        bVar5 = true;
      }
      else {
        uStack_26c = DAT_141dce3b4;
        uStack_270 = DAT_141dce3b0;
        if ((1 << ((byte)DAT_141dce3b4 & 0x1f) & 0x46U) == 0) {
          local_278 = DAT_141dce3a8;
        }
        else {
          FUN_1400419b0(&local_278,&DAT_141dce3a8);
        }
        ppuVar14 = &local_278;
        bVar6 = true;
      }
      local_268 = *ppuVar14;
      uStack_260 = ppuVar14[1];
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_268);
      if ((bVar5) && (bVar5 = false, (1 << ((byte)local_104 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_110);
      }
      if ((bVar6) && (bVar6 = false, (1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_278);
      }
      local_148 = local_1b8;
      ppuVar22 = &local_148;
      puVar17 = &local_140;
      FUN_140e63610(DAT_141dc7a60,param_2,&local_288,1,puVar17,ppuVar22);
    }
    local_228 = 0x162;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_16c = 6;
    local_178 = DAT_141dc7a60;
    FUN_140e87440(&local_178,DAT_141a56ff0,0x80000000,&local_f0,
                  (ulonglong)puVar17 & 0xffffffffffffff00,(ulonglong)ppuVar22 & 0xffffffffffffff00);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140e63610(DAT_141dc7a60,param_2,&local_288,0,&local_f0,0);
    uVar18 = local_100[0];
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,5,FUN_140041b30);
  if (0 < (int)uVar18) {
    uVar23 = (ulonglong)uVar18;
    puVar17 = local_f8;
    do {
      puVar13 = (undefined8 *)*puVar17;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar13);
      }
      *puVar13 = 0;
      *(undefined4 *)(puVar13 + 1) = 0;
      *(undefined4 *)((longlong)puVar13 + 0xc) = 5;
      puVar17 = puVar17 + 1;
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
  }
  FUN_140e4cd60(local_f8);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}


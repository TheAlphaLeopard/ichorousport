// gml_Script_InputTriggerEffectGetStrength @ 0x140369750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputTriggerEffectGetStrength
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  byte local_res20;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong **pplVar15;
  undefined4 uVar16;
  ulonglong in_stack_fffffffffffffe00;
  longlong **pplVar17;
  ulonglong uVar18;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  longlong local_1c0;
  undefined4 local_1b4;
  longlong local_1a8;
  byte local_19c;
  longlong local_198;
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  longlong *local_158;
  longlong *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  longlong local_130;
  undefined4 local_124;
  longlong local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  
  local_1d0 = "gml_Script_InputTriggerEffectGetState";
  local_1d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1d8;
  local_1c8 = 8;
  FUN_140041df0(local_78,param_4,2,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_1a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_res20 = 0;
  local_f4 = 0;
  local_100 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde73c) &&
     (_Init_thread_header(&DAT_141dde73c), DAT_141dde73c == -1)) {
    DAT_141dde740 = (longlong *)FUN_140e63aa0(DAT_1419f3818);
    _Init_thread_footer(&DAT_141dde73c);
  }
  local_1c8 = 8;
  plVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_70[1];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1c8 = 8;
    if ((int)local_78[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_70[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if (DAT_141ddc13a == '\0') {
    FUN_140e64380(DAT_141dde740,"gml_Script_InputTriggerEffectGetState");
    FUN_140e64380(param_1,"gml_Script_InputTriggerEffectGetState");
  }
  local_1c8 = 10;
  if (DAT_141ddc13a == '\0') {
    DAT_141ddc13a = '\x01';
    plVar6 = (longlong *)(**(code **)(*DAT_141dde740 + 0x10))(DAT_141dde740,DAT_141a026b8);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar13 = 0;
    uVar7 = gml_Script___InputVerbGroupsConfig(param_1,param_2,&local_1e8,0,0);
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_1419fed38,0x80000000,&local_e8,uVar13,
                  in_stack_fffffffffffffe00 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar13 >> 0x20);
    FUN_140e609c0(DAT_141dde740);
    if (&local_e8 != plVar6) {
      local_1f8 = local_e8;
      uStack_1f0 = uStack_e0;
      uStack_1ec = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_1c8 = 6;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_78[0] < 2) {
    plVar6 = &DAT_1419df7b0;
LAB_140369aea:
    local_1f8 = *plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    plVar6 = (longlong *)local_70[1];
    if (plVar6 != &local_1a8) goto LAB_140369aea;
  }
  local_158 = &local_1a8;
  pplVar17 = &local_158;
  uVar14 = CONCAT44(uVar5,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar14,pplVar17);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_100 = 0;
    local_f8 = 0;
    local_f4 = 5;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    if ((int)local_78[0] < 2) {
      plVar6 = &DAT_1419df7b0;
LAB_140369baa:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_70[1];
      if (plVar6 != &local_198) goto LAB_140369baa;
    }
    local_150 = &local_198;
    local_1f8 = CONCAT44(uRam0000000141dd177c,_DAT_141dd1778);
    uStack_1f0 = uRam0000000141dd1780;
    uStack_1ec = DAT_141dd1784;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_148 = local_188;
    pplVar17 = &local_150;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_110,1,CONCAT44(uVar5,DAT_1419fdc58),pplVar17);
    if (puVar8 != &local_178) {
      local_1f8 = *puVar8;
      uStack_1f0 = *(undefined4 *)(puVar8 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    local_140 = &local_178;
    local_1f8 = CONCAT44(uRam0000000141dd17ac,_DAT_141dd17a8);
    uStack_1f0 = uRam0000000141dd17b0;
    uStack_1ec = DAT_141dd17b4;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_138 = local_168;
    FUN_14008e020(param_1,param_2,&local_100,3,&local_148);
    local_res20 = (byte)local_f4;
  }
  local_1c8 = 0x10;
  if ((int)local_78[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_70[1];
  }
  uStack_1ec = 0;
  local_1f8 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (uVar4 < 0x80000000) {
    local_1c8 = 0x14;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = CONCAT44(uRam0000000141dd179c,_DAT_141dd1798);
    uStack_1f0 = uRam0000000141dd17a0;
    uStack_1ec = DAT_141dd17a4;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_158 = &local_1a8;
    if ((int)local_78[0] < 2) {
      plVar6 = &DAT_1419df7b0;
LAB_140369de8:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_70[1];
      if (plVar6 != &local_198) goto LAB_140369de8;
    }
    local_150 = &local_198;
    local_1f8 = CONCAT44(uRam0000000141dd175c,_DAT_141dd1758);
    uStack_1f0 = uRam0000000141dd1760;
    uStack_1ec = DAT_141dd1764;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_148 = local_188;
    local_1f8 = CONCAT44(uRam00000001419e4484,_DAT_1419e4480);
    uStack_1f0 = uRam00000001419e4488;
    uStack_1ec = uRam00000001419e448c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
    local_140 = &local_178;
    local_1f8 = CONCAT44(uRam0000000141dd178c,_DAT_141dd1788);
    uStack_1f0 = uRam0000000141dd1790;
    uStack_1ec = DAT_141dd1794;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
    local_138 = local_168;
    FUN_14008e020(param_1,param_2,&local_1e8,5,&local_158);
  }
  local_1c8 = 0x19;
  if ((int)local_78[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_70[1];
  }
  uStack_1ec = 0;
  local_1f8 = 0;
  iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_1c8 = 0x1b;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = CONCAT44(uRam0000000141dd179c,_DAT_141dd1798);
    uStack_1f0 = uRam0000000141dd17a0;
    uStack_1ec = DAT_141dd17a4;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_158 = &local_1a8;
    if ((int)local_78[0] < 2) {
      plVar6 = &DAT_1419df7b0;
LAB_140369fee:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_70[1];
      if (plVar6 != &local_198) goto LAB_140369fee;
    }
    local_150 = &local_198;
    local_1f8 = CONCAT44(uRam0000000141dd17cc,_DAT_141dd17c8);
    uStack_1f0 = uRam0000000141dd17d0;
    uStack_1ec = DAT_141dd17d4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
    local_148 = local_188;
    FUN_14008e020(param_1,param_2,&local_1e8,3,&local_158);
  }
  local_1c8 = 0xe;
  if ((int)local_78[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_70;
  }
  uStack_1ec = 0;
  local_1f8 = 0x40e000e000000000;
  iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 != 0) {
    if ((int)local_78[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_70;
    }
    uStack_1ec = 0;
    local_1f8 = 0x40e0010000000000;
    iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar3 != 0) {
      local_1c8 = 0x10;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_1f8 = CONCAT44(uRam0000000141dd176c,_DAT_141dd1768);
      uStack_1f0 = uRam0000000141dd1770;
      uStack_1ec = DAT_141dd1774;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
      local_158 = &local_1a8;
      if ((int)local_78[0] < 1) {
        plVar6 = &DAT_1419df7b0;
LAB_14036a1d7:
        local_1f8 = *plVar6;
        uStack_1f0 = (undefined4)plVar6[1];
        uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
      }
      else {
        plVar6 = (longlong *)*local_70;
        if (plVar6 != &local_198) goto LAB_14036a1d7;
      }
      local_150 = &local_198;
      local_1f8 = CONCAT44(uRam0000000141dd17bc,_DAT_141dd17b8);
      uStack_1f0 = uRam0000000141dd17c0;
      uStack_1ec = DAT_141dd17c4;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1f8);
      local_148 = local_188;
      gml_Script_InputPlugInExists(param_1,param_2,&local_1e8,3,&local_158);
    }
  }
  local_1c8 = 0x13;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_78[0] < 2) {
    plVar6 = &DAT_1419df7b0;
LAB_14036a2bc:
    local_1f8 = *plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    plVar6 = (longlong *)local_70[1];
    if (plVar6 != &local_1a8) goto LAB_14036a2bc;
  }
  local_158 = &local_1a8;
  plVar6 = (longlong *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_1e8,1,&local_158)
  ;
  if (plVar6 != &local_120) {
    local_1f8 = *plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    FUN_140041b80(&local_120,&local_1f8);
  }
  local_1c8 = 0x14;
  uStack_1ec = 0;
  local_1f8 = 0;
  iVar3 = FUN_140e851f0(&local_120,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 != -2 && iVar3 < 0) {
LAB_14036aa71:
    local_1c8 = 0x14;
    if (param_3 == &DAT_1419df7b0) goto LAB_14036aab2;
    uVar5 = (undefined4)DAT_1419df7b0;
    uVar12 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    goto LAB_14036aa85;
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_158 = &local_120;
  pplVar15 = &local_158;
  uVar7 = gml_Script_InputDeviceIsGamepad(param_1,param_2,&local_1e8,1,pplVar15);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') goto LAB_14036aa71;
  local_1c8 = 0x16;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde740 + 8))(DAT_141dde740,DAT_141a026b8);
  if ((int)local_78[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_70[1];
  }
  iVar3 = FUN_140e4a740(puVar8);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar9 = *plVar6, lVar9 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar9 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar9 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar9 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_130) {
    local_1f8 = *plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_1f8);
  }
  local_1c8 = 0x17;
  uVar18 = (ulonglong)pplVar17 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pplVar15 & 0xffffffffffffff00;
  FUN_140e87440(&local_130,DAT_141a03d88,0x80000000,&local_88,uVar13,uVar18);
  cVar2 = FUN_140e491e0(&local_88);
  if (cVar2 != '\0') {
    local_1c8 = 0x17;
LAB_14036a6de:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 10;
    *param_3 = 0xffffffffffffffff;
    goto LAB_14036aab2;
  }
  local_1c8 = 0x1b;
  local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  FUN_140041b80(&local_1c0,&local_1f8);
  local_1c8 = 0x1c;
  if ((int)local_78[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_70;
  }
  uStack_1ec = 0;
  local_1f8 = 0x40e000e000000000;
  iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar3 == 0) {
    local_1c8 = 0x1e;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_130,DAT_141a03de8,0x80000000,&local_98,uVar13,uVar18);
    cVar2 = FUN_140e491e0(&local_98);
    if (cVar2 != '\0') {
      local_1c8 = 0x1e;
      goto LAB_14036a6de;
    }
    local_1c8 = 0x1f;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_130,DAT_141a03e08,0x80000000,&local_a8,uVar13,uVar18 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar13 >> 0x20);
    uVar5 = (undefined4)local_a8;
    uVar12 = local_a8._4_4_;
    uStack_1ec = uStack_9c;
  }
  else {
    local_1c8 = 0x21;
    if ((int)local_78[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_70;
    }
    uStack_1ec = 0;
    local_1f8 = 0x40e0010000000000;
    iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar3 != 0) {
      local_1c8 = 0x28;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_1f8 = CONCAT44(uRam0000000141dd176c,_DAT_141dd1768);
      uStack_1f0 = uRam0000000141dd1770;
      uStack_1ec = DAT_141dd1774;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
      local_158 = &local_1a8;
      if (((int)local_78[0] < 1) || (plVar10 = (longlong *)*local_70, plVar10 != &local_198)) {
        local_1f8 = *plVar10;
        uStack_1f0 = (undefined4)plVar10[1];
        uStack_1ec = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
      }
      local_150 = &local_198;
      local_1f8 = CONCAT44(uRam0000000141dd17bc,_DAT_141dd17b8);
      uStack_1f0 = uRam0000000141dd17c0;
      uStack_1ec = DAT_141dd17c4;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1f8);
      local_148 = local_188;
      gml_Script_InputPlugInExists(param_1,param_2,&local_1e8,3,&local_158);
      local_1c8 = 0x29;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = 0;
      goto LAB_14036aab2;
    }
    local_1c8 = 0x23;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_130,DAT_141a03d98,0x80000000,&local_b8,uVar13,uVar18);
    cVar2 = FUN_140e491e0(&local_b8);
    if (cVar2 != '\0') {
      local_1c8 = 0x23;
      goto LAB_14036a6de;
    }
    local_1c8 = 0x24;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_130,DAT_141a03d78,0x80000000,&local_c8,uVar13,uVar18 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar13 >> 0x20);
    uVar5 = (undefined4)local_c8;
    uVar12 = local_c8._4_4_;
    uStack_a0 = uStack_c0;
    uStack_1ec = uStack_bc;
  }
  local_1f8 = CONCAT44(uVar12,uVar5);
  uStack_1f0 = uStack_a0;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  FUN_140041b80(&local_1c0,&local_1f8);
  local_1c8 = 0x2c;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_158 = &local_1c0;
  pplVar17 = &local_158;
  uVar13 = CONCAT44(uVar16,DAT_1419fcb88);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar13,pplVar17);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_1c8 = 0x2c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 10;
    *param_3 = 0;
    goto LAB_14036aab2;
  }
  local_1c8 = 0x2d;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  FUN_140e87440(&local_1c0,DAT_141a03548,0x80000000,&local_d8,uVar13 & 0xffffffffffffff00,
                (ulonglong)pplVar17 & 0xffffffffffffff00);
  local_158 = &local_120;
  if (((int)local_78[0] < 1) || (plVar10 = (longlong *)*local_70, plVar10 != &local_198)) {
    local_1f8 = *plVar10;
    uStack_1f0 = (undefined4)plVar10[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar10 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  local_150 = &local_198;
  switch(local_1b4) {
  default:
switchD_14036a8d3_caseD_1:
    lVar9 = 0;
    break;
  case 6:
    lVar9 = local_1c0;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_1c0 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14036a8d3_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_1c0);
    lVar9 = FUN_140e87250(uVar5);
  }
  puVar8 = (undefined8 *)FUN_140e63610(lVar9,param_2,&local_1e8,2,&local_d8,&local_158);
  if (puVar8 != param_3) {
    uVar5 = *(undefined4 *)puVar8;
    uVar12 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_1f0 = *(undefined4 *)(puVar8 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
LAB_14036aa85:
    local_1f8 = CONCAT44(uVar12,uVar5);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1f8);
  }
LAB_14036aab2:
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_1a8,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar8 = local_70;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_1d8;
  return param_3;
}


// gml_Script_InputBindingsExport @ 0x1402fb290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputBindingsExport
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar15;
  undefined8 uVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  longlong **pplVar16;
  ulonglong uVar17;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  byte local_1bc;
  longlong local_1b8;
  byte local_1ac;
  longlong local_1a8;
  byte local_19c;
  longlong local_198;
  byte local_18c;
  longlong local_188;
  byte local_17c;
  longlong local_178;
  byte local_16c;
  longlong local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  longlong local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  longlong local_110;
  uint local_104;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_120 = "gml_Script_InputBindingSetSafe";
  local_128 = DAT_141dc7a50;
  local_118 = 0x12;
  DAT_141dc7a50 = &local_128;
  FUN_140041df0(local_58,param_4,5,param_5);
  uVar15 = 1;
  _eh_vector_constructor_iterator_(&local_1c8,0x10,10,FUN_1400424d0,FUN_140041b30);
  local_104 = 0xffffff;
  local_110 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_1dc = 0;
  uVar11 = 0;
  local_1e8 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x12;
  plVar10 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 4) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[3];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_118 = 0x12;
    if ((int)local_58[0] < 4) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_58[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[4];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_58[0] < 5) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  local_118 = 4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_58[0] < 5) {
    plVar6 = &DAT_1419df7b0;
LAB_1402fb4d6:
    local_1f8 = *plVar6;
    uStack_1f0 = (undefined4)plVar6[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
  }
  else {
    plVar6 = (longlong *)local_50[4];
    if (plVar6 != &local_1c8) goto LAB_1402fb4d6;
  }
  local_f8 = &local_1c8;
  pplVar16 = &local_f8;
  uVar12 = CONCAT44(uVar15,DAT_141a014a8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_1e8,1,uVar12,pplVar16);
  uVar15 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_118 = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    if ((int)local_58[0] < 5) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fb5ce:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[4];
      if (plVar6 != &local_1b8) goto LAB_1402fb5ce;
    }
    local_f0 = &local_1b8;
    local_1f8 = CONCAT44(uRam0000000141dcf5bc,_DAT_141dcf5b8);
    uStack_1f0 = uRam0000000141dcf5c0;
    uStack_1ec = DAT_141dcf5c4;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_e8 = &local_1a8;
    pplVar16 = &local_f0;
    plVar6 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar15,DAT_1419fdc58),pplVar16);
    if (plVar6 != &local_198) {
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    local_e0 = &local_198;
    local_1f8 = CONCAT44(uRam0000000141dcf59c,_DAT_141dcf598);
    uStack_1f0 = uRam0000000141dcf5a0;
    uStack_1ec = DAT_141dcf5a4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_d8 = &local_188;
    FUN_14008e020(param_1,param_2,&local_1d8,3,&local_e8);
  }
  local_118 = 8;
  if ((int)local_58[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[4];
  }
  uStack_1ec = 0;
  local_1f8 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (uVar4 < 0x80000000) {
    local_118 = 9;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = CONCAT44(uRam0000000141dcf62c,_DAT_141dcf628);
    uStack_1f0 = uRam0000000141dcf630;
    uStack_1ec = DAT_141dcf634;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
    local_f8 = &local_1c8;
    if ((int)local_58[0] < 5) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fb80a:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[4];
      if (plVar6 != &local_1b8) goto LAB_1402fb80a;
    }
    local_f0 = &local_1b8;
    local_1f8 = CONCAT44(uRam0000000141dcf5ac,_DAT_141dcf5a8);
    uStack_1f0 = uRam0000000141dcf5b0;
    uStack_1ec = DAT_141dcf5b4;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_e8 = &local_1a8;
    local_1f8 = CONCAT44(uRam00000001419e3d94,_DAT_1419e3d90);
    uStack_1f0 = uRam00000001419e3d98;
    uStack_1ec = uRam00000001419e3d9c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
    local_e0 = &local_198;
    local_1f8 = CONCAT44(uRam0000000141dcf5ec,_DAT_141dcf5e8);
    uStack_1f0 = uRam0000000141dcf5f0;
    uStack_1ec = DAT_141dcf5f4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
    local_d8 = &local_188;
    FUN_14008e020(param_1,param_2,&local_1e8,5,&local_f8);
  }
  local_118 = 0xf;
  if ((int)local_58[0] < 5) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[4];
  }
  uStack_1ec = 0;
  local_1f8 = 0;
  iVar3 = FUN_140e851f0(puVar8,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_118 = 0x12;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    local_1f8 = CONCAT44(uRam0000000141dcf62c,_DAT_141dcf628);
    uStack_1f0 = uRam0000000141dcf630;
    uStack_1ec = DAT_141dcf634;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
    local_f8 = &local_1c8;
    if ((int)local_58[0] < 5) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fba12:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[4];
      if (plVar6 != &local_1b8) goto LAB_1402fba12;
    }
    local_f0 = &local_1b8;
    local_1f8 = CONCAT44(uRam0000000141dcf61c,_DAT_141dcf618);
    uStack_1f0 = uRam0000000141dcf620;
    uStack_1ec = DAT_141dcf624;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
    local_e8 = &local_1a8;
    FUN_14008e020(param_1,param_2,&local_1e8,3,&local_f8);
  }
  plVar6 = (longlong *)0x0;
  local_118 = 0x16;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((int)local_58[0] < 1) {
    plVar7 = &DAT_1419df7b0;
LAB_1402fbaf7:
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
  }
  else {
    plVar7 = (longlong *)*local_50;
    if (plVar7 != &local_1c8) goto LAB_1402fbaf7;
  }
  local_f8 = &local_1c8;
  if ((int)local_58[0] < 3) {
    plVar7 = &DAT_1419df7b0;
LAB_1402fbb4b:
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1f8);
  }
  else {
    plVar7 = (longlong *)local_50[2];
    if (plVar7 != &local_1b8) goto LAB_1402fbb4b;
  }
  local_f0 = &local_1b8;
  if ((int)local_58[0] < 2) {
    plVar7 = &DAT_1419df7b0;
LAB_1402fbb9e:
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1f8);
  }
  else {
    plVar7 = (longlong *)local_50[1];
    if (plVar7 != &local_1a8) goto LAB_1402fbb9e;
  }
  local_e8 = &local_1a8;
  if ((int)local_58[0] < 5) {
    plVar7 = &DAT_1419df7b0;
LAB_1402fbbed:
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  else {
    plVar7 = (longlong *)local_50[4];
    if (plVar7 != &local_198) goto LAB_1402fbbed;
  }
  local_e0 = &local_198;
  if ((int)local_58[0] < 4) {
    plVar7 = &DAT_1419df7b0;
LAB_1402fbc3c:
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1f8);
  }
  else {
    plVar7 = (longlong *)local_50[3];
    if (plVar7 != &local_188) goto LAB_1402fbc3c;
  }
  local_d8 = &local_188;
  pplVar13 = &local_f8;
  plVar7 = (longlong *)gml_Script_InputBindingGet(param_1,param_2,&local_1e8,5,pplVar13);
  if (plVar7 != &local_110) {
    local_1f8 = *plVar7;
    uStack_1f0 = (undefined4)plVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_1f8);
  }
  if (((local_104 == 2) && (local_110 != 0)) && (*(int *)(local_110 + 0x24) != 0)) {
    if (1 < *(int *)(local_110 + 0x24)) {
      local_118 = 0x21;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_1f8 = CONCAT44(uRam0000000141dcf58c,_DAT_141dcf588);
      uStack_1f0 = uRam0000000141dcf590;
      uStack_1ec = DAT_141dcf594;
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1f8);
      local_f8 = &local_1c8;
      pplVar13 = &local_f8;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (param_1,param_2,&local_1e8,1,pplVar13);
    }
    local_118 = 0x24;
    if (((local_104 & 0xffffff) == 2) && (local_110 != 0)) {
      if (*(int *)(local_110 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      }
      else {
        plVar6 = *(longlong **)(local_110 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar6 = &local_110;
    }
    uVar17 = (ulonglong)pplVar16 & 0xffffffffffffff00;
    uVar14 = (ulonglong)pplVar13 & 0xffffffffffffff00;
    FUN_140e87440(plVar6,DAT_141a04028,0x80000000,&local_68,uVar14,uVar17);
    local_1f8 = local_68;
    uStack_1f0 = uStack_60;
    uStack_1ec = uStack_5c;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_1f8);
    local_118 = 0x25;
    plVar6 = (longlong *)0x0;
    if (((local_104 & 0xffffff) == 2) && (local_110 != 0)) {
      if (*(int *)(local_110 + 0x24) < 1) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      }
      else {
        plVar6 = *(longlong **)(local_110 + 8);
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar6 = &local_110;
    }
    FUN_140e87440(plVar6,DAT_1419ef7f8,0x80000000,&local_78,uVar14 & 0xffffffffffffff00,
                  uVar17 & 0xffffffffffffff00);
    local_1f8 = local_78;
    uStack_1f0 = uStack_70;
    uStack_1ec = uStack_6c;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_1f8);
    local_118 = 0x27;
    if ((int)local_58[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[1];
    }
    iVar3 = FUN_140e851f0(puVar8,&local_88,DAT_141955260,0);
    if (iVar3 == 0) {
      if ((int)local_58[0] < 4) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)local_50[3];
      }
      iVar3 = FUN_140e851f0(puVar8,&local_98,DAT_141955260,0);
      if (iVar3 == 0) {
        local_118 = 0x2f;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((int)local_58[0] < 2) {
          plVar6 = &DAT_1419df7b0;
LAB_1402fbfd7:
          local_1f8 = *plVar6;
          uStack_1f0 = (undefined4)plVar6[1];
          uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_1f8);
        }
        else {
          plVar6 = (longlong *)local_50[1];
          if (plVar6 != &local_1c8) goto LAB_1402fbfd7;
        }
        local_f8 = &local_1c8;
        local_1f8 = CONCAT44(uRam0000000141dcf5dc,_DAT_141dcf5d8);
        uStack_1f0 = uRam0000000141dcf5e0;
        uStack_1ec = DAT_141dcf5e4;
        if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_1f8);
        local_f0 = &local_1b8;
        if ((int)local_58[0] < 3) {
          plVar6 = &DAT_1419df7b0;
LAB_1402fc06a:
          local_1f8 = *plVar6;
          uStack_1f0 = (undefined4)plVar6[1];
          uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1f8);
        }
        else {
          plVar6 = (longlong *)local_50[2];
          if (plVar6 != &local_1a8) goto LAB_1402fc06a;
        }
        local_e8 = &local_1a8;
        local_1f8 = CONCAT44(uRam0000000141dcf5cc,_DAT_141dcf5c8);
        uStack_1f0 = uRam0000000141dcf5d0;
        uStack_1ec = DAT_141dcf5d4;
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1f8);
        local_e0 = &local_198;
        if ((int)local_58[0] < 1) {
          plVar6 = &DAT_1419df7b0;
LAB_1402fc0f3:
          local_1f8 = *plVar6;
          uStack_1f0 = (undefined4)plVar6[1];
          uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1f8);
        }
        else {
          plVar6 = (longlong *)*local_50;
          if (plVar6 != &local_188) goto LAB_1402fc0f3;
        }
        local_d8 = &local_188;
        local_1f8 = CONCAT44(uRam0000000141dcf60c,_DAT_141dcf608);
        uStack_1f0 = uRam0000000141dcf610;
        uStack_1ec = DAT_141dcf614;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1f8);
        local_d0 = &local_178;
        puVar8 = (undefined8 *)
                 gml_Script_InputVerbGetMetadata(param_1,param_2,&local_1d8,1,&local_f8);
        if (puVar8 != &local_168) {
          local_1f8 = *puVar8;
          uStack_1f0 = *(undefined4 *)(puVar8 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1f8);
        }
        local_c8 = &local_168;
        local_1f8 = CONCAT44(uRam0000000141dcf5fc,_DAT_141dcf5f8);
        uStack_1f0 = uRam0000000141dcf600;
        uStack_1ec = DAT_141dcf604;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_158);
        }
        FUN_140041b80(local_158,&local_1f8);
        local_c0 = local_158;
        if (((int)local_58[0] < 4) || (plVar10 = (longlong *)local_50[3], plVar10 != &local_148)) {
          local_1f8 = *plVar10;
          uStack_1f0 = (undefined4)plVar10[1];
          uStack_1ec = *(undefined4 *)((longlong)plVar10 + 0xc);
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_1f8);
        }
        local_b8 = &local_148;
        local_1f8 = CONCAT44(uRam0000000141dcf5ec,_DAT_141dcf5e8);
        uStack_1f0 = uRam0000000141dcf5f0;
        uStack_1ec = DAT_141dcf5f4;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1f8);
        local_b0 = local_138;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (param_1,param_2,&local_1e8,9,&local_f0);
        local_118 = 0x33;
        goto LAB_1402fc88c;
      }
    }
    local_118 = 0x29;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_f8 = &local_88;
    local_1f8 = CONCAT44(uRam0000000141dcf63c,_DAT_141dcf638);
    uStack_1f0 = uRam0000000141dcf640;
    uStack_1ec = DAT_141dcf644;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1f8);
    local_f0 = &local_1b8;
    if ((int)local_58[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc377:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)*local_50;
      if (plVar6 != &local_1a8) goto LAB_1402fc377;
    }
    local_e8 = &local_1a8;
    local_1f8 = CONCAT44(uRam0000000141dcf60c,_DAT_141dcf608);
    uStack_1f0 = uRam0000000141dcf610;
    uStack_1ec = DAT_141dcf614;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
    local_e0 = &local_198;
    plVar6 = (longlong *)gml_Script_InputVerbGetMetadata(param_1,param_2,&local_1d8,1,&local_f8);
    if (plVar6 != &local_188) {
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
    }
    local_d8 = &local_188;
    local_1f8 = CONCAT44(uRam0000000141dcf5fc,_DAT_141dcf5f8);
    uStack_1f0 = uRam0000000141dcf600;
    uStack_1ec = DAT_141dcf604;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
    local_d0 = &local_178;
    local_c8 = &local_98;
    local_1f8 = CONCAT44(uRam0000000141dcf5ec,_DAT_141dcf5e8);
    uStack_1f0 = uRam0000000141dcf5f0;
    uStack_1ec = DAT_141dcf5f4;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_1f8);
    local_c0 = local_158;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_1e8,7,&local_f0);
    local_118 = 0x2a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((int)local_58[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc537:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)*local_50;
      if (plVar6 != &local_1c8) goto LAB_1402fc537;
    }
    local_f8 = &local_1c8;
    if ((int)local_58[0] < 2) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc58b:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[1];
      if (plVar6 != &local_1b8) goto LAB_1402fc58b;
    }
    local_f0 = &local_1b8;
    if ((int)local_58[0] < 4) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc5de:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[3];
      if (plVar6 != &local_1a8) goto LAB_1402fc5de;
    }
    local_e8 = &local_1a8;
    local_e0 = &local_88;
    local_d8 = &local_98;
    if (((int)local_58[0] < 5) || (plVar10 = (longlong *)local_50[4], plVar10 != &local_178)) {
      local_1f8 = *plVar10;
      uStack_1f0 = (undefined4)plVar10[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    local_d0 = &local_178;
    gml_Script_InputBufferPressed(param_1,param_2,&local_1e8,6,&local_f8);
    local_118 = 0x2b;
  }
  else {
    local_118 = 0x1a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((int)local_58[0] < 1) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc6eb:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)*local_50;
      if (plVar6 != &local_1c8) goto LAB_1402fc6eb;
    }
    local_f8 = &local_1c8;
    if ((int)local_58[0] < 2) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc73f:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[1];
      if (plVar6 != &local_1b8) goto LAB_1402fc73f;
    }
    local_f0 = &local_1b8;
    if ((int)local_58[0] < 3) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc792:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[2];
      if (plVar6 != &local_1a8) goto LAB_1402fc792;
    }
    local_e8 = &local_1a8;
    if ((int)local_58[0] < 4) {
      plVar6 = &DAT_1419df7b0;
LAB_1402fc7e1:
      local_1f8 = *plVar6;
      uStack_1f0 = (undefined4)plVar6[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1f8);
    }
    else {
      plVar6 = (longlong *)local_50[3];
      if (plVar6 != &local_198) goto LAB_1402fc7e1;
    }
    local_e0 = &local_198;
    if (((int)local_58[0] < 5) || (plVar10 = (longlong *)local_50[4], plVar10 != &local_188)) {
      local_1f8 = *plVar10;
      uStack_1f0 = (undefined4)plVar10[1];
      uStack_1ec = *(undefined4 *)((longlong)plVar10 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
    }
    local_d8 = &local_188;
    gml_Script_InputBindingSetSafe(param_1,param_2,&local_1e8,5,&local_f8);
    local_118 = 0x1b;
  }
  uVar11 = 0x3ff00000;
LAB_1402fc88c:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar11 << 0x20;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(&local_1c8,0x10,10,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar8 = local_50;
    do {
      puVar1 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}


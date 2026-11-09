// gml_Script_InputBindingSetSafe @ 0x1402f9b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputBindingSetSafe
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 **ppuVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  undefined8 uVar14;
  undefined1 **ppuVar15;
  undefined8 ***pppuVar16;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 *local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  uint local_20c;
  undefined8 *local_208;
  uint uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 *local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 *local_168;
  undefined8 *puStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 **local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 *local_f0;
  uint uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0 [3];
  undefined4 local_c4;
  double local_c0;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 local_a4;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  uVar11 = 0;
  local_res20 = 0;
  local_1f0 = "gml_Script_InputBindingSet";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x11;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a0,param_4,5,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_1b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uVar13 = 0xffffff;
  uStack_e4 = 0xffffff;
  local_f0 = (undefined8 *)0x0;
  uStack_1fc = 0xffffff;
  local_208 = (undefined8 *)0x0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_114 = 0xffffff;
  local_120 = (undefined8 *)0x0;
  local_23c = 0;
  local_248 = 0;
  local_21c = 0;
  local_228 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf80) &&
     (_Init_thread_header(&DAT_141dddf80), DAT_141dddf80 == -1)) {
    DAT_141dddf78 = (longlong *)FUN_140e63aa0(DAT_1419ef878);
    _Init_thread_footer(&DAT_141dddf80);
  }
  local_1e8 = 0x11;
  puVar9 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[3];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1e8 = 0x11;
    if (3 < (int)local_a0[0]) {
      puVar9 = (undefined8 *)local_98[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  puVar9 = &DAT_1419df7b0;
  if ((int)local_a0[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_98[4];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if (4 < (int)local_a0[0]) {
      puVar9 = (undefined8 *)local_98[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc0b0 == '\0') {
    FUN_140e64380(DAT_141dddf78,"gml_Script_InputBindingSet");
    FUN_140e64380(local_res8,"gml_Script_InputBindingSet");
  }
  local_1e8 = 0x13;
  if (DAT_141ddc0b0 == '\0') {
    DAT_141ddc0b0 = '\x01';
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dddf78 + 0x10))(DAT_141dddf78,DAT_141a026b8);
    FUN_140e609c0(DAT_141dddf78);
    uVar5 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_248,0,0);
    if (puVar6 != puVar9) {
      local_238 = (undefined8 *)*puVar6;
      uStack_230 = (undefined8 *)puVar6[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_238);
    }
    FUN_140e60910(1);
  }
  local_1e8 = 4;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_a0[0] < 5) {
    ppuVar10 = &DAT_1419df7b0;
LAB_1402f9e81:
    local_238 = *ppuVar10;
    uStack_230 = ppuVar10[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
  }
  else {
    ppuVar10 = (undefined8 **)local_98[4];
    if (ppuVar10 != &local_1b8) goto LAB_1402f9e81;
  }
  local_148 = &local_1b8;
  uVar14 = CONCAT44(uVar5,DAT_141a014a8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar14,&local_148);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
    local_1e8 = 5;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c4 = 5;
    if ((int)local_a0[0] < 5) {
      puVar9 = &DAT_1419df7b0;
LAB_1402f9f72:
      local_238 = (undefined8 *)*puVar9;
      uStack_230 = (undefined8 *)puVar9[1];
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_238);
    }
    else {
      puVar9 = (undefined8 *)local_98[4];
      if (puVar9 != &local_1a8) goto LAB_1402f9f72;
    }
    local_140 = &local_1a8;
    local_238 = (undefined8 *)_DAT_141dcf548;
    uStack_230 = (undefined8 *)uRam0000000141dcf550;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_238);
    local_138 = local_198;
    puVar9 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_1d0,1,CONCAT44(uVar5,DAT_1419fdc58),
                           &local_140);
    if (puVar9 != &local_188) {
      local_238 = (undefined8 *)*puVar9;
      uStack_230 = (undefined8 *)puVar9[1];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_238);
    }
    local_130 = &local_188;
    local_238 = _DAT_141dcf528;
    uStack_230 = puRam0000000141dcf530;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_238);
    ppuVar15 = &local_138;
    local_128 = local_178;
    FUN_14008e020(local_res8,local_res10,&local_228,3,ppuVar15);
    uVar5 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
  }
  local_1e8 = 8;
  if ((int)local_a0[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_98[4];
  }
  uStack_1d4 = 0;
  local_1e0 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar9,&local_1e0,DAT_141955260,1);
  if ((1 << ((byte)uStack_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if (uVar4 < 0x80000000) {
    local_1e8 = 9;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_238 = (undefined8 *)_DAT_141dcf558;
    uStack_230 = (undefined8 *)uRam0000000141dcf560;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
    local_148 = &local_1b8;
    if ((int)local_a0[0] < 5) {
      puVar9 = &DAT_1419df7b0;
LAB_1402fa1b5:
      local_238 = (undefined8 *)*puVar9;
      uStack_230 = (undefined8 *)puVar9[1];
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_238);
    }
    else {
      puVar9 = (undefined8 *)local_98[4];
      if (puVar9 != &local_1a8) goto LAB_1402fa1b5;
    }
    local_140 = &local_1a8;
    local_238 = (undefined8 *)_DAT_141dcf538;
    uStack_230 = (undefined8 *)uRam0000000141dcf540;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_238);
    local_138 = local_198;
    local_238 = (undefined8 *)_DAT_1419e3d80;
    uStack_230 = (undefined8 *)uRam00000001419e3d88;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_238);
    local_130 = &local_188;
    local_238 = _DAT_141dcf578;
    uStack_230 = puRam0000000141dcf580;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_238);
    pppuVar16 = &local_148;
    local_128 = local_178;
    FUN_14008e020(local_res8,local_res10,&local_248,5,pppuVar16);
    uVar5 = (undefined4)((ulonglong)pppuVar16 >> 0x20);
  }
  local_1e8 = 0x11;
  if ((int)local_a0[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_98[4];
  }
  uStack_1d4 = 0;
  local_1e0 = 0;
  iVar3 = FUN_140e851f0(puVar9,&local_1e0,DAT_141955260,1);
  if ((1 << ((byte)uStack_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_1e8 = 0x13;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_238 = (undefined8 *)_DAT_141dcf558;
    uStack_230 = (undefined8 *)uRam0000000141dcf560;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
    local_148 = &local_1b8;
    if ((int)local_a0[0] < 5) {
      puVar9 = &DAT_1419df7b0;
LAB_1402fa3bb:
      local_238 = (undefined8 *)*puVar9;
      uStack_230 = (undefined8 *)puVar9[1];
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_238);
    }
    else {
      puVar9 = (undefined8 *)local_98[4];
      if (puVar9 != &local_1a8) goto LAB_1402fa3bb;
    }
    local_140 = &local_1a8;
    local_238 = _DAT_141dcf568;
    uStack_230 = puRam0000000141dcf570;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_238);
    local_138 = local_198;
    pppuVar16 = &local_148;
    FUN_14008e020(local_res8,local_res10,&local_248,3,pppuVar16);
    uVar5 = (undefined4)((ulonglong)pppuVar16 >> 0x20);
  }
  local_1e8 = 0x17;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_a0[0] < 3) {
    ppuVar10 = &DAT_1419df7b0;
LAB_1402fa4a6:
    local_238 = *ppuVar10;
    uStack_230 = ppuVar10[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_238);
  }
  else {
    ppuVar10 = (undefined8 **)local_98[2];
    if (ppuVar10 != &local_1b8) goto LAB_1402fa4a6;
  }
  local_148 = &local_1b8;
  uVar14 = CONCAT44(uVar5,DAT_1419fdbf8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_248,1,uVar14,&local_148);
  uVar5 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') goto LAB_1402fa61e;
  local_1e8 = 0x17;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_228 = 0;
  local_220 = 0;
  local_21c = 5;
  if ((int)local_a0[0] < 3) {
    puVar9 = &DAT_1419df7b0;
LAB_1402fa56f:
    local_238 = (undefined8 *)*puVar9;
    uStack_230 = (undefined8 *)puVar9[1];
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_238);
  }
  else {
    puVar9 = (undefined8 *)local_98[2];
    if (puVar9 != &local_1a8) goto LAB_1402fa56f;
  }
  local_140 = &local_1a8;
  if ((int)local_a0[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_98[2];
  }
  puVar6 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_228,1,CONCAT44(uVar5,DAT_1419fdc48),
                         &local_140);
  if (puVar6 != puVar9) {
    local_238 = (undefined8 *)*puVar6;
    uStack_230 = (undefined8 *)puVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_238);
  }
LAB_1402fa61e:
  local_1e8 = 0x19;
  plVar8 = (longlong *)(**(code **)(*DAT_141dddf78 + 8))(DAT_141dddf78,DAT_141a026b8);
  if ((int)local_a0[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_98[4];
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_90,&local_res8,&local_res10,plVar8);
  if (0 < iVar3) {
    do {
      local_1e8 = 0x1b;
      if ((int)local_a0[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_98;
      }
      cVar2 = FUN_140e491e0(puVar9);
      if (cVar2 == '\0') {
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4d8);
        local_d4 = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_d8 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_e0 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_e0,puVar9);
        }
        puVar9 = &local_e0;
        uVar11 = uVar11 | 10;
      }
      else {
        puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4c8);
        uStack_1d4 = *(undefined4 *)((longlong)puVar9 + 0xc);
        uStack_1d8 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_1e0 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_1e0,puVar9);
        }
        puVar9 = &local_1e0;
        uVar11 = uVar11 | 5;
      }
      local_168 = (undefined8 *)*puVar9;
      puStack_160 = (undefined8 *)puVar9[1];
      local_res20 = uVar11;
      if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_168);
      if ((uVar11 & 2) != 0) {
        uVar11 = uVar11 & 0xfffffffd;
        local_res20 = uVar11;
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
      }
      if ((uVar11 & 1) != 0) {
        uVar11 = uVar11 & 0xfffffffe;
        local_res20 = uVar11;
        if ((1 << ((byte)uStack_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
      }
      local_1e8 = 0x1c;
      if ((int)local_a0[0] < 2) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_98[1];
      }
      iVar3 = FUN_140e4a740(puVar9);
      uVar13 = uStack_e4;
      ppuVar10 = (undefined8 **)0x0;
      if (((uStack_e4 & 0xffffff) == 2) && (local_f0 != (undefined8 *)0x0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)local_f0 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)local_f0 + 0x24));
        }
        else {
          ppuVar10 = (undefined8 **)((longlong)iVar3 * 0x10 + local_f0[1]);
        }
        if (ppuVar10 != &local_208) goto LAB_1402fa8a9;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar10 = &local_f0;
LAB_1402fa8a9:
        local_168 = *ppuVar10;
        puStack_160 = ppuVar10[1];
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_168);
      }
      local_1e8 = 0x1f;
      if ((int)local_a0[0] < 4) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_98[3];
      }
      local_104 = *(undefined4 *)((longlong)puVar9 + 0xc);
      local_108 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) == 0) {
        local_110 = *puVar9;
      }
      else {
        FUN_1400419b0(&local_110);
      }
      local_res20 = uVar11 | 0x10;
      local_c4 = 7;
      local_d0[0] = 1;
      FUN_1400460e0(&local_110,local_d0);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50();
      }
      iVar3 = 0;
      if ((uStack_1fc == 2) && (local_208 != (undefined8 *)0x0)) {
        iVar3 = *(int *)((longlong)local_208 + 0x24);
      }
      local_b4 = 0;
      local_c0 = (double)iVar3;
      iVar3 = FUN_140e851f0(&local_110,&local_c0,DAT_141955260,1);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      local_res20 = uVar11;
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if (0 < iVar3) {
        local_1e8 = 0x21;
        iVar3 = 0;
        if ((uStack_1fc == 2) && (local_208 != (undefined8 *)0x0)) {
          iVar3 = *(int *)((longlong)local_208 + 0x24);
        }
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_20c = 0;
        local_218 = (double)iVar3;
        local_1e8 = 0x22;
        if ((int)local_a0[0] < 4) {
          puVar9 = &DAT_1419df7b0;
        }
        else {
          puVar9 = (undefined8 *)local_98[3];
        }
        local_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
        local_150 = *(undefined4 *)(puVar9 + 1);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_158 = *puVar9;
        }
        else {
          FUN_1400419b0(&local_158);
        }
        local_res20 = uVar11 | 0x20;
        local_a4 = 7;
        local_b0[0] = 1;
        FUN_1400460e0(&local_158,local_b0);
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b0);
        }
        uVar5 = 0;
        if ((uStack_1fc == 2) && (local_208 != (undefined8 *)0x0)) {
          uVar5 = *(undefined4 *)((longlong)local_208 + 0x24);
        }
        local_f4 = local_14c;
        local_f8 = local_150;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_100 = local_158;
        }
        else {
          FUN_1400419b0(&local_100,&local_158);
        }
        local_res20 = uVar11 | 0x60;
        uStack_230 = (undefined8 *)CONCAT44(7,(undefined4)uStack_230);
        local_238 = (undefined8 *)CONCAT44(local_238._4_4_,uVar5);
        FUN_1400462a0(&local_100,&local_238);
        if ((1 << ((byte)((ulonglong)uStack_230 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        iVar3 = FUN_140e4a740(&local_100);
        local_res20 = uVar11 | 0x20;
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        local_res20 = uVar11;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        while (0 < iVar3) {
          iVar3 = iVar3 + -1;
          local_1e8 = 0x24;
          uVar5 = FUN_140e4a740(&local_218);
          puVar9 = (undefined8 *)FUN_140e48e40(&local_208,uVar5);
          FUN_140e609c0(*local_208);
          if ((undefined8 **)puVar9 != &DAT_1419df7b0) {
            local_168 = DAT_1419df7b0;
            puStack_160 = _DAT_1419df7b8;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar9);
            }
            FUN_140041b80(puVar9,&local_168);
          }
          FUN_140e60910(1);
          local_1e8 = 0x25;
          uVar4 = local_20c & 0xffffff;
          if (uVar4 == 0) {
LAB_1402fac9b:
            local_218 = local_218 + 1.0;
          }
          else {
            if (uVar4 == 1) {
              local_218 = (double)FUN_140e4b060(&local_218);
              local_20c = 0;
              goto LAB_1402fac9b;
            }
            if (uVar4 == 7) {
              local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_218 = (double)((longlong)local_218 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_20c = 0;
                goto LAB_1402fac9b;
              }
              FUN_140042910(&DAT_14172c3d8,&local_218,&local_218);
            }
          }
        }
      }
      local_1e8 = 0x29;
      if ((int)local_a0[0] < 4) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_98[3];
      }
      iVar3 = FUN_140e4a740(puVar9);
      ppuVar10 = (undefined8 **)0x0;
      if (((uStack_1fc & 0xffffff) == 2) && (local_208 != (undefined8 *)0x0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)local_208 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)local_208 + 0x24));
        }
        else {
          ppuVar10 = (undefined8 **)((longlong)iVar3 * 0x10 + local_208[1]);
        }
        if (ppuVar10 != &local_120) goto LAB_1402fad48;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        ppuVar10 = &local_208;
LAB_1402fad48:
        local_168 = *ppuVar10;
        puStack_160 = ppuVar10[1];
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_168);
      }
      local_1e8 = 0x2a;
      if ((int)local_a0[0] < 3) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_98[2];
      }
      if ((int)local_a0[0] < 4) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_98[3];
      }
      uVar5 = FUN_140e4a740(puVar6);
      puVar6 = (undefined8 *)FUN_140e48e40(&local_208,uVar5);
      FUN_140e609c0(*local_208);
      if (puVar9 != puVar6) {
        local_168 = (undefined8 *)*puVar9;
        puStack_160 = (undefined8 *)puVar9[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_168);
      }
      FUN_140e60910(1);
      local_1e8 = 0x2c;
      if ((int)local_a0[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_98;
      }
      cVar2 = FUN_140e491e0(puVar9);
      if (cVar2 != '\0') {
        if ((int)local_a0[0] < 3) {
          puVar9 = &DAT_1419df7b0;
        }
        else {
          puVar9 = (undefined8 *)local_98[2];
        }
        iVar3 = FUN_140e851f0(&local_120,puVar9,DAT_141955260,0);
        if (iVar3 != 0) {
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_248 = 0;
          local_240 = 0;
          local_23c = 5;
          local_148 = &local_120;
          uVar7 = gml_Script__funcFilter_anon_236___InputBindingScan___InputBindingScan
                            (local_res8,local_res10,&local_248,1,&local_148);
          cVar2 = FUN_140e491e0(uVar7);
          if (cVar2 == '\0') {
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            if ((int)local_a0[0] < 3) {
              puVar9 = &DAT_1419df7b0;
LAB_1402faef5:
              local_168 = (undefined8 *)*puVar9;
              puStack_160 = (undefined8 *)puVar9[1];
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              FUN_140041b80(&local_1a8,&local_168);
            }
            else {
              puVar9 = (undefined8 *)local_98[2];
              if (puVar9 != &local_1a8) goto LAB_1402faef5;
            }
            local_140 = &local_1a8;
            uVar7 = gml_Script__funcFilter_anon_236___InputBindingScan___InputBindingScan
                              (local_res8,local_res10,&local_228,1,&local_140);
            cVar2 = FUN_140e491e0(uVar7);
            if (cVar2 == '\0') goto LAB_1402fafc4;
          }
          local_1e8 = 0x2e;
          if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d0);
          }
          local_1d0 = 0;
          local_1c8 = 0;
          local_1c4 = 5;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd778);
          FUN_140e63610(local_res8,local_res10,&local_1d0,0,uVar7,0);
        }
      }
LAB_1402fafc4:
      cVar2 = FUN_140e643f0(local_90,&local_res8,&local_res10);
    } while (cVar2 != '\0');
    param_3 = local_res18;
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  if (local_80 != 0) {
    FUN_140e4cd60();
    local_80 = 0;
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(&local_1b8,0x10,5,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar9 = local_98;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}


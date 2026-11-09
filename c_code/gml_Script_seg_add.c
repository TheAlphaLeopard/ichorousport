// gml_Script_seg_add @ 0x1404951d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * gml_Script_seg_add(undefined8 param_1,undefined8 param_2,uint *param_3,uint param_4,
                         undefined8 *param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined8 local_res8;
  undefined8 local_res10;
  uint local_res18;
  uint local_res20 [2];
  ulonglong **ppuVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  ulonglong in_stack_fffffffffffffdf0;
  ulonglong uVar15;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  uint uStack_1b0;
  uint uStack_1ac;
  ulonglong local_1a8;
  undefined4 local_19c;
  ulonglong local_198;
  byte local_18c;
  ulonglong local_188;
  byte local_17c;
  ulonglong local_178;
  byte local_16c;
  ulonglong local_168;
  byte local_15c;
  uint local_158 [3];
  byte local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  uint local_118 [3];
  uint uStack_10c;
  ulonglong *local_108;
  ulonglong *local_100;
  ulonglong *local_f8;
  ulonglong *local_f0;
  uint *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  ulonglong local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  uint local_98 [2];
  undefined8 *local_90;
  undefined8 *local_88;
  ulonglong *local_80;
  undefined8 *local_78;
  uint *local_70;
  ulonglong **local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  
  local_res18 = 0;
  local_130 = "gml_Script_scribble";
  local_138 = DAT_141dc7a50;
  local_128 = 7;
  DAT_141dc7a50 = &local_138;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res20[0] = param_4;
  FUN_140041df0(local_98,param_4,2,param_5);
  uVar9 = (ulonglong)local_98[0];
  local_res20[0] = local_98[0];
  param_5 = local_90;
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_10c = 0xffffff;
  local_118[0] = 0;
  local_118[1] = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_13c = 0;
  local_148 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf1a0) &&
     (_Init_thread_header(&DAT_141ddf1a0), DAT_141ddf1a0 == -1)) {
    DAT_141ddf1a8 = (longlong *)FUN_140e63aa0(DAT_1419f96f8);
    _Init_thread_footer(&DAT_141ddf1a0);
  }
  local_128 = 7;
  puVar10 = (uint *)&DAT_1419df7b0;
  if ((int)local_res20[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_128 = 7, 1 < (int)local_res20[0])) &&
     (puVar6 = (undefined8 *)param_5[1], puVar6 != &DAT_1419df7b0)) {
    local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1f8);
  }
  if (DAT_141ddc1a0 == '\0') {
    FUN_140e64380(DAT_141ddf1a8,"gml_Script_scribble");
    FUN_140e64380(local_res8,"gml_Script_scribble");
  }
  local_128 = 0xf;
  if (DAT_141ddc1a0 == '\0') {
    DAT_141ddc1a0 = '\x01';
    puVar4 = (ulonglong *)(**(code **)(*DAT_141ddf1a8 + 0x10))(DAT_141ddf1a8,DAT_141a0a6c8);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
    local_108 = &local_198;
    ppuVar11 = &local_108;
    uVar5 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_208,1,ppuVar11)
    ;
    in_stack_fffffffffffffdf0 = in_stack_fffffffffffffdf0 & 0xffffffffffffff00;
    uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a05138,0x80000000,&local_a8,uVar12,in_stack_fffffffffffffdf0);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_a8,DAT_141a04d68,0x80000000,&local_c8,uVar12,
                  in_stack_fffffffffffffdf0 & 0xffffffffffffff00);
    uVar14 = (undefined4)(uVar12 >> 0x20);
    FUN_140e609c0(DAT_141ddf1a8);
    if (&local_c8 != puVar4) {
      local_1f8 = local_c8;
      uStack_1f0 = uStack_c0;
      uStack_1ec = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_128 = 9;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((int)local_res20[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1404955cb:
    local_1f8 = *puVar4;
    uStack_1f0 = (uint)puVar4[1];
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  else {
    puVar4 = (ulonglong *)*param_5;
    if (puVar4 != &local_198) goto LAB_1404955cb;
  }
  local_108 = &local_198;
  uVar13 = CONCAT44(uVar14,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar13,&local_108);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((int)local_res20[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140495693:
      local_1f8 = *puVar4;
      uStack_1f0 = (uint)puVar4[1];
      uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1f8);
    }
    else {
      puVar4 = (ulonglong *)*param_5;
      if (puVar4 != &local_188) goto LAB_140495693;
    }
    local_100 = &local_188;
    uStack_1ac = DAT_141dd37e4;
    uStack_1b0 = DAT_141dd37e0;
    if ((1 << ((byte)DAT_141dd37e4 & 0x1f) & 0x46U) == 0) {
      local_1b8 = DAT_141dd37d8;
    }
    else {
      FUN_1400419b0(&local_1b8,&DAT_141dd37d8);
    }
    uVar13 = CONCAT44(uVar14,DAT_1419f9718);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1d8,1,uVar13,&local_100);
    uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
    iVar3 = FUN_140e851f0(uVar5,&local_1b8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (iVar3 == 0) {
      local_128 = 0xb;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      local_1f8 = CONCAT44(uRam0000000141dd37ac,_DAT_141dd37a8);
      uStack_1f0 = uRam0000000141dd37b0;
      uStack_1ec = DAT_141dd37b4;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
      local_f8 = &local_178;
      FUN_1401ef7f0(local_res8,local_res10,&local_1e8,1,&local_f8);
      local_128 = 0xc;
      goto LAB_140495f52;
    }
  }
  local_128 = 0x11;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_208 = 0;
  local_200 = 0;
  local_1fc = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (ulonglong *)(**(code **)(*DAT_141ddf1a8 + 8))(DAT_141ddf1a8,DAT_141a0a6c8);
  if ((int)local_res20[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1404958b1:
    local_1f8 = *puVar7;
    uStack_1f0 = (uint)puVar7[1];
    uStack_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
  }
  else {
    puVar7 = (ulonglong *)*param_5;
    if (puVar7 != &local_178) goto LAB_1404958b1;
  }
  local_f8 = &local_178;
  if (puVar4 != &local_168) {
    local_1f8 = *puVar4;
    uStack_1f0 = (uint)puVar4[1];
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1f8);
  }
  local_f0 = &local_168;
  if ((int)local_res20[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d4 = DAT_141dd37d4;
    local_d8 = DAT_141dd37d0;
    if ((1 << ((byte)DAT_141dd37d4 & 0x1f) & 0x46U) == 0) {
      local_e0 = DAT_141dd37c8;
    }
    else {
      FUN_1400419b0(&local_e0,&DAT_141dd37c8);
    }
    puVar6 = &local_e0;
    uVar8 = 1;
  }
  else {
    local_88 = &local_1e8;
    local_80 = &local_198;
    local_78 = &param_5;
    local_70 = local_res20;
    local_68 = &local_108;
    local_60 = &local_res8;
    local_58 = &local_res10;
    puVar6 = (undefined8 *)FUN_1404960e0(&local_88,&local_1f8);
    uVar8 = 2;
  }
  uVar13 = CONCAT44(uVar14,DAT_1419fcb18);
  local_res18 = uVar8;
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_148,1,uVar13,&local_f8);
  uVar14 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_1ac = *(uint *)((longlong)puVar6 + 0xc);
  uStack_1b0 = *(uint *)(puVar6 + 1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
    local_1b8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_1b8,puVar6);
  }
  local_res18 = uVar8 | 4;
  FUN_1400460e0(&local_1b8,uVar5);
  local_1c8 = (uint)local_1b8;
  uStack_1c4 = local_1b8._4_4_;
  uStack_1c0 = uStack_1b0;
  uStack_1bc = uStack_1ac;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_1c8);
  local_res18 = uVar8;
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((uVar8 & 2) != 0) {
    uVar8 = uVar8 & 0xfffffff9;
    local_res18 = uVar8;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
  }
  if (((uVar8 & 1) != 0) && ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e0);
  }
  local_e8 = local_158;
  uVar12 = CONCAT44(uVar14,DAT_141a01138);
  puVar4 = (ulonglong *)FUN_140e634e0(local_res8,local_res10,&local_208,2,uVar12,&local_f0);
  if (puVar4 != &local_1a8) {
    local_1c8 = (uint)*puVar4;
    uStack_1c4 = *(uint *)((longlong)puVar4 + 4);
    uStack_1c0 = (uint)puVar4[1];
    uStack_1bc = *(uint *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_1c8);
  }
  local_128 = 0x12;
  iVar3 = FUN_140e851f0(&local_1a8,&DAT_1419df7b0,DAT_141955260,0);
  uVar14 = (undefined4)(uVar12 >> 0x20);
  if (iVar3 == 0) {
LAB_140495ce8:
    uVar14 = (undefined4)(uVar12 >> 0x20);
    local_128 = 0x14;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((int)local_res20[0] < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140495d6c:
      local_1c8 = (uint)*puVar4;
      uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1c0 = (uint)puVar4[1];
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1c8);
    }
    else {
      puVar4 = (ulonglong *)*param_5;
      if (puVar4 != &local_188) goto LAB_140495d6c;
    }
    local_100 = &local_188;
    local_1c8 = DAT_141a05e88 & 0xffffff;
    uStack_1c4 = (int)(DAT_141a05e88 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1c4 == 0xf) {
      uStack_1c4 = 0x4000004;
    }
    else {
      uStack_1c4 = uStack_1c4 | 0x1000000;
    }
    uStack_1ec = 0xf;
    local_1f8 = CONCAT44(uStack_1c4,DAT_141a05e88) & 0xffffffff00ffffff;
    uStack_1c0 = uStack_1f0;
    uStack_1bc = 0xf;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
    local_f8 = &local_178;
    uVar5 = CONCAT44(uVar14,DAT_1419fcb18);
    puVar4 = (ulonglong *)FUN_140e634e0(local_res8,local_res10,&local_1e8,1,uVar5,&local_100);
    uVar14 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != &local_168) {
      local_1c8 = (uint)*puVar4;
      uStack_1c4 = *(uint *)((longlong)puVar4 + 4);
      uStack_1c0 = (uint)puVar4[1];
      uStack_1bc = *(uint *)((longlong)puVar4 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1c8);
    }
    local_f0 = &local_168;
    if (((int)local_res20[0] < 2) || (puVar10 = (uint *)param_5[1], puVar10 != local_158)) {
      local_1c8 = *puVar10;
      uStack_1c4 = puVar10[1];
      uStack_1c0 = puVar10[2];
      uStack_1bc = puVar10[3];
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_1c8);
    }
    local_e8 = local_158;
    puVar10 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_1d8,3,
                                    CONCAT44(uVar14,DAT_1419fd6d8),&local_f8);
    if (puVar10 == param_3) goto LAB_140495f52;
    local_1c8 = *puVar10;
    uStack_1c4 = puVar10[1];
    uStack_1c0 = puVar10[2];
    uStack_1bc = puVar10[3];
  }
  else {
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    local_208 = 0;
    local_200 = 0;
    local_1fc = 5;
    local_108 = &local_1a8;
    ppuVar11 = &local_108;
    uVar12 = CONCAT44(uVar14,DAT_141a04538);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_208,1,uVar12,ppuVar11);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 == '\0') goto LAB_140495ce8;
    uVar15 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_1a8,DAT_141a05da8,0x80000000,local_118,uVar12,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(local_118,DAT_141a05c98,0x80000000,&local_b8,uVar12,uVar15);
    cVar2 = FUN_140e491e0(&local_b8);
    if (cVar2 != '\0') goto LAB_140495ce8;
    local_128 = 0x18;
    FUN_140e87440(&local_1a8,DAT_141a05da8,0x80000000,local_118,uVar12 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    if (local_118 == param_3) goto LAB_140495f52;
    local_1c8 = local_118[0];
    uStack_1c4 = local_118[1];
    uStack_1c0 = local_118[2];
    uStack_1bc = uStack_10c;
  }
  if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  FUN_140041b80(param_3,&local_1c8);
LAB_140495f52:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,5,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar6 = local_90;
    do {
      puVar1 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}


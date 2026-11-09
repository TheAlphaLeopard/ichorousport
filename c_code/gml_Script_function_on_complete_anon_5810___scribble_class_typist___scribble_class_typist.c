// gml_Script_function_on_complete_anon_5810___scribble_class_typist___scribble_class_typist @ 0x140165020

undefined8 *
gml_Script_function_on_complete_anon_5810___scribble_class_typist___scribble_class_typist
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double *pdVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  double local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  double *local_d8;
  undefined4 *local_d0 [3];
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_130 = "gml_Script_sound_per_char@anon@4554@__scribble_class_typist@__scribble_class_typist";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0xad;
  FUN_140041df0(local_58,param_4,6,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_15c = 0;
  local_168 = 0;
  local_114 = 0;
  local_120 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0xad;
  puVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[4];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_128 = 0xad;
    if (4 < (int)local_58[0]) {
      puVar11 = (undefined8 *)local_50[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = 0x3ff0000000000000;
  }
  puVar11 = &DAT_1419df7b0;
  if ((int)local_58[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[5];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    uStack_13c = 0xd;
    local_148 = 0;
    if (((int)local_58[0] < 6) || (puVar11 = (undefined8 *)local_50[5], &local_148 != puVar11)) {
      local_178 = 0;
      uStack_174 = 0;
      uStack_170 = uStack_140;
      uStack_16c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_178);
    }
  }
  local_128 = 0xaf;
  if ((int)local_58[0] < 1) {
    puVar11 = &DAT_1419df7b0;
LAB_140165221:
    local_178 = *(undefined4 *)puVar11;
    uStack_174 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_170 = *(undefined4 *)(puVar11 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
  }
  else {
    puVar11 = (undefined8 *)*local_50;
    if (puVar11 != &local_108) goto LAB_140165221;
  }
  local_128 = 0xb0;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  local_e8 = &local_108;
  uVar9 = CONCAT44(uVar13,DAT_1419fdb88);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_e8);
  uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_128 = 0xb0;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_120 = 0;
    local_118 = 0;
    local_114 = 5;
    local_e0 = &local_108;
    uVar4 = CONCAT44(uVar13,DAT_1419fdca8);
    puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_120,1,uVar4,&local_e0);
    uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar11 != &local_108) {
      local_178 = *(undefined4 *)puVar11;
      uStack_174 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_170 = *(undefined4 *)(puVar11 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
    }
  }
  local_128 = 0xb2;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a079c8);
  uStack_13c = 0xd;
  local_148 = 0x3ff0000000000000;
  if (&local_148 != puVar11) {
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = uStack_140;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  local_128 = 0xb3;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a08);
  FUN_140e609c0(param_1);
  if (&local_108 != puVar11) {
    local_178 = (undefined4)local_108;
    uStack_174 = local_108._4_4_;
    uStack_170 = uStack_100;
    uStack_16c = uStack_fc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xb4;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a38);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
  }
  if (puVar5 != puVar11) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xb5;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a076a8);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[2];
  }
  if (puVar5 != puVar11) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xb6;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07a58);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[4];
  }
  if (puVar5 != puVar11) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xb7;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b58);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[5];
  }
  if (puVar5 != puVar11) {
    local_178 = *(undefined4 *)puVar5;
    uStack_174 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xb9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_58[0] < 4) {
    puVar11 = &DAT_1419df7b0;
LAB_140165642:
    local_178 = *(undefined4 *)puVar11;
    uStack_174 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_170 = *(undefined4 *)(puVar11 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  else {
    puVar11 = (undefined8 *)local_50[3];
    if (puVar11 != &local_b8) goto LAB_140165642;
  }
  local_e8 = &local_b8;
  uVar9 = CONCAT44(uVar13,DAT_1419fdbf8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,&local_e8);
  uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_128 = 199;
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07b78);
    uStack_13c = 0xd;
    local_148 = 0;
    if (&local_148 != puVar11) {
      local_178 = 0;
      uStack_174 = 0;
      uStack_170 = uStack_140;
      uStack_16c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_178);
    }
    goto LAB_140165b4a;
  }
  local_128 = 0xbb;
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
  uStack_13c = 0xd;
  local_148 = 0x3ff0000000000000;
  if (&local_148 != puVar11) {
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = uStack_140;
    uStack_16c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_178);
  }
  local_128 = 0xbc;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07ab8);
  FUN_140e609c0(param_1);
  uVar4 = CONCAT44(uVar13,DAT_1419fd6d8);
  puVar7 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_168,0,uVar4,0);
  uVar13 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar7 != puVar6) {
    local_178 = *puVar7;
    uStack_174 = puVar7[1];
    uStack_170 = puVar7[2];
    uStack_16c = puVar7[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_178);
  }
  FUN_140e60910(1);
  local_128 = 0xbe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 1.0;
  local_128 = 0xbf;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_58[0] < 4) {
    puVar11 = &DAT_1419df7b0;
LAB_140165840:
    local_178 = *(undefined4 *)puVar11;
    uStack_174 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_170 = *(undefined4 *)(puVar11 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  else {
    puVar11 = (undefined8 *)local_50[3];
    if (puVar11 != &local_b8) goto LAB_140165840;
  }
  local_e8 = &local_b8;
  puVar11 = (undefined8 *)CONCAT44(uVar13,DAT_141a07b08);
  pdVar8 = (double *)FUN_140e634e0(param_1,param_2,&local_168,1,puVar11,&local_e8);
  if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar8);
  }
  iVar2 = (int)dVar12;
  while (0 < iVar2) {
    uVar13 = (undefined4)((ulonglong)puVar11 >> 0x20);
    iVar2 = iVar2 + -1;
    local_128 = 0xc1;
    if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_120);
    }
    local_120 = 0;
    local_118 = 0;
    local_114 = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07ab8);
    if ((int)local_58[0] < 4) {
      puVar11 = &DAT_1419df7b0;
LAB_140165959:
      local_178 = *(undefined4 *)puVar11;
      uStack_174 = *(undefined4 *)((longlong)puVar11 + 4);
      uStack_170 = *(undefined4 *)(puVar11 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_178);
    }
    else {
      puVar11 = (undefined8 *)local_50[3];
      if (puVar11 != &local_a8) goto LAB_140165959;
    }
    local_d8 = &local_158;
    uVar9 = CONCAT44(uVar13,DAT_141a079a8);
    local_e0 = &local_a8;
    puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar9,&local_e0);
    uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (puVar6 != local_88) {
      local_178 = *puVar6;
      uStack_174 = puVar6[1];
      uStack_170 = puVar6[2];
      uStack_16c = puVar6[3];
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_178);
    }
    local_d0[0] = local_88;
    uStack_13c = 0xd;
    local_148 = 0x3ff0000000000000;
    uVar9 = FUN_140e634e0(param_1,param_2,&local_120,1,CONCAT44(uVar13,DAT_1419fdc48),local_d0);
    puVar11 = &local_148;
    FUN_140e98ef0(param_1,param_2,uVar4,uVar9,puVar11);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_128 = 0xc2;
    uVar3 = local_14c & 0xffffff;
    if (uVar3 == 0) {
LAB_140165abe:
      local_158 = local_158 + 1.0;
    }
    else {
      if (uVar3 == 1) {
        local_158 = (double)FUN_140e4b060(&local_158);
        local_14c = 0;
        goto LAB_140165abe;
      }
      if (uVar3 == 7) {
        local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
      }
      else if (uVar3 == 10) {
        local_158 = (double)((longlong)local_158 + 1);
      }
      else {
        if (uVar3 == 0xd) {
          local_14c = 0;
          goto LAB_140165abe;
        }
        FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
      }
    }
  }
LAB_140165b4a:
  local_128 = 0xca;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,6,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar11 = local_50;
    do {
      puVar5 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}


// gml_Object_oSalesman_CleanUp_0 @ 0x140d5cdf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSalesman_CleanUp_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong in_stack_fffffffffffffe80;
  ulonglong uVar14;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_b8 = "gml_Object_oSalesman_Step_0";
  local_b0 = 0;
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  bVar11 = 0xff;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_b0 = 3;
  uVar12 = 0;
  gml_Script_truestate_clear_history(param_1,param_2,&local_168,0,0);
  local_b0 = 5;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaf8);
  uStack_14c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_78,uVar12,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_148) {
    local_178 = (longlong *)*plVar6;
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_78;
  uStack_170 = uStack_70;
  uStack_16c = uStack_6c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edb34,_DAT_1419edb30);
  uStack_170 = uRam00000001419edb38;
  uStack_16c = uRam00000001419edb3c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,0);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  pplVar10 = &local_e8;
  uVar12 = CONCAT44(uVar4,DAT_141a00c58);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar12,pplVar10);
  if (puVar7 != puVar8) {
    local_178 = (longlong *)*puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_178);
  }
  FUN_140e60910(2);
  local_b0 = 6;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaf8);
  uStack_14c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_88,uVar12,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_148) {
    local_178 = (longlong *)*plVar6;
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_88;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edb34,_DAT_1419edb30);
  uStack_170 = uRam00000001419edb38;
  uStack_16c = uRam00000001419edb3c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,1);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  pplVar10 = &local_e8;
  uVar12 = CONCAT44(uVar4,DAT_141a00c58);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar12,pplVar10);
  if (puVar7 != puVar8) {
    local_178 = (longlong *)*puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_178);
  }
  FUN_140e60910(2);
  local_b0 = 8;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb98);
  uStack_14c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_78,uVar12,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_148) {
    local_178 = (longlong *)*plVar6;
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_78;
  uStack_170 = uStack_70;
  uStack_16c = uStack_6c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edb24,_DAT_1419edb20);
  uStack_170 = uRam00000001419edb28;
  uStack_16c = uRam00000001419edb2c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,0);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  pplVar10 = &local_e8;
  uVar12 = CONCAT44(uVar4,DAT_141a00c58);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar12,pplVar10);
  if (puVar7 != puVar8) {
    local_178 = (longlong *)*puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_178);
  }
  FUN_140e60910(2);
  local_b0 = 9;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01bb8);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb98);
  uStack_14c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_88,uVar12,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_148) {
    local_178 = (longlong *)*plVar6;
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_88;
  uStack_170 = uStack_80;
  uStack_16c = uStack_7c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edb24,_DAT_1419edb20);
  uStack_170 = uRam00000001419edb28;
  uStack_16c = uRam00000001419edb2c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  uVar13 = CONCAT44(uVar4,DAT_141a00c58);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,3,uVar13,&local_e8);
  uVar4 = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_14c = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_150 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_158 = (longlong *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_158,puVar8);
  }
  FUN_1400460e0(&local_158,uVar9);
  pplVar10 = (longlong **)FUN_140e48e40(puVar7,1);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (&local_158 != pplVar10) {
    local_178 = local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar10);
    }
    FUN_140041b80(pplVar10,&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e60910(2);
  local_b0 = 0xb;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fecf8);
  if (plVar6 != &local_148) {
    local_178 = (longlong *)*plVar6;
    uStack_170 = (undefined4)plVar6[1];
    uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  pplVar10 = &local_e8;
  uVar12 = CONCAT44(uVar4,DAT_141a02ef8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar12,pplVar10);
  cVar3 = FUN_140e491e0(uVar9);
  if (cVar3 == '\0') {
LAB_140d5dd05:
    uVar4 = (undefined4)(uVar12 >> 0x20);
    local_b0 = 0x13;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01bb8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
    if (plVar6 != &local_148) {
      local_178 = (longlong *)*plVar6;
      uStack_170 = (undefined4)plVar6[1];
      uStack_16c = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_e8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7674,_DAT_141dc7670);
    uStack_170 = uRam0000000141dc7678;
    uStack_16c = uRam0000000141dc767c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_178);
    local_e0 = local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edb24,_DAT_1419edb20);
    uStack_170 = uRam00000001419edb28;
    uStack_16c = uRam00000001419edb2c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_d8 = local_128;
    FUN_140e609c0(param_1);
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_168,3,CONCAT44(uVar4,DAT_141a00c58),&local_e8);
    if (puVar8 == puVar7) goto LAB_140d5de7c;
    local_178 = (longlong *)*puVar8;
    uStack_170 = *(undefined4 *)(puVar8 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
    bVar2 = (byte)*(undefined4 *)((longlong)puVar7 + 0xc);
    bVar11 = 0xff;
  }
  else {
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fecf8);
    uVar14 = (ulonglong)pplVar10 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar9,DAT_1419fed18,0x80000000,&local_48,uVar12,uVar14);
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar9,DAT_1419fed28,0x80000000,&local_58,uVar12,uVar14);
    uVar4 = FUN_140e4a740(&local_58);
    uVar12 = uVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar9,DAT_1419fed08,uVar4,&local_68,uVar12,uVar14 & 0xffffffffffffff00);
    iVar5 = FUN_140e851f0(&local_48,&local_68,DAT_141955260,0);
    uVar4 = (undefined4)(uVar12 >> 0x20);
    if (iVar5 == 0) goto LAB_140d5dd05;
    local_b0 = 0xd;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_16c = 0xf;
    local_178 = (longlong *)0x100000a00000002;
    local_158 = (longlong *)0x100000a00000002;
    uStack_150 = uStack_170;
    uStack_14c = 0xf;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_158);
    local_e0 = local_138;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7674,_DAT_141dc7670);
    uStack_170 = uRam0000000141dc7678;
    uStack_16c = uRam0000000141dc767c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_d8 = local_128;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar4,DAT_141a04248),&local_e0);
    if (puVar7 != &local_a8) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_178);
    }
    local_b0 = 0xe;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_158 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_158,puVar7);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x403e000000000000;
    FUN_140046500(&local_158,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = local_158;
    uStack_170 = uStack_150;
    uStack_16c = uStack_14c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_e8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc7674,_DAT_141dc7670);
    uStack_170 = uRam0000000141dc7678;
    uStack_16c = uRam0000000141dc767c;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_178);
    local_e0 = local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edb14,_DAT_1419edb10);
    uStack_170 = uRam00000001419edb18;
    uStack_16c = uRam00000001419edb1c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_d8 = local_128;
    pplVar10 = &local_e8;
    local_d0 = &local_a8;
    puVar7 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_f8,3,pplVar10);
    uVar4 = (undefined4)((ulonglong)pplVar10 >> 0x20);
    if (puVar7 != &local_108) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
    }
    local_c8 = &local_108;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar4,DAT_141a04258),&local_d0);
    uVar4 = 0xffffff;
    if (puVar7 != &local_98) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      FUN_140041b80(&local_98,&local_178);
      uVar4 = uStack_8c;
    }
    bVar11 = (byte)uVar4;
    local_b0 = 0xf;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
    FUN_140e609c0(param_1);
    if (&local_98 == puVar7) goto LAB_140d5de7c;
    local_178 = (longlong *)local_98;
    uStack_170 = uStack_90;
    uStack_16c = uStack_8c;
    bVar2 = (byte)*(undefined4 *)((longlong)puVar7 + 0xc);
  }
  if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  FUN_140041b80(puVar7,&local_178);
LAB_140d5de7c:
  FUN_140e60910(1);
  local_b0 = 0x17;
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar9);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return;
}


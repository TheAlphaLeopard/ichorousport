// gml_Script_anon_1678_gml_Object_oShopSalesman_Create_0 @ 0x140d79e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1678_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong **pplVar10;
  longlong *plVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffe80;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
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
  undefined4 local_b4;
  undefined8 local_b0;
  char *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  plVar11 = (longlong *)0x0;
  local_a8 = "gml_Script_anon@936@gml_Object_oShopSalesman_Create_0";
  local_b0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b0;
  local_a0 = 0x27;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_14c = 0;
  local_158 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a0 = 0x28;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaf8);
  uStack_15c = 6;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_68,uVar13,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_148) {
    local_178 = (longlong *)*plVar5;
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_68;
  uStack_170 = uStack_60;
  uStack_16c = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edd24,_DAT_1419edd20);
  uStack_170 = uRam00000001419edd28;
  uStack_16c = uRam00000001419edd2c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e48e40(puVar6,0);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  pplVar10 = &local_e8;
  uVar13 = CONCAT44(uVar3,DAT_141a00c58);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,pplVar10);
  if (puVar6 != puVar7) {
    local_178 = (longlong *)*puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_178);
  }
  FUN_140e60910(2);
  local_a0 = 0x29;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feaf8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaf8);
  uStack_15c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_98,uVar13,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_148) {
    local_178 = (longlong *)*plVar5;
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = local_98;
  uStack_170 = uStack_90;
  uStack_16c = uStack_8c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edd24,_DAT_1419edd20);
  uStack_170 = uRam00000001419edd28;
  uStack_16c = uRam00000001419edd2c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  puVar7 = (undefined8 *)FUN_140e48e40(puVar6,1);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  pplVar10 = &local_e8;
  uVar13 = CONCAT44(uVar3,DAT_141a00c58);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,pplVar10);
  if (puVar6 != puVar7) {
    local_178 = (longlong *)*puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_178);
  }
  FUN_140e60910(2);
  local_a0 = 0x2a;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb98);
  uStack_15c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_68,uVar13,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_148) {
    local_178 = (longlong *)*plVar5;
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  local_178 = (longlong *)local_68;
  uStack_170 = uStack_60;
  uStack_16c = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edd14,_DAT_1419edd10);
  uStack_170 = uRam00000001419edd18;
  uStack_16c = uRam00000001419edd1c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  plVar5 = (longlong *)FUN_140e48e40(puVar6,0);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  pplVar10 = &local_e8;
  uVar13 = CONCAT44(uVar3,DAT_141a00c58);
  plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,pplVar10);
  if (plVar8 != plVar5) {
    local_178 = (longlong *)*plVar8;
    uStack_170 = (undefined4)plVar8[1];
    uStack_16c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar5);
    }
    FUN_140041b80(plVar5,&local_178);
  }
  FUN_140e60910(2);
  local_a0 = 0x2b;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419feb98);
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01bb8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feb98);
  uStack_15c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_168 = param_1;
  FUN_140e87440(&local_168,DAT_1419fe158,0x80000000,&local_98,uVar13,
                (ulonglong)pplVar10 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar5 != &local_148) {
    local_178 = (longlong *)*plVar5;
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  uStack_15c = uStack_8c;
  uStack_160 = uStack_90;
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
    local_168 = local_98;
  }
  else {
    FUN_1400419b0(&local_168,&local_98);
  }
  FUN_1400460e0(&local_168,uVar9);
  local_178 = local_168;
  uStack_170 = uStack_160;
  uStack_16c = uStack_15c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_178);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_e0 = local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419edd14,_DAT_1419edd10);
  uStack_170 = uRam00000001419edd18;
  uStack_16c = uRam00000001419edd1c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_d8 = local_128;
  FUN_140e609c0(param_1);
  plVar5 = (longlong *)FUN_140e48e40(puVar6,1);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  uVar9 = CONCAT44(uVar3,DAT_141a00c58);
  plVar8 = (longlong *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar9,&local_e8);
  uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (plVar8 != plVar5) {
    local_178 = (longlong *)*plVar8;
    uStack_170 = (undefined4)plVar8[1];
    uStack_16c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar5);
    }
    FUN_140041b80(plVar5,&local_178);
  }
  FUN_140e60910(2);
  local_a0 = 0x2d;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7008);
  if (plVar5 != &local_148) {
    local_178 = (longlong *)*plVar5;
    uStack_170 = (undefined4)plVar5[1];
    uStack_16c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_e8 = &local_148;
  uVar13 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar13,&local_e8);
  cVar2 = FUN_140e491e0(uVar9);
  uVar3 = (undefined4)(uVar13 >> 0x20);
  if (cVar2 == '\0') {
LAB_140d7afec:
    uVar3 = (undefined4)(uVar13 >> 0x20);
    local_a0 = 0x37;
    goto LAB_140d7aff5;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x10000000000007e;
  local_168 = (longlong *)0x10000000000007e;
  uStack_160 = uStack_170;
  uStack_15c = 0xf;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_168);
  local_e0 = local_138;
  ppuVar14 = &local_e0;
  uVar13 = CONCAT44(uVar3,DAT_141a02ef8);
  uVar9 = FUN_140e634e0(param_1,param_2,&local_f8,1,uVar13,ppuVar14);
  cVar2 = FUN_140e491e0(uVar9);
  if (cVar2 == '\0') goto LAB_140d7afec;
  local_a0 = 0x2e;
  uStack_15c = 0xf;
  local_168 = (longlong *)0x10000000000007e;
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_168,DAT_141a57930,0x80000000,&local_48,uVar13,uVar15);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_178 = (longlong *)local_48;
  uStack_170 = uStack_40;
  uStack_16c = uStack_3c;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_178);
  local_a0 = 0x2f;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e87440(&local_c0,DAT_141a07808,0x80000000,&local_58,uVar13 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  switch(local_b4) {
  default:
switchD_140d7aac7_caseD_1:
    uVar9 = 0;
    break;
  case 6:
    uVar9 = local_c0;
    break;
  case 0xf:
    iVar4 = (int)((ulonglong)local_c0 >> 0x20);
    if ((iVar4 != 0x1000000) && (iVar4 != 0x4000001)) goto switchD_140d7aac7_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_c0);
    uVar9 = FUN_140e87250(uVar3);
  }
  puVar6 = &local_58;
  uVar9 = FUN_140e63610(uVar9,param_2,&local_158,0,puVar6,0);
  uVar3 = (undefined4)((ulonglong)puVar6 >> 0x20);
  uStack_15c = 0;
  local_168 = (longlong *)0x3ff0000000000000;
  iVar4 = FUN_140e851f0(uVar9,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar4 == 0) {
    local_a0 = 0x34;
LAB_140d7aff5:
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01bb8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
    if (plVar11 != &local_148) {
      local_178 = (longlong *)*plVar11;
      uStack_170 = (undefined4)plVar11[1];
      uStack_16c = *(undefined4 *)((longlong)plVar11 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_e8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc76e4,_DAT_141dc76e0);
    uStack_170 = uRam0000000141dc76e8;
    uStack_16c = uRam0000000141dc76ec;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_178);
    local_e0 = local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edd14,_DAT_1419edd10);
    uStack_170 = uRam00000001419edd18;
    uStack_16c = uRam00000001419edd1c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_d8 = local_128;
    FUN_140e609c0(param_1);
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_158,3,CONCAT44(uVar3,DAT_141a00c58),&local_e8);
    if (puVar7 != puVar6) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_178);
    }
    uVar3 = 0xffffff;
  }
  else {
    local_a0 = 0x30;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uStack_16c = 0xf;
    local_178 = (longlong *)0x100000a00000002;
    local_168 = (longlong *)0x100000a00000002;
    uStack_160 = uStack_170;
    uStack_15c = 0xf;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
    local_e8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc76e4,_DAT_141dc76e0);
    uStack_170 = uRam0000000141dc76e8;
    uStack_16c = uRam0000000141dc76ec;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_178);
    local_e0 = local_138;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar3,DAT_141a04248),&local_e8);
    if (puVar6 != &local_78) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_178);
    }
    local_a0 = 0x31;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_160 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_168,puVar6);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0x403e000000000000;
    FUN_140046500(&local_168,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = local_168;
    uStack_170 = uStack_160;
    uStack_16c = uStack_15c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_e8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc76e4,_DAT_141dc76e0);
    uStack_170 = uRam0000000141dc76e8;
    uStack_16c = uRam0000000141dc76ec;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_178);
    local_e0 = local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edd34,_DAT_1419edd30);
    uStack_170 = uRam00000001419edd38;
    uStack_16c = uRam00000001419edd3c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_d8 = local_128;
    local_d0 = &local_78;
    pplVar10 = &local_e8;
    puVar6 = (undefined8 *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_f8,3,pplVar10);
    uVar3 = (undefined4)((ulonglong)pplVar10 >> 0x20);
    if (puVar6 != &local_108) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
    }
    local_c8 = &local_108;
    pplVar10 = (longlong **)
               FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar3,DAT_141a04258),&local_d0);
    if (pplVar10 == &local_88) {
      uVar3 = 0xffffff;
    }
    else {
      local_178 = *pplVar10;
      uStack_170 = *(undefined4 *)(pplVar10 + 1);
      uStack_16c = *(undefined4 *)((longlong)pplVar10 + 0xc);
      FUN_140041b80(&local_88,&local_178);
      plVar11 = local_88;
      uVar3 = local_7c;
    }
    local_a0 = 0x32;
    pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01bb8);
    FUN_140e609c0(param_1);
    uStack_160 = local_80;
    uStack_15c = uVar3;
    if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) == 0) {
      local_168 = plVar11;
    }
    else {
      FUN_1400419b0(&local_168,&local_88);
    }
    uStack_16c = 7;
    local_178 = (longlong *)CONCAT44(local_178._4_4_,4);
    FUN_140042560(&local_168,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (&local_168 != pplVar10) {
      local_178 = local_168;
      uStack_170 = uStack_160;
      uStack_16c = uStack_15c;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar10);
      }
      FUN_140041b80(pplVar10,&local_178);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  FUN_140e60910(1);
  local_a0 = 0x3a;
  uVar9 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar9);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b0;
  return param_3;
}


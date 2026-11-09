// gml_Script_light_add @ 0x1403b29d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_light_add
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  uint local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  plVar6 = (longlong *)0x0;
  local_b8 = "gml_Script_pal_light_set";
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  local_b0 = 0x18c;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5208);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_e8 = 0xffffff;
  uStack_16c = 0xffffff;
  lVar8 = 0;
  local_178 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b0 = 0x18e;
  if (puVar3 != &local_148) {
    local_1d8 = *puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    FUN_140041b80(&local_148,&local_1d8);
  }
  local_b0 = 400;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0;
  local_b0 = 0x1a1;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar1 = FUN_140e4a740(puVar4);
  puVar4 = (undefined8 *)FUN_140ec6010(&local_1b8,uVar1,0);
  if (puVar4 != &local_168) {
    local_1d8 = *puVar4;
    uStack_1d0 = *(undefined4 *)(puVar4 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_1d8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((param_4 < 1) || (puVar3 = (undefined8 *)*param_5, puVar3 != &local_138)) {
    local_1d8 = *puVar3;
    uStack_1d0 = *(undefined4 *)(puVar3 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1d8);
  }
  local_a8 = &local_138;
  local_1d8 = CONCAT44(uRam0000000141dc6524,_DAT_141dc6520);
  uStack_1d0 = uRam0000000141dc6528;
  uStack_1cc = uRam0000000141dc652c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1d8);
  local_a0 = &local_128;
  ppuVar12 = &local_a8;
  uVar10 = CONCAT44(uVar2,DAT_141a04898);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar10,ppuVar12);
  if (plVar5 == &local_178) {
    uVar7 = local_e8;
  }
  else {
    local_1d8 = *plVar5;
    uStack_1d0 = (undefined4)plVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_178,&local_1d8);
    lVar8 = local_178;
    uVar7 = uStack_16c;
  }
  local_b0 = 0x1a3;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar2 = FUN_140e4a740(&local_158);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_141a08768,uVar2,&local_58,uVar10,
                (ulonglong)ppuVar12 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar10 >> 0x20);
  local_1d8 = local_58;
  uStack_1d0 = uStack_50;
  uStack_1cc = uStack_4c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  local_a8 = &local_138;
  local_a0 = &local_168;
  uVar11 = CONCAT44(uVar2,DAT_1419f5468);
  FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar11,&local_a8);
  uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_b0 = 0x1a5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  local_a8 = &local_168;
  uVar11 = CONCAT44(uVar2,DAT_141a04658);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar11,&local_a8);
  uVar2 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (plVar5 != &local_188) {
    local_1d8 = *plVar5;
    uStack_1d0 = (undefined4)plVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  local_a0 = &local_168;
  ppuVar12 = &local_a0;
  uVar10 = CONCAT44(uVar2,DAT_141a04668);
  plVar5 = (longlong *)FUN_140e634e0(param_1,param_2,&local_1a8,1,uVar10,ppuVar12);
  if (plVar5 != &local_198) {
    local_1d8 = *plVar5;
    uStack_1d0 = (undefined4)plVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1d8);
  }
  uStack_1bc = local_17c;
  uStack_1c0 = local_180;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_188;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_188);
  }
  uStack_1cc = 0;
  local_1d8 = 0x3fe0000000000000;
  FUN_140042560(&local_1c8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  uStack_1bc = local_18c;
  uStack_1c0 = local_190;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
    local_1c8 = local_198;
  }
  else {
    FUN_1400419b0(&local_1c8,&local_198);
  }
  uStack_1cc = 0;
  local_1d8 = 0x3fe0000000000000;
  FUN_140042560(&local_1c8,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  FUN_140041b80(&local_e0,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_b0 = 0x1aa;
  uVar2 = FUN_140e4a740(&local_158);
  uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_148,DAT_1419f5028,uVar2,&local_68,uVar10,uVar13);
  local_1d8 = local_68;
  uStack_1d0 = uStack_60;
  uStack_1cc = uStack_5c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  local_a8 = &local_138;
  local_a0 = &local_188;
  local_98 = &local_198;
  FUN_140ec9ea0(3,&local_a8);
  local_b0 = 0x1ab;
  uVar2 = FUN_140e4a740(&local_158);
  FUN_140e87440(&local_148,DAT_1419f4f88,uVar2,&local_78,uVar10 & 0xffffffffffffff00,
                uVar13 & 0xffffffffffffff00);
  local_1d8 = local_78;
  uStack_1d0 = uStack_70;
  uStack_1cc = uStack_6c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1d8);
  local_a8 = &local_138;
  plVar5 = (longlong *)0x0;
  uVar9 = uVar7 & 0xffffff;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
    }
    else {
      plVar5 = *(longlong **)(lVar8 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_178;
  }
  uStack_1bc = *(undefined4 *)((longlong)plVar5 + 0xc);
  uStack_1c0 = (undefined4)plVar5[1];
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *plVar5;
  }
  else {
    FUN_1400419b0(&local_1c8,plVar5);
  }
  FUN_1400460e0(&local_1c8,&local_d0);
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_a0 = &local_128;
  plVar5 = (longlong *)0x0;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 2) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x10);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_178;
  }
  uStack_1bc = *(undefined4 *)((longlong)plVar5 + 0xc);
  uStack_1c0 = (undefined4)plVar5[1];
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
    local_1c8 = *plVar5;
  }
  else {
    FUN_1400419b0(&local_1c8,plVar5);
  }
  FUN_1400460e0(&local_1c8,&local_e0);
  local_1d8 = local_1c8;
  uStack_1d0 = uStack_1c0;
  uStack_1cc = uStack_1bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1d8);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_98 = (longlong *)local_118;
  plVar5 = (longlong *)0x0;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 3) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",2);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x20);
    }
    if (plVar5 != &local_108) goto LAB_1403b336e;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar5 = &local_178;
LAB_1403b336e:
    local_1d8 = *plVar5;
    uStack_1d0 = (undefined4)plVar5[1];
    uStack_1cc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1d8);
  }
  local_90 = &local_108;
  if ((uVar9 == 2) && (lVar8 != 0)) {
    if (*(int *)(lVar8 + 0x24) < 4) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",3);
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(lVar8 + 8) + 0x30);
    }
    if (plVar6 == &local_f8) goto LAB_1403b341b;
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar6 = &local_178;
  }
  local_1d8 = *plVar6;
  uStack_1d0 = (undefined4)plVar6[1];
  uStack_1cc = *(undefined4 *)((longlong)plVar6 + 0xc);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1d8);
LAB_1403b341b:
  local_88 = &local_f8;
  FUN_140ec9ea0(5,&local_a8);
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return param_3;
}


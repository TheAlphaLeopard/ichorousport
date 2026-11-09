// gml_Object_oSparkParticle_Draw_0 @ 0x140d91120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSparkParticle_Draw_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  code *pcVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe20;
  longlong ***ppplVar14;
  longlong *local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  longlong *plStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  byte local_13c;
  longlong *local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  longlong local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 local_bc;
  longlong **local_b8;
  longlong **local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_190 = "gml_Object_oSparkParticle_Step_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,6,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  pplVar4 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a00f88);
  local_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_188 = 1;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar5);
  }
  FUN_140042560(&local_1a8,uVar3);
  FUN_1400460e0(uVar6,&local_1a8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_188 = 3;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_158,uVar12,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar5);
  }
  FUN_140042560(&local_1d8,uVar3);
  uStack_19c = uStack_14c;
  uStack_1a0 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_158;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_158);
  }
  FUN_1400460e0(&local_1a8,&local_1d8);
  plStack_1c0 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
  local_1c8 = local_1a8;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1c8);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 4;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_1cc = 6;
  in_stack_fffffffffffffe20 = in_stack_fffffffffffffe20 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_168,uVar12,in_stack_fffffffffffffe20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar5);
  }
  FUN_140042560(&local_1a8,uVar3);
  uStack_1cc = uStack_15c;
  uStack_1d0 = uStack_160;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_1d8 = local_168;
  }
  else {
    FUN_1400419b0(&local_1d8,&local_168);
  }
  FUN_1400460e0(&local_1d8,&local_1a8);
  plStack_1c0 = (longlong *)CONCAT44(uStack_1cc,uStack_1d0);
  local_1c8 = local_1d8;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_1c8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_188 = 6;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uStack_1cc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_168,uVar12,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_b8 = &local_d8;
  plStack_1c0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
  local_1c8 = local_168;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
  local_b0 = &local_138;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  plStack_1c0 = (longlong *)CONCAT44(0xf,uStack_1d0);
  local_1c8 = (longlong *)0x100000000000149;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
  local_a8 = &local_128;
  local_1c8 = _DAT_1419df7a0;
  plStack_1c0 = (longlong *)uRam00000001419df7a8;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1c8);
  local_a0 = &local_118;
  local_1c8 = _DAT_1419df7c0;
  plStack_1c0 = (longlong *)uRam00000001419df7c8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  ppplVar14 = &local_b8;
  uVar12 = CONCAT44(uVar13,DAT_1419f70b8);
  local_98 = local_108;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,5,uVar12,ppplVar14);
  if (puVar5 != &local_78) {
    local_1c8 = (longlong *)*puVar5;
    plStack_1c0 = (longlong *)puVar5[1];
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_1c8);
  }
  local_188 = 7;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uStack_1cc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_158,uVar12,
                (ulonglong)ppplVar14 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  plStack_1c0 = (longlong *)CONCAT44(uStack_14c,uStack_150);
  local_1c8 = local_158;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_1c8);
  local_b8 = &local_148;
  local_b0 = &local_e8;
  uStack_1cc = 0xf;
  local_1d8 = (longlong *)0x100000000000149;
  plStack_1c0 = (longlong *)CONCAT44(0xf,uStack_1d0);
  local_1c8 = (longlong *)0x100000000000149;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
  local_a8 = &local_128;
  local_1c8 = _DAT_1419df7a0;
  plStack_1c0 = (longlong *)uRam00000001419df7a8;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_1c8);
  local_a0 = &local_118;
  local_1c8 = _DAT_1419df7c0;
  plStack_1c0 = (longlong *)uRam00000001419df7c8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  ppplVar14 = &local_b8;
  uVar12 = CONCAT44(uVar13,DAT_1419f70b8);
  local_98 = local_108;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,5,uVar12,ppplVar14);
  if (puVar5 != &local_88) {
    local_1c8 = (longlong *)*puVar5;
    plStack_1c0 = (longlong *)puVar5[1];
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_1c8);
  }
  local_188 = 9;
  cVar1 = FUN_140e491e0(&local_78);
  if (cVar1 != '\0') {
    local_188 = 0xb;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f28);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    FUN_140e609c0(param_1);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar10 = *puVar7;
    }
    else {
      uVar10 = FUN_140e4b060(puVar7);
    }
    uStack_1cc = 0;
    local_1d8 = (longlong *)(uVar10 ^ 0x8000000000000000);
    FUN_140042560(uVar6,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(1);
    local_188 = 0xc;
    uStack_1cc = 6;
    ppplVar14 = (longlong ***)((ulonglong)ppplVar14 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_158,uVar12,ppplVar14);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    plStack_1c0 = (longlong *)CONCAT44(uStack_14c,uStack_150);
    local_1c8 = local_158;
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1c8);
  }
  local_188 = 0xf;
  cVar1 = FUN_140e491e0(&local_88);
  if (cVar1 != '\0') {
    local_188 = 0x11;
    puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f28);
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    FUN_140e609c0(param_1);
    if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
      uVar10 = *puVar7;
    }
    else {
      uVar10 = FUN_140e4b060(puVar7);
    }
    uStack_1cc = 0;
    local_1d8 = (longlong *)(uVar10 ^ 0x8000000000000000);
    FUN_140042560(uVar6,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140e60910(1);
    local_188 = 0x12;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x3fe999999999999a;
    FUN_140042560(uVar6,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_188 = 0x13;
    uStack_1cc = 6;
    ppplVar14 = (longlong ***)((ulonglong)ppplVar14 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_168,uVar12,ppplVar14);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    plStack_1c0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
    local_1c8 = local_168;
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1c8);
  }
  local_188 = 0x16;
  plStack_1c0 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
  local_1c8 = local_d8;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_1c8);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  local_188 = 0x17;
  plStack_1c0 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
  local_1c8 = local_e8;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_1c8);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_188 = 0x19;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
  uStack_1cc = 6;
  uVar10 = (ulonglong)ppplVar14 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_158,uVar12,uVar10);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  uStack_1cc = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_1d8 = param_1;
  FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_168,uVar12,uVar10 & 0xffffffffffffff00);
  uVar13 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1a8,gml_Object_oSpawnPoint_Create_0,0);
  if (&local_1a8 != pplVar4) {
    plStack_1c0 = (longlong *)CONCAT44(uStack_19c,uStack_1a0);
    local_1c8 = local_1a8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_1c8);
  }
  FUN_140e60910(1);
  if (pplVar4 != &local_148) {
    local_1c8 = *pplVar4;
    plStack_1c0 = pplVar4[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_b8 = &local_148;
  plStack_1c0 = (longlong *)CONCAT44(uStack_14c,uStack_150);
  local_1c8 = local_158;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
  local_b0 = &local_138;
  plStack_1c0 = (longlong *)CONCAT44(uStack_15c,uStack_160);
  local_1c8 = local_168;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
  local_a8 = &local_128;
  if (plVar8 != &local_118) {
    local_1c8 = (longlong *)*plVar8;
    plStack_1c0 = (longlong *)plVar8[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1c8);
  }
  local_a0 = &local_118;
  local_1c8 = _DAT_141dc7750;
  plStack_1c0 = plRam0000000141dc7758;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1c8);
  uVar6 = CONCAT44(uVar13,DAT_1419fd6d8);
  local_98 = local_108;
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_180,3,uVar6,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar5 != &local_f8) {
    local_1c8 = (longlong *)*puVar5;
    plStack_1c0 = (longlong *)puVar5[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
  }
  local_90 = &local_f8;
  uVar6 = CONCAT44(uVar13,DAT_1419fe1d8);
  FUN_140e634e0(param_1,param_2,&local_1b8,3,uVar6,&local_a0);
  uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_188 = 0x1b;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f48);
  uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a00f38);
  uStack_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_1d0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar5);
  }
  FUN_140042560(&local_1d8,uVar3);
  FUN_1400462a0(uVar6,&local_1d8);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_188 = 0x1c;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f38);
  if (pplVar4 != &local_148) {
    local_1c8 = *pplVar4;
    plStack_1c0 = pplVar4[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  local_b8 = &local_148;
  local_1c8 = _DAT_141dc7750;
  plStack_1c0 = plRam0000000141dc7758;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1c8);
  local_b0 = &local_138;
  uVar3 = CONCAT44(uVar13,DAT_1419fe728);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_180,1,uVar3,&local_b8);
  uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar5 != &local_128) {
    local_1c8 = (longlong *)*puVar5;
    plStack_1c0 = (longlong *)puVar5[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1c8);
  }
  local_a8 = &local_128;
  puVar5 = (undefined8 *)FUN_140e79090(&local_1b8,2,&local_b0);
  if ((longlong **)puVar5 != &local_c8) {
    local_1c8 = (longlong *)*puVar5;
    plStack_1c0 = (longlong *)puVar5[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1c8);
  }
  local_188 = 0x1d;
  iVar2 = 0;
  if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
    iVar2 = *(int *)(*plVar8 + 0x24);
  }
  uStack_1cc = 0;
  local_1d8 = (longlong *)(double)iVar2;
  iVar2 = FUN_140e851f0(&local_1d8,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (0 < iVar2) {
    local_188 = 0x1e;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    pplVar9 = (longlong **)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
    if (pplVar9 != &local_148) {
      local_1c8 = *pplVar9;
      plStack_1c0 = pplVar9[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1c8);
    }
    local_b8 = &local_148;
    local_b0 = &local_c8;
    FUN_140e634e0(param_1,param_2,&local_1b8,2,CONCAT44(uVar13,DAT_1419fee68),&local_b8);
  }
  local_188 = 0x20;
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(pplVar4,&local_1d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    local_188 = 0x21;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a00f38);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}


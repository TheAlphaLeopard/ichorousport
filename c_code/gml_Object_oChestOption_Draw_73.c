// gml_Object_oChestOption_Draw_73 @ 0x1408a47c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oChestOption_Draw_73(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  ulonglong uVar12;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  double local_138;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  longlong *local_118;
  undefined4 local_110;
  uint local_10c;
  longlong *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_d8 = "gml_Object_oChestOption_Step_0";
  local_d0 = 0;
  local_e0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e0;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_d0 = 2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar3;
  }
  else {
    uVar9 = FUN_140e4b060(puVar3);
  }
  dVar1 = (double)FUN_140e78d00(uVar9);
  if (dVar1 - 0.2 < -DAT_141955260) {
    local_d0 = 4;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
    uStack_15c = 6;
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    local_168 = param_1;
    FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_108,uVar12,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (puVar4 != &local_148) {
      local_178 = (longlong *)*puVar4;
      uStack_170 = *(undefined4 *)(puVar4 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    local_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_c0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_c8 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_c8,puVar5);
    }
    uStack_16c = 7;
    local_178 = (longlong *)CONCAT44(local_178._4_4_,0x14);
    FUN_1400460e0(&local_c8,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_15c = local_bc;
    uStack_160 = local_c0;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
      local_168 = local_c8;
    }
    else {
      FUN_1400419b0(&local_168,&local_c8);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0xbf947ae147ae147b;
    FUN_140042560(&local_168,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_10c = local_fc;
    local_110 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_118 = local_108;
    }
    else {
      FUN_1400419b0(&local_118,&local_108);
    }
    FUN_1400460e0(&local_118,&local_168);
    if ((local_10c & 0xffffff) == 0) {
      uVar10 = SUB84(local_118,0);
    }
    else {
      uVar10 = FUN_140e4b060(&local_118);
    }
    local_138 = (double)thunk_FUN_1412aae80(uVar10);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419e9564,_DAT_1419e9560);
    uStack_170 = uRam00000001419e9568;
    uStack_16c = uRam00000001419e956c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    ppuVar13 = &local_f8;
    uVar12 = CONCAT44(uVar9,DAT_141a00c58);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar12,ppuVar13);
    if (puVar7 != puVar6) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
    uStack_16c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_108,uVar12,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (puVar6 != &local_148) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = *(undefined4 *)(puVar6 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_168,puVar5);
    }
    uStack_16c = 0;
    local_178 = (longlong *)0xbf947ae147ae147b;
    FUN_140042560(&local_168,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_10c = local_fc;
    local_110 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_118 = local_108;
    }
    else {
      FUN_1400419b0(&local_118,&local_108);
    }
    FUN_1400460e0(&local_118,&local_168);
    if ((local_10c & 0xffffff) == 0) {
      uVar10 = SUB84(local_118,0);
    }
    else {
      uVar10 = FUN_140e4b060(&local_118);
    }
    dVar1 = (double)thunk_FUN_1412ac390(uVar10);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = dVar1 * 3.0;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419e9564,_DAT_1419e9560);
    uStack_170 = uRam00000001419e9568;
    uStack_16c = uRam00000001419e956c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    ppuVar13 = &local_f8;
    uVar12 = CONCAT44(uVar9,DAT_141a00c58);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar12,ppuVar13);
    if (puVar5 != puVar7) {
      local_178 = (longlong *)*puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 7;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    uStack_16c = 6;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_108,uVar12,uVar14);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_15c = local_fc;
    uStack_160 = local_100;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
      local_168 = local_108;
    }
    else {
      FUN_1400419b0(&local_168,&local_108);
    }
    FUN_1400460e0(&local_168,puVar4);
    local_178 = local_168;
    uStack_170 = uStack_160;
    uStack_16c = uStack_15c;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_178);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
    FUN_140e86c30(uVar8,DAT_1419fe0e8,0x80000000,&local_88);
    local_d0 = 8;
    uStack_16c = 6;
    pcVar11 = (code *)(uVar12 & 0xffffffffffffff00);
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_a8,pcVar11,uVar14 & 0xffffffffffffff00)
    ;
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_15c = local_9c;
    uStack_160 = local_a0;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
      local_168 = local_a8;
    }
    else {
      FUN_1400419b0(&local_168,&local_a8);
    }
    FUN_1400460e0(&local_168,puVar6);
    local_178 = local_168;
    uStack_170 = uStack_160;
    uStack_16c = uStack_15c;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    FUN_140e86c30(uVar8,DAT_1419fe158,0x80000000,&local_98);
    local_d0 = 10;
    uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a065f8);
    FUN_140046040(uVar8);
  }
  uVar9 = (undefined4)((ulonglong)pcVar11 >> 0x20);
  local_d0 = 0xe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar3 != &local_148) {
    local_178 = (longlong *)*puVar3;
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_f8 = &local_148;
  local_178 = (longlong *)CONCAT44(uRam0000000141dc6c24,_DAT_141dc6c20);
  uStack_170 = uRam0000000141dc6c28;
  uStack_16c = uRam0000000141dc6c2c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_f0 = &local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9564,_DAT_1419e9560);
  uStack_170 = uRam00000001419e9568;
  uStack_16c = uRam00000001419e956c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_e8 = local_128;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,&local_f8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar5 != puVar4) {
    local_178 = (longlong *)*puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_178);
  }
  FUN_140e60910(1);
  local_d0 = 0xf;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if (puVar4 != &local_148) {
    local_178 = (longlong *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_f8 = &local_148;
  local_178 = (longlong *)CONCAT44(uRam0000000141dc6c24,_DAT_141dc6c20);
  uStack_170 = uRam0000000141dc6c28;
  uStack_16c = uRam0000000141dc6c2c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_f0 = &local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9564,_DAT_1419e9560);
  uStack_170 = uRam00000001419e9568;
  uStack_16c = uRam00000001419e956c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_e8 = local_128;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_141a00c58);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,&local_f8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar6 != puVar5) {
    local_178 = (longlong *)*puVar6;
    uStack_170 = *(undefined4 *)(puVar6 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_178);
  }
  FUN_140e60910(1);
  local_d0 = 0x11;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if (puVar5 != &local_148) {
    local_178 = (longlong *)*puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_f8 = &local_148;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9584,_DAT_1419e9580);
  uStack_170 = uRam00000001419e9588;
  uStack_16c = uRam00000001419e958c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_f0 = &local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9574,_DAT_1419e9570);
  uStack_170 = uRam00000001419e9578;
  uStack_16c = uRam00000001419e957c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_e8 = local_128;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar8,&local_f8);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar5 != puVar6) {
    local_178 = (longlong *)*puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_178);
  }
  FUN_140e60910(1);
  local_d0 = 0x12;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if (puVar5 != &local_148) {
    local_178 = (longlong *)*puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  local_f8 = &local_148;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9584,_DAT_1419e9580);
  uStack_170 = uRam00000001419e9588;
  uStack_16c = uRam00000001419e958c;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
  local_f0 = &local_138;
  local_178 = (longlong *)CONCAT44(uRam00000001419e9574,_DAT_1419e9570);
  uStack_170 = uRam00000001419e9578;
  uStack_16c = uRam00000001419e957c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_178);
  local_e8 = local_128;
  FUN_140e609c0(param_1);
  ppuVar13 = &local_f8;
  uVar12 = CONCAT44(uVar9,DAT_141a00c58);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar12,ppuVar13);
  if (puVar5 != puVar6) {
    local_178 = (longlong *)*puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_178);
  }
  FUN_140e60910(1);
  local_d0 = 0x14;
  uStack_16c = 6;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_68,uVar12,uVar14);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_160 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_168,puVar3);
  }
  FUN_140042560(&local_168,uVar2);
  FUN_1400460e0(&local_68,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_68);
  local_d0 = 0x15;
  uStack_16c = 6;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_78,uVar12 & 0xffffffffffffff00,
                uVar14 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_15c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_160 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_168 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_168,puVar4);
  }
  FUN_140042560(&local_168,uVar2);
  FUN_1400460e0(&local_78,&local_168);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_78);
  local_d0 = 0x17;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
  uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  puVar3 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_158,0,uVar2,0);
  if (puVar3 != &local_b8) {
    local_178 = (longlong *)*puVar3;
    uStack_170 = *(undefined4 *)(puVar3 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  FUN_140e87930(uVar8,DAT_141a0d3e8,0x80000000,&local_b8);
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e0;
  return;
}


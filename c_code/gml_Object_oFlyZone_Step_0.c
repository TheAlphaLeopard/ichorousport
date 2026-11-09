// gml_Object_oFlyZone_Step_0 @ 0x140ae1f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oFlyZone_Step_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  double *pdVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 **ppuVar20;
  undefined8 **in_stack_fffffffffffffe60;
  ulonglong uVar21;
  undefined8 local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  
  local_130 = "gml_Object_oFlyWing_Step_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  _eh_vector_constructor_iterator_(&local_168,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_dc = 0xffffff;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0;
  uStack_bc = 0xffffff;
  local_c8 = (longlong *)0x0;
  uStack_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_128 = 2;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e08);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2e08);
  if (puVar7 != &local_168) {
    local_198 = (longlong *)*puVar7;
    uStack_190 = *(undefined4 *)(puVar7 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
  }
  local_108 = &local_168;
  local_198 = (longlong *)CONCAT44(uRam00000001419eb6b4,_DAT_1419eb6b0);
  uStack_190 = uRam00000001419eb6b8;
  uStack_18c = uRam00000001419eb6bc;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_198);
  local_100 = local_158;
  uStack_18c = 0;
  local_198 = (longlong *)0x3fb47ae147ae147b;
  FUN_140042560(&local_198,uVar6);
  local_188 = local_198;
  uStack_180 = uStack_190;
  uStack_17c = uStack_18c;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_188);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_f8 = local_148;
  FUN_140e609c0(param_1);
  ppuVar20 = &local_108;
  puVar9 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_178,3,ppuVar20);
  uVar18 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
  if (puVar9 != puVar8) {
    local_198 = (longlong *)*puVar9;
    uStack_190 = *(undefined4 *)(puVar9 + 1);
    uStack_18c = *(uint *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_198);
  }
  FUN_140e60910(1);
  local_128 = 4;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09338);
  cVar4 = FUN_140e491e0(uVar10);
  if (cVar4 == '\0') {
    local_128 = 6;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e38);
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0bf8);
    uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_180 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_188,puVar8);
    }
    FUN_140042560(&local_188,uVar6);
    FUN_1400460e0(uVar10,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_128 = 8;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0bf8);
    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
      uVar17 = (undefined4)*puVar9;
    }
    else {
      uVar17 = FUN_140e4b060(puVar9);
    }
    uVar10 = thunk_FUN_1412ac390(uVar17);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uStack_dc = 0;
    local_128 = 9;
    local_e8 = uVar10;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    FUN_140e609c0(param_1);
    if (&local_e8 != puVar9) {
      local_198 = (longlong *)local_e8;
      uStack_190 = uStack_e0;
      uStack_18c = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_198);
    }
    FUN_140e60910(1);
    local_128 = 10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    if (puVar8 != &local_168) {
      local_198 = (longlong *)*puVar8;
      uStack_190 = *(undefined4 *)(puVar8 + 1);
      uStack_18c = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_108 = &local_168;
    if ((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 0) {
      uVar17 = (undefined4)*puVar9;
    }
    else {
      uVar17 = FUN_140e4b060(puVar9);
    }
    ppuVar20 = &local_108;
    uVar19 = CONCAT44(uVar18,DAT_1419f2e48);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar19,ppuVar20);
    local_188 = (longlong *)FUN_140e79500(uVar17);
    uStack_17c = 0;
    FUN_140042560(&local_188,uVar11);
    uStack_18c = uStack_17c;
    uStack_190 = uStack_180;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_198 = local_188;
    }
    else {
      FUN_1400419b0(&local_198,&local_188);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400462a0(uVar10,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_128 = 0xc;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_198,puVar8);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400460e0(puVar9,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_128 = 0xd;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar12 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e28);
    if ((uStack_dc & 0xffffff) == 0) {
      uVar18 = (undefined4)local_e8;
    }
    else {
      uVar18 = FUN_140e4b060(&local_e8);
    }
    dVar1 = (double)FUN_140e78d00(uVar18);
    uStack_17c = *(uint *)((longlong)puVar12 + 0xc);
    uStack_180 = *(undefined4 *)(puVar12 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = (longlong *)*puVar12;
    }
    else {
      FUN_1400419b0(&local_188,puVar12);
    }
    uStack_18c = 0;
    local_198 = (longlong *)((dVar1 + 1.0) * 0.5);
    FUN_140042560(&local_188,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uVar10 = local_188;
    if ((uStack_17c & 0xffffff) != 0) {
      uVar10 = FUN_140e4b060(&local_188);
    }
    if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
      uVar18 = (undefined4)*puVar8;
    }
    else {
      uVar18 = FUN_140e4b060(puVar8);
    }
    uVar10 = FUN_140e78ec0(uVar18,0xc008000000000000,uVar10);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = uVar10;
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_128 = 0xf;
    pdVar13 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2e18);
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
    uStack_18c = *(undefined4 *)((longlong)pdVar13 + 0xc);
    uStack_190 = *(undefined4 *)(pdVar13 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = (longlong *)*pdVar13;
    }
    else {
      FUN_1400419b0(&local_198,pdVar13);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400462a0(uVar10,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_128 = 0x11;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uStack_18c = 6;
    uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_c8,uVar19,uVar21);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_d8,uVar19,uVar21 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar19 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = local_c8;
    uStack_190 = uStack_c0;
    uStack_18c = uStack_bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_198);
    local_108 = &local_168;
    uStack_18c = uStack_cc;
    uStack_190 = uStack_d0;
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
      local_198 = local_d8;
    }
    else {
      FUN_1400419b0(&local_198,&local_d8);
    }
    uStack_17c = 7;
    local_188 = (longlong *)CONCAT44(local_188._4_4_,1);
    FUN_1400460e0(&local_198,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = local_198;
    uStack_180 = uStack_190;
    uStack_17c = uStack_18c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_188);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_100 = local_158;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x100000000000149;
    local_188 = (longlong *)0x100000000000149;
    uStack_180 = uStack_190;
    uStack_17c = 0xf;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_188);
    local_f8 = local_148;
    in_stack_fffffffffffffe60 = &local_108;
    ppuVar20 = (undefined8 **)CONCAT44(uVar18,DAT_141a12628);
    uVar10 = FUN_140e634e0(param_1,param_2,&local_178,3,ppuVar20,in_stack_fffffffffffffe60);
    cVar4 = FUN_140e491e0(uVar10);
    if (cVar4 != '\0') {
      local_128 = 0x13;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f2e38);
      (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09338);
      uStack_18c = 0xd;
      local_198 = (longlong *)0x3ff0000000000000;
      if (&local_198 != puVar8) {
        local_188 = (longlong *)0x3ff0000000000000;
        uStack_180 = uStack_190;
        uStack_17c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_188);
      }
      local_128 = 0x14;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0;
      local_128 = 0x15;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0;
      local_128 = 0x16;
      uStack_18c = 6;
      in_stack_fffffffffffffe60 =
           (undefined8 **)((ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00);
      ppuVar20 = (undefined8 **)((ulonglong)ppuVar20 & 0xffffffffffffff00);
      local_198 = param_1;
      FUN_140e87440(&local_198,DAT_141a0a728,0x80000000,&local_88,ppuVar20,in_stack_fffffffffffffe60
                   );
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      uStack_18c = 0xf;
      local_198 = (longlong *)0x10000010000013c;
      iVar5 = FUN_140e851f0(&local_88,&local_198,DAT_141955260,0);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if (iVar5 == 0) {
        local_128 = 0x17;
        uStack_18c = 0xf;
        local_198 = (longlong *)0x10000010000013d;
        local_188 = (longlong *)0x10000010000013d;
        uStack_180 = uStack_190;
        uStack_17c = 0xf;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_188);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b8);
      }
    }
  }
  else {
    local_128 = 0x1c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar8 != &local_168) {
      local_198 = (longlong *)*puVar8;
      uStack_190 = *(undefined4 *)(puVar8 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_108 = &local_168;
    local_198 = (longlong *)CONCAT44(uRam0000000141dc70b4,_DAT_141dc70b0);
    uStack_190 = uRam0000000141dc70b8;
    uStack_18c = uRam0000000141dc70bc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_198);
    local_100 = local_158;
    uStack_18c = 0;
    local_198 = (longlong *)0x3fa999999999999a;
    FUN_140042560(&local_198,uVar6);
    local_188 = local_198;
    uStack_180 = uStack_190;
    uStack_17c = uStack_18c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_188);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_f8 = local_148;
    FUN_140e609c0(param_1);
    puVar8 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_178,3,&local_108);
    if (puVar8 != puVar9) {
      local_198 = (longlong *)*puVar8;
      uStack_190 = *(undefined4 *)(puVar8 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_198);
    }
    FUN_140e60910(1);
    local_128 = 0x1d;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar14 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    if (puVar8 != &local_168) {
      local_198 = (longlong *)*puVar8;
      uStack_190 = *(undefined4 *)(puVar8 + 1);
      uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_198);
    }
    local_108 = &local_168;
    uStack_18c = 0;
    local_198 = (longlong *)0x0;
    iVar5 = FUN_140e851f0(puVar8,&local_198,DAT_141955260,1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    bVar16 = iVar5 == -2 || -1 < iVar5;
    if (bVar16) {
      uStack_18c = 0;
      local_198 = (longlong *)0x3ff0000000000000;
      puVar8 = &local_198;
    }
    else {
      uStack_17c = 0;
      local_188 = (longlong *)&DAT_bff0000000000000;
      puVar8 = &local_188;
    }
    uVar3 = uStack_17c;
    uVar2 = uStack_18c;
    local_118 = *(undefined4 *)puVar8;
    uStack_114 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_110 = *(undefined4 *)(puVar8 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_118);
    if ((bVar16) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_198);
    }
    if ((iVar5 != -2 && -1 >= iVar5) && ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_188);
    }
    local_100 = local_158;
    uStack_18c = 0;
    local_198 = (longlong *)0x3fc3333333333333;
    FUN_140042560(&local_198,uVar6);
    local_118 = (undefined4)local_198;
    uStack_114 = local_198._4_4_;
    uStack_110 = uStack_190;
    uStack_10c = uStack_18c;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_118);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_f8 = local_148;
    FUN_140e609c0(param_1);
    ppuVar20 = &local_108;
    puVar15 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_178,3,ppuVar20);
    if (puVar15 != puVar14) {
      local_118 = *puVar15;
      uStack_114 = puVar15[1];
      uStack_110 = puVar15[2];
      uStack_10c = puVar15[3];
      if ((1 << ((byte)puVar14[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar14);
      }
      FUN_140041b80(puVar14,&local_118);
    }
    FUN_140e60910(1);
    local_128 = 0x1e;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2df8);
    uVar10 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5838);
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_198,puVar8);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400462a0(uVar10,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
  }
  local_128 = 0x21;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5838);
  uStack_18c = 0;
  local_198 = (longlong *)0x0;
  iVar5 = FUN_140e851f0(uVar10,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (iVar5 == -2 || 0 < iVar5) {
    local_128 = 0x27;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    uStack_18c = 6;
    uVar21 = (ulonglong)in_stack_fffffffffffffe60 & 0xffffffffffffff00;
    uVar19 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_c8,uVar19,uVar21);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = 6;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_d8,uVar19,uVar21 & 0xffffffffffffff00);
    uVar18 = (undefined4)(uVar19 >> 0x20);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_17c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_180 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_188,puVar8);
    }
    FUN_140042560(&local_188,uVar6);
    uStack_18c = uStack_bc;
    uStack_190 = uStack_c0;
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) == 0) {
      local_198 = local_c8;
    }
    else {
      FUN_1400419b0(&local_198,&local_c8);
    }
    FUN_1400460e0(&local_198,&local_188);
    local_118 = (undefined4)local_198;
    uStack_114 = local_198._4_4_;
    uStack_110 = uStack_190;
    uStack_10c = uStack_18c;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_118);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_108 = &local_168;
    local_118 = (undefined4)local_d8;
    uStack_114 = local_d8._4_4_;
    uStack_110 = uStack_d0;
    uStack_10c = uStack_cc;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_118);
    local_100 = local_158;
    uStack_18c = 0xf;
    local_198 = (longlong *)0x100000000000149;
    local_118 = 0x149;
    uStack_114 = 0x1000000;
    uStack_110 = uStack_190;
    uStack_10c = 0xf;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_118);
    local_f8 = local_148;
    ppuVar20 = &local_108;
    uVar19 = CONCAT44(uVar18,DAT_141a12628);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_178,3,uVar19,ppuVar20);
    cVar4 = FUN_140e491e0(uVar11);
    if (cVar4 != '\0') {
      local_128 = 0x28;
      uVar11 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
      uStack_18c = 0;
      local_198 = (longlong *)&DAT_bff0000000000000;
      FUN_140042560(uVar11,&local_198);
      if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
    }
    local_128 = 0x2a;
    uStack_18c = 6;
    uVar21 = (ulonglong)ppuVar20 & 0xffffffffffffff00;
    uVar19 = uVar19 & 0xffffffffffffff00;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_98,uVar19,uVar21);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_198,puVar8);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400460e0(&local_98,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
    local_128 = 0x2b;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_18c = 6;
    local_198 = param_1;
    FUN_140e87440(&local_198,DAT_1419fe158,0x80000000,&local_a8,uVar19 & 0xffffffffffffff00,
                  uVar21 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    uStack_18c = *(undefined4 *)((longlong)puVar8 + 0xc);
    uStack_190 = *(undefined4 *)(puVar8 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = (longlong *)*puVar8;
    }
    else {
      FUN_1400419b0(&local_198,puVar8);
    }
    FUN_140042560(&local_198,uVar6);
    FUN_1400460e0(&local_a8,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
    local_128 = 0x2d;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
    FUN_140e609c0(param_1);
    uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_180 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
      local_188 = (longlong *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_188,puVar7);
    }
    FUN_140042560(&local_188,uVar10);
    if (&local_188 != puVar8) {
      local_118 = (undefined4)local_188;
      uStack_114 = local_188._4_4_;
      uStack_110 = uStack_180;
      uStack_10c = uStack_17c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_118);
    }
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140e60910(1);
    local_128 = 0x2e;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bc8);
    FUN_140e609c0(param_1);
    if (puVar7 != puVar8) {
      local_118 = *(undefined4 *)puVar7;
      uStack_114 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_110 = *(undefined4 *)(puVar7 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_118);
    }
    FUN_140e60910(1);
  }
  else {
    local_128 = 0x23;
    FUN_140edd0e0(param_1,param_2,0,0);
    local_128 = 0x24;
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}


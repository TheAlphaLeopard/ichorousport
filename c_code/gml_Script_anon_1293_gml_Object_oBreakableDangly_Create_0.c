// gml_Script_anon_1293_gml_Object_oBreakableDangly_Create_0 @ 0x140856190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_1293_gml_Object_oBreakableDangly_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar16;
  double dVar15;
  code *pcVar17;
  ulonglong uVar18;
  ulonglong in_stack_fffffffffffffde0;
  undefined8 **ppuVar19;
  ulonglong uVar20;
  longlong *local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  double local_1d8;
  uint local_1cc;
  undefined8 local_1c8;
  char *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  byte local_19c;
  ulonglong local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 *local_148;
  ulonglong *local_140;
  undefined8 *local_138;
  undefined1 *local_130;
  longlong *local_128;
  undefined4 local_120;
  uint local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_1c0 = "gml_Object_oBreakableDangly_Create_0";
  local_1b8 = 0;
  local_1c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c8;
  pcVar17 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef618);
  local_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_1b8 = 3;
  FUN_140e98b30(param_1,param_2);
  local_1b8 = 5;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3c8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_218,gml_Object_oBreakableDangly_Alarm_2,0);
  if (&local_218 != pplVar6) {
    local_208 = local_218;
    uStack_200 = uStack_210;
    uStack_1fc = uStack_20c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_208);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_1b8 = 0xb;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08dd8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_1b8 = 0xc;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3b8);
  FUN_140e609c0(param_1);
  puVar8 = (undefined8 *)FUN_140e8da20(&local_78,param_1,0);
  if (puVar8 != puVar7) {
    local_208 = (longlong *)*puVar8;
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0xe;
  uStack_20c = 6;
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar18 = (ulonglong)pcVar17 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_a8,uVar18,in_stack_fffffffffffffde0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140162d40(&local_a8,6);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  local_1b8 = 0x10;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a368);
  uStack_20c = 6;
  in_stack_fffffffffffffde0 = in_stack_fffffffffffffde0 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_158,uVar18,in_stack_fffffffffffffde0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140e609c0(param_1);
  if (&local_158 != pplVar6) {
    local_208 = local_158;
    uStack_200 = uStack_150;
    uStack_1fc = uStack_14c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0x11;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a398);
  uStack_20c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_168,uVar18,
                in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140e609c0(param_1);
  if (&local_168 != pplVar6) {
    local_208 = local_168;
    uStack_200 = uStack_160;
    uStack_1fc = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0x13;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f78);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_1b8 = 0x15;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a158);
  FUN_140e609c0(param_1);
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x1000001000000dd;
  if (&local_208 != puVar7) {
    local_218 = (longlong *)0x1000001000000dd;
    uStack_210 = uStack_200;
    uStack_20c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_218);
  }
  FUN_140e60910(1);
  local_1b8 = 0x16;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a378);
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x10000010000008d;
  local_218 = (longlong *)0x10000010000008d;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_218);
  local_148 = &local_1a8;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x10000010000008e;
  local_218 = (longlong *)0x10000010000008e;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_218);
  local_140 = &local_198;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x10000010000008f;
  local_218 = (longlong *)0x10000010000008f;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_218);
  local_138 = &local_188;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x100000100000090;
  local_218 = (longlong *)0x100000100000090;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_218);
  local_130 = local_178;
  FUN_140e609c0(param_1);
  uVar18 = CONCAT44(uVar14,DAT_1419fdca8);
  ppuVar19 = &local_148;
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,4,uVar18,&local_148);
  if (puVar8 != puVar7) {
    local_208 = (longlong *)*puVar8;
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0x17;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,2,&local_c8);
  local_1b8 = 0x19;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3a8);
  uStack_20c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_141a0f938,0x80000000,&local_d8,uVar18,
                (ulonglong)ppuVar19 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_1dc = local_cc;
  uStack_1e0 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_d8);
  }
  uStack_20c = 0;
  local_218 = (longlong *)0x3fe0000000000000;
  FUN_140046500(&local_1e8,&local_218);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_1e8;
  uStack_200 = uStack_1e0;
  uStack_1fc = uStack_1dc;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_208);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_148 = &local_1a8;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar14,DAT_1419fd658);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar12,&local_148);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar8 != puVar7) {
    local_208 = (longlong *)*puVar8;
    uStack_200 = *(undefined4 *)(puVar8 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0x1a;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a388);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_1b8 = 0x1c;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_e8);
  local_1b8 = 0x1d;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_f8);
  local_1b8 = 0x1f;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a3a8);
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a358);
  if (puVar7 != &local_1a8) {
    local_208 = (longlong *)*puVar7;
    uStack_200 = *(undefined4 *)(puVar7 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_208);
  }
  local_148 = &local_1a8;
  FUN_140e609c0(param_1);
  uVar12 = CONCAT44(uVar14,DAT_1419fd218);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar12,&local_148);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (puVar7 != puVar8) {
    local_208 = (longlong *)*puVar7;
    uStack_200 = *(undefined4 *)(puVar7 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_208);
  }
  FUN_140e60910(1);
  local_1b8 = 0x20;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a358);
  uVar13 = (int)(DAT_141a0a348 | 0x5000000) >> 0x18 & 0xff;
  if (uVar13 == 0xf) {
    uVar13 = 0x4000004;
  }
  else {
    uVar13 = uVar13 | 0x1000000;
  }
  uStack_1fc = 0xf;
  local_208 = (longlong *)(CONCAT44(uVar13,DAT_141a0a348) & 0xffffffff00ffffff);
  local_218 = (longlong *)(CONCAT44(uVar13,DAT_141a0a348) & 0xffffffff00ffffff);
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_218);
  local_148 = &local_1a8;
  uStack_1fc = 0xf;
  local_208 = (longlong *)0x100000100000092;
  local_218 = (longlong *)0x100000100000092;
  uStack_210 = uStack_200;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_218);
  local_140 = &local_198;
  FUN_140e609c0(param_1);
  puVar9 = (ulonglong *)FUN_140e48e40(puVar7,0);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  uVar18 = CONCAT44(uVar14,DAT_1419fd6d8);
  ppuVar19 = &local_148;
  puVar10 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar18,&local_148);
  if (puVar10 != puVar9) {
    local_208 = (longlong *)*puVar10;
    uStack_200 = (undefined4)puVar10[1];
    uStack_1fc = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_208);
  }
  FUN_140e60910(2);
  local_1b8 = 0x21;
  plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
  uVar12 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a388);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x24) < 1) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(lVar1 + 8);
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  FUN_140e87440(plVar11,DAT_1419fe5d8,0x80000000,&local_88,uVar18,uVar20);
  FUN_140e609c0(param_1);
  FUN_1400460e0(uVar12,&local_88);
  FUN_140e60910(1);
  local_1b8 = 0x23;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  uVar14 = 0;
  uVar16 = 0x3ff00000;
  local_1d8 = 1.0;
  bVar2 = true;
  do {
    dVar15 = (double)CONCAT44(uVar16,uVar14);
    if (!bVar2) {
      local_1b8 = 0x23;
      uVar13 = local_1cc & 0xffffff;
      if (uVar13 != 0) {
        if (uVar13 != 1) {
          if (uVar13 == 7) {
            local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
          }
          else if (uVar13 == 10) {
            local_1d8 = (double)((longlong)local_1d8 + 1);
          }
          else {
            if (uVar13 == 0xd) goto LAB_140856f5a;
            FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
          }
          goto LAB_140856f6a;
        }
        dVar15 = (double)FUN_140e4b060(&local_1d8);
LAB_140856f5a:
        local_1cc = 0;
      }
      local_1d8 = dVar15 + 1.0;
    }
LAB_140856f6a:
    bVar2 = false;
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a3a8);
    iVar4 = FUN_140e851f0(&local_1d8,uVar12,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_1b8 = 0x24;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    uVar14 = (undefined4)(uVar18 >> 0x20);
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a378);
    puVar9 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a378);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a358);
    uVar13 = (int)(DAT_141a0a348 | 0x5000000) >> 0x18 & 0xff;
    if (uVar13 == 0xf) {
      uVar13 = 0x4000004;
    }
    else {
      uVar13 = uVar13 | 0x1000000;
    }
    uStack_1fc = 0xf;
    local_208 = (longlong *)(CONCAT44(uVar13,DAT_141a0a348) & 0xffffffff00ffffff);
    local_218 = (longlong *)(CONCAT44(uVar13,DAT_141a0a348) & 0xffffffff00ffffff);
    uStack_210 = uStack_200;
    uStack_20c = 0xf;
    if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_218);
    local_148 = &local_1a8;
    iVar4 = 0;
    if ((*(int *)((longlong)plVar11 + 0xc) == 2) && (*plVar11 != 0)) {
      iVar4 = *(int *)(*plVar11 + 0x24);
    }
    dVar15 = (double)FUN_140e78f00((longlong)(iVar4 + -1));
    iVar4 = (int)dVar15;
    if (((*(uint *)((longlong)puVar9 + 0xc) & 0xffffff) == 2) && (uVar18 = *puVar9, uVar18 != 0)) {
      if ((iVar4 < 0) || (*(int *)(uVar18 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(uVar18 + 0x24));
        puVar9 = (ulonglong *)0x0;
      }
      else {
        puVar9 = (ulonglong *)((longlong)iVar4 * 0x10 + *(longlong *)(uVar18 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (puVar9 != &local_198) {
      local_218 = (longlong *)*puVar9;
      uStack_210 = (undefined4)puVar9[1];
      uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_218);
    }
    local_140 = &local_198;
    FUN_140e609c0(param_1);
    uVar16 = FUN_140e4a740(&local_1d8);
    puVar9 = (ulonglong *)FUN_140e48e40(puVar7,uVar16);
    FUN_140e609c0(*(undefined8 *)*puVar7);
    uVar18 = CONCAT44(uVar14,DAT_1419fd6d8);
    ppuVar19 = &local_148;
    puVar10 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar18,&local_148);
    if (puVar10 != puVar9) {
      local_218 = (longlong *)*puVar10;
      uStack_210 = (undefined4)puVar10[1];
      uStack_20c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_218);
    }
    FUN_140e60910(2);
    local_1b8 = 0x25;
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
    uVar12 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a388);
    iVar4 = FUN_140e4a740(&local_1d8);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    FUN_140e87440(plVar11,DAT_1419fe5d8,0x80000000,&local_98,uVar18,uVar20);
    FUN_140e609c0(param_1);
    FUN_1400460e0(uVar12,&local_98);
    FUN_140e60910(1);
    uVar14 = SUB84(local_1d8,0);
    uVar16 = (undefined4)((ulonglong)local_1d8 >> 0x20);
  } while( true );
  local_1b8 = 0x28;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x3ff0000000000000;
  local_1b8 = 0x2a;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_20c = 6;
  uVar20 = uVar20 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_158,uVar18,uVar20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_20c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_168,uVar18,uVar20 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_1dc = uStack_14c;
  uStack_1e0 = uStack_150;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_158;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_158);
  }
  uStack_20c = 7;
  local_218 = (longlong *)CONCAT44(local_218._4_4_,8);
  FUN_1400460e0(&local_1e8,&local_218);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_1e8;
  uStack_200 = uStack_1e0;
  uStack_1fc = uStack_1dc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_208);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_148 = &local_1a8;
  local_208 = local_168;
  uStack_200 = uStack_160;
  uStack_1fc = uStack_15c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_208);
  local_140 = &local_198;
  if (puVar5 != &local_188) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_208);
  }
  local_138 = &local_188;
  uVar18 = CONCAT44(uVar14,DAT_141a10408);
  ppuVar19 = &local_148;
  uVar12 = FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar18,&local_148);
  cVar3 = FUN_140e491e0(uVar12);
  if (cVar3 == '\0') {
    local_1b8 = 0x2c;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uStack_20c = 6;
    uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    uVar18 = uVar18 & 0xffffffffffffff00;
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_158,uVar18,uVar20);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_20c = 6;
    uVar18 = uVar18 & 0xffffffffffffff00;
    local_218 = param_1;
    FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_168,uVar18,uVar20 & 0xffffffffffffff00)
    ;
    uVar14 = (undefined4)(uVar18 >> 0x20);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    uStack_1dc = uStack_14c;
    uStack_1e0 = uStack_150;
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_158;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_158);
    }
    uStack_20c = 7;
    local_218 = (longlong *)CONCAT44(local_218._4_4_,8);
    FUN_1400462a0(&local_1e8,&local_218);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_208 = local_1e8;
    uStack_200 = uStack_1e0;
    uStack_1fc = uStack_1dc;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_208);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_148 = &local_1a8;
    local_208 = local_168;
    uStack_200 = uStack_160;
    uStack_1fc = uStack_15c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
    local_140 = &local_198;
    if (puVar5 != &local_188) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_208);
    }
    local_138 = &local_188;
    uVar18 = CONCAT44(uVar14,DAT_141a10408);
    ppuVar19 = &local_148;
    uVar12 = FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar18,&local_148);
    cVar3 = FUN_140e491e0(uVar12);
    if (cVar3 == '\0') {
      local_1b8 = 0x2e;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      uStack_20c = 6;
      uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
      uVar18 = uVar18 & 0xffffffffffffff00;
      local_218 = param_1;
      FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_158,uVar18,uVar20);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      uStack_20c = 6;
      uVar18 = uVar18 & 0xffffffffffffff00;
      local_218 = param_1;
      FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_168,uVar18,
                    uVar20 & 0xffffffffffffff00);
      uVar14 = (undefined4)(uVar18 >> 0x20);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_208 = local_158;
      uStack_200 = uStack_150;
      uStack_1fc = uStack_14c;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_208);
      local_148 = &local_1a8;
      uStack_1dc = uStack_15c;
      uStack_1e0 = uStack_160;
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_168;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_168);
      }
      uStack_20c = 7;
      local_218 = (longlong *)CONCAT44(local_218._4_4_,8);
      FUN_1400460e0(&local_1e8,&local_218);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      local_208 = local_1e8;
      uStack_200 = uStack_1e0;
      uStack_1fc = uStack_1dc;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_208);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_140 = &local_198;
      if (puVar5 != &local_188) {
        local_208 = (longlong *)*puVar5;
        uStack_200 = *(undefined4 *)(puVar5 + 1);
        uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_208);
      }
      local_138 = &local_188;
      uVar18 = CONCAT44(uVar14,DAT_141a10408);
      ppuVar19 = &local_148;
      uVar12 = FUN_140e634e0(param_1,param_2,&local_1f8,3,uVar18,&local_148);
      cVar3 = FUN_140e491e0(uVar12);
      if (cVar3 == '\0') goto LAB_140857a78;
      local_1b8 = 0x2f;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3d8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      uVar12 = 0x4008000000000000;
    }
    else {
      local_1b8 = 0x2d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3d8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      uVar12 = 0x4000000000000000;
    }
    *puVar7 = uVar12;
  }
  else {
    local_1b8 = 0x2b;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3d8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *puVar7 = 0;
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
LAB_140857a78:
  local_1b8 = 0x31;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_20c = 6;
  uVar20 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe0e8,0x80000000,&local_158,uVar18,uVar20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  uStack_20c = 6;
  uVar18 = uVar18 & 0xffffffffffffff00;
  local_218 = param_1;
  FUN_140e87440(&local_218,DAT_1419fe158,0x80000000,&local_168,uVar18,uVar20 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar18 >> 0x20);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_158;
  uStack_200 = uStack_150;
  uStack_1fc = uStack_14c;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_208);
  local_148 = &local_1a8;
  uStack_1dc = uStack_15c;
  uStack_1e0 = uStack_160;
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_168;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_168);
  }
  uStack_20c = 7;
  local_218 = (longlong *)CONCAT44(local_218._4_4_,8);
  FUN_1400462a0(&local_1e8,&local_218);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_208 = local_1e8;
  uStack_200 = uStack_1e0;
  uStack_1fc = uStack_1dc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_208);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_140 = &local_198;
  if (puVar5 != &local_188) {
    local_208 = (longlong *)*puVar5;
    uStack_200 = *(undefined4 *)(puVar5 + 1);
    uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_208);
  }
  local_138 = &local_188;
  uVar12 = FUN_140e634e0(param_1,param_2,&local_1f8,3,CONCAT44(uVar14,DAT_141a10408),&local_148);
  cVar3 = FUN_140e491e0(uVar12);
  if (cVar3 != '\0') {
    local_1b8 = 0x32;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a3d8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  local_1b8 = 0x34;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = (longlong *)0x4028000000000000;
  local_1b8 = 0x35;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  pplVar6 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  local_208 = (longlong *)CONCAT44(uRam00000001419e8fb4,_DAT_1419e8fb0);
  uStack_200 = uRam00000001419e8fb8;
  uStack_1fc = uRam00000001419e8fbc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140041b80(&local_1a8,&local_208);
  local_148 = &local_1a8;
  local_208 = (longlong *)CONCAT44(uRam00000001419e8fc4,_DAT_1419e8fc0);
  uStack_200 = uRam00000001419e8fc8;
  uStack_1fc = uRam00000001419e8fcc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_208);
  local_140 = &local_198;
  FUN_140e609c0(param_1);
  uStack_1dc = local_11c;
  uStack_1e0 = local_120;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) == 0) {
    local_1e8 = local_128;
  }
  else {
    FUN_1400419b0(&local_1e8,&local_128);
  }
  uStack_1fc = 0;
  local_208 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_1e8,&local_208);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((local_11c & 0xffffff) == 0) {
    uVar14 = SUB84(local_128,0);
  }
  else {
    uVar14 = FUN_140e4b060(&local_128);
  }
  if ((uStack_1dc & 0xffffff) == 0) {
    uVar16 = SUB84(local_1e8,0);
  }
  else {
    uVar16 = FUN_140e4b060(&local_1e8);
  }
  uVar12 = FUN_140e78db0(&local_1f8,2,&local_148);
  local_218 = (longlong *)FUN_140e794b0(uVar16,uVar14);
  uStack_20c = 0;
  FUN_140042560(&local_218,uVar12);
  uStack_ac = 0;
  local_b8 = (longlong *)0x4070e00000000000;
  FUN_1400460e0(&local_b8,&local_218);
  if (&local_b8 != pplVar6) {
    local_208 = local_b8;
    uStack_200 = uStack_b0;
    uStack_1fc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_208);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140e60910(1);
  local_1b8 = 0x36;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  uVar14 = 0;
  uVar16 = 0;
  local_108 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_108);
  local_1b8 = 0x38;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1cc = 0;
  local_1d8 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_1b8 = 0x38;
      uVar13 = local_1cc & 0xffffff;
      if ((local_1cc & 0xffffff) == 0) {
LAB_140858080:
        local_1d8 = (double)CONCAT44(uVar16,uVar14) + 1.0;
      }
      else if (uVar13 == 1) {
        local_1d8 = (double)FUN_140e4b060(&local_1d8);
        local_1d8 = local_1d8 + 1.0;
        local_1cc = 0;
      }
      else if (uVar13 == 7) {
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
      }
      else if (uVar13 == 10) {
        local_1d8 = (double)((longlong)local_1d8 + 1);
      }
      else {
        if (uVar13 == 0xd) {
          local_1cc = 0;
          goto LAB_140858080;
        }
        FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
      }
    }
    bVar2 = false;
    uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a3a8);
    iVar4 = FUN_140e851f0(&local_1d8,uVar12,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_1b8 = 0x3a;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a338);
      FUN_140e609c0(param_1);
      if (puVar5 != puVar7) {
        local_208 = (longlong *)*puVar5;
        uStack_200 = *(undefined4 *)(puVar5 + 1);
        uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        FUN_140041b80(puVar7,&local_208);
      }
      FUN_140e60910(1);
      local_1b8 = 0x3c;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09f88);
      FUN_140e609c0(param_1);
      FUN_140e645a0(&local_208,gml_Object_oBreakableDangly_Step_0,param_1);
      if (&local_208 != puVar5) {
        local_218 = local_208;
        uStack_210 = uStack_200;
        uStack_20c = uStack_1fc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_218);
      }
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140e60910(1);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      _eh_vector_destructor_iterator_(&local_1a8,0x10,4,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_1c8;
      return;
    }
    local_1b8 = 0x39;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    plVar11 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
    if (puVar5 != &local_118) {
      local_208 = (longlong *)*puVar5;
      uStack_200 = *(undefined4 *)(puVar5 + 1);
      uStack_1fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_208);
    }
    iVar4 = FUN_140e4a740(&local_1d8);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87930(plVar11,DAT_141a0a7f8,0x80000000,&local_118);
    uVar14 = SUB84(local_1d8,0);
    uVar16 = (undefined4)((ulonglong)local_1d8 >> 0x20);
  } while( true );
}


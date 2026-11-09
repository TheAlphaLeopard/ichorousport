// gml_Object_oIKArm_Draw_0 @ 0x140b12aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oIKArm_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  double *pdVar7;
  undefined *puVar8;
  uint uVar9;
  float fVar10;
  longlong *plVar11;
  double dVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  char *local_190;
  undefined4 local_188;
  longlong *local_178;
  uint uStack_170;
  uint uStack_16c;
  longlong *local_168;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  
  local_190 = "gml_Object_oIKArm_Create_0";
  local_188 = 0;
  local_198 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_198;
  _eh_vector_constructor_iterator_(&local_128,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_188 = 3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08398);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4041000000000000;
  local_188 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08398);
  if (puVar1 != &local_128) {
    local_1b8 = (longlong *)*puVar1;
    uStack_1b0 = puVar1[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1b8);
  }
  local_a8 = &local_128;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419ebb34,_DAT_1419ebb30);
  uStack_1b0 = CONCAT44(uRam00000001419ebb3c,uRam00000001419ebb38);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1b8);
  local_a0 = local_118;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419ebb24,_DAT_1419ebb20);
  uStack_1b0 = CONCAT44(uRam00000001419ebb2c,uRam00000001419ebb28);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1b8);
  local_98 = local_108;
  ppuVar15 = &local_a8;
  gml_Script_arm_meeting_line(param_1,param_2,&local_158,3,ppuVar15);
  local_188 = 6;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07d48);
  FUN_140e609c0(param_1);
  uStack_1a0 = puVar1[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar1);
  }
  uStack_1b0 = uStack_1b0 & 0xffffffff;
  local_1b8 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_1a8,&local_1b8);
  if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (&local_1a8 != pplVar2) {
    local_1b8 = local_1a8;
    uStack_1b0 = uStack_1a0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar3,1);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3ff0000000000000;
  FUN_140e60910(2);
  local_188 = 8;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10a28);
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar3,2);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3ff0000000000000;
  FUN_140e60910(2);
  local_188 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10b88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000;
  local_188 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,0);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_168 != pplVar2) {
    local_1b8 = local_168;
    uStack_1b0._0_4_ = uStack_160;
    uStack_1b0._4_4_ = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,0);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_178 != pplVar2) {
    local_1b8 = local_178;
    uStack_1b0._0_4_ = uStack_170;
    uStack_1b0._4_4_ = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  local_188 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,1);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_168 != pplVar2) {
    local_1b8 = local_168;
    uStack_1b0._0_4_ = uStack_160;
    uStack_1b0._4_4_ = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,1);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_178 != pplVar2) {
    local_1b8 = local_178;
    uStack_1b0._0_4_ = uStack_170;
    uStack_1b0._4_4_ = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  local_188 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,2);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_168 != pplVar2) {
    local_1b8 = local_168;
    uStack_1b0._0_4_ = uStack_160;
    uStack_1b0._4_4_ = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  pplVar2 = (longlong **)FUN_140e48e40(puVar3,2);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (&local_178 != pplVar2) {
    local_1b8 = local_178;
    uStack_1b0._0_4_ = uStack_170;
    uStack_1b0._4_4_ = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(2);
  local_188 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a10be8);
  uStack_1b0 = CONCAT44(0xd,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x3ff0000000000000;
  if (&local_1b8 != puVar3) {
    local_1a8 = (longlong *)0x3ff0000000000000;
    uStack_1a0 = CONCAT44(0xd,(uint)uStack_1b0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  local_188 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3748);
  FUN_140e609c0(param_1);
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x1000001000003ed;
  if (&local_1b8 != puVar3) {
    local_1a8 = (longlong *)0x1000001000003ed;
    uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 0x12;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f37d8);
  FUN_140e609c0(param_1);
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x10000010000013f;
  if (&local_1b8 != puVar3) {
    local_1a8 = (longlong *)0x10000010000013f;
    uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 0x13;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3788);
  FUN_140e609c0(param_1);
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x10000010000014e;
  if (&local_1b8 != puVar3) {
    local_1a8 = (longlong *)0x10000010000014e;
    uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 0x15;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3778);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000;
  local_188 = 0x16;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f37b8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4000000000000000;
  local_188 = 0x18;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f37a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_188 = 0x19;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f37c8);
  uStack_1b0 = CONCAT44(0xd,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x0;
  if (&local_1b8 != puVar3) {
    local_1a8 = (longlong *)0x0;
    uStack_1a0 = CONCAT44(0xd,(uint)uStack_1b0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1a8);
  }
  local_188 = 0x1b;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08578);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  if (&local_168 != pplVar2) {
    local_1b8 = local_168;
    uStack_1b0._0_4_ = uStack_160;
    uStack_1b0._4_4_ = uStack_15c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 0x1c;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a084b8);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  FUN_140e609c0(param_1);
  uStack_1a0._0_4_ = uStack_170;
  uStack_1a0._4_4_ = uStack_16c;
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
    local_1a8 = local_178;
  }
  else {
    FUN_1400419b0(&local_1a8,&local_178);
  }
  FUN_1400462a0(&local_1a8,puVar1);
  if (&local_1a8 != pplVar2) {
    local_1b8 = local_1a8;
    uStack_1b0._0_4_ = (uint)uStack_1a0;
    uStack_1b0._4_4_ = uStack_1a0._4_4_;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  if ((1 << ((byte)uStack_1a0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 0x1e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f0d0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc010000000000000;
  local_188 = 0x1f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0aa38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_188 = 0x20;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07cc8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_188 = 0x21;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08368);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_188 = 0x23;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a082f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4030000000000000;
  local_188 = 0x24;
  pplVar2 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07468);
  FUN_140e609c0(param_1);
  uStack_1a0 = puVar1[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar1);
  }
  uStack_1b0 = (ulonglong)(uint)uStack_1b0;
  local_1b8 = (longlong *)0x3fec28f5c28f5c29;
  FUN_140042560(&local_1a8,&local_1b8);
  if ((1 << ((byte)(uStack_1b0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (&local_1a8 != pplVar2) {
    local_1b8 = local_1a8;
    uStack_1b0 = uStack_1a0;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar2);
    }
    FUN_140041b80(pplVar2,&local_1b8);
  }
  if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  FUN_140e60910(1);
  local_188 = 0x26;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3758);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fa47ae147ae147b;
  local_188 = 0x27;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a093d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4038000000000000;
  local_188 = 0x28;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08198);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4014000000000000;
  local_188 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07dd8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4018000000000000;
  local_188 = 0x2b;
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08578);
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a084b8);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a093d8);
  pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a08588);
  uStack_1b0._4_4_ = 6;
  in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_168,uVar16,in_stack_fffffffffffffe40);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1b0._4_4_ = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  local_1b8 = param_1;
  FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_178,uVar16,
                in_stack_fffffffffffffe40 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar16 >> 0x20);
  if ((1 << ((byte)uStack_1b0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uStack_1a0 = puVar1[1];
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar1);
  }
  FUN_1400462a0(&local_1a8,uVar6);
  plVar11 = local_1a8;
  if ((uStack_1a0 & 0xffffff00000000) != 0) {
    plVar11 = (longlong *)FUN_140e4b060(&local_1a8);
  }
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar5;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar5);
  }
  plVar13 = local_178;
  if ((uStack_16c & 0xffffff) != 0) {
    plVar13 = (longlong *)FUN_140e4b060(&local_178);
  }
  plVar14 = local_168;
  if ((uStack_15c & 0xffffff) != 0) {
    plVar14 = (longlong *)FUN_140e4b060(&local_168);
  }
  fVar10 = (float)FUN_140e793d0((float)(double)plVar14,(float)(double)plVar13,(float)dVar12,
                                (float)(double)plVar11);
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar7);
  }
  *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
  *pdVar7 = (double)fVar10;
  if ((1 << ((byte)(uStack_1a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_188 = 0x2c;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08588);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a07d78);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar3) {
    local_1b8 = (longlong *)*puVar1;
    uStack_1b0._0_4_ = *(uint *)(puVar1 + 1);
    uStack_1b0._4_4_ = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1b8);
  }
  FUN_140e60910(1);
  local_188 = 0x2d;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3768);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_188 = 0x2f;
  puVar8 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ff228);
  if (puVar8 != &DAT_141dd94d8) {
    local_1b8 = (longlong *)CONCAT44(uRam0000000141dd94dc,_DAT_141dd94d8);
    uStack_1b0._0_4_ = uRam0000000141dd94e0;
    uStack_1b0._4_4_ = DAT_141dd94e4;
    if ((1 << ((byte)*(undefined4 *)(puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_1b8);
  }
  local_188 = 0x30;
  uStack_1b0 = CONCAT44(0xd,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x0;
  local_1a8 = (longlong *)0x0;
  uStack_1a0 = uStack_1b0;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_1a8);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_138);
  local_188 = 0x32;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3798);
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x10000020000005e;
  local_1a8 = (longlong *)0x10000020000005e;
  uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1a8);
  local_a8 = &local_128;
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x10000020000005f;
  local_1a8 = (longlong *)0x10000020000005f;
  uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_1a8);
  local_a0 = local_118;
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x100000200000060;
  local_1a8 = (longlong *)0x100000200000060;
  uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1a8);
  local_98 = local_108;
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)0x100000200000061;
  local_1a8 = (longlong *)0x100000200000061;
  uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1a8);
  local_90 = local_f8;
  uVar9 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar9 == 0xf) {
    uVar9 = 0x4000004;
  }
  else {
    uVar9 = uVar9 | 0x1000000;
  }
  uStack_1b0 = CONCAT44(0xf,(uint)uStack_1b0);
  local_1b8 = (longlong *)(CONCAT44(uVar9,DAT_1419ef3f8) & 0xffffffff00ffffff);
  local_1a8 = (longlong *)(CONCAT44(uVar9,DAT_1419ef3f8) & 0xffffffff00ffffff);
  uStack_1a0 = CONCAT44(0xf,(uint)uStack_1b0);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_1a8);
  uVar6 = CONCAT44(uVar17,DAT_1419fdca8);
  local_88 = local_e8;
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,4,uVar6,&local_a8);
  uVar17 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != &local_d8) {
    local_1b8 = (longlong *)*puVar3;
    uStack_1b0 = puVar3[1];
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1b8);
  }
  local_80 = &local_d8;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419ebb44,_DAT_1419ebb40);
  uStack_1b0 = CONCAT44(uRam00000001419ebb4c,uRam00000001419ebb48);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1b8);
  local_78 = local_c8;
  local_1b8 = (longlong *)CONCAT44(uRam00000001419ebb14,_DAT_1419ebb10);
  uStack_1b0 = CONCAT44(uRam00000001419ebb1c,uRam00000001419ebb18);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1b8);
  local_70 = local_b8;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_158,4,CONCAT44(uVar17,DAT_1419fd6d8),&local_88);
  if (puVar3 != puVar1) {
    local_1b8 = (longlong *)*puVar3;
    uStack_1b0 = puVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_1b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_198;
  return;
}


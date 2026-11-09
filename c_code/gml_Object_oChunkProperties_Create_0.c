// gml_Object_oChunkProperties_Create_0 @ 0x1408a6160

void gml_Object_oChunkProperties_Create_0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar13;
  uint in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffed0;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  uint local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  
  local_a0 = "gml_Object_oChestOption_Draw_73";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  local_98 = 2;
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_98 = 3;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
    local_ec = 6;
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
    in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a728,0x80000000,&local_b8,in_stack_fffffffffffffec8,
                  in_stack_fffffffffffffed0);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 6;
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
    in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0cfc8,0x80000000,&local_c8,in_stack_fffffffffffffec8,
                  in_stack_fffffffffffffed0);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 6;
    in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
    in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_d8,in_stack_fffffffffffffec8,
                  in_stack_fffffffffffffed0);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = 6;
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_e8,
                  in_stack_fffffffffffffec8 & 0xffffff00,in_stack_fffffffffffffed0 & 0xffffff00);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_ec = local_dc;
    local_f0 = local_e0;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_f8 = local_e8;
    }
    else {
      FUN_1400419b0(&local_f8,&local_e8);
    }
    FUN_1400460e0(&local_f8,uVar3);
    local_fc = local_cc;
    local_100 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_108 = local_d8;
    }
    else {
      FUN_1400419b0(&local_108,&local_d8);
    }
    FUN_1400460e0(&local_108,uVar2);
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar7 = (undefined4)*puVar6;
      uVar14 = (undefined4)((ulonglong)*puVar6 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(puVar6);
      uVar7 = (undefined4)uVar2;
      uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
      uVar8 = (undefined4)*puVar5;
      uVar15 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(puVar5);
      uVar8 = (undefined4)uVar2;
      uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
      uVar9 = (undefined4)*puVar4;
      uVar16 = (undefined4)((ulonglong)*puVar4 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(puVar4);
      uVar9 = (undefined4)uVar2;
      uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_ec & 0xffffff) == 0) {
      uVar10 = SUB84(local_f8,0);
      uVar17 = (undefined4)((ulonglong)local_f8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_f8);
      uVar10 = (undefined4)uVar2;
      uVar17 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_fc & 0xffffff) == 0) {
      uVar11 = (undefined4)local_108;
      uVar18 = (undefined4)((ulonglong)local_108 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_108);
      uVar11 = (undefined4)uVar2;
      uVar18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_bc & 0xffffff) == 0) {
      uVar12 = (undefined4)local_c8;
      uVar19 = (undefined4)((ulonglong)local_c8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_c8);
      uVar12 = (undefined4)uVar2;
      uVar19 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_ac & 0xffffff) == 0) {
      dVar13 = local_b8;
    }
    else {
      dVar13 = (double)FUN_140e4b060(&local_b8);
    }
    FUN_140ec5dd0(param_1,(longlong)dVar13,(float)(double)CONCAT44(uVar19,uVar12),
                  (float)(double)CONCAT44(uVar18,uVar11),(float)(double)CONCAT44(uVar17,uVar10),
                  (float)(double)CONCAT44(uVar16,uVar9),(float)(double)CONCAT44(uVar15,uVar8),
                  (float)(double)CONCAT44(uVar14,uVar7),0xffffff,0x3f800000);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
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
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}


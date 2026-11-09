// gml_Object_oShopRaven_Step_0 @ 0x140d767d0

undefined8 * gml_Object_oShopRaven_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar12;
  double dVar10;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong *plVar11;
  float fVar17;
  float fVar18;
  uint in_stack_fffffffffffffec8;
  uint uVar19;
  uint in_stack_fffffffffffffed0;
  uint uVar20;
  undefined8 local_108;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  longlong *local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  
  local_a0 = "gml_Script_anon@2426@___struct___790@gml_Object_oShopRaven_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x95;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  local_ac = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a728,0x80000000,&local_c8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0cfc8,0x80000000,&local_d8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_f8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_108,in_stack_fffffffffffffec8 & 0xffffff00
                ,in_stack_fffffffffffffed0 & 0xffffff00);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_dc = *(uint *)((longlong)puVar1 + 0xc);
  local_e0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_e8,puVar1);
  }
  FUN_140042560(&local_e8,uVar2);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
    uVar13 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar9 = FUN_140e4b060(puVar3);
    uVar5 = (undefined4)uVar9;
    uVar13 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar6 = (undefined4)local_e8;
    uVar14 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar9 = FUN_140e4b060(&local_e8);
    uVar6 = (undefined4)uVar9;
    uVar14 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_108;
    uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar9 = FUN_140e4b060(&local_108);
    uVar7 = (undefined4)uVar9;
    uVar15 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar8 = (undefined4)local_f8;
    uVar16 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar9 = FUN_140e4b060(&local_f8);
    uVar8 = (undefined4)uVar9;
    uVar16 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar4 = (undefined4)local_d8;
    uVar12 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar9 = FUN_140e4b060(&local_d8);
    uVar4 = (undefined4)uVar9;
    uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    dVar10 = local_c8;
  }
  else {
    dVar10 = (double)FUN_140e4b060(&local_c8);
  }
  fVar17 = (float)(double)CONCAT44(uVar14,uVar6);
  fVar18 = (float)(double)CONCAT44(uVar15,uVar7);
  FUN_140ec5dd0(param_1,(longlong)dVar10,(float)(double)CONCAT44(uVar12,uVar4),
                (float)(double)CONCAT44(uVar16,uVar8),fVar18,fVar17,
                (float)(double)CONCAT44(uVar13,uVar5),0,0xffffff,0x3f800000);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_98 = 0x96;
  local_ac = 6;
  uVar20 = (uint)fVar17 & 0xffffff00;
  uVar19 = (uint)fVar18 & 0xffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_f8,uVar19,uVar20);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_108,uVar19 & 0xffffff00,
                uVar20 & 0xffffff00);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_dc = *(uint *)((longlong)puVar1 + 0xc);
  local_e0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
    local_e8 = *puVar1;
  }
  else {
    FUN_1400419b0(&local_e8,puVar1);
  }
  FUN_140042560(&local_e8,uVar2);
  local_ac = 0xf;
  local_b8 = (longlong *)0x10000010000037e;
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar3;
    uVar13 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(puVar3);
    uVar5 = (undefined4)uVar2;
    uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar6 = (undefined4)local_e8;
    uVar14 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_e8);
    uVar6 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_108;
    uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_108);
    uVar7 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar8 = (undefined4)local_f8;
    uVar16 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_f8);
    uVar8 = (undefined4)uVar2;
    uVar16 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    plVar11 = local_b8;
  }
  else {
    plVar11 = (longlong *)FUN_140e4b060(&local_b8);
  }
  FUN_140ec5dd0(param_1,(int)(double)plVar11,0,(float)(double)CONCAT44(uVar16,uVar8),
                (float)(double)CONCAT44(uVar15,uVar7),(float)(double)CONCAT44(uVar14,uVar6),
                (float)(double)CONCAT44(uVar13,uVar5),0,0xffffff,0x3f800000);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


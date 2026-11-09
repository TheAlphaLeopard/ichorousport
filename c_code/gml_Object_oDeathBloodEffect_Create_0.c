// gml_Object_oDeathBloodEffect_Create_0 @ 0x1408e3e20

void gml_Object_oDeathBloodEffect_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar11;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong *plVar12;
  float fVar19;
  float fVar20;
  uint in_stack_fffffffffffffed8;
  uint uVar21;
  uint in_stack_fffffffffffffee0;
  uint uVar22;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  
  local_a0 = "gml_Object_oDarnerSpit_Draw_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_ac = 0xffffff;
  local_b8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_98 = 4;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_cc = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0a728,0x80000000,&local_b8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_141a0cfc8,0x80000000,&local_c8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 6;
  in_stack_fffffffffffffee0 = in_stack_fffffffffffffee0 & 0xffffff00;
  in_stack_fffffffffffffed8 = in_stack_fffffffffffffed8 & 0xffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_e8,in_stack_fffffffffffffed8,
                in_stack_fffffffffffffee0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_f8,in_stack_fffffffffffffed8 & 0xffffff00,
                in_stack_fffffffffffffee0 & 0xffffff00);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = *(uint *)((longlong)puVar2 + 0xc);
  local_d0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_d8,puVar2);
  }
  FUN_140042560(&local_d8,uVar3);
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar4;
    uVar17 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar4);
    uVar9 = (undefined4)uVar3;
    uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar10 = SUB84(local_d8,0);
    uVar18 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_d8);
    uVar10 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar5 = (undefined4)*puVar1;
    uVar13 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar1);
    uVar5 = (undefined4)uVar3;
    uVar13 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar6 = (undefined4)local_f8;
    uVar14 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_f8);
    uVar6 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_e8;
    uVar15 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_e8);
    uVar7 = (undefined4)uVar3;
    uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    uVar8 = (undefined4)local_c8;
    uVar16 = (undefined4)((ulonglong)local_c8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_c8);
    uVar8 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    dVar11 = local_b8;
  }
  else {
    dVar11 = (double)FUN_140e4b060(&local_b8);
  }
  fVar19 = (float)(double)CONCAT44(uVar13,uVar5);
  fVar20 = (float)(double)CONCAT44(uVar14,uVar6);
  FUN_140ec5dd0(param_1,(longlong)dVar11,(float)(double)CONCAT44(uVar16,uVar8),
                (float)(double)CONCAT44(uVar15,uVar7),fVar20,fVar19,
                (float)(double)CONCAT44(uVar18,uVar10),(float)(double)CONCAT44(uVar17,uVar9),
                0xffffff,0x3f800000);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_98 = 5;
  local_cc = 6;
  uVar22 = (uint)fVar19 & 0xffffff00;
  uVar21 = (uint)fVar20 & 0xffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_e8,uVar21,uVar22);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_f8,uVar21 & 0xffffff00,uVar22 & 0xffffff00
               );
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0xf;
  local_d8 = (longlong *)0x100000100000039;
  if ((local_ec & 0xffffff) == 0) {
    uVar9 = (undefined4)local_f8;
    uVar17 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_f8);
    uVar9 = (undefined4)uVar3;
    uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar10 = (undefined4)local_e8;
    uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_e8);
    uVar10 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    plVar12 = local_d8;
  }
  else {
    plVar12 = (longlong *)FUN_140e4b060(&local_d8);
  }
  FUN_140ec5d30(param_1,(int)(double)plVar12,0,(float)(double)CONCAT44(uVar18,uVar10),
                (float)(double)CONCAT44(uVar17,uVar9));
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
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


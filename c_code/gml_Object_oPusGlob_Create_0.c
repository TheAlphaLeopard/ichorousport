// gml_Object_oPusGlob_Create_0 @ 0x140ca4bd0

void gml_Object_oPusGlob_Create_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
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
  undefined4 uVar20;
  double dVar13;
  uint in_stack_fffffffffffffec8;
  uint in_stack_fffffffffffffed0;
  longlong *local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  
  local_b0 = "gml_Object_oProjectile_Draw_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_a8 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57840);
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a728,0x80000000,&local_c8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0cfc8,0x80000000,&local_d8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffff00;
  in_stack_fffffffffffffec8 = in_stack_fffffffffffffec8 & 0xffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_e8,in_stack_fffffffffffffec8,
                in_stack_fffffffffffffed0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_f8,in_stack_fffffffffffffec8 & 0xffffff00
                ,in_stack_fffffffffffffed0 & 0xffffff00);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = *(uint *)((longlong)puVar2 + 0xc);
  local_100 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar2;
  }
  else {
    FUN_1400419b0(&local_108,puVar2);
  }
  FUN_140042560(&local_108,uVar3);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar6 = (undefined4)*puVar5;
    uVar14 = (undefined4)((ulonglong)*puVar5 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar5);
    uVar6 = (undefined4)uVar3;
    uVar14 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    uVar7 = (undefined4)*puVar4;
    uVar15 = (undefined4)((ulonglong)*puVar4 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar4);
    uVar7 = (undefined4)uVar3;
    uVar15 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar8 = SUB84(local_108,0);
    uVar16 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_108);
    uVar8 = (undefined4)uVar3;
    uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar1;
    uVar17 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(puVar1);
    uVar9 = (undefined4)uVar3;
    uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar10 = (undefined4)local_f8;
    uVar18 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_f8);
    uVar10 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar11 = (undefined4)local_e8;
    uVar19 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_e8);
    uVar11 = (undefined4)uVar3;
    uVar19 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar12 = (undefined4)local_d8;
    uVar20 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar3 = FUN_140e4b060(&local_d8);
    uVar12 = (undefined4)uVar3;
    uVar20 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    dVar13 = local_c8;
  }
  else {
    dVar13 = (double)FUN_140e4b060(&local_c8);
  }
  FUN_140ec5dd0(param_1,(longlong)dVar13,(float)(double)CONCAT44(uVar20,uVar12),
                (float)(double)CONCAT44(uVar19,uVar11),(float)(double)CONCAT44(uVar18,uVar10),
                (float)(double)CONCAT44(uVar17,uVar9),(float)(double)CONCAT44(uVar16,uVar8),
                (float)(double)CONCAT44(uVar15,uVar7),0xffffff,(float)(double)CONCAT44(uVar14,uVar6)
               );
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
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
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}


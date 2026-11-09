// gml_Script__instance_place_anon_4336_anon_621_gml_Object_oBloodDropManager_Create_0 @ 0x1406b2430

undefined8 *
gml_Script__instance_place_anon_4336_anon_621_gml_Object_oBloodDropManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar10;
  undefined4 uVar17;
  undefined8 uVar11;
  undefined4 uVar18;
  longlong *plVar12;
  float fVar19;
  float fVar20;
  uint in_stack_fffffffffffffeb8;
  uint uVar21;
  uint in_stack_fffffffffffffec0;
  uint uVar22;
  longlong *local_118;
  uint local_10c;
  undefined8 local_108;
  undefined4 local_100;
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
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  
  local_a0 = "gml_Script_draw@anon@4136@anon@621@gml_Object_oBloodDropManager_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xbe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7f8);
  local_10c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffff00;
  in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0a728,0x80000000,&local_c8,in_stack_fffffffffffffeb8,
                in_stack_fffffffffffffec0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffff00;
  in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_141a0cfc8,0x80000000,&local_d8,in_stack_fffffffffffffeb8,
                in_stack_fffffffffffffec0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffff00;
  in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_108,in_stack_fffffffffffffeb8,
                in_stack_fffffffffffffec0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,in_stack_fffffffffffffeb8 & 0xffffff00
                ,in_stack_fffffffffffffec0 & 0xffffff00);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar3;
    uVar17 = (undefined4)((ulonglong)*puVar3 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar3);
    uVar8 = (undefined4)uVar11;
    uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar2 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar2;
    uVar18 = (undefined4)((ulonglong)*puVar2 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar2);
    uVar9 = (undefined4)uVar11;
    uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((*(uint *)((longlong)puVar1 + 0xc) & 0xffffff) == 0) {
    uVar4 = (undefined4)*puVar1;
    uVar13 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(puVar1);
    uVar4 = (undefined4)uVar11;
    uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_ec & 0xffffff) == 0) {
    uVar5 = (undefined4)local_f8;
    uVar14 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_f8);
    uVar5 = (undefined4)uVar11;
    uVar14 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_fc & 0xffffff) == 0) {
    uVar6 = (undefined4)local_108;
    uVar15 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_108);
    uVar6 = (undefined4)uVar11;
    uVar15 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_cc & 0xffffff) == 0) {
    uVar7 = (undefined4)local_d8;
    uVar16 = (undefined4)((ulonglong)local_d8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_d8);
    uVar7 = (undefined4)uVar11;
    uVar16 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_bc & 0xffffff) == 0) {
    dVar10 = local_c8;
  }
  else {
    dVar10 = (double)FUN_140e4b060(&local_c8);
  }
  fVar19 = (float)(double)CONCAT44(uVar13,uVar4);
  fVar20 = (float)(double)CONCAT44(uVar14,uVar5);
  FUN_140ec5dd0(param_1,(longlong)dVar10,(float)(double)CONCAT44(uVar16,uVar7),
                (float)(double)CONCAT44(uVar15,uVar6),fVar20,fVar19,
                (float)(double)CONCAT44(uVar18,uVar9),(float)(double)CONCAT44(uVar17,uVar8),0xffffff
                ,0x3f800000);
  local_98 = 0xbf;
  local_10c = 6;
  uVar22 = (uint)fVar19 & 0xffffff00;
  uVar21 = (uint)fVar20 & 0xffffff00;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_108,uVar21,uVar22);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_f8,uVar21 & 0xffffff00,
                uVar22 & 0xffffff00);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_dc = local_fc;
  local_e0 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_108;
  }
  else {
    FUN_1400419b0(&local_e8,&local_108);
  }
  local_ac = 7;
  local_b8[0] = 1;
  FUN_1400462a0(&local_e8,local_b8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  local_10c = 0xf;
  local_118 = (longlong *)0x10000010000005c;
  if ((local_ec & 0xffffff) == 0) {
    uVar8 = (undefined4)local_f8;
    uVar17 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_f8);
    uVar8 = (undefined4)uVar11;
    uVar17 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar9 = (undefined4)local_e8;
    uVar18 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar11 = FUN_140e4b060(&local_e8);
    uVar9 = (undefined4)uVar11;
    uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  }
  if ((local_10c & 0xffffff) == 0) {
    plVar12 = local_118;
  }
  else {
    plVar12 = (longlong *)FUN_140e4b060(&local_118);
  }
  FUN_140ec5d30(param_1,(int)(double)plVar12,0,(float)(double)CONCAT44(uVar18,uVar9),
                (float)(double)CONCAT44(uVar17,uVar8));
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
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


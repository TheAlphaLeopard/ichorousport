// gml_Object_oIKArm_Step_0 @ 0x140b12280

void gml_Object_oIKArm_Step_0(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  double *pdVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar12;
  ulonglong in_stack_fffffffffffffee8;
  ulonglong in_stack_fffffffffffffef0;
  ulonglong uVar16;
  longlong *local_108;
  undefined4 local_100;
  uint local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_90 = "gml_Object_oHoarderSword_Step_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_88 = 3;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  local_fc = 0;
  local_108 = (longlong *)0x3fb999999999999a;
  FUN_140042560(&local_108,uVar2);
  FUN_1400460e0(uVar3,&local_108);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_88 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  local_fc = 6;
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  in_stack_fffffffffffffee8 = in_stack_fffffffffffffee8 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_70,in_stack_fffffffffffffee8,
                in_stack_fffffffffffffef0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  local_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  FUN_140042560(&local_108,uVar2);
  FUN_1400460e0(&local_70,&local_108);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_70);
  local_88 = 6;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  local_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_80,
                in_stack_fffffffffffffee8 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_100 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_108 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_108,puVar5);
  }
  FUN_140042560(&local_108,uVar2);
  FUN_1400460e0(&local_80,&local_108);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_80);
  local_88 = 8;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  uVar16 = 0;
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar6,0);
  local_88 = 10;
  pdVar7 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  local_fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fded8,0x80000000,&local_a8,uVar6,uVar16);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fdd18,0x80000000,&local_b8,uVar6,uVar16);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_c8,uVar6,uVar16);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 6;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar6 = uVar6 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_f8,uVar6,uVar16);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = local_ec;
  local_100 = local_f0;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
    local_108 = local_f8;
  }
  else {
    FUN_1400419b0(&local_108,&local_f8);
  }
  FUN_1400460e0(&local_108,puVar5);
  local_dc = local_bc;
  local_e0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  FUN_1400460e0(&local_e8,puVar4);
  if ((local_fc & 0xffffff) == 0) {
    uVar8 = SUB84(local_108,0);
    uVar13 = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_108);
    uVar8 = (undefined4)uVar2;
    uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_dc & 0xffffff) == 0) {
    uVar9 = (undefined4)local_e8;
    uVar14 = (undefined4)((ulonglong)local_e8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_e8);
    uVar9 = (undefined4)uVar2;
    uVar14 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_ac & 0xffffff) == 0) {
    uVar10 = (undefined4)local_b8;
    uVar15 = (undefined4)((ulonglong)local_b8 >> 0x20);
  }
  else {
    uVar2 = FUN_140e4b060(&local_b8);
    uVar10 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  if ((local_9c & 0xffffff) == 0) {
    dVar12 = local_a8;
  }
  else {
    dVar12 = (double)FUN_140e4b060(&local_a8);
  }
  fVar11 = (float)FUN_140e793d0((float)dVar12,(float)(double)CONCAT44(uVar15,uVar10),
                                (float)(double)CONCAT44(uVar14,uVar9),
                                (float)(double)CONCAT44(uVar13,uVar8));
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar7);
  }
  *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
  *pdVar7 = (double)fVar11;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_88 = 0xc;
  local_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_f8,uVar6 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = (longlong *)0x4085e00000000000;
  uVar1 = FUN_140e851f0(&local_f8,&local_108,DAT_141955260,1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (uVar1 < 0x80000000) {
    local_88 = 0xd;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}


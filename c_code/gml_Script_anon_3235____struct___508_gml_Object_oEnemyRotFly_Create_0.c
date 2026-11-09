// gml_Script_anon_3235____struct___508_gml_Object_oEnemyRotFly_Create_0 @ 0x140a28230

undefined8 *
gml_Script_anon_3235____struct___508_gml_Object_oEnemyRotFly_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar8;
  longlong *plVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  uint local_ec;
  undefined8 local_e8;
  uint local_dc;
  undefined8 local_d8;
  uint local_cc;
  undefined8 local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint local_ac;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  
  local_80 = "gml_Script_anon@2972@___struct___507@gml_Object_oEnemyRotFly_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xaf;
  uVar2 = (**(code **)(*param_1 + 8))(0,DAT_1419f19a8);
  FUN_140e87170(uVar2,DAT_141a0cfc8,0x80000000,&local_f8,param_1,param_2);
  local_8c = 0;
  local_98 = 0x401c000000000000;
  iVar1 = FUN_140e851f0(&local_f8,&local_98,DAT_141955260,1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar1 != -2 && iVar1 < 0) {
    local_78 = 0xb0;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f19a8);
    FUN_140e87170(uVar2,DAT_141a0a728,0x80000000,&local_a8,param_1,param_2);
    FUN_140e87170(uVar2,DAT_141a0cfc8,0x80000000,&local_f8,param_1,param_2);
    FUN_140e87170(uVar2,DAT_1419fe0e8,0x80000000,&local_b8,param_1,param_2);
    plVar14 = param_1;
    uVar17 = param_2;
    FUN_140e87170(uVar2,DAT_1419fe158,0x80000000,&local_c8,param_1,param_2);
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar15 = (ulonglong)plVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f1988,0x80000000,&local_d8,uVar15,uVar17);
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_141a0a7f8,0x80000000,&local_e8,uVar15,uVar17);
    uVar16 = (undefined4)(uVar15 >> 0x20);
    uVar18 = (undefined4)(uVar17 >> 0x20);
    if ((local_dc & 0xffffff) == 0) {
      uVar3 = (undefined4)local_e8;
      uVar9 = (undefined4)((ulonglong)local_e8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_e8);
      uVar3 = (undefined4)uVar2;
      uVar9 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_cc & 0xffffff) == 0) {
      uVar4 = (undefined4)local_d8;
      uVar10 = (undefined4)((ulonglong)local_d8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_d8);
      uVar4 = (undefined4)uVar2;
      uVar10 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_bc & 0xffffff) == 0) {
      uVar5 = (undefined4)local_c8;
      uVar11 = (undefined4)((ulonglong)local_c8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_c8);
      uVar5 = (undefined4)uVar2;
      uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_ac & 0xffffff) == 0) {
      uVar6 = (undefined4)local_b8;
      uVar12 = (undefined4)((ulonglong)local_b8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_b8);
      uVar6 = (undefined4)uVar2;
      uVar12 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_ec & 0xffffff) == 0) {
      uVar7 = (undefined4)local_f8;
      uVar13 = (undefined4)((ulonglong)local_f8 >> 0x20);
    }
    else {
      uVar2 = FUN_140e4b060(&local_f8);
      uVar7 = (undefined4)uVar2;
      uVar13 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    if ((local_9c & 0xffffff) == 0) {
      dVar8 = local_a8;
    }
    else {
      dVar8 = (double)FUN_140e4b060(&local_a8);
    }
    FUN_140ec5dd0(param_1,(longlong)dVar8,(float)(double)CONCAT44(uVar13,uVar7),
                  (float)(double)CONCAT44(uVar12,uVar6),
                  CONCAT44(uVar16,(float)(double)CONCAT44(uVar11,uVar5)),
                  CONCAT44(uVar18,(float)(double)CONCAT44(uVar10,uVar4)),0x3f800000,
                  (float)(double)CONCAT44(uVar9,uVar3),0xffffff,0x3f800000);
  }
  local_78 = 0xb2;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar2,0);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
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
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


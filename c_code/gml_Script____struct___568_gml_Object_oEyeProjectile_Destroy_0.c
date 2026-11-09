// gml_Script____struct___568_gml_Object_oEyeProjectile_Destroy_0 @ 0x140acb080

void gml_Script____struct___568_gml_Object_oEyeProjectile_Destroy_0
               (longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_d8;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_b0 = "gml_Object_oEyeProjectile_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  uStack_4c = 0xffffff;
  local_58 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_a8 = 3;
  FUN_140e98b30();
  local_a8 = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feaa8);
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x100000000000032;
  FUN_140e87170(&local_d8,DAT_141a101f8,0x80000000,&local_58,param_1,param_2);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_58 != puVar3) {
    local_c8 = local_58;
    uStack_c0 = uStack_50;
    uStack_bc = uStack_4c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe9a8);
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_98 != puVar3) {
    local_c8 = local_98;
    uStack_c0 = uStack_90;
    uStack_bc = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419feba8);
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x1000000000000ee;
  plVar8 = param_1;
  uVar10 = param_2;
  FUN_140e87170(&local_d8,DAT_1419fe158,0x80000000,&local_68,param_1,param_2);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_68 != puVar3) {
    local_c8 = local_68;
    uStack_c0 = uStack_60;
    uStack_bc = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2a78);
  uStack_cc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe158,0x80000000,&local_78,uVar9,uVar10);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e609c0(param_1);
  if (&local_78 != puVar3) {
    local_c8 = local_78;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2a58);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9a8);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe988);
  uStack_cc = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_88,uVar9,uVar10);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_cc = *(uint *)((longlong)puVar3 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = (longlong *)*puVar3;
  }
  else {
    FUN_1400419b0(&local_d8,puVar3);
  }
  FUN_1400462a0(&local_d8,&local_88);
  if ((uStack_cc & 0xffffff) == 0) {
    uVar7 = SUB84(local_d8,0);
  }
  else {
    uVar7 = FUN_140e4b060(&local_d8);
  }
  uVar5 = FUN_140e78d00(uVar7);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar5;
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_a8 = 0xd;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 0xf;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_cc = 6;
  local_d8 = param_1;
  FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  uStack_cc = 0xf;
  local_d8 = (longlong *)0x1000000000000ee;
  FUN_140e87170(&local_d8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  iVar2 = FUN_140e851f0(&local_88,&local_98,DAT_141955260,1);
  bVar6 = iVar2 == -2 || -1 < iVar2;
  if (bVar6) {
    uStack_cc = 0;
    local_d8 = (longlong *)&DAT_bff0000000000000;
    puVar4 = &local_d8;
  }
  else {
    uStack_bc = 0;
    local_c8 = 0x3ff0000000000000;
    puVar4 = &local_c8;
  }
  uVar7 = uStack_bc;
  uVar1 = uStack_cc;
  FUN_140e609c0(param_1);
  if (puVar4 != puVar3) {
    local_48 = *(undefined4 *)puVar4;
    uStack_44 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_40 = *(undefined4 *)(puVar4 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_48);
  }
  if ((bVar6) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_d8);
  }
  if ((iVar2 != -2 && -1 >= iVar2) && ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_a8 = 0x10;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  FUN_140e609c0(param_1);
  uStack_cc = 0;
  local_d8 = (longlong *)0x4008000000000000;
  FUN_140042560(&local_d8,uVar5);
  if (&local_d8 != puVar3) {
    local_48 = (undefined4)local_d8;
    uStack_44 = local_d8._4_4_;
    uStack_40 = uStack_d0;
    uStack_3c = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_48);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 0x11;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x4024000000000000;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return;
}


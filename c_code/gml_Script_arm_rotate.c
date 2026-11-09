// gml_Script_arm_rotate @ 0x14022d410

undefined8 *
gml_Script_arm_rotate
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar9;
  double dVar8;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  uint local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_80 = "gml_Script_arm_relocate";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_54 = 0xffffff;
  local_60 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 7;
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_60,0,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  FUN_1400462a0(&local_f8,&local_60);
  local_98 = (undefined4)local_f8;
  uStack_94 = local_f8._4_4_;
  uStack_90 = uStack_f0;
  uStack_8c = uStack_ec;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_98);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uStack_ec = 6;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_70,0,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  FUN_1400462a0(&local_f8,&local_70);
  local_98 = (undefined4)local_f8;
  uStack_94 = local_f8._4_4_;
  uStack_90 = uStack_f0;
  uStack_8c = uStack_ec;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_98);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_78 = 10;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  uVar7 = 0;
  uVar9 = 0;
  local_e8 = 0.0;
  bVar1 = true;
  do {
    dVar8 = (double)CONCAT44(uVar9,uVar7);
    if (!bVar1) {
      local_78 = 10;
      uVar2 = local_dc & 0xffffff;
      if (uVar2 != 0) {
        if (uVar2 != 1) {
          if (uVar2 == 7) {
            local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
          }
          else if (uVar2 == 10) {
            local_e8 = (double)((longlong)local_e8 + 1);
          }
          else {
            if (uVar2 == 0xd) goto LAB_14022d736;
            FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
          }
          goto LAB_14022d748;
        }
        dVar8 = (double)FUN_140e4b060(&local_e8);
LAB_14022d736:
        local_dc = 0;
      }
      local_e8 = dVar8 + 1.0;
    }
LAB_14022d748:
    bVar1 = false;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar3 = FUN_140e851f0(&local_e8,uVar4,DAT_141955260,1);
    if ((iVar3 == -2) || (0 < iVar3)) break;
    local_78 = 0xb;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
    FUN_140e609c0(param_1);
    uVar7 = FUN_140e4a740(&local_e8);
    uVar4 = FUN_140e48e40(puVar5,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar5);
    FUN_1400460e0(uVar4,&local_a8);
    FUN_140e60910(2);
    local_78 = 0xc;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
    FUN_140e609c0(param_1);
    uVar7 = FUN_140e4a740(&local_e8);
    uVar4 = FUN_140e48e40(puVar5,uVar7);
    FUN_140e609c0(*(undefined8 *)*puVar5);
    FUN_1400460e0(uVar4,&local_b8);
    FUN_140e60910(2);
    uVar7 = SUB84(local_e8,0);
    uVar9 = (undefined4)((ulonglong)local_e8 >> 0x20);
  } while( true );
  local_78 = 0xf;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 == &local_c8) goto LAB_14022d88f;
  }
  local_98 = *(undefined4 *)puVar5;
  uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_90 = *(undefined4 *)(puVar5 + 1);
  uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_98);
LAB_14022d88f:
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_c8);
  local_78 = 0x10;
  if ((param_4 < 2) || (puVar6 = (undefined8 *)param_5[1], puVar6 != &local_d8)) {
    local_98 = *(undefined4 *)puVar6;
    uStack_94 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_98);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_d8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


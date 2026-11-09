// gml_Script____struct___331_gml_Object_oBossClot_Create_0 @ 0x1407067d0

undefined8 *
gml_Script____struct___331_gml_Object_oBossClot_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong **pplVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong **pplVar8;
  bool bVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_d0 = "gml_Script_anon@9615@___struct___331@gml_Object_oBossClot_Create_0";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1e4;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x10000010000030e;
  local_138 = (longlong *)0x10000010000030e;
  uStack_12c = 0xf;
  FUN_140041b80(&local_68,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_68);
  local_c8 = 0x1e5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_e8);
  local_c8 = 0x1e6;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f8);
  local_c8 = 0x1e8;
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uStack_12c = 0xf;
  local_138 = (longlong *)0x1000000000000ee;
  plVar10 = param_1;
  uVar12 = param_2;
  FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_78,param_1,param_2);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = (ulonglong)plVar10 & 0xffffffffffffff00;
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_1419fe0e8,0x80000000,&local_a8,uVar11,uVar12);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  iVar3 = FUN_140e851f0(&local_78,&local_a8,DAT_141955260,1);
  bVar9 = iVar3 == -2 || -1 < iVar3;
  if (bVar9) {
    uStack_12c = 0;
    local_138 = (longlong *)0x3ff0000000000000;
    pplVar8 = (longlong **)&local_138;
  }
  else {
    uStack_11c = 0;
    local_128 = (longlong *)&DAT_bff0000000000000;
    pplVar8 = &local_128;
  }
  uVar2 = uStack_11c;
  uVar1 = uStack_12c;
  FUN_140e609c0(param_1);
  if (pplVar8 != pplVar4) {
    local_98 = *(undefined4 *)pplVar8;
    uStack_94 = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_90 = *(undefined4 *)(pplVar8 + 1);
    uStack_8c = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_98);
  }
  if ((bVar9) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_c8 = 0x1ea;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_108);
  local_c8 = 0x1eb;
  uStack_11c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_a8,uVar11,uVar12);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_98 = (undefined4)local_a8;
  uStack_94 = local_a8._4_4_;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_98);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419f71d8,0x80000000,&local_c0);
  local_c8 = 0x1ed;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_130 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_138,puVar6);
  }
  uStack_11c = 0;
  local_128 = (longlong *)0x3ff8000000000000;
  FUN_140042560(&local_138,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (&local_138 != puVar7) {
    local_98 = (undefined4)local_138;
    uStack_94 = local_138._4_4_;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_98);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_c8 = 0x1ee;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_130 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)*puVar6;
  }
  else {
    FUN_1400419b0(&local_138,puVar6);
  }
  uStack_11c = 0;
  local_128 = (longlong *)0x3fe0000000000000;
  FUN_140042560(&local_138,&local_128);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (&local_138 != puVar7) {
    local_98 = (undefined4)local_138;
    uStack_94 = local_138._4_4_;
    uStack_90 = uStack_130;
    uStack_8c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_98);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_c8 = 0x1f0;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06778);
  FUN_140e87440(uVar5,DAT_1419f4a98,0x80000000,&local_88,uVar11 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  FUN_140e63610(uVar5,param_2,&local_118,0,&local_88,0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


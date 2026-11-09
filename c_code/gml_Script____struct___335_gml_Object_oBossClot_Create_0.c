// gml_Script____struct___335_gml_Object_oBossClot_Create_0 @ 0x140711520

undefined8 *
gml_Script____struct___335_gml_Object_oBossClot_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined8 *puVar5;
  longlong **pplVar6;
  byte bVar7;
  bool bVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_100 = "gml_Script_anon@17042@___struct___335@gml_Object_oBossClot_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_64 = 0xffffff;
  local_70 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x37d;
  uStack_130 = CONCAT44(0xf,(undefined4)uStack_130);
  local_138 = (longlong *)0x10000010000030e;
  local_148 = (longlong *)0x10000010000030e;
  uStack_13c = 0xf;
  FUN_140041b80(&local_70,&local_148);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_70);
  local_f8 = 0x37e;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d0);
  local_f8 = 0x37f;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e0);
  local_f8 = 0x381;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  plVar9 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_80,param_1,param_2);
  uStack_13c = 6;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)plVar9 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_90,uVar10,uVar11);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  iVar2 = FUN_140e851f0(&local_80,&local_90,DAT_141955260,1);
  bVar8 = iVar2 == -2 || -1 < iVar2;
  if (bVar8) {
    uStack_13c = 0;
    local_148 = (longlong *)0x3ff0000000000000;
    pplVar6 = &local_148;
    bVar7 = uStack_130._4_1_;
  }
  else {
    uStack_130 = uStack_130 & 0xffffffff;
    local_138 = (longlong *)&DAT_bff0000000000000;
    pplVar6 = &local_138;
    bVar7 = 0;
  }
  uVar1 = uStack_13c;
  FUN_140e609c0(param_1);
  if (pplVar6 != pplVar4) {
    local_118 = *pplVar6;
    uStack_110 = pplVar6[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_118);
  }
  if ((bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  if ((iVar2 != -2 && -1 >= iVar2) && ((1 << (bVar7 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0x382;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  local_118 = (longlong *)CONCAT44(DAT_141dd6078._4_4_,(undefined4)DAT_141dd6078);
  uStack_110 = (longlong *)CONCAT44(DAT_141dd6084,DAT_141dd6080);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_118);
  FUN_140e87930(uVar3,DAT_141a0ab48,0x80000000,&local_b0);
  local_f8 = 899;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_f0);
  local_f8 = 900;
  uStack_130 = CONCAT44(0xd,(undefined4)uStack_130);
  local_138 = (longlong *)0x0;
  local_118 = (longlong *)0x0;
  uStack_110 = (longlong *)uStack_130;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_118);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a064c8,0x80000000,&local_c0);
  local_f8 = 0x386;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  FUN_140e609c0(param_1);
  uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_140 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_148,puVar5);
  }
  uStack_130 = uStack_130 & 0xffffffff;
  local_138 = (longlong *)0x3ff8000000000000;
  FUN_140042560(&local_148,&local_138);
  if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (&local_148 != pplVar4) {
    local_118 = local_148;
    uStack_110 = (longlong *)CONCAT44(uStack_13c,uStack_140);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_118);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x387;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
  pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  FUN_140e609c0(param_1);
  uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_140 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
    local_148 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_148,puVar5);
  }
  uStack_130 = uStack_130 & 0xffffffff;
  local_138 = (longlong *)0x3fe0000000000000;
  FUN_140042560(&local_148,&local_138);
  if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (&local_148 != pplVar4) {
    local_118 = local_148;
    uStack_110 = (longlong *)CONCAT44(uStack_13c,uStack_140);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar4);
    }
    FUN_140041b80(pplVar4,&local_118);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_f8 = 0x389;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06778);
  FUN_140e87440(uVar3,DAT_1419f4a98,0x80000000,&local_a0,uVar10 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_128,0,&local_a0,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}


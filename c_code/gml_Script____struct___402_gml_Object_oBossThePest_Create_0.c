// gml_Script____struct___402_gml_Object_oBossThePest_Create_0 @ 0x14081bd60

undefined8 *
gml_Script____struct___402_gml_Object_oBossThePest_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  bool bVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong *local_res18 [2];
  longlong *plVar11;
  longlong *local_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  ulonglong local_80;
  byte local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  
  local_90 = "gml_Script_anon@9716@___struct___402@gml_Object_oBossThePest_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x231;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_80,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = (longlong *)0x0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_54 = 0;
  local_60 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x232;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar3 != &local_80) {
    local_e8 = (longlong *)*puVar3;
    uStack_e0 = (undefined4)puVar3[1];
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_e8);
  }
  local_res18[0] = &local_80;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_60,1,CONCAT44(uVar9,DAT_141a02ef8),local_res18);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 == '\0') {
    local_88 = 0x232;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar3 = (ulonglong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar5 = (ulonglong *)gml_Script_FracPos(param_1,param_2,&local_f8,0,0);
    if (puVar5 != puVar3) {
      local_e8 = (longlong *)*puVar5;
      uStack_e0 = (undefined4)puVar5[1];
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_88 = 0x234;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09ba8);
  cVar2 = FUN_140e491e0(uVar4);
  bVar8 = cVar2 == '\0';
  if (bVar8) {
    uStack_10c = 0xf;
    local_118 = (longlong *)0x100000100000367;
    pplVar7 = &local_118;
  }
  else {
    uStack_fc = 0xf;
    local_108 = (longlong *)0x100000100000368;
    pplVar7 = &local_108;
  }
  uVar9 = uStack_fc;
  uVar1 = uStack_10c;
  local_e8 = *pplVar7;
  uStack_e0 = *(undefined4 *)(pplVar7 + 1);
  uStack_dc = *(undefined4 *)((longlong)pplVar7 + 0xc);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_e8);
  if (bVar8) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
  }
  if (!bVar8) {
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_a8);
  local_88 = 0x235;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_b8);
  local_88 = 0x237;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_c8);
  local_88 = 0x238;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar11 = param_1;
  FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
  uStack_fc = 6;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_70,
                (ulonglong)plVar11 & 0xffffffffffffff00,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  uStack_10c = local_cc;
  uStack_110 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_118 = local_d8;
  }
  else {
    FUN_1400419b0(&local_118,&local_d8);
  }
  FUN_1400462a0(&local_118,&local_70);
  if ((uStack_10c & 0xffffff) == 0) {
    uVar9 = SUB84(local_118,0);
  }
  else {
    uVar9 = FUN_140e4b060(&local_118);
  }
  uVar4 = FUN_140e79500(uVar9);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar6);
  }
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
  *puVar6 = uVar4;
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_88 = 0x239;
  puVar3 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  FUN_140e609c0(param_1);
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar10 = *puVar3;
  }
  else {
    uVar10 = FUN_140e4b060(puVar3);
  }
  uStack_dc = 0;
  local_118 = (longlong *)(uVar10 ^ 0x8000000000000000);
  uStack_10c = 0;
  uStack_110 = uStack_e0;
  uStack_fc = 0;
  local_108 = (longlong *)0x4012000000000000;
  local_e8 = local_118;
  FUN_140042560(&local_118,&local_108);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (&local_118 != pplVar7) {
    local_108 = local_118;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
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
  _eh_vector_destructor_iterator_(&local_80,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


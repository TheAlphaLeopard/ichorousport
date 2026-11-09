// gml_Script____struct___485_gml_Object_oEnemyMoistMan_Create_0 @ 0x1409e12b0

undefined8 *
gml_Script____struct___485_gml_Object_oEnemyMoistMan_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  bool bVar9;
  undefined8 *local_res18 [2];
  undefined4 uVar11;
  longlong *plVar10;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  byte local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_f0 = "gml_Script_anon@3952@___struct___485@gml_Object_oEnemyMoistMan_Create_0";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xbf;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_64 = 0;
  local_70 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xc0;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_a0) {
    local_128 = (longlong *)*puVar4;
    uStack_120 = *(undefined4 *)(puVar4 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_128);
  }
  local_res18[0] = &local_a0;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_70,1,CONCAT44(uVar11,DAT_141a02ef8),local_res18);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_e8 = 0xc0;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar6 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_108,0,0);
    if (puVar6 != puVar4) {
      local_128 = (longlong *)*puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_128);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0xc1;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000001000001c1;
  local_118 = (longlong *)0x1000001000001c1;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_118);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b0);
  local_e8 = 0xc2;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_c0);
  local_e8 = 0xc3;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419f0ed8,0x80000000,&local_d0);
  local_e8 = 0xc4;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar5,DAT_1419effa8,0x80000000,&local_e0);
  local_e8 = 0xc5;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57de0);
  uStack_11c = 0xd;
  local_128 = (longlong *)0x0;
  if (&local_128 != pplVar7) {
    local_118 = (longlong *)0x0;
    uStack_110 = uStack_120;
    uStack_10c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_118);
  }
  local_e8 = 199;
  pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar10 = param_1;
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_80,param_1,param_2);
  uStack_10c = 6;
  local_118 = param_1;
  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_90,
                (ulonglong)plVar10 & 0xffffffffffffff00,param_2 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  iVar3 = FUN_140e851f0(&local_80,&local_90,DAT_141955260,1);
  bVar9 = iVar3 == -2 || -1 < iVar3;
  if (bVar9) {
    uStack_10c = 0;
    local_118 = (longlong *)0x3ff0000000000000;
    pplVar8 = &local_118;
  }
  else {
    uStack_11c = 0;
    local_128 = (longlong *)&DAT_bff0000000000000;
    pplVar8 = &local_128;
  }
  uVar1 = uStack_10c;
  uVar11 = uStack_11c;
  FUN_140e609c0(param_1);
  if (pplVar8 != pplVar7) {
    local_60 = *(undefined4 *)pplVar8;
    uStack_5c = *(undefined4 *)((longlong)pplVar8 + 4);
    uStack_58 = *(undefined4 *)(pplVar8 + 1);
    uStack_54 = *(undefined4 *)((longlong)pplVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_60);
  }
  if ((bVar9) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_118);
  }
  if ((iVar3 != -2 && -1 >= iVar3) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  local_e8 = 0xc9;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
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
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}


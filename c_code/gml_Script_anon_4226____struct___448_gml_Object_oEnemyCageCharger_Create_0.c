// gml_Script_anon_4226____struct___448_gml_Object_oEnemyCageCharger_Create_0 @ 0x14094dbc0

undefined8 *
gml_Script_anon_4226____struct___448_gml_Object_oEnemyCageCharger_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong **pplVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined8 *local_res18 [2];
  longlong *plVar11;
  ulonglong uVar12;
  longlong *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  uint local_e4;
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
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  local_110 = "gml_Script_anon@3496@___struct___448@gml_Object_oEnemyCageCharger_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0xb0;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = (longlong *)0x0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_12c = 0;
  local_138 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0xb1;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_a0) {
    local_148 = (longlong *)*puVar4;
    uStack_140 = *(undefined4 *)(puVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_148);
  }
  local_res18[0] = &local_a0;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar10,DAT_141a02ef8),local_res18);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_108 = 0xb1;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar6 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_128,0,0);
    if (puVar6 != puVar4) {
      local_148 = (longlong *)*puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_148);
    }
    FUN_140e60910(1);
  }
  local_108 = 0xb2;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000100000095;
  local_158 = (longlong *)0x100000100000095;
  uStack_150 = uStack_140;
  uStack_14c = 0xf;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_158);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b0);
  local_108 = 0xb3;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d0);
  local_108 = 0xb4;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e0);
  local_108 = 0xb6;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_108 = 0xb7;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  plVar11 = param_1;
  uVar12 = param_2;
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_f0,param_1,param_2);
  uStack_14c = 6;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_90,
                (ulonglong)plVar11 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = local_e4;
  uStack_150 = local_e8;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
    local_158 = local_f0;
  }
  else {
    FUN_1400419b0(&local_158,&local_f0);
  }
  FUN_1400462a0(&local_158,&local_90);
  if ((uStack_14c & 0xffffff) == 0) {
    uVar10 = SUB84(local_158,0);
  }
  else {
    uVar10 = FUN_140e4b060(&local_158);
  }
  uVar5 = FUN_140e79500(uVar10);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = uVar5;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_108 = 0xb8;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_100);
  local_108 = 0xba;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57480);
  uStack_14c = 0;
  local_158 = (longlong *)0x3ff0000000000000;
  iVar3 = FUN_140e851f0(uVar5,&local_158,DAT_141955260,0);
  bVar9 = iVar3 != 0;
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (bVar9) {
    uStack_14c = 0;
    local_158 = (longlong *)0x4066800000000000;
    pplVar8 = &local_158;
  }
  else {
    uStack_13c = 0;
    local_148 = (longlong *)0x0;
    pplVar8 = &local_148;
  }
  uVar10 = uStack_13c;
  uVar1 = uStack_14c;
  local_80 = *(undefined4 *)pplVar8;
  uStack_7c = *(undefined4 *)((longlong)pplVar8 + 4);
  uStack_78 = *(undefined4 *)(pplVar8 + 1);
  uStack_74 = *(undefined4 *)((longlong)pplVar8 + 0xc);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_80);
  if (bVar9) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if ((!bVar9) && ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  FUN_140e87930(uVar7,DAT_141a1eed0,0x80000000,&local_c0);
  local_108 = 0xbc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_138,0,uVar5,0);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}


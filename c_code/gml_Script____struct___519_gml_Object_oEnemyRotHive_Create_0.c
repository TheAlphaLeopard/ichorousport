// gml_Script____struct___519_gml_Object_oEnemyRotHive_Create_0 @ 0x140a49df0

undefined8 *
gml_Script____struct___519_gml_Object_oEnemyRotHive_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  longlong *local_d0;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_120 = "gml_Script_anon@14139@___struct___519@gml_Object_oEnemyRotHive_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x2ca;
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_15c = 0;
  local_168 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x2cc;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x1000001000002a2;
  local_148 = (longlong *)0x1000001000002a2;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  FUN_140041b80(&local_78,&local_148);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_78);
  local_118 = 0x2cd;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uStack_14c = 0xf;
  local_158 = (longlong *)0x10000010000029b;
  local_148 = (longlong *)0x10000010000029b;
  uStack_140 = uStack_150;
  uStack_13c = 0xf;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_148);
  FUN_140e86c30(uVar6,DAT_141a0a728,0x80000000,&local_a8);
  local_118 = 0x2ce;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e86c30(uVar6,DAT_141a0cfc8,0x80000000,&local_c0);
  local_118 = 0x2cf;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09668);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x403e000000000000;
  local_118 = 0x2d1;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar7 != &local_138) {
    local_158 = (longlong *)*puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_b0 = &local_138;
  uVar14 = CONCAT44(uVar13,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar14,&local_b0);
  uVar13 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar5 = FUN_140e491e0(uVar6);
  if (cVar5 == '\0') {
    local_118 = 0x2d2;
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    local_110 = 0;
    local_108 = 0;
    local_104 = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    uVar13 = 0;
    puVar9 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_110,0,0);
    if (puVar9 != puVar8) {
      local_158 = (longlong *)*puVar9;
      uStack_150 = *(undefined4 *)(puVar9 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_158);
    }
    FUN_140e60910(1);
  }
  local_118 = 0x2d4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  pplVar10 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar7 != &local_138) {
    local_158 = (longlong *)*puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  local_b0 = &local_138;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar13,DAT_141a02ef8),&local_b0);
  cVar5 = FUN_140e491e0(uVar6);
  if (cVar5 == '\0') {
    uStack_14c = 0;
    local_158 = (longlong *)0x0;
    pplVar12 = &local_158;
    bVar3 = false;
    bVar2 = true;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    plVar15 = param_1;
    uVar11 = param_2;
    FUN_140e87170(uVar6,DAT_1419fe0e8,0x80000000,&local_d0,param_1,param_2);
    uStack_14c = 6;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_88,
                  (ulonglong)plVar15 & 0xffffffffffffff00,uVar11 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_13c = local_c4;
    uStack_140 = local_c8;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
      local_148 = local_d0;
    }
    else {
      FUN_1400419b0(&local_148,&local_d0);
    }
    FUN_1400462a0(&local_148,&local_88);
    if ((uStack_13c & 0xffffff) == 0) {
      uVar13 = SUB84(local_148,0);
    }
    else {
      uVar13 = FUN_140e4b060(&local_148);
    }
    dVar1 = (double)FUN_140e79500(uVar13);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    uStack_13c = 0;
    pplVar12 = &local_148;
    bVar3 = true;
    bVar2 = false;
    local_148 = (longlong *)(dVar1 * -2.5);
  }
  uVar4 = uStack_13c;
  uVar13 = uStack_14c;
  FUN_140e609c0(param_1);
  if (pplVar12 != pplVar10) {
    local_68 = *(undefined4 *)pplVar12;
    uStack_64 = *(undefined4 *)((longlong)pplVar12 + 4);
    uStack_60 = *(undefined4 *)(pplVar12 + 1);
    uStack_5c = *(undefined4 *)((longlong)pplVar12 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar10);
    }
    FUN_140041b80(pplVar10,&local_68);
  }
  if (bVar2) {
    if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if ((bVar3) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  local_118 = 0x2d6;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  local_d4 = 0;
  local_e0 = 0;
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_e0);
  local_118 = 0x2d7;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a0a968,0x80000000,&local_f0);
  local_118 = 0x2d8;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_118 = 0x2d9;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar6,DAT_141a07db8,0x80000000,&local_100);
  local_118 = 0x2db;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  uVar16 = 0;
  FUN_140e63610(param_1,param_2,&local_168,0,uVar11,0);
  local_118 = 0x2dd;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09988);
  FUN_140e87440(uVar6,DAT_1419f4a98,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  uVar6 = FUN_140069500(uVar6);
  FUN_140e63610(uVar6,param_2,&local_168,0,&local_98,0);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}


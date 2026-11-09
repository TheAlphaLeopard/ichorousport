// gml_Script_anon_2828_gml_Object_oEnemyMoistMarauder_Create_0 @ 0x140a05490

undefined8 *
gml_Script_anon_2828_gml_Object_oEnemyMoistMarauder_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong **pplVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong *plVar10;
  bool bVar11;
  ulonglong uVar12;
  undefined4 uVar14;
  ulonglong uVar13;
  undefined8 **ppuVar15;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_a0 = "gml_Script_anon@2617@gml_Object_oEnemyMoistMarauder_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x71;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_f8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x72;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f16d8);
  if (puVar3 != &local_f8) {
    local_148 = (longlong *)*puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_68 = &local_f8;
  uVar6 = CONCAT44(uVar9,DAT_141a00e28);
  pplVar4 = (longlong **)FUN_140e634e0(param_1,param_2,&local_138,1,uVar6,&local_68);
  uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
  plVar10 = (longlong *)0x0;
  uVar9 = 0xffffff;
  if (pplVar4 != &local_118) {
    local_148 = *pplVar4;
    uStack_140 = *(undefined4 *)(pplVar4 + 1);
    uStack_13c = *(undefined4 *)((longlong)pplVar4 + 0xc);
    FUN_140041b80(&local_118,&local_148);
    plVar10 = local_118;
    uVar9 = local_10c;
  }
  local_98 = 0x73;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if (puVar3 != &local_f8) {
    local_148 = (longlong *)*puVar3;
    uStack_140 = *(undefined4 *)(puVar3 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
  }
  local_68 = &local_f8;
  ppuVar15 = &local_68;
  uVar13 = CONCAT44(uVar14,DAT_141a00d78);
  puVar5 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar13,ppuVar15);
  if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
    uVar12 = *puVar5;
  }
  else {
    uVar12 = FUN_140e4b060(puVar5);
  }
  local_148 = (longlong *)(uVar12 ^ 0x8000000000000000);
  uStack_13c = 0;
  local_158 = (longlong *)(uVar12 ^ 0x8000000000000000);
  uStack_150 = uStack_140;
  uStack_14c = 0;
  FUN_140041b80(&local_108,&local_158);
  local_98 = 0x74;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  uStack_14c = 6;
  uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_78,uVar13,uVar12);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_88,uVar13,uVar12 & 0xffffffffffffff00);
  uVar14 = (undefined4)(uVar13 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_148 = local_78;
  uStack_140 = uStack_70;
  uStack_13c = uStack_6c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_68 = &local_f8;
  local_148 = local_88;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_148);
  local_60 = local_e8;
  uStack_13c = 0xf;
  local_148 = (longlong *)0x100000000000149;
  local_158 = (longlong *)0x100000000000149;
  uStack_150 = uStack_140;
  uStack_14c = 0xf;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  ppuVar15 = &local_68;
  uVar13 = CONCAT44(uVar14,DAT_141a12628);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,3,uVar13,ppuVar15);
  cVar2 = FUN_140e491e0(uVar6);
  bVar11 = cVar2 == '\0';
  if (bVar11) {
    uStack_14c = 0;
    local_158 = (longlong *)&DAT_bff0000000000000;
    pplVar4 = &local_158;
  }
  else {
    uStack_13c = 0;
    local_148 = (longlong *)0x3ff0000000000000;
    pplVar4 = &local_148;
  }
  uVar1 = uStack_13c;
  uVar14 = uStack_14c;
  local_50 = *(undefined4 *)pplVar4;
  uStack_4c = *(undefined4 *)((longlong)pplVar4 + 4);
  uStack_48 = *(undefined4 *)(pplVar4 + 1);
  uStack_44 = *(undefined4 *)((longlong)pplVar4 + 0xc);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_50);
  if (bVar11) {
    if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
  }
  if (!bVar11) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
  }
  local_98 = 0x75;
  uStack_13c = 6;
  uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  uVar13 = uVar13 & 0xffffffffffffff00;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe0e8,0x80000000,&local_b8,uVar13,uVar12);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_14c = local_fc;
  uStack_150 = local_100;
  bVar7 = (byte)local_fc & 0x1f;
  if ((1 << bVar7 & 0x46U) == 0) {
    local_158 = local_108;
  }
  else {
    FUN_1400419b0(&local_158,&local_108);
  }
  FUN_140042560(&local_158,&local_128);
  FUN_1400460e0(&local_b8,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_b8);
  local_98 = 0x76;
  uStack_13c = 6;
  local_148 = param_1;
  FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_c8,uVar13 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  uStack_150 = local_110;
  bVar8 = (byte)uVar9 & 0x1f;
  uStack_14c = uVar9;
  if ((1 << bVar8 & 0x46U) == 0) {
    local_158 = plVar10;
  }
  else {
    FUN_1400419b0(&local_158,&local_118);
  }
  FUN_140042560(&local_158,&local_128);
  FUN_1400462a0(&local_c8,&local_158);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << bVar7 & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << bVar8 & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_f8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


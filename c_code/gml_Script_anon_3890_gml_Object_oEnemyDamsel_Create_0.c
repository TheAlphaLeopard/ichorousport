// gml_Script_anon_3890_gml_Object_oEnemyDamsel_Create_0 @ 0x14097a9b0

longlong *
gml_Script_anon_3890_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 uVar12;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_e0 = "gml_Script_anon@3607@gml_Object_oEnemyDamsel_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xa5;
  FUN_140041df0(local_78,param_4,1,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  uStack_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_12c = 0;
  uVar9 = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xa5;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_70;
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d8 = 0xa5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f0ab8);
    if ((int)local_78[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_70;
    }
    if (puVar4 != puVar6) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_158);
    }
  }
  local_d8 = 0xa6;
  bVar1 = false;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_c8) {
    local_158 = (longlong *)*puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  local_68 = &local_c8;
  ppuVar13 = &local_68;
  uVar10 = CONCAT44(uVar12,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar10,ppuVar13);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    uStack_14c = 6;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar10 = uVar10 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_f8,uVar10,uVar14);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_14c = 6;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_108,uVar10 & 0xffffffffffffff00,
                  uVar14 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_118,param_1,param_2);
    plVar11 = param_1;
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_128,param_1,param_2);
    uVar12 = (undefined4)((ulonglong)plVar11 >> 0x20);
    local_158 = local_f8;
    uStack_150 = uStack_f0;
    uStack_14c = uStack_ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_158);
    local_60 = local_b8;
    local_158 = local_108;
    uStack_150 = uStack_100;
    uStack_14c = uStack_fc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_158);
    local_58 = local_a8;
    local_158 = local_118;
    uStack_150 = uStack_110;
    uStack_14c = uStack_10c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_158);
    local_50 = local_98;
    local_158 = local_128;
    uStack_150 = uStack_120;
    uStack_14c = uStack_11c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_158);
    if (0 < (int)local_78[0]) {
      puVar7 = (undefined8 *)*local_70;
    }
    local_48 = local_88;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_148,4,CONCAT44(uVar12,DAT_1419fd548),&local_60);
    iVar3 = FUN_140e851f0(uVar5,puVar7,DAT_141955260,1);
    if (iVar3 == -2) {
      bVar1 = false;
    }
    else {
      bVar1 = iVar3 < 1;
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar1) {
    uVar9 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar9 << 0x20;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar7 = local_70;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


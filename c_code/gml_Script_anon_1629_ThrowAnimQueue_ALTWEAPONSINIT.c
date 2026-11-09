// gml_Script_anon_1629_ThrowAnimQueue_ALTWEAPONSINIT @ 0x140214180

undefined8 *
gml_Script_anon_1629_ThrowAnimQueue_ALTWEAPONSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  uint local_90 [2];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  
  local_100 = "gml_Script_anon@1271@ThrowAnimQueue@ALTWEAPONSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x23;
  FUN_140041df0(local_90,param_4,1,param_5);
  uVar14 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a8c8);
  local_12c = 0;
  uVar13 = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x23;
  puVar11 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_90[0];
  if ((int)local_90[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_88;
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (local_f8 = 0x23, 0 < (int)local_90[0])) &&
     (puVar9 = (undefined8 *)*local_88, puVar9 != &DAT_1419df7b0)) {
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_158);
  }
  local_f8 = 0x24;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a8e8);
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab78);
  local_98 = uVar7;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_128,gml_Script_anon_1488_ThrowAnimQueue_ALTWEAPONSINIT,0);
  if (&local_128 != puVar5) {
    local_158 = local_128;
    uStack_150 = uStack_120;
    uStack_14c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  FUN_140e60910(1);
  if (puVar5 != &local_e8) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_80 = &local_e8;
  cVar3 = FUN_140e491e0(uVar7);
  bVar12 = cVar3 == '\0';
  if (bVar12) {
    uStack_11c = 0xf;
    local_128 = 0x10000010000041a;
    puVar5 = &local_128;
  }
  else {
    uStack_14c = 0xf;
    local_158 = 0x10000010000041b;
    puVar5 = &local_158;
  }
  uVar2 = uStack_11c;
  uVar1 = uStack_14c;
  local_118 = *(undefined4 *)puVar5;
  uStack_114 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_110 = *(undefined4 *)(puVar5 + 1);
  uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  if ((bVar12) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((!bVar12) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  local_78 = local_d8;
  if (((int)local_90[0] < 1) || (puVar11 = (undefined8 *)*local_88, puVar11 != &local_c8)) {
    local_118 = *(undefined4 *)puVar11;
    uStack_114 = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_110 = *(undefined4 *)(puVar11 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_118);
  }
  local_70 = &local_c8;
  if (puVar6 != local_b8) {
    local_118 = *puVar6;
    uStack_114 = puVar6[1];
    uStack_110 = puVar6[2];
    uStack_10c = puVar6[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_118);
  }
  local_68 = local_b8;
  uVar7 = CONCAT44(uVar14,DAT_1419fd6d8);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,3,uVar7,&local_80);
  uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != local_a8) {
    local_118 = *puVar6;
    uStack_114 = puVar6[1];
    uStack_110 = puVar6[2];
    uStack_10c = puVar6[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
  }
  local_60 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_138,2,CONCAT44(uVar14,DAT_1419fe568),&local_68);
  local_f8 = 0x28;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab78);
  cVar3 = FUN_140e491e0(local_98);
  if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(plVar8);
  }
  *(undefined4 *)((longlong)plVar8 + 0xc) = 0xd;
  if (cVar3 == '\0') {
    uVar13 = 0x3ff00000;
  }
  *plVar8 = (ulonglong)uVar13 << 0x20;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
  if (0 < (int)local_90[0]) {
    puVar11 = local_88;
    do {
      puVar5 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_88);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}


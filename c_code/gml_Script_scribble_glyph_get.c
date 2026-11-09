// gml_Script_scribble_glyph_get @ 0x140472280

undefined8 *
gml_Script_scribble_glyph_get
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  uint local_80 [2];
  undefined8 *local_78;
  undefined8 local_70;
  byte local_64;
  undefined8 *local_40 [3];
  
  local_90 = "gml_Script_scribble_font_set_valign_offset";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 7;
  FUN_140041df0(local_80,param_4,3,param_5);
  _eh_vector_constructor_iterator_(&local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xe;
  uStack_bc = DAT_141dd3174;
  uStack_c0 = DAT_141dd3170;
  if ((1 << ((byte)DAT_141dd3174 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dd3168;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dd3168);
  }
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_78[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_88 = 0xe;
    if ((int)local_80[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_78[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4008000000000000;
  }
  local_88 = 0xf;
  uStack_bc = DAT_141dd3164;
  uStack_c0 = DAT_141dd3160;
  if ((1 << ((byte)DAT_141dd3164 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dd3158;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dd3158);
  }
  if ((int)local_80[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_78[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_88 = 0xf;
    if ((int)local_80[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_78[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4010000000000000;
  }
  local_88 = 0x10;
  uStack_bc = DAT_141dd3154;
  uStack_c0 = DAT_141dd3150;
  if ((1 << ((byte)DAT_141dd3154 & 0x1f) & 0x46U) == 0) {
    local_c8 = DAT_141dd3148;
  }
  else {
    FUN_1400419b0(&local_c8,&DAT_141dd3148);
  }
  if ((int)local_80[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_78[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_88 = 0x10;
    if ((int)local_80[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_78[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0x4014000000000000;
  }
  local_88 = 0x12;
  if ((int)local_80[0] < 3) {
    puVar3 = &DAT_1419df7b0;
LAB_1404725ce:
    local_c8 = *puVar3;
    uStack_c0 = *(undefined4 *)(puVar3 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  else {
    puVar3 = (undefined8 *)local_78[2];
    if (puVar3 != &local_a8) goto LAB_1404725ce;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  if ((int)local_80[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_78;
    if (puVar3 == &local_70) goto LAB_140472669;
  }
  local_c8 = *puVar3;
  uStack_c0 = *(undefined4 *)(puVar3 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
LAB_140472669:
  local_40[0] = &local_70;
  if (1 < (int)local_80[0]) {
    puVar5 = (undefined8 *)local_78[1];
  }
  uVar2 = FUN_140e4a740(puVar5);
  uVar4 = FUN_1401effd0(param_1,param_2,&local_b8,1,local_40);
  FUN_140e87930(uVar4,DAT_141a061e8,uVar2,&local_a8);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,3,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar5 = local_78;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


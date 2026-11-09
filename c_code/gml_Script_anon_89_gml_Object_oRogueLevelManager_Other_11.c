// gml_Script_anon_89_gml_Object_oRogueLevelManager_Other_11 @ 0x140cdffc0

undefined8 *
gml_Script_anon_89_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_80 = "gml_Script_anon@3173@gml_Object_oRogueLevelManager_Other_10";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x85;
  FUN_140041df0(local_58,param_4,2,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fa338);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x85;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 0x85;
    if ((int)local_58[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4010000000000000;
  }
  local_78 = 0x87;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f4f18);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_68,gml_Object_oRogueLevelManager_Other_11,0);
  if (&local_68 != puVar2) {
    local_d8 = local_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = uStack_5c;
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_d8);
  }
  FUN_140e60910(1);
  if (puVar2 != local_b8) {
    local_d8 = *puVar2;
    uStack_d4 = puVar2[1];
    uStack_d0 = puVar2[2];
    uStack_cc = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_48 = local_b8;
  if ((int)local_58[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_50;
    if (puVar4 == &local_a8) goto LAB_140ce0262;
  }
  local_d8 = *(undefined4 *)puVar4;
  uStack_d4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_d0 = *(undefined4 *)(puVar4 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
LAB_140ce0262:
  local_40 = &local_a8;
  if (((int)local_58[0] < 2) || (puVar6 = (undefined8 *)local_50[1], puVar6 != &local_98)) {
    local_d8 = *(undefined4 *)puVar6;
    uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_d8);
  }
  local_38 = &local_98;
  puVar6 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,3,CONCAT44(uVar7,DAT_1419fd6d8),&local_48);
  if (puVar6 != &local_c8) {
    local_d8 = *(undefined4 *)puVar6;
    uStack_d4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_d8);
  }
  FUN_140e87930(uVar3,DAT_1419f4eb8,0x80000000,&local_c8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar6 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


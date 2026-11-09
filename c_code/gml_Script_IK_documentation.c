// gml_Script_IK_documentation @ 0x140294750

undefined8 *
gml_Script_IK_documentation
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_38 [2];
  
  local_b0 = "gml_Script_HitFreeze";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 1;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_58,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 1;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 1;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3f847ae147ae147b;
  }
  if ((int)local_68[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_60[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_68[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4014000000000000;
  }
  local_a8 = 3;
  FUN_140e609c0(DAT_141a729d8);
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  if (puVar4 != puVar3) {
    local_e8 = *puVar4;
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_e8);
  }
  FUN_140e60910(1);
  local_a8 = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_dc = 0xf;
  local_e8 = 0x100000000000106;
  local_78 = 0x106;
  uStack_74 = 0x1000000;
  uStack_70 = uStack_e0;
  uStack_6c = 0xf;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_78);
  local_38[0] = local_58;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar8,DAT_141a02ef8),local_38);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_a8 = 5;
  }
  else {
    local_a8 = 7;
    uStack_dc = 0xf;
    local_e8 = 0x100000000000106;
    FUN_140e87170(&local_e8,DAT_141a0a7e8,0,&local_88,param_1,param_2);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_78 = (undefined4)local_88;
    uStack_74 = local_88._4_4_;
    uStack_70 = uStack_80;
    uStack_6c = uStack_7c;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_78);
    local_a8 = 9;
    if ((int)local_68[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[1];
    }
    iVar2 = FUN_140e851f0(&local_a0,puVar3,DAT_141955260,1);
    if (iVar2 != -2 && iVar2 < 1) {
      local_a8 = 10;
      if (((int)local_68[0] < 2) || (puVar6 = (undefined8 *)local_60[1], puVar6 != &local_c8)) {
        local_78 = *(undefined4 *)puVar6;
        uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_70 = *(undefined4 *)(puVar6 + 1);
        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_78);
      }
      uStack_dc = 0xf;
      local_e8 = 0x100000000000106;
      FUN_140e86c30(&local_e8,DAT_141a0a7e8,0,&local_c8);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,2,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


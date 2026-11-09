// gml_Script_anon_2352____struct___324_gml_Object_oBossClot_Create_0 @ 0x1406f8600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2352____struct___324_gml_Object_oBossClot_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_60 = "gml_Script_anon@2037@gml_Object_oBossClot_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x39;
  FUN_140041df0(local_38,param_4,3,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x39;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_30;
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x39;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
    if ((int)local_38[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_30;
    }
    if (puVar2 != puVar7) {
      local_b8 = *(undefined4 *)puVar2;
      uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_b8);
    }
  }
  if ((int)local_38[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
    if ((int)local_38[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_30[1];
    }
    if (puVar2 != puVar7) {
      local_b8 = *(undefined4 *)puVar2;
      uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_b0 = *(undefined4 *)(puVar2 + 1);
      uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_b8);
    }
  }
  if ((int)local_38[0] < 3) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 3) {
      puVar2 = &DAT_1419df7b0;
    }
    else {
      puVar2 = (undefined8 *)local_30[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    *puVar2 = 0x3fb999999999999a;
  }
  local_58 = 0x3b;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if (puVar3 != local_98) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_b8);
  }
  local_50 = local_98;
  if ((int)local_38[0] < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*local_30;
    if (puVar2 == &local_88) goto LAB_1406f88e8;
  }
  local_b8 = *(undefined4 *)puVar2;
  uStack_b4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_b0 = *(undefined4 *)(puVar2 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
LAB_1406f88e8:
  local_48 = &local_88;
  local_b8 = _DAT_1419e7b70;
  uStack_b4 = uRam00000001419e7b74;
  uStack_b0 = uRam00000001419e7b78;
  uStack_ac = uRam00000001419e7b7c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_40 = local_78;
  FUN_140e609c0(param_1);
  uVar8 = CONCAT44(uVar9,DAT_141a00c58);
  puVar3 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a8,3,uVar8,&local_50);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (puVar3 != puVar4) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  local_58 = 0x3c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if (puVar3 != local_98) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_b8);
  }
  local_50 = local_98;
  if (((int)local_38[0] < 2) || (puVar5 = (undefined8 *)local_30[1], puVar5 != &local_88)) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
  }
  local_48 = &local_88;
  local_b8 = _DAT_1419e7b70;
  uStack_b4 = uRam00000001419e7b74;
  uStack_b0 = uRam00000001419e7b78;
  uStack_ac = uRam00000001419e7b7c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_40 = local_78;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_a8,3,CONCAT44(uVar9,DAT_141a00c58),&local_50);
  if (puVar3 != puVar4) {
    local_b8 = *puVar3;
    uStack_b4 = puVar3[1];
    uStack_b0 = puVar3[2];
    uStack_ac = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar2 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


// gml_Object_oEnemySkele_Step_0 @ 0x140a70380

undefined8 *
gml_Object_oEnemySkele_Step_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_60 = "gml_Script_anon@10262@gml_Object_oEnemySkele_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x1ac;
  FUN_140041df0(local_38,param_4,3,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x1ac;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_30;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_58 = 0x1ac;
    if ((int)local_38[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_30;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  if ((int)local_38[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[1];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_30[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  if ((int)local_38[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_38[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_30[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3fb999999999999a;
  }
  local_58 = 0x1ae;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if (puVar2 != local_98) {
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_a8);
  }
  local_50 = local_98;
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_140a7060f:
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_88) goto LAB_140a7060f;
  }
  local_48 = &local_88;
  if ((int)local_38[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140a7065c:
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
  }
  else {
    puVar4 = (undefined8 *)local_30[2];
    if (puVar4 != &local_78) goto LAB_140a7065c;
  }
  local_40 = &local_78;
  FUN_140e609c0(param_1);
  uVar7 = CONCAT44(uVar8,DAT_141a00c58);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,3,uVar7,&local_50);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar2 != puVar3) {
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  local_58 = 0x1af;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if (puVar2 != local_98) {
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_a8);
  }
  local_50 = local_98;
  if ((int)local_38[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[1];
    if (puVar4 == &local_88) goto LAB_140a707db;
  }
  local_a8 = *(undefined4 *)puVar4;
  uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
  uStack_a0 = *(undefined4 *)(puVar4 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_a8);
LAB_140a707db:
  local_48 = &local_88;
  if (((int)local_38[0] < 3) || (puVar5 = (undefined8 *)local_30[2], puVar5 != &local_78)) {
    local_a8 = *(undefined4 *)puVar5;
    uStack_a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_a0 = *(undefined4 *)(puVar5 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
  }
  local_40 = &local_78;
  FUN_140e609c0(param_1);
  puVar2 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar8,DAT_141a00c58),&local_50);
  if (puVar2 != puVar3) {
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


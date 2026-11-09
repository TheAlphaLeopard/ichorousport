// gml_Script_grav_anon_1629_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bbf8d0

undefined8 *
gml_Script_grav_anon_1629_anon_123_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_speed@anon@1227@anon@123@gml_Object_oParticleManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x62;
  FUN_140041df0(local_68,param_4,3,param_5);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x62;
  puVar4 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x62;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    if ((int)local_68[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_60[1];
    }
    if (puVar3 != puVar6) {
      local_58 = *(undefined4 *)puVar3;
      uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_50 = *(undefined4 *)(puVar3 + 1);
      uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_58);
    }
  }
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_68[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_60[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  local_38 = 100;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_140bbfa77:
    local_58 = *(undefined4 *)puVar3;
    uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_50 = *(undefined4 *)(puVar3 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  else {
    puVar3 = (undefined8 *)*local_60;
    if (puVar3 != &local_78) goto LAB_140bbfa77;
  }
  FUN_140e87930(uVar2,DAT_1419f3418,0x80000000,&local_78);
  local_38 = 0x65;
  if ((int)local_68[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[1];
    if (puVar3 == &local_88) goto LAB_140bbfb09;
  }
  local_58 = *(undefined4 *)puVar3;
  uStack_54 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_50 = *(undefined4 *)(puVar3 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
LAB_140bbfb09:
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  FUN_140e87930(uVar2,DAT_1419f6f18,0x80000000,&local_88);
  local_38 = 0x67;
  if (((int)local_68[0] < 3) || (puVar4 = (undefined8 *)local_60[2], puVar4 != &local_98)) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_58);
  }
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f290);
  FUN_140e87930(uVar2,DAT_1419f6ed8,0x80000000,&local_98);
  local_38 = 0x69;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


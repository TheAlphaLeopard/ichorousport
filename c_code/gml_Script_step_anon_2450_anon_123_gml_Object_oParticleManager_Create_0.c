// gml_Script_step_anon_2450_anon_123_gml_Object_oParticleManager_Create_0 @ 0x140bc09d0

undefined8 *
gml_Script_step_anon_2450_anon_123_gml_Object_oParticleManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint local_58 [2];
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_set_color@anon@2154@anon@123@gml_Object_oParticleManager_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x9b;
  FUN_140041df0(local_58,param_4,2,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x9b;
  puVar6 = &DAT_1419df7b0;
  uVar5 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)local_50[1];
  }
  iVar1 = FUN_140e851f0(puVar2,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_28 = 0x9b;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57840);
    if ((int)local_58[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_50[1];
    }
    if (puVar2 != puVar3) {
      local_48 = *(undefined4 *)puVar2;
      uStack_44 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_40 = *(undefined4 *)(puVar2 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_48);
    }
  }
  local_28 = 0x9d;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5b78);
  FUN_140e609c0(param_1);
  if ((int)local_58[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_50;
  }
  if (puVar3 != puVar2) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x9e;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57840);
  FUN_140e609c0(param_1);
  if (1 < (int)local_58[0]) {
    puVar6 = (undefined8 *)local_50[1];
  }
  if (puVar6 != puVar2) {
    local_48 = *(undefined4 *)puVar6;
    uStack_44 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_40 = *(undefined4 *)(puVar6 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0xa0;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if (0 < (int)local_58[0]) {
    puVar6 = local_50;
    do {
      puVar2 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


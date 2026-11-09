// gml_Script_anon_1045_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a8d570

undefined8 *
gml_Script_anon_1045_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@754@gml_Object_oEnemyWormBrute_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x28;
  FUN_140041df0(local_68,param_4,3,param_5);
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x28;
  puVar5 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_60[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_38 = 0x28;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f23e8);
    if ((int)local_68[0] < 3) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_60[2];
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
  local_38 = 0x2a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2538);
  FUN_140e609c0(param_1);
  if ((int)local_68[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_60[1];
  }
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  uVar2 = FUN_140e4a740(puVar4);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar3,uVar2);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (puVar6 != puVar4) {
    local_58 = *(undefined4 *)puVar6;
    uStack_54 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_50 = *(undefined4 *)(puVar6 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x2b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f23e8);
  FUN_140e609c0(param_1);
  if (2 < (int)local_68[0]) {
    puVar5 = (undefined8 *)local_60[2];
  }
  if (puVar5 != puVar3) {
    local_58 = *(undefined4 *)puVar5;
    uStack_54 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_50 = *(undefined4 *)(puVar5 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  if (0 < (int)local_68[0]) {
    puVar5 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


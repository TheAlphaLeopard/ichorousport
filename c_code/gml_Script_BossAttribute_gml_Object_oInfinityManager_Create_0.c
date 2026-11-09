// gml_Script_BossAttribute_gml_Object_oInfinityManager_Create_0 @ 0x140b2cd30

undefined8 *
gml_Script_BossAttribute_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@474@BossAttribute@gml_Object_oInfinityManager_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  uVar7 = 0;
  *param_3 = 0;
  local_38 = 0x1a;
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1ef20);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1ef20);
  FUN_140e609c0(param_1);
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar5 = 0;
  if ((*(int *)((longlong)plVar1 + 0xc) == 2) && (*plVar1 != 0)) {
    uVar5 = *(undefined4 *)(*plVar1 + 0x24);
  }
  puVar3 = (undefined8 *)FUN_140e48e40(puVar2,uVar5);
  FUN_140e609c0(*(undefined8 *)*puVar2);
  if (puVar4 != puVar3) {
    local_58 = *(undefined4 *)puVar4;
    uStack_54 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_50 = *(undefined4 *)(puVar4 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x1b;
  plVar1 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3aa8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3aa8);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar6 = (undefined8 *)param_5[1];
  }
  if ((*(int *)((longlong)plVar1 + 0xc) == 2) && (*plVar1 != 0)) {
    uVar7 = *(undefined4 *)(*plVar1 + 0x24);
  }
  puVar4 = (undefined8 *)FUN_140e48e40(puVar2,uVar7);
  FUN_140e609c0(*(undefined8 *)*puVar2);
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
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


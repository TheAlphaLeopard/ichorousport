// gml_Script_anon_6834____struct___545_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a96e10

undefined8 *
gml_Script_anon_6834____struct___545_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@6375@___struct___545@gml_Object_oEnemyWormBrute_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x107;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2448);
  if (puVar1 != &local_68) {
    local_58 = *(undefined4 *)puVar1;
    uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_50 = *(undefined4 *)(puVar1 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_58);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_68);
  local_38 = 0x108;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2278);
  if (puVar2 != &local_78) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_78);
  local_38 = 0x109;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa78);
  FUN_140e609c0(param_1);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar3,0);
  FUN_140e609c0(*(undefined8 *)*puVar3);
  if (puVar1 != puVar4) {
    local_58 = *(undefined4 *)puVar1;
    uStack_54 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_50 = *(undefined4 *)(puVar1 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x10a;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0fa28);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e48e40(puVar1,0);
  FUN_140e609c0(*(undefined8 *)*puVar1);
  if (puVar2 != puVar3) {
    local_58 = *(undefined4 *)puVar2;
    uStack_54 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x10c;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f24c8);
  FUN_140e609c0(param_1);
  if (puVar5 != puVar6) {
    local_58 = *puVar5;
    uStack_54 = puVar5[1];
    uStack_50 = puVar5[2];
    uStack_4c = puVar5[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x10e;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f2448);
  (**(code **)(*param_1 + 8))(param_1,DAT_1419f2278);
  FUN_140e87930(uVar7,DAT_1419f2518,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Object_oContract_Draw_0 @ 0x1408bf270

void gml_Object_oContract_Draw_0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oContract_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0;
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0de48);
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 2;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0x4024000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_88);
  local_38 = 3;
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar1) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_38 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57bd0);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar1) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_38 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57ae0);
  uStack_5c = 0xd;
  local_68 = 0;
  if (&local_68 != puVar1) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  local_38 = 7;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a579f0);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e8da20(&local_78,param_1,0);
  if (puVar4 != puVar3) {
    local_58 = *puVar4;
    uStack_54 = puVar4[1];
    uStack_50 = puVar4[2];
    uStack_4c = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a10);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a579b0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a40);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_38 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a579e0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc0c3878000000000;
  local_38 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a20);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc0c3878000000000;
  local_38 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57a00);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0xf;
  uStack_5c = 0xd;
  local_68 = 0x3ff0000000000000;
  if (&local_68 != puVar2) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_60;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


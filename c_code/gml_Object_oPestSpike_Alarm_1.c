// gml_Object_oPestSpike_Alarm_1 @ 0x140bdf250

void gml_Object_oPestSpike_Alarm_1(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  local_40 = "gml_Object_oPestSpike_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_38 = 4;
  local_5c = 0;
  local_68 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_68);
  local_38 = 5;
  uVar1 = FUN_140e79480(0);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = uVar1;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
  local_38 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7648);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e8da20(&local_78,param_1,0);
  if (puVar3 != puVar2) {
    local_88 = *puVar3;
    uStack_80 = *(undefined4 *)(puVar3 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_88);
  }
  FUN_140e60910(1);
  local_38 = 8;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,1,&local_a8);
  local_38 = 9;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_38 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe308);
  uStack_7c = 0xd;
  local_88 = 0;
  if (&local_88 != puVar2) {
    local_58 = 0;
    uStack_54 = 0;
    uStack_50 = uStack_80;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  local_38 = 0xc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f290);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fd0000000000000;
  local_38 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a091b8);
  uStack_7c = 0xd;
  local_88 = 0x3ff0000000000000;
  if (&local_88 != puVar2) {
    local_58 = 0;
    uStack_54 = 0x3ff00000;
    uStack_50 = uStack_80;
    uStack_4c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  local_38 = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02dc8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_88,gml_Object_oPestSpike_Step_0,param_1);
  if (&local_88 != puVar2) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_58);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


// gml_Object_oTransition_Destroy_0 @ 0x140dd9620

void gml_Object_oTransition_Destroy_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 *local_res8;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Object_oTransition_Create_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b00);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57b60);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57ca0);
  local_48 = 4;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57840);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01f68);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x3ff0000000000000;
  local_48 = 7;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01fe8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7138);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = &DAT_bff0000000000000;
  local_48 = 9;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f71e8);
  FUN_140e609c0(param_1);
  uStack_6c = 0xf;
  local_78 = 0x100000300000003;
  if (&local_78 != puVar4) {
    local_68 = 3;
    uStack_64 = 0x1000003;
    uStack_60 = uStack_70;
    uStack_5c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 10;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1eed0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = &DAT_bff0000000000000;
  local_48 = 0xc;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01f78);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0xd;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01fc8);
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar4) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  local_48 = 0xf;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0x10;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1d8a0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0x403e000000000000;
  local_48 = 0x11;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0x3ff0000000000000;
  uStack_6c = 0xf;
  local_78 = 0x100000000000058;
  FUN_140e87930(&local_78,DAT_141a15d48,0x80000000,&local_98);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_48 = 0x13;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f71d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0x14;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f71c8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0x16;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f71a8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0x17;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7198);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_48 = 0x19;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7168);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_78,&LAB_140dd95f0,param_1);
  if (&local_78 != puVar4) {
    local_68 = (undefined4)local_78;
    uStack_64 = local_78._4_4_;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_68);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_48 = 0x1b;
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01fd8);
  FUN_140e609c0(param_1);
  if (puVar1 != puVar5) {
    local_68 = *puVar1;
    uStack_64 = puVar1[1];
    uStack_60 = puVar1[2];
    uStack_5c = puVar1[3];
    if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1c;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01fb8);
  FUN_140e609c0(param_1);
  if (puVar2 != puVar1) {
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_68);
  }
  FUN_140e60910(1);
  local_48 = 0x1d;
  uStack_6c = 0xd;
  local_78 = 0;
  if (&local_78 != puVar3) {
    local_68 = 0;
    uStack_64 = 0;
    uStack_60 = uStack_70;
    uStack_5c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_68);
  }
  local_48 = 0x1e;
  uStack_6c = 0xf;
  local_78 = 0x1000000000000f0;
  local_68 = 0xf0;
  uStack_64 = 0x1000000;
  uStack_60 = uStack_70;
  uStack_5c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_res8 = local_88;
  FUN_140edd0e0(param_1,param_2,1,&local_res8);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}


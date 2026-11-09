// gml_Object_oLeech_Step_0 @ 0x140b3b6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oLeech_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_Object_oLeech_Create_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_88 = 2;
  FUN_140e98b30(param_1,param_2);
  local_88 = 3;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f310);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3fc999999999999a;
  local_88 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdab8);
  uVar1 = FUN_140e78f40(1,3);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar1;
  local_88 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 0xc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3d18);
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_50 = local_70;
  local_b8 = _DAT_1419df7a0;
  uStack_b4 = uRam00000001419df7a4;
  uStack_b0 = uRam00000001419df7a8;
  uStack_ac = uRam00000001419df7ac;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_48 = local_60;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e78db0(&local_a8,2,&local_50);
  if (puVar4 != puVar3) {
    local_b8 = *puVar4;
    uStack_b4 = puVar4[1];
    uStack_b0 = puVar4[2];
    uStack_ac = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  FUN_140e60910(1);
  local_88 = 0xe;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  local_b8 = _DAT_1419ebf80;
  uStack_b4 = uRam00000001419ebf84;
  uStack_b0 = uRam00000001419ebf88;
  uStack_ac = uRam00000001419ebf8c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_50 = local_70;
  local_b8 = _DAT_1419ebf70;
  uStack_b4 = uRam00000001419ebf74;
  uStack_b0 = uRam00000001419ebf78;
  uStack_ac = uRam00000001419ebf7c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_48 = local_60;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e78db0(&local_a8,2,&local_50);
  if (puVar4 != puVar3) {
    local_b8 = *puVar4;
    uStack_b4 = puVar4[1];
    uStack_b0 = puVar4[2];
    uStack_ac = puVar4[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_b8);
  }
  FUN_140e60910(1);
  local_88 = 0xf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x3ff0000000000000;
  local_88 = 0x11;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x4010000000000000;
  local_88 = 0x13;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0;
  local_80 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_80);
  local_88 = 0x16;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd4b8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_b8,gml_Object_oLeech_Draw_0,param_1);
  if (&local_b8 != puVar3) {
    local_38 = local_b8;
    uStack_34 = uStack_b4;
    uStack_30 = uStack_b0;
    uStack_2c = uStack_ac;
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_38);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}


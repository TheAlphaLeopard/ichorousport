// gml_Script_anon_2059_gml_Object_oEnemyFoulFowl_Create_0 @ 0x1409cbd10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_2059_gml_Object_oEnemyFoulFowl_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined4 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script_anon@447@gml_Object_oEnemyFoulFowl_Create_0";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 0x12;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_30 = 0x13;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar1 != local_88) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
  }
  local_58 = local_88;
  local_a8 = _DAT_141dc6ec0;
  uStack_a4 = uRam0000000141dc6ec4;
  uStack_a0 = uRam0000000141dc6ec8;
  uStack_9c = uRam0000000141dc6ecc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_50 = local_78;
  local_a8 = _DAT_1419ea980;
  uStack_a4 = uRam00000001419ea984;
  uStack_a0 = uRam00000001419ea988;
  uStack_9c = uRam00000001419ea98c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_48 = local_68;
  FUN_140e609c0(param_1);
  uVar3 = CONCAT44(uVar4,DAT_141a00c58);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_98,3,uVar3,&local_58);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != puVar2) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  FUN_140e60910(1);
  local_30 = 0x14;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if (puVar1 != local_88) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
  }
  local_58 = local_88;
  local_a8 = _DAT_141dc6ec0;
  uStack_a4 = uRam0000000141dc6ec4;
  uStack_a0 = uRam0000000141dc6ec8;
  uStack_9c = uRam0000000141dc6ecc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_50 = local_78;
  local_a8 = _DAT_1419ea980;
  uStack_a4 = uRam00000001419ea984;
  uStack_a0 = uRam00000001419ea988;
  uStack_9c = uRam00000001419ea98c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_48 = local_68;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_98,3,CONCAT44(uVar4,DAT_141a00c58),&local_58);
  if (puVar1 != puVar2) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}


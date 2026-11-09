// gml_Object_oBloodManager_Create_0 @ 0x1406bb8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBloodManager_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined4 *local_40;
  undefined4 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Object_oBloodLine_Step_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_48 = 4;
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a03608);
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a035a8);
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03608);
  if (puVar1 != local_98) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_a8);
  }
  local_40 = local_98;
  if (puVar2 != local_88) {
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_a8);
  }
  local_38 = local_88;
  local_a8 = _DAT_1419e77b0;
  uStack_a4 = uRam00000001419e77b4;
  uStack_a0 = uRam00000001419e77b8;
  uStack_9c = uRam00000001419e77bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_30 = local_78;
  FUN_140e609c0(param_1);
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_68,3,CONCAT44(uVar4,DAT_141a00c58),&local_40);
  if (puVar1 != puVar3) {
    local_a8 = *puVar1;
    uStack_a4 = puVar1[1];
    uStack_a0 = puVar1[2];
    uStack_9c = puVar1[3];
    if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}


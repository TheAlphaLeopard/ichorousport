// gml_Script_anon_92_gml_Object_oRoomDoor_Create_0 @ 0x140d38ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_92_gml_Object_oRoomDoor_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar6;
  undefined8 uVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 local_58 [3];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  
  local_40 = "gml_Object_oRogueLevelManager_CleanUp_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_38 = 2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
  if (puVar2 != local_78) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_88);
  }
  local_30 = local_78;
  local_88 = _DAT_1419ed770;
  uStack_84 = uRam00000001419ed774;
  uStack_80 = uRam00000001419ed778;
  uStack_7c = uRam00000001419ed77c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  local_28 = local_68;
  uVar5 = CONCAT44(uVar6,DAT_141a01af8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_98,2,uVar5,&local_30);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_38 = 3;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
    if (puVar2 != local_58) {
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_88);
    }
    local_20 = local_58;
    uVar3 = CONCAT44(uVar6,DAT_141a06368);
    FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,&local_20);
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  local_38 = 5;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d08);
  if (puVar2 != local_78) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_88);
  }
  local_30 = local_78;
  uVar5 = CONCAT44(uVar6,DAT_141a04798);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_98,1,uVar5,&local_30);
  uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_38 = 6;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9d08);
    if (puVar2 != local_68) {
      local_88 = *puVar2;
      uStack_84 = puVar2[1];
      uStack_80 = puVar2[2];
      uStack_7c = puVar2[3];
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_88);
    }
    local_28 = local_68;
    FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar6,DAT_141a04918),&local_28);
  }
  local_38 = 8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f99f8);
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e8da20(&local_98,param_1,0);
  if (puVar4 != puVar2) {
    local_88 = *puVar4;
    uStack_84 = puVar4[1];
    uStack_80 = puVar4[2];
    uStack_7c = puVar4[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_88);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


// gml_Script_truestate_step @ 0x14062b3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_truestate_step(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *local_res8;
  undefined4 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_truestate_cleanup";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0xb5;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0xb8;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00278);
  local_58 = _DAT_1419e6bd0;
  uStack_54 = uRam00000001419e6bd4;
  uStack_50 = uRam00000001419e6bd8;
  uStack_4c = uRam00000001419e6bdc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res8 = local_68;
  FUN_140e63610(param_1,param_2,&local_78,1,uVar1,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = 0xb9;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00228);
  if (puVar2 != local_68) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res8 = local_68;
  uVar1 = CONCAT44(uVar3,DAT_141a01ab8);
  FUN_140e634e0(param_1,param_2,&local_78,1,uVar1,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = 0xba;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00238);
  if (puVar2 != local_68) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res8 = local_68;
  uVar1 = CONCAT44(uVar3,DAT_141a01ab8);
  FUN_140e634e0(param_1,param_2,&local_78,1,uVar1,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = 0xbb;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
  if (puVar2 != local_68) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res8 = local_68;
  uVar1 = CONCAT44(uVar3,DAT_141a01ab8);
  FUN_140e634e0(param_1,param_2,&local_78,1,uVar1,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = 0xbc;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fffa8);
  if (puVar2 != local_68) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res8 = local_68;
  uVar1 = CONCAT44(uVar3,DAT_1419fff88);
  FUN_140e634e0(param_1,param_2,&local_78,1,uVar1,&local_res8);
  uVar3 = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_38 = 0xbd;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_78 = 0;
  local_70 = 0;
  local_6c = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00108);
  if (puVar2 != local_68) {
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_58);
  }
  local_res8 = local_68;
  FUN_140e634e0(param_1,param_2,&local_78,1,CONCAT44(uVar3,DAT_141a000b8),&local_res8);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


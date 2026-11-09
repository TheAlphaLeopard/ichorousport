// gml_Object_oBurstRing_Create_0 @ 0x140867f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBurstRing_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *local_res18 [2];
  undefined4 uVar3;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oBurnUpEffect_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_38 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 3;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_88 = 0;
  local_80 = 0;
  local_7c = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1d8a0);
  local_58 = CONCAT44(uRam0000000141dc6af4,_DAT_141dc6af0);
  uStack_50 = uRam0000000141dc6af8;
  uStack_4c = uRam0000000141dc6afc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res18[0] = local_68;
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar3,DAT_141a0a0d8),local_res18);
  uStack_6c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_70 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_78,puVar2);
  }
  uStack_4c = 7;
  local_58 = CONCAT44(local_58._4_4_,3);
  FUN_140042560(&local_78,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (&local_78 != puVar1) {
    local_58 = local_78;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e60910(1);
  local_38 = 5;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0xc010000000000000;
  local_38 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  uStack_4c = 0xf;
  local_58 = 0x100000100000134;
  if (&local_58 != puVar1) {
    local_78 = 0x100000100000134;
    uStack_70 = uStack_50;
    uStack_6c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_78);
  }
  FUN_140e60910(1);
  local_38 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57380);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4038000000000000;
  local_38 = 9;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57490);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4014000000000000;
  local_38 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01aa8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4000000000000000;
  local_38 = 0xc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a578b0);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = &DAT_bff0000000000000;
  local_38 = 0xd;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57820);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_38 = 0xe;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05568);
  FUN_140e609c0(param_1);
  puVar2 = (undefined8 *)FUN_140e8da20(&local_88,param_1,2,&DAT_1419e91b0,&DAT_1419e91a0);
  if (puVar2 != puVar1) {
    local_58 = *puVar2;
    uStack_50 = *(undefined4 *)(puVar2 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_58);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


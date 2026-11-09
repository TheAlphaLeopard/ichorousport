// gml_Object_oBgPatron_Step_0 @ 0x140687710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBgPatron_Step_0(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 *local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oBgFlash_Create_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_28 = 4;
  local_b8 = _DAT_141dd5168;
  uStack_b4 = uRam0000000141dd516c;
  uStack_b0 = uRam0000000141dd5170;
  uStack_ac = DAT_141dd5174;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_b8);
  local_48 = local_88;
  uVar3 = CONCAT44(uVar4,DAT_141a1c640);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_68,1,uVar3,&local_48);
  uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar1 != local_78) {
    local_b8 = *puVar1;
    uStack_b4 = puVar1[1];
    uStack_b0 = puVar1[2];
    uStack_ac = puVar1[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_b8);
  }
  local_40 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_58,1,CONCAT44(uVar4,DAT_1419f74f8),&local_40);
  uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
  uStack_a0 = *(undefined4 *)(puVar2 + 1);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *puVar2;
  }
  else {
    FUN_1400419b0(&local_a8,puVar2);
  }
  uStack_ac = 7;
  local_b8 = 1;
  FUN_1400462a0(&local_a8,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (undefined4)local_a8;
  uStack_b4 = local_a8._4_4_;
  uStack_b0 = uStack_a0;
  uStack_ac = uStack_9c;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_b8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140e86fa0(param_1,DAT_141a02ee8,0x80000000,&local_98);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}


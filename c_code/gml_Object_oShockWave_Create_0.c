// gml_Object_oShockWave_Create_0 @ 0x140d6aec0

void gml_Object_oShockWave_Create_0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff50;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
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
  
  local_40 = "gml_Object_oShatteredShard_Create_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_38 = 3;
  FUN_140e98b30(param_1,param_2);
  local_38 = 5;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  local_38 = 6;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uStack_4c = 6;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_58 = param_1;
  FUN_140e87440(&local_58,DAT_141a0a728,0x80000000,&local_78,uVar3,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = local_78;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_58);
  local_res8 = local_68;
  uVar1 = FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar4,DAT_141a049b8),&local_res8);
  uVar1 = FUN_140e4a8b0(uVar1);
  uVar1 = FUN_140e78f00(uVar1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = uVar1;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_98);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


// gml_GlobalScript_InputVerbStateByteLength @ 0x14037bbb0

undefined8 *
gml_GlobalScript_InputVerbStateByteLength(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  
  local_40 = "gml_Script__funcGenerate@anon@825@InputVerbStateArray@InputVerbStateArray";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x14;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f3e78);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x16;
  FUN_140e85f80(param_1,DAT_1419fd4e8,0x80000000,&local_98);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_68,gml_Script_InputVerbStateArray,0);
  if (&local_68 != puVar1) {
    local_a8 = local_68;
    uStack_a4 = uStack_64;
    uStack_a0 = uStack_60;
    uStack_9c = uStack_5c;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
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
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_30 = local_88;
  local_a8 = (undefined4)local_98;
  uStack_a4 = local_98._4_4_;
  uStack_a0 = uStack_90;
  uStack_9c = uStack_8c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_28 = local_78;
  puVar2 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_58,2,CONCAT44(uVar3,DAT_1419fd6d8),&local_30);
  if (puVar2 != param_3) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


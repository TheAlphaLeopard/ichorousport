// gml_Script____struct___586_gml_Object_oMeatLock_Create_0 @ 0x140b5b590

undefined8 *
gml_Script____struct___586_gml_Object_oMeatLock_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script____struct___585@gml_Object_oMeatLock_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x2d;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de2a28) {
    _Init_thread_header(&DAT_141de2a28);
    if (DAT_141de2a28 == -1) {
      DAT_141de29d0 = FUN_140e63aa0(DAT_1419f4468);
      _Init_thread_footer(&DAT_141de2a28);
    }
  }
  FUN_140e643a0(param_1,DAT_141de29d0);
  local_28 = 0x2e;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a9f8);
  FUN_140e609c0(param_1);
  uStack_4c = 0xf;
  local_58 = 0x1000001000001be;
  if (&local_58 != puVar1) {
    local_48 = 0x1be;
    uStack_44 = 0x1000001;
    uStack_40 = uStack_50;
    uStack_3c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x2f;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  FUN_140e609c0(param_1);
  puVar1 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
  }
  if (puVar3 != puVar2) {
    local_48 = *(undefined4 *)puVar3;
    uStack_44 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_40 = *(undefined4 *)(puVar3 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  local_28 = 0x30;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05568);
  FUN_140e609c0(param_1);
  if (1 < param_4) {
    puVar1 = (undefined8 *)param_5[1];
  }
  if (puVar1 != puVar2) {
    local_48 = *(undefined4 *)puVar1;
    uStack_44 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_40 = *(undefined4 *)(puVar1 + 1);
    uStack_3c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_48);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


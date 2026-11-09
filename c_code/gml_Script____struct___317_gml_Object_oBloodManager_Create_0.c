// gml_Script____struct___317_gml_Object_oBloodManager_Create_0 @ 0x1406c8060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___317_gml_Object_oBloodManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___315@gml_Object_oBloodManager_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x145;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de13a8) {
    _Init_thread_header(&DAT_141de13a8);
    if (DAT_141de13a8 == -1) {
      DAT_141de1380 = FUN_140e63aa0(DAT_141a037b8);
      _Init_thread_footer(&DAT_141de13a8);
    }
  }
  FUN_140e643a0(param_1,DAT_141de1380);
  local_18 = 0x145;
  puVar1 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05b88);
  if (puVar1 != &DAT_141dd5c78) {
    local_38 = _DAT_141dd5c78;
    uStack_34 = uRam0000000141dd5c7c;
    uStack_30 = uRam0000000141dd5c80;
    uStack_2c = DAT_141dd5c84;
    if ((1 << ((byte)*(undefined4 *)(puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03978);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar2) {
    local_38 = *(undefined4 *)param_5;
    uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_30 = *(undefined4 *)(param_5 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_38);
  }
  FUN_140e60910(1);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a03a08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


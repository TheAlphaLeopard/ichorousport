// gml_Object_oBloodPullManager_Create_0 @ 0x1406e3120

undefined8 *
gml_Object_oBloodPullManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___320@gml_Object_oBloodPullEffect_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x16;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de13cc) {
    _Init_thread_header(&DAT_141de13cc);
    if (DAT_141de13cc == -1) {
      DAT_141de13d0 = FUN_140e63aa0(DAT_141a042a8);
      _Init_thread_footer(&DAT_141de13cc);
    }
  }
  FUN_140e643a0(param_1,DAT_141de13d0);
  local_18 = 0x16;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5e78);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar1) {
    local_38 = *(undefined4 *)param_5;
    uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_30 = *(undefined4 *)(param_5 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_38);
  }
  FUN_140e60910(1);
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


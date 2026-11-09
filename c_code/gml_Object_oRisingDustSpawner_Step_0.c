// gml_Object_oRisingDustSpawner_Step_0 @ 0x140cb05a0

undefined8 *
gml_Object_oRisingDustSpawner_Step_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 local_48;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script____struct___718@anon@738@gml_Object_oRisingDustSpawner_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 0x1f;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de3108) &&
     (_Init_thread_header(&DAT_141de3108), DAT_141de3108 == -1)) {
    DAT_141de3118 = FUN_140e63aa0(DAT_1419f9788);
    _Init_thread_footer(&DAT_141de3108);
  }
  FUN_140e643a0(param_1,DAT_141de3118);
  local_18 = 0x1f;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_48) goto LAB_140cb06bc;
  }
  local_38 = *(undefined4 *)param_5;
  uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_30 = *(undefined4 *)(param_5 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140041b80(&local_48,&local_38);
LAB_140cb06bc:
  FUN_140e86fa0(param_1,DAT_141a0f9d8,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


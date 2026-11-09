// gml_Object_oBloodPullManager_Destroy_0 @ 0x1406e5010

void gml_Object_oBloodPullManager_Destroy_0(longlong *param_1)

{
  longlong **pplVar1;
  longlong *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oBloodPullEffect_Step_2";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uStack_3c = 0xffffff;
  local_48 = (longlong *)0x0;
  local_18 = 4;
  pplVar1 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04288);
  uStack_2c = 6;
  local_38 = param_1;
  FUN_140e87440(&local_38,DAT_141a0cfc8,0x80000000,&local_48,0,0);
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  FUN_140e609c0(param_1);
  if (&local_48 != pplVar1) {
    local_38 = local_48;
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar1);
    }
    FUN_140041b80(pplVar1,&local_38);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


// gml_Script_Status @ 0x1405c1470

undefined8 *
gml_Script_Status(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                 undefined8 *param_5)

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
  
  local_20 = "gml_Script_anon@1595@Status@STATUSINIT";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_3c = 0xffffff;
  local_48 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x55;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_48) goto LAB_1405c1500;
  }
  local_38 = *(undefined4 *)param_5;
  uStack_34 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_30 = *(undefined4 *)(param_5 + 1);
  uStack_2c = *(undefined4 *)((longlong)param_5 + 0xc);
  FUN_140041b80(&local_48,&local_38);
LAB_1405c1500:
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_48);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


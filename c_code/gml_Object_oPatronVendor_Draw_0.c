// gml_Object_oPatronVendor_Draw_0 @ 0x140bdcea0

void gml_Object_oPatronVendor_Draw_0(longlong *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  double local_38;
  uint local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oPatronVendor_Alarm_1";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0.0;
  local_18 = 4;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar1,DAT_141a0a968,0x80000000,&local_38,0,0);
  uVar2 = local_2c & 0xffffff;
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      local_38 = (double)FUN_140e4b060(&local_38);
      local_2c = 0;
    }
    else {
      if (uVar2 == 7) {
        local_38 = (double)CONCAT44(local_38._4_4_,local_38._0_4_ + 1);
        goto LAB_140bdcf6b;
      }
      if (uVar2 == 10) {
        local_38 = (double)((longlong)local_38 + 1);
        goto LAB_140bdcf6b;
      }
      if (uVar2 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_38,&local_38);
        goto LAB_140bdcf6b;
      }
      local_2c = 0;
    }
  }
  local_38 = local_38 + 1.0;
LAB_140bdcf6b:
  FUN_140e87930(uVar1,DAT_141a0a968,0x80000000,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


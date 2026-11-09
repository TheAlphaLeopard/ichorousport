// gml_Object_oStuckObject_Draw_0 @ 0x140da1360

void gml_Object_oStuckObject_Draw_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oSteam_Other_3";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f64e8);
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 2;
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_18 = 3;
    if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_38);
    }
    local_38 = 0;
    local_30 = 0;
    local_2c = 5;
    FUN_140e634e0(param_1,param_2,&local_38,0,DAT_141a59730,0);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


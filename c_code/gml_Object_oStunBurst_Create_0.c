// gml_Object_oStunBurst_Create_0 @ 0x140da1470

void gml_Object_oStunBurst_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oStuckObject_Step_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  uVar2 = FUN_140e63610(param_1,param_2,&local_38,0,uVar2,0);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_18 = 4;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


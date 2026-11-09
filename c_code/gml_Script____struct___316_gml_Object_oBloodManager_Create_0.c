// gml_Script____struct___316_gml_Object_oBloodManager_Create_0 @ 0x1406c7f40

undefined8 *
gml_Script____struct___316_gml_Object_oBloodManager_Create_0
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Script_anon@7850@gml_Object_oBloodManager_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_2c = 0;
  local_38 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_18 = 0x13a;
  uVar1 = (int)(DAT_141a039f8 | 0x5000000) >> 0x18 & 0xff;
  if (uVar1 == 0xf) {
    uVar2 = 0x4000004;
  }
  else {
    uVar2 = (ulonglong)(uVar1 | 0x1000000);
  }
  local_3c = 0xf;
  local_48 = uVar2 << 0x20 | (ulonglong)(DAT_141a039f8 & 0xffffff);
  FUN_140e63610(param_1,param_2,&local_38,0,&local_48,0);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return param_3;
}


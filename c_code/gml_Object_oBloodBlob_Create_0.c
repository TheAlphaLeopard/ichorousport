// gml_Object_oBloodBlob_Create_0 @ 0x1406a2d10

void gml_Object_oBloodBlob_Create_0(undefined8 param_1,undefined8 param_2)

{
  ulonglong in_stack_ffffffffffffff98;
  ulonglong in_stack_ffffffffffffffa0;
  undefined8 local_58;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_objExample_Other_3";
  local_18 = 0;
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  local_4c = 0xffffff;
  local_58 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_18 = 1;
  local_3c = 6;
  local_48 = DAT_141dc7a60;
  FUN_140e87440(&local_48,DAT_141a58c10,0x80000000,&local_58,
                in_stack_ffffffffffffff98 & 0xffffffffffffff00,
                in_stack_ffffffffffffffa0 & 0xffffffffffffff00);
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  FUN_140e63610(DAT_141dc7a60,param_2,&local_38,0,&local_58,0);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


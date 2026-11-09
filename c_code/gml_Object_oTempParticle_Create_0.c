// gml_Object_oTempParticle_Create_0 @ 0x140daf020

void gml_Object_oTempParticle_Create_0(void)

{
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oTempHealthHalf_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 1;
  local_2c = 0;
  local_38 = 0x4024000000000000;
  FUN_140e86fa0(0x4024000000000000,DAT_141a0a7e8,0,&local_38);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


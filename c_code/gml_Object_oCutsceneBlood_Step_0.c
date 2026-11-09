// gml_Object_oCutsceneBlood_Step_0 @ 0x1408de300

void gml_Object_oCutsceneBlood_Step_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  double dVar2;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
  char *local_20;
  undefined4 local_18;
  
  local_20 = "gml_Object_oCutscene_Create_0";
  local_28 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_28;
  local_18 = 4;
  local_2c = 0xf;
  local_38 = 0x100000000000072;
  dVar2 = (double)FUN_140e4b060(&local_38);
  iVar1 = FUN_140edd1e0(param_1,param_2,(int)dVar2);
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if (0 < iVar1) {
    local_18 = 5;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  DAT_141dc7a50 = (undefined8 *)local_28;
  return;
}


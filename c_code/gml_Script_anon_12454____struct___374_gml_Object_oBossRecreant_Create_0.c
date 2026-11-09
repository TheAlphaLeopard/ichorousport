// gml_Script_anon_12454____struct___374_gml_Object_oBossRecreant_Create_0 @ 0x1407cdae0

undefined8 *
gml_Script_anon_12454____struct___374_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  longlong local_20;
  
  local_40 = "gml_Script_anon@12353@___struct___373@gml_Object_oBossRecreant_Create_0";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_4c = 0xffffff;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x263;
  local_res8 = param_1;
  local_res10 = param_2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_58,0,0);
  iVar2 = FUN_140e63cb0(local_30,&local_res8,&local_res10,&local_58);
  if (0 < iVar2) {
    do {
      local_38 = 0x264;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      cVar1 = FUN_140e643f0(local_30,&local_res8);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_30,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(uVar3,DAT_1419f6278,0x80000000,&local_58,0,0);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  if (local_20 != 0) {
    FUN_140e4cd60();
    local_20 = 0;
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Script_anon_10441____struct___373_gml_Object_oBossRecreant_Create_0 @ 0x1407ca9f0

undefined8 *
gml_Script_anon_10441____struct___373_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_50 = "gml_Script_anon@10310@___struct___372@gml_Object_oBossRecreant_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_5c = 0xffffff;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x1f0;
  local_res8 = param_1;
  local_res10 = param_2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_48 = 0x1f1;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_48 = 499;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_68,0,0);
  iVar2 = FUN_140e63cb0(local_40,&local_res8,&local_res10,&local_68);
  if (0 < iVar2) {
    do {
      local_48 = 500;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      cVar1 = FUN_140e643f0(local_40,&local_res8);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_40,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(uVar4,DAT_1419f6278,0x80000000,&local_68,0,0);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  if (local_30 != 0) {
    FUN_140e4cd60();
    local_30 = 0;
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


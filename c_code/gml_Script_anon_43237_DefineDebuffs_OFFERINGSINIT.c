// gml_Script_anon_43237_DefineDebuffs_OFFERINGSINIT @ 0x1404033e0

undefined8 *
gml_Script_anon_43237_DefineDebuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_30 [16];
  longlong local_20;
  
  local_40 = "gml_Script_anon@42648@DefineDebuffs@OFFERINGSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x6e9;
  local_4c = 0xf;
  local_58 = 0x1000000000000a6;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_30,&local_res8,&local_res10,&local_58);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (0 < iVar2) {
    do {
      local_38 = 0x6e9;
      FUN_140edd0e0(local_res8,local_res10,0,0);
      cVar1 = FUN_140e643f0(local_30,&local_res8);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_30,&local_res8,&local_res10);
  if (local_20 != 0) {
    FUN_140e4cd60();
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


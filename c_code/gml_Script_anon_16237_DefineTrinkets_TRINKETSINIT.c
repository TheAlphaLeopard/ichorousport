// gml_Script_anon_16237_DefineTrinkets_TRINKETSINIT @ 0x1405f2f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16237_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_50 = "gml_Script_anon@15694@DefineTrinkets@TRINKETSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x279;
  uStack_5c = 0xf;
  local_68 = 0x1000000000000ee;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_40,&local_res8,&local_res10,&local_68);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (0 < iVar2) {
    do {
      local_48 = 0x27a;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
      local_68 = CONCAT44(uRam0000000141dd4c1c,_DAT_141dd4c18);
      uStack_60 = uRam0000000141dd4c20;
      uStack_5c = DAT_141dd4c24;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_68);
      FUN_140e87930(uVar3,DAT_1419f5a38,0x80000000,&local_78);
      cVar1 = FUN_140e643f0(local_40,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_40,&local_res8,&local_res10);
  if (local_30 != 0) {
    FUN_140e4cd60();
    local_30 = 0;
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


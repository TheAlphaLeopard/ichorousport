// gml_Script_anon_43602_DefineDebuffs_OFFERINGSINIT @ 0x140404940

undefined8 *
gml_Script_anon_43602_DefineDebuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,longlong param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  longlong local_30;
  
  local_50 = "gml_Script_anon@43237@DefineDebuffs@OFFERINGSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x705;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = *(undefined8 **)(param_5 + 8);
  }
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_78,0,0);
  FUN_140e87440(&local_78,DAT_141a57c50,0x80000000,&local_88,0,0);
  local_5c = 10;
  local_68 = 0;
  iVar2 = FUN_140e851f0(&local_88,&local_68,DAT_141955260,0);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if (iVar2 == 0) {
    local_48 = 0x705;
  }
  else {
    local_48 = 0x707;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
    FUN_140e87440(uVar3,DAT_1419f5db8,0x80000000,&local_98,0,0);
    FUN_140162d40(&local_98,10);
    FUN_140e87930(uVar3,DAT_1419f5db8,0x80000000,&local_98);
    local_48 = 0x709;
    local_5c = 0xf;
    local_68 = 0x10000000000009d;
    iVar2 = FUN_140e63cb0(local_40,&local_res8,&local_res10,&local_68);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (0 < iVar2) {
      do {
        local_48 = 0x70b;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
        local_5c = 10;
        local_68 = 0;
        iVar2 = FUN_140e851f0(uVar3,&local_68,DAT_141955260,0);
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        if (iVar2 != 0) {
          local_48 = 0x70b;
          goto LAB_140404c06;
        }
        local_48 = 0x70c;
        uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
        FUN_140162d40(uVar3,10);
        cVar1 = FUN_140e643f0(local_40,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_40,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    FUN_140e87440(&local_78,DAT_141a57c50,0x80000000,&local_88,0,0);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
LAB_140404c06:
    if (local_30 != 0) {
      FUN_140e4cd60();
      local_30 = 0;
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


// gml_Script____struct___145_anon_10709_DefineBuffs_OFFERINGSINIT @ 0x1403cbef0

undefined8 *
gml_Script____struct___145_anon_10709_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_70 = "gml_Script_anon@10398@DefineBuffs@OFFERINGSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x18d;
  uStack_ac = 0xf;
  local_b8 = 0x10000000000001f;
  local_res8 = param_1;
  local_res10 = param_2;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_b8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (0 < iVar2) {
    do {
      local_68 = 399;
      uStack_ac = 0xf;
      local_b8 = 0x100000100000067;
      local_58 = 0x67;
      uStack_54 = 0x1000001;
      uStack_50 = uStack_b0;
      uStack_4c = 0xf;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_58);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_88);
      local_68 = 400;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_9c = 0;
      local_a8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_a8);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  local_68 = 0x192;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5948);
  local_b8 = 0x3ff0000000000000;
  uStack_ac = 0xd;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = uStack_b0;
  uStack_4c = 0xd;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_58);
  FUN_140e87930(uVar3,DAT_1419f57d8,0x80000000,&local_98);
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


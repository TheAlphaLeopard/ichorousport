// gml_Script_anon_23082_DefineTrinkets_TRINKETSINIT @ 0x1405feb90

undefined8 *
gml_Script_anon_23082_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  double local_88;
  uint local_7c;
  double local_78;
  uint local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@22800@DefineTrinkets@TRINKETSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_7c = 0xffffff;
  local_88 = 0.0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0.0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x382;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar1,DAT_1419ff8a8,0x80000000,&local_88,0,0);
  uVar2 = local_7c & 0xffffff;
  if (uVar2 == 0) {
LAB_1405fec93:
    local_88 = local_88 + 1.0;
  }
  else {
    if (uVar2 == 1) {
      local_88 = (double)FUN_140e4b060(&local_88);
      local_7c = 0;
      goto LAB_1405fec93;
    }
    if (uVar2 == 7) {
      local_88 = (double)CONCAT44(local_88._4_4_,local_88._0_4_ + 1);
    }
    else if (uVar2 == 10) {
      local_88 = (double)((longlong)local_88 + 1);
    }
    else {
      if (uVar2 == 0xd) {
        local_7c = 0;
        goto LAB_1405fec93;
      }
      FUN_140042910(&DAT_14172c3d8,&local_88,&local_88);
    }
  }
  FUN_140e87930(uVar1,DAT_1419ff8a8,0x80000000,&local_88);
  local_38 = 899;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar1,DAT_1419ff8a8,0x80000000,&local_68,0,0);
  local_4c = 0;
  local_58 = 0x4014000000000000;
  uVar2 = FUN_140e851f0(&local_68,&local_58,DAT_141955260,1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if (0x7fffffff < uVar2) goto LAB_1405feeab;
  local_38 = 900;
  local_4c = 0xf;
  local_58 = 0x1000000000000ee;
  FUN_140e87440(&local_58,DAT_1419ff9c8,0x80000000,&local_78,0,0);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  uVar2 = local_6c & 0xffffff;
  if (uVar2 == 0) {
LAB_1405fee0f:
    local_78 = local_78 + 1.0;
  }
  else {
    if (uVar2 == 1) {
      local_78 = (double)FUN_140e4b060(&local_78);
      local_6c = 0;
      goto LAB_1405fee0f;
    }
    if (uVar2 == 7) {
      local_78 = (double)CONCAT44(local_78._4_4_,local_78._0_4_ + 1);
    }
    else if (uVar2 == 10) {
      local_78 = (double)((longlong)local_78 + 1);
    }
    else {
      if (uVar2 == 0xd) {
        local_6c = 0;
        goto LAB_1405fee0f;
      }
      FUN_140042910(&DAT_14172c3d8,&local_78,&local_78);
    }
  }
  local_4c = 0xf;
  local_58 = 0x1000000000000ee;
  FUN_140e87930(&local_58,DAT_1419ff9c8,0x80000000,&local_78);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_38 = 0x385;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  local_7c = 0;
  local_88 = 0.0;
  FUN_140e87930(uVar1,DAT_1419ff8a8,0x80000000,&local_88);
LAB_1405feeab:
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


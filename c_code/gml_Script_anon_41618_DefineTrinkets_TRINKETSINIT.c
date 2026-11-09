// gml_Script_anon_41618_DefineTrinkets_TRINKETSINIT @ 0x140619700

undefined8 *
gml_Script_anon_41618_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_70 = "gml_Script_anon@41073@DefineTrinkets@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x5b7;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar2,DAT_1419ffc78,0x80000000,&local_98,0,0);
  local_bc = 0;
  local_c8 = 0xc010000000000000;
  iVar1 = FUN_140e851f0(&local_98,&local_c8,DAT_141955260,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (iVar1 == 0) {
    local_68 = 0x5b7;
  }
  else {
    local_68 = 0x5b8;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    puVar4 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar3,DAT_141a1f440,0x80000000,&local_a8,0,0);
    FUN_140e87440(uVar2,DAT_1419ffc78,0x80000000,&local_98,0,0);
    iVar1 = FUN_140e851f0(&local_a8,&local_98,DAT_141955260,0);
    if (iVar1 == 0) {
      local_68 = 0x5ba;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_ac = 0;
      local_b8 = 0xc010000000000000;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      FUN_140e87930(uVar2,DAT_1419ffc78,0x80000000,&local_b8);
      local_68 = 0x5bb;
      uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      if (0 < param_4) {
        puVar4 = (undefined8 *)*param_5;
      }
      FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_a8,0,0);
      FUN_140e87440(&local_a8,DAT_1419f62b8,0x80000000,&local_88,0,0);
      FUN_140e87440(uVar2,DAT_1419ffdf8,0x80000000,&local_50,0,0);
      local_bc = 0;
      local_c8 = 0x3fc999999999999a;
      FUN_140042560(&local_c8,&local_50);
      local_54 = 0;
      local_60 = 0x3ff0000000000000;
      FUN_1400460e0(&local_60,&local_c8);
      FUN_140042560(&local_88,&local_60);
      if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_60);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140e87930(&local_a8,DAT_1419f62b8,0x80000000,&local_88);
    }
    else {
      local_68 = 0x5b8;
    }
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


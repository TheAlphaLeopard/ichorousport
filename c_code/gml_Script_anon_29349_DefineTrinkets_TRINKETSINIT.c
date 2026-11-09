// gml_Script_anon_29349_DefineTrinkets_TRINKETSINIT @ 0x140607180

undefined8 *
gml_Script_anon_29349_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@28698@DefineTrinkets@TRINKETSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x428;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  plVar3 = param_1;
  uVar4 = param_2;
  FUN_140e87170(&local_b8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uStack_ac = local_8c;
  uStack_b0 = local_90;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_98;
  }
  else {
    FUN_1400419b0(&local_b8,&local_98);
  }
  uVar1 = uStack_ac;
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_58);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e87440(uVar2,DAT_1419f5f98,0x80000000,&local_68,(ulonglong)plVar3 & 0xffffffffffffff00,
                uVar4 & 0xffffffffffffff00);
  FUN_140e86c30(&local_68,DAT_1419fe0e8,0x80000000,&local_78);
  local_38 = 0x429;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87170(&local_b8,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uStack_ac = local_9c;
  uStack_b0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_b8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_b8,&local_a8);
  }
  uVar1 = uStack_ac;
  local_58 = (undefined4)local_b8;
  uStack_54 = local_b8._4_4_;
  uStack_50 = uStack_b0;
  uStack_4c = uStack_ac;
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140e87440(uVar2,DAT_1419f5f98,0x80000000,&local_68,(ulonglong)param_1 & 0xffffffffffffff00,
                param_2 & 0xffffffffffffff00);
  FUN_140e86c30(&local_68,DAT_1419fe158,0x80000000,&local_88);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


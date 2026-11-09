// gml_Script_anon_40203_DefineTrinkets_TRINKETSINIT @ 0x140617f10

undefined8 *
gml_Script_anon_40203_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 *local_res18 [2];
  code *pcVar3;
  ulonglong uVar4;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@39924@DefineTrinkets@TRINKETSINIT";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x58f;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_58,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x590;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419ffbf8,0x80000000,&local_68,uVar4,in_stack_ffffffffffffff40);
  cVar1 = FUN_140e491e0(&local_68);
  if (cVar1 == '\0') {
    local_38 = 0x591;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uStack_ac = 0xf;
    local_b8 = 0x100000000000106;
    in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffffffffff00;
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(&local_b8,DAT_1419ffdb8,0x80000000,&local_78,uVar4,in_stack_ffffffffffffff40);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    uStack_ac = 0xf;
    local_b8 = 0x100000000000106;
    FUN_140e87440(&local_b8,DAT_1419ffca8,0x80000000,&local_88,uVar4 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff40 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    uStack_ac = local_7c;
    uStack_b0 = local_80;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
      local_b8 = local_88;
    }
    else {
      FUN_1400419b0(&local_b8,&local_88);
    }
    uStack_9c = 0;
    local_a8 = 0x4018000000000000;
    FUN_140046500(&local_b8,&local_a8);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = local_b8;
    uStack_a0 = uStack_b0;
    uStack_9c = uStack_ac;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_a8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_res18[0] = local_58;
    uStack_9c = 0xf;
    local_a8 = 0x100000000000106;
    uVar2 = FUN_140069500(&local_a8);
    FUN_140e63610(uVar2,param_2,&local_98,1,&local_78,local_res18);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
  }
  else {
    local_38 = 0x590;
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
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_58,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Script_anon_14450_DefineTrinkets_TRINKETSINIT @ 0x1405f11c0

undefined8 *
gml_Script_anon_14450_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
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
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_28 [2];
  
  local_60 = "gml_Script_anon@14140@DefineTrinkets@TRINKETSINIT";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x22d;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0;
  local_78 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x22e;
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_b8,DAT_1419f5a18,0x80000000,&local_88,uVar3,in_stack_ffffffffffffff40);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uStack_ac = 0xf;
  local_b8 = 0x1000000000000ee;
  FUN_140e87440(&local_b8,DAT_1419ffa68,0x80000000,&local_98,uVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
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
  uStack_9c = 7;
  local_a8 = CONCAT44(local_a8._4_4_,5);
  FUN_140042560(&local_b8,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = local_b8;
  uStack_a0 = uStack_b0;
  uStack_9c = uStack_ac;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_a8);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_28[0] = local_40;
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  uVar1 = FUN_140069500(&local_a8);
  FUN_140e63610(uVar1,param_2,&local_78,1,&local_88,local_28);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


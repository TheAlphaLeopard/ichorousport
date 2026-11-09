// gml_Script_DefineBossAttributes @ 0x14023a790

undefined8 *
gml_Script_DefineBossAttributes
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 uVar1;
  code *pcVar2;
  ulonglong uVar3;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_80 = "gml_Script_anon@4032@DefineBossAttributes@BOSSMODSINIT";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xac;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xae;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_141a1edd0,0x80000000,&local_a8,uVar3,in_stack_ffffffffffffff20);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_141a1f540,0x80000000,&local_b8,uVar3,in_stack_ffffffffffffff20);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  FUN_140e87440(param_5,DAT_141a1f4e0,0x80000000,&local_c8,uVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_d8 = local_b8;
  uStack_d0 = uStack_b0;
  uStack_cc = uStack_ac;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_d8);
  local_38 = local_60;
  local_d8 = local_c8;
  uStack_d0 = uStack_c0;
  uStack_cc = uStack_bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_d8);
  local_30 = local_50;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  uVar1 = FUN_140069500(&local_d8);
  FUN_140e63610(uVar1,param_2,&local_98,2,&local_a8,&local_38);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


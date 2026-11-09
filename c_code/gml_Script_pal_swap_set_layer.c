// gml_Script_pal_swap_set_layer @ 0x14044a510

undefined8 *
gml_Script_pal_swap_set_layer(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res18 [2];
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff50;
  undefined1 **ppuVar5;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_pal_swap_layer_init";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x75;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f74e8);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x76;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f5398,0x80000000,&local_68,uVar3,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  local_58 = (undefined4)local_68;
  uStack_54 = local_68._4_4_;
  uStack_50 = uStack_60;
  uStack_4c = uStack_5c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res18[0] = local_98;
  ppuVar5 = local_res18;
  uVar3 = CONCAT44(uVar4,DAT_141a06308);
  FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,ppuVar5);
  local_38 = 0x77;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f5248,0x80000000,&local_78,uVar3,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  local_58 = (undefined4)local_78;
  uStack_54 = local_78._4_4_;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res18[0] = local_98;
  ppuVar5 = local_res18;
  uVar3 = CONCAT44(uVar4,DAT_1419f7508);
  FUN_140e634e0(param_1,param_2,&local_a8,1,uVar3,ppuVar5);
  local_38 = 0x78;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar1,DAT_1419f4f38,0x80000000,&local_88,uVar3,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  local_58 = (undefined4)local_88;
  uStack_54 = local_88._4_4_;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_58);
  local_res18[0] = local_98;
  FUN_140e634e0(param_1,param_2,&local_a8,1,CONCAT44(uVar4,DAT_1419f7508),local_res18);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


// gml_Script_anon_28476____struct___660_gml_Object_oPlayer_Create_0 @ 0x140c14f90

undefined8 *
gml_Script_anon_28476____struct___660_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_90 = "gml_Script_anon@27631@___struct___660@gml_Object_oPlayer_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x5ab;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x5ac;
  uStack_3c = 0xf;
  local_48 = 0x100000100000406;
  local_38 = 0x406;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_40;
  uStack_2c = 0xf;
  FUN_140041b80(&local_70,&local_38);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_70);
  local_88 = 0x5ad;
  uStack_3c = 0xf;
  local_48 = 0x100000100000411;
  local_38 = 0x411;
  uStack_34 = 0x1000001;
  uStack_30 = uStack_40;
  uStack_2c = 0xf;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_38);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_a8);
  local_88 = 0x5ae;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_88 = 0x5af;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_88 = 0x5b1;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87440(uVar1,DAT_1419f7b28,0x80000000,&local_80,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_38 = (undefined4)DAT_141dda668;
  uStack_34 = DAT_141dda668._4_4_;
  uStack_30 = DAT_141dda670;
  uStack_2c = DAT_141dda674;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_38);
  local_res8 = local_60;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_d8,1,&local_80,&local_res8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


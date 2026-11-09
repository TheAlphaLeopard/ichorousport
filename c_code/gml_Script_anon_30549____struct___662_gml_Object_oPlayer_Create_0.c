// gml_Script_anon_30549____struct___662_gml_Object_oPlayer_Create_0 @ 0x140c18b70

undefined8 *
gml_Script_anon_30549____struct___662_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *local_res8;
  code *pcVar2;
  ulonglong in_stack_ffffffffffffff10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_a0 = "gml_Script_anon@29796@___struct___662@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x640;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_74 = 0xffffff;
  local_80 = 0;
  local_84 = 0xffffff;
  local_90 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x642;
  uStack_4c = 0xf;
  local_58 = 0x100000100000414;
  local_48 = 0x414;
  uStack_44 = 0x1000001;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  FUN_140041b80(&local_80,&local_48);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_80);
  local_98 = 0x643;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87440(uVar1,DAT_1419f7b28,0x80000000,&local_90,(ulonglong)pcVar2 & 0xffffffffffffff00,
                in_stack_ffffffffffffff10 & 0xffffffffffffff00);
  local_48 = (undefined4)DAT_141dda818;
  uStack_44 = DAT_141dda818._4_4_;
  uStack_40 = DAT_141dda820;
  uStack_3c = DAT_141dda824;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_48);
  local_res8 = local_70;
  uVar1 = FUN_140069500(uVar1);
  FUN_140e63610(uVar1,param_2,&local_e8,1,&local_90,&local_res8);
  local_98 = 0x644;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_c8);
  local_98 = 0x645;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
  local_98 = 0x647;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ef298);
  local_58 = 0x3ff0000000000000;
  uStack_4c = 0xd;
  local_48 = 0;
  uStack_44 = 0x3ff00000;
  uStack_40 = uStack_50;
  uStack_3c = 0xd;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_48);
  FUN_140e87930(uVar1,DAT_1419ef278,0x80000000,&local_b8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


// gml_Script____struct___690_gml_Object_oPlayer_Create_0 @ 0x140c49aa0

undefined8 *
gml_Script____struct___690_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *local_res8;
  code *pcVar5;
  ulonglong uVar6;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_90 [12];
  byte local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_a0 = "gml_Script_anon@56824@___struct___690@gml_Object_oPlayer_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xbd5;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_90,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  uVar4 = 0;
  local_68 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xbd6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_5c = 0;
  local_68 = 0;
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_68);
  local_98 = 0xbd8;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_bc = 0;
  local_c8 = 0;
  iVar1 = FUN_140e851f0(uVar3,&local_c8,DAT_141955260,1);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  uStack_bc = 0xf;
  if (iVar1 == -2 || -1 < iVar1) {
    local_98 = 0xbe3;
    local_c8 = 0x100000100000406;
    local_78 = 0x406;
    uStack_74 = 0x1000001;
    uStack_70 = uStack_c0;
    uStack_6c = 0xf;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_78);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b8);
    local_98 = 0xbe4;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
    local_98 = 0xbe5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_dc = 0;
    local_e8 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e8);
    local_98 = 0xbe6;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
    uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f5868,0x80000000,&local_108,uVar6,in_stack_fffffffffffffef0);
    FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                  in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    local_78 = (undefined4)DAT_141dda668;
    uStack_74 = DAT_141dda668._4_4_;
    uStack_70 = DAT_141dda670;
    uStack_6c = DAT_141dda674;
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_78);
    local_res8 = local_90;
    switch(local_fc) {
    case 0:
    case 7:
    case 10:
    case 0xd:
switchD_140c4a0b7_caseD_0:
      uVar2 = FUN_140e4a8b0(&local_108);
      uVar4 = FUN_140e87250(uVar2);
      break;
    case 6:
      uVar4 = local_108;
      break;
    case 0xf:
      iVar1 = (int)((ulonglong)local_108 >> 0x20);
      if ((iVar1 == 0x1000000) || (iVar1 == 0x4000001)) goto switchD_140c4a0b7_caseD_0;
    }
    FUN_140e63610(uVar4,param_2,&local_f8,1,&local_48,&local_res8);
    goto LAB_140c4a114;
  }
  local_98 = 0xbda;
  local_c8 = 0x100000100000411;
  local_78 = 0x411;
  uStack_74 = 0x1000001;
  uStack_70 = uStack_c0;
  uStack_6c = 0xf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_78);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_b8);
  local_98 = 0xbdb;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
  local_98 = 0xbdc;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e8);
  local_98 = 0xbdd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5868,0x80000000,&local_108,uVar6,in_stack_fffffffffffffef0);
  FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  local_78 = (undefined4)DAT_141dda7e8;
  uStack_74 = DAT_141dda7e8._4_4_;
  uStack_70 = DAT_141dda7f0;
  uStack_6c = DAT_141dda7f4;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_78);
  local_res8 = local_90;
  switch(local_fc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140c49e22_caseD_0:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar1 == 0x1000000) || (iVar1 == 0x4000001)) goto switchD_140c49e22_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_f8,1,&local_48,&local_res8);
  local_98 = 0xbde;
  local_c8 = 0x3ff0000000000000;
  uStack_bc = 0xd;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = uStack_c0;
  uStack_6c = 0xd;
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  FUN_140041b80(&local_58,&local_78);
  FUN_140e86fa0(param_1,DAT_1419f61d8,0x80000000,&local_58);
LAB_140c4a114:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


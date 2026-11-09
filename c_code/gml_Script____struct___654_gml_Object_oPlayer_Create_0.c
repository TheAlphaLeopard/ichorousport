// gml_Script____struct___654_gml_Object_oPlayer_Create_0 @ 0x140c0b210

undefined8 *
gml_Script____struct___654_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined1 **param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *local_res8;
  code *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_2c;
  
  local_80 = "gml_Script_anon@22078@___struct___654@gml_Object_oPlayer_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x43f;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x441;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_108,uVar7,in_stack_fffffffffffffef0);
  FUN_140e87440(&local_108,DAT_1419f5848,0x80000000,&local_38,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(DAT_141dda818._4_4_,(undefined4)DAT_141dda818);
  uStack_f0 = DAT_141dda820;
  uStack_ec = DAT_141dda824;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_res8 = local_d8;
  switch(local_fc) {
  default:
switchD_140c0b3bc_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140c0b3bc_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar9 = &local_res8;
  plVar8 = &local_38;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_e8,1,&local_38,ppuVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
    plVar8 = param_1;
    ppuVar9 = param_2;
    FUN_140e87170(uVar4,DAT_141a0a728,0x80000000,&local_48,param_1,param_2);
    uStack_ec = 0xf;
    local_f8 = (longlong *)0x100000100000410;
    iVar3 = FUN_140e851f0(&local_48,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar3 == 0) {
      local_78 = 0x442;
      uStack_ec = 0xf;
      local_f8 = (longlong *)0x10000010000040f;
      local_b8 = 0x40f;
      uStack_b4 = 0x1000001;
      uStack_b0 = uStack_f0;
      uStack_ac = 0xf;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_b8);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
      goto LAB_140c0b6cb;
    }
  }
  local_78 = 0x445;
  uStack_ec = 0xf;
  local_f8 = (longlong *)0x1000001000003f0;
  local_b8 = 0x3f0;
  uStack_b4 = 0x1000001;
  uStack_b0 = uStack_f0;
  uStack_ac = 0xf;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_b8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
  local_78 = 0x446;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = (ulonglong)plVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_108,uVar7,uVar10);
  FUN_140e87440(&local_108,DAT_141a55540,0x80000000,&local_58,uVar7 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  local_b8 = (undefined4)DAT_141dda848;
  uStack_b4 = DAT_141dda848._4_4_;
  uStack_b0 = DAT_141dda850;
  uStack_ac = DAT_141dda854;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_b8);
  local_res8 = local_d8;
  switch(local_fc) {
  default:
switchD_140c0b66d_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_108;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_108 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140c0b66d_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_108);
    uVar4 = FUN_140e87250(uVar2);
  }
  ppuVar9 = &local_res8;
  plVar8 = &local_58;
  FUN_140e63610(uVar4,param_2,&local_e8,1,plVar8,ppuVar9);
LAB_140c0b6cb:
  local_78 = 0x448;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar5 != &local_98) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar4,DAT_1419f5ef8,0x80000000,&local_98);
  local_78 = 0x449;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uStack_ec = 6;
  uVar7 = (ulonglong)plVar8 & 0xffffffffffffff00;
  local_f8 = param_1;
  FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_68,uVar7,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_b8 = (undefined4)local_68;
  uStack_b4 = local_68._4_4_;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_b8);
  local_res8 = local_d8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar2,DAT_141a08838),&local_res8);
  if (puVar5 != &local_a8) {
    local_b8 = *(undefined4 *)puVar5;
    uStack_b4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_b0 = *(undefined4 *)(puVar5 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


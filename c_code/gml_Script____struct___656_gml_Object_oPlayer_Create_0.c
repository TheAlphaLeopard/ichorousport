// gml_Script____struct___656_gml_Object_oPlayer_Create_0 @ 0x140c0d460

undefined8 *
gml_Script____struct___656_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *local_res8;
  code *pcVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffed0;
  undefined1 **ppuVar8;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_80 = "gml_Script_anon@23293@___struct___656@gml_Object_oPlayer_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x48d;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_2c = 0xffffff;
  local_38 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x48f;
  uStack_5c = 0xf;
  local_68 = (longlong *)0x100000100000413;
  local_f8 = 0x413;
  uStack_f4 = 0x1000001;
  uStack_f0 = uStack_60;
  uStack_ec = 0xf;
  FUN_140041b80(&local_38,&local_f8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_38);
  local_78 = 0x490;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_98);
  local_78 = 0x491;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_a8);
  local_78 = 0x492;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5868,0x80000000,&local_118,uVar7,in_stack_fffffffffffffed0);
  FUN_140e87440(&local_118,DAT_141a55540,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  local_f8 = (undefined4)DAT_141dda848;
  uStack_f4 = DAT_141dda848._4_4_;
  uStack_f0 = DAT_141dda850;
  uStack_ec = DAT_141dda854;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_f8);
  local_res8 = local_108;
  switch(local_10c) {
  default:
switchD_140c0d71e_caseD_1:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = local_118;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_118 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140c0d71e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_118);
    uVar3 = FUN_140e87250(uVar2);
  }
  ppuVar8 = &local_res8;
  puVar5 = &local_48;
  FUN_140e63610(uVar3,param_2,&local_128,1,puVar5,ppuVar8);
  local_78 = 0x493;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar4 != &local_b8) {
    local_f8 = *(undefined4 *)puVar4;
    uStack_f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87930(uVar3,DAT_1419f5ef8,0x80000000,&local_b8);
  local_78 = 0x494;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_5c = 6;
  uVar7 = (ulonglong)puVar5 & 0xffffffffffffff00;
  local_68 = param_1;
  FUN_140e87440(&local_68,DAT_1419fe158,0x80000000,&local_58,uVar7,
                (ulonglong)ppuVar8 & 0xffffffffffffff00);
  uVar2 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_f8 = (undefined4)local_58;
  uStack_f4 = local_58._4_4_;
  uStack_f0 = uStack_50;
  uStack_ec = uStack_4c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_f8);
  local_res8 = local_108;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar2,DAT_141a08838),&local_res8);
  if (puVar5 != &local_c8) {
    local_f8 = *(undefined4 *)puVar5;
    uStack_f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_c8);
  local_78 = 0x495;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e87930(uVar3,DAT_141a0a968,0x80000000,&local_d8);
  local_78 = 0x496;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_e8);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


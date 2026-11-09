// gml_Script_anon_54902____struct___687_gml_Object_oPlayer_Create_0 @ 0x140c45510

undefined8 *
gml_Script_anon_54902____struct___687_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@54495@___struct___687@gml_Object_oPlayer_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0xb3f;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0xb41;
  uStack_3c = 0xf;
  local_48 = 0x10000010000040e;
  local_e8 = 0x40e;
  uStack_e4 = 0x1000001;
  uStack_e0 = uStack_40;
  uStack_dc = 0xf;
  FUN_140041b80(&local_70,&local_e8);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_70);
  local_88 = 0xb42;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_88 = 0xb44;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e87930(uVar3,DAT_141a1dce0,0x80000000,&local_d8);
  local_88 = 0xb45;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ffbb8);
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8a48);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffbb8);
  if (puVar4 != local_b8) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  local_60 = local_b8;
  if (puVar5 != local_a8) {
    local_e8 = *puVar5;
    uStack_e4 = puVar5[1];
    uStack_e0 = puVar5[2];
    uStack_dc = puVar5[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_e8);
  }
  local_58 = local_a8;
  FUN_140e609c0(param_1);
  puVar4 = (undefined4 *)FUN_140e79090(&local_108,2,&local_60);
  if (puVar4 != puVar6) {
    local_e8 = *puVar4;
    uStack_e4 = puVar4[1];
    uStack_e0 = puVar4[2];
    uStack_dc = puVar4[3];
    if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_e8);
  }
  FUN_140e60910(1);
  local_88 = 0xb46;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  in_stack_fffffffffffffef0 = in_stack_fffffffffffffef0 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar3,DAT_1419f5868,0x80000000,&local_f8,uVar8,in_stack_fffffffffffffef0);
  FUN_140e87440(&local_f8,DAT_141a55540,0x80000000,&local_80,uVar8 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  local_e8 = (undefined4)DAT_141dda848;
  uStack_e4 = DAT_141dda848._4_4_;
  uStack_e0 = DAT_141dda850;
  uStack_dc = DAT_141dda854;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_60 = local_b8;
  uVar3 = 0;
  switch(local_ec) {
  case 6:
    uVar3 = local_f8;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)local_f8 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) break;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_f8);
    uVar3 = FUN_140e87250(uVar2);
  }
  FUN_140e63610(uVar3,param_2,&local_108,1,&local_80,&local_60);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


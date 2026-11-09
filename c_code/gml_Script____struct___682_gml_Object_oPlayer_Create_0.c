// gml_Script____struct___682_gml_Object_oPlayer_Create_0 @ 0x140c3eae0

undefined8 *
gml_Script____struct___682_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *local_res8;
  code *pcVar9;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff00;
  undefined1 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_c0 = "gml_Script_anon@51503@___struct___682@gml_Object_oPlayer_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xa9b;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_84 = 0xffffff;
  local_90 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0xa9d;
  if (puVar4 != &local_90) {
    local_b0 = *(undefined4 *)puVar4;
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a8 = *(undefined4 *)(puVar4 + 1);
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_90,&local_b0);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_90);
  local_b8 = 0xa9f;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  uVar6 = FUN_140e78f40(0xffffffffffffffff);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar6;
  local_b8 = 0xaa0;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5d8);
  uVar6 = FUN_140e78f40(0xffffffffffffffff);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = uVar6;
  local_b8 = 0xaa2;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_50,uVar10,in_stack_ffffffffffffff00);
  ppuVar11 = (undefined1 **)(in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  puVar5 = (undefined8 *)(uVar10 & 0xffffffffffffff00);
  FUN_140e87440(uVar6,DAT_1419f1988,0x80000000,&local_60,puVar5,ppuVar11);
  uVar1 = FUN_140e851f0(&local_50,&local_60,DAT_141955260,1);
  if (0x7fffffff < uVar1) goto LAB_140c3efc8;
  local_b8 = 0xaa4;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
  uVar10 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f5868,0x80000000,&local_e8,uVar10,uVar12);
  FUN_140e87440(&local_e8,DAT_141a55540,0x80000000,&local_70,uVar10 & 0xffffffffffffff00,
                uVar12 & 0xffffffffffffff00);
  local_b0 = (undefined4)DAT_141dda668;
  uStack_ac = DAT_141dda668._4_4_;
  uStack_a8 = DAT_141dda670;
  uStack_a4 = DAT_141dda674;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_b0);
  local_res8 = local_d8;
  switch(local_dc) {
  default:
switchD_140c3ee23_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_e8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_e8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140c3ee23_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_e8);
    uVar6 = FUN_140e87250(uVar3);
  }
  ppuVar11 = &local_res8;
  puVar5 = &local_70;
  FUN_140e63610(uVar6,param_2,&local_f8,1,puVar5,ppuVar11);
  local_b8 = 0xaa5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_80,(ulonglong)puVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  local_b0 = (undefined4)DAT_141dda668;
  uStack_ac = DAT_141dda668._4_4_;
  uStack_a8 = DAT_141dda670;
  uStack_a4 = DAT_141dda674;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_b0);
  local_res8 = local_d8;
  uVar6 = FUN_140069500(uVar6);
  ppuVar11 = &local_res8;
  puVar5 = &local_80;
  FUN_140e63610(uVar6,param_2,&local_f8,1,puVar5,ppuVar11);
  local_b8 = 0xaa6;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f8a48);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffbb8);
  FUN_140e609c0(param_1);
  if (puVar7 != puVar8) {
    local_b0 = *puVar7;
    uStack_ac = puVar7[1];
    uStack_a8 = puVar7[2];
    uStack_a4 = puVar7[3];
    if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_b0);
  }
  FUN_140e60910(1);
LAB_140c3efc8:
  local_b8 = 0xaaa;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_a0,(ulonglong)puVar5 & 0xffffffffffffff00,
                (ulonglong)ppuVar11 & 0xffffffffffffff00);
  FUN_1400460e0(&local_a0,puVar4);
  FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_a0);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


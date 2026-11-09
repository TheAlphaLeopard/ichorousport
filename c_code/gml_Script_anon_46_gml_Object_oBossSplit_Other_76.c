// gml_Script_anon_46_gml_Object_oBossSplit_Other_76 @ 0x14080ccf0

void gml_Script_anon_46_gml_Object_oBossSplit_Other_76(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 **ppuVar12;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_34;
  
  local_70 = "gml_Object_oBossSplit_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  _eh_vector_constructor_iterator_(local_b8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_68 = 3;
  FUN_140e98b30(param_1,param_2);
  local_68 = 4;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  plVar7 = param_1;
  uVar11 = param_2;
  FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
  uStack_dc = local_bc;
  uStack_e0 = local_c0;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_c8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_c8);
  }
  uVar2 = uStack_dc;
  local_88 = (undefined4)local_e8;
  uStack_84 = local_e8._4_4_;
  uStack_80 = uStack_e0;
  uStack_7c = uStack_dc;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_88);
  if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e86c30(uVar5,DAT_1419fded8,0x80000000,&local_98);
  local_68 = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar8 = (ulonglong)plVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419f5868,0x80000000,&local_d8,uVar8,uVar11);
  FUN_140e87440(&local_d8,DAT_141a0a968,0x80000000,&local_40,uVar8 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  switch(local_cc) {
  default:
switchD_14080cf4e_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_d8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_d8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14080cf4e_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(&local_d8);
    uVar5 = FUN_140e87250(uVar2);
  }
  uVar11 = 0;
  puVar9 = &local_40;
  FUN_140e63610(uVar5,param_2,&local_108,0,puVar9,0);
  local_68 = 7;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar5,DAT_1419f5df8,0x80000000,&local_50,(ulonglong)puVar9 & 0xffffffffffffff00,
                uVar11 & 0xffffffffffffff00);
  uStack_dc = DAT_141dd6c44;
  uStack_e0 = DAT_141dd6c40;
  if ((1 << ((byte)DAT_141dd6c44 & 0x1f) & 0x46U) == 0) {
    local_e8 = DAT_141dd6c38;
  }
  else {
    FUN_1400419b0(&local_e8,&DAT_141dd6c38);
  }
  uVar5 = FUN_140069500(uVar5);
  puVar9 = &local_50;
  uVar5 = FUN_140e63610(uVar5,param_2,&local_108,0,puVar9,0);
  uVar2 = (undefined4)((ulonglong)puVar9 >> 0x20);
  iVar3 = FUN_140e851f0(uVar5,&local_e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (iVar3 == 0) {
    local_68 = 8;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar6 != local_b8) {
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_88);
    }
    local_60 = local_b8;
    ppuVar12 = &local_60;
    uVar4 = DAT_141a09ab8;
  }
  else {
    local_68 = 9;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar6 != local_b8) {
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_88);
    }
    local_60 = local_b8;
    uVar10 = CONCAT44(uVar2,DAT_141a07828);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar10,&local_60);
    uVar2 = (undefined4)((ulonglong)uVar10 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') goto LAB_14080d299;
    local_68 = 10;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a08);
    if (puVar6 != local_a8) {
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_88);
    }
    local_58 = local_a8;
    ppuVar12 = &local_58;
    uVar4 = DAT_141a09ac8;
  }
  FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar2,uVar4),ppuVar12);
LAB_14080d299:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}


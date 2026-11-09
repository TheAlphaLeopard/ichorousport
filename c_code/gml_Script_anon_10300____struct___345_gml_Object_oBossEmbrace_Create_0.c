// gml_Script_anon_10300____struct___345_gml_Object_oBossEmbrace_Create_0 @ 0x140734670

undefined8 *
gml_Script_anon_10300____struct___345_gml_Object_oBossEmbrace_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  longlong **pplVar9;
  ulonglong uVar10;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  byte local_cc;
  longlong local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong local_98;
  undefined4 uStack_90;
  int iStack_8c;
  longlong *local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_b0 = "gml_Script_anon@9827@___struct___344@gml_Object_oBossEmbrace_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x13f;
  _eh_vector_constructor_iterator_(&local_d8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_3c = 0xffffff;
  local_48 = 0;
  iStack_8c = 0xffffff;
  local_98 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_fc = 0;
  local_108 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x140;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar4,0);
  uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_a8 = 0x142;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07088);
  if (plVar5 != &local_d8) {
    local_f8 = *plVar5;
    uStack_f0 = (undefined4)plVar5[1];
    iStack_ec = *(int *)((longlong)plVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_88 = &local_d8;
  pplVar9 = &local_88;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar7,pplVar9);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    uVar8 = (undefined4)(uVar7 >> 0x20);
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06c38);
    if (plVar5 != &local_c8) {
      local_f8 = *plVar5;
      uStack_f0 = (undefined4)plVar5[1];
      iStack_ec = *(int *)((longlong)plVar5 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    local_80 = &local_c8;
    pplVar9 = &local_80;
    uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar7,pplVar9);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_a8 = 0x143;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff2d8);
      uVar10 = (ulonglong)pplVar9 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a06f88,0x80000000,&local_68,uVar7,uVar10);
      iStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
      uStack_f0 = (undefined4)plVar3[1];
      if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) == 0) {
        local_f8 = *plVar3;
      }
      else {
        FUN_1400419b0(&local_f8,plVar3);
      }
      FUN_140042560(&local_f8,uVar6);
      FUN_1400462a0(&local_68,&local_f8);
      if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140e87930(uVar4,DAT_141a06f88,0x80000000,&local_68);
      local_a8 = 0x144;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      pplVar9 = (longlong **)(uVar10 & 0xffffffffffffff00);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a06f88,0x80000000,&local_48,uVar7,pplVar9);
      iStack_ec = 0;
      local_f8 = 0;
      iVar2 = FUN_140e851f0(&local_48,&local_f8,DAT_141955260,1);
      if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_a8 = 0x145;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        uVar10 = (ulonglong)pplVar9 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06e68,0x80000000,&local_98,uVar7,uVar10);
        if (((iStack_8c != 2) || (local_98 == 0)) || (*(int *)(local_98 + 0x24) == 0)) {
          local_a8 = 0x145;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_108 = 0;
          local_100 = 0;
          local_fc = 5;
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07048);
          uVar10 = 0;
          FUN_140e63610(param_1,param_2,&local_108,0,uVar7,0);
        }
        local_a8 = 0x146;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_58,uVar7,uVar10);
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_141a06e68,0x80000000,&local_98,uVar7,uVar10 & 0xffffffffffffff00);
        uVar8 = (undefined4)(uVar7 >> 0x20);
        local_f8 = local_98;
        uStack_f0 = uStack_90;
        iStack_ec = iStack_8c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_f8);
        local_88 = &local_d8;
        plVar3 = (longlong *)
                 FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar8,DAT_141a0a9e8),&local_88);
        if (plVar3 != &local_c8) {
          local_f8 = *plVar3;
          uStack_f0 = (undefined4)plVar3[1];
          iStack_ec = *(int *)((longlong)plVar3 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_f8);
        }
        local_80 = &local_c8;
        uVar4 = FUN_140069500(uVar6);
        FUN_140e63610(uVar4,param_2,&local_108,1,&local_58,&local_80);
        local_a8 = 0x147;
        goto LAB_140734d11;
      }
    }
  }
  local_a8 = 0x14b;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_78,uVar7 & 0xffffffffffffff00,
                (ulonglong)pplVar9 & 0xffffffffffffff00);
  FUN_1400460e0(&local_78,plVar3);
  FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_78);
LAB_140734d11:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)iStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


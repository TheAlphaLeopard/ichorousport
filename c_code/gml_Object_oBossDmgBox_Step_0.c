// gml_Object_oBossDmgBox_Step_0 @ 0x1407253b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBossDmgBox_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 **in_stack_fffffffffffffef0;
  undefined1 **ppuVar7;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
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
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40 [3];
  
  local_a0 = "gml_Object_oBossClot_Step_0";
  local_98 = 0;
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_98 = 4;
  FUN_140e98b30(param_1,param_2);
  local_98 = 6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a057c8);
  uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_100 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
    local_108 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_108,puVar4);
  }
  FUN_140042560(&local_108,uVar5);
  iVar2 = FUN_140e851f0(uVar3,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uStack_fc = 0;
    local_108 = 0;
    iVar2 = FUN_140e851f0(uVar3,&local_108,DAT_141955260,1);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if (0 < iVar2) {
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
      uStack_fc = 0;
      local_108 = 0;
      iVar2 = FUN_140e851f0(uVar5,&local_108,DAT_141955260,0);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if (iVar2 == 0) {
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar5,DAT_1419f5df8,0x80000000,&local_90,
                      (ulonglong)pcVar6 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffef0 & 0xffffffffffffff00);
        uStack_fc = DAT_141dd61b4;
        uStack_100 = DAT_141dd61b0;
        if ((1 << ((byte)DAT_141dd61b4 & 0x1f) & 0x46U) == 0) {
          local_108 = CONCAT44(DAT_141dd61a8._4_4_,(undefined4)DAT_141dd61a8);
        }
        else {
          FUN_1400419b0(&local_108,&DAT_141dd61a8);
        }
        uVar5 = FUN_140069500(uVar5);
        in_stack_fffffffffffffef0 = (undefined1 **)0x0;
        pcVar6 = (code *)&local_90;
        uVar5 = FUN_140e63610(uVar5,param_2,&local_e8,0,pcVar6,0);
        iVar2 = FUN_140e851f0(uVar5,&local_108,DAT_141955260,0);
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (iVar2 != 0) {
          local_98 = 8;
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          local_f8 = 0;
          local_f0 = 0;
          local_ec = 5;
          uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
          FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_b8,
                        (ulonglong)pcVar6 & 0xffffffffffffff00,
                        (ulonglong)in_stack_fffffffffffffef0 & 0xffffffffffffff00);
          local_108 = CONCAT44(DAT_141dd61a8._4_4_,(undefined4)DAT_141dd61a8);
          uStack_100 = DAT_141dd61b0;
          uStack_fc = DAT_141dd61b4;
          if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_80);
          }
          FUN_140041b80(local_80,&local_108);
          local_50 = local_80;
          uVar5 = FUN_140069500(uVar5);
          in_stack_fffffffffffffef0 = &local_50;
          pcVar6 = (code *)&local_b8;
          FUN_140e63610(uVar5,param_2,&local_f8,1,pcVar6,in_stack_fffffffffffffef0);
        }
      }
    }
  }
  local_98 = 0xc;
  uStack_fc = 0;
  local_108 = 0;
  iVar2 = FUN_140e851f0(uVar3,&local_108,DAT_141955260,1);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_1419f5848,0x80000000,&local_c8,(ulonglong)pcVar6 & 0xffffffffffffff00,
                  (ulonglong)in_stack_fffffffffffffef0 & 0xffffffffffffff00);
    local_108 = CONCAT44(uRam0000000141dd619c,_DAT_141dd6198);
    uStack_100 = uRam0000000141dd61a0;
    uStack_fc = DAT_141dd61a4;
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_80);
    }
    FUN_140041b80(local_80,&local_108);
    local_50 = local_80;
    uVar3 = FUN_140069500(uVar3);
    ppuVar7 = &local_50;
    puVar4 = &local_c8;
    uVar3 = FUN_140e63610(uVar3,param_2,&local_e8,1,puVar4,ppuVar7);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_1419f5848,0x80000000,&local_c8,(ulonglong)puVar4 & 0xffffffffffffff00,
                    (ulonglong)ppuVar7 & 0xffffffffffffff00);
      local_108 = CONCAT44(uRam0000000141dd618c,_DAT_141dd6188);
      uStack_100 = uRam0000000141dd6190;
      uStack_fc = DAT_141dd6194;
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_70);
      }
      FUN_140041b80(local_70,&local_108);
      local_48 = local_70;
      uVar3 = FUN_140069500(uVar3);
      ppuVar7 = &local_48;
      puVar4 = &local_c8;
      uVar3 = FUN_140e63610(uVar3,param_2,&local_f8,1,puVar4,ppuVar7);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        local_98 = 0xe;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_b8,
                      (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar7 & 0xffffffffffffff00
                     );
        local_108 = CONCAT44(uRam0000000141dd619c,_DAT_141dd6198);
        uStack_100 = uRam0000000141dd61a0;
        uStack_fc = DAT_141dd61a4;
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_108);
        local_40[0] = local_60;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,param_2,&local_d8,1,&local_b8,local_40);
      }
    }
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return;
}


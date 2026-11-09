// gml_Script_anon_26510_SnowState_SnowState @ 0x14050ceb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_26510_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar8;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 **ppuVar9;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_70 = "gml_Script_anon@25864@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x34a;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_2c = 0xffffff;
  local_38 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x34b;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14050cf97:
    local_f8 = *puVar4;
    uStack_f0 = *(undefined4 *)(puVar4 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != &local_b8) goto LAB_14050cf97;
  }
  local_58 = &local_b8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,1,DAT_1419fdbf8,&local_58);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
LAB_14050d4b4:
    local_68 = 0x34d;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
    local_f8 = CONCAT44(uRam0000000141dd3a0c,_DAT_141dd3a08);
    uStack_f0 = uRam0000000141dd3a10;
    uStack_ec = DAT_141dd3a14;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
    local_50 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_d8,1,uVar3,&local_50);
    local_68 = 0x34f;
  }
  else {
    uStack_ec = DAT_141dd39a4;
    uStack_f0 = DAT_141dd39a0;
    if ((1 << ((byte)DAT_141dd39a4 & 0x1f) & 0x46U) == 0) {
      local_f8 = DAT_141dd3998;
    }
    else {
      FUN_1400419b0(&local_f8,&DAT_141dd3998);
    }
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(puVar4,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar2 == 0) goto LAB_14050d4b4;
    local_68 = 0x352;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fce88);
    puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_e8,0,uVar3,0);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar4 != &local_88) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88);
    }
    local_68 = 0x353;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
    if (puVar4 != &local_c8) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    local_60 = &local_c8;
    local_58 = &local_88;
    uVar3 = CONCAT44(uVar8,DAT_141a01138);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar3,&local_60);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar4 != &local_a8) {
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
    }
    local_50 = &local_a8;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14050d254:
      local_f8 = *puVar4;
      uStack_f0 = *(undefined4 *)(puVar4 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_f8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != &local_98) goto LAB_14050d254;
    }
    local_48 = &local_98;
    uVar6 = CONCAT44(uVar8,DAT_1419fcba8);
    uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar6,&local_50);
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_68 = 0x354;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
      if (puVar4 != &local_c8) {
        local_f8 = *puVar4;
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      local_60 = &local_c8;
      local_58 = &local_88;
      uVar3 = CONCAT44(uVar8,DAT_141a01138);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,2,uVar3,&local_60);
      uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (puVar4 != &local_a8) {
        local_f8 = *puVar4;
        uStack_f0 = *(undefined4 *)(puVar4 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_f8);
      }
      local_50 = &local_a8;
      if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_98)) {
        local_f8 = *puVar5;
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_f8);
      }
      local_48 = &local_98;
      ppuVar9 = &local_50;
      uVar7 = CONCAT44(uVar8,DAT_141a01138);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar7,ppuVar9);
      FUN_140e87440(uVar3,DAT_1419fca58,0x80000000,&local_38,uVar7 & 0xffffffffffffff00,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      if (&local_38 != param_3) {
        local_f8 = local_38;
        uStack_f0 = uStack_30;
        uStack_ec = uStack_2c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_f8);
      }
      goto LAB_14050d583;
    }
    local_68 = 0x353;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = 0;
LAB_14050d583:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


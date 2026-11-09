// gml_Script_anon_20546_SnowState_SnowState @ 0x140506ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_20546_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
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
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_44;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_80 = "gml_Script_anon@19208@SnowState@SnowState";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x269;
  FUN_140041df0(local_40,param_4,4,param_5);
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_44 = 0xffffff;
  local_50 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x269;
  puVar5 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (local_78 = 0x269, 1 < (int)local_40[0])) &&
     (puVar4 = (undefined8 *)local_38[1], puVar4 != &DAT_1419df7b0)) {
    local_e8 = (undefined4)DAT_1419df7b0;
    uStack_e4 = DAT_1419df7b0._4_4_;
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  if ((int)local_40[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (2 < (int)local_40[0])) &&
     (puVar4 = (undefined8 *)local_38[2], puVar4 != &DAT_1419df7b0)) {
    local_e8 = (undefined4)DAT_1419df7b0;
    uStack_e4 = DAT_1419df7b0._4_4_;
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  if ((int)local_40[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (3 < (int)local_40[0])) &&
     (puVar4 = (undefined8 *)local_38[3], puVar4 != &DAT_1419df7b0)) {
    local_e8 = (undefined4)DAT_1419df7b0;
    uStack_e4 = DAT_1419df7b0._4_4_;
    uStack_e0 = DAT_1419df7b8;
    uStack_dc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_e8);
  }
  local_78 = 0x26a;
  if ((int)local_40[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
    if ((int)local_40[0] < 2) {
      puVar4 = &DAT_1419df7b0;
LAB_140507291:
      local_e8 = *(undefined4 *)puVar4;
      uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    else {
      puVar4 = (undefined8 *)local_38[1];
      if (puVar4 != &local_c8) goto LAB_140507291;
    }
    local_70 = &local_c8;
    uVar3 = FUN_140e63610(param_1,param_2,&local_f8,1,uVar3,&local_70);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_78 = 0x26b;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_e8 = _DAT_141dd39f8;
      uStack_e4 = uRam0000000141dd39fc;
      uStack_e0 = uRam0000000141dd3a00;
      uStack_dc = DAT_141dd3a04;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_e8);
      local_68 = &local_b8;
      FUN_140e63610(param_1,param_2,&local_d8,1,uVar3,&local_68);
      local_78 = 0x26c;
      if (param_3 != &DAT_1419df7b0) {
        local_e8 = (undefined4)DAT_1419df7b0;
        uStack_e4 = DAT_1419df7b0._4_4_;
        uStack_e0 = DAT_1419df7b8;
        uStack_dc = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
      goto LAB_1405079e1;
    }
  }
  local_78 = 0x26f;
  if ((int)local_40[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
    if ((int)local_40[0] < 3) {
      puVar4 = &DAT_1419df7b0;
LAB_140507476:
      local_e8 = *(undefined4 *)puVar4;
      uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_e8);
    }
    else {
      puVar4 = (undefined8 *)local_38[2];
      if (puVar4 != &local_c8) goto LAB_140507476;
    }
    local_70 = &local_c8;
    uVar3 = FUN_140e63610(param_1,param_2,&local_f8,1,uVar3,&local_70);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_78 = 0x270;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_e8 = _DAT_141dd3b08;
      uStack_e4 = uRam0000000141dd3b0c;
      uStack_e0 = uRam0000000141dd3b10;
      uStack_dc = DAT_141dd3b14;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_e8);
      local_68 = &local_b8;
      FUN_140e63610(param_1,param_2,&local_d8,1,uVar3,&local_68);
      local_78 = 0x271;
      if (param_3 != &DAT_1419df7b0) {
        local_e8 = (undefined4)DAT_1419df7b0;
        uStack_e4 = DAT_1419df7b0._4_4_;
        uStack_e0 = DAT_1419df7b8;
        uStack_dc = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_e8);
      }
      goto LAB_1405079e1;
    }
  }
  local_78 = 0x274;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5df8);
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_f8,0,uVar3,0);
  if (puVar4 != &local_50) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_50);
    }
    FUN_140041b80(&local_50,&local_e8);
  }
  local_78 = 0x275;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcfa8);
  if ((int)local_40[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1405076c8:
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  else {
    puVar4 = (undefined8 *)*local_38;
    if (puVar4 != &local_c8) goto LAB_1405076c8;
  }
  local_70 = &local_c8;
  if ((int)local_40[0] < 2) {
    puVar4 = &DAT_1419df7b0;
LAB_140507718:
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_e8);
  }
  else {
    puVar4 = (undefined8 *)local_38[1];
    if (puVar4 != &local_b8) goto LAB_140507718;
  }
  local_68 = &local_b8;
  if ((int)local_40[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_140507768:
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_e8);
  }
  else {
    puVar4 = (undefined8 *)local_38[2];
    if (puVar4 != &local_a8) goto LAB_140507768;
  }
  local_60 = &local_a8;
  if ((int)local_40[0] < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_1405077b8:
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  else {
    puVar4 = (undefined8 *)local_38[3];
    if (puVar4 != &local_98) goto LAB_1405077b8;
  }
  local_58 = &local_98;
  FUN_140e63610(param_1,param_2,&local_f8,4,uVar3,&local_70);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_78 = 0x276;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd18);
  if (((int)local_40[0] < 1) || (puVar5 = (undefined8 *)*local_38, puVar5 != &local_c8)) {
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  local_70 = &local_c8;
  local_68 = &local_50;
  local_e8 = (undefined4)DAT_141dd3c08;
  uStack_e4 = DAT_141dd3c08._4_4_;
  uStack_e0 = DAT_141dd3c10;
  uStack_dc = DAT_141dd3c14;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_e8);
  local_60 = &local_a8;
  puVar5 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar7,DAT_1419fdca8),&local_70);
  if (puVar5 != &local_98) {
    local_e8 = *(undefined4 *)puVar5;
    uStack_e4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_e8);
  }
  local_58 = &local_98;
  FUN_140e63610(param_1,param_2,&local_f8,2,uVar3,&local_60);
  local_78 = 0x278;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
LAB_1405079e1:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar5 = local_38;
    do {
      puVar4 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


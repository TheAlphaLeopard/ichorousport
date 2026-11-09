// gml_Script_anon_20030_SnowState_SnowState @ 0x140506720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_20030_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_70 = "gml_Script_anon@18543@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x253;
  FUN_140041df0(local_40,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x253;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_38[1];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_68 = 0x253;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_40[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_38[1];
    }
    puVar3 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_e8,0,CONCAT44(uVar9,DAT_1419fd6d8),0);
    if (puVar3 != puVar6) {
      local_d8 = *puVar3;
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_d8);
    }
  }
  local_68 = 0x254;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd78);
  if ((int)local_40[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_14050690f:
    local_d8 = *puVar6;
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  else {
    puVar6 = (undefined8 *)*local_38;
    if (puVar6 != &local_b8) goto LAB_14050690f;
  }
  local_60 = &local_b8;
  uVar5 = FUN_140e63610(param_1,param_2,&local_e8,1,uVar4,&local_60);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_68 = 0x254;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
    goto LAB_140506f23;
  }
  local_68 = 0x256;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((int)local_40[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140506a0d:
    local_d8 = *puVar6;
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  else {
    puVar6 = (undefined8 *)local_38[1];
    if (puVar6 != &local_b8) goto LAB_140506a0d;
  }
  local_60 = &local_b8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar9,DAT_1419fcb88),&local_60);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_68 = 599;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_d8 = CONCAT44(uRam0000000141dd3b4c,_DAT_141dd3b48);
    uStack_d0 = uRam0000000141dd3b50;
    uStack_cc = DAT_141dd3b54;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
    local_58 = &local_a8;
    FUN_140e63610(param_1,param_2,&local_c8,1,uVar4,&local_58);
    local_68 = 600;
    if (param_3 != &DAT_1419df7b0) {
      local_d8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_d0 = DAT_1419df7b8;
      uStack_cc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_d8);
    }
    goto LAB_140506f23;
  }
  local_68 = 0x25b;
  uStack_cc = 0xd;
  local_d8 = 0x3ff0000000000000;
  cVar1 = FUN_140e491e0(&local_d8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc88);
    if ((int)local_40[0] < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_140506c0c:
      local_d8 = *puVar6;
      uStack_d0 = *(undefined4 *)(puVar6 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_d8);
    }
    else {
      puVar6 = (undefined8 *)*local_38;
      if (puVar6 != &local_b8) goto LAB_140506c0c;
    }
    local_60 = &local_b8;
    uVar4 = FUN_140e63610(param_1,param_2,&local_e8,1,uVar4,&local_60);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_68 = 0x25c;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
      local_d8 = CONCAT44(uRam0000000141dd3b7c,_DAT_141dd3b78);
      uStack_d0 = uRam0000000141dd3b80;
      uStack_cc = DAT_141dd3b84;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_d8);
      local_58 = &local_a8;
      if ((int)local_40[0] < 1) {
        puVar6 = &DAT_1419df7b0;
LAB_140506d0e:
        local_d8 = *puVar6;
        uStack_d0 = *(undefined4 *)(puVar6 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_d8);
      }
      else {
        puVar6 = (undefined8 *)*local_38;
        if (puVar6 != &local_98) goto LAB_140506d0e;
      }
      local_50 = &local_98;
      local_d8 = CONCAT44(uRam0000000141dd3a7c,_DAT_141dd3a78);
      uStack_d0 = uRam0000000141dd3a80;
      uStack_cc = DAT_141dd3a84;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_d8);
      local_48 = local_88;
      FUN_140e63610(param_1,param_2,&local_c8,3,uVar4,&local_58);
    }
  }
  local_68 = 0x25f;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a555a0);
  if ((int)local_40[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140506e03:
    local_d8 = *puVar6;
    uStack_d0 = *(undefined4 *)(puVar6 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  else {
    puVar6 = (undefined8 *)*local_38;
    if (puVar6 != &local_b8) goto LAB_140506e03;
  }
  local_60 = &local_b8;
  if (((int)local_40[0] < 2) || (puVar7 = (undefined8 *)local_38[1], puVar7 != &local_a8)) {
    local_d8 = *puVar7;
    uStack_d0 = *(undefined4 *)(puVar7 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
  }
  local_58 = &local_a8;
  local_d8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_d0 = uRam00000001419df7a8;
  uStack_cc = uRam00000001419df7ac;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_d8);
  local_50 = &local_98;
  FUN_140e63610(param_1,param_2,&local_e8,3,uVar4,&local_60);
  local_68 = 0x261;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
LAB_140506f23:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,4,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar7 = local_38;
    do {
      puVar6 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


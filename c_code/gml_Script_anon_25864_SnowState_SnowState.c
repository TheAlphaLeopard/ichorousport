// gml_Script_anon_25864_SnowState_SnowState @ 0x14050c400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_25864_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
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
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_70 = "gml_Script_anon@24948@SnowState@SnowState";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x32c;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x32d;
  uStack_ec = 0xd;
  local_f8 = 0x3ff0000000000000;
  cVar1 = FUN_140e491e0(&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fce18);
    if (puVar3 != &local_a8) {
      local_f8 = *puVar3;
      uStack_f0 = *(undefined4 *)(puVar3 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
    }
    local_50 = &local_a8;
    uVar6 = CONCAT44(uVar7,DAT_1419fcf98);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar6,&local_50);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uStack_ec = 0;
    local_f8 = 0;
    iVar2 = FUN_140e851f0(uVar4,&local_f8,DAT_141955260,1);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (0 < iVar2) {
      local_68 = 0x32e;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
      local_f8 = CONCAT44(uRam0000000141dd3c5c,_DAT_141dd3c58);
      uStack_f0 = uRam0000000141dd3c60;
      uStack_ec = DAT_141dd3c64;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_f8);
      local_48 = &local_98;
      FUN_140e63610(param_1,param_2,&local_d8,1,uVar4,&local_48);
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
  }
  local_68 = 0x331;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14050c6e1:
    local_f8 = *puVar5;
    uStack_f0 = *(undefined4 *)(puVar5 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_c8) goto LAB_14050c6e1;
  }
  local_60 = &local_c8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar7,DAT_1419fdbf8),&local_60);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
LAB_14050ccaf:
    local_68 = 0x332;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_f8 = CONCAT44(uRam0000000141dd3a0c,_DAT_141dd3a08);
    uStack_f0 = uRam0000000141dd3a10;
    uStack_ec = DAT_141dd3a14;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_58 = &local_b8;
    FUN_140e63610(param_1,param_2,&local_d8,1,uVar4,&local_58);
    local_68 = 0x333;
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
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e851f0(puVar5,&local_f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if (iVar2 == 0) goto LAB_14050ccaf;
    local_68 = 0x336;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc18);
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_14050c832:
      local_f8 = *puVar5;
      uStack_f0 = *(undefined4 *)(puVar5 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_c8) goto LAB_14050c832;
    }
    local_60 = &local_c8;
    uVar4 = FUN_140e63610(param_1,param_2,&local_e8,1,uVar4,&local_60);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_68 = 0x33b;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcde8);
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_14050c99e:
        local_f8 = *puVar5;
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      else {
        puVar5 = (undefined8 *)*param_5;
        if (puVar5 != &local_c8) goto LAB_14050c99e;
      }
      local_60 = &local_c8;
      FUN_140e63610(param_1,param_2,&local_e8,1,uVar4,&local_60);
      uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_68 = 0x33c;
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
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcff8);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcda8);
      if (puVar5 != &local_c8) {
        local_f8 = *puVar5;
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_f8);
      }
      local_60 = &local_c8;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
LAB_14050caca:
        local_f8 = *puVar5;
        uStack_f0 = *(undefined4 *)(puVar5 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
        if (puVar5 != &local_b8) goto LAB_14050caca;
      }
      local_58 = &local_b8;
      if ((param_4 < 1) || (puVar3 = (undefined8 *)*param_5, puVar3 != &local_a8)) {
        local_f8 = *puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_f8);
      }
      local_50 = &local_a8;
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar7,DAT_1419fed78),&local_60);
      if (puVar3 != &local_98) {
        local_f8 = *puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        FUN_140041b80(&local_98,&local_f8);
      }
      local_48 = &local_98;
      local_f8 = CONCAT44(uRam00000001419e5fa4,_DAT_1419e5fa0);
      uStack_f0 = uRam00000001419e5fa8;
      uStack_ec = uRam00000001419e5fac;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_f8);
      local_40 = local_88;
      FUN_140e63610(param_1,param_2,&local_e8,3,uVar4,&local_50);
      local_68 = 0x33d;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc68);
      FUN_140e63610(param_1,param_2,&local_e8,0,uVar4,0);
      local_68 = 0x33f;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 6;
      *param_3 = param_1;
      uVar4 = FUN_140e5c910();
      FUN_140e42c10(uVar4,param_1);
      goto LAB_14050cd88;
    }
    local_68 = 0x337;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
    local_f8 = CONCAT44(uRam0000000141dd3bfc,_DAT_141dd3bf8);
    uStack_f0 = uRam0000000141dd3c00;
    uStack_ec = DAT_141dd3c04;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_58 = &local_b8;
    FUN_140e63610(param_1,param_2,&local_d8,1,uVar4,&local_58);
    local_68 = 0x338;
  }
  if (param_3 != &DAT_1419df7b0) {
    local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_f0 = DAT_1419df7b8;
    uStack_ec = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
LAB_14050cd88:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


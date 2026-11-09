// gml_Script_StatesBodyBagIdle @ 0x1405170f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesBodyBagIdle
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_80 = "gml_Script_SpriteBroadcast";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 1;
  FUN_140041df0(local_38,param_4,3,param_5);
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_dc = 0;
  local_e8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 1;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 3) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_30[2];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_78 = 1;
    uStack_ec = 6;
    pcVar6 = (code *)((ulonglong)pcVar6 & 0xffffffffffffff00);
    local_f8 = param_1;
    FUN_140e87440(&local_f8,DAT_141a0a828,0x80000000,&local_48,pcVar6,
                  in_stack_ffffffffffffff00 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((int)local_38[0] < 3) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_30[2];
      if (&local_48 == puVar3) goto LAB_1405172a8;
    }
    local_f8 = local_48;
    uStack_f0 = uStack_40;
    uStack_ec = uStack_3c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_f8);
  }
LAB_1405172a8:
  uVar8 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  local_78 = 4;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  FUN_140e85f80(param_1,DAT_1419fd2f8,0x80000000,&local_98);
  local_f8 = local_98;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_60 = local_d8;
  local_f8 = CONCAT44(uRam0000000141dd3d1c,_DAT_141dd3d18);
  uStack_f0 = uRam0000000141dd3d20;
  uStack_ec = DAT_141dd3d24;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_58 = local_c8;
  uStack_ec = DAT_141dd3d14;
  uStack_f0 = DAT_141dd3d10;
  if ((1 << ((byte)DAT_141dd3d14 & 0x1f) & 0x46U) == 0) {
    local_f8 = DAT_141dd3d08;
  }
  else {
    FUN_1400419b0(&local_f8,&DAT_141dd3d08);
  }
  uVar7 = CONCAT44(uVar8,DAT_1419ff4f8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar7,&local_60);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar1 = FUN_140e851f0(uVar2,&local_f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if (iVar1 == 0) {
    local_78 = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    FUN_140e85f80(param_1,DAT_1419fd2f8,0x80000000,&local_98);
    local_f8 = local_98;
    uStack_f0 = uStack_90;
    uStack_ec = uStack_8c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_f8);
    local_60 = local_d8;
    local_f8 = CONCAT44(uRam0000000141dd3d3c,_DAT_141dd3d38);
    uStack_f0 = uRam0000000141dd3d40;
    uStack_ec = DAT_141dd3d44;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_f8);
    local_58 = local_c8;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_30;
    }
    uVar7 = CONCAT44(uVar8,DAT_1419ff4f8);
    uVar2 = FUN_140e634e0(param_1,param_2,&local_e8,2,uVar7,&local_60);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    iVar1 = FUN_140e851f0(uVar2,puVar3,DAT_141955260,0);
    if (iVar1 == 0) {
      local_78 = 7;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      FUN_140e85f80(param_1,DAT_1419fd2f8,0x80000000,&local_98);
      local_f8 = local_98;
      uStack_f0 = uStack_90;
      uStack_ec = uStack_8c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_f8);
      local_60 = local_d8;
      local_f8 = CONCAT44(uRam0000000141dd3d2c,_DAT_141dd3d28);
      uStack_f0 = uRam0000000141dd3d30;
      uStack_ec = DAT_141dd3d34;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_f8);
      local_58 = local_c8;
      uVar2 = CONCAT44(uVar8,DAT_1419ff4f8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,2,uVar2,&local_60);
      uVar8 = (undefined4)((ulonglong)uVar2 >> 0x20);
      if (puVar3 != &local_b8) {
        local_f8 = *puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_f8);
      }
      local_50 = &local_b8;
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar8,DAT_1419fd338),&local_50);
      if (puVar3 != &local_70) {
        local_f8 = *puVar3;
        uStack_f0 = *(undefined4 *)(puVar3 + 1);
        uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_f8);
      }
      local_78 = 9;
      if ((int)local_38[0] < 3) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)local_30[2];
      }
      iVar1 = FUN_140e851f0(&local_70,puVar3,DAT_141955260,0);
      if (iVar1 == 0) {
        local_78 = 0xc;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_e8 = 0;
        local_e0 = 0;
        local_dc = 5;
        if (1 < (int)local_38[0]) {
          puVar5 = (undefined8 *)local_30[1];
        }
        FUN_140e63610(param_1,param_2,&local_e8,0,puVar5,0);
      }
      else {
        local_78 = 9;
      }
    }
    else {
      local_78 = 5;
    }
  }
  else {
    local_78 = 4;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar5 = local_30;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


// gml_GlobalScript___InputClassVerbDefinition @ 0x140050590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputClassVerbDefinition
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_e0 = 
  "gml_Script___Update@anon@2392@__InputClassRebindingHandler@__InputClassRebindingHandler";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x56;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x59;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdba8);
  FUN_140e85f80(param_1,DAT_1419fd2a8,0x80000000,&local_d0);
  uStack_ec = local_c4;
  uStack_f0 = local_c8;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
    local_f8 = local_d0;
  }
  else {
    FUN_1400419b0(&local_f8,&local_d0);
  }
  FUN_1400462a0(&local_f8,uVar4);
  uStack_11c = 0;
  local_128 = 0x40b3880000000000;
  iVar2 = FUN_140e851f0(&local_f8,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  uVar3 = 1 << ((byte)local_10c & 0x1f);
  if (iVar2 < 1) {
    local_d8 = 0x5f;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdbd8);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdb78);
    if (puVar5 != &local_b8) {
      local_128 = *puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_128);
    }
    local_68 = &local_b8;
    if (puVar6 != &local_a8) {
      local_128 = *puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_128);
    }
    local_60 = &local_a8;
    if (puVar7 != &local_98) {
      local_128 = *puVar7;
      uStack_120 = *(undefined4 *)(puVar7 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_128);
    }
    local_58 = &local_98;
    puVar5 = (undefined8 *)
             gml_Script___InputClassClusterDefinition(param_1,param_2,&local_118,3,&local_68);
    if (puVar5 != &local_108) {
      local_128 = *puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_128);
    }
    local_d8 = 0x60;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdc38);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 == '\0') {
      local_d8 = 0x66;
      iVar2 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 != 0) {
        local_d8 = 0x68;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc18);
        FUN_140e609c0(param_1);
        if (&local_108 != puVar5) {
          local_128 = local_108;
          uStack_120 = uStack_100;
          uStack_11c = uStack_fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_128);
        }
        FUN_140e60910(1);
        local_d8 = 0x69;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc38);
        uStack_11c = 0xd;
        local_128 = 0x3ff0000000000000;
        if (&local_128 != puVar5) {
          local_f8 = 0x3ff0000000000000;
          uStack_f0 = uStack_120;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_f8);
        }
      }
    }
    else {
      local_d8 = 0x62;
      iVar2 = FUN_140e851f0(&local_108,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar2 == 0) {
        local_d8 = 0x62;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdc38);
        uStack_11c = 0xd;
        local_128 = 0;
        if (&local_128 != puVar5) {
          local_f8 = 0;
          uStack_f0 = uStack_120;
          uStack_ec = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_f8);
        }
      }
    }
  }
  else {
    local_d8 = 0x5b;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    if (puVar5 != &local_b8) {
      local_128 = *puVar5;
      uStack_120 = *(undefined4 *)(puVar5 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_128);
    }
    local_68 = &local_b8;
    local_128 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_120 = uRam00000001419df7a8;
    uStack_11c = uRam00000001419df7ac;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
    local_60 = &local_a8;
    local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
    local_58 = &local_98;
    local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_128);
    local_50 = local_88;
    local_128 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_120 = DAT_1419df7b8;
    uStack_11c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    local_48 = local_78;
    gml_Script_InputDeviceStopAllRebinding(param_1,param_2,&local_118,5,&local_68);
    local_d8 = 0x5c;
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


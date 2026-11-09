// gml_Script_anon_16181_SnowState_SnowState @ 0x140502370

undefined8 *
gml_Script_anon_16181_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8 [2];
  undefined8 local_d8 [2];
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8 [2];
  undefined8 local_98 [2];
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  uint local_40 [2];
  undefined8 *local_38;
  
  local_80 = "gml_Script_anon@13977@SnowState@SnowState";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x1c5;
  FUN_140041df0(local_40,param_4,2,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  local_fc = 0;
  local_108 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x1c6;
  uStack_11c = DAT_141dd39b4;
  uStack_120 = DAT_141dd39b0;
  if ((1 << ((byte)DAT_141dd39b4 & 0x1f) & 0x46U) == 0) {
    local_128 = DAT_141dd39a8;
  }
  else {
    FUN_1400419b0(&local_128,&DAT_141dd39a8);
  }
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_40[0];
  if ((int)local_40[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_38[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar3 = 1 << ((byte)local_10c & 0x1f);
  if (iVar2 == 0) {
    local_78 = 0x1c8;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd38);
    if (puVar4 != &local_c8) {
      local_128 = *puVar4;
      uStack_120 = *(undefined4 *)(puVar4 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_128);
    }
    local_60 = &local_c8;
    if (((int)local_40[0] < 1) || (puVar6 = (undefined8 *)*local_38, puVar6 != &local_b8)) {
      local_128 = *puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_128);
    }
    local_58 = &local_b8;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar9,DAT_1419fcba8),&local_60);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_78 = 0x1c9;
LAB_1405028ea:
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = 10;
      *param_3 = 1;
      goto LAB_140502ed4;
    }
LAB_140502ea5:
    local_78 = 0x1d8;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *param_3 = 0;
  }
  else {
    local_78 = 0x1cd;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
    if (puVar6 != local_e8) {
      local_128 = *puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_128);
    }
    local_70 = local_e8;
    if ((int)local_40[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14050268b:
      local_128 = *puVar6;
      uStack_120 = *(undefined4 *)(puVar6 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_128);
    }
    else {
      puVar6 = (undefined8 *)local_38[1];
      if (puVar6 != local_d8) goto LAB_14050268b;
    }
    local_68 = local_d8;
    uVar8 = CONCAT44(uVar9,DAT_1419fcba8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar8,&local_70);
    cVar1 = FUN_140e491e0(uVar5);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (cVar1 != '\0') {
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
      if (puVar6 != &local_c8) {
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_128);
      }
      local_60 = &local_c8;
      if ((int)local_40[0] < 2) {
        puVar6 = &DAT_1419df7b0;
LAB_1405027be:
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)_local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_128);
      }
      else {
        puVar6 = (undefined8 *)local_38[1];
        if (puVar6 != &local_b8) goto LAB_1405027be;
      }
      local_58 = &local_b8;
      uVar5 = CONCAT44(uVar9,DAT_141a01138);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,&local_60);
      uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar6 != local_a8) {
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_128);
      }
      local_50 = local_a8;
      if ((int)local_40[0] < 1) {
        puVar6 = &DAT_1419df7b0;
LAB_140502876:
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_128);
      }
      else {
        puVar6 = (undefined8 *)*local_38;
        if (puVar6 != local_98) goto LAB_140502876;
      }
      local_48 = local_98;
      uVar8 = CONCAT44(uVar9,DAT_1419fcba8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar8,&local_50);
      cVar1 = FUN_140e491e0(uVar5);
      if (cVar1 != '\0') {
        local_78 = 0x1ce;
        goto LAB_1405028ea;
      }
    }
    local_78 = 0x1d0;
    do {
      do {
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
        if (puVar6 != local_e8) {
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_128);
        }
        local_70 = local_e8;
        if ((int)local_40[0] < 2) {
          puVar6 = &DAT_1419df7b0;
LAB_1405029ca:
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_128);
        }
        else {
          puVar6 = (undefined8 *)local_38[1];
          if (puVar6 != local_d8) goto LAB_1405029ca;
        }
        local_68 = local_d8;
        uVar8 = CONCAT44(uVar9,DAT_1419fcba8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar8,&local_70);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
        cVar1 = FUN_140e491e0(uVar5);
        if (cVar1 == '\0') goto LAB_140502ea5;
        local_78 = 0x1d1;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_108 = 0;
        local_100 = 0;
        local_fc = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
        if (puVar6 != &local_c8) {
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_128);
        }
        local_60 = &local_c8;
        if ((int)local_40[0] < 2) {
          puVar6 = &DAT_1419df7b0;
LAB_140502ad7:
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)_local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_128);
        }
        else {
          puVar6 = (undefined8 *)local_38[1];
          if (puVar6 != &local_b8) goto LAB_140502ad7;
        }
        local_58 = &local_b8;
        if ((int)local_40[0] < 2) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_38[1];
        }
        uVar5 = CONCAT44(uVar9,DAT_141a01138);
        puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,2,uVar5,&local_60);
        uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
        if (puVar4 != puVar6) {
          local_128 = *puVar4;
          uStack_120 = *(undefined4 *)(puVar4 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_128);
        }
        local_78 = 0x1d2;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_118 = 0;
        local_110 = 0;
        local_10c = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
        if (puVar6 != local_e8) {
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_128);
        }
        local_70 = local_e8;
        if ((int)local_40[0] < 2) {
          puVar6 = &DAT_1419df7b0;
LAB_140502c1d:
          local_128 = *puVar6;
          uStack_120 = *(undefined4 *)(puVar6 + 1);
          uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_128);
        }
        else {
          puVar6 = (undefined8 *)local_38[1];
          if (puVar6 != local_d8) goto LAB_140502c1d;
        }
        local_68 = local_d8;
        uVar8 = CONCAT44(uVar9,DAT_1419fcba8);
        uVar5 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar8,&local_70);
        cVar1 = FUN_140e491e0(uVar5);
        uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      } while (cVar1 == '\0');
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
      if (puVar6 != &local_c8) {
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)_local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_128);
      }
      local_60 = &local_c8;
      if ((int)local_40[0] < 2) {
        puVar6 = &DAT_1419df7b0;
LAB_140502d50:
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)_local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        FUN_140041b80(&local_b8,&local_128);
      }
      else {
        puVar6 = (undefined8 *)local_38[1];
        if (puVar6 != &local_b8) goto LAB_140502d50;
      }
      local_58 = &local_b8;
      uVar5 = CONCAT44(uVar9,DAT_141a01138);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar5,&local_60);
      uVar9 = (undefined4)((ulonglong)uVar5 >> 0x20);
      if (puVar6 != local_a8) {
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_128);
      }
      local_50 = local_a8;
      if ((int)local_40[0] < 1) {
        puVar6 = &DAT_1419df7b0;
LAB_140502e08:
        local_128 = *puVar6;
        uStack_120 = *(undefined4 *)(puVar6 + 1);
        uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_128);
      }
      else {
        puVar6 = (undefined8 *)*local_38;
        if (puVar6 != local_98) goto LAB_140502e08;
      }
      local_48 = local_98;
      uVar8 = CONCAT44(uVar9,DAT_1419fcba8);
      uVar5 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar8,&local_50);
      cVar1 = FUN_140e491e0(uVar5);
    } while (cVar1 == '\0');
    local_78 = 0x1d3;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *param_3 = 2;
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
LAB_140502ed4:
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  if (0 < (int)local_40[0]) {
    puVar6 = local_38;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_38);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


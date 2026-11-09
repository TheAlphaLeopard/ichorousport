// gml_Script_anon_4527_anon_4411_SnowState_SnowState @ 0x1404f4070

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4527_anon_4411_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 **ppuVar10;
  undefined8 *local_res8;
  undefined4 uVar11;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined4 local_188 [3];
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined4 local_148 [3];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_1a0 = "gml_Script_anon@3364@SnowState@SnowState";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x6e;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(local_188,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcb78);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_3c = 0;
  local_48 = 0;
  local_1cc = 0;
  local_1d8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_4c = 0;
  local_58 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x70;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_1b8,gml_Script____struct___240_anon_4411_SnowState_SnowState,0);
  if (&local_1b8 != puVar4) {
    local_1f8 = (undefined4)local_1b8;
    uStack_1f4 = local_1b8._4_4_;
    uStack_1f0 = uStack_1b0;
    uStack_1ec = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  FUN_140e60910(1);
  if (puVar4 != &local_128) {
    local_1f8 = *(undefined4 *)puVar4;
    uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1f8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  puVar4 = &DAT_1419df7b0;
  local_88 = &local_128;
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f424b:
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
    if (puVar5 != &local_118) goto LAB_1404f424b;
  }
  local_80 = &local_118;
  if (param_4 < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f429b:
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)param_5[3];
    if (puVar5 != &local_108) goto LAB_1404f429b;
  }
  local_78 = &local_108;
  local_1f8 = _DAT_1419e5fb0;
  uStack_1f4 = uRam00000001419e5fb4;
  uStack_1f0 = uRam00000001419e5fb8;
  uStack_1ec = uRam00000001419e5fbc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_1f8);
  local_70 = local_f8;
  if (param_4 < 5) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f4327:
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)param_5[4];
    if (puVar5 != &local_e8) goto LAB_1404f4327;
  }
  local_68 = &local_e8;
  if (param_4 < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f4377:
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)param_5[5];
    if (puVar5 != &local_d8) goto LAB_1404f4377;
  }
  local_60 = &local_d8;
  uVar7 = CONCAT44(uVar11,DAT_1419fd6d8);
  puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e8,6,uVar7,&local_88);
  uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar5 != &local_c8) {
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1f8);
  }
  local_198 = 0x79;
  uStack_1ac = DAT_141dd39b4;
  uStack_1b0 = DAT_141dd39b0;
  if ((1 << ((byte)DAT_141dd39b4 & 0x1f) & 0x46U) == 0) {
    local_1b8 = DAT_141dd39a8;
  }
  else {
    FUN_1400419b0(&local_1b8,&DAT_141dd39a8);
  }
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&local_1b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  uVar3 = 1 << ((byte)local_1dc & 0x1f);
  if (iVar2 != 0) {
    local_198 = 0x82;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
    if (puVar6 != local_188) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1f8);
    }
    local_b8 = local_188;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1404f47f4:
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_178) goto LAB_1404f47f4;
    }
    local_b0 = &local_178;
    uVar9 = CONCAT44(uVar11,DAT_1419fcba8);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar9,&local_b8);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar7);
    if (cVar1 == '\0') {
      local_198 = 0x83;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,0,CONCAT44(uVar11,DAT_1419fd6d8),0);
      FUN_140e98ef0(param_1,param_2,puVar6,puVar5,uVar7);
      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_198 = 0x85;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if (puVar6 != local_188) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1f8);
    }
    local_b8 = local_188;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1404f49b9:
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_178) goto LAB_1404f49b9;
    }
    local_b0 = &local_178;
    uVar7 = CONCAT44(uVar11,DAT_141a01138);
    puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar7,&local_b8);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar8 != local_168) {
      local_1f8 = *puVar8;
      uStack_1f4 = puVar8[1];
      uStack_1f0 = puVar8[2];
      uStack_1ec = puVar8[3];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_1f8);
    }
    local_a8 = local_168;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1404f4a6e:
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)*param_5;
      if (puVar5 != &local_158) goto LAB_1404f4a6e;
    }
    local_a0 = &local_158;
    uVar9 = CONCAT44(uVar11,DAT_1419fcba8);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar9,&local_a8);
    uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar1 = FUN_140e491e0(uVar7);
    if (cVar1 == '\0') {
      local_198 = 0x86;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
      if (puVar6 != local_148) {
        local_1f8 = *puVar6;
        uStack_1f4 = puVar6[1];
        uStack_1f0 = puVar6[2];
        uStack_1ec = puVar6[3];
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_1f8);
      }
      local_98 = local_148;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
LAB_1404f4b82:
        local_1f8 = *(undefined4 *)puVar5;
        uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_1f0 = *(undefined4 *)(puVar5 + 1);
        uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1f8);
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
        if (puVar5 != &local_138) goto LAB_1404f4b82;
      }
      local_90 = &local_138;
      if (param_4 < 1) {
        local_res8 = &DAT_1419df7b0;
      }
      else {
        local_res8 = (undefined8 *)*param_5;
      }
      uVar7 = FUN_140e8da20(&local_58,param_1,0);
      uVar9 = FUN_140e634e0(param_1,param_2,&local_1c8,2,CONCAT44(uVar11,DAT_141a01138),&local_98);
      FUN_140e98ef0(param_1,param_2,uVar9,local_res8,uVar7);
      uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    local_198 = 0x89;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if (puVar6 != local_188) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_1f8);
    }
    local_b8 = local_188;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1404f4d1b:
      local_1f8 = *(undefined4 *)puVar5;
      uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1f8);
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
      if (puVar5 != &local_178) goto LAB_1404f4d1b;
    }
    local_b0 = &local_178;
    uVar7 = CONCAT44(uVar11,DAT_141a01138);
    puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1c8,2,uVar7,&local_b8);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != local_168) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_1f8);
    }
    local_a8 = local_168;
    if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_158)) {
      local_1f8 = *(undefined4 *)puVar4;
      uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_1f0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1f8);
    }
    local_a0 = &local_158;
    uVar7 = CONCAT44(uVar11,DAT_141a01138);
    puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar7,&local_a8);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar6 != local_148) {
      local_1f8 = *puVar6;
      uStack_1f4 = puVar6[1];
      uStack_1f0 = puVar6[2];
      uStack_1ec = puVar6[3];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_1f8);
    }
    local_98 = local_148;
    local_90 = &local_c8;
    ppuVar10 = &local_98;
    goto LAB_1404f4e85;
  }
  local_198 = 0x7b;
  if ((uVar3 & 0x46) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd38);
  if (puVar6 != local_188) {
    local_1f8 = *puVar6;
    uStack_1f4 = puVar6[1];
    uStack_1f0 = puVar6[2];
    uStack_1ec = puVar6[3];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
  }
  local_b8 = local_188;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1404f453b:
    local_1f8 = *(undefined4 *)puVar5;
    uStack_1f4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1f0 = *(undefined4 *)(puVar5 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_178) goto LAB_1404f453b;
  }
  local_b0 = &local_178;
  uVar9 = CONCAT44(uVar11,DAT_1419fcba8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_1e8,2,uVar9,&local_b8);
  uVar11 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar7);
  if (cVar1 == '\0') {
    local_198 = 0x7c;
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd38);
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    uVar7 = FUN_140e8da20(&local_48,param_1,0);
    FUN_140e98ef0(param_1,param_2,puVar6,puVar5,uVar7);
    uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  }
  local_198 = 0x7f;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if (puVar6 != local_188) {
    local_1f8 = *puVar6;
    uStack_1f4 = puVar6[1];
    uStack_1f0 = puVar6[2];
    uStack_1ec = puVar6[3];
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_188);
    }
    FUN_140041b80(local_188,&local_1f8);
  }
  local_b8 = local_188;
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_178)) {
    local_1f8 = *(undefined4 *)puVar4;
    uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1f8);
  }
  local_b0 = &local_178;
  uVar7 = CONCAT44(uVar11,DAT_141a01138);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar7,&local_b8);
  uVar11 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar6 != local_168) {
    local_1f8 = *puVar6;
    uStack_1f4 = puVar6[1];
    uStack_1f0 = puVar6[2];
    uStack_1ec = puVar6[3];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_1f8);
  }
  local_a8 = local_168;
  local_a0 = &local_c8;
  ppuVar10 = &local_a8;
LAB_1404f4e85:
  FUN_140e634e0(param_1,param_2,&local_1e8,2,CONCAT44(uVar11,DAT_1419fe568),ppuVar10);
  local_198 = 0x8c;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar7 = FUN_140e5c910();
  FUN_140e42c10(uVar7,param_1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_188,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}


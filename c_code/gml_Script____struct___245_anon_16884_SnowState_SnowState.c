// gml_Script____struct___245_anon_16884_SnowState_SnowState @ 0x140502fd0

undefined8 *
gml_Script____struct___245_anon_16884_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_138 [2];
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118 [2];
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8 [2];
  undefined8 local_e8 [2];
  undefined8 local_d8 [2];
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_150 = "gml_Script_anon@14897@SnowState@SnowState";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x1de;
  _eh_vector_constructor_iterator_(local_138,0x10,10,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 0x1df;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd038);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1405030e3:
    local_1c8 = *puVar4;
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != local_118) goto LAB_1405030e3;
  }
  local_78 = local_118;
  uVar3 = FUN_140e63610(param_1,param_2,&local_1b8,1,uVar3,&local_78);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_148 = 0x1df;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
    goto LAB_140504007;
  }
  local_148 = 0x1e2;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fce88);
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_1b8,0,uVar3,0);
  if (puVar4 != &local_98) {
    local_1c8 = *puVar4;
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_1c8);
  }
  local_148 = 0x1e3;
  local_1c8 = local_98;
  uStack_1c0 = uStack_90;
  uStack_1bc = uStack_8c;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_1c8);
  local_148 = 0x1e6;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd08);
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14050328c:
    local_1c8 = *puVar4;
    uStack_1c0 = *(undefined4 *)(puVar4 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1c8);
  }
  else {
    puVar4 = (undefined8 *)*param_5;
    if (puVar4 != local_138) goto LAB_14050328c;
  }
  local_88 = local_138;
  local_80 = &local_178;
  uVar6 = uVar3;
  uVar5 = FUN_140e63610(param_1,param_2,&local_1b8,2,uVar3,&local_88);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_1bc = 10;
  local_1c8 = 1;
  iVar2 = FUN_140e851f0(uVar5,&local_1c8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if (iVar2 == 0) {
    local_148 = 0x1e7;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fced8);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
    if (puVar4 != local_118) {
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1c8);
    }
    local_78 = local_118;
    local_70 = &local_178;
    uVar5 = CONCAT44(uVar7,DAT_141a01138);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar5,&local_78);
    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (puVar4 != local_f8) {
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1c8);
    }
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_1405034b1:
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      local_68 = local_f8;
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1c8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      local_68 = local_f8;
      if (puVar4 != local_e8) goto LAB_1405034b1;
    }
    local_60 = local_e8;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar7,DAT_141a01138),&local_68);
    if (puVar4 != local_d8) {
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_1c8);
    }
    local_58 = local_d8;
    local_50 = &local_98;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_14050357b:
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1c8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != local_b8) goto LAB_14050357b;
    }
    local_48 = local_b8;
    if (param_4 < 2) {
      puVar4 = &DAT_1419df7b0;
LAB_1405035cf:
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1c8);
    }
    else {
      puVar4 = (undefined8 *)param_5[1];
      if (puVar4 != local_a8) goto LAB_1405035cf;
    }
    local_40 = local_a8;
    uVar6 = FUN_140e63610(param_1,param_2,&local_1a8,4,uVar6,&local_58);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') goto LAB_140503646;
    local_148 = 0x1e7;
LAB_1405039ef:
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0x3ff0000000000000;
  }
  else {
LAB_140503646:
    local_148 = 0x1eb;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
LAB_140503693:
      local_1c8 = *puVar4;
      uStack_1c0 = *(undefined4 *)(puVar4 + 1);
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1c8);
    }
    else {
      puVar4 = (undefined8 *)*param_5;
      if (puVar4 != local_138) goto LAB_140503693;
    }
    local_88 = local_138;
    local_1c8 = CONCAT44(DAT_141dd39a8._4_4_,(undefined4)DAT_141dd39a8);
    uStack_1c0 = DAT_141dd39b0;
    uStack_1bc = DAT_141dd39b4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1c8);
    local_80 = &local_128;
    uVar6 = FUN_140e63610(param_1,param_2,&local_1b8,2,uVar3,&local_88);
    uStack_1bc = 10;
    local_1c8 = 1;
    iVar2 = FUN_140e851f0(uVar6,&local_1c8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (iVar2 == 0) {
      local_148 = 0x1ec;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd08);
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fced8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcd38);
      if (puVar4 != local_118) {
        local_1c8 = *puVar4;
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_1c8);
      }
      local_78 = local_118;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_14050385f:
        local_1c8 = *puVar4;
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_1c8);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        if (puVar4 != &local_108) goto LAB_14050385f;
      }
      local_70 = &local_108;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar7,DAT_141a01138),&local_78);
      if (puVar4 != local_f8) {
        local_1c8 = *puVar4;
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1c8);
      }
      local_60 = &local_98;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_140503929:
        local_1c8 = *puVar4;
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_68 = local_f8;
        if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_1c8);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        local_68 = local_f8;
        if (puVar4 != local_d8) goto LAB_140503929;
      }
      local_58 = local_d8;
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_14050397d:
        local_1c8 = *puVar4;
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_1c8);
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
        if (puVar4 != &local_c8) goto LAB_14050397d;
      }
      local_50 = &local_c8;
      uVar6 = FUN_140e63610(param_1,param_2,&local_1a8,4,uVar3,&local_68);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_148 = 0x1ec;
        goto LAB_1405039ef;
      }
    }
    local_148 = 0x1f0;
    do {
      do {
        uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
        if (puVar4 != local_138) {
          local_188 = *(undefined4 *)puVar4;
          uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_180 = *(undefined4 *)(puVar4 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_188);
        }
        local_88 = local_138;
        local_80 = &local_178;
        uVar6 = CONCAT44(uVar7,DAT_1419fcba8);
        uVar3 = FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar6,&local_88);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        cVar1 = FUN_140e491e0(uVar3);
        if (cVar1 == '\0') {
          local_148 = 0x1f7;
          uVar3 = 0;
          goto LAB_140503ff5;
        }
        local_148 = 0x1f1;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
        if (puVar4 != local_118) {
          local_188 = *(undefined4 *)puVar4;
          uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_180 = *(undefined4 *)(puVar4 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_118);
          }
          FUN_140041b80(local_118,&local_188);
        }
        local_78 = local_118;
        local_70 = &local_178;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar7,DAT_141a01138),&local_78)
        ;
        if (puVar4 != &local_178) {
          local_188 = *(undefined4 *)puVar4;
          uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_180 = *(undefined4 *)(puVar4 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_188);
        }
        local_148 = 0x1f2;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd08);
        if (param_4 < 1) {
          puVar4 = &DAT_1419df7b0;
LAB_140503c26:
          local_188 = *(undefined4 *)puVar4;
          uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_180 = *(undefined4 *)(puVar4 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_188);
        }
        else {
          puVar4 = (undefined8 *)*param_5;
          if (puVar4 != local_138) goto LAB_140503c26;
        }
        local_88 = local_138;
        local_80 = &local_178;
        uVar6 = FUN_140e63610(param_1,param_2,&local_1b8,2,uVar3,&local_88);
        uStack_1bc = 10;
        local_1c8 = 1;
        iVar2 = FUN_140e851f0(uVar6,&local_1c8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
      } while (iVar2 != 0);
      local_148 = 499;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fced8);
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcce8);
      if (puVar4 != local_118) {
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_188);
      }
      local_78 = local_118;
      local_70 = &local_178;
      uVar6 = CONCAT44(uVar7,DAT_141a01138);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,2,uVar6,&local_78);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (puVar4 != local_f8) {
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_188);
      }
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_140503e4c:
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        local_68 = local_f8;
        if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_188);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        local_68 = local_f8;
        if (puVar4 != local_e8) goto LAB_140503e4c;
      }
      local_60 = local_e8;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar7,DAT_141a01138),&local_68);
      if (puVar4 != local_d8) {
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_d8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_188);
      }
      local_58 = local_d8;
      local_50 = &local_98;
      if (param_4 < 1) {
        puVar4 = &DAT_1419df7b0;
LAB_140503f16:
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_188);
      }
      else {
        puVar4 = (undefined8 *)*param_5;
        if (puVar4 != local_b8) goto LAB_140503f16;
      }
      local_48 = local_b8;
      if (param_4 < 2) {
        puVar4 = &DAT_1419df7b0;
LAB_140503f6a:
        local_188 = *(undefined4 *)puVar4;
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_180 = *(undefined4 *)(puVar4 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_188);
      }
      else {
        puVar4 = (undefined8 *)param_5[1];
        if (puVar4 != local_a8) goto LAB_140503f6a;
      }
      local_40 = local_a8;
      uVar6 = FUN_140e63610(param_1,param_2,&local_1a8,4,uVar3,&local_58);
      cVar1 = FUN_140e491e0(uVar6);
    } while (cVar1 == '\0');
    local_148 = 499;
    uVar3 = 0x3ff0000000000000;
LAB_140503ff5:
    *param_3 = uVar3;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
LAB_140504007:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}


// gml_Script_anon_24948_SnowState_SnowState @ 0x14050a150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_24948_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_140 = "gml_Script_anon@22651@SnowState@SnowState";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x2d6;
  FUN_140041df0(local_38,param_4,3,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_15c = 0;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x2d6;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_30[2];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_138 = 0x2d6;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_38[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_30[2];
    }
    puVar3 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_168,0,CONCAT44(uVar11,DAT_1419fd6d8),0);
    if (puVar3 != puVar7) {
      local_178 = *(undefined4 *)puVar3;
      uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_170 = *(undefined4 *)(puVar3 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
  }
  local_138 = 0x2d7;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd78);
  if ((int)local_38[0] < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_14050a35a:
    local_178 = *(undefined4 *)puVar7;
    uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar7 = (undefined8 *)local_30[1];
    if (puVar7 != &local_128) goto LAB_14050a35a;
  }
  local_88 = &local_128;
  uVar5 = FUN_140e63610(param_1,param_2,&local_168,1,uVar4,&local_88);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_138 = 0x2d7;
    if (param_3 != &DAT_1419df7b0) {
      local_178 = (undefined4)DAT_1419df7b0;
      uStack_174 = DAT_1419df7b0._4_4_;
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    goto LAB_14050b20f;
  }
  local_138 = 0x2d8;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_38[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14050a458:
    local_178 = *(undefined4 *)puVar7;
    uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar7 = (undefined8 *)*local_30;
    if (puVar7 != &local_128) goto LAB_14050a458;
  }
  local_88 = &local_128;
  uVar4 = FUN_140e63610(param_1,param_2,&local_168,1,uVar4,&local_88);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_138 = 0x2d8;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd78);
    if (param_3 != &DAT_1419df7b0) {
      local_178 = (undefined4)DAT_1419df7b0;
      uStack_174 = DAT_1419df7b0._4_4_;
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_178);
    }
    goto LAB_14050b20f;
  }
  local_138 = 0x2da;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc88);
  if ((int)local_38[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14050a577:
    local_178 = *(undefined4 *)puVar7;
    uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar7 = (undefined8 *)*local_30;
    if (puVar7 != &local_128) goto LAB_14050a577;
  }
  local_88 = &local_128;
  uVar5 = uVar4;
  uVar6 = FUN_140e63610(param_1,param_2,&local_168,1,uVar4,&local_88);
  uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_138 = 0x2df;
    if ((int)local_38[0] < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_30[1];
    }
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_30;
    }
    iVar2 = FUN_140e851f0(puVar3,puVar7,DAT_141955260,0);
    if (iVar2 == 0) {
      local_138 = 0x2e0;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_178 = _DAT_141dd3bb8;
      uStack_174 = uRam0000000141dd3bbc;
      uStack_170 = uRam0000000141dd3bc0;
      uStack_16c = DAT_141dd3bc4;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
      local_88 = &local_128;
      FUN_140e63610(param_1,param_2,&local_168,1,uVar4,&local_88);
      local_138 = 0x2e1;
      if (param_3 != &DAT_1419df7b0) {
        local_178 = (undefined4)DAT_1419df7b0;
        uStack_174 = DAT_1419df7b0._4_4_;
        uStack_170 = DAT_1419df7b8;
        uStack_16c = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_178);
      }
      goto LAB_14050b20f;
    }
    local_138 = 0x2e4;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_38[0] < 3) {
      puVar7 = &DAT_1419df7b0;
LAB_14050a8d2:
      local_178 = *(undefined4 *)puVar7;
      uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar7 = (undefined8 *)local_30[2];
      if (puVar7 != &local_128) goto LAB_14050a8d2;
    }
    local_88 = &local_128;
    uVar5 = FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar11,DAT_1419fcb88),&local_88);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_138 = 0x2e5;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
      local_178 = _DAT_141dd3b48;
      uStack_174 = uRam0000000141dd3b4c;
      uStack_170 = uRam0000000141dd3b50;
      uStack_16c = DAT_141dd3b54;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_80 = &local_118;
      FUN_140e63610(param_1,param_2,&local_158,1,uVar4,&local_80);
      local_138 = 0x2e6;
      if (param_3 != &DAT_1419df7b0) {
        local_178 = (undefined4)DAT_1419df7b0;
        uStack_174 = DAT_1419df7b0._4_4_;
        uStack_170 = DAT_1419df7b8;
        uStack_16c = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_178);
      }
      goto LAB_14050b20f;
    }
    local_138 = 0x2ea;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((int)local_38[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_14050aa80:
      local_178 = *(undefined4 *)puVar7;
      uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar7 = (undefined8 *)local_30[1];
      if (puVar7 != &local_128) goto LAB_14050aa80;
    }
    local_88 = &local_128;
    uVar5 = FUN_140e63610(param_1,param_2,&local_168,1,uVar4,&local_88);
    uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_138 = 0x2eb;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419fcc88);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
      local_178 = _DAT_141dd3b78;
      uStack_174 = uRam0000000141dd3b7c;
      uStack_170 = uRam0000000141dd3b80;
      uStack_16c = DAT_141dd3b84;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
      local_80 = &local_118;
      if ((int)local_38[0] < 2) {
        puVar7 = &DAT_1419df7b0;
LAB_14050ab99:
        local_178 = *(undefined4 *)puVar7;
        uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_170 = *(undefined4 *)(puVar7 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_178);
      }
      else {
        puVar7 = (undefined8 *)local_30[1];
        if (puVar7 != &local_108) goto LAB_14050ab99;
      }
      local_78 = &local_108;
      local_178 = _DAT_141dd3c88;
      uStack_174 = uRam0000000141dd3c8c;
      uStack_170 = uRam0000000141dd3c90;
      uStack_16c = DAT_141dd3c94;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_178);
      local_70 = &local_f8;
      FUN_140e63610(param_1,param_2,&local_158,3,uVar4,&local_80);
      uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    local_138 = 0x2ee;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
    if (puVar7 != &local_128) {
      local_178 = *(undefined4 *)puVar7;
      uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    local_88 = &local_128;
    if ((int)local_38[0] < 2) {
      puVar3 = &DAT_1419df7b0;
LAB_14050acd6:
      local_178 = *(undefined4 *)puVar3;
      uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_170 = *(undefined4 *)(puVar3 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    else {
      puVar3 = (undefined8 *)local_30[1];
      if (puVar3 != &local_118) goto LAB_14050acd6;
    }
    local_80 = &local_118;
    uVar5 = CONCAT44(uVar11,DAT_1419fcba8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_168,2,uVar5,&local_88);
    uVar11 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_138 = 0x2ef;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
      if (puVar7 != &local_108) {
        local_178 = *(undefined4 *)puVar7;
        uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_170 = *(undefined4 *)(puVar7 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_178);
      }
      local_78 = &local_108;
      if ((int)local_38[0] < 2) {
        puVar3 = &DAT_1419df7b0;
LAB_14050adf2:
        local_178 = *(undefined4 *)puVar3;
        uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_170 = *(undefined4 *)(puVar3 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_178);
      }
      else {
        puVar3 = (undefined8 *)local_30[1];
        if (puVar3 != &local_f8) goto LAB_14050adf2;
      }
      local_70 = &local_f8;
      if ((int)local_38[0] < 1) {
        puVar3 = &DAT_1419df7b0;
      }
      else {
        puVar3 = (undefined8 *)*local_30;
      }
      uVar4 = FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar11,DAT_141a01138),&local_78);
      iVar2 = FUN_140e851f0(uVar4,puVar3,DAT_141955260,0);
      if (iVar2 == 0) {
        local_138 = 0x2f0;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_98);
        }
        local_98 = 0;
        local_90 = 0;
        local_8c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcd68);
        local_178 = _DAT_141dd3b78;
        uStack_174 = uRam0000000141dd3b7c;
        uStack_170 = uRam0000000141dd3b80;
        uStack_16c = DAT_141dd3b84;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_178);
        local_68 = local_e8;
        if ((int)local_38[0] < 2) {
          puVar3 = &DAT_1419df7b0;
LAB_14050af1b:
          local_178 = *(undefined4 *)puVar3;
          uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
          uStack_170 = *(undefined4 *)(puVar3 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          FUN_140041b80(&local_d8,&local_178);
        }
        else {
          puVar3 = (undefined8 *)local_30[1];
          if (puVar3 != &local_d8) goto LAB_14050af1b;
        }
        local_60 = &local_d8;
        local_178 = _DAT_141dd39c8;
        uStack_174 = uRam0000000141dd39cc;
        uStack_170 = uRam0000000141dd39d0;
        uStack_16c = DAT_141dd39d4;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_178);
        local_58 = local_c8;
        if ((int)local_38[0] < 1) {
          puVar3 = &DAT_1419df7b0;
LAB_14050afa5:
          local_178 = *(undefined4 *)puVar3;
          uStack_174 = *(undefined4 *)((longlong)puVar3 + 4);
          uStack_170 = *(undefined4 *)(puVar3 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          FUN_140041b80(&local_b8,&local_178);
        }
        else {
          puVar3 = (undefined8 *)*local_30;
          if (puVar3 != &local_b8) goto LAB_14050afa5;
        }
        local_50 = &local_b8;
        local_178 = _DAT_141dd3c18;
        uStack_174 = uRam0000000141dd3c1c;
        uStack_170 = uRam0000000141dd3c20;
        uStack_16c = DAT_141dd3c24;
        if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_178);
        local_48 = local_a8;
        FUN_140e63610(param_1,param_2,&local_98,5,uVar4,&local_68);
      }
    }
    local_138 = 0x2f5;
    if ((int)local_38[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_30;
    }
    if ((int)local_38[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_30[1];
    }
    FUN_140e98ef0(param_1,param_2,puVar7,puVar10,puVar3);
    local_138 = 0x2f6;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a555a0);
    if ((int)local_38[0] < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_14050b0ea:
      local_178 = *(undefined4 *)puVar7;
      uStack_174 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_170 = *(undefined4 *)(puVar7 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar7 = (undefined8 *)local_30[1];
      if (puVar7 != &local_128) goto LAB_14050b0ea;
    }
    local_88 = &local_128;
    if (((int)local_38[0] < 3) || (puVar8 = (undefined8 *)local_30[2], puVar8 != &local_118)) {
      local_178 = *(undefined4 *)puVar8;
      uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_170 = *(undefined4 *)(puVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    local_80 = &local_118;
    local_178 = _DAT_1419df7c0;
    uStack_174 = uRam00000001419df7c4;
    uStack_170 = uRam00000001419df7c8;
    uStack_16c = uRam00000001419df7cc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_78 = &local_108;
    FUN_140e63610(param_1,param_2,&local_168,3,uVar4,&local_88);
    local_138 = 0x2f8;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 6;
    *param_3 = param_1;
    uVar4 = FUN_140e5c910();
    FUN_140e42c10(uVar4,param_1);
    goto LAB_14050b20f;
  }
  local_138 = 0x2db;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf88);
  local_178 = _DAT_141dd3b78;
  uStack_174 = uRam0000000141dd3b7c;
  uStack_170 = uRam0000000141dd3b80;
  uStack_16c = DAT_141dd3b84;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_178);
  local_80 = &local_118;
  if ((int)local_38[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_14050a67f:
    local_178 = *(undefined4 *)puVar8;
    uStack_174 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_170 = *(undefined4 *)(puVar8 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
  }
  else {
    puVar8 = (undefined8 *)*local_30;
    if (puVar8 != &local_108) goto LAB_14050a67f;
  }
  local_78 = &local_108;
  local_178 = _DAT_141dd3c28;
  uStack_174 = uRam0000000141dd3c2c;
  uStack_170 = uRam0000000141dd3c30;
  uStack_16c = DAT_141dd3c34;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_178);
  local_70 = &local_f8;
  FUN_140e63610(param_1,param_2,&local_158,3,uVar4,&local_80);
  local_138 = 0x2dc;
  if (param_3 != &DAT_1419df7b0) {
    local_178 = (undefined4)DAT_1419df7b0;
    uStack_174 = DAT_1419df7b0._4_4_;
    uStack_170 = DAT_1419df7b8;
    uStack_16c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
LAB_14050b20f:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,9,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar8 = local_30;
    do {
      puVar7 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}


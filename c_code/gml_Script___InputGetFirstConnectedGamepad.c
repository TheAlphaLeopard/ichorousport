// gml_Script___InputGetFirstConnectedGamepad @ 0x140097660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputGetFirstConnectedGamepad
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined4 uVar14;
  ulonglong in_stack_fffffffffffffdc0;
  undefined8 **ppuVar15;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  
  local_210 = "gml_Script___InputGamepadTransformSteam";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0xc;
  pcVar11 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_1d8,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_22c = 0;
  local_238 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc670) &&
     (_Init_thread_header(&DAT_141ddc670), DAT_141ddc670 == -1)) {
    DAT_141ddc668 = (longlong *)FUN_140e63aa0(DAT_141a01458);
    _Init_thread_footer(&DAT_141ddc670);
  }
  if (DAT_141ddc042 == '\0') {
    FUN_140e64380(DAT_141ddc668,"gml_Script___InputGamepadTransformSteam");
    FUN_140e64380(local_res8,"gml_Script___InputGamepadTransformSteam");
  }
  local_208 = 0xe;
  if (DAT_141ddc042 == '\0') {
    DAT_141ddc042 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddc668 + 0x10))(DAT_141ddc668,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc668);
    puVar5 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_238,0,0);
    if (puVar5 != puVar4) {
      local_1f8 = *puVar5;
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1f8);
    }
    FUN_140e60910(1);
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddc668 + 0x10))(DAT_141ddc668,DAT_141a01488);
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar12 = 0;
    uVar6 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (local_res8,local_res10,&local_1e8,0,0);
    in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
    pcVar11 = (code *)(uVar12 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a01418,0x80000000,&local_e8,pcVar11,in_stack_fffffffffffffdc0);
    FUN_140e609c0(DAT_141ddc668);
    if (&local_e8 != puVar4) {
      local_1f8 = local_e8;
      uStack_1f0 = uStack_e0;
      uStack_1ec = uStack_dc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_1f8);
    }
    FUN_140e60910(1);
  }
  local_208 = 0x12;
  uVar6 = (**(code **)(*DAT_141ddc668 + 8))(DAT_141ddc668,DAT_1419fcb48);
  ppuVar15 = (undefined8 **)(in_stack_fffffffffffffdc0 & 0xffffffffffffff00);
  ppuVar13 = (undefined8 **)((ulonglong)pcVar11 & 0xffffffffffffff00);
  FUN_140e87440(uVar6,DAT_141a01448,0x80000000,&local_f8,ppuVar13,ppuVar15);
  cVar1 = FUN_140e491e0(&local_f8);
  if (cVar1 != '\0') {
    local_208 = 0x14;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,param_5);
    if (0 < iVar2) {
      do {
        uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
        (**(code **)(*DAT_141ddc668 + 8))(DAT_141ddc668,DAT_1419fcb48);
        local_208 = 0x16;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd208);
        cVar1 = FUN_140e491e0(uVar7);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_10c = 0xd;
        if (cVar1 == '\0') {
          local_118 = 0;
        }
        else {
          local_118 = 0x3ff0000000000000;
        }
        local_208 = 0x17;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd1f8);
        if (puVar4 != &local_128) {
          local_228 = *(undefined4 *)puVar4;
          uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_220 = *(undefined4 *)(puVar4 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          FUN_140041b80(&local_128,&local_228);
        }
        local_208 = 0x3b;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd378);
        local_168 = &local_128;
        FUN_140e609c0(local_res8);
        uVar7 = CONCAT44(uVar14,DAT_1419febf8);
        puVar9 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar7,&local_168);
        uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
        if (puVar9 != puVar8) {
          local_228 = *puVar9;
          uStack_224 = puVar9[1];
          uStack_220 = puVar9[2];
          uStack_21c = puVar9[3];
          if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_228);
        }
        FUN_140e60910(1);
        local_208 = 0x3d;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd378);
        if (puVar4 != &local_1d8) {
          local_228 = *(undefined4 *)puVar4;
          uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_220 = *(undefined4 *)(puVar4 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
        }
        local_168 = &local_1d8;
        ppuVar15 = &local_168;
        puVar4 = (undefined8 *)
                 FUN_140e634e0(local_res8,local_res10,&local_238,1,CONCAT44(uVar14,DAT_1419febf8),
                               &local_168);
        if (puVar4 != &local_108) {
          local_228 = *(undefined4 *)puVar4;
          uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_220 = *(undefined4 *)(puVar4 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_228);
        }
        local_208 = 0x3e;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd1f8);
        local_228 = _DAT_141dca738;
        uStack_224 = uRam0000000141dca73c;
        uStack_220 = uRam0000000141dca740;
        uStack_21c = DAT_141dca744;
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_228);
        local_168 = &local_1d8;
        if (puVar4 != &local_1c8) {
          local_228 = *(undefined4 *)puVar4;
          uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
          uStack_220 = *(undefined4 *)(puVar4 + 1);
          uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_228);
        }
        local_160 = &local_1c8;
        local_228 = _DAT_141dca7a8;
        uStack_224 = uRam0000000141dca7ac;
        uStack_220 = uRam0000000141dca7b0;
        uStack_21c = DAT_141dca7b4;
        if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_228);
        local_158 = &local_1b8;
        local_150 = &local_128;
        local_228 = _DAT_141dca7d8;
        uStack_224 = uRam0000000141dca7dc;
        uStack_220 = uRam0000000141dca7e0;
        uStack_21c = DAT_141dca7e4;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_228);
        local_148 = local_198;
        local_140 = &local_108;
        ppuVar13 = &local_168;
        gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                  (local_res8,local_res10,&local_238,6,&local_168);
        local_208 = 0x42;
        cVar1 = FUN_140e491e0(&local_118);
        if (cVar1 == '\0') {
LAB_140098569:
          local_208 = 0x44;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd378);
          FUN_140e609c0(local_res8);
          if (puVar4 != &DAT_1419df7b0) {
            local_228 = (undefined4)DAT_1419df7b0;
            uStack_224 = DAT_1419df7b0._4_4_;
            uStack_220 = DAT_1419df7b8;
            uStack_21c = DAT_1419df7bc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            FUN_140041b80(puVar4,&local_228);
          }
          FUN_140e60910(1);
          local_208 = 0x45;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd1e8);
          FUN_140e609c0(local_res8);
          if (puVar4 != &DAT_1419df7b0) {
            local_228 = (undefined4)DAT_1419df7b0;
            uStack_224 = DAT_1419df7b0._4_4_;
            uStack_220 = DAT_1419df7b8;
            uStack_21c = DAT_1419df7bc;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            FUN_140041b80(puVar4,&local_228);
          }
          FUN_140e60910(1);
          local_208 = 0x46;
        }
        else {
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd378);
          if (puVar4 != &local_1d8) {
            local_228 = *(undefined4 *)puVar4;
            uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
            uStack_220 = *(undefined4 *)(puVar4 + 1);
            uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_228);
          }
          local_168 = &local_1d8;
          ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_141a014a8);
          ppuVar15 = &local_168;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_238,1,ppuVar13,&local_168);
          cVar1 = FUN_140e491e0(uVar7);
          if (cVar1 == '\0') goto LAB_140098569;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd378);
          local_12c = 0;
          local_138 = 0;
          iVar2 = FUN_140e851f0(uVar7,&local_138,DAT_141955260,1);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if (iVar2 < 1) goto LAB_140098569;
          local_208 = 0x4a;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd378);
          puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd1e8);
          if (puVar4 != &local_1d8) {
            local_228 = *(undefined4 *)puVar4;
            uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
            uStack_220 = *(undefined4 *)(puVar4 + 1);
            uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_228);
          }
          local_168 = &local_1d8;
          FUN_140e609c0(local_res8);
          uVar7 = CONCAT44(uVar14,DAT_1419febf8);
          puVar9 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar7,&local_168)
          ;
          uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (puVar9 != puVar8) {
            local_228 = *puVar9;
            uStack_224 = puVar9[1];
            uStack_220 = puVar9[2];
            uStack_21c = puVar9[3];
            if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            FUN_140041b80(puVar8,&local_228);
          }
          FUN_140e60910(1);
          local_208 = 0x53;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd1e8);
          local_ac = 0;
          local_b8 = &DAT_bff0000000000000;
          iVar2 = FUN_140e851f0(uVar7,&local_b8,DAT_141955260,0);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          if (iVar2 == 0) {
            local_208 = 0x56;
            goto LAB_140098b7f;
          }
          local_208 = 0x59;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd378);
          if (puVar4 != &local_1d8) {
            local_228 = *(undefined4 *)puVar4;
            uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
            uStack_220 = *(undefined4 *)(puVar4 + 1);
            uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_228);
          }
          local_168 = &local_1d8;
          uVar7 = CONCAT44(uVar14,DAT_1419febf8);
          puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar7,&local_168)
          ;
          uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
          if (puVar4 != &local_178) {
            local_228 = *(undefined4 *)puVar4;
            uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
            uStack_220 = *(undefined4 *)(puVar4 + 1);
            uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_228);
          }
          local_208 = 0x5a;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          local_168 = &local_178;
          uVar12 = CONCAT44(uVar14,DAT_141a014a8);
          ppuVar13 = &local_168;
          uVar7 = FUN_140e634e0(local_res8,local_res10,&local_238,1,uVar12,&local_168);
          cVar1 = FUN_140e491e0(uVar7);
          if (cVar1 == '\0') {
LAB_140098a3a:
            local_208 = 0x5c;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            local_1e8 = 0;
            local_1e0 = 0;
            local_1dc = 5;
            local_228 = _DAT_141dca7e8;
            uStack_224 = uRam0000000141dca7ec;
            uStack_220 = uRam0000000141dca7f0;
            uStack_21c = DAT_141dca7f4;
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_228);
            local_160 = &local_1c8;
            local_158 = &local_178;
            local_228 = _DAT_141dca728;
            uStack_224 = uRam0000000141dca72c;
            uStack_220 = uRam0000000141dca730;
            uStack_21c = DAT_141dca734;
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_228);
            local_150 = &local_1a8;
            gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                      (local_res8,local_res10,&local_1e8,3,&local_160);
            local_208 = 0x5d;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
            uStack_1ec = 0xd;
            local_1f8 = 0x3ff0000000000000;
            if (&local_1f8 != puVar4) {
              local_228 = 0;
              uStack_224 = 0x3ff00000;
              uStack_220 = uStack_1f0;
              uStack_21c = 0xd;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar4);
              }
              FUN_140041b80(puVar4,&local_228);
            }
            local_208 = 0x5e;
LAB_140098b7f:
            if (local_78 != 0) {
              FUN_140e4cd60();
            }
            goto LAB_140098e7b;
          }
          uStack_1ec = 0;
          local_1f8 = 0;
          uVar3 = FUN_140e851f0(&local_178,&local_1f8,DAT_141955260,1);
          if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          if (0x7fffffff < uVar3) goto LAB_140098a3a;
          local_208 = 0x61;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uVar7 = (**(code **)(*DAT_141ddc668 + 8))(DAT_141ddc668,DAT_1419fcb48);
          puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd238);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(uVar7,DAT_141a01498,0x80000000,&local_c8,uVar12,
                        (ulonglong)ppuVar13 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar12 >> 0x20);
          local_228 = (undefined4)local_c8;
          uStack_224 = local_c8._4_4_;
          uStack_220 = uStack_c0;
          uStack_21c = uStack_bc;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
          local_168 = &local_1d8;
          local_160 = &local_178;
          FUN_140e609c0(local_res8);
          uVar12 = CONCAT44(uVar14,DAT_1419ff4f8);
          ppuVar13 = &local_168;
          puVar9 = (undefined4 *)
                   FUN_140e634e0(local_res8,local_res10,&local_238,2,uVar12,&local_168);
          if (puVar9 != puVar8) {
            local_228 = *puVar9;
            uStack_224 = puVar9[1];
            uStack_220 = puVar9[2];
            uStack_21c = puVar9[3];
            if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            FUN_140041b80(puVar8,&local_228);
          }
          FUN_140e60910(1);
          local_208 = 0x62;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd238);
          iVar2 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
          if (iVar2 == 0) {
            local_208 = 100;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            local_228 = _DAT_141dca7e8;
            uStack_224 = uRam0000000141dca7ec;
            uStack_220 = uRam0000000141dca7f0;
            uStack_21c = DAT_141dca7f4;
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_228);
            local_168 = &local_1d8;
            local_160 = &local_178;
            local_228 = _DAT_141dca788;
            uStack_224 = uRam0000000141dca78c;
            uStack_220 = uRam0000000141dca790;
            uStack_21c = DAT_141dca794;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_228);
            local_158 = &local_1b8;
            gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                      (local_res8,local_res10,&local_238,3,&local_168);
            local_208 = 0x65;
            puVar10 = (undefined *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd238);
            if (puVar10 != &DAT_141dca7c8) {
              local_228 = _DAT_141dca7c8;
              uStack_224 = uRam0000000141dca7cc;
              uStack_220 = uRam0000000141dca7d0;
              uStack_21c = DAT_141dca7d4;
              if ((1 << ((byte)*(undefined4 *)(puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar10);
              }
              FUN_140041b80(puVar10,&local_228);
            }
            local_208 = 0x66;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
            uStack_1ec = 0xd;
            local_1f8 = 0x3ff0000000000000;
            if (&local_1f8 != puVar4) {
              local_228 = 0;
              uStack_224 = 0x3ff00000;
              uStack_220 = uStack_1f0;
              uStack_21c = 0xd;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar4);
              }
              FUN_140041b80(puVar4,&local_228);
            }
            local_208 = 0x67;
            goto LAB_140098b7f;
          }
          local_208 = 0x6a;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          uVar7 = (**(code **)(*DAT_141ddc668 + 8))(DAT_141ddc668,DAT_1419fcb48);
          puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd248);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(uVar7,DAT_141a014b8,0x80000000,&local_d8,uVar12,
                        (ulonglong)ppuVar13 & 0xffffffffffffff00);
          uVar14 = (undefined4)(uVar12 >> 0x20);
          local_228 = (undefined4)local_d8;
          uStack_224 = local_d8._4_4_;
          uStack_220 = uStack_d0;
          uStack_21c = uStack_cc;
          if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_228);
          local_168 = &local_1d8;
          local_160 = &local_178;
          FUN_140e609c0(local_res8);
          ppuVar13 = (undefined8 **)CONCAT44(uVar14,DAT_1419ff4f8);
          ppuVar15 = &local_168;
          puVar9 = (undefined4 *)
                   FUN_140e634e0(local_res8,local_res10,&local_238,2,ppuVar13,&local_168);
          if (puVar9 != puVar8) {
            local_228 = *puVar9;
            uStack_224 = puVar9[1];
            uStack_220 = puVar9[2];
            uStack_21c = puVar9[3];
            if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            FUN_140041b80(puVar8,&local_228);
          }
          FUN_140e60910(1);
          local_208 = 0x6b;
          uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
          iVar2 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
          if (iVar2 == 0) {
            local_208 = 0x6d;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            local_228 = _DAT_141dca778;
            uStack_224 = uRam0000000141dca77c;
            uStack_220 = uRam0000000141dca780;
            uStack_21c = DAT_141dca784;
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_228);
            local_168 = &local_1d8;
            local_160 = &local_178;
            local_228 = _DAT_141dca718;
            uStack_224 = uRam0000000141dca71c;
            uStack_220 = uRam0000000141dca720;
            uStack_21c = DAT_141dca724;
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_228);
            local_158 = &local_1b8;
            gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                      (local_res8,local_res10,&local_238,3,&local_168);
            local_208 = 0x6e;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd248);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
            *puVar4 = 0x3ff0000000000000;
            local_208 = 0x6f;
            puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
            uStack_1ec = 0xd;
            local_1f8 = 0x3ff0000000000000;
            if (&local_1f8 != puVar4) {
              local_228 = 0;
              uStack_224 = 0x3ff00000;
              uStack_220 = uStack_1f0;
              uStack_21c = 0xd;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar4);
              }
              FUN_140041b80(puVar4,&local_228);
            }
            local_208 = 0x70;
            goto LAB_140098b7f;
          }
          local_208 = 0x73;
        }
        cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_88,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
    FUN_140e87440(uVar6,DAT_141a01448,0x80000000,&local_f8,ppuVar13,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_78 != 0) {
      FUN_140e4cd60();
    }
  }
  uVar14 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
  local_208 = 0x7a;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd288);
  local_12c = DAT_141dca7c4;
  local_130 = DAT_141dca7c0;
  if ((1 << ((byte)DAT_141dca7c4 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141dca7b8;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dca7b8);
  }
  iVar2 = FUN_140e851f0(uVar6,&local_138,DAT_141955260,0);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_238 = 0;
    local_230 = 0;
    local_22c = 5;
    puVar4 = (undefined8 *)(**(code **)(*DAT_141ddc668 + 8))(DAT_141ddc668,DAT_141a01488);
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
    if (puVar4 != &local_1d8) {
      local_228 = *(undefined4 *)puVar4;
      uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_220 = *(undefined4 *)(puVar4 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_228);
    }
    local_168 = &local_1d8;
    if (puVar5 != &local_1c8) {
      local_228 = *(undefined4 *)puVar5;
      uStack_224 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_220 = *(undefined4 *)(puVar5 + 1);
      uStack_21c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_228);
    }
    local_160 = &local_1c8;
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_238,2,CONCAT44(uVar14,DAT_141a01478),
                          &local_168);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 != '\0') {
      local_208 = 0x7c;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd248);
      local_228 = _DAT_141dca758;
      uStack_224 = uRam0000000141dca75c;
      uStack_220 = uRam0000000141dca760;
      uStack_21c = DAT_141dca764;
      if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
      local_158 = &local_1b8;
      if (puVar4 != &local_1a8) {
        local_228 = *(undefined4 *)puVar4;
        uStack_224 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_220 = *(undefined4 *)(puVar4 + 1);
        uStack_21c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_228);
      }
      local_150 = &local_1a8;
      local_228 = _DAT_141dca798;
      uStack_224 = uRam0000000141dca79c;
      uStack_220 = uRam0000000141dca7a0;
      uStack_21c = DAT_141dca7a4;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_228);
      local_148 = local_198;
      gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
                (local_res8,local_res10,&local_1e8,3,&local_158);
      local_208 = 0x7d;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd318);
      uStack_1ec = 0xd;
      local_1f8 = 0x3ff0000000000000;
      if (&local_1f8 != puVar4) {
        local_228 = 0;
        uStack_224 = 0x3ff00000;
        uStack_220 = uStack_1f0;
        uStack_21c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        FUN_140041b80(puVar4,&local_228);
      }
      local_208 = 0x7e;
    }
  }
LAB_140098e7b:
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_1d8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}


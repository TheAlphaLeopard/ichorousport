// gml_Object_oEntity_Draw_64 @ 0x140ac7690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oEntity_Draw_64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffd70;
  ulonglong uVar12;
  undefined4 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238 [3];
  byte local_22c;
  undefined1 local_228 [16];
  undefined8 local_218;
  byte local_20c;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 *local_1a8;
  undefined1 *local_1a0;
  undefined8 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
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
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_1f0 = "gml_Object_oEntity_Step_0";
  local_1e8 = 0;
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_238,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0xffffff;
  local_108 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = (undefined1 *)0x0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = (undefined1 *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_1e8 = 3;
  uStack_26c = 6;
  local_278 = local_res8;
  in_stack_fffffffffffffd70 = in_stack_fffffffffffffd70 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_278,DAT_141a0a7e8,8,&local_108,uVar12,in_stack_fffffffffffffd70);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  uStack_26c = 0;
  local_278 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_108,&local_278,DAT_141955260,0);
  if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if (iVar2 == 0) {
    local_1e8 = 4;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_148,uVar12 & 0xffffffffffffff00,
                  in_stack_fffffffffffffd70 & 0xffffffffffffff00);
    uStack_26c = DAT_141dd9214;
    uStack_270 = DAT_141dd9210;
    if ((1 << ((byte)DAT_141dd9214 & 0x1f) & 0x46U) == 0) {
      local_278 = (longlong *)CONCAT44(DAT_141dd9208._4_4_,(undefined4)DAT_141dd9208);
    }
    else {
      FUN_1400419b0(&local_278,&DAT_141dd9208);
    }
    uVar4 = FUN_140069500(uVar4);
    puVar5 = &local_148;
    uVar4 = FUN_140e63610(uVar4,local_res10,&local_288,0,puVar5,0);
    uVar11 = (undefined4)((ulonglong)puVar5 >> 0x20);
    iVar2 = FUN_140e851f0(uVar4,&local_278,DAT_141955260,0);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (iVar2 != 0) {
      local_1e8 = 4;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2758);
      FUN_140e63610(local_res8,local_res10,&local_258,0,uVar4,0);
      uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    local_1e8 = 6;
    puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff2d8);
    uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57420);
    uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_1b0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1b8 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_1b8,puVar5);
    }
    local_res18 = 4;
    FUN_140042560(&local_1b8,uVar3);
    FUN_1400460e0(uVar4,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1e8 = 7;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06e08);
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a06e08);
    if (puVar6 != local_238) {
      local_268 = *puVar6;
      uStack_264 = puVar6[1];
      uStack_260 = puVar6[2];
      uStack_25c = puVar6[3];
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_268);
    }
    local_1a8 = local_238;
    local_268 = _DAT_141dc7010;
    uStack_264 = uRam0000000141dc7014;
    uStack_260 = uRam0000000141dc7018;
    uStack_25c = uRam0000000141dc701c;
    if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_268);
    local_1a0 = local_228;
    local_268 = _DAT_1419eb3f0;
    uStack_264 = uRam00000001419eb3f4;
    uStack_260 = uRam00000001419eb3f8;
    uStack_25c = uRam00000001419eb3fc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
    local_198 = &local_218;
    FUN_140e609c0(local_res8);
    uVar3 = CONCAT44(uVar11,DAT_141a00c58);
    puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_288,3,uVar3,&local_1a8);
    uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar6 != puVar7) {
      local_268 = *puVar6;
      uStack_264 = puVar6[1];
      uStack_260 = puVar6[2];
      uStack_25c = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_268);
    }
    FUN_140e60910(1);
    local_1e8 = 8;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07598);
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a07598);
    if (puVar6 != local_238) {
      local_268 = *puVar6;
      uStack_264 = puVar6[1];
      uStack_260 = puVar6[2];
      uStack_25c = puVar6[3];
      if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_268);
    }
    local_1a8 = local_238;
    local_268 = _DAT_141dc7010;
    uStack_264 = uRam0000000141dc7014;
    uStack_260 = uRam0000000141dc7018;
    uStack_25c = uRam0000000141dc701c;
    if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_228);
    }
    FUN_140041b80(local_228,&local_268);
    local_1a0 = local_228;
    local_268 = _DAT_1419eb3f0;
    uStack_264 = uRam00000001419eb3f4;
    uStack_260 = uRam00000001419eb3f8;
    uStack_25c = uRam00000001419eb3fc;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_268);
    local_198 = &local_218;
    FUN_140e609c0(local_res8);
    ppuVar13 = &local_1a8;
    puVar5 = (undefined8 *)CONCAT44(uVar11,DAT_141a00c58);
    puVar6 = (undefined4 *)FUN_140e634e0(local_res8,local_res10,&local_288,3,puVar5,ppuVar13);
    if (puVar6 != puVar7) {
      local_268 = *puVar6;
      uStack_264 = puVar6[1];
      uStack_260 = puVar6[2];
      uStack_25c = puVar6[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_268);
    }
    FUN_140e60910(1);
    local_1e8 = 10;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
    uStack_26c = 0;
    local_278 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar3,&local_278,DAT_141955260,1);
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (iVar2 != -2 && iVar2 < 1) {
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_288 = 0;
      local_280 = 0;
      local_27c = 5;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_1419f5df8,0x80000000,&local_148,(ulonglong)puVar5 & 0xffffffffffffff00
                    ,(ulonglong)ppuVar13 & 0xffffffffffffff00);
      uStack_26c = DAT_141dd9214;
      uStack_270 = DAT_141dd9210;
      if ((1 << ((byte)DAT_141dd9214 & 0x1f) & 0x46U) == 0) {
        local_278 = (longlong *)CONCAT44(DAT_141dd9208._4_4_,(undefined4)DAT_141dd9208);
      }
      else {
        FUN_1400419b0(&local_278,&DAT_141dd9208);
      }
      uVar3 = FUN_140069500(uVar3);
      uVar12 = 0;
      puVar5 = &local_148;
      uVar3 = FUN_140e63610(uVar3,local_res10,&local_288,0,puVar5,0);
      iVar2 = FUN_140e851f0(uVar3,&local_278,DAT_141955260,0);
      if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      if (iVar2 != 0) {
        local_1e8 = 0xc;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
        FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_118,
                      (ulonglong)puVar5 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
        local_268 = (undefined4)DAT_141dd9208;
        uStack_264 = DAT_141dd9208._4_4_;
        uStack_260 = DAT_141dd9210;
        uStack_25c = DAT_141dd9214;
        if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_268);
        local_1a8 = local_238;
        uVar3 = FUN_140069500(uVar3);
        FUN_140e63610(uVar3,local_res10,&local_258,1,&local_118,&local_1a8);
        local_1e8 = 0xd;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        local_288 = 0;
        local_280 = 0;
        local_27c = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a11d08);
        FUN_140e63610(local_res8,local_res10,&local_288,0,uVar3,0);
        uVar11 = (undefined4)((ulonglong)uVar3 >> 0x20);
        local_1e8 = 0xf;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a06628);
        uStack_26c = 0;
        local_278 = (longlong *)0x3ff0000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_278,DAT_141955260,1);
        if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        if (0 < iVar2) {
          local_1e8 = 0x11;
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          local_288 = 0;
          local_280 = 0;
          local_27c = 5;
          puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
          if (puVar6 != local_238) {
            local_268 = *puVar6;
            uStack_264 = puVar6[1];
            uStack_260 = puVar6[2];
            uStack_25c = puVar6[3];
            if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_268);
          }
          local_1a8 = local_238;
          ppuVar13 = &local_1a8;
          uVar12 = CONCAT44(uVar11,DAT_1419fcb88);
          uVar3 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar12,ppuVar13);
          cVar1 = FUN_140e491e0(uVar3);
          if (cVar1 == '\0') {
            uStack_17c = 0;
            local_188 = 0;
            puVar5 = &local_188;
            uVar8 = 2;
          }
          else {
            uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
            ppuVar13 = (undefined4 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
            uVar12 = uVar12 & 0xffffffffffffff00;
            FUN_140e87440(uVar3,DAT_141a572c0,0x80000000,&local_168,uVar12,ppuVar13);
            uStack_26c = local_15c;
            uStack_270 = local_160;
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
              local_278 = (longlong *)local_168;
            }
            else {
              FUN_1400419b0(&local_278,&local_168);
            }
            puVar5 = &local_278;
            uVar8 = 9;
          }
          uVar11 = uStack_17c;
          local_268 = *(undefined4 *)puVar5;
          uStack_264 = *(undefined4 *)((longlong)puVar5 + 4);
          uStack_260 = *(undefined4 *)(puVar5 + 1);
          uStack_25c = *(undefined4 *)((longlong)puVar5 + 0xc);
          local_res18 = uVar8;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_268);
          if (((uVar8 & 2) != 0) &&
             (uVar8 = uVar8 & 0xfffffffd, local_res18 = uVar8,
             (1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_188);
          }
          if (((uVar8 & 1) != 0) &&
             (uVar8 = uVar8 & 0xfffffffe, local_res18 = uVar8,
             (1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_278);
          }
          local_1e8 = 0x13;
          uStack_26c = 0xf;
          local_278 = (longlong *)0x100000000000014;
          iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_278);
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          if (0 < iVar2) {
            do {
              local_1e8 = 0x15;
              uVar10 = uVar12;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
                uVar10 = uVar12;
              }
              local_288 = 0;
              local_280 = 0;
              local_27c = 5;
              uVar12 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a02db8);
              local_ec = 6;
              local_f8 = local_res10;
              uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_1c8,uVar10,uVar14);
              if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_f8);
              }
              local_dc = 6;
              local_e8 = local_res10;
              FUN_140e87440(&local_e8,DAT_1419fe158,0x80000000,&local_1d8,
                            uVar10 & 0xffffffffffffff00,uVar14 & 0xffffffffffffff00);
              if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e8);
              }
              local_248 = (undefined4)local_1c8;
              uStack_244 = local_1c8._4_4_;
              uStack_240 = uStack_1c0;
              uStack_23c = uStack_1bc;
              if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_248);
              local_1a8 = local_238;
              local_248 = (undefined4)local_1d8;
              uStack_244 = local_1d8._4_4_;
              uStack_240 = uStack_1d0;
              uStack_23c = uStack_1cc;
              if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_248);
              local_1a0 = local_228;
              local_198 = &local_178;
              local_248 = _DAT_141dc7010;
              uStack_244 = uRam0000000141dc7014;
              uStack_240 = uRam0000000141dc7018;
              uStack_23c = uRam0000000141dc701c;
              if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_248);
              local_190 = local_208;
              ppuVar13 = &local_1a8;
              uVar10 = uVar12;
              FUN_140e63610(local_res8,local_res10,&local_288,4,uVar12,ppuVar13);
              local_1e8 = 0x16;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_288 = 0;
              local_280 = 0;
              local_27c = 5;
              local_cc = 6;
              local_d8 = local_res10;
              uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_d8,DAT_1419fe0e8,0x80000000,&local_1c8,uVar10,uVar14);
              if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              local_bc = 6;
              local_c8 = local_res10;
              FUN_140e87440(&local_c8,DAT_1419fe158,0x80000000,&local_1d8,
                            uVar10 & 0xffffffffffffff00,uVar14 & 0xffffffffffffff00);
              if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_c8);
              }
              uStack_1ac = uStack_1bc;
              uStack_1b0 = uStack_1c0;
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
                local_1b8 = local_1c8;
              }
              else {
                FUN_1400419b0(&local_1b8,&local_1c8);
              }
              local_res18 = uVar8 | 0x10;
              local_ac = 7;
              local_b8[0] = 8;
              FUN_1400462a0(&local_1b8,local_b8);
              if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_b8);
              }
              local_248 = (undefined4)local_1b8;
              uStack_244 = local_1b8._4_4_;
              uStack_240 = uStack_1b0;
              uStack_23c = uStack_1ac;
              if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_248);
              local_res18 = uVar8;
              if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1a8 = local_238;
              uStack_14c = uStack_1cc;
              uStack_150 = uStack_1d0;
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
                local_158 = local_1d8;
              }
              else {
                FUN_1400419b0(&local_158,&local_1d8);
              }
              local_res18 = uVar8 | 0x20;
              local_9c = 7;
              local_a8[0] = 8;
              FUN_1400460e0(&local_158,local_a8);
              if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_a8);
              }
              local_248 = (undefined4)local_158;
              uStack_244 = local_158._4_4_;
              uStack_240 = uStack_150;
              uStack_23c = uStack_14c;
              if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_248);
              local_res18 = uVar8;
              if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_158);
              }
              local_1a0 = local_228;
              local_198 = &local_178;
              local_248 = _DAT_141dc7010;
              uStack_244 = uRam0000000141dc7014;
              uStack_240 = uRam0000000141dc7018;
              uStack_23c = uRam0000000141dc701c;
              if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_248);
              local_190 = local_208;
              ppuVar13 = &local_1a8;
              uVar10 = uVar12;
              FUN_140e63610(local_res8,local_res10,&local_288,4,uVar12,ppuVar13);
              local_1e8 = 0x17;
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_288 = 0;
              local_280 = 0;
              local_27c = 5;
              local_8c = 6;
              local_98 = local_res10;
              uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
              uVar10 = uVar10 & 0xffffffffffffff00;
              FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_1c8,uVar10,uVar14);
              if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_98);
              }
              local_7c = 6;
              local_88 = local_res10;
              FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_1d8,
                            uVar10 & 0xffffffffffffff00,uVar14 & 0xffffffffffffff00);
              if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_88);
              }
              uStack_17c = uStack_1bc;
              uStack_180 = uStack_1c0;
              if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
                local_188 = local_1c8;
              }
              else {
                FUN_1400419b0(&local_188,&local_1c8);
              }
              local_res18 = uVar8 | 0x40;
              local_6c = 7;
              local_78[0] = 8;
              FUN_1400460e0(&local_188,local_78);
              if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_78);
              }
              local_248 = (undefined4)local_188;
              uStack_244 = local_188._4_4_;
              uStack_240 = uStack_180;
              uStack_23c = uStack_17c;
              if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_238);
              }
              FUN_140041b80(local_238,&local_248);
              local_res18 = uVar8;
              if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              local_1a8 = local_238;
              uStack_26c = uStack_1cc;
              uStack_270 = uStack_1d0;
              if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) == 0) {
                local_278 = (longlong *)local_1d8;
              }
              else {
                FUN_1400419b0(&local_278,&local_1d8);
              }
              local_res18 = uVar8 | 0x80;
              uStack_25c = 7;
              local_268 = 8;
              FUN_1400460e0(&local_278,&local_268);
              if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_268);
              }
              local_248 = (undefined4)local_278;
              uStack_244 = local_278._4_4_;
              uStack_240 = uStack_270;
              uStack_23c = uStack_26c;
              if ((1 << (local_228[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_248);
              local_res18 = uVar8;
              if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_278);
              }
              local_1a0 = local_228;
              local_198 = &local_178;
              local_248 = _DAT_141dc7010;
              uStack_244 = uRam0000000141dc7014;
              uStack_240 = uRam0000000141dc7018;
              uStack_23c = uRam0000000141dc701c;
              if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_248);
              local_190 = local_208;
              ppuVar13 = &local_1a8;
              FUN_140e63610(local_res8,local_res10,&local_288,4,uVar12,ppuVar13);
              cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_68,&local_res8,&local_res10);
          if (local_58 != 0) {
            FUN_140e4cd60();
          }
        }
        local_1e8 = 0x1d;
        goto LAB_140ac8dd9;
      }
    }
    uVar11 = (undefined4)((ulonglong)puVar5 >> 0x20);
    local_1e8 = 0x21;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    if (puVar6 != local_238) {
      local_248 = *puVar6;
      uStack_244 = puVar6[1];
      uStack_240 = puVar6[2];
      uStack_23c = puVar6[3];
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_248);
    }
    local_1a8 = local_238;
    ppuVar13 = &local_1a8;
    uVar12 = CONCAT44(uVar11,DAT_141a02ef8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_288,1,uVar12,ppuVar13);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_1e8 = 0x21;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f440);
      FUN_140e609c0(local_res8);
      uVar12 = 0;
      puVar7 = (undefined4 *)gml_Script_FracPos(local_res8,local_res10,&local_258,0,0);
      if (puVar7 != puVar6) {
        local_248 = *puVar7;
        uStack_244 = puVar7[1];
        uStack_240 = puVar7[2];
        uStack_23c = puVar7[3];
        if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_248);
      }
      FUN_140e60910(1);
    }
    local_1e8 = 0x23;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_128,uVar12 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    uVar3 = FUN_140069500(uVar3);
    uVar12 = 0;
    puVar5 = &local_128;
    FUN_140e63610(uVar3,local_res10,&local_288,0,puVar5,0);
    local_1e8 = 0x24;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
    FUN_140e87440(uVar3,DAT_141a0a968,0x80000000,&local_138,(ulonglong)puVar5 & 0xffffffffffffff00,
                  uVar12 & 0xffffffffffffff00);
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,local_res10,&local_288,0,&local_138,0);
  }
  else {
    local_1e8 = 3;
  }
LAB_140ac8dd9:
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_238,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return;
}


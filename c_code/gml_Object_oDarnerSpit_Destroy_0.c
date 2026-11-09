// gml_Object_oDarnerSpit_Destroy_0 @ 0x1408e10f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oDarnerSpit_Destroy_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint **in_stack_fffffffffffffd20;
  ulonglong uVar12;
  uint local_2d8;
  uint uStack_2d4;
  uint uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  char *local_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  uint local_288;
  uint local_284;
  uint local_280 [3];
  undefined4 local_274;
  undefined8 local_268;
  uint uStack_260;
  uint uStack_25c;
  uint local_258 [4];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  uint local_228 [4];
  undefined1 local_218 [16];
  uint local_208 [4];
  undefined8 local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8 [3];
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  uint *local_150;
  undefined1 *local_148;
  uint *local_140;
  longlong *local_138;
  undefined4 local_12c;
  longlong *local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  longlong *local_e8;
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_2b0 = "gml_Object_oDamagePulse_Step_0";
  local_2a8 = 0;
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_258,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_25c = 0xffffff;
  local_268 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_17c = 0xffffff;
  local_188 = 0;
  local_1cc = 0xffffff;
  local_1d8[0] = 0;
  local_1d8[1] = 0;
  local_284 = 0xffffff;
  local_290 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_274 = 0xffffff;
  local_280[0] = 0;
  local_280[1] = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_2a8 = 1;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f290);
  uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe698);
  FUN_140e609c0(local_res8);
  FUN_1400460e0(uVar5,uVar4);
  FUN_140e60910(1);
  local_2a8 = 3;
  local_294 = 0xf;
  local_2a0 = 0x1000000000000b8;
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_2a0);
  if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a0);
  }
  if (0 < iVar2) {
    do {
      local_2a8 = 5;
      puVar6 = (uint *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a59170);
      local_12c = 6;
      local_138 = local_res8;
      in_stack_fffffffffffffd20 =
           (uint **)((ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00);
      pcVar9 = (code *)((ulonglong)pcVar9 & 0xffffffffffffff00);
      FUN_140e87440(&local_138,DAT_141a0a828,0x80000000,&local_268,pcVar9,in_stack_fffffffffffffd20)
      ;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      iVar2 = FUN_140e851f0(&local_268,puVar6,DAT_141955260,0);
      if (iVar2 == 0) {
        local_2a8 = 5;
      }
      else {
        local_2a8 = 7;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2c8 = 0;
        local_2c0 = 0;
        local_2bc = 5;
        local_11c = 6;
        local_128 = local_res8;
        uVar12 = (ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00;
        uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
        FUN_140e87440(&local_128,DAT_1419fe0e8,0x80000000,&local_1a8,uVar10,uVar12);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_10c = 6;
        local_118 = local_res8;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_118,DAT_1419fe158,0x80000000,&local_1b8,uVar10,uVar12);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        local_fc = 6;
        local_108 = local_res10;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_178,uVar10,uVar12);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_ec = 6;
        local_f8 = local_res10;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_188,uVar10,
                      uVar12 & 0xffffffffffffff00);
        uVar11 = (undefined4)(uVar10 >> 0x20);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        local_2d8 = (uint)local_1a8;
        uStack_2d4 = local_1a8._4_4_;
        uStack_2d0 = uStack_1a0;
        uStack_2cc = uStack_19c;
        if ((1 << ((byte)local_258[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2d8);
        local_168 = local_258;
        local_2d8 = (uint)local_1b8;
        uStack_2d4 = local_1b8._4_4_;
        uStack_2d0 = uStack_1b0;
        uStack_2cc = uStack_1ac;
        if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_248);
        }
        FUN_140041b80(local_248,&local_2d8);
        local_160 = local_248;
        local_2d8 = (uint)local_178;
        uStack_2d4 = local_178._4_4_;
        uStack_2d0 = uStack_170;
        uStack_2cc = uStack_16c;
        if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_238);
        }
        FUN_140041b80(local_238,&local_2d8);
        local_158 = local_238;
        local_2d8 = (uint)local_188;
        uStack_2d4 = local_188._4_4_;
        uStack_2d0 = uStack_180;
        uStack_2cc = uStack_17c;
        if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2d8);
        local_150 = local_228;
        in_stack_fffffffffffffd20 = &local_168;
        pcVar9 = (code *)CONCAT44(uVar11,DAT_1419fd548);
        puVar7 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_2c8,4,pcVar9,
                                       in_stack_fffffffffffffd20);
        if (puVar7 != local_1d8) {
          local_2d8 = *puVar7;
          uStack_2d4 = puVar7[1];
          uStack_2d0 = puVar7[2];
          uStack_2cc = puVar7[3];
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1d8);
          }
          FUN_140041b80(local_1d8,&local_2d8);
        }
        local_2a8 = 9;
        uVar4 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419fe698);
        iVar2 = FUN_140e851f0(local_1d8,uVar4,DAT_141955260,1);
        if (iVar2 < 1) {
          local_2a8 = 0xb;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2c8);
          }
          local_2c8 = 0;
          local_2c0 = 0;
          local_2bc = 5;
          local_dc = 6;
          local_e8 = local_res8;
          uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
          FUN_140e87440(&local_e8,DAT_141a0a828,0x80000000,&local_268,uVar10,
                        (ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00);
          uVar11 = (undefined4)(uVar10 >> 0x20);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          local_2d8 = (uint)local_268;
          uStack_2d4 = local_268._4_4_;
          uStack_2d0 = uStack_260;
          uStack_2cc = uStack_25c;
          if ((1 << ((byte)local_258[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2d8);
          local_168 = local_258;
          local_2d8 = _DAT_141dd7a38;
          uStack_2d4 = uRam0000000141dd7a3c;
          uStack_2d0 = uRam0000000141dd7a40;
          uStack_2cc = DAT_141dd7a44;
          if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_2d8);
          local_160 = local_248;
          in_stack_fffffffffffffd20 = &local_168;
          pcVar9 = (code *)CONCAT44(uVar11,DAT_141a56cf0);
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2c8,2,pcVar9,in_stack_fffffffffffffd20
                               );
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_2a8 = 0xc;
            puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a590b0);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
            *puVar8 = 0;
          }
          local_2a8 = 0xe;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a590b0);
          FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_290);
          iVar2 = FUN_140e851f0(&local_290,uVar4,DAT_141955260,1);
          if (iVar2 == -2 || -1 < iVar2) {
            local_2a8 = 0x10;
            puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a590b0);
            FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_290);
            FUN_140e85f80(local_res8,DAT_141a59210,0x80000000,&local_198);
            FUN_140e609c0(local_res8);
            local_1dc = 0;
            local_1e8 = 0x402e000000000000;
            local_res18 = 1;
            FUN_140046500(&local_1e8,&local_198);
            local_294 = local_1dc;
            local_298 = local_1e0;
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
              local_2a0 = local_1e8;
            }
            else {
              FUN_1400419b0(&local_2a0,&local_1e8);
            }
            local_res18 = 3;
            local_cc = 7;
            local_d8[0] = 1000;
            FUN_140042560(&local_2a0,local_d8);
            if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_d8);
            }
            uStack_1ec = local_284;
            uStack_1f0 = local_288;
            if ((1 << ((byte)local_284 & 0x1f) & 0x46U) == 0) {
              local_1f8 = local_290;
            }
            else {
              FUN_1400419b0(&local_1f8,&local_290);
            }
            local_res18 = 7;
            FUN_1400460e0(&local_1f8,&local_2a0);
            if (&local_1f8 != puVar8) {
              local_2d8 = (uint)local_1f8;
              uStack_2d4 = local_1f8._4_4_;
              uStack_2d0 = uStack_1f0;
              uStack_2cc = uStack_1ec;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar8);
              }
              FUN_140041b80(puVar8,&local_2d8);
            }
            local_res18 = 3;
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            local_res18 = 1;
            if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2a0);
            }
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140e60910(1);
            local_2a8 = 0x12;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            puVar7 = (uint *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
            local_bc = 6;
            local_c8 = local_res8;
            uVar12 = (ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00;
            uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
            FUN_140e87440(&local_c8,DAT_1419fe0e8,0x80000000,&local_1a8,uVar10,uVar12);
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            local_ac = 6;
            local_b8 = local_res8;
            uVar12 = uVar12 & 0xffffffffffffff00;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_1b8,uVar10,uVar12);
            if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b8);
            }
            local_9c = 6;
            local_a8 = local_res8;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_140e87440(&local_a8,DAT_141a0a828,0x80000000,&local_268,uVar10,
                          uVar12 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar10 >> 0x20);
            if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_a8);
            }
            local_2d8 = DAT_141a575a0 & 0xffffff;
            uStack_2d4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
            if (uStack_2d4 == 0xf) {
              uStack_2d4 = 0x4000004;
            }
            else {
              uStack_2d4 = uStack_2d4 | 0x1000000;
            }
            uStack_8c = 0xf;
            local_98 = CONCAT44(uStack_2d4,DAT_141a575a0) & 0xffffffff00ffffff;
            uStack_2d0 = uStack_90;
            uStack_2cc = 0xf;
            if ((1 << ((byte)local_258[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_258);
            }
            FUN_140041b80(local_258,&local_2d8);
            local_168 = local_258;
            local_2d8 = (uint)local_1a8;
            uStack_2d4 = local_1a8._4_4_;
            uStack_2d0 = uStack_1a0;
            uStack_2cc = uStack_19c;
            if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2d8);
            local_160 = local_248;
            local_2d8 = (uint)local_1b8;
            uStack_2d4 = local_1b8._4_4_;
            uStack_2d0 = uStack_1b0;
            uStack_2cc = uStack_1ac;
            if ((1 << (local_238[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_2d8);
            local_158 = local_238;
            if (puVar6 != local_228) {
              local_2d8 = *puVar6;
              uStack_2d4 = puVar6[1];
              uStack_2d0 = puVar6[2];
              uStack_2cc = puVar6[3];
              if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_228);
              }
              FUN_140041b80(local_228,&local_2d8);
            }
            local_150 = local_228;
            local_2d8 = (uint)local_268;
            uStack_2d4 = local_268._4_4_;
            uStack_2d0 = uStack_260;
            uStack_2cc = uStack_25c;
            if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_2d8);
            local_148 = local_218;
            if (puVar7 != local_208) {
              local_2d8 = *puVar7;
              uStack_2d4 = puVar7[1];
              uStack_2d0 = puVar7[2];
              uStack_2cc = puVar7[3];
              if ((1 << ((byte)local_208[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_208);
              }
              FUN_140041b80(local_208,&local_2d8);
            }
            in_stack_fffffffffffffd20 = &local_168;
            local_140 = local_208;
            puVar6 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_2c8,6,
                                           CONCAT44(uVar11,DAT_1419fd6d8),in_stack_fffffffffffffd20)
            ;
            if (puVar6 != local_280) {
              local_2d8 = *puVar6;
              uStack_2d4 = puVar6[1];
              uStack_2d0 = puVar6[2];
              uStack_2cc = puVar6[3];
              if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_280);
              }
              FUN_140041b80(local_280,&local_2d8);
            }
            local_2a8 = 0x19;
            local_88 = 0;
            uStack_84 = 0x3ff00000;
            uStack_7c = 0xd;
            local_2d8 = 0;
            uStack_2d4 = 0x3ff00000;
            uStack_2d0 = uStack_80;
            uStack_2cc = 0xd;
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_2d8);
            (**(code **)(*local_res10 + 8))(local_res10,DAT_141a59170);
            FUN_140e87930(local_280,DAT_141a59080,0x80000000,&local_1c8);
            local_2a8 = 0x1b;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2c8);
            }
            local_2c8 = 0;
            local_2c0 = 0;
            local_2bc = 5;
            local_168 = local_280;
            local_2d8 = (uint)DAT_1419df7b0;
            uStack_2d4 = DAT_1419df7b0._4_4_;
            uStack_2d0 = DAT_1419df7b8;
            uStack_2cc = DAT_1419df7bc;
            if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_248);
            }
            FUN_140041b80(local_248,&local_2d8);
            local_160 = local_248;
            pcVar9 = (code *)&local_168;
            gml_Script_draw_line_sprite(local_res8,local_res10,&local_2c8,2,pcVar9);
          }
          else {
            local_2a8 = 0xe;
          }
        }
        else {
          local_2a8 = 9;
        }
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_2a8 = 0x1e;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fe698);
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a58be0);
  uVar3 = FUN_140e851f0(uVar4,uVar5,DAT_141955260,1);
  if (uVar3 < 0x80000000) {
    local_2a8 = 0x20;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_280);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_290);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  _eh_vector_destructor_iterator_(local_258,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2b8;
  return;
}


// gml_Object_oWallBlock_Create_0 @ 0x140e20040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oWallBlock_Create_0(longlong *param_1,longlong *param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined4 **ppuVar11;
  undefined8 **in_stack_fffffffffffffd50;
  ulonglong uVar12;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_238 [2];
  undefined4 local_228 [4];
  undefined4 local_218 [4];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  uint local_13c;
  undefined8 *local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined4 local_100 [3];
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  longlong *local_d0;
  undefined4 local_c4;
  longlong *local_c0;
  undefined4 local_b4;
  undefined4 local_b0 [3];
  undefined4 local_a4;
  undefined4 local_a0 [3];
  undefined4 local_94;
  longlong *local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res18 = 0;
  local_270 = "gml_Object_oUnlockHurter_Step_0";
  local_268 = 0;
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_238,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_268 = 2;
  uStack_27c = 0xf;
  local_288 = 0x1000000000000ee;
  iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,&local_288);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if (0 < iVar3) {
    do {
      local_268 = 4;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_298 = (undefined4)DAT_1419df7b0;
      uStack_294 = DAT_1419df7b0._4_4_;
      uStack_290 = DAT_1419df7b8;
      uStack_28c = DAT_1419df7bc;
      if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_238);
      }
      FUN_140041b80(local_238,&local_298);
      local_138 = local_238;
      local_298 = (undefined4)DAT_1419df7b0;
      uStack_294 = DAT_1419df7b0._4_4_;
      uStack_290 = DAT_1419df7b8;
      uStack_28c = DAT_1419df7bc;
      if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_228);
      }
      FUN_140041b80(local_228,&local_298);
      local_130 = local_228;
      ppuVar9 = &local_138;
      uVar4 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2a8,2,ppuVar9);
      cVar2 = FUN_140e491e0(uVar4);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
        in_stack_fffffffffffffd50 =
             (undefined8 **)((ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00);
        uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
        FUN_140e87440(uVar4,DAT_1419ef328,0x80000000,&local_148,uVar10,in_stack_fffffffffffffd50);
        if ((local_13c & 0xffffff) == 0) {
          uVar8 = (undefined4)local_148;
        }
        else {
          uVar8 = FUN_140e4b060(&local_148);
        }
        dVar1 = (double)FUN_1412a79b0(uVar8,0);
        if (dVar1 == 0.0) {
          local_268 = 6;
          uVar4 = (**(code **)(*local_res10 + 0x10))(local_res10,DAT_141a01aa8);
          FUN_1400bdd80(uVar4);
          local_268 = 7;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          if (puVar5 != &local_1a8) {
            local_298 = *(undefined4 *)puVar5;
            uStack_294 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_290 = *(undefined4 *)(puVar5 + 1);
            uStack_28c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_298);
          }
          local_268 = 8;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
          uStack_18c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_190 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
            local_198 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_198,puVar5);
          }
          local_res18 = 2;
          local_f4 = 7;
          local_100[0] = 4;
          FUN_1400462a0(&local_198,local_100);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_100);
          }
          local_298 = (undefined4)local_198;
          uStack_294 = local_198._4_4_;
          uStack_290 = uStack_190;
          uStack_28c = uStack_18c;
          if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_298);
          local_res18 = 0;
          if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_138 = local_238;
          local_298 = _DAT_1419ee960;
          uStack_294 = uRam00000001419ee964;
          uStack_290 = uRam00000001419ee968;
          uStack_28c = uRam00000001419ee96c;
          if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_298);
          local_130 = local_228;
          FUN_140e609c0(local_res8);
          puVar7 = (undefined4 *)FUN_140e79090(&local_2a8,2,&local_138);
          if (puVar7 != puVar6) {
            local_298 = *puVar7;
            uStack_294 = puVar7[1];
            uStack_290 = puVar7[2];
            uStack_28c = puVar7[3];
            if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_298);
          }
          FUN_140e60910(1);
          local_268 = 9;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          local_e4 = 0xf;
          local_f0 = 0x100000000000106;
          FUN_140e87440(&local_f0,DAT_1419f5f38,0x80000000,&local_110,uVar10 & 0xffffffffffffff00,
                        (ulonglong)in_stack_fffffffffffffd50 & 0xffffffffffffff00);
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f0);
          }
          local_138 = &local_1a8;
          if (puVar6 != local_228) {
            local_298 = *puVar6;
            uStack_294 = puVar6[1];
            uStack_290 = puVar6[2];
            uStack_28c = puVar6[3];
            if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_228);
            }
            FUN_140041b80(local_228,&local_298);
          }
          local_130 = local_228;
          local_d4 = 0xf;
          local_e0 = 0x100000000000106;
          uVar4 = FUN_140069500(&local_e0);
          ppuVar9 = &local_138;
          puVar5 = &local_110;
          FUN_140e63610(uVar4,local_res10,&local_2a8,2,puVar5,ppuVar9);
          if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          local_268 = 10;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_260);
          }
          local_260 = 0;
          local_258 = 0;
          local_254 = 5;
          local_c4 = 6;
          local_d0 = local_res8;
          uVar12 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
          uVar10 = (ulonglong)puVar5 & 0xffffffffffffff00;
          FUN_140e87440(&local_d0,DAT_141a0a808,0x80000000,&local_1b8,uVar10,uVar12);
          if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          local_b4 = 6;
          local_c0 = local_res8;
          uVar12 = uVar12 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_c0,DAT_141a0a798,0x80000000,&local_1c8,uVar10,uVar12);
          if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          uStack_17c = local_1ac;
          uStack_180 = local_1b0;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) == 0) {
            local_188 = local_1b8;
          }
          else {
            FUN_1400419b0(&local_188,&local_1b8);
          }
          local_res18 = 4;
          local_a4 = 7;
          local_b0[0] = 4;
          FUN_1400462a0(&local_188,local_b0);
          if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b0);
          }
          local_298 = (undefined4)local_188;
          uStack_294 = local_188._4_4_;
          uStack_290 = uStack_180;
          uStack_28c = uStack_17c;
          if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_298);
          local_res18 = 0;
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_138 = local_238;
          uStack_16c = local_1bc;
          uStack_170 = local_1c0;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
            local_178 = local_1c8;
          }
          else {
            FUN_1400419b0(&local_178,&local_1c8);
          }
          local_res18 = 8;
          local_94 = 7;
          local_a0[0] = 4;
          FUN_1400460e0(&local_178,local_a0);
          if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a0);
          }
          local_298 = (undefined4)local_178;
          uStack_294 = local_178._4_4_;
          uStack_290 = uStack_170;
          uStack_28c = uStack_16c;
          if ((1 << ((byte)local_228[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_298);
          local_res18 = 0;
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_130 = local_228;
          local_84 = 6;
          local_90 = local_res8;
          FUN_140e87440(&local_90,DAT_141a0a788,0x80000000,&local_1d8,uVar10 & 0xffffffffffffff00,
                        uVar12 & 0xffffffffffffff00);
          if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_90);
          }
          puVar6 = (undefined4 *)FUN_140e78db0(&local_260,2,&local_138);
          if (puVar6 != local_218) {
            local_298 = *puVar6;
            uStack_294 = puVar6[1];
            uStack_290 = puVar6[2];
            uStack_28c = puVar6[3];
            if ((1 << ((byte)local_218[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_218);
            }
            FUN_140041b80(local_218,&local_298);
          }
          local_128 = local_218;
          uStack_15c = local_1cc;
          uStack_160 = local_1d0;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
            local_168 = local_1d8;
          }
          else {
            FUN_1400419b0(&local_168,&local_1d8);
          }
          local_res18 = 0x10;
          local_244 = 7;
          local_250 = CONCAT44(local_250._4_4_,4);
          FUN_1400462a0(&local_168,&local_250);
          if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_250);
          }
          local_298 = (undefined4)local_168;
          uStack_294 = local_168._4_4_;
          uStack_290 = uStack_160;
          uStack_28c = uStack_15c;
          if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_208);
          }
          FUN_140041b80(local_208,&local_298);
          local_res18 = 0;
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_120 = local_208;
          local_298 = _DAT_1419ee960;
          uStack_294 = uRam00000001419ee964;
          uStack_290 = uRam00000001419ee968;
          uStack_28c = uRam00000001419ee96c;
          if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_298);
          local_118 = local_1f8;
          ppuVar11 = &local_128;
          gml_Script_anon_1077_ThrowAnimQueue_ALTWEAPONSINIT
                    (local_res8,local_res10,&local_2a8,3,ppuVar11);
          uVar8 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
          local_268 = 0xc;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a574b0);
          if (puVar5 != local_238) {
            local_298 = *(undefined4 *)puVar5;
            uStack_294 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_290 = *(undefined4 *)(puVar5 + 1);
            uStack_28c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_238[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_238);
            }
            FUN_140041b80(local_238,&local_298);
          }
          local_138 = local_238;
          in_stack_fffffffffffffd50 = &local_138;
          puVar5 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_2a8,1,CONCAT44(uVar8,DAT_141a047c8),
                                 in_stack_fffffffffffffd50);
          if (puVar5 != &local_1e8) {
            local_298 = *(undefined4 *)puVar5;
            uStack_294 = *(undefined4 *)((longlong)puVar5 + 4);
            uStack_290 = *(undefined4 *)(puVar5 + 1);
            uStack_28c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_298);
          }
          local_268 = 0xd;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b48);
          uStack_27c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_280 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
            local_288 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_288,puVar5);
          }
          local_res18 = 0x20;
          FUN_140042560(&local_288,&local_1e8);
          local_298 = (undefined4)local_288;
          uStack_294 = local_288._4_4_;
          uStack_290 = uStack_280;
          uStack_28c = uStack_27c;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_298);
          local_res18 = 0;
          if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140e86fa0(local_res8,DAT_141a0a7e8,0,&local_158);
        }
      }
      cVar2 = FUN_140e643f0(local_80,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_80,&local_res8,&local_res10);
  local_268 = 0x12;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01aa8);
  local_244 = 0;
  local_250 = 0;
  iVar3 = FUN_140e851f0(uVar4,&local_250,DAT_141955260,0);
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if (iVar3 == 0) {
    local_268 = 0x14;
    FUN_140edd0e0(local_res8,local_res10,0,0);
  }
  if (local_70 != 0) {
    FUN_140e4cd60();
    local_70 = 0;
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_238,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return;
}


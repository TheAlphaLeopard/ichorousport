// gml_Object_oSwordSpikes_CleanUp_0 @ 0x140da56b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oSwordSpikes_CleanUp_0(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  double *pdVar5;
  uint *puVar6;
  uint *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar16;
  ulonglong uVar13;
  ulonglong **ppuVar14;
  undefined8 uVar15;
  ulonglong uVar17;
  ulonglong **ppuVar18;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  uint local_238;
  uint uStack_234;
  uint uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  longlong *local_200;
  undefined4 local_1f4;
  ulonglong local_1f0;
  undefined4 local_1e4;
  ulonglong local_1e0;
  undefined4 local_1d4;
  undefined8 local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  ulonglong local_1b8 [2];
  ulonglong local_1a8 [2];
  double local_198 [2];
  ulonglong local_188 [2];
  ulonglong local_178;
  byte local_16c;
  uint local_168 [4];
  uint local_158 [4];
  undefined1 local_148 [16];
  ulonglong *local_138;
  ulonglong *local_130;
  double *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  uint *local_110;
  uint *local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  
  local_210 = "gml_Script_anon@196@gml_Object_oSwordSpikes_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x12;
  uVar16 = 1;
  _eh_vector_constructor_iterator_(local_1b8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_23c = 0;
  local_248 = 0;
  local_21c = 0;
  local_228 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x14;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_208 = 0x16;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar17 = 0;
    uVar13 = CONCAT44(uVar16,DAT_1419ef5d8);
    puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_248,0,uVar13,0);
    if (puVar4 != &local_1e0) {
      local_1c8 = *puVar4;
      uStack_1c0 = (uint)puVar4[1];
      uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      FUN_140041b80(&local_1e0,&local_1c8);
    }
    local_208 = 0x17;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_1f4 = 6;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_200 = param_1;
    FUN_140e87440(&local_200,DAT_1419fe0e8,0x80000000,&local_a8,uVar13,uVar17);
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_1f4 = 6;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_200 = param_1;
    FUN_140e87440(&local_200,DAT_1419fe158,0x80000000,&local_b8,uVar13,uVar17 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_1c8 = local_a8;
    uStack_1c0 = uStack_a0;
    uStack_1bc = uStack_9c;
    if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_1c8);
    local_138 = local_1b8;
    local_1c8 = local_b8;
    uStack_1c0 = uStack_b0;
    uStack_1bc = uStack_ac;
    if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1c8);
    local_130 = local_1a8;
    uStack_8c = 0xf;
    local_98 = (longlong *)0x1000000000000b8;
    local_1c8 = 0x1000000000000b8;
    uStack_1c0 = uStack_90;
    uStack_1bc = 0xf;
    if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1c8);
    local_128 = local_198;
    local_120 = &local_1e0;
    local_1c8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_1c0 = uRam00000001419df7a8;
    uStack_1bc = uRam00000001419df7ac;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1c8);
    ppuVar14 = (ulonglong **)CONCAT44(uVar16,DAT_141a56b80);
    local_118 = &local_178;
    FUN_140e634e0(param_1,param_2,&local_248,5,ppuVar14,&local_138);
    local_208 = 0x18;
    while( true ) {
      uVar16 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_138 = &local_1e0;
      uVar15 = CONCAT44(uVar16,DAT_1419f58d8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar15,&local_138);
      uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') break;
      local_208 = 0x1a;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      local_130 = &local_1e0;
      local_238 = _DAT_141dc77d0;
      uStack_234 = uRam0000000141dc77d4;
      uStack_230 = uRam0000000141dc77d8;
      uStack_22c = uRam0000000141dc77dc;
      if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_238);
      local_128 = local_198;
      uVar3 = CONCAT44(uVar16,DAT_1419f5a78);
      puVar4 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_228,2,uVar3,&local_130);
      uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (puVar4 != &local_1f0) {
        local_238 = (uint)*puVar4;
        uStack_234 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_230 = (uint)puVar4[1];
        uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        FUN_140041b80(&local_1f0,&local_238);
      }
      local_208 = 0x1b;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_138 = &local_1e0;
      local_238 = _DAT_141dc77d0;
      uStack_234 = uRam0000000141dc77d4;
      uStack_230 = uRam0000000141dc77d8;
      uStack_22c = uRam0000000141dc77dc;
      if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_238);
      local_130 = local_1a8;
      uVar3 = CONCAT44(uVar16,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_248,2,uVar3,&local_138);
      uVar16 = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_208 = 0x1d;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
      if (puVar4 != local_1b8) {
        local_238 = (uint)*puVar4;
        uStack_234 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_230 = (uint)puVar4[1];
        uStack_22c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_238);
      }
      local_138 = local_1b8;
      local_238 = _DAT_1419edfb0;
      uStack_234 = uRam00000001419edfb4;
      uStack_230 = uRam00000001419edfb8;
      uStack_22c = uRam00000001419edfbc;
      if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_238);
      local_130 = local_1a8;
      ppuVar14 = (ulonglong **)CONCAT44(uVar16,DAT_141a01af8);
      uVar3 = FUN_140e634e0(param_1,param_2,&local_248,2,ppuVar14,&local_138);
      cVar1 = FUN_140e491e0(uVar3);
      uVar16 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
      if (cVar1 == '\0') {
        local_208 = 0x1d;
      }
      else {
        local_208 = 0x1e;
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = 0;
        local_240 = 0;
        local_23c = 5;
        if (puVar4 != local_1b8) {
          local_238 = (uint)*puVar4;
          uStack_234 = *(uint *)((longlong)puVar4 + 4);
          uStack_230 = (uint)puVar4[1];
          uStack_22c = *(uint *)((longlong)puVar4 + 0xc);
          if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_238);
        }
        local_138 = local_1b8;
        local_130 = &local_1f0;
        ppuVar18 = &local_138;
        ppuVar14 = (ulonglong **)CONCAT44(uVar16,DAT_141a573f0);
        uVar3 = FUN_140e634e0(param_1,param_2,&local_248,2,ppuVar14,ppuVar18);
        local_1f4 = 0;
        local_200 = (longlong *)&DAT_bff0000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_200,DAT_141955260,0);
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        if (iVar2 == 0) {
          local_208 = 0x1f;
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_248 = 0;
          local_240 = 0;
          local_23c = 5;
          FUN_140e87440(&local_1f0,DAT_141a56cd0,0x80000000,&local_88,
                        (ulonglong)ppuVar14 & 0xffffffffffffff00,
                        (ulonglong)ppuVar18 & 0xffffffffffffff00);
          local_238 = (uint)DAT_1419df7b0;
          uStack_234 = DAT_1419df7b0._4_4_;
          uStack_230 = DAT_1419df7b8;
          uStack_22c = DAT_1419df7bc;
          if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_238);
          local_138 = local_1b8;
          ppuVar14 = &local_138;
          uVar3 = gml_Script_OwnerY(param_1,param_2,&local_248,1,ppuVar14);
          iVar2 = FUN_140e851f0(&local_88,uVar3,DAT_141955260,0);
          uVar16 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
          if (iVar2 == 0) {
            local_208 = 0x1f;
          }
          else {
            local_208 = 0x21;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_248 = 0;
            local_240 = 0;
            local_23c = 5;
            if (puVar4 != local_1b8) {
              local_238 = (uint)*puVar4;
              uStack_234 = *(uint *)((longlong)puVar4 + 4);
              uStack_230 = (uint)puVar4[1];
              uStack_22c = *(uint *)((longlong)puVar4 + 0xc);
              if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1b8);
              }
              FUN_140041b80(local_1b8,&local_238);
            }
            local_138 = local_1b8;
            local_130 = &local_1f0;
            FUN_140e634e0(param_1,param_2,&local_248,2,CONCAT44(uVar16,DAT_141a57350),&local_138);
            local_208 = 0x23;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_248 = 0;
            local_240 = 0;
            local_23c = 5;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
            FUN_140e87170(&local_1f0,DAT_1419fe0e8,0x80000000,&local_c8,param_1,param_2);
            uVar13 = param_2;
            FUN_140e87170(&local_1f0,DAT_1419fe158,0x80000000,&local_d8,param_1,param_2);
            dVar9 = local_d8;
            if ((local_cc & 0xffffff) != 0) {
              dVar9 = (double)FUN_140e4b060(&local_d8);
            }
            dVar10 = local_c8;
            if ((local_bc & 0xffffff) != 0) {
              dVar10 = (double)FUN_140e4b060(&local_c8);
            }
            pdVar5 = (double *)gml_Script_ComboHit(param_1,param_2,&local_228,0,0);
            if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
              dVar11 = *pdVar5;
            }
            else {
              dVar11 = (double)FUN_140e4b060(pdVar5);
            }
            uVar17 = 0;
            pdVar5 = (double *)gml_Script_OwnerId(param_1,param_2,&local_248,0,0);
            if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
              dVar12 = *pdVar5;
            }
            else {
              dVar12 = (double)FUN_140e4b060(pdVar5);
            }
            fVar8 = (float)FUN_140e793d0((float)dVar12,(float)dVar11,(float)dVar10,(float)dVar9);
            if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            local_dc = 0;
            local_e8 = (double)fVar8;
            local_208 = 0x25;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_248 = 0;
            local_240 = 0;
            local_23c = 5;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            local_f8 = 0;
            local_f0 = 0;
            local_ec = 5;
            puVar6 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a7d8);
            local_6c = 6;
            uVar13 = uVar13 & 0xffffffffffffff00;
            uVar17 = uVar17 & 0xffffffffffffff00;
            local_78 = param_1;
            FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,uVar17,uVar13);
            if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_78);
            }
            uStack_8c = 6;
            local_98 = param_1;
            FUN_140e87440(&local_98,DAT_1419fe158,0x80000000,&local_b8,uVar17 & 0xffffffffffffff00,
                          uVar13 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_98);
            }
            local_238 = DAT_141a575a0 & 0xffffff;
            uStack_234 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
            if (uStack_234 == 0xf) {
              uStack_234 = 0x4000004;
            }
            else {
              uStack_234 = uStack_234 | 0x1000000;
            }
            uStack_1bc = 0xf;
            local_1c8 = CONCAT44(uStack_234,DAT_141a575a0) & 0xffffffff00ffffff;
            uStack_230 = uStack_1c0;
            uStack_22c = 0xf;
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_238);
            local_138 = local_1b8;
            local_238 = (uint)local_a8;
            uStack_234 = local_a8._4_4_;
            uStack_230 = uStack_a0;
            uStack_22c = uStack_9c;
            if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_238);
            local_130 = local_1a8;
            local_238 = (uint)local_b8;
            uStack_234 = local_b8._4_4_;
            uStack_230 = uStack_b0;
            uStack_22c = uStack_ac;
            if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_198);
            }
            FUN_140041b80(local_198,&local_238);
            local_128 = local_198;
            uVar16 = 0;
            puVar4 = (ulonglong *)gml_Script_deal_damage(param_1,param_2,&local_f8,0,0);
            if (puVar4 != local_188) {
              local_238 = (uint)*puVar4;
              uStack_234 = *(uint *)((longlong)puVar4 + 4);
              uStack_230 = (uint)puVar4[1];
              uStack_22c = *(uint *)((longlong)puVar4 + 0xc);
              if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_188);
              }
              FUN_140041b80(local_188,&local_238);
            }
            local_120 = local_188;
            local_118 = &local_1f0;
            if (puVar6 != local_168) {
              local_238 = *puVar6;
              uStack_234 = puVar6[1];
              uStack_230 = puVar6[2];
              uStack_22c = puVar6[3];
              if ((1 << ((byte)local_168[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_168);
              }
              FUN_140041b80(local_168,&local_238);
            }
            local_110 = local_168;
            puVar6 = (uint *)FUN_140e634e0(param_1,param_2,&local_228,6,
                                           CONCAT44(uVar16,DAT_1419fd6d8),&local_138);
            if (puVar6 != local_158) {
              local_238 = *puVar6;
              uStack_234 = puVar6[1];
              uStack_230 = puVar6[2];
              uStack_22c = puVar6[3];
              if ((1 << ((byte)local_158[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_158);
              }
              FUN_140041b80(local_158,&local_238);
            }
            local_108 = local_158;
            local_238 = (uint)DAT_1419df7b0;
            uStack_234 = DAT_1419df7b0._4_4_;
            uStack_230 = DAT_1419df7b8;
            uStack_22c = DAT_1419df7bc;
            if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_238);
            local_100 = local_148;
            gml_Script_draw_line_sprite(param_1,param_2,&local_248,2,&local_108);
            local_208 = 0x27;
            puVar6 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f59c8);
            puVar7 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7d8);
            FUN_140e609c0(param_1);
            if (puVar6 != puVar7) {
              local_238 = *puVar6;
              uStack_234 = puVar6[1];
              uStack_230 = puVar6[2];
              uStack_22c = puVar6[3];
              if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_238);
            }
            FUN_140e60910(1);
            local_208 = 0x29;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_248 = 0;
            local_240 = 0;
            local_23c = 5;
            local_238 = (uint)DAT_1419df7b0;
            uStack_234 = DAT_1419df7b0._4_4_;
            uStack_230 = DAT_1419df7b8;
            uStack_22c = DAT_1419df7bc;
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_238);
            local_138 = local_1b8;
            local_238 = (uint)DAT_1419df7b0;
            uStack_234 = DAT_1419df7b0._4_4_;
            uStack_230 = DAT_1419df7b8;
            uStack_22c = DAT_1419df7bc;
            if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_238);
            local_130 = local_1a8;
            gml_Script_IK_documentation(param_1,param_2,&local_248,2,&local_138);
            local_208 = 0x2a;
            if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_248 = 0;
            local_240 = 0;
            local_23c = 5;
            local_238 = _DAT_1419edfd0;
            uStack_234 = uRam00000001419edfd4;
            uStack_230 = uRam00000001419edfd8;
            uStack_22c = uRam00000001419edfdc;
            if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_238);
            local_138 = local_1b8;
            local_238 = _DAT_1419edfc0;
            uStack_234 = uRam00000001419edfc4;
            uStack_230 = uRam00000001419edfc8;
            uStack_22c = uRam00000001419edfcc;
            if ((1 << ((byte)local_1a8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1a8);
            }
            FUN_140041b80(local_1a8,&local_238);
            local_130 = local_1a8;
            local_128 = &local_e8;
            local_238 = (uint)DAT_1419df7b0;
            uStack_234 = DAT_1419df7b0._4_4_;
            uStack_230 = DAT_1419df7b8;
            uStack_22c = DAT_1419df7bc;
            if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_238);
            local_120 = local_188;
            ppuVar14 = &local_138;
            FUN_14044e5b0(param_1,param_2,&local_248,4,ppuVar14);
          }
        }
        else {
          local_208 = 0x1e;
          (**(code **)(*param_1 + 8))(param_1,DAT_1419fe9b8);
        }
      }
    }
    local_208 = 0x2e;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_138 = &local_1e0;
    FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar16,DAT_1419f6038),&local_138);
  }
  else {
    local_208 = 0x14;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  _eh_vector_destructor_iterator_(local_1b8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}


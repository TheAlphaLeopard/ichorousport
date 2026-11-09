// gml_Script___ClearState_anon_17965___InputClassVirtualButton___InputClassVirtualButton @ 0x14005ebd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___ClearState_anon_17965___InputClassVirtualButton___InputClassVirtualButton
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  double *pdVar10;
  ulonglong uVar11;
  byte bVar14;
  byte bVar13;
  byte bVar12;
  undefined4 uVar15;
  byte bVar18;
  byte bVar17;
  byte bVar16;
  undefined4 uVar19;
  double dVar20;
  undefined4 uVar21;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  double local_210;
  uint local_204;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong local_1d8;
  undefined4 local_1cc;
  uint local_1c8 [2];
  undefined8 *local_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  
  local_220 = 
  "gml_Script_GetHistoryDistance@anon@16000@__InputClassVirtualButton@__InputClassVirtualButton";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0x263;
  FUN_140041df0(local_1c8,param_4,1,param_5);
  _eh_vector_constructor_iterator_(local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  puVar7 = local_1c0;
  uVar4 = local_1c8[0];
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  bVar14 = 0xff;
  bVar13 = 0xff;
  bVar12 = 0xff;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  bVar18 = 0xff;
  bVar17 = 0xff;
  bVar16 = 0xff;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_204 = 0xffffff;
  local_210 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0x263;
  pdVar10 = (double *)&DAT_1419df7b0;
  if ((int)local_1c8[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_1c0;
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_218 = 0x263;
    if ((int)uVar4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0x4024000000000000;
    uVar4 = local_1c8[0];
  }
  local_218 = 0x265;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe108);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_218 = 0x267;
    if ((int)uVar4 < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*puVar7;
    }
    uStack_23c = 0;
    local_248 = 0;
    iVar3 = FUN_140e851f0(puVar8,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar3 == -2 || 0 < iVar3) {
      local_218 = 0x26d;
      if ((int)local_1c8[0] < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*puVar7;
      }
      uStack_23c = 0;
      local_248 = 0x4024000000000000;
      iVar3 = FUN_140e851f0(puVar8,&local_248,DAT_141955260,1);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      uVar4 = 1 << ((byte)local_22c & 0x1f);
      if (iVar3 < 1) {
        local_218 = 0x274;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe848);
        uStack_1ec = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_1f0 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
          local_1f8 = *puVar8;
        }
        else {
          FUN_1400419b0(&local_1f8,puVar8);
        }
        uStack_23c = 7;
        local_248 = CONCAT44(local_248._4_4_,1);
        FUN_1400462a0(&local_1f8,&local_248);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_248 = local_1f8;
        uStack_240 = uStack_1f0;
        uStack_23c = uStack_1ec;
        if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_248);
        if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_88 = local_148;
        if ((int)local_1c8[0] < 1) {
          puVar8 = &DAT_1419df7b0;
LAB_14005f2e1:
          local_248 = *puVar8;
          uStack_240 = *(undefined4 *)(puVar8 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_248);
        }
        else {
          puVar8 = (undefined8 *)*puVar7;
          if (puVar8 != &local_138) goto LAB_14005f2e1;
        }
        local_80 = &local_138;
        local_248 = CONCAT44(uRam00000001419df8b4,_DAT_1419df8b0);
        uStack_240 = uRam00000001419df8b8;
        uStack_23c = uRam00000001419df8bc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_248);
        local_78 = local_128;
        if ((int)local_1c8[0] < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*puVar7;
        }
        puVar8 = (undefined8 *)FUN_140e79230(&local_238,3,&local_88);
        if (puVar8 != puVar7) {
          local_248 = *puVar8;
          uStack_240 = *(undefined4 *)(puVar8 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_248);
        }
        local_218 = 0x275;
        if ((int)local_1c8[0] < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*local_1c0;
        }
        uStack_23c = 0;
        local_248 = 0;
        iVar3 = FUN_140e851f0(puVar7,&local_248,DAT_141955260,1);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if (iVar3 != -2 && iVar3 < 1) {
          local_218 = 0x275;
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          *param_3 = 0;
          goto LAB_14005fcd7;
        }
        local_218 = 0x277;
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        uStack_14c = 0;
        local_158 = 0;
        local_218 = 0x279;
        local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_240 = DAT_1419df7b8;
        uStack_23c = DAT_1419df7bc;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_248);
        local_218 = 0x27a;
        local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_240 = DAT_1419df7b8;
        uStack_23c = DAT_1419df7bc;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_248);
        local_218 = 0x27b;
        plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
          if (*(int *)(lVar1 + 0x24) < 1) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = *(longlong **)(lVar1 + 8);
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar9 != &local_1d8) {
          local_248 = *plVar9;
          uStack_240 = (undefined4)plVar9[1];
          uStack_23c = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          FUN_140041b80(&local_1d8,&local_248);
        }
        local_218 = 0x27c;
        FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
        local_248 = local_98;
        uStack_240 = uStack_90;
        uStack_23c = uStack_8c;
        FUN_140041b80(&local_1a8,&local_248);
        local_218 = 0x27d;
        FUN_140e87170(&local_1d8,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
        local_248 = local_a8;
        uStack_240 = uStack_a0;
        uStack_23c = uStack_9c;
        FUN_140041b80(&local_1b8,&local_248);
        local_218 = 0x27f;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = 1.0;
        local_218 = 0x280;
        if (0 < (int)local_1c8[0]) {
          pdVar10 = (double *)*local_1c0;
        }
        if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
          dVar20 = *pdVar10;
        }
        else {
          dVar20 = (double)FUN_140e4b060(pdVar10);
        }
        uVar11 = (ulonglong)dVar20;
        uVar15 = uStack_19c;
        uVar19 = uStack_1ac;
        if (0 < (int)uVar11) {
          do {
            uVar4 = (int)uVar11 - 1;
            uVar11 = (ulonglong)uVar4;
            local_218 = 0x282;
            local_1e8 = (undefined4)local_1a8;
            uStack_1e4 = local_1a8._4_4_;
            uStack_1e0 = uStack_1a0;
            uStack_1dc = uStack_19c;
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_1e8);
            local_218 = 0x283;
            local_1e8 = (undefined4)local_1b8;
            uStack_1e4 = local_1b8._4_4_;
            uStack_1e0 = uStack_1b0;
            uStack_1dc = uStack_1ac;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_1e8);
            local_218 = 0x284;
            plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe488);
            iVar3 = FUN_140e4a740(&local_210);
            if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) &&
               (lVar1 = *plVar9, lVar1 != 0)) {
              if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                              *(undefined4 *)(lVar1 + 0x24));
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
              }
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
            }
            if (plVar9 != &local_1d8) {
              local_1e8 = (undefined4)*plVar9;
              uStack_1e4 = *(undefined4 *)((longlong)plVar9 + 4);
              uStack_1e0 = (undefined4)plVar9[1];
              uStack_1dc = *(undefined4 *)((longlong)plVar9 + 0xc);
              if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1d8);
              }
              FUN_140041b80(&local_1d8,&local_1e8);
            }
            local_218 = 0x285;
            FUN_140e87170(&local_1d8,DAT_1419fe0e8,0x80000000,&local_b8,param_1,param_2);
            local_1e8 = (undefined4)local_b8;
            uStack_1e4 = local_b8._4_4_;
            uStack_1e0 = uStack_b0;
            uStack_1dc = uStack_ac;
            if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1e8);
            local_218 = 0x286;
            plVar9 = param_1;
            FUN_140e87170(&local_1d8,DAT_1419fe158,0x80000000,&local_c8,param_1,param_2);
            uVar21 = (undefined4)((ulonglong)plVar9 >> 0x20);
            local_1e8 = (undefined4)local_c8;
            uStack_1e4 = local_c8._4_4_;
            uStack_1e0 = uStack_c0;
            uStack_1dc = uStack_bc;
            if ((1 << ((byte)uVar19 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_1e8);
            uVar15 = uStack_19c;
            local_218 = 0x288;
            uStack_ec = uStack_19c;
            uStack_f0 = uStack_1a0;
            if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
              local_f8 = local_1a8;
            }
            else {
              FUN_1400419b0(&local_f8,&local_1a8);
            }
            FUN_1400462a0(&local_f8,&local_168);
            local_1e8 = (undefined4)local_f8;
            uStack_1e4 = local_f8._4_4_;
            uStack_1e0 = uStack_f0;
            uStack_1dc = uStack_ec;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1e8);
            if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f8);
            }
            uVar19 = uStack_1ac;
            local_218 = 0x289;
            uStack_dc = uStack_1ac;
            uStack_e0 = uStack_1b0;
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
              local_e8 = local_1b8;
            }
            else {
              FUN_1400419b0(&local_e8,&local_1b8);
            }
            FUN_1400462a0(&local_e8,&local_178);
            local_1e8 = (undefined4)local_e8;
            uStack_1e4 = local_e8._4_4_;
            uStack_1e0 = uStack_e0;
            uStack_1dc = uStack_dc;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_1e8);
            if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e8);
            }
            local_218 = 0x28a;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            uStack_23c = local_18c;
            uStack_240 = local_190;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
              local_248 = local_198;
            }
            else {
              FUN_1400419b0(&local_248,&local_198);
            }
            FUN_140042560(&local_248,&local_198);
            uStack_1ec = local_17c;
            uStack_1f0 = local_180;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
              local_1f8 = local_188;
            }
            else {
              FUN_1400419b0(&local_1f8,&local_188);
            }
            FUN_140042560(&local_1f8,&local_188);
            uStack_cc = uStack_1ec;
            uStack_d0 = uStack_1f0;
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
              local_d8 = local_1f8;
            }
            else {
              FUN_1400419b0(&local_d8,&local_1f8);
            }
            FUN_1400460e0(&local_d8,&local_248);
            local_1e8 = (undefined4)local_d8;
            uStack_1e4 = local_d8._4_4_;
            uStack_1e0 = uStack_d0;
            uStack_1dc = uStack_cc;
            if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_148);
            }
            FUN_140041b80(local_148,&local_1e8);
            if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d8);
            }
            if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1f8);
            }
            if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_248);
            }
            local_88 = local_148;
            uVar6 = FUN_140e634e0(param_1,param_2,&local_238,1,CONCAT44(uVar21,DAT_1419fd718),
                                  &local_88);
            FUN_1400460e0(&local_158,uVar6);
            local_218 = 0x28c;
            uVar5 = local_204 & 0xffffff;
            if (uVar5 == 0) {
LAB_14005fc7a:
              local_210 = local_210 + 1.0;
            }
            else {
              if (uVar5 == 1) {
                local_210 = (double)FUN_140e4b060(&local_210);
                local_204 = 0;
                goto LAB_14005fc7a;
              }
              if (uVar5 == 7) {
                local_210 = (double)CONCAT44(local_210._4_4_,local_210._0_4_ + 1);
              }
              else if (uVar5 == 10) {
                local_210 = (double)((longlong)local_210 + 1);
              }
              else {
                if (uVar5 == 0xd) {
                  local_204 = 0;
                  goto LAB_14005fc7a;
                }
                FUN_140042910(&DAT_14172c3d8,&local_210,&local_210);
              }
            }
          } while (0 < (int)uVar4);
        }
        bVar12 = (byte)uVar15;
        bVar16 = (byte)uVar19;
        local_218 = 0x28f;
        if (&local_158 == param_3) goto LAB_14005fcd7;
        local_1e8 = (undefined4)local_158;
        uStack_1e4 = local_158._4_4_;
        uStack_1e0 = uStack_150;
        uStack_1dc = uStack_14c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        puVar7 = (undefined8 *)&local_1e8;
      }
      else {
        local_218 = 0x26f;
        if ((uVar4 & 0x46) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_248 = CONCAT44(uRam0000000141dc7afc,_DAT_141dc7af8);
        uStack_240 = uRam0000000141dc7b00;
        uStack_23c = DAT_141dc7b04;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_248);
        local_88 = local_148;
        if ((int)local_1c8[0] < 1) {
          puVar7 = &DAT_1419df7b0;
LAB_14005f059:
          local_248 = *puVar7;
          uStack_240 = *(undefined4 *)(puVar7 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_248);
        }
        else {
          puVar7 = (undefined8 *)*puVar7;
          if (puVar7 != &local_138) goto LAB_14005f059;
        }
        local_80 = &local_138;
        local_248 = CONCAT44(uRam0000000141dc7b2c,_DAT_141dc7b28);
        uStack_240 = uRam0000000141dc7b30;
        uStack_23c = DAT_141dc7b34;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_248);
        local_78 = local_128;
        local_248 = CONCAT44(uRam00000001419df8b4,_DAT_1419df8b0);
        uStack_240 = uRam00000001419df8b8;
        uStack_23c = uRam00000001419df8bc;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_248);
        local_70 = local_118;
        local_248 = CONCAT44(uRam0000000141dc7b3c,_DAT_141dc7b38);
        uStack_240 = uRam0000000141dc7b40;
        uStack_23c = DAT_141dc7b44;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_248);
        local_68 = local_108;
        FUN_14008e020(param_1,param_2,&local_238,5,&local_88);
        local_218 = 0x270;
        bVar16 = bVar17;
        bVar12 = bVar13;
        if (param_3 == &DAT_1419df7b0) goto LAB_14005fcd7;
        local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_240 = DAT_1419df7b8;
        uStack_23c = DAT_1419df7bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) == 0)
        goto LAB_14005edfd;
        FUN_140041a50(param_3);
        puVar7 = &local_248;
        bVar16 = bVar18;
        bVar12 = bVar14;
      }
    }
    else {
      local_218 = 0x269;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      local_248 = CONCAT44(uRam0000000141dc7b4c,_DAT_141dc7b48);
      uStack_240 = uRam0000000141dc7b50;
      uStack_23c = DAT_141dc7b54;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_248);
      local_88 = local_148;
      FUN_14008e020(param_1,param_2,&local_238,1,&local_88);
      local_218 = 0x26a;
      bVar16 = bVar17;
      bVar12 = bVar13;
      if (param_3 == &DAT_1419df7b0) goto LAB_14005fcd7;
      local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_240 = DAT_1419df7b8;
      uStack_23c = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) == 0)
      goto LAB_14005edfd;
      FUN_140041a50(param_3);
      puVar7 = &local_248;
      bVar16 = bVar18;
      bVar12 = bVar14;
    }
  }
  else {
    local_218 = 0x265;
    bVar16 = bVar17;
    bVar12 = bVar13;
    if (param_3 == &DAT_1419df7b0) goto LAB_14005fcd7;
    local_248 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_240 = DAT_1419df7b8;
    uStack_23c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
LAB_14005edfd:
    puVar7 = &local_248;
    bVar16 = bVar18;
    bVar12 = bVar14;
  }
  FUN_140041b80(param_3,puVar7);
LAB_14005fcd7:
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << (bVar16 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_1c8[0]) {
    uVar11 = (ulonglong)local_1c8[0];
    puVar7 = local_1c0;
    do {
      puVar8 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_1c0);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}


// gml_Script_anon_2548_gml_Object_oRogueLevelManager_Other_11 @ 0x140ce3490

undefined8 *
gml_Script_anon_2548_gml_Object_oRogueLevelManager_Other_11
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  double *pdVar8;
  double *pdVar9;
  undefined4 uVar10;
  undefined4 uVar14;
  double dVar11;
  double dVar12;
  double dVar13;
  code *pcVar15;
  code *pcVar16;
  double **ppdVar17;
  ulonglong uVar18;
  double local_3d0;
  undefined4 local_3c8;
  uint local_3c4;
  double local_3c0;
  undefined4 local_3b8;
  uint local_3b4;
  undefined8 local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 local_394;
  undefined8 local_390;
  char *local_388;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  undefined8 local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  double *local_358;
  double *local_350;
  double *local_348;
  double local_340;
  undefined4 local_338;
  uint local_334;
  double local_330;
  undefined4 local_328;
  uint local_324;
  double local_320;
  undefined4 local_318;
  uint local_314;
  double local_310;
  undefined4 local_308;
  uint local_304;
  double local_300;
  undefined4 local_2f8;
  uint local_2f4;
  double local_2f0;
  undefined4 local_2e8;
  uint local_2e4;
  double local_2e0;
  undefined4 local_2d8;
  uint local_2d4;
  double local_2d0;
  undefined4 local_2c8;
  uint local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  uint uStack_29c;
  undefined1 *local_298;
  undefined4 local_28c;
  undefined4 local_288 [3];
  undefined4 local_27c;
  undefined1 *local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  double local_228 [2];
  double local_218 [4];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined4 local_1b8 [3];
  undefined4 local_1ac;
  undefined1 *local_1a8;
  undefined4 local_19c;
  undefined4 local_198 [3];
  undefined4 local_18c;
  undefined4 local_188 [3];
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined4 local_168 [3];
  undefined4 local_15c;
  undefined1 *local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined4 local_118 [3];
  undefined4 local_10c;
  undefined1 *local_108;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined4 local_d8 [3];
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined4 local_b8 [3];
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  
  local_388 = "gml_Script_anon@1250@gml_Object_oRogueLevelManager_Other_11";
  local_390 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_390;
  local_380 = 0x42;
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_228,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_3c4 = 0xffffff;
  local_3d0 = 0.0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_394 = 0;
  local_3a0 = 0;
  local_3a4 = 0;
  local_3b0 = 0;
  local_2b4 = 0;
  local_2c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_380 = 0x44;
  local_3b4 = 0;
  uVar10 = 0;
  uVar14 = 0x3ff00000;
  local_3c0 = 1.0;
  bVar1 = true;
  do {
    dVar11 = (double)CONCAT44(uVar14,uVar10);
    if (!bVar1) {
      local_380 = 0x44;
      uVar4 = local_3b4 & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_3c0 = (double)CONCAT44(local_3c0._4_4_,local_3c0._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_3c0 = (double)((longlong)local_3c0 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140ce362d;
            FUN_140042910(&DAT_14172c3d8,&local_3c0,&local_3c0);
          }
          goto LAB_140ce363d;
        }
        dVar11 = (double)FUN_140e4b060(&local_3c0);
LAB_140ce362d:
        local_3b4 = 0;
      }
      local_3c0 = dVar11 + 1.0;
    }
LAB_140ce363d:
    bVar1 = false;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    local_25c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_260 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) == 0) {
      local_268 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_268,puVar6);
    }
    local_12c = 7;
    local_138[0] = 1;
    FUN_1400462a0(&local_268,local_138);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    iVar5 = FUN_140e851f0(&local_3c0,&local_268,DAT_141955260,1);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if (iVar5 == -2 || -1 < iVar5) break;
    local_380 = 0x46;
    if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3d0);
    }
    local_3c4 = 0;
    local_3d0 = 1.0;
    bVar2 = true;
LAB_140ce3770:
    if (!bVar2) {
      local_380 = 0x46;
      uVar4 = local_3c4 & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_3d0 = (double)CONCAT44(local_3d0._4_4_,local_3d0._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_3d0 = (double)((longlong)local_3d0 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_3c4 = 0;
              goto LAB_140ce37c5;
            }
            FUN_140042910(&DAT_14172c3d8,&local_3d0,&local_3d0);
          }
          goto LAB_140ce37d0;
        }
        local_3d0 = (double)FUN_140e4b060(&local_3d0);
        local_3c4 = 0;
      }
LAB_140ce37c5:
      local_3d0 = local_3d0 + 1.0;
    }
LAB_140ce37d0:
    bVar2 = false;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    local_24c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_250 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
      local_258 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_258,puVar6);
    }
    local_cc = 7;
    local_d8[0] = 1;
    FUN_1400462a0(&local_258,local_d8);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    iVar5 = FUN_140e851f0(&local_3d0,&local_258,DAT_141955260,1);
    uVar10 = 0;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    if (iVar5 != -2 && iVar5 < 0) {
      local_380 = 0x48;
      if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3a0);
      }
      local_3a0 = 0;
      local_398 = 0;
      local_394 = 5;
      pcVar15 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
      local_358 = &local_3d0;
      local_350 = &local_3c0;
      ppdVar17 = &local_358;
      pcVar16 = pcVar15;
      uVar7 = FUN_140e63610(param_1,param_2,&local_3a0,2,pcVar15,ppdVar17,uVar10);
      cVar3 = FUN_140e491e0(uVar7);
      if (cVar3 == '\0') {
LAB_140ce4c83:
        pcVar15 = pcVar16;
        local_380 = 0x49;
      }
      else {
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
        if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b0);
        }
        local_3b0 = 0;
        local_3a8 = 0;
        local_3a4 = 5;
        dVar11 = local_3c0;
        if ((local_3b4 & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_3c0);
        }
        dVar12 = local_3d0;
        if ((local_3c4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_3d0);
        }
        uVar10 = FUN_140e4a740(uVar7);
        uVar7 = FUN_140ea8b20(&local_3b0,uVar10,(longlong)dVar12,(longlong)dVar11);
        uVar18 = (ulonglong)ppdVar17 & 0xffffffffffffff00;
        pcVar16 = (code *)((ulonglong)pcVar16 & 0xffffffffffffff00);
        FUN_140e87440(uVar7,DAT_141a57c50,0x80000000,&local_1e8,pcVar16,uVar18);
        local_1ec = DAT_141ddaf24;
        local_1f0 = DAT_141ddaf20;
        if ((1 << ((byte)DAT_141ddaf24 & 0x1f) & 0x46U) == 0) {
          local_1f8 = DAT_141ddaf18;
        }
        else {
          FUN_1400419b0(&local_1f8,&DAT_141ddaf18);
        }
        iVar5 = FUN_140e851f0(&local_1e8,&local_1f8,DAT_141955260,0);
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        if (iVar5 != 0) goto LAB_140ce4c83;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c0);
        }
        local_2c0 = 0;
        local_2b8 = 0;
        local_2b4 = 5;
        dVar11 = local_3c0;
        if ((local_3b4 & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_3c0);
        }
        dVar12 = local_3d0;
        if ((local_3c4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_3d0);
        }
        uVar10 = FUN_140e4a740(uVar7);
        uVar7 = FUN_140ea8b20(&local_2c0,uVar10,(longlong)dVar12,(longlong)dVar11);
        pcVar16 = (code *)((ulonglong)pcVar16 & 0xffffffffffffff00);
        FUN_140e87440(uVar7,DAT_1419f9e38,0x80000000,&local_1d8,pcVar16,uVar18 & 0xffffffffffffff00)
        ;
        cVar3 = FUN_140e491e0(&local_1d8);
        if (cVar3 != '\0') goto LAB_140ce4c83;
        local_380 = 0x4b;
        if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a0);
        }
        local_3a0 = 0;
        local_398 = 0;
        local_394 = 5;
        uStack_23c = local_3c4;
        uStack_240 = local_3c8;
        if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
          local_248 = local_3d0;
        }
        else {
          FUN_1400419b0(&local_248,&local_3d0);
        }
        local_bc = 7;
        local_c8[0] = 1;
        FUN_1400460e0(&local_248,local_c8);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        local_2a8 = (undefined4)local_248;
        uStack_2a4 = local_248._4_4_;
        uStack_2a0 = uStack_240;
        uStack_29c = uStack_23c;
        if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2a8);
        uVar10 = 0;
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_358 = local_228;
        local_350 = &local_3c0;
        uVar7 = FUN_140e63610(param_1,param_2,&local_3a0,2,pcVar15,&local_358,uVar10);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b0);
          }
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a4 = 5;
          pcVar15 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          local_334 = local_3c4;
          local_338 = local_3c8;
          if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
            local_340 = local_3d0;
          }
          else {
            FUN_1400419b0(&local_340,&local_3d0);
          }
          local_ac = 7;
          local_b8[0] = 1;
          FUN_1400460e0(&local_340,local_b8);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          dVar11 = local_3c0;
          if ((local_3b4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_3c0);
          }
          dVar12 = local_340;
          if ((local_334 & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_340);
          }
          uVar10 = FUN_140e4a740(uVar7);
          uVar7 = FUN_140ea8b20(&local_3b0,uVar10,(int)dVar12,(longlong)dVar11);
          local_1bc = 0;
          local_1c8 = 0xc000000000000000;
          iVar5 = FUN_140e851f0(uVar7,&local_1c8,DAT_141955260,0);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_340);
          }
          if (iVar5 != 0) {
            local_380 = 0x4c;
            pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
            local_19c = 0;
            local_1a8 = &DAT_bff0000000000000;
            local_324 = local_3c4;
            local_328 = local_3c8;
            if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
              local_330 = local_3d0;
            }
            else {
              FUN_1400419b0(&local_330,&local_3d0);
            }
            local_1ac = 7;
            local_1b8[0] = 1;
            FUN_1400460e0(&local_330,local_1b8);
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            dVar11 = local_3c0;
            if ((local_3b4 & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_3c0);
            }
            dVar12 = local_330;
            if ((local_324 & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_330);
            }
            if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
              dVar13 = *pdVar8;
            }
            else {
              dVar13 = (double)FUN_140e4b060(pdVar8);
            }
            FUN_140ea8d00((longlong)dVar13,(int)dVar12,(longlong)dVar11,&local_1a8);
            if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_330);
            }
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
          }
        }
        local_380 = 0x4e;
        if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a0);
        }
        local_3a0 = 0;
        local_398 = 0;
        local_394 = 5;
        uStack_22c = local_3c4;
        uStack_230 = local_3c8;
        if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
          local_238 = local_3d0;
        }
        else {
          FUN_1400419b0(&local_238,&local_3d0);
        }
        local_18c = 7;
        local_198[0] = 1;
        FUN_1400462a0(&local_238,local_198);
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        local_2a8 = (undefined4)local_238;
        uStack_2a4 = local_238._4_4_;
        uStack_2a0 = uStack_230;
        uStack_29c = uStack_22c;
        if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_228);
        }
        FUN_140041b80(local_228,&local_2a8);
        uVar10 = 0;
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_358 = local_228;
        local_350 = &local_3c0;
        uVar7 = FUN_140e63610(param_1,param_2,&local_3a0,2,pcVar15,&local_358,uVar10);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b0);
          }
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a4 = 5;
          pcVar15 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          local_314 = local_3c4;
          local_318 = local_3c8;
          if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
            local_320 = local_3d0;
          }
          else {
            FUN_1400419b0(&local_320,&local_3d0);
          }
          local_17c = 7;
          local_188[0] = 1;
          FUN_1400462a0(&local_320,local_188);
          if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          dVar11 = local_3c0;
          if ((local_3b4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_3c0);
          }
          dVar12 = local_320;
          if ((local_314 & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_320);
          }
          uVar10 = FUN_140e4a740(uVar7);
          uVar7 = FUN_140ea8b20(&local_3b0,uVar10,(int)dVar12,(longlong)dVar11);
          local_16c = 0;
          local_178 = 0xc000000000000000;
          iVar5 = FUN_140e851f0(uVar7,&local_178,DAT_141955260,0);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_320);
          }
          if (iVar5 != 0) {
            local_380 = 0x4f;
            pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
            local_14c = 0;
            local_158 = &DAT_bff0000000000000;
            local_304 = local_3c4;
            local_308 = local_3c8;
            if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) == 0) {
              local_310 = local_3d0;
            }
            else {
              FUN_1400419b0(&local_310,&local_3d0);
            }
            local_15c = 7;
            local_168[0] = 1;
            FUN_1400462a0(&local_310,local_168);
            if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            dVar11 = local_3c0;
            if ((local_3b4 & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_3c0);
            }
            dVar12 = local_310;
            if ((local_304 & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_310);
            }
            if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
              dVar13 = *pdVar8;
            }
            else {
              dVar13 = (double)FUN_140e4b060(pdVar8);
            }
            FUN_140ea8d00((longlong)dVar13,(int)dVar12,(longlong)dVar11,&local_158);
            if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_310);
            }
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
          }
        }
        local_380 = 0x51;
        if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a0);
        }
        local_3a0 = 0;
        local_398 = 0;
        local_394 = 5;
        local_358 = &local_3d0;
        uStack_36c = local_3b4;
        uStack_370 = local_3b8;
        if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
          local_378 = local_3c0;
        }
        else {
          FUN_1400419b0(&local_378,&local_3c0);
        }
        local_13c = 7;
        local_148[0] = 1;
        FUN_1400460e0(&local_378,local_148);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        local_2a8 = (undefined4)local_378;
        uStack_2a4 = local_378._4_4_;
        uStack_2a0 = uStack_370;
        uStack_29c = uStack_36c;
        if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2a8);
        uVar10 = 0;
        if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_378);
        }
        local_350 = local_218;
        uVar7 = FUN_140e63610(param_1,param_2,&local_3a0,2,pcVar15,&local_358,uVar10);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b0);
          }
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a4 = 5;
          pcVar15 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          local_2f4 = local_3b4;
          local_2f8 = local_3b8;
          if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
            local_300 = local_3c0;
          }
          else {
            FUN_1400419b0(&local_300,&local_3c0);
          }
          local_9c = 7;
          local_a8[0] = 1;
          FUN_1400460e0(&local_300,local_a8);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          dVar11 = local_300;
          if ((local_2f4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_300);
          }
          dVar12 = local_3d0;
          if ((local_3c4 & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_3d0);
          }
          uVar10 = FUN_140e4a740(uVar7);
          uVar7 = FUN_140ea8b20(&local_3b0,uVar10,(longlong)dVar12,(int)dVar11);
          local_11c = 0;
          local_128 = 0xc000000000000000;
          iVar5 = FUN_140e851f0(uVar7,&local_128,DAT_141955260,0);
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_300);
          }
          if (iVar5 != 0) {
            local_380 = 0x52;
            pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
            local_fc = 0;
            local_108 = &DAT_bff0000000000000;
            local_2e4 = local_3b4;
            local_2e8 = local_3b8;
            if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
              local_2f0 = local_3c0;
            }
            else {
              FUN_1400419b0(&local_2f0,&local_3c0);
            }
            local_10c = 7;
            local_118[0] = 1;
            FUN_1400460e0(&local_2f0,local_118);
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            dVar11 = local_2f0;
            if ((local_2e4 & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_2f0);
            }
            dVar12 = local_3d0;
            if ((local_3c4 & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_3d0);
            }
            if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
              dVar13 = *pdVar8;
            }
            else {
              dVar13 = (double)FUN_140e4b060(pdVar8);
            }
            FUN_140ea8d00((longlong)dVar13,(longlong)dVar12,(int)dVar11,&local_108);
            if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f0);
            }
            if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
          }
        }
        local_380 = 0x54;
        if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3a0);
        }
        local_3a0 = 0;
        local_398 = 0;
        local_394 = 5;
        local_358 = &local_3d0;
        uStack_35c = local_3b4;
        uStack_360 = local_3b8;
        if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
          local_368 = local_3c0;
        }
        else {
          FUN_1400419b0(&local_368,&local_3c0);
        }
        local_ec = 7;
        local_f8[0] = 1;
        FUN_1400462a0(&local_368,local_f8);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        local_2a8 = (undefined4)local_368;
        uStack_2a4 = local_368._4_4_;
        uStack_2a0 = uStack_360;
        uStack_29c = uStack_35c;
        if ((1 << ((byte)local_218[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_2a8);
        uVar10 = 0;
        if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_368);
        }
        local_350 = local_218;
        uVar7 = FUN_140e63610(param_1,param_2,&local_3a0,2,pcVar15,&local_358,uVar10);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_3b0);
          }
          local_3b0 = 0;
          local_3a8 = 0;
          local_3a4 = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          local_2d4 = local_3b4;
          local_2d8 = local_3b8;
          if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
            local_2e0 = local_3c0;
          }
          else {
            FUN_1400419b0(&local_2e0,&local_3c0);
          }
          local_dc = 7;
          local_e8[0] = 1;
          FUN_1400462a0(&local_2e0,local_e8);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          dVar11 = local_2e0;
          if ((local_2d4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_2e0);
          }
          dVar12 = local_3d0;
          if ((local_3c4 & 0xffffff) != 0) {
            dVar12 = (double)FUN_140e4b060(&local_3d0);
          }
          uVar10 = FUN_140e4a740(uVar7);
          uVar7 = FUN_140ea8b20(&local_3b0,uVar10,(longlong)dVar12,(int)dVar11);
          local_26c = 0;
          local_278 = (undefined1 *)0xc000000000000000;
          iVar5 = FUN_140e851f0(uVar7,&local_278,DAT_141955260,0);
          if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e0);
          }
          if (iVar5 != 0) {
            local_380 = 0x55;
            pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
            local_28c = 0;
            local_298 = &DAT_bff0000000000000;
            local_2c4 = local_3b4;
            local_2c8 = local_3b8;
            if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) == 0) {
              local_2d0 = local_3c0;
            }
            else {
              FUN_1400419b0(&local_2d0,&local_3c0);
            }
            local_27c = 7;
            local_288[0] = 1;
            FUN_1400462a0(&local_2d0,local_288);
            if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_288);
            }
            dVar11 = local_2d0;
            if ((local_2c4 & 0xffffff) != 0) {
              dVar11 = (double)FUN_140e4b060(&local_2d0);
            }
            dVar12 = local_3d0;
            if ((local_3c4 & 0xffffff) != 0) {
              dVar12 = (double)FUN_140e4b060(&local_3d0);
            }
            if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
              dVar13 = *pdVar8;
            }
            else {
              dVar13 = (double)FUN_140e4b060(pdVar8);
            }
            FUN_140ea8d00((longlong)dVar13,(longlong)dVar12,(int)dVar11,&local_298);
            if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d0);
            }
            if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_298);
            }
          }
        }
      }
      goto LAB_140ce3770;
    }
    uVar10 = SUB84(local_3c0,0);
    uVar14 = (undefined4)((ulonglong)local_3c0 >> 0x20);
  } while( true );
  local_380 = 0x5a;
  if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3c0);
  }
  local_3b4 = 0;
  uVar10 = 0;
  uVar14 = 0;
  local_3c0 = 0.0;
  bVar1 = true;
  do {
    dVar11 = (double)CONCAT44(uVar14,uVar10);
    if (!bVar1) {
      local_380 = 0x5a;
      uVar4 = local_3b4 & 0xffffff;
      if ((local_3b4 & 0xffffff) != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_3c0 = (double)CONCAT44(local_3c0._4_4_,local_3c0._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_3c0 = (double)((longlong)local_3c0 + 1);
          }
          else {
            if (uVar4 == 0xd) goto LAB_140ce4d38;
            FUN_140042910(&DAT_14172c3d8,&local_3c0,&local_3c0);
          }
          goto LAB_140ce4d4b;
        }
        dVar11 = (double)FUN_140e4b060(&local_3c0);
LAB_140ce4d38:
        local_3b4 = 0;
      }
      local_3c0 = dVar11 + 1.0;
    }
LAB_140ce4d4b:
    bVar1 = false;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    uStack_35c = *(uint *)((longlong)pdVar8 + 0xc);
    uStack_360 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) == 0) {
      local_368 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_368,pdVar8);
    }
    local_28c = 7;
    local_298 = (undefined1 *)CONCAT44(local_298._4_4_,1);
    FUN_1400462a0(&local_368,&local_298);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    iVar5 = FUN_140e851f0(&local_3c0,&local_368,DAT_141955260,1);
    if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_368);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c0);
      }
      if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3b0);
      }
      if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3a0);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3d0);
      }
      if ((1 << ((byte)local_3b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3c0);
      }
      _eh_vector_destructor_iterator_(local_228,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_390;
      return param_3;
    }
    local_380 = 0x5c;
    if ((1 << ((byte)local_3c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3d0);
    }
    local_3c4 = 0;
    local_3d0 = 0.0;
    bVar2 = true;
LAB_140ce4e48:
    if (!bVar2) {
      local_380 = 0x5c;
      uVar4 = local_3c4 & 0xffffff;
      if (uVar4 != 0) {
        if (uVar4 != 1) {
          if (uVar4 == 7) {
            local_3d0 = (double)CONCAT44(local_3d0._4_4_,local_3d0._0_4_ + 1);
          }
          else if (uVar4 == 10) {
            local_3d0 = (double)((longlong)local_3d0 + 1);
          }
          else {
            if (uVar4 == 0xd) {
              local_3c4 = 0;
              goto LAB_140ce4e9d;
            }
            FUN_140042910(&DAT_14172c3d8,&local_3d0,&local_3d0);
          }
          goto LAB_140ce4ea8;
        }
        local_3d0 = (double)FUN_140e4b060(&local_3d0);
        local_3c4 = 0;
      }
LAB_140ce4e9d:
      local_3d0 = local_3d0 + 1.0;
    }
LAB_140ce4ea8:
    bVar2 = false;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    uStack_36c = *(uint *)((longlong)pdVar8 + 0xc);
    uStack_370 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) == 0) {
      local_378 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_378,pdVar8);
    }
    local_27c = 7;
    local_288[0] = 1;
    FUN_1400462a0(&local_378,local_288);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_288);
    }
    iVar5 = FUN_140e851f0(&local_3d0,&local_378,DAT_141955260,1);
    if ((1 << ((byte)uStack_36c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_378);
    }
    if (iVar5 != -2 && iVar5 < 0) {
      local_380 = 0x5e;
      if ((1 << ((byte)local_394 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_3a0);
      }
      local_3a0 = 0;
      local_398 = 0;
      local_394 = 5;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
      dVar11 = local_3c0;
      if ((local_3b4 & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_3c0);
      }
      dVar12 = local_3d0;
      if ((local_3c4 & 0xffffff) != 0) {
        dVar12 = (double)FUN_140e4b060(&local_3d0);
      }
      uVar10 = FUN_140e4a740(uVar7);
      uVar7 = FUN_140ea8b20(&local_3a0,uVar10,(longlong)dVar12,(longlong)dVar11);
      local_26c = 0;
      local_278 = &DAT_bff0000000000000;
      iVar5 = FUN_140e851f0(uVar7,&local_278,DAT_141955260,0);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      uVar10 = (undefined4)((ulonglong)pcVar15 >> 0x20);
      if (iVar5 == 0) {
        local_380 = 0x61;
        if ((1 << ((byte)local_3a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_3b0);
        }
        local_3b0 = 0;
        local_3a8 = 0;
        local_3a4 = 5;
        pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
        pdVar9 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9fb8);
        if (pdVar9 != local_228) {
          local_2a8 = *(undefined4 *)pdVar9;
          uStack_2a4 = *(undefined4 *)((longlong)pdVar9 + 4);
          uStack_2a0 = *(undefined4 *)(pdVar9 + 1);
          uStack_29c = *(uint *)((longlong)pdVar9 + 0xc);
          if ((1 << ((byte)local_228[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_228);
          }
          FUN_140041b80(local_228,&local_2a8);
        }
        local_358 = local_228;
        local_350 = &local_3d0;
        local_348 = &local_3c0;
        dVar11 = local_3c0;
        if ((local_3b4 & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_3c0);
        }
        dVar12 = local_3d0;
        if ((local_3c4 & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_3d0);
        }
        if ((*(uint *)((longlong)pdVar8 + 0xc) & 0xffffff) == 0) {
          dVar13 = *pdVar8;
        }
        else {
          dVar13 = (double)FUN_140e4b060(pdVar8);
        }
        pcVar15 = (code *)CONCAT44(uVar10,DAT_1419fd6d8);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_3b0,3,pcVar15,&local_358);
        FUN_140ea8d00((longlong)dVar13,(longlong)dVar12,(longlong)dVar11,uVar7);
      }
      goto LAB_140ce4e48;
    }
    uVar10 = SUB84(local_3c0,0);
    uVar14 = (undefined4)((ulonglong)local_3c0 >> 0x20);
  } while( true );
}


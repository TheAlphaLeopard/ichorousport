// gml_Script_anon_1249_gml_Object_oRogueLevelManager_Other_12 @ 0x140cfd560

undefined8 *
gml_Script_anon_1249_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double **ppdVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  double local_2c0;
  undefined4 local_2b8;
  uint local_2b4;
  double local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  undefined8 local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined4 local_288;
  undefined4 local_284;
  double *local_280;
  double *local_278;
  undefined8 local_270;
  undefined4 local_264;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_240;
  char *local_238;
  undefined4 local_230;
  double local_228;
  undefined4 local_220;
  uint local_21c;
  double local_218;
  undefined4 local_210;
  uint local_20c;
  double local_208;
  undefined4 local_200;
  uint local_1fc;
  double local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  double local_198 [2];
  double local_188 [2];
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
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
  undefined4 local_98 [3];
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  
  uVar14 = 0;
  local_238 = "gml_Script_anon@165@gml_Object_oRogueLevelManager_Other_12";
  local_240 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_240;
  local_230 = 5;
  _eh_vector_constructor_iterator_(local_198,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_2b4 = 0xffffff;
  local_2c0 = 0.0;
  local_264 = 0xffffff;
  local_270 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_294 = 0;
  local_2a0 = 0;
  local_284 = 0;
  local_290 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_230 = 7;
  local_2a4 = 0;
  local_2b0 = 0.0;
  bVar1 = true;
LAB_140cfd6e0:
  if (bVar1) goto LAB_140cfd744;
  local_230 = 7;
  uVar3 = local_2a4 & 0xffffff;
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      local_2b0 = (double)FUN_140e4b060(&local_2b0);
      local_2a4 = 0;
    }
    else {
      if (uVar3 == 7) {
        local_2b0 = (double)CONCAT44(local_2b0._4_4_,local_2b0._0_4_ + 1);
        goto LAB_140cfd744;
      }
      if (uVar3 == 10) {
        local_2b0 = (double)((longlong)local_2b0 + 1);
        goto LAB_140cfd744;
      }
      if (uVar3 != 0xd) {
        FUN_140042910(&DAT_14172c3d8,&local_2b0,&local_2b0);
        goto LAB_140cfd744;
      }
      local_2a4 = 0;
    }
  }
  local_2b0 = local_2b0 + 1.0;
LAB_140cfd744:
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
  iVar4 = FUN_140e851f0(&local_2b0,uVar6,DAT_141955260,1);
  if ((iVar4 == -2) || (-1 < iVar4)) {
    if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_290);
    }
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_260);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c0);
    }
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    _eh_vector_destructor_iterator_(local_198,0x10,2,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_240;
    return param_3;
  }
  local_230 = 9;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2b4 = 0;
  local_2c0 = 0.0;
  bVar1 = true;
  do {
    if (!bVar1) {
      local_230 = 9;
      uVar3 = local_2b4 & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_2c0 = (double)CONCAT44(local_2c0._4_4_,local_2c0._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_2c0 = (double)((longlong)local_2c0 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_2b4 = 0;
              goto LAB_140cfd833;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2c0,&local_2c0);
          }
          goto LAB_140cfd83e;
        }
        local_2c0 = (double)FUN_140e4b060(&local_2c0);
        local_2b4 = 0;
      }
LAB_140cfd833:
      local_2c0 = local_2c0 + 1.0;
    }
LAB_140cfd83e:
    bVar1 = false;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b70);
    iVar4 = FUN_140e851f0(&local_2c0,uVar6,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) break;
    local_230 = 0xb;
    if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a0);
    }
    local_2a0 = 0;
    local_298 = 0;
    local_294 = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
    local_280 = &local_2c0;
    local_278 = &local_2b0;
    ppdVar12 = &local_280;
    uVar6 = FUN_140e63610(param_1,param_2,&local_2a0,2,uVar7,ppdVar12);
    cVar2 = FUN_140e491e0(uVar6);
    if (cVar2 == '\0') {
      local_230 = 0xb;
    }
    else {
      local_230 = 0xd;
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      local_2a0 = 0;
      local_298 = 0;
      local_294 = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
      dVar10 = local_2b0;
      if ((local_2a4 & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2b0);
      }
      dVar11 = local_2c0;
      if ((local_2b4 & 0xffffff) != 0) {
        dVar11 = (double)FUN_140e4b060(&local_2c0);
      }
      uVar5 = FUN_140e4a740(uVar6);
      puVar8 = (undefined8 *)FUN_140ea8b20(&local_2a0,uVar5,(longlong)dVar11,(longlong)dVar10);
      if (puVar8 != &local_270) {
        local_1a8 = *(undefined4 *)puVar8;
        uStack_1a4 = *(undefined4 *)((longlong)puVar8 + 4);
        uStack_1a0 = *(undefined4 *)(puVar8 + 1);
        uStack_19c = *(uint *)((longlong)puVar8 + 0xc);
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        FUN_140041b80(&local_270,&local_1a8);
      }
      local_230 = 0xf;
      bVar9 = false;
      ppdVar12 = (double **)((ulonglong)ppdVar12 & 0xffffffffffffff00);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419ffa38,0x80000000,&local_250,uVar7,ppdVar12);
      cVar2 = FUN_140e491e0(&local_250);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_2a0 = 0;
        local_298 = 0;
        local_294 = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        uStack_15c = local_2b4;
        uStack_160 = local_2b8;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
          local_168 = local_2c0;
        }
        else {
          FUN_1400419b0(&local_168,&local_2c0);
        }
        local_ec = 7;
        local_f8[0] = 1;
        FUN_1400462a0(&local_168,local_f8);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        local_1a8 = (undefined4)local_168;
        uStack_1a4 = local_168._4_4_;
        uStack_1a0 = uStack_160;
        uStack_19c = uStack_15c;
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1a8);
        uVar14 = 0;
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        local_280 = local_198;
        local_278 = &local_2b0;
        ppdVar12 = &local_280;
        uVar6 = FUN_140e63610(param_1,param_2,&local_2a0,2,uVar7,ppdVar12,uVar14);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_290);
          }
          local_290 = 0;
          local_288 = 0;
          local_284 = 5;
          local_21c = local_2b4;
          local_220 = local_2b8;
          if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
            local_228 = local_2c0;
          }
          else {
            FUN_1400419b0(&local_228,&local_2c0);
          }
          local_dc = 7;
          local_e8[0] = 1;
          FUN_1400462a0(&local_228,local_e8);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          dVar10 = local_2b0;
          if ((local_2a4 & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_2b0);
          }
          dVar11 = local_228;
          if ((local_21c & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_228);
          }
          uVar14 = FUN_140e4a740(uVar6);
          uVar6 = FUN_140ea8b20(&local_290,uVar14,(int)dVar11,(longlong)dVar10);
          ppdVar12 = (double **)((ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(uVar6,DAT_1419ffa38,0x80000000,&local_108,uVar7,ppdVar12);
          uVar14 = 0;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          cVar2 = FUN_140e491e0(&local_108);
          bVar9 = cVar2 == '\0';
        }
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0xd;
      if (bVar9) {
        local_1b8 = 0x3ff0000000000000;
      }
      else {
        local_1b8 = 0;
      }
      uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419f9bd8,0x80000000,&local_260,uVar7,uVar13,uVar14);
      FUN_140e87930(&local_260,DAT_1419fe318,0x80000000,&local_1b8);
      local_230 = 0x10;
      bVar9 = false;
      ppdVar12 = (double **)(uVar13 & 0xffffffffffffff00);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419ffa38,0x80000000,&local_250,uVar7,ppdVar12);
      cVar2 = FUN_140e491e0(&local_250);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_2a0 = 0;
        local_298 = 0;
        local_294 = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        uStack_13c = local_2b4;
        uStack_140 = local_2b8;
        if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
          local_148 = local_2c0;
        }
        else {
          FUN_1400419b0(&local_148,&local_2c0);
        }
        local_cc = 7;
        local_d8[0] = 1;
        FUN_1400460e0(&local_148,local_d8);
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        local_1a8 = (undefined4)local_148;
        uStack_1a4 = local_148._4_4_;
        uStack_1a0 = uStack_140;
        uStack_19c = uStack_13c;
        if ((1 << ((byte)local_198[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_1a8);
        uVar14 = 0;
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_280 = local_198;
        local_278 = &local_2b0;
        ppdVar12 = &local_280;
        uVar6 = FUN_140e63610(param_1,param_2,&local_2a0,2,uVar7,ppdVar12);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_290);
          }
          local_290 = 0;
          local_288 = 0;
          local_284 = 5;
          local_20c = local_2b4;
          local_210 = local_2b8;
          if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) == 0) {
            local_218 = local_2c0;
          }
          else {
            FUN_1400419b0(&local_218,&local_2c0);
          }
          local_bc = 7;
          local_c8[0] = 1;
          FUN_1400460e0(&local_218,local_c8);
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          dVar10 = local_2b0;
          if ((local_2a4 & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_2b0);
          }
          dVar11 = local_218;
          if ((local_20c & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_218);
          }
          uVar14 = FUN_140e4a740(uVar6);
          uVar6 = FUN_140ea8b20(&local_290,uVar14,(int)dVar11,(longlong)dVar10);
          ppdVar12 = (double **)((ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(uVar6,DAT_1419ffa38,0x80000000,&local_118,uVar7,ppdVar12);
          uVar14 = 0;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          cVar2 = FUN_140e491e0(&local_118);
          bVar9 = cVar2 == '\0';
        }
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 0xd;
      if (bVar9) {
        local_1c8 = 0x3ff0000000000000;
      }
      else {
        local_1c8 = 0;
      }
      uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419f9bd8,0x80000000,&local_260,uVar7,uVar13,uVar14);
      FUN_140e87930(&local_260,DAT_1419fe1f8,0x80000000,&local_1c8);
      local_230 = 0x11;
      bVar9 = false;
      ppdVar12 = (double **)(uVar13 & 0xffffffffffffff00);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419ffa38,0x80000000,&local_250,uVar7,ppdVar12);
      cVar2 = FUN_140e491e0(&local_250);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_2a0 = 0;
        local_298 = 0;
        local_294 = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        local_280 = &local_2c0;
        uStack_14c = local_2a4;
        uStack_150 = local_2a8;
        if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
          local_158 = local_2b0;
        }
        else {
          FUN_1400419b0(&local_158,&local_2b0);
        }
        local_ac = 7;
        local_b8[0] = 1;
        FUN_1400462a0(&local_158,local_b8);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        local_1a8 = (undefined4)local_158;
        uStack_1a4 = local_158._4_4_;
        uStack_1a0 = uStack_150;
        uStack_19c = uStack_14c;
        if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_1a8);
        uVar14 = 0;
        if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_278 = local_188;
        ppdVar12 = &local_280;
        uVar6 = FUN_140e63610(param_1,param_2,&local_2a0,2,uVar7,ppdVar12);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_290);
          }
          local_290 = 0;
          local_288 = 0;
          local_284 = 5;
          local_1fc = local_2a4;
          local_200 = local_2a8;
          if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
            local_208 = local_2b0;
          }
          else {
            FUN_1400419b0(&local_208,&local_2b0);
          }
          local_9c = 7;
          local_a8[0] = 1;
          FUN_1400462a0(&local_208,local_a8);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          dVar10 = local_208;
          if ((local_1fc & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_208);
          }
          dVar11 = local_2c0;
          if ((local_2b4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_2c0);
          }
          uVar14 = FUN_140e4a740(uVar6);
          uVar6 = FUN_140ea8b20(&local_290,uVar14,(longlong)dVar11,(int)dVar10);
          ppdVar12 = (double **)((ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(uVar6,DAT_1419ffa38,0x80000000,&local_128,uVar7,ppdVar12);
          uVar14 = 0;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          cVar2 = FUN_140e491e0(&local_128);
          bVar9 = cVar2 == '\0';
        }
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0xd;
      if (bVar9) {
        local_1d8 = 0x3ff0000000000000;
      }
      else {
        local_1d8 = 0;
      }
      uVar13 = (ulonglong)ppdVar12 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419f9bd8,0x80000000,&local_260,uVar7,uVar13,uVar14);
      FUN_140e87930(&local_260,DAT_1419fe218,0x80000000,&local_1d8);
      local_230 = 0x12;
      bVar9 = false;
      ppdVar12 = (double **)(uVar13 & 0xffffffffffffff00);
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_270,DAT_1419ffa38,0x80000000,&local_250,uVar7,ppdVar12);
      cVar2 = FUN_140e491e0(&local_250);
      if (cVar2 == '\0') {
        if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a0);
        }
        local_2a0 = 0;
        local_298 = 0;
        local_294 = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b80);
        local_280 = &local_2c0;
        uStack_16c = local_2a4;
        uStack_170 = local_2a8;
        if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
          local_178 = local_2b0;
        }
        else {
          FUN_1400419b0(&local_178,&local_2b0);
        }
        local_8c = 7;
        local_98[0] = 1;
        FUN_1400460e0(&local_178,local_98);
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        local_1a8 = (undefined4)local_178;
        uStack_1a4 = local_178._4_4_;
        uStack_1a0 = uStack_170;
        uStack_19c = uStack_16c;
        if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_1a8);
        uVar14 = 0;
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_278 = local_188;
        ppdVar12 = &local_280;
        uVar6 = FUN_140e63610(param_1,param_2,&local_2a0,2,uVar7,ppdVar12);
        cVar2 = FUN_140e491e0(uVar6);
        if (cVar2 != '\0') {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
          if ((1 << ((byte)local_284 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_290);
          }
          local_290 = 0;
          local_288 = 0;
          local_284 = 5;
          local_1ec = local_2a4;
          local_1f0 = local_2a8;
          if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
            local_1f8 = local_2b0;
          }
          else {
            FUN_1400419b0(&local_1f8,&local_2b0);
          }
          local_7c = 7;
          local_88[0] = 1;
          FUN_1400460e0(&local_1f8,local_88);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          dVar10 = local_1f8;
          if ((local_1ec & 0xffffff) != 0) {
            dVar10 = (double)FUN_140e4b060(&local_1f8);
          }
          dVar11 = local_2c0;
          if ((local_2b4 & 0xffffff) != 0) {
            dVar11 = (double)FUN_140e4b060(&local_2c0);
          }
          uVar14 = FUN_140e4a740(uVar6);
          uVar6 = FUN_140ea8b20(&local_290,uVar14,(longlong)dVar11,(int)dVar10);
          ppdVar12 = (double **)((ulonglong)ppdVar12 & 0xffffffffffffff00);
          uVar7 = uVar7 & 0xffffffffffffff00;
          FUN_140e87440(uVar6,DAT_1419ffa38,0x80000000,&local_138,uVar7,ppdVar12);
          uVar14 = 0;
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          cVar2 = FUN_140e491e0(&local_138);
          bVar9 = cVar2 == '\0';
        }
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1dc = 0xd;
      if (bVar9) {
        local_1e8 = 0x3ff0000000000000;
      }
      else {
        local_1e8 = 0;
      }
      FUN_140e87440(&local_270,DAT_1419f9bd8,0x80000000,&local_260,uVar7 & 0xffffffffffffff00,
                    (ulonglong)ppdVar12 & 0xffffffffffffff00,uVar14);
      FUN_140e87930(&local_260,DAT_1419fe808,0x80000000,&local_1e8);
      local_230 = 0x14;
      if ((1 << ((byte)local_294 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a0);
      }
      local_2a0 = 0;
      local_298 = 0;
      local_294 = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fa878);
      local_280 = &local_2c0;
      local_278 = &local_2b0;
      FUN_140e63610(param_1,param_2,&local_2a0,2,uVar6,&local_280);
    }
  } while( true );
  bVar1 = false;
  goto LAB_140cfd6e0;
}


// gml_Script____struct___434_anon_2509_gml_Object_oEnemyCage_Create_0 @ 0x14092b010

undefined8 *
gml_Script____struct___434_anon_2509_gml_Object_oEnemyCage_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  double dVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffd50;
  undefined8 **ppuVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 local_298;
  undefined4 uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  uint local_278;
  double local_270;
  uint local_264;
  longlong *local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_238;
  uint local_234;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  longlong *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 local_12c;
  undefined4 local_128 [3];
  undefined4 local_11c;
  undefined4 local_118 [3];
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  
  uVar15 = 0;
  local_1f0 = "gml_Script_anon@1882@gml_Object_oEnemyCage_Create_0";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x4e;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_234 = 0xffffff;
  local_240 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  uStack_28c = 0xffffff;
  local_298 = 0.0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_264 = 0xffffff;
  local_270 = 0.0;
  uVar10 = 0xffffff;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x50;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0098);
  local_254 = 6;
  in_stack_fffffffffffffd50 = in_stack_fffffffffffffd50 & 0xffffffffffffff00;
  uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
  local_260 = param_1;
  FUN_140e87440(&local_260,DAT_1419fe0e8,0x80000000,&local_240,uVar13,in_stack_fffffffffffffd50,
                uVar15);
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  local_254 = 6;
  local_260 = param_1;
  FUN_140e87440(&local_260,DAT_141a101f8,0x80000000,&local_250,uVar13 & 0xffffffffffffff00,
                in_stack_fffffffffffffd50 & 0xffffffffffffff00,uVar15);
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  uStack_21c = 0;
  local_228 = 0x4030000000000000;
  FUN_140042560(&local_228,puVar9);
  uStack_27c = local_234;
  uStack_280 = local_238;
  if ((1 << ((byte)local_234 & 0x1f) & 0x46U) == 0) {
    local_288 = local_240;
  }
  else {
    FUN_1400419b0(&local_288,&local_240);
  }
  FUN_1400460e0(&local_288,&local_228);
  local_168 = local_288;
  uStack_160 = uStack_280;
  uStack_15c = uStack_27c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_168);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_a8 = &local_e8;
  uStack_27c = local_244;
  uStack_280 = local_248;
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) == 0) {
    local_288 = local_250;
  }
  else {
    FUN_1400419b0(&local_288,&local_250);
  }
  local_254 = 7;
  local_260 = (longlong *)CONCAT44(local_260._4_4_,2);
  FUN_1400460e0(&local_288,&local_260);
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  local_168 = local_288;
  uStack_160 = uStack_280;
  uStack_15c = uStack_27c;
  if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_168);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_a0 = local_d8;
  ppuVar14 = &local_a8;
  uVar7 = FUN_140e63610(param_1,param_2,&local_208,2,uVar6,ppuVar14);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    local_1e8 = 0x51;
LAB_14092b3d9:
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = &DAT_bff0000000000000;
LAB_14092bc5d:
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_240);
    }
    _eh_vector_destructor_iterator_(local_108,0x10,5,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_1f8;
    return param_3;
  }
  local_1e8 = 0x53;
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  uStack_28c = 0;
  uVar15 = 0;
  uVar16 = 0x40000000;
  local_298 = 2.0;
  bVar2 = true;
LAB_14092b460:
  dVar11 = (double)CONCAT44(uVar16,uVar15);
  if (!bVar2) {
    local_1e8 = 0x53;
    uVar4 = uStack_28c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 == 7) {
          local_298 = (double)CONCAT44(local_298._4_4_,(int)local_298 + 1);
        }
        else if (uVar4 == 10) {
          local_298 = (double)((longlong)local_298 + 1);
        }
        else {
          if (uVar4 == 0xd) goto LAB_14092b4b5;
          FUN_140042910(&DAT_14172c3d8,&local_298,&local_298);
        }
        goto LAB_14092b4c4;
      }
      dVar11 = (double)FUN_140e4b060(&local_298);
LAB_14092b4b5:
      uStack_28c = 0;
    }
    local_298 = dVar11 + 1.0;
  }
LAB_14092b4c4:
  bVar2 = false;
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
  }
  iVar5 = FUN_140e851f0(&local_298,puVar9,DAT_141955260,1);
  if ((iVar5 != -2) && (iVar5 < 1)) {
    local_1e8 = 0x55;
    local_14c = 6;
    ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
    uVar6 = uVar6 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_240,uVar6,ppuVar14);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    uStack_27c = 0;
    local_288 = 0x4030000000000000;
    FUN_140042560(&local_288,&local_298);
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
    local_18c = uStack_27c;
    local_190 = uStack_280;
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) == 0) {
      local_198 = local_288;
    }
    else {
      FUN_1400419b0(&local_198,&local_288);
    }
    FUN_140042560(&local_198,puVar9);
    uStack_19c = local_234;
    uStack_1a0 = local_238;
    if ((1 << ((byte)local_234 & 0x1f) & 0x46U) == 0) {
      local_1a8 = local_240;
    }
    else {
      FUN_1400419b0(&local_1a8,&local_240);
    }
    FUN_1400460e0(&local_1a8,&local_198);
    local_218 = (undefined4)local_1a8;
    uStack_214 = local_1a8._4_4_;
    uStack_210 = uStack_1a0;
    uStack_20c = uStack_19c;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    FUN_140041b80(&local_1c0,&local_218);
    if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_1e8 = 0x57;
    if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_270);
    }
    local_264 = 0;
    local_270 = -2.0;
    bVar1 = true;
    do {
      if (!bVar1) {
        local_1e8 = 0x57;
        uVar4 = local_264 & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_270 = (double)CONCAT44(local_270._4_4_,local_270._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_270 = (double)((longlong)local_270 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_264 = 0;
                goto LAB_14092b74a;
              }
              FUN_140042910(&DAT_14172c3d8,&local_270,&local_270);
            }
            goto LAB_14092b754;
          }
          local_270 = (double)FUN_140e4b060(&local_270);
          local_264 = 0;
        }
LAB_14092b74a:
        local_270 = local_270 + 1.0;
      }
LAB_14092b754:
      bVar1 = false;
      local_13c = 0;
      local_148 = 0x4008000000000000;
      iVar5 = FUN_140e851f0(&local_270,&local_148,DAT_141955260,1);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar5 == -2 || 0 < iVar5) goto LAB_14092bd79;
      local_1e8 = 0x59;
      local_12c = 6;
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_141a101f8,0x80000000,&local_250,uVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_254 = 0;
      local_260 = (longlong *)0x4030000000000000;
      FUN_140042560(&local_260,&local_270);
      uStack_17c = local_244;
      uStack_180 = local_248;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) == 0) {
        local_188 = local_250;
      }
      else {
        FUN_1400419b0(&local_188,&local_250);
      }
      FUN_1400460e0(&local_188,&local_260);
      local_218 = (undefined4)local_188;
      uStack_214 = local_188._4_4_;
      uStack_210 = uStack_180;
      uStack_20c = uStack_17c;
      if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      FUN_140041b80(&local_1d0,&local_218);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_1e8 = 0x5b;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0098);
      uVar15 = local_1c8;
      uVar7 = local_1d0;
      local_b8 = &local_1c0;
      local_278 = local_1c4;
      uStack_16c = local_1c4;
      uStack_170 = local_1c8;
      uVar10 = 1 << ((byte)local_1c4 & 0x1f) & 0x46;
      if (uVar10 == 0) {
        local_178 = local_1d0;
      }
      else {
        FUN_1400419b0(&local_178,&local_1d0);
      }
      local_11c = 7;
      local_128[0] = 2;
      FUN_1400460e0(&local_178,local_128);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      local_218 = (undefined4)local_178;
      uStack_214 = local_178._4_4_;
      uStack_210 = uStack_170;
      uStack_20c = uStack_16c;
      if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_218);
      uVar16 = 0;
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_b0 = local_f8;
      ppuVar14 = &local_b8;
      uVar8 = FUN_140e63610(param_1,param_2,&local_208,2,uVar6,ppuVar14,uVar16);
      cVar3 = FUN_140e491e0(uVar8);
      if (cVar3 != '\0') {
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        uVar16 = (undefined4)(uVar6 >> 0x20);
        local_1e0 = 0;
        local_1d8 = 0;
        local_1d4 = 5;
        local_a8 = &local_1c0;
        uStack_21c = local_278;
        uStack_220 = uVar15;
        if (uVar10 == 0) {
          local_228 = uVar7;
        }
        else {
          FUN_1400419b0(&local_228,&local_1d0);
        }
        local_10c = 7;
        local_118[0] = 8;
        FUN_1400462a0(&local_228,local_118);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        local_218 = (undefined4)local_228;
        uStack_214 = local_228._4_4_;
        uStack_210 = uStack_220;
        uStack_20c = uStack_21c;
        if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_218);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_a0 = local_d8;
        uStack_15c = 0xf;
        local_168 = 0x100000000000149;
        local_218 = 0x149;
        uStack_214 = 0x1000000;
        uStack_210 = uStack_160;
        uStack_20c = 0xf;
        if ((1 << (local_c8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_218);
        local_98 = local_c8;
        ppuVar14 = &local_a8;
        uVar6 = CONCAT44(uVar16,DAT_141a10408);
        uVar7 = FUN_140e634e0(param_1,param_2,&local_1e0,3,uVar6,ppuVar14);
        cVar3 = FUN_140e491e0(uVar7);
        if (cVar3 == '\0') {
          local_1e8 = 0x5c;
          if (&local_298 != param_3) {
            local_218 = (int)local_298;
            uStack_214 = local_298._4_4_;
            uStack_210 = uStack_290;
            uStack_20c = uStack_28c;
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_218);
          }
          uVar10 = local_278;
          goto LAB_14092bc5d;
        }
      }
      uVar10 = local_278;
    } while( true );
  }
  local_1e8 = 0x60;
  goto LAB_14092b3d9;
LAB_14092bd79:
  uVar15 = SUB84(local_298,0);
  uVar16 = (undefined4)((ulonglong)local_298 >> 0x20);
  goto LAB_14092b460;
}


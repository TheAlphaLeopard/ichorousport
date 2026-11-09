// gml_Script_anon_16192_gml_Object_oEntity_Create_0 @ 0x140abc600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16192_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined4 **ppuVar15;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  double local_228;
  uint local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined4 local_188 [4];
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 *local_148;
  double *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined4 *local_128;
  undefined8 local_120;
  undefined4 local_114;
  double local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
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
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  
  local_1f0 = "gml_Script_anon@15462@gml_Object_oEntity_Create_0";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x2d2;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_1c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_21c = 0xffffff;
  local_228 = 0.0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_104 = 0xffffff;
  local_110 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_78 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  puVar6 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f28e8);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_24c = 0;
  local_258 = 0;
  local_1fc = 0;
  local_208 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0x2d3;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
  if (puVar7 != local_1c8) {
    local_1d8 = *puVar7;
    uStack_1d4 = puVar7[1];
    uStack_1d0 = puVar7[2];
    uStack_1cc = puVar7[3];
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_1d8);
  }
  local_148 = local_1c8;
  uVar11 = CONCAT44(uVar5,DAT_1419f5e98);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_258,1,uVar11,&local_148);
  uVar5 = (undefined4)((ulonglong)uVar11 >> 0x20);
  uStack_20c = 0;
  local_218 = 0;
  iVar3 = FUN_140e851f0(uVar8,&local_218,DAT_141955260,0);
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if (iVar3 == 0) {
    local_1e8 = 0x2d4;
  }
  else {
    local_1e8 = 0x2d6;
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = 0;
    local_250 = 0;
    local_24c = 5;
    if (puVar7 != local_1c8) {
      local_1d8 = *puVar7;
      uStack_1d4 = puVar7[1];
      uStack_1d0 = puVar7[2];
      uStack_1cc = puVar7[3];
      if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_1d8);
    }
    local_148 = local_1c8;
    puVar10 = (undefined8 *)CONCAT44(uVar5,DAT_1419f5e98);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,1,puVar10,&local_148);
    uStack_20c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_210 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_218 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_218,puVar9);
    }
    local_16c = 7;
    local_178 = CONCAT44(local_178._4_4_,1);
    FUN_1400462a0(&local_218,&local_178);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_1d8 = (undefined4)local_218;
    uStack_1d4 = local_218._4_4_;
    uStack_1d0 = uStack_210;
    uStack_1cc = uStack_20c;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_1d8);
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    bVar1 = true;
LAB_140abc9e0:
    uVar5 = (undefined4)((ulonglong)puVar10 >> 0x20);
    if (!bVar1) {
      local_1e8 = 0x2d6;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
      uVar4 = local_21c & 0xffffff;
      if (uVar4 == 0) {
LAB_140abca36:
        local_228 = local_228 + -1.0;
      }
      else if (uVar4 == 1) {
        local_228 = (double)FUN_140e4b060(&local_228);
        local_228 = local_228 - 1.0;
        local_21c = 0;
      }
      else if (uVar4 == 7) {
        local_228 = (double)CONCAT44(local_228._4_4_,local_228._0_4_ + -1);
      }
      else if (uVar4 == 10) {
        local_228 = (double)((longlong)local_228 + -1);
      }
      else {
        if (uVar4 == 0xd) {
          local_21c = 0;
          goto LAB_140abca36;
        }
        FUN_140042910(&DAT_14172c450,&local_228,&local_228);
      }
    }
    bVar1 = false;
    local_16c = 0;
    local_178 = 0;
    uVar4 = FUN_140e851f0(&local_228,&local_178,DAT_141955260,1);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (uVar4 < 0x80000000) {
      local_1e8 = 0x2d7;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
      if (puVar7 != local_1c8) {
        local_238 = *puVar7;
        uStack_234 = puVar7[1];
        uStack_230 = puVar7[2];
        uStack_22c = puVar7[3];
        if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_238);
      }
      local_148 = local_1c8;
      local_140 = &local_228;
      ppuVar15 = &local_148;
      uVar14 = CONCAT44(uVar5,DAT_1419f5a78);
      puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,2,uVar14,ppuVar15);
      if (puVar10 != &local_248) {
        local_238 = *(undefined4 *)puVar10;
        uStack_234 = *(undefined4 *)((longlong)puVar10 + 4);
        uStack_230 = *(undefined4 *)(puVar10 + 1);
        uStack_22c = *(undefined4 *)((longlong)puVar10 + 0xc);
        if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140041b80(&local_248,&local_238);
      }
      local_1e8 = 0x2d9;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      FUN_140e87440(&local_248,DAT_1419ff398,0x80000000,&local_98,uVar14 & 0xffffffffffffff00,
                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
      switch(local_23c) {
      default:
switchD_140abcc1b_caseD_1:
        uVar8 = 0;
        break;
      case 6:
        uVar8 = local_248;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_248 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140abcc1b_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar5 = FUN_140e4a8b0(&local_248);
        uVar8 = FUN_140e87250(uVar5);
      }
      uVar14 = 0;
      puVar10 = &local_98;
      FUN_140e63610(uVar8,param_2,&local_258,0,puVar10,0);
      local_1e8 = 0x2db;
      ppuVar15 = (undefined4 **)(uVar14 & 0xffffffffffffff00);
      uVar14 = (ulonglong)puVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_248,DAT_1419f5fc8,0x80000000,&local_100,uVar14,ppuVar15);
      local_7c = 0;
      local_88 = 0;
      iVar3 = FUN_140e851f0(&local_100,&local_88,DAT_141955260,1);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      if (0 < iVar3) {
        local_1e8 = 0x2dc;
        uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419f5838,0x80000000,&local_158,uVar14,uVar12);
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419f5fc8,0x80000000,&local_100,uVar14,uVar12);
        uStack_20c = local_14c;
        uStack_210 = local_150;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
          local_218 = local_158;
        }
        else {
          FUN_1400419b0(&local_218,&local_158);
        }
        FUN_140046500(&local_218,&local_100);
        local_238 = (undefined4)local_218;
        uStack_234 = local_218._4_4_;
        uStack_230 = uStack_210;
        uStack_22c = uStack_20c;
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_238);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_1e8 = 0x2dd;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        uVar14 = uVar14 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419ff2a8,0x80000000,&local_a8,uVar14,
                      uVar12 & 0xffffffffffffff00);
        uVar5 = (undefined4)(uVar14 >> 0x20);
        local_238 = (undefined4)local_a8;
        uStack_234 = local_a8._4_4_;
        uStack_230 = uStack_a0;
        uStack_22c = uStack_9c;
        if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1c8);
        }
        FUN_140041b80(local_1c8,&local_238);
        local_148 = local_1c8;
        local_140 = &local_110;
        local_238 = _DAT_1419eb350;
        uStack_234 = uRam00000001419eb354;
        uStack_230 = uRam00000001419eb358;
        uStack_22c = uRam00000001419eb35c;
        if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_238);
        local_138 = local_1a8;
        ppuVar15 = &local_148;
        uVar14 = CONCAT44(uVar5,DAT_141a00c58);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_258,3,uVar14,ppuVar15);
        if (puVar10 != &local_168) {
          local_238 = *(undefined4 *)puVar10;
          uStack_234 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_230 = *(undefined4 *)(puVar10 + 1);
          uStack_22c = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_238);
        }
        FUN_140e87930(&local_248,DAT_1419ff2a8,0x80000000,&local_168);
      }
      local_1e8 = 0x2e0;
      uVar12 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
      puVar10 = (undefined8 *)(uVar14 & 0xffffffffffffff00);
      FUN_140e87440(&local_248,DAT_1419ff278,0x80000000,&local_120,puVar10,uVar12);
      iVar3 = FUN_140e851f0(&local_120,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        FUN_140e87440(&local_248,DAT_1419ff278,0x80000000,&local_120,
                      (ulonglong)puVar10 & 0xffffffffffffff00,uVar12 & 0xffffffffffffff00);
        switch(local_23c) {
        default:
switchD_140abd003_caseD_1:
          uVar8 = 0;
          break;
        case 6:
          uVar8 = local_248;
          break;
        case 0xf:
          iVar3 = (int)((ulonglong)local_248 >> 0x20);
          if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140abd003_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar5 = FUN_140e4a8b0(&local_248);
          uVar8 = FUN_140e87250(uVar5);
        }
        uVar14 = 0;
        puVar10 = &local_120;
        uVar8 = FUN_140e63610(uVar8,param_2,&local_258,0,puVar10,0);
        cVar2 = FUN_140e491e0(uVar8);
        if (cVar2 != '\0') {
          local_1e8 = 0x2e1;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          FUN_140e87440(&local_248,DAT_1419ff2c8,0x80000000,&local_b8,
                        (ulonglong)puVar10 & 0xffffffffffffff00,uVar14 & 0xffffffffffffff00);
          switch(local_23c) {
          default:
switchD_140abd0d7_caseD_1:
            uVar8 = 0;
            break;
          case 6:
            uVar8 = local_248;
            break;
          case 0xf:
            iVar3 = (int)((ulonglong)local_248 >> 0x20);
            if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_140abd0d7_caseD_1;
          case 0:
          case 7:
          case 10:
          case 0xd:
            uVar5 = FUN_140e4a8b0(&local_248);
            uVar8 = FUN_140e87250(uVar5);
          }
          uVar14 = 0;
          puVar10 = &local_b8;
          FUN_140e63610(uVar8,param_2,&local_208,0,puVar10,0);
          local_1e8 = 0x2e2;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_208);
          }
          local_208 = 0;
          local_200 = 0;
          local_1fc = 5;
          uVar14 = uVar14 & 0xffffffffffffff00;
          uVar12 = (ulonglong)puVar10 & 0xffffffffffffff00;
          FUN_140e87440(local_78,DAT_1419ef3a8,0x80000000,&local_c8,uVar12,uVar14);
          uVar14 = uVar14 & 0xffffffffffffff00;
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_248,DAT_141a05b88,0x80000000,&local_d8,uVar12,uVar14);
          uVar12 = uVar12 & 0xffffffffffffff00;
          FUN_140e87440(&local_248,DAT_141a1f440,0x80000000,&local_e8,uVar12,
                        uVar14 & 0xffffffffffffff00);
          uVar5 = (undefined4)(uVar12 >> 0x20);
          FUN_140e609c0(DAT_141a729d8);
          FUN_140e645a0(&local_1d8,gml_Script____struct___566_anon_16192_gml_Object_oEntity_Create_0
                        ,0);
          if (&local_1d8 != puVar6) {
            local_238 = local_1d8;
            uStack_234 = uStack_1d4;
            uStack_230 = uStack_1d0;
            uStack_22c = uStack_1cc;
            if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            FUN_140041b80(puVar6,&local_238);
          }
          FUN_140e60910(1);
          if (puVar6 != local_1c8) {
            local_238 = *puVar6;
            uStack_234 = puVar6[1];
            uStack_230 = puVar6[2];
            uStack_22c = puVar6[3];
            if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_238);
          }
          if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_148 = local_1c8;
          local_238 = (undefined4)local_d8;
          uStack_234 = local_d8._4_4_;
          uStack_230 = uStack_d0;
          uStack_22c = uStack_cc;
          if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_238);
          local_140 = (double *)local_1b8;
          local_238 = (undefined4)local_e8;
          uStack_234 = local_e8._4_4_;
          uStack_230 = uStack_e0;
          uStack_22c = uStack_dc;
          if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_238);
          local_138 = local_1a8;
          local_238 = (undefined4)local_c8;
          uStack_234 = local_c8._4_4_;
          uStack_230 = uStack_c0;
          uStack_22c = uStack_bc;
          if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_238);
          local_130 = local_198;
          puVar7 = (undefined4 *)
                   FUN_140e634e0(param_1,param_2,&local_208,3,CONCAT44(uVar5,DAT_1419fd6d8),
                                 &local_148);
          if (puVar7 != local_188) {
            local_238 = *puVar7;
            uStack_234 = puVar7[1];
            uStack_230 = puVar7[2];
            uStack_22c = puVar7[3];
            if ((1 << ((byte)local_188[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_188);
            }
            FUN_140041b80(local_188,&local_238);
          }
          ppuVar13 = &local_130;
          local_128 = local_188;
          gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                    (param_1,param_2,&local_258,2,ppuVar13);
          uVar5 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
          local_1e8 = 0x2e7;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          puVar7 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5b68);
          if (puVar7 != local_1c8) {
            local_238 = *puVar7;
            uStack_234 = puVar7[1];
            uStack_230 = puVar7[2];
            uStack_22c = puVar7[3];
            if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1c8);
            }
            FUN_140041b80(local_1c8,&local_238);
          }
          local_148 = local_1c8;
          local_140 = &local_228;
          puVar10 = (undefined8 *)CONCAT44(uVar5,DAT_1419f5938);
          FUN_140e634e0(param_1,param_2,&local_258,2,puVar10,&local_148);
        }
      }
      goto LAB_140abc9e0;
    }
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}


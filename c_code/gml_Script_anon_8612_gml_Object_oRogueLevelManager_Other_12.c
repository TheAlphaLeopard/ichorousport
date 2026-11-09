// gml_Script_anon_8612_gml_Object_oRogueLevelManager_Other_12 @ 0x140d05770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8612_gml_Object_oRogueLevelManager_Other_12
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined1 **ppuVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  double local_2e8;
  uint local_2dc;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined1 *local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  undefined1 *local_2b8;
  undefined4 local_2b0;
  uint local_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  uint uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  double *local_238;
  undefined1 **local_230;
  undefined1 **local_228;
  undefined1 *local_220;
  double local_218;
  undefined4 local_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  byte local_18c;
  undefined1 *local_188 [2];
  undefined1 *local_178 [2];
  undefined1 local_168 [16];
  undefined1 *local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  double local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8 [3];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88 [3];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_2a0 = "gml_Script_anon@7131@gml_Object_oRogueLevelManager_Other_12";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x101;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_2ac = 0xffffff;
  local_2b8 = (undefined1 *)0x0;
  local_2bc = 0xffffff;
  local_2c8 = (undefined1 *)0x0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_14c = 0xffffff;
  local_158 = (undefined1 *)0x0;
  local_2cc = 0;
  local_2d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0x103;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    ppuVar4 = (undefined1 **)&DAT_1419df7b0;
  }
  else {
    ppuVar4 = (undefined1 **)*param_5;
    if (ppuVar4 == local_188) goto LAB_140d05937;
  }
  local_208 = *ppuVar4;
  uStack_200 = *(undefined4 *)(ppuVar4 + 1);
  uStack_1fc = *(uint *)((longlong)ppuVar4 + 0xc);
  if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_208);
LAB_140d05937:
  local_230 = local_188;
  uVar6 = CONCAT44(uVar10,DAT_1419f70c8);
  pdVar5 = (double *)FUN_140e634e0(param_1,param_2,&local_2d8,1,uVar6,&local_230);
  if (pdVar5 != &local_218) {
    local_208 = (undefined1 *)*pdVar5;
    uStack_200 = *(undefined4 *)(pdVar5 + 1);
    uStack_1fc = *(uint *)((longlong)pdVar5 + 0xc);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_208);
  }
  local_298 = 0x104;
  uStack_27c = 0;
  local_288 = &DAT_bff0000000000000;
  iVar3 = FUN_140e851f0(&local_218,&local_288,DAT_141955260,0);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar3 == 0) {
    local_298 = 0x105;
    if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2d8 = 0;
    local_2d0 = 0;
    local_2cc = 5;
    uStack_27c = DAT_141ddb184;
    uStack_280 = DAT_141ddb180;
    if ((1 << ((byte)DAT_141ddb184 & 0x1f) & 0x46U) == 0) {
      local_288 = DAT_141ddb178;
    }
    else {
      FUN_1400419b0(&local_288,&DAT_141ddb178);
    }
    uStack_24c = DAT_141ddb0c4;
    uStack_250 = DAT_141ddb0c0;
    if ((1 << ((byte)DAT_141ddb0c4 & 0x1f) & 0x46U) == 0) {
      local_258 = DAT_141ddb0b8;
    }
    else {
      FUN_1400419b0(&local_258,&DAT_141ddb0b8);
    }
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    uVar9 = 1 << ((byte)uStack_24c & 0x1f) & 0x46;
    uStack_270 = uStack_250;
    uStack_26c = uStack_24c;
    if (uVar9 == 0) {
      local_278 = local_258;
    }
    else {
      FUN_1400419b0(&local_278,&local_258);
    }
    FUN_1400460e0(&local_278,puVar8);
    uStack_23c = uStack_26c;
    uStack_240 = uStack_270;
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) == 0) {
      local_248 = local_278;
    }
    else {
      FUN_1400419b0(&local_248,&local_278);
    }
    FUN_1400460e0(&local_248,&local_288);
    local_208 = local_248;
    uStack_200 = uStack_240;
    uStack_1fc = uStack_23c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_208);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    if (uVar9 != 0) {
      FUN_140041a50(&local_258);
    }
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_238 = &local_198;
    FUN_140e634e0(param_1,param_2,&local_2d8,1,CONCAT44(uVar10,DAT_141a03478),&local_238);
    local_298 = 0x106;
  }
  else {
    local_298 = 0x109;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1cc = 0;
    local_1d8 = 0x4030000000000000;
    local_298 = 0x10a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1dc = 0;
    local_1e8 = 0x4030000000000000;
    local_298 = 0x10b;
    FUN_140e85f80(param_1,DAT_141a00d18,0x80000000,&local_108);
    pdVar5 = (double *)FUN_140046e40(&local_1f8,&local_108,&local_1d8);
    if (pdVar5 != &local_1a8) {
      local_208 = (undefined1 *)*pdVar5;
      uStack_200 = *(undefined4 *)(pdVar5 + 1);
      uStack_1fc = *(uint *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_208);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_298 = 0x10c;
    FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_118);
    pdVar5 = (double *)FUN_140046e40(&local_1f8,&local_118,&local_1e8);
    if (pdVar5 != &local_1b8) {
      local_208 = (undefined1 *)*pdVar5;
      uStack_200 = *(undefined4 *)(pdVar5 + 1);
      uStack_1fc = *(uint *)((longlong)pdVar5 + 0xc);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_208);
    }
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_298 = 0x10e;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2ac = 0;
    local_2b8 = (undefined1 *)0x0;
    bVar1 = true;
LAB_140d05f65:
    if (!bVar1) {
      local_298 = 0x10e;
      uVar9 = local_2ac & 0xffffff;
      if (uVar9 != 0) {
        if (uVar9 != 1) {
          if (uVar9 == 7) {
            local_2b8 = (undefined1 *)CONCAT44(local_2b8._4_4_,(int)local_2b8 + 1);
          }
          else if (uVar9 == 10) {
            local_2b8 = local_2b8 + 1;
          }
          else {
            if (uVar9 == 0xd) {
              local_2ac = 0;
              goto LAB_140d05fbe;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2b8,&local_2b8);
          }
          goto LAB_140d05fc8;
        }
        local_2b8 = (undefined1 *)FUN_140e4b060(&local_2b8);
        local_2ac = 0;
      }
LAB_140d05fbe:
      local_2b8 = (undefined1 *)((double)local_2b8 + 1.0);
    }
LAB_140d05fc8:
    bVar1 = false;
    iVar3 = FUN_140e851f0(&local_2b8,&local_1b8,DAT_141955260,1);
    if ((iVar3 != -2) && (iVar3 < 0)) {
      local_298 = 0x110;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2bc = 0;
      local_2c8 = (undefined1 *)0x0;
      bVar2 = true;
      do {
        if (!bVar2) {
          local_298 = 0x110;
          uVar9 = local_2bc & 0xffffff;
          if (uVar9 != 0) {
            if (uVar9 != 1) {
              if (uVar9 == 7) {
                local_2c8 = (undefined1 *)CONCAT44(local_2c8._4_4_,(int)local_2c8 + 1);
              }
              else if (uVar9 == 10) {
                local_2c8 = local_2c8 + 1;
              }
              else {
                if (uVar9 == 0xd) {
                  local_2bc = 0;
                  goto LAB_140d060b3;
                }
                FUN_140042910(&DAT_14172c3d8,&local_2c8,&local_2c8);
              }
              goto LAB_140d060bd;
            }
            local_2c8 = (undefined1 *)FUN_140e4b060(&local_2c8);
            local_2bc = 0;
          }
LAB_140d060b3:
          local_2c8 = (undefined1 *)((double)local_2c8 + 1.0);
        }
LAB_140d060bd:
        bVar2 = false;
        iVar3 = FUN_140e851f0(&local_2c8,&local_1a8,DAT_141955260,1);
        uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((iVar3 == -2) || (-1 < iVar3)) goto LAB_140d05f65;
        local_298 = 0x112;
        if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
        local_2d8 = 0;
        local_2d0 = 0;
        local_2cc = 5;
        local_230 = &local_2c8;
        local_228 = &local_2b8;
        uVar6 = CONCAT44(uVar10,DAT_141a036b8);
        local_238 = &local_218;
        puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2d8,3,uVar6,&local_238);
        if (puVar8 != &local_1c8) {
          local_268 = *(undefined4 *)puVar8;
          uStack_264 = *(undefined4 *)((longlong)puVar8 + 4);
          uStack_260 = *(undefined4 *)(puVar8 + 1);
          uStack_25c = *(uint *)((longlong)puVar8 + 0xc);
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_268);
        }
        local_298 = 0x113;
        local_ec = 0;
        local_f8 = 0;
        iVar3 = FUN_140e851f0(&local_1c8,&local_f8,DAT_141955260,0);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar3 != 0) {
          local_298 = 0x115;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2dc = 0;
          local_2e8 = 0.0;
          local_298 = 0x117;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uStack_23c = local_2bc;
          uStack_240 = local_2c0;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
            local_248 = local_2c8;
            local_238 = &local_218;
          }
          else {
            local_238 = &local_218;
            FUN_1400419b0(&local_248,&local_2c8);
          }
          local_dc = 7;
          local_e8[0] = 1;
          FUN_1400462a0(&local_248,local_e8);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          local_268 = (undefined4)local_248;
          uStack_264 = local_248._4_4_;
          uStack_260 = uStack_240;
          uStack_25c = uStack_23c;
          if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_268);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_230 = local_188;
          local_228 = &local_2b8;
          uVar7 = CONCAT44(uVar10,DAT_141a036b8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_2d8,3,uVar7,&local_238);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_cc = 0;
          local_d8 = 0;
          iVar3 = FUN_140e851f0(uVar6,&local_d8,DAT_141955260,0);
          if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d8);
          }
          if (iVar3 != 0) {
            local_298 = 0x117;
            uVar9 = local_2dc & 0xffffff;
            if (uVar9 != 0) {
              if (uVar9 != 1) {
                if (uVar9 == 7) {
                  local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
                }
                else if (uVar9 == 10) {
                  local_2e8 = (double)((longlong)local_2e8 + 1);
                }
                else {
                  if (uVar9 == 0xd) {
                    local_2dc = 0;
                    goto LAB_140d06435;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
                }
                goto LAB_140d0643f;
              }
              local_2e8 = (double)FUN_140e4b060(&local_2e8);
              local_2dc = 0;
            }
LAB_140d06435:
            local_2e8 = local_2e8 + 1.0;
          }
LAB_140d0643f:
          local_298 = 0x118;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          uStack_24c = local_2bc;
          uStack_250 = local_2c0;
          if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
            local_258 = local_2c8;
            local_238 = &local_218;
          }
          else {
            local_238 = &local_218;
            FUN_1400419b0(&local_258,&local_2c8);
          }
          local_bc = 7;
          local_c8[0] = 1;
          FUN_1400460e0(&local_258,local_c8);
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          local_268 = (undefined4)local_258;
          uStack_264 = local_258._4_4_;
          uStack_260 = uStack_250;
          uStack_25c = uStack_24c;
          if ((1 << ((byte)local_188[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_268);
          if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          local_230 = local_188;
          local_228 = &local_2b8;
          uVar7 = CONCAT44(uVar10,DAT_141a036b8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_2d8,3,uVar7,&local_238);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_ac = 0;
          local_b8 = 0;
          iVar3 = FUN_140e851f0(uVar6,&local_b8,DAT_141955260,0);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          if (iVar3 != 0) {
            local_298 = 0x118;
            uVar9 = local_2dc & 0xffffff;
            if (uVar9 != 0) {
              if (uVar9 != 1) {
                if (uVar9 == 7) {
                  local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
                }
                else if (uVar9 == 10) {
                  local_2e8 = (double)((longlong)local_2e8 + 1);
                }
                else {
                  if (uVar9 == 0xd) {
                    local_2dc = 0;
                    goto LAB_140d06663;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
                }
                goto LAB_140d0666d;
              }
              local_2e8 = (double)FUN_140e4b060(&local_2e8);
              local_2dc = 0;
            }
LAB_140d06663:
            local_2e8 = local_2e8 + 1.0;
          }
LAB_140d0666d:
          local_298 = 0x119;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_230 = &local_2c8;
          uStack_26c = local_2ac;
          uStack_270 = local_2b0;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
            local_278 = local_2b8;
            local_238 = &local_218;
          }
          else {
            local_238 = &local_218;
            FUN_1400419b0(&local_278,&local_2b8);
          }
          local_9c = 7;
          local_a8[0] = 1;
          FUN_1400462a0(&local_278,local_a8);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          local_268 = (undefined4)local_278;
          uStack_264 = local_278._4_4_;
          uStack_260 = uStack_270;
          uStack_25c = uStack_26c;
          if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_268);
          if ((1 << ((byte)uStack_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          local_228 = local_178;
          uVar7 = CONCAT44(uVar10,DAT_141a036b8);
          uVar6 = FUN_140e634e0(param_1,param_2,&local_2d8,3,uVar7,&local_238);
          uVar10 = (undefined4)((ulonglong)uVar7 >> 0x20);
          local_8c = 0;
          local_98 = 0;
          iVar3 = FUN_140e851f0(uVar6,&local_98,DAT_141955260,0);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          if (iVar3 != 0) {
            local_298 = 0x119;
            uVar9 = local_2dc & 0xffffff;
            if (uVar9 != 0) {
              if (uVar9 != 1) {
                if (uVar9 == 7) {
                  local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
                }
                else if (uVar9 == 10) {
                  local_2e8 = (double)((longlong)local_2e8 + 1);
                }
                else {
                  if (uVar9 == 0xd) {
                    local_2dc = 0;
                    goto LAB_140d06891;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
                }
                goto LAB_140d0689b;
              }
              local_2e8 = (double)FUN_140e4b060(&local_2e8);
              local_2dc = 0;
            }
LAB_140d06891:
            local_2e8 = local_2e8 + 1.0;
          }
LAB_140d0689b:
          local_298 = 0x11a;
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          local_2d8 = 0;
          local_2d0 = 0;
          local_2cc = 5;
          local_230 = &local_2c8;
          uStack_12c = local_2ac;
          uStack_130 = local_2b0;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
            local_138 = local_2b8;
            local_238 = &local_218;
          }
          else {
            local_238 = &local_218;
            FUN_1400419b0(&local_138,&local_2b8);
          }
          local_7c = 7;
          local_88[0] = 1;
          FUN_1400460e0(&local_138,local_88);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_88);
          }
          local_268 = (undefined4)local_138;
          uStack_264 = local_138._4_4_;
          uStack_260 = uStack_130;
          uStack_25c = uStack_12c;
          if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_178);
          }
          FUN_140041b80(local_178,&local_268);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_228 = local_178;
          uVar6 = CONCAT44(uVar10,DAT_141a036b8);
          uVar7 = FUN_140e634e0(param_1,param_2,&local_2d8,3,uVar6,&local_238);
          local_6c = 0;
          local_78 = 0;
          iVar3 = FUN_140e851f0(uVar7,&local_78,DAT_141955260,0);
          if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_78);
          }
          if (iVar3 != 0) {
            local_298 = 0x11a;
            uVar9 = local_2dc & 0xffffff;
            if (uVar9 != 0) {
              if (uVar9 != 1) {
                if (uVar9 == 7) {
                  local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
                }
                else if (uVar9 == 10) {
                  local_2e8 = (double)((longlong)local_2e8 + 1);
                }
                else {
                  if (uVar9 == 0xd) {
                    local_2dc = 0;
                    goto LAB_140d06ad7;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
                }
                goto LAB_140d06ae1;
              }
              local_2e8 = (double)FUN_140e4b060(&local_2e8);
              local_2dc = 0;
            }
LAB_140d06ad7:
            local_2e8 = local_2e8 + 1.0;
          }
LAB_140d06ae1:
          local_298 = 0x11c;
          local_1ec = 0;
          local_1f8 = 0x4008000000000000;
          iVar3 = FUN_140e851f0(&local_2e8,&local_1f8,DAT_141955260,1);
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f8);
          }
          uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if (iVar3 != -2 && iVar3 < 1) {
            local_298 = 0x11e;
            uStack_13c = local_2bc;
            uStack_140 = local_2c0;
            if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
              local_148 = local_2c8;
            }
            else {
              FUN_1400419b0(&local_148,&local_2c8);
            }
            FUN_140042560(&local_148,&local_1d8);
            local_268 = (undefined4)local_148;
            uStack_264 = local_148._4_4_;
            uStack_260 = uStack_140;
            uStack_25c = uStack_13c;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            FUN_140041b80(&local_128,&local_268);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            local_298 = 0x11f;
            uStack_27c = local_2ac;
            uStack_280 = local_2b0;
            if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
              local_288 = local_2b8;
            }
            else {
              FUN_1400419b0(&local_288,&local_2b8);
            }
            FUN_140042560(&local_288,&local_1e8);
            local_268 = (undefined4)local_288;
            uStack_264 = local_288._4_4_;
            uStack_260 = uStack_280;
            uStack_25c = uStack_27c;
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_268);
            if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_288);
            }
            local_298 = 0x120;
            if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            local_2d8 = 0;
            local_2d0 = 0;
            local_2cc = 5;
            local_238 = &local_128;
            local_230 = &local_158;
            local_268 = _DAT_141ddafb8;
            uStack_264 = uRam0000000141ddafbc;
            uStack_260 = uRam0000000141ddafc0;
            uStack_25c = DAT_141ddafc4;
            if ((1 << ((byte)local_178[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_268);
            local_228 = local_178;
            uStack_1fc = 0xf;
            local_208 = (undefined1 *)0x10000000000014a;
            local_268 = 0x14a;
            uStack_264 = 0x1000000;
            uStack_260 = uStack_200;
            uStack_25c = 0xf;
            if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            FUN_140041b80(local_168,&local_268);
            local_220 = local_168;
            uVar6 = CONCAT44(uVar10,DAT_141a0a7c8);
            FUN_140e634e0(param_1,param_2,&local_2d8,4,uVar6,&local_238);
          }
        }
      } while( true );
    }
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return param_3;
}


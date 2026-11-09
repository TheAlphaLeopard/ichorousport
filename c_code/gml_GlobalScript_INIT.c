// gml_GlobalScript_INIT @ 0x1402d3450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_GlobalScript_INIT(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  double *pdVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  double dVar16;
  undefined4 uVar18;
  ulonglong uVar17;
  double **ppdVar19;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  double local_288;
  undefined4 local_27c;
  double local_278;
  byte local_26c;
  undefined8 local_268;
  byte local_25c;
  undefined8 local_258 [2];
  undefined8 local_248 [2];
  undefined4 local_238 [3];
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined4 local_208;
  double local_200;
  uint local_1f4;
  double local_1f0;
  uint local_1e4;
  undefined1 *local_1e0;
  undefined4 local_1d4;
  double *local_1c8;
  double *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined4 *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
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
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  ulonglong local_c8;
  undefined4 local_bc;
  ulonglong local_b8;
  uint local_ac;
  ulonglong local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  ulonglong local_88;
  undefined4 local_7c;
  
  local_208 = 0;
  local_2a0 = "gml_Script___Render@anon@126071@ImGui@ImGui";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0xfa4;
  uVar18 = 1;
  _eh_vector_constructor_iterator_(&local_288,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = (undefined1 *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_2ec = 0;
  local_2f8 = 0;
  local_2ac = 0;
  local_2b8 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_298 = 0xfa5;
  uVar8 = CONCAT44(uVar18,DAT_141a59730);
  FUN_140e634e0(param_1,param_2,&local_2f8,0,uVar8,0);
  uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_298 = 0xfa7;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
  if (pdVar7 != &local_288) {
    local_2d8 = *pdVar7;
    uStack_2d0 = *(undefined4 *)(pdVar7 + 1);
    uStack_2cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  local_1c8 = &local_288;
  local_2d8 = (double)CONCAT44(uRam0000000141dc63c4,_DAT_141dc63c0);
  uStack_2d0 = uRam0000000141dc63c8;
  uStack_2cc = uRam0000000141dc63cc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2d8);
  local_1c0 = &local_278;
  local_2d8 = (double)CONCAT44(uRam0000000141dc63c4,_DAT_141dc63c0);
  uStack_2d0 = uRam0000000141dc63c8;
  uStack_2cc = uRam0000000141dc63cc;
  if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_2d8);
  local_1b8 = &local_268;
  uVar8 = CONCAT44(uVar18,DAT_141a05a38);
  FUN_140e634e0(param_1,param_2,&local_2f8,3,uVar8,&local_1c8);
  uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_298 = 0xfa8;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  if (pdVar7 != &local_288) {
    local_2d8 = *pdVar7;
    uStack_2d0 = *(undefined4 *)(pdVar7 + 1);
    uStack_2cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  local_1c8 = &local_288;
  local_2d8 = (double)CONCAT44(uRam00000001419e3b04,_DAT_1419e3b00);
  uStack_2d0 = uRam00000001419e3b08;
  uStack_2cc = uRam00000001419e3b0c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2d8);
  local_1c0 = &local_278;
  uVar11 = CONCAT44(uVar18,DAT_141a04da8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar11,&local_1c8);
  uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
LAB_1402d561d:
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e0);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    _eh_vector_destructor_iterator_(&local_288,0x10,8,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_2a8;
    return param_3;
  }
  local_298 = 0xfa9;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
  uStack_2bc = 0xf;
  local_2c8 = 0x100000800000014;
  dVar16 = (double)FUN_140e4b060(&local_2c8);
  FUN_140ec9e10((int)dVar16);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_298 = 0xfaa;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a59720);
  if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
    dVar16 = *pdVar7;
  }
  else {
    dVar16 = (double)FUN_140e4b060(pdVar7);
  }
  FUN_140ec60c0((longlong)dVar16,0xffffffff);
  local_298 = 0xfab;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  local_2d8 = (double)CONCAT44(uRam0000000141dc63c4,_DAT_141dc63c0);
  uStack_2d0 = uRam0000000141dc63c8;
  uStack_2cc = uRam0000000141dc63cc;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2d8);
  local_1c8 = &local_288;
  local_2d8 = (double)CONCAT44(uRam0000000141dc63c4,_DAT_141dc63c0);
  uStack_2d0 = uRam0000000141dc63c8;
  uStack_2cc = uRam0000000141dc63cc;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2d8);
  local_1c0 = &local_278;
  uVar8 = CONCAT44(uVar18,DAT_141a04558);
  FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
  uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_298 = 0xfac;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
  if (pdVar7 != &local_288) {
    local_2d8 = *pdVar7;
    uStack_2d0 = *(undefined4 *)(pdVar7 + 1);
    uStack_2cc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2d8);
  }
  local_1c8 = &local_288;
  local_2d8 = (double)CONCAT44(uRam00000001419e3a84,_DAT_1419e3a80);
  uStack_2d0 = uRam00000001419e3a88;
  uStack_2cc = uRam00000001419e3a8c;
  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2d8);
  local_1c0 = &local_278;
  uVar8 = CONCAT44(uVar18,DAT_141a04da8);
  puVar9 = (ulonglong *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
  if (puVar9 != &local_c8) {
    local_2d8 = (double)*puVar9;
    uStack_2d0 = (undefined4)puVar9[1];
    uStack_2cc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_2d8);
  }
  local_298 = 0xfad;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  local_1e4 = 0;
  local_1f0 = 0.0;
  bVar1 = true;
LAB_1402d3b35:
  uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (!bVar1) {
    local_298 = 0xfad;
    uVar4 = local_1e4 & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 != 1) {
        if (uVar4 == 7) {
          local_1f0 = (double)CONCAT44(local_1f0._4_4_,local_1f0._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_1f0 = (double)((longlong)local_1f0 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_1e4 = 0;
            goto LAB_1402d3b88;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1f0,&local_1f0);
        }
        goto LAB_1402d3b91;
      }
      local_1f0 = (double)FUN_140e4b060(&local_1f0);
      local_1e4 = 0;
    }
LAB_1402d3b88:
    local_1f0 = local_1f0 + 1.0;
  }
LAB_1402d3b91:
  iVar5 = FUN_140e851f0(&local_1f0,&local_c8,DAT_141955260,1);
  if ((iVar5 != -2) && (iVar5 < 0)) {
    local_298 = 0xfae;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
    if (pdVar7 != &local_288) {
      local_2e8 = *(undefined4 *)pdVar7;
      uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
      uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
      uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
      if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_2e8);
    }
    local_1c8 = &local_288;
    local_2e8 = _DAT_1419e3a80;
    uStack_2e4 = uRam00000001419e3a84;
    uStack_2e0 = uRam00000001419e3a88;
    uStack_2dc = uRam00000001419e3a8c;
    if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2e8);
    local_1c0 = &local_278;
    uVar8 = CONCAT44(uVar18,DAT_141a04da8);
    puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
    if (puVar10 != &local_d8) {
      local_2e8 = *(undefined4 *)puVar10;
      uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_2e0 = *(undefined4 *)(puVar10 + 1);
      uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_2e8);
    }
    local_298 = 0xfaf;
    if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_200);
    }
    local_1f4 = 0;
    local_200 = 0.0;
    bVar1 = true;
    do {
      uVar17 = 0;
      if (!bVar1) {
        local_298 = 0xfaf;
        uVar4 = local_1f4 & 0xffffff;
        if (uVar4 != 0) {
          if (uVar4 != 1) {
            if (uVar4 == 7) {
              local_200 = (double)CONCAT44(local_200._4_4_,local_200._0_4_ + 1);
            }
            else if (uVar4 == 10) {
              local_200 = (double)((longlong)local_200 + 1);
            }
            else {
              if (uVar4 == 0xd) {
                local_1f4 = 0;
                goto LAB_1402d3d86;
              }
              FUN_140042910(&DAT_14172c3d8,&local_200,&local_200);
            }
            goto LAB_1402d3d8f;
          }
          local_200 = (double)FUN_140e4b060(&local_200);
          local_1f4 = 0;
        }
LAB_1402d3d86:
        local_200 = local_200 + 1.0;
      }
LAB_1402d3d8f:
      bVar1 = false;
      iVar5 = FUN_140e851f0(&local_200,&local_d8,DAT_141955260,1);
      uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((iVar5 == -2) || (-1 < iVar5)) goto LAB_1402d4ea8;
      local_298 = 0xfb0;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
      if (pdVar7 != &local_288) {
        local_2e8 = *(undefined4 *)pdVar7;
        uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
        uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
        uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_2e8);
      }
      local_1c8 = &local_288;
      local_2e8 = _DAT_1419e3b00;
      uStack_2e4 = uRam00000001419e3b04;
      uStack_2e0 = uRam00000001419e3b08;
      uStack_2dc = uRam00000001419e3b0c;
      if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_2e8);
      local_1c0 = &local_278;
      uVar8 = CONCAT44(uVar18,DAT_141a04da8);
      uVar11 = FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
      cVar3 = FUN_140e491e0(uVar11);
      uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if (cVar3 == '\0') {
        local_298 = 0xfb1;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (puVar10 != &local_268) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_2e8);
        }
        local_1b8 = &local_268;
        local_2e8 = _DAT_1419e3a80;
        uStack_2e4 = uRam00000001419e3a84;
        uStack_2e0 = uRam00000001419e3a88;
        uStack_2dc = uRam00000001419e3a8c;
        if ((1 << ((byte)local_258[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_258);
        }
        FUN_140041b80(local_258,&local_2e8);
        local_1b0 = local_258;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar8,&local_1b8);
        if (puVar10 != &local_168) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_2e8);
        }
        local_298 = 0xfb2;
        if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e0);
        }
        local_1d4 = 0;
        local_1e0 = &DAT_bff0000000000000;
        local_298 = 0xfb3;
        uVar4 = FUN_140e4a8b0(&local_168);
        uStack_2cc = 10;
        local_2d8 = (double)(ulonglong)(uVar4 & 0xf);
        if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddded4) &&
           (_Init_thread_header(&DAT_141ddded4), DAT_141ddded4 == -1)) {
          _DAT_141dddea4 = 10;
          _DAT_141ddde98 = 2;
          _DAT_141dddeb8 = 10;
          _DAT_141dddeac = 4;
          _DAT_141dddebc = 1;
          _DAT_141dddecc = 10;
          _DAT_141dddec0 = 1;
          _DAT_141ddded0 = 2;
          atexit((_func_5014 *)&LAB_141471130);
          _Init_thread_footer(&DAT_141ddded4);
        }
        uVar15 = uVar17;
        do {
          iVar5 = FUN_140e851f0(&DAT_141ddde98 + (longlong)(int)uVar17 * 0x14,&local_2d8,
                                DAT_141955260,0);
          uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
          if (iVar5 == 0) {
            iVar5 = (&DAT_141dddea8)[uVar15 * 5];
            bVar2 = (byte)local_2ec;
            if (iVar5 == 0) {
              local_298 = 0xfb5;
              if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              lVar13 = FUN_140e4a8b0(&local_168);
              if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_288);
              }
              local_27c = 10;
              local_1c8 = &local_288;
              uVar8 = CONCAT44(uVar18,DAT_141a04b28);
              local_288 = (double)(lVar13 >> 4);
              ppuVar14 = (undefined1 **)FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar8,&local_1c8)
              ;
              uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
            }
            else {
              if (iVar5 != 1) {
                if (iVar5 == 2) {
                  local_298 = 0xfbf;
                  if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  local_2f8 = 0;
                  local_2f0 = 0;
                  local_2ec = 5;
                  lVar13 = FUN_140e4a8b0(&local_168);
                  local_7c = 10;
                  local_88 = lVar13 >> 4 & 0xff;
                  lVar13 = FUN_140e4a8b0(&local_168);
                  uVar6 = FUN_140e4a740(&local_88);
                  ppuVar14 = (undefined1 **)
                             FUN_140ec6010(&local_2f8,uVar6,lVar13 >> 0xc & 0xffffffff);
                  if (ppuVar14 != &local_1e0) {
                    local_2e8 = *(undefined4 *)ppuVar14;
                    uStack_2e4 = *(undefined4 *)((longlong)ppuVar14 + 4);
                    uStack_2e0 = *(undefined4 *)(ppuVar14 + 1);
                    uStack_2dc = *(undefined4 *)((longlong)ppuVar14 + 0xc);
                    if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1e0);
                    }
                    FUN_140041b80(&local_1e0,&local_2e8);
                  }
                  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_88);
                  }
                }
                break;
              }
              local_298 = 0xfba;
              if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a59cb0);
              uVar6 = FUN_140e4a740(uVar8);
              ppuVar14 = (undefined1 **)FUN_140ec6010(&local_2f8,uVar6,0);
            }
            if (ppuVar14 != &local_1e0) {
              local_2e8 = *(undefined4 *)ppuVar14;
              uStack_2e4 = *(undefined4 *)((longlong)ppuVar14 + 4);
              uStack_2e0 = *(undefined4 *)(ppuVar14 + 1);
              uStack_2dc = *(undefined4 *)((longlong)ppuVar14 + 0xc);
              if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1e0);
              }
              FUN_140041b80(&local_1e0,&local_2e8);
            }
            break;
          }
          uVar4 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar4;
          uVar15 = uVar15 + 1;
        } while (uVar4 < 3);
        local_298 = 0xfc4;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3aa0;
        uStack_2e4 = uRam00000001419e3aa4;
        uStack_2e0 = uRam00000001419e3aa8;
        uStack_2dc = uRam00000001419e3aac;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (pdVar7 != &local_e8) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_2e8);
        }
        local_298 = 0xfc5;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3aa0;
        uStack_2e4 = uRam00000001419e3aa4;
        uStack_2e0 = uRam00000001419e3aa8;
        uStack_2dc = uRam00000001419e3aac;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        pdVar7 = (double *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (pdVar7 != &local_f8) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_2e8);
        }
        local_298 = 0xfc6;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3aa0;
        uStack_2e4 = uRam00000001419e3aa4;
        uStack_2e0 = uRam00000001419e3aa8;
        uStack_2dc = uRam00000001419e3aac;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (puVar10 != &local_108) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_2e8);
        }
        local_298 = 0xfc7;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3aa0;
        uStack_2e4 = uRam00000001419e3aa4;
        uStack_2e0 = uRam00000001419e3aa8;
        uStack_2dc = uRam00000001419e3aac;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (puVar10 != &local_118) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_2e8);
        }
        local_298 = 0xfc8;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a59420);
        local_1c8 = &local_e8;
        local_1c0 = &local_f8;
        local_1b8 = &local_108;
        local_1b0 = &local_118;
        if (puVar10 != local_248) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_248[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_248);
          }
          FUN_140041b80(local_248,&local_2e8);
        }
        local_1a8 = local_248;
        uVar8 = CONCAT44(uVar18,DAT_1419fdca8);
        puVar12 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_2b8,4,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (puVar12 != local_238) {
          local_2e8 = *puVar12;
          uStack_2e4 = puVar12[1];
          uStack_2e0 = puVar12[2];
          uStack_2dc = puVar12[3];
          if ((1 << ((byte)_local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_238);
          }
          FUN_140041b80(local_238,&local_2e8);
        }
        local_1a0 = local_238;
        uVar8 = CONCAT44(uVar18,DAT_141a047e8);
        FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1a8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_298 = 0xfc9;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3a80;
        uStack_2e4 = uRam00000001419e3a84;
        uStack_2e0 = uRam00000001419e3a88;
        uStack_2dc = uRam00000001419e3a8c;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uVar8 = CONCAT44(uVar18,DAT_141a04da8);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2f8,2,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (puVar10 != &local_148) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_2e8);
        }
        local_298 = 0xfca;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2b8 = 0;
        local_2b0 = 0;
        local_2ac = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a583c0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        if (pdVar7 != &local_278) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_278);
          }
          FUN_140041b80(&local_278,&local_2e8);
        }
        local_1c0 = &local_278;
        if (puVar10 != &local_268) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_268);
          }
          FUN_140041b80(&local_268,&local_2e8);
        }
        local_1b8 = &local_268;
        uVar8 = CONCAT44(uVar18,DAT_141a090f8);
        puVar10 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2b8,1,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        if (puVar10 != local_258) {
          local_2e8 = *(undefined4 *)puVar10;
          uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
          uStack_2e0 = *(undefined4 *)(puVar10 + 1);
          uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
          if ((1 << ((byte)local_258[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_258);
          }
          FUN_140041b80(local_258,&local_2e8);
        }
        local_1b0 = local_258;
        local_1a8 = &local_148;
        pdVar7 = (double *)
                 FUN_140e634e0(param_1,param_2,&local_2f8,4,CONCAT44(uVar18,DAT_141a58f60),
                               &local_1c0);
        if (pdVar7 != &local_178) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_2e8);
        }
        local_298 = 0xfcb;
        dVar16 = local_178;
        if ((local_16c & 0xffffff) != 0) {
          dVar16 = (double)FUN_140e4b060(&local_178);
        }
        uVar18 = 0xffffffff;
        FUN_140ed1ce0((longlong)dVar16,4,&local_1e0,0,0xffffffffffffffff);
        local_298 = 0xfcc;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a589d0);
        if (pdVar7 != &local_288) {
          local_2e8 = *(undefined4 *)pdVar7;
          uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
          uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
          uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
          if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_288);
          }
          FUN_140041b80(&local_288,&local_2e8);
        }
        local_1c8 = &local_288;
        local_2e8 = _DAT_1419e3ac0;
        uStack_2e4 = uRam00000001419e3ac4;
        uStack_2e0 = uRam00000001419e3ac8;
        uStack_2dc = uRam00000001419e3acc;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_278);
        }
        FUN_140041b80(&local_278,&local_2e8);
        local_1c0 = &local_278;
        uStack_2bc = 0;
        local_2c8 = 0x4034000000000000;
        local_208 = 1;
        FUN_140042560(&local_2c8,&local_148);
        local_2e8 = (undefined4)local_2c8;
        uStack_2e4 = local_2c8._4_4_;
        uStack_2e0 = uStack_2c0;
        uStack_2dc = uStack_2bc;
        if ((1 << ((byte)_local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_2e8);
        local_208 = 0;
        if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_1b8 = &local_268;
        uVar8 = CONCAT44(uVar18,DAT_141a05a38);
        FUN_140e634e0(param_1,param_2,&local_2f8,3,uVar8,&local_1c8);
        uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
        local_298 = 0xfcd;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        local_1c8 = &local_178;
        uVar8 = CONCAT44(uVar18,DAT_141a073c8);
        FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar8,&local_1c8);
        if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2d8);
        }
      }
    } while( true );
  }
  local_298 = 0xfd1;
  FUN_140ec7870();
  local_298 = 0xfd2;
  FUN_140ec9dc0();
  local_298 = 0xfd4;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_2cc = 0xf;
  local_2d8 = 7.29112201955654e-304;
  local_2e8 = 0x58;
  uStack_2e4 = 0x1000000;
  uStack_2e0 = uStack_2d0;
  uStack_2dc = 0xf;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_2e8);
  local_1c8 = &local_288;
  ppdVar19 = &local_1c8;
  uVar11 = CONCAT44(uVar18,DAT_141a02ef8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_2f8,1,uVar11,ppdVar19);
  uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    uStack_2cc = 0xf;
    local_2d8 = 7.29112201955654e-304;
    local_2e8 = 0x58;
    uStack_2e4 = 0x1000000;
    uStack_2e0 = uStack_2d0;
    uStack_2dc = 0xf;
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2e8);
    local_1c0 = &local_278;
    local_2e8 = _DAT_141dce698;
    uStack_2e4 = uRam0000000141dce69c;
    uStack_2e0 = uRam0000000141dce6a0;
    uStack_2dc = DAT_141dce6a4;
    if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2e8);
    local_1b8 = &local_268;
    ppdVar19 = &local_1c0;
    uVar17 = CONCAT44(uVar18,DAT_141a56cf0);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_2b8,2,uVar17,ppdVar19);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 != '\0') {
      local_298 = 0xfd6;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_2cc = 0xf;
      local_2d8 = 7.29112201955654e-304;
      FUN_140e87440(&local_2d8,DAT_141a57ff0,0x80000000,&local_98,uVar17 & 0xffffffffffffff00,
                    (ulonglong)ppdVar19 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      uStack_2cc = 0xf;
      local_2d8 = 7.29112201955654e-304;
      uVar8 = FUN_140069500(&local_2d8);
      ppdVar19 = (double **)0x0;
      FUN_140e63610(uVar8,param_2,&local_158,0,&local_98,0);
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
    }
  }
  local_298 = 0xfd8;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uVar17 = 0;
  puVar10 = (undefined8 *)
            gml_Script____struct___96_WindowGetMonitorRect_GameViewRect
                      (param_1,param_2,&local_2f8,0,0);
  if (puVar10 != &local_188) {
    local_2e8 = *(undefined4 *)puVar10;
    uStack_2e4 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_2e0 = *(undefined4 *)(puVar10 + 1);
    uStack_2dc = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_2e8);
  }
  local_298 = 0xfd9;
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a59520);
  uVar15 = (ulonglong)ppdVar19 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a05568,0x80000000,&local_128,uVar17,uVar15);
  uStack_2bc = *(undefined4 *)((longlong)puVar10 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar10 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = *puVar10;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar10);
  }
  local_208 = 0x200;
  FUN_140046500(&local_2c8,&local_128);
  local_2e8 = (undefined4)local_2c8;
  uStack_2e4 = local_2c8._4_4_;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_2e8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_298 = 0xfda;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  pdVar7 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a59720);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a01028,0x80000000,&local_a8,uVar17,uVar15);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a05568,0x80000000,&local_128,uVar17,uVar15);
  uVar17 = uVar17 & 0xffffffffffffff00;
  FUN_140e87440(&local_188,DAT_141a00fb8,0x80000000,&local_b8,uVar17,uVar15 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar17 >> 0x20);
  if (pdVar7 != &local_288) {
    local_2e8 = *(undefined4 *)pdVar7;
    uStack_2e4 = *(undefined4 *)((longlong)pdVar7 + 4);
    uStack_2e0 = *(undefined4 *)(pdVar7 + 1);
    uStack_2dc = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2e8);
  }
  local_1c8 = &local_288;
  uVar17 = local_a8;
  if ((local_9c & 0xffffff) != 0) {
    uVar17 = FUN_140e4b060(&local_a8);
  }
  uStack_2cc = 0;
  local_2d8 = (double)(uVar17 ^ 0x8000000000000000);
  uStack_2bc = 0;
  uStack_2c0 = uStack_2d0;
  local_208 = 0x400;
  local_2c8 = (ulonglong)local_2d8;
  FUN_140046500(&local_2c8,&local_128);
  local_2e8 = (undefined4)local_2c8;
  uStack_2e4 = local_2c8._4_4_;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
  if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_2e8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_1c0 = &local_278;
  uVar17 = local_b8;
  if ((local_ac & 0xffffff) != 0) {
    uVar17 = FUN_140e4b060(&local_b8);
  }
  uStack_2cc = 0;
  local_2d8 = (double)(uVar17 ^ 0x8000000000000000);
  uStack_2bc = 0;
  uStack_2c0 = uStack_2d0;
  local_208 = 0x800;
  local_2c8 = (ulonglong)local_2d8;
  FUN_140046500(&local_2c8,&local_128);
  local_2e8 = (undefined4)local_2c8;
  uStack_2e4 = local_2c8._4_4_;
  uStack_2e0 = uStack_2c0;
  uStack_2dc = uStack_2bc;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_2e8);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_1b8 = &local_268;
  local_1b0 = &local_138;
  local_1a8 = &local_138;
  local_2e8 = _DAT_141dc63c0;
  uStack_2e4 = uRam0000000141dc63c4;
  uStack_2e0 = uRam0000000141dc63c8;
  uStack_2dc = uRam0000000141dc63cc;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_238);
  }
  FUN_140041b80(local_238,&local_2e8);
  local_1a0 = local_238;
  local_2e8 = _DAT_1419e3ad0;
  uStack_2e4 = uRam00000001419e3ad4;
  uStack_2e0 = uRam00000001419e3ad8;
  uStack_2dc = uRam00000001419e3adc;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_2e8);
  local_2e8 = _DAT_1419e3ac0;
  uStack_2e4 = uRam00000001419e3ac4;
  uStack_2e0 = uRam00000001419e3ac8;
  uStack_2dc = uRam00000001419e3acc;
  local_198 = local_228;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2e8);
  local_190 = local_218;
  FUN_140e634e0(param_1,param_2,&local_2f8,8,CONCAT44(uVar18,DAT_141a04498),&local_1c8);
  goto LAB_1402d561d;
LAB_1402d4ea8:
  bVar1 = false;
  goto LAB_1402d3b35;
}


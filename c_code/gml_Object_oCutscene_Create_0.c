// gml_Object_oCutscene_Create_0 @ 0x1408dc5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCutscene_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double *pdVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  double dVar13;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  uint local_res20;
  code *pcVar14;
  undefined1 **ppuVar15;
  undefined4 uVar17;
  ulonglong uVar16;
  ulonglong in_stack_fffffffffffffd00;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  undefined8 local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  longlong local_2b0;
  undefined4 local_2a4;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 local_278 [12];
  byte local_26c;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  uint local_21c;
  double local_218;
  undefined4 local_210;
  uint local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  longlong local_1f8;
  uint uStack_1ec;
  longlong local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_2c0 = "gml_Object_oCultIntro_Step_0";
  local_2b8 = 0;
  local_2c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2c8;
  pcVar14 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_278,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uVar9 = 0xffffff;
  local_res20 = 0xffffff;
  uStack_1ec = 0xffffff;
  lVar10 = 0;
  local_1f8 = 0;
  uStack_22c = 0xffffff;
  local_238 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_2ec = 0xffffff;
  local_2f8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_2b8 = 2;
  uStack_2dc = 0xf;
  local_2e8 = 0x1000000000000ee;
  ppuVar15 = (undefined1 **)((ulonglong)pcVar14 & 0xffffffffffffff00);
  FUN_140e87440(&local_2e8,DAT_141a1f2b0,0x80000000,&local_148,ppuVar15,
                in_stack_fffffffffffffd00 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  uStack_2dc = 10;
  local_2e8._0_4_ = 0;
  local_2e8._4_4_ = 0;
  iVar2 = FUN_140e851f0(&local_148,&local_2e8,DAT_141955260,0);
  if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if (iVar2 == 0) {
    local_2b8 = 4;
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
    local_2b8 = 5;
    if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b0);
    }
    local_2a4 = 0;
    local_2b0 = 0;
    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2b0);
    local_2b8 = 6;
  }
  else {
    local_2b8 = 10;
    uStack_2dc = 0xf;
    local_2e8._0_4_ = 0xee;
    local_2e8._4_4_ = 0x1000000;
    iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,&local_2e8);
    if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    if (0 < iVar2) {
      do {
        local_2b8 = 0xc;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1cc = 0;
        local_1d8 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1d8);
        local_2b8 = 0xd;
        if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b0);
        }
        local_2a4 = 0;
        local_2b0 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2b0);
        local_2b8 = 0xe;
        if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2f8);
        }
        local_2f8 = 0;
        local_2f0 = 0;
        local_2ec = 5;
        local_288 = CONCAT44(uRam00000001419e9c54,_DAT_1419e9c50);
        uStack_280 = uRam00000001419e9c58;
        uStack_27c = uRam00000001419e9c5c;
        if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_278);
        }
        FUN_140041b80(local_278,&local_288);
        local_1c8 = local_278;
        local_288 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_280 = DAT_1419df7b8;
        uStack_27c = DAT_1419df7bc;
        if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_268);
        }
        FUN_140041b80(local_268,&local_288);
        local_1c0 = local_268;
        ppuVar15 = &local_1c8;
        gml_Script_truestate_begin_step(local_res8,local_res10,&local_2f8,2,ppuVar15);
        cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_d8,&local_res8,&local_res10);
    local_2b8 = 0x14;
    puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01bc8);
    local_18c = *(undefined4 *)((longlong)puVar3 + 0xc);
    local_190 = *(undefined4 *)(puVar3 + 1);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *puVar3;
    }
    else {
      FUN_1400419b0(&local_198,puVar3);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de1ea0) &&
       (_Init_thread_header(&DAT_141de1ea0), DAT_141de1ea0 == -1)) {
      _DAT_141de1e84 = 0;
      _DAT_141de1e78 = 0;
      _DAT_141de1e98 = 0;
      _DAT_141de1e8c = 0x3ff0000000000000;
      _DAT_141de1e9c = 1;
      atexit((_func_5014 *)&LAB_14148d620);
      _Init_thread_footer(&DAT_141de1ea0);
    }
    uVar7 = 0;
    do {
      iVar2 = FUN_140e851f0(&DAT_141de1e78 + (longlong)(int)uVar7 * 0x14,&local_198,DAT_141955260,0)
      ;
      uVar17 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
      if (iVar2 == 0) {
        if (*(int *)(&DAT_141de1e88 + (longlong)(int)uVar7 * 0x14) == 0) {
          local_2b8 = 0x18;
          plVar5 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a58320);
          uVar17 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
          if (((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) &&
             (*(int *)(*plVar5 + 0x24) != 0)) {
            local_2b8 = 0x23;
            uStack_2dc = 0xf;
            local_2e8._0_4_ = 0x71;
            local_2e8._4_4_ = 0x1000000;
            iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_2e8);
            if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2e8);
            }
            if (0 < iVar2) {
              do {
                uVar17 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
                local_2b8 = 0x25;
                if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2f8);
                }
                local_2f8 = 0;
                local_2f0 = 0;
                local_2ec = 5;
                uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a848);
                local_2d8._0_4_ = _DAT_141dc6d00;
                local_2d8._4_4_ = uRam0000000141dc6d04;
                uStack_2d0 = uRam0000000141dc6d08;
                uStack_2cc = uRam0000000141dc6d0c;
                if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_278);
                }
                FUN_140041b80(local_278,&local_2d8);
                local_1c8 = local_278;
                ppuVar18 = &local_1c8;
                ppuVar15 = (undefined1 **)CONCAT44(uVar17,DAT_141a0a0d8);
                puVar3 = (undefined8 *)
                         FUN_140e634e0(local_res8,local_res10,&local_2f8,1,ppuVar15,ppuVar18);
                local_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
                local_1a0 = *(undefined4 *)(puVar3 + 1);
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
                  local_1a8 = *puVar3;
                }
                else {
                  FUN_1400419b0(&local_1a8,puVar3);
                }
                local_res18 = 1;
                local_12c = 7;
                local_138[0] = 2;
                FUN_140042560(&local_1a8,local_138);
                if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_138);
                }
                uVar7 = FUN_140e851f0(uVar4,&local_1a8,DAT_141955260,1);
                local_res18 = 0;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                if (uVar7 < 0x80000000) {
                  local_2b8 = 0x27;
                  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_208);
                  }
                  local_208 = 0;
                  local_200 = 0;
                  local_1fc = 5;
                  local_11c = 6;
                  local_128 = local_res10;
                  FUN_140e87440(&local_128,DAT_141a58330,0x80000000,&local_168,
                                (ulonglong)ppuVar15 & 0xffffffffffffff00,
                                (ulonglong)ppuVar18 & 0xffffffffffffff00);
                  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_128);
                  }
                  uVar19 = 0;
                  puVar3 = &local_168;
                  plVar5 = (longlong *)FUN_140e63610(local_res10,local_res10,&local_208,0,puVar3,0);
                  if (plVar5 != &local_1f8) {
                    local_2d8._0_4_ = (undefined4)*plVar5;
                    local_2d8._4_4_ = *(undefined4 *)((longlong)plVar5 + 4);
                    uStack_2d0 = (undefined4)plVar5[1];
                    uStack_2cc = *(undefined4 *)((longlong)plVar5 + 0xc);
                    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
                      FUN_140041a50(&local_1f8);
                    }
                    FUN_140041b80(&local_1f8,&local_2d8);
                    local_res20 = uStack_1ec;
                    lVar10 = local_1f8;
                    uVar9 = uStack_1ec;
                  }
                  local_2b8 = 0x28;
                  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  local_2f8 = 0;
                  local_2f0 = 0;
                  local_2ec = 5;
                  local_10c = 6;
                  local_118 = local_res8;
                  uVar19 = uVar19 & 0xffffffffffffff00;
                  uVar16 = (ulonglong)puVar3 & 0xffffffffffffff00;
                  FUN_140e87440(&local_118,DAT_1419fe0e8,0x80000000,&local_238,uVar16,uVar19);
                  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_118);
                  }
                  local_fc = 6;
                  local_108 = local_res8;
                  uVar16 = uVar16 & 0xffffffffffffff00;
                  FUN_140e87440(&local_108,DAT_1419fe158,0x80000000,&local_178,uVar16,
                                uVar19 & 0xffffffffffffff00);
                  uVar17 = (undefined4)(uVar16 >> 0x20);
                  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_108);
                  }
                  local_2d8._0_4_ = (undefined4)local_238;
                  local_2d8._4_4_ = local_238._4_4_;
                  uStack_2d0 = uStack_230;
                  uStack_2cc = uStack_22c;
                  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_278);
                  }
                  FUN_140041b80(local_278,&local_2d8);
                  local_1c8 = local_278;
                  local_2d8._0_4_ = (undefined4)local_178;
                  local_2d8._4_4_ = local_178._4_4_;
                  uStack_2d0 = uStack_170;
                  uStack_2cc = uStack_16c;
                  if ((1 << (local_268[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_268);
                  }
                  FUN_140041b80(local_268,&local_2d8);
                  local_1c0 = local_268;
                  local_2d8._0_4_ = _DAT_141dd79f8;
                  local_2d8._4_4_ = uRam0000000141dd79fc;
                  uStack_2d0 = uRam0000000141dd7a00;
                  uStack_2cc = DAT_141dd7a04;
                  if ((1 << (local_258[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_258);
                  }
                  FUN_140041b80(local_258,&local_2d8);
                  local_1b8 = local_258;
                  uStack_27c = 0xf;
                  local_288 = 0x100000000000024;
                  local_2d8._0_4_ = 0x24;
                  local_2d8._4_4_ = 0x1000000;
                  uStack_2d0 = uStack_280;
                  uStack_2cc = 0xf;
                  if ((1 << (local_248[0xc] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_248);
                  }
                  FUN_140041b80(local_248,&local_2d8);
                  local_1b0 = local_248;
                  ppuVar15 = &local_1c8;
                  uVar19 = CONCAT44(uVar17,DAT_141a0a7c8);
                  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2f8,4,uVar19,ppuVar15);
                  iVar2 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,uVar4);
                  if (0 < iVar2) {
                    do {
                      plVar5 = (longlong *)0x0;
                      local_2b8 = 0x2a;
                      if (((uVar9 & 0xffffff) == 2) && (lVar10 != 0)) {
                        if (*(int *)(lVar10 + 0x24) < 1) {
                          FUN_140e632c0("index out of bounds request %d maximum size is %d",0);
                          plVar8 = plVar5;
                        }
                        else {
                          plVar8 = *(longlong **)(lVar10 + 8);
                        }
                        if (plVar8 != &local_1e8) goto LAB_1408dd3ee;
                      }
                      else {
                        FUN_140e632c0("trying to index variable that is not an array");
                        plVar8 = &local_1f8;
LAB_1408dd3ee:
                        local_2d8._0_4_ = (undefined4)*plVar8;
                        local_2d8._4_4_ = *(undefined4 *)((longlong)plVar8 + 4);
                        uStack_2d0 = (undefined4)plVar8[1];
                        uStack_2cc = *(undefined4 *)((longlong)plVar8 + 0xc);
                        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_1e8);
                        }
                        FUN_140041b80(&local_1e8,&local_2d8);
                      }
                      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1e8);
                      local_2b8 = 0x2b;
                      if (((uVar9 & 0xffffff) == 2) && (lVar10 != 0)) {
                        if (*(int *)(lVar10 + 0x24) < 2) {
                          FUN_140e632c0("index out of bounds request %d maximum size is %d",1);
                        }
                        else {
                          plVar5 = (longlong *)(*(longlong *)(lVar10 + 8) + 0x10);
                        }
                        if (plVar5 != &local_2b0) goto LAB_1408dd48b;
                      }
                      else {
                        FUN_140e632c0("trying to index variable that is not an array");
                        plVar5 = &local_1f8;
LAB_1408dd48b:
                        local_2d8._0_4_ = (undefined4)*plVar5;
                        local_2d8._4_4_ = *(undefined4 *)((longlong)plVar5 + 4);
                        uStack_2d0 = (undefined4)plVar5[1];
                        uStack_2cc = *(undefined4 *)((longlong)plVar5 + 0xc);
                        if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
                          FUN_140041a50(&local_2b0);
                        }
                        FUN_140041b80(&local_2b0,&local_2d8);
                      }
                      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_2b0);
                      local_2b8 = 0x2d;
                      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2f8);
                      }
                      local_2f8 = 0;
                      local_2f0 = 0;
                      local_2ec = 5;
                      puVar3 = (undefined8 *)
                               (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
                      local_ec = 6;
                      local_f8 = local_res8;
                      FUN_140e87440(&local_f8,DAT_1419fe0e8,0x80000000,&local_238,
                                    uVar19 & 0xffffffffffffff00,
                                    (ulonglong)ppuVar15 & 0xffffffffffffff00);
                      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_f8);
                      }
                      local_dc = 0xf;
                      local_e8 = 0x10000000000005b;
                      plVar5 = local_res8;
                      FUN_140e87170(&local_e8,DAT_1419fe0e8,0x80000000,&local_188,local_res8,
                                    local_res10);
                      uVar17 = (undefined4)((ulonglong)plVar5 >> 0x20);
                      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_e8);
                      }
                      local_2d8._0_4_ = _DAT_141dc6d00;
                      local_2d8._4_4_ = uRam0000000141dc6d04;
                      uStack_2d0 = uRam0000000141dc6d08;
                      uStack_2cc = uRam0000000141dc6d0c;
                      if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(local_278);
                      }
                      FUN_140041b80(local_278,&local_2d8);
                      local_1c8 = local_278;
                      FUN_140e609c0(local_res8);
                      local_21c = uStack_22c;
                      local_220 = uStack_230;
                      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
                        local_228 = local_238;
                      }
                      else {
                        FUN_1400419b0(&local_228,&local_238);
                      }
                      local_res18 = 2;
                      FUN_1400462a0(&local_228,&local_188);
                      if ((local_21c & 0xffffff) == 0) {
                        uVar11 = (undefined4)local_228;
                      }
                      else {
                        uVar11 = FUN_140e4b060(&local_228);
                      }
                      ppuVar15 = &local_1c8;
                      uVar19 = CONCAT44(uVar17,DAT_141a0a0d8);
                      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2f8,1,uVar19,ppuVar15);
                      uVar12 = FUN_140e78d00(uVar11);
                      uStack_2dc = 0;
                      local_res18 = 6;
                      local_2e8 = uVar12;
                      FUN_140046500(&local_2e8,uVar4);
                      if (&local_2e8 != puVar3) {
                        uStack_2d0 = uStack_2e0;
                        uStack_2cc = uStack_2dc;
                        local_2d8 = local_2e8;
                        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) !=
                            0) {
                          FUN_140041a50(puVar3);
                        }
                        FUN_140041b80(puVar3,&local_2d8);
                      }
                      local_res18 = 2;
                      if ((1 << ((byte)uStack_2dc & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_2e8);
                      }
                      local_res18 = 0;
                      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
                        FUN_140041a50(&local_228);
                      }
                      FUN_140e60910(1);
                      local_2b8 = 0x2e;
                      puVar3 = (undefined8 *)
                               (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
                      uVar4 = FUN_140e794b0(0,0);
                      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0
                         ) {
                        FUN_140041a50(puVar3);
                      }
                      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
                      *puVar3 = uVar4;
                      cVar1 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
                    } while (cVar1 != '\0');
                  }
                  uVar17 = (undefined4)(uVar19 >> 0x20);
                  FUN_140e63970(local_b8,&local_res8,&local_res10);
                  local_2b8 = 0x31;
                  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_2f8);
                  }
                  local_2f8 = 0;
                  local_2f0 = 0;
                  local_2ec = 5;
                  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848)
                  ;
                  local_2d8._0_4_ = _DAT_141dc6d00;
                  local_2d8._4_4_ = uRam0000000141dc6d04;
                  uStack_2d0 = uRam0000000141dc6d08;
                  uStack_2cc = uRam0000000141dc6d0c;
                  if ((1 << ((byte)_local_26c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_278);
                  }
                  FUN_140041b80(local_278,&local_2d8);
                  local_1c8 = local_278;
                  ppuVar15 = (undefined1 **)CONCAT44(uVar17,DAT_141a0a0d8);
                  pdVar6 = (double *)
                           FUN_140e634e0(local_res8,local_res10,&local_2f8,1,ppuVar15,&local_1c8);
                  local_20c = *(uint *)((longlong)pdVar6 + 0xc);
                  local_210 = *(undefined4 *)(pdVar6 + 1);
                  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) == 0) {
                    local_218 = *pdVar6;
                  }
                  else {
                    FUN_1400419b0(&local_218,pdVar6);
                  }
                  local_res18 = 8;
                  uStack_28c = 7;
                  local_298 = CONCAT44(local_298._4_4_,2);
                  FUN_140042560(&local_218,&local_298);
                  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_298);
                  }
                  dVar13 = local_218;
                  if ((local_20c & 0xffffff) != 0) {
                    dVar13 = (double)FUN_140e4b060(&local_218);
                  }
                  uVar4 = FUN_140e78f00((longlong)dVar13);
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar3);
                  }
                  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
                  *puVar3 = uVar4;
                  local_res18 = 0;
                  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_218);
                  }
                  if (local_a8 != 0) {
                    FUN_140e4cd60();
                  }
                  uVar9 = local_res20;
                }
                local_2b8 = 0x35;
                uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
                FUN_140046040(uVar4);
                cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
              } while (cVar1 != '\0');
            }
            FUN_140e63970(local_98,&local_res8,&local_res10);
            local_2b8 = 0x39;
            if (local_88 != 0) {
              FUN_140e4cd60();
            }
          }
          else {
            local_2b8 = 0x1a;
            if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2f8);
            }
            local_2f8 = 0;
            local_2f0 = 0;
            local_2ec = 5;
            uStack_27c = 0xf;
            local_288 = 0x100000000000024;
            local_2d8._0_4_ = 0x24;
            local_2d8._4_4_ = 0x1000000;
            uStack_2d0 = uStack_280;
            uStack_2cc = 0xf;
            if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_278);
            }
            FUN_140041b80(local_278,&local_2d8);
            local_1c8 = local_278;
            ppuVar15 = &local_1c8;
            uVar19 = CONCAT44(uVar17,DAT_141a02ef8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2f8,1,uVar19,ppuVar15);
            cVar1 = FUN_140e491e0(uVar4);
            if (cVar1 == '\0') {
              local_2b8 = 0x1c;
              uVar4 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01bc8);
              FUN_140046040(uVar4);
              local_2b8 = 0x1d;
              if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2f8);
              }
              local_2f8 = 0;
              local_2f0 = 0;
              local_2ec = 5;
              uStack_28c = 0xf;
              local_298 = 0x10000000000005b;
              FUN_140e87440(&local_298,DAT_141a44ff8,0x80000000,&local_158,
                            uVar19 & 0xffffffffffffff00,(ulonglong)ppuVar15 & 0xffffffffffffff00);
              if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
              uStack_28c = 0xf;
              local_298 = 0x10000000000005b;
              uVar4 = FUN_140069500(&local_298);
              FUN_140e63610(uVar4,local_res10,&local_2f8,0,&local_158,0);
              if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_298);
              }
            }
            local_2b8 = 0x20;
            local_2e8 = CONCAT44(local_2e8._4_4_,(undefined4)local_2e8);
          }
        }
        else if (*(int *)(&DAT_141de1e88 + (longlong)(int)uVar7 * 0x14) == 1) {
          local_2b8 = 0x3d;
          if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2f8);
          }
          local_2f8 = 0;
          local_2f0 = 0;
          local_2ec = 5;
          uStack_28c = 0xf;
          local_298 = 0x10000000000005b;
          local_288 = 0x10000000000005b;
          uStack_280 = uStack_290;
          uStack_27c = 0xf;
          if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_278);
          }
          FUN_140041b80(local_278,&local_288);
          local_1c8 = local_278;
          uVar4 = FUN_140e634e0(local_res8,local_res10,&local_2f8,1,CONCAT44(uVar17,DAT_141a02ef8),
                                &local_1c8);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 == '\0') {
            local_2b8 = 0x3f;
            FUN_140edd0e0(local_res8,local_res10,0,0);
          }
          local_2b8 = 0x46;
          local_2e8 = CONCAT44(local_2e8._4_4_,(undefined4)local_2e8);
        }
        break;
      }
      uVar7 = uVar7 + 1;
      local_2e8 = CONCAT44(local_2e8._4_4_,(undefined4)local_2e8);
    } while (uVar7 < 2);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    if (local_c8 != 0) {
      FUN_140e4cd60();
      local_c8 = 0;
    }
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_278,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_2c8;
  return;
}


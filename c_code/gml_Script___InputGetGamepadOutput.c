// gml_Script___InputGetGamepadOutput @ 0x1400995d0

longlong *
gml_Script___InputGetGamepadOutput
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  bool bVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  longlong *local_res18;
  int local_res20;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffcd0;
  undefined4 uVar18;
  double local_320;
  undefined4 local_318;
  uint local_314;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  char *local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  uint local_2dc;
  longlong local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  longlong local_2b8;
  uint local_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298 [4];
  undefined4 *local_278;
  double local_270;
  undefined4 local_268;
  uint local_264;
  double local_260;
  undefined4 local_258;
  uint local_254;
  double local_250;
  undefined4 local_248;
  uint local_244;
  double local_240;
  undefined4 local_238;
  uint local_234;
  double local_230;
  undefined4 local_228;
  uint local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 *local_200;
  double *local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8 [3];
  undefined4 local_19c;
  undefined4 local_198 [3];
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined4 local_178 [3];
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158 [3];
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  
  uVar18 = 0;
  local_2f8 = "gml_Script___InputGetGamepadActive";
  local_300 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_300;
  local_2f0 = 3;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  _eh_vector_constructor_iterator_(local_298,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2cc = 0xffffff;
  local_2d8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_314 = 0xffffff;
  local_320 = 0.0;
  local_304 = 0;
  local_310 = 0;
  puVar1 = (undefined4 *)((longlong)param_3 + 0xc);
  *puVar1 = 5;
  *param_3 = 0;
  local_278 = puVar1;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc680) &&
     (_Init_thread_header(&DAT_141ddc680), DAT_141ddc680 == -1)) {
    DAT_141ddc678 = (longlong *)FUN_140e63aa0(DAT_141a014e8);
    _Init_thread_footer(&DAT_141ddc680);
  }
  if (DAT_141ddc043 == '\0') {
    FUN_140e64380(DAT_141ddc678,"gml_Script___InputGetGamepadActive");
    FUN_140e64380(local_res8,"gml_Script___InputGetGamepadActive");
  }
  local_2f0 = 5;
  if (DAT_141ddc043 == '\0') {
    DAT_141ddc043 = '\x01';
    puVar9 = (undefined8 *)(**(code **)(*DAT_141ddc678 + 0x10))(DAT_141ddc678,DAT_141a01188);
    if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_310);
    }
    local_310 = 0;
    local_308 = 0;
    local_304 = 5;
    uVar15 = 0;
    uVar10 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_310,0,0);
    FUN_140e87440(uVar10,DAT_141a011a8,0x80000000,&local_1d8,uVar15 & 0xffffffffffffff00,
                  in_stack_fffffffffffffcd0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddc678);
    if (&local_1d8 != puVar9) {
      local_2a8 = (undefined4)local_1d8;
      uStack_2a4 = local_1d8._4_4_;
      uStack_2a0 = uStack_1d0;
      uStack_29c = uStack_1cc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_2a8);
    }
    FUN_140e60910(1);
  }
  local_2f0 = 9;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*param_5;
  }
  local_2bc = 0;
  local_2c8 = 0;
  iVar6 = FUN_140e851f0(puVar9,&local_2c8,DAT_141955260,1);
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if (iVar6 != -2 && iVar6 < 0) {
    local_2f0 = 9;
    *puVar1 = 0xd;
    *param_3 = 0;
    goto LAB_14009a834;
  }
  local_2f0 = 10;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  local_310 = 0;
  local_308 = 0;
  local_304 = 5;
  uVar10 = gml_Script_InputGetBindingName(local_res8,local_res10,&local_310,0,0);
  cVar5 = FUN_140e491e0(uVar10);
  if (cVar5 == '\0') {
    local_2f0 = 10;
    *puVar1 = 0xd;
    *param_3 = 0;
    goto LAB_14009a834;
  }
  local_2f0 = 0xb;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  local_310 = 0;
  local_308 = 0;
  local_304 = 5;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_1400999ca:
    local_2a8 = *(undefined4 *)puVar9;
    uStack_2a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_2a0 = *(undefined4 *)(puVar9 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_2a8);
  }
  else {
    puVar9 = (undefined8 *)*param_5;
    if (puVar9 != local_298) goto LAB_1400999ca;
  }
  local_200 = local_298;
  ppuVar16 = &local_200;
  uVar10 = gml_Script_InputDeviceIsGamepad(local_res8,local_res10,&local_310,1,ppuVar16);
  uVar17 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
  cVar5 = FUN_140e491e0(uVar10);
  if (cVar5 == '\0') {
    local_2f0 = 0xb;
    *puVar1 = 0xd;
    *param_3 = 0;
    goto LAB_14009a834;
  }
  local_2f0 = 0xc;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  local_310 = 0;
  local_308 = 0;
  local_304 = 5;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_140099a94:
    local_2a8 = *(undefined4 *)puVar9;
    uStack_2a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_2a0 = *(undefined4 *)(puVar9 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_298);
    }
    FUN_140041b80(local_298,&local_2a8);
  }
  else {
    puVar9 = (undefined8 *)*param_5;
    if (puVar9 != local_298) goto LAB_140099a94;
  }
  local_200 = local_298;
  ppuVar16 = &local_200;
  plVar13 = (longlong *)CONCAT44(uVar17,DAT_1419fd258);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_310,1,plVar13,ppuVar16);
  cVar5 = FUN_140e491e0(uVar10);
  if (cVar5 == '\0') {
    local_2f0 = 0xc;
    *puVar1 = 0xd;
    *param_3 = 0;
  }
  else {
    local_214 = 0;
    local_220 = 0x4010000000000000;
    local_2f0 = 0x10;
    plVar11 = (longlong *)(**(code **)(*DAT_141ddc678 + 8))(DAT_141ddc678,DAT_141a01188);
    if (param_4 < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*param_5;
    }
    iVar6 = FUN_140e4a740(puVar9);
    if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar2 = *plVar11, lVar2 != 0)) {
      if ((iVar6 < 0) || (*(int *)(lVar2 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                      *(undefined4 *)(lVar2 + 0x24));
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar2 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    iVar6 = FUN_140e63cb0(local_108,&local_res8,&local_res10,plVar11);
    uVar10 = local_220;
    if (0 < iVar6) {
      uVar14 = 0x3ff00000;
      do {
        local_2f0 = 0x12;
        plVar11 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd228);
        if (plVar11 != &local_2b8) {
          local_210 = (undefined4)*plVar11;
          uStack_20c = *(undefined4 *)((longlong)plVar11 + 4);
          uStack_208 = (undefined4)plVar11[1];
          uStack_204 = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          FUN_140041b80(&local_2b8,&local_210);
        }
        local_2f0 = 0x14;
        plVar11 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd2d8);
        if (plVar11 != &local_2d8) {
          local_210 = (undefined4)*plVar11;
          uStack_20c = *(undefined4 *)((longlong)plVar11 + 4);
          uStack_208 = (undefined4)plVar11[1];
          uStack_204 = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          FUN_140041b80(&local_2d8,&local_210);
        }
        local_2f0 = 0x15;
        plVar11 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd358);
        if (plVar11 != &local_2e8) {
          local_210 = (undefined4)*plVar11;
          uStack_20c = *(undefined4 *)((longlong)plVar11 + 4);
          uStack_208 = (undefined4)plVar11[1];
          uStack_204 = *(undefined4 *)((longlong)plVar11 + 0xc);
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          FUN_140041b80(&local_2e8,&local_210);
        }
        local_2f0 = 0x17;
        if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_320);
        }
        local_314 = 0;
        local_320 = 32769.0;
        iVar6 = 0x2a;
        do {
          iVar6 = iVar6 + -1;
          local_2f0 = 0x1a;
          local_13c = 0;
          local_148 = 0x40e0022000000000;
          iVar7 = FUN_140e851f0(&local_320,&local_148,DAT_141955260,0,plVar13,ppuVar16,uVar18);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          if (iVar7 == 0) {
LAB_14009a4f1:
            local_2f0 = 0x1e;
            local_234 = local_314;
            local_238 = local_318;
            if ((1 << ((byte)local_314 & 0x1f) & 0x46U) == 0) {
              local_240 = local_320;
            }
            else {
              FUN_1400419b0(&local_240,&local_320);
            }
            local_14c = 7;
            local_158[0] = 0x8011;
            FUN_1400462a0(&local_240,local_158);
            if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            iVar7 = FUN_140e4a740(&local_240);
            plVar11 = (longlong *)0x0;
            if (((local_2cc & 0xffffff) == 2) && (local_2d8 != 0)) {
              if ((iVar7 < 0) || (*(int *)(local_2d8 + 0x24) <= iVar7)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                              *(undefined4 *)(local_2d8 + 0x24));
              }
              else {
                plVar11 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(local_2d8 + 8));
              }
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
              plVar11 = &local_2d8;
            }
            if ((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 0) {
              uVar18 = (undefined4)*plVar11;
            }
            else {
              uVar18 = FUN_140e4b060(plVar11);
            }
            dVar4 = (double)FUN_140e78d00(uVar18);
            bVar3 = dVar4 - 0.55 <= DAT_141955260;
            uVar18 = 0;
            if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_240);
            }
            if (bVar3) {
              local_224 = local_314;
              local_228 = local_318;
              if ((1 << ((byte)local_314 & 0x1f) & 0x46U) == 0) {
                local_230 = local_320;
              }
              else {
                FUN_1400419b0(&local_230,&local_320);
              }
              uStack_29c = 7;
              local_2a8 = 0x8011;
              FUN_1400462a0(&local_230,&local_2a8);
              if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_2a8);
              }
              iVar7 = FUN_140e4a740(&local_230);
              plVar11 = (longlong *)0x0;
              if (((local_2dc & 0xffffff) == 2) && (local_2e8 != 0)) {
                if ((iVar7 < 0) || (*(int *)(local_2e8 + 0x24) <= iVar7)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                *(undefined4 *)(local_2e8 + 0x24));
                }
                else {
                  plVar11 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(local_2e8 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar11 = &local_2e8;
              }
              if ((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 0) {
                uVar18 = (undefined4)*plVar11;
              }
              else {
                uVar18 = FUN_140e4b060(plVar11);
              }
              dVar4 = (double)FUN_140e78d00(uVar18);
              bVar3 = DAT_141955260 < dVar4 - 0.55;
              uVar18 = 0;
              if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_230);
              }
              if (bVar3) {
                local_2f0 = 0x21;
                *local_278 = 0xd;
                param_3 = local_res18;
                goto LAB_14009a811;
              }
            }
          }
          else {
            local_12c = 0;
            local_138 = 0x40e0024000000000;
            iVar7 = FUN_140e851f0(&local_320,&local_138,DAT_141955260,0);
            if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            if (iVar7 == 0) goto LAB_14009a4f1;
            local_11c = 0;
            local_128 = 0x40e0026000000000;
            iVar7 = FUN_140e851f0(&local_320,&local_128,DAT_141955260,0);
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            if (iVar7 == 0) goto LAB_14009a4f1;
            local_10c = 0;
            local_118 = 0x40e0028000000000;
            iVar7 = FUN_140e851f0(&local_320,&local_118,DAT_141955260,0);
            if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_118);
            }
            if (iVar7 == 0) goto LAB_14009a4f1;
            local_2f0 = 0x25;
            local_1bc = 0;
            local_1c8 = 0x40e000e000000000;
            iVar7 = FUN_140e851f0(&local_320,&local_1c8,DAT_141955260,0);
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            if (iVar7 == 0) {
LAB_14009a18b:
              local_2f0 = 0x29;
              local_254 = local_314;
              local_258 = local_318;
              if ((1 << ((byte)local_314 & 0x1f) & 0x46U) == 0) {
                local_260 = local_320;
              }
              else {
                FUN_1400419b0(&local_260,&local_320);
              }
              local_18c = 7;
              local_198[0] = 0x8007;
              FUN_1400462a0(&local_260,local_198);
              if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_198);
              }
              local_1e4 = 0;
              local_1e8 = local_218;
              local_1f0 = uVar10;
              uVar18 = 0xc;
              FUN_1400460e0(&local_1f0,&local_260);
              iVar7 = FUN_140e4a740(&local_1f0);
              plVar11 = (longlong *)0x0;
              if (((local_2cc & 0xffffff) == 2) && (local_2d8 != 0)) {
                if ((iVar7 < 0) || (*(int *)(local_2d8 + 0x24) <= iVar7)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                *(undefined4 *)(local_2d8 + 0x24));
                }
                else {
                  plVar11 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(local_2d8 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar11 = &local_2d8;
              }
              local_17c = 0;
              local_188 = 0x3fa999999999999a;
              iVar7 = FUN_140e851f0(plVar11,&local_188,DAT_141955260,1,plVar13,ppuVar16,uVar18);
              if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1f0);
              }
              uVar18 = 0;
              if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_260);
              }
              if (iVar7 != -2 && iVar7 < 1) {
                local_244 = local_314;
                local_248 = local_318;
                if ((1 << ((byte)local_314 & 0x1f) & 0x46U) == 0) {
                  local_250 = local_320;
                }
                else {
                  FUN_1400419b0(&local_250,&local_320);
                }
                local_16c = 7;
                local_178[0] = 0x8007;
                FUN_1400462a0(&local_250,local_178);
                if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_178);
                }
                local_2bc = 0;
                local_2c0 = local_218;
                local_2c8 = uVar10;
                uVar18 = 0x30;
                FUN_1400460e0(&local_2c8,&local_250);
                iVar7 = FUN_140e4a740(&local_2c8);
                plVar11 = (longlong *)0x0;
                if (((local_2dc & 0xffffff) == 2) && (local_2e8 != 0)) {
                  if ((iVar7 < 0) || (*(int *)(local_2e8 + 0x24) <= iVar7)) {
                    FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                  *(undefined4 *)(local_2e8 + 0x24));
                  }
                  else {
                    plVar11 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(local_2e8 + 8));
                  }
                }
                else {
                  FUN_140e632c0("trying to index variable that is not an array");
                  plVar11 = &local_2e8;
                }
                local_15c = 0;
                local_168 = 0x3fa999999999999a;
                iVar7 = FUN_140e851f0(plVar11,&local_168,DAT_141955260,1,plVar13,ppuVar16,uVar18);
                if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_168);
                }
                if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_2c8);
                }
                uVar18 = 0;
                if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_250);
                }
                if (0 < iVar7) {
                  local_2f0 = 0x2c;
                  *local_278 = 0xd;
                  param_3 = local_res18;
                  goto LAB_14009a811;
                }
              }
            }
            else {
              local_1ac = 0;
              local_1b8 = 0x40e0010000000000;
              iVar7 = FUN_140e851f0(&local_320,&local_1b8,DAT_141955260,0);
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              if (iVar7 == 0) goto LAB_14009a18b;
              local_2f0 = 0x32;
              if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_310);
              }
              plVar13 = (longlong *)0x0;
              local_310 = 0;
              local_308 = 0;
              local_304 = 5;
              if (local_res20 < 1) {
                puVar9 = &DAT_1419df7b0;
LAB_140099ff7:
                local_210 = *(undefined4 *)puVar9;
                uStack_20c = *(undefined4 *)((longlong)puVar9 + 4);
                uStack_208 = *(undefined4 *)(puVar9 + 1);
                uStack_204 = *(undefined4 *)((longlong)puVar9 + 0xc);
                if ((1 << ((byte)local_298[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_298);
                }
                FUN_140041b80(local_298,&local_210);
              }
              else {
                puVar9 = (undefined8 *)*param_5;
                if (puVar9 != local_298) goto LAB_140099ff7;
              }
              local_200 = local_298;
              local_1f8 = &local_320;
              local_264 = local_314;
              local_268 = local_318;
              if ((1 << ((byte)local_314 & 0x1f) & 0x46U) == 0) {
                local_270 = local_320;
              }
              else {
                FUN_1400419b0(&local_270,&local_320);
              }
              local_19c = 7;
              local_1a8[0] = 0x8001;
              FUN_1400462a0(&local_270,local_1a8);
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              iVar7 = FUN_140e4a740(&local_270);
              if (((local_2ac & 0xffffff) == 2) && (local_2b8 != 0)) {
                if ((iVar7 < 0) || (*(int *)(local_2b8 + 0x24) <= iVar7)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar7,
                                *(undefined4 *)(local_2b8 + 0x24));
                }
                else {
                  plVar13 = (longlong *)((longlong)iVar7 * 0x10 + *(longlong *)(local_2b8 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar13 = &local_2b8;
              }
              ppuVar16 = &local_200;
              uVar12 = FUN_140e63610(local_res8,local_res10,&local_310);
              cVar5 = FUN_140e491e0(uVar12);
              uVar18 = 0;
              if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_270);
              }
              if (cVar5 != '\0') {
                local_2f0 = 0x34;
                *local_278 = 0xd;
                param_3 = local_res18;
                goto LAB_14009a811;
              }
            }
          }
          local_2f0 = 0x38;
          uVar8 = local_314 & 0xffffff;
          if (uVar8 == 0) {
LAB_14009a7a6:
            local_320 = local_320 + 1.0;
          }
          else {
            if (uVar8 == 1) {
              local_320 = (double)FUN_140e4b060(&local_320);
              local_314 = 0;
              goto LAB_14009a7a6;
            }
            if (uVar8 == 7) {
              local_320 = (double)CONCAT44(local_320._4_4_,local_320._0_4_ + 1);
            }
            else if (uVar8 == 10) {
              local_320 = (double)((longlong)local_320 + 1);
            }
            else {
              if (uVar8 == 0xd) {
                local_314 = 0;
                goto LAB_14009a7a6;
              }
              FUN_140042910(&DAT_14172c3d8,&local_320,&local_320);
            }
          }
        } while (0 < iVar6);
        cVar5 = FUN_140e643f0(local_108,&local_res8,&local_res10);
      } while (cVar5 != '\0');
      param_3 = local_res18;
    }
    uVar14 = 0;
    FUN_140e63970(local_108,&local_res8,&local_res10);
    local_2f0 = 0x3c;
    *local_278 = 0xd;
LAB_14009a811:
    *param_3 = (ulonglong)uVar14 << 0x20;
    if (local_f8 != 0) {
      FUN_140e4cd60();
      local_f8 = 0;
    }
  }
LAB_14009a834:
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  _eh_vector_destructor_iterator_(local_298,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_300;
  return param_3;
}


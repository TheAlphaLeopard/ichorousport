// gml_GlobalScript___InputRegisterUpdate @ 0x1400ca460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputRegisterUpdate
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 **in_stack_fffffffffffffda0;
  ulonglong uVar15;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  double local_248;
  uint local_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined4 local_1f8 [3];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined1 local_1c8 [12];
  undefined4 local_1bc;
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
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
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined4 *local_110;
  undefined4 local_104;
  undefined1 *local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 *local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined4 local_b4;
  undefined1 local_b0 [16];
  longlong local_a0;
  
  local_230 = 
  "gml_Script_anon@167@__InputRegisterPlayerDeviceChanged@__InputRegisterPlayerDeviceChanged";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 5;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1f8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_23c = 0xffffff;
  local_248 = 0.0;
  local_104 = 0xffffff;
  local_110 = (undefined4 *)0x0;
  local_24c = 0;
  local_258 = 0;
  local_17c = 0;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7ec) &&
     (_Init_thread_header(&DAT_141ddc7ec), DAT_141ddc7ec == -1)) {
    DAT_141ddc7f0 = (longlong *)FUN_140e63aa0(DAT_141a02ac8);
    _Init_thread_footer(&DAT_141ddc7ec);
  }
  if (DAT_141ddc055 == '\0') {
    FUN_140e64380(DAT_141ddc7f0,
                  "gml_Script_anon@167@__InputRegisterPlayerDeviceChanged@__InputRegisterPlayerDeviceChanged"
                 );
    FUN_140e64380(local_res8,
                  "gml_Script_anon@167@__InputRegisterPlayerDeviceChanged@__InputRegisterPlayerDeviceChanged"
                 );
  }
  local_228 = 7;
  if (DAT_141ddc055 == '\0') {
    DAT_141ddc055 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddc7f0 + 0x10))(DAT_141ddc7f0,DAT_141a026b8);
    FUN_140e609c0(DAT_141ddc7f0);
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_258,0,0);
    if (puVar7 != puVar6) {
      local_1a8 = *puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddc7f0 + 0x10))(DAT_141ddc7f0,DAT_1419febe8);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar13 = 0;
    uVar8 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (local_res8,local_res10,&local_188,0,0);
    uVar15 = (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419febc8,0x80000000,&local_148,uVar13 & 0xffffffffffffff00,uVar15);
    FUN_140e609c0(DAT_141ddc7f0);
    if (&local_148 != puVar6) {
      local_1a8 = local_148;
      uStack_1a0 = uStack_140;
      uStack_19c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    puVar6 = (undefined8 *)(**(code **)(*DAT_141ddc7f0 + 0x10))(DAT_141ddc7f0,DAT_141a02998);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    uVar13 = 0;
    uVar8 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (local_res8,local_res10,&local_198,0,0);
    in_stack_fffffffffffffda0 = (undefined4 **)(uVar15 & 0xffffffffffffff00);
    pcVar12 = (code *)(uVar13 & 0xffffffffffffff00);
    FUN_140e87440(uVar8,DAT_1419fe0b8,0x80000000,&local_158,pcVar12,in_stack_fffffffffffffda0);
    FUN_140e609c0(DAT_141ddc7f0);
    if (&local_158 != puVar6) {
      local_1a8 = local_158;
      uStack_1a0 = uStack_150;
      uStack_19c = uStack_14c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_228 = 0xb;
  plVar9 = (longlong *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_141a026b8);
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
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
  iVar3 = FUN_140e63cb0(local_b0,&local_res8,&local_res10,plVar9);
  if (0 < iVar3) {
    do {
      local_228 = 0xe;
      if (param_4 < 3) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)param_5[2];
      }
      local_f4 = 0;
      local_100 = &DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(puVar6,&local_100,DAT_141955260,0);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if (iVar3 != 0) {
        if (param_4 < 3) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)param_5[2];
        }
        local_e4 = 0;
        local_f0 = 0xc072c00000000000;
        iVar3 = FUN_140e851f0(puVar6,&local_f0,DAT_141955260,0);
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        if (iVar3 != 0) {
          local_228 = 0x10;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          puVar10 = (undefined4 *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_1419febe8);
          if (puVar10 != local_1f8) {
            local_218 = *puVar10;
            uStack_214 = puVar10[1];
            uStack_210 = puVar10[2];
            uStack_20c = puVar10[3];
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1f8);
            }
            FUN_140041b80(local_1f8,&local_218);
          }
          local_138 = local_1f8;
          if (param_4 < 3) {
            puVar6 = &DAT_1419df7b0;
LAB_1400caa5e:
            local_218 = *(undefined4 *)puVar6;
            uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_210 = *(undefined4 *)(puVar6 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_218);
          }
          else {
            puVar6 = (undefined8 *)param_5[2];
            if (puVar6 != &local_1e8) goto LAB_1400caa5e;
          }
          local_130 = &local_1e8;
          in_stack_fffffffffffffda0 = &local_138;
          pcVar12 = (code *)CONCAT44(uVar14,DAT_1419ff4f8);
          puVar6 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_258,2,pcVar12,
                                 in_stack_fffffffffffffda0);
          if (puVar6 != &local_178) {
            local_218 = *(undefined4 *)puVar6;
            uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_210 = *(undefined4 *)(puVar6 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_218);
          }
          local_228 = 0x11;
          iVar3 = FUN_140e851f0(&local_178,&DAT_1419df7b0,DAT_141955260,0);
          if (iVar3 != 0) {
            local_228 = 0x13;
            plVar9 = (longlong *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_141a026b8);
            iVar3 = FUN_140e4a740(&local_178);
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
            iVar3 = FUN_140e63cb0(&local_218,&local_res8,&local_res10,plVar9);
            if (0 < iVar3) {
              do {
                local_228 = 0x15;
                puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5c8);
                if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(puVar6);
                }
                *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
                *puVar6 = &DAT_bff0000000000000;
                local_228 = 0x18;
                if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_258);
                }
                local_258 = 0;
                local_250 = 0;
                local_24c = 5;
                pcVar12 = (code *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd5f8);
                in_stack_fffffffffffffda0 = (undefined4 **)0x0;
                FUN_140e63610(local_res8,local_res10,&local_258,0,pcVar12,0);
                cVar2 = FUN_140e643f0(&local_218,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(&local_218,&local_res8,&local_res10);
            if (local_208 != 0) {
              FUN_140e4cd60();
            }
          }
        }
      }
      iVar3 = 0;
      local_228 = 0x1d;
      if (param_4 < 2) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)param_5[1];
      }
      local_d4 = 0;
      local_e0 = &DAT_bff0000000000000;
      iVar4 = FUN_140e851f0(puVar6,&local_e0,DAT_141955260,0);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      if (iVar4 == 0) {
        local_228 = 0x20;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6c8);
        FUN_140e85f80(local_res8,DAT_1419fd2a8,0x80000000,&local_168);
        FUN_140e609c0(local_res8);
        if (&local_168 != puVar6) {
          local_218 = (undefined4)local_168;
          uStack_214 = local_168._4_4_;
          uStack_210 = uStack_160;
          uStack_20c = uStack_15c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_218);
        }
        FUN_140e60910(1);
      }
      else {
        local_228 = 0x25;
        if (param_4 < 2) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)param_5[1];
        }
        local_c4 = 0;
        local_d0 = 0xc069000000000000;
        iVar4 = FUN_140e851f0(puVar6,&local_d0,DAT_141955260,0);
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        if (iVar4 == 0) {
          local_228 = 0x27;
          if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          local_23c = 0;
          local_248 = 0.0;
          local_228 = 0x28;
          plVar9 = (longlong *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_141a02998);
          if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
            iVar3 = *(int *)(*plVar9 + 0x24);
          }
          while (0 < iVar3) {
            iVar3 = iVar3 + -1;
            local_228 = 0x2a;
            if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_258);
            }
            local_258 = 0;
            local_250 = 0;
            local_24c = 5;
            plVar9 = (longlong *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_141a02998);
            iVar4 = FUN_140e4a740(&local_248);
            if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) &&
               (lVar1 = *plVar9, lVar1 != 0)) {
              if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                              *(undefined4 *)(lVar1 + 0x24));
                plVar11 = (longlong *)0x0;
              }
              else {
                plVar11 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
              }
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
              plVar11 = plVar9;
            }
            FUN_140e87440(plVar11,DAT_1419fe688,0x80000000,&local_110,
                          (ulonglong)pcVar12 & 0xffffffffffffff00,
                          (ulonglong)in_stack_fffffffffffffda0 & 0xffffffffffffff00);
            iVar4 = FUN_140e4a740(&local_248);
            if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) &&
               (lVar1 = *plVar9, lVar1 != 0)) {
              if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
                FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                              *(undefined4 *)(lVar1 + 0x24));
                plVar9 = (longlong *)0x0;
              }
              else {
                plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
              }
            }
            else {
              FUN_140e632c0("trying to index variable that is not an array");
            }
            uVar8 = FUN_140069500(plVar9);
            in_stack_fffffffffffffda0 = (undefined4 **)0x0;
            pcVar12 = (code *)&local_110;
            FUN_140e63610(uVar8,local_res10,&local_258,0,pcVar12,0);
            local_228 = 0x2b;
            uVar5 = local_23c & 0xffffff;
            if (uVar5 == 0) {
LAB_1400cb037:
              local_248 = local_248 + 1.0;
            }
            else {
              if (uVar5 == 1) {
                local_248 = (double)FUN_140e4b060(&local_248);
                local_23c = 0;
                goto LAB_1400cb037;
              }
              if (uVar5 == 7) {
                local_248 = (double)CONCAT44(local_248._4_4_,local_248._0_4_ + 1);
              }
              else if (uVar5 == 10) {
                local_248 = (double)((longlong)local_248 + 1);
              }
              else {
                if (uVar5 == 0xd) {
                  local_23c = 0;
                  goto LAB_1400cb037;
                }
                FUN_140042910(&DAT_14172c3d8,&local_248,&local_248);
              }
            }
          }
        }
        uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
        local_228 = 0x30;
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_258 = 0;
        local_250 = 0;
        local_24c = 5;
        puVar10 = (undefined4 *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_1419febe8);
        if (puVar10 != local_1f8) {
          local_218 = *puVar10;
          uStack_214 = puVar10[1];
          uStack_210 = puVar10[2];
          uStack_20c = puVar10[3];
          if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_218);
        }
        local_138 = local_1f8;
        if (param_4 < 2) {
          puVar6 = &DAT_1419df7b0;
LAB_1400cb110:
          local_218 = *(undefined4 *)puVar6;
          uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
          uStack_210 = *(undefined4 *)(puVar6 + 1);
          uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
          if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          FUN_140041b80(&local_1e8,&local_218);
        }
        else {
          puVar6 = (undefined8 *)param_5[1];
          if (puVar6 != &local_1e8) goto LAB_1400cb110;
        }
        local_130 = &local_1e8;
        FUN_140e634e0(local_res8,local_res10,&local_258,2,CONCAT44(uVar14,DAT_141a01f38),&local_138)
        ;
      }
      local_228 = 0x33;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd5c8);
      FUN_140e609c0(local_res8);
      if (param_4 < 3) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[2];
      }
      if (puVar7 != puVar6) {
        local_218 = *(undefined4 *)puVar7;
        uStack_214 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_210 = *(undefined4 *)(puVar7 + 1);
        uStack_20c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_218);
      }
      FUN_140e60910(1);
      local_228 = 0x36;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd5f8);
      in_stack_fffffffffffffda0 = (undefined4 **)0x0;
      FUN_140e63610(local_res8,local_res10,&local_258,0,uVar8,0);
      local_228 = 0x39;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_258 = 0;
      local_250 = 0;
      local_24c = 5;
      puVar10 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd5c8);
      if (puVar10 != local_1f8) {
        local_218 = *puVar10;
        uStack_214 = puVar10[1];
        uStack_210 = puVar10[2];
        uStack_20c = puVar10[3];
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1f8);
        }
        FUN_140041b80(local_1f8,&local_218);
      }
      local_138 = local_1f8;
      local_218 = _DAT_1419df7a0;
      uStack_214 = uRam00000001419df7a4;
      uStack_210 = uRam00000001419df7a8;
      uStack_20c = uRam00000001419df7ac;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_218);
      local_130 = &local_1e8;
      local_218 = (undefined4)DAT_1419df7b0;
      uStack_214 = DAT_1419df7b0._4_4_;
      uStack_210 = DAT_1419df7b8;
      uStack_20c = DAT_1419df7bc;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_218);
      local_128 = &local_1d8;
      local_218 = (undefined4)DAT_1419df7b0;
      uStack_214 = DAT_1419df7b0._4_4_;
      uStack_210 = DAT_1419df7b8;
      uStack_20c = DAT_1419df7bc;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_218);
      local_120 = local_1c8;
      local_218 = (undefined4)DAT_1419df7b0;
      uStack_214 = DAT_1419df7b0._4_4_;
      uStack_210 = DAT_1419df7b8;
      uStack_20c = DAT_1419df7bc;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_218);
      local_118 = local_1b8;
      pcVar12 = (code *)&local_138;
      gml_Script_InputDeviceStopAllRebinding(local_res8,local_res10,&local_258,5,pcVar12);
      local_228 = 0x3c;
      if (param_4 < 3) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)param_5[2];
      }
      local_b4 = 0;
      local_c0 = &DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(puVar6,&local_c0,DAT_141955260,0);
      if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      if (iVar3 != 0) {
        if (param_4 < 3) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)param_5[2];
        }
        uStack_19c = 0;
        local_1a8 = 0xc072c00000000000;
        iVar3 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,0);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if (iVar3 != 0) {
          local_228 = 0x3e;
          if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_258);
          }
          uVar14 = (undefined4)((ulonglong)pcVar12 >> 0x20);
          local_258 = 0;
          local_250 = 0;
          local_24c = 5;
          puVar10 = (undefined4 *)(**(code **)(*DAT_141ddc7f0 + 8))(DAT_141ddc7f0,DAT_1419febe8);
          if (puVar10 != local_1f8) {
            local_218 = *puVar10;
            uStack_214 = puVar10[1];
            uStack_210 = puVar10[2];
            uStack_20c = puVar10[3];
            if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1f8);
            }
            FUN_140041b80(local_1f8,&local_218);
          }
          local_138 = local_1f8;
          if (param_4 < 3) {
            puVar6 = &DAT_1419df7b0;
LAB_1400cb546:
            local_218 = *(undefined4 *)puVar6;
            uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_210 = *(undefined4 *)(puVar6 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1e8);
            }
            FUN_140041b80(&local_1e8,&local_218);
          }
          else {
            puVar6 = (undefined8 *)param_5[2];
            if (puVar6 != &local_1e8) goto LAB_1400cb546;
          }
          local_130 = &local_1e8;
          if (param_4 < 1) {
            puVar6 = &DAT_1419df7b0;
LAB_1400cb592:
            local_218 = *(undefined4 *)puVar6;
            uStack_214 = *(undefined4 *)((longlong)puVar6 + 4);
            uStack_210 = *(undefined4 *)(puVar6 + 1);
            uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_218);
          }
          else {
            puVar6 = (undefined8 *)*param_5;
            if (puVar6 != &local_1d8) goto LAB_1400cb592;
          }
          local_128 = &local_1d8;
          in_stack_fffffffffffffda0 = &local_138;
          pcVar12 = (code *)CONCAT44(uVar14,DAT_1419ff3d8);
          FUN_140e634e0(local_res8,local_res10,&local_258,3,pcVar12,in_stack_fffffffffffffda0);
        }
      }
      cVar2 = FUN_140e643f0(local_b0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_b0,&local_res8,&local_res10);
  if (local_a0 != 0) {
    FUN_140e4cd60();
    local_a0 = 0;
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_1f8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}


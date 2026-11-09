// gml_GlobalScript___InputVibrateClassPulse @ 0x1400e82b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputVibrateClassPulse(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  double **ppdVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe40;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  uint local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  byte local_12c;
  undefined1 local_128 [12];
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double *local_e8;
  double *local_e0;
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  double local_b0;
  undefined4 local_a4;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_180 = "gml_Script___Update@anon@293@__InputVibrateClassPlayer@__InputVibrateClassPlayer";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0xe;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0.0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc9b0) &&
     (_Init_thread_header(&DAT_141ddc9b0), DAT_141ddc9b0 == -1)) {
    DAT_141ddc9b8 = (longlong *)FUN_140e63aa0(DAT_141a04368);
    _Init_thread_footer(&DAT_141ddc9b0);
  }
  if (DAT_141ddc070 == '\0') {
    FUN_140e64380(DAT_141ddc9b8,
                  "gml_Script___Update@anon@293@__InputVibrateClassPlayer@__InputVibrateClassPlayer"
                 );
    FUN_140e64380(local_res8,
                  "gml_Script___Update@anon@293@__InputVibrateClassPlayer@__InputVibrateClassPlayer"
                 );
  }
  local_178 = 0x10;
  if (DAT_141ddc070 == '\0') {
    DAT_141ddc070 = '\x01';
    pdVar4 = (double *)(**(code **)(*DAT_141ddc9b8 + 0x10))(DAT_141ddc9b8,DAT_1419febe8);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar9 = 0;
    uVar5 = FUN_1400ebd30(local_res8,local_res10,&local_1b8,0,0);
    FUN_140e87440(uVar5,DAT_1419febc8,0x80000000,&local_98,uVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141ddc9b8);
    if (&local_98 != pdVar4) {
      local_198 = local_98;
      uStack_190 = uStack_90;
      uStack_18c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar4);
      }
      FUN_140041b80(pdVar4,&local_198);
    }
    FUN_140e60910(1);
  }
  local_178 = 0x12;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7f8);
  if (pdVar4 != &local_148) {
    local_198 = *pdVar4;
    uStack_190 = *(undefined4 *)(pdVar4 + 1);
    uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_198);
  }
  local_e8 = &local_148;
  ppdVar6 = &local_e8;
  uVar5 = gml_Script_InputPlayerLowestConnectedIndex(local_res8,local_res10,&local_1b8,1,&local_e8);
  uVar10 = (undefined4)((ulonglong)ppdVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7f8);
    if (pdVar4 != &local_138) {
      local_198 = *pdVar4;
      uStack_190 = *(undefined4 *)(pdVar4 + 1);
      uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    local_e0 = &local_138;
    local_198 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_190 = DAT_1419df7b8;
    uStack_18c = DAT_1419df7bc;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_198);
    local_d8 = local_128;
    ppdVar6 = &local_e0;
    uVar5 = gml_Script_InputPlayerUsingGeneric(local_res8,local_res10,&local_d0,2,ppdVar6);
    uVar10 = (undefined4)((ulonglong)ppdVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_178 = 0x14;
      pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
      if (pdVar4 != &local_158) {
        local_198 = *pdVar4;
        uStack_190 = *(undefined4 *)(pdVar4 + 1);
        uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_198);
      }
      local_178 = 0x15;
      if (((local_14c == 2) && (local_158 != 0.0)) && (0 < *(int *)((longlong)local_158 + 0x24))) {
        local_178 = 0x17;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7f8);
        if (pdVar4 != &local_148) {
          local_198 = *pdVar4;
          uStack_190 = *(undefined4 *)(pdVar4 + 1);
          uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_198);
        }
        local_e8 = &local_148;
        ppdVar6 = &local_e8;
        pdVar4 = (double *)
                 gml_Script_InputPlayerGetGamepadType(local_res8,local_res10,&local_1b8,1,&local_e8)
        ;
        if (pdVar4 != &local_b0) {
          local_198 = *pdVar4;
          uStack_190 = *(undefined4 *)(pdVar4 + 1);
          uStack_18c = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b0);
          }
          FUN_140041b80(&local_b0,&local_198);
        }
        local_178 = 0x19;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03d88);
        cVar1 = FUN_140e491e0(uVar5);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        local_b4 = 0xd;
        if (cVar1 == '\0') {
          local_c0 = 0x3ff0000000000000;
        }
        else {
          local_c0 = 0;
        }
        local_178 = 0x1a;
        if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        uStack_ec = 0;
        local_f8 = 0;
        local_178 = 0x1b;
        if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        uStack_fc = 0;
        local_108 = 0;
        local_178 = 0x1d;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        uVar10 = (undefined4)((ulonglong)ppdVar6 >> 0x20);
        local_19c = 0;
        local_1a8 = 0.0;
        iVar8 = 0;
        if ((local_14c == 2) && (local_158 != 0.0)) {
          iVar8 = *(int *)((longlong)local_158 + 0x24);
        }
        while (0 < iVar8) {
          iVar8 = iVar8 + -1;
          local_178 = 0x20;
          iVar2 = FUN_140e4a740(&local_1a8);
          pdVar4 = (double *)0x0;
          if (((local_14c & 0xffffff) == 2) && (local_158 != 0.0)) {
            if ((iVar2 < 0) || (*(int *)((longlong)local_158 + 0x24) <= iVar2)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                            *(undefined4 *)((longlong)local_158 + 0x24));
            }
            else {
              pdVar4 = (double *)((longlong)iVar2 * 0x10 + *(longlong *)((longlong)local_158 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            pdVar4 = &local_158;
          }
          iVar2 = FUN_140e63cb0(local_88,&local_res8,&local_res10,pdVar4);
          if (0 < iVar2) {
            do {
              local_178 = 0x22;
              cVar1 = FUN_140e491e0(&local_c0);
              if (cVar1 == '\0') {
                uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04148);
                cVar1 = FUN_140e491e0(uVar5);
                if (cVar1 != '\0') goto LAB_1400e8a31;
                local_178 = 0x2a;
                local_198 = 1.0;
                uStack_18c = 0xd;
                local_168 = 0;
                uStack_164 = 0x3ff00000;
                uStack_160 = uStack_190;
                uStack_15c = 0xd;
                if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_118);
                }
                FUN_140041b80(&local_118,&local_168);
              }
              else {
LAB_1400e8a31:
                local_178 = 0x24;
                if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1b8);
                }
                local_1b8 = 0;
                local_1b0 = 0;
                local_1ac = 5;
                ppdVar6 = (double **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd598);
                puVar7 = (undefined8 *)FUN_140e63610(local_res8,local_res10,&local_1b8,0,ppdVar6,0);
                if (puVar7 != &local_118) {
                  local_168 = *(undefined4 *)puVar7;
                  uStack_164 = *(undefined4 *)((longlong)puVar7 + 4);
                  uStack_160 = *(undefined4 *)(puVar7 + 1);
                  uStack_15c = *(undefined4 *)((longlong)puVar7 + 0xc);
                  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(&local_118);
                  }
                  FUN_140041b80(&local_118,&local_168);
                }
                local_178 = 0x25;
                uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a041a8);
                FUN_1400460e0(&local_f8,uVar5);
                local_178 = 0x26;
                uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a041c8);
                FUN_1400460e0(&local_108,uVar5);
              }
              cVar1 = FUN_140e643f0(local_88,&local_res8,&local_res10);
            } while (cVar1 != '\0');
          }
          FUN_140e63970(local_88,&local_res8,&local_res10);
          local_178 = 0x2e;
          cVar1 = FUN_140e491e0(&local_118);
          uVar10 = (undefined4)((ulonglong)ppdVar6 >> 0x20);
          if (cVar1 == '\0') {
            local_178 = 0x34;
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            local_1b8 = 0;
            local_1b0 = 0;
            local_1ac = 5;
            local_e8 = &local_158;
            local_e0 = &local_1a8;
            local_168 = _DAT_1419e1cc0;
            uStack_164 = uRam00000001419e1cc4;
            uStack_160 = uRam00000001419e1cc8;
            uStack_15c = uRam00000001419e1ccc;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_128);
            }
            FUN_140041b80(local_128,&local_168);
            local_d8 = local_128;
            ppdVar6 = (double **)CONCAT44(uVar10,DAT_1419fd808);
            FUN_140e634e0(local_res8,local_res10,&local_1b8,3,ppdVar6,&local_e8);
          }
          else {
            local_178 = 0x30;
            uVar3 = local_19c & 0xffffff;
            if (uVar3 == 0) {
LAB_1400e8bb4:
              local_1a8 = local_1a8 + 1.0;
            }
            else if (uVar3 == 1) {
              local_1a8 = (double)FUN_140e4b060(&local_1a8);
              local_1a8 = local_1a8 + 1.0;
              local_19c = 0;
            }
            else if (uVar3 == 7) {
              local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
            }
            else if (uVar3 == 10) {
              local_1a8 = (double)((longlong)local_1a8 + 1);
            }
            else {
              if (uVar3 == 0xd) {
                local_19c = 0;
                goto LAB_1400e8bb4;
              }
              FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
            }
          }
          if (local_78 != 0) {
            FUN_140e4cd60();
          }
          uVar10 = (undefined4)((ulonglong)ppdVar6 >> 0x20);
        }
        local_178 = 0x38;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03db8);
        FUN_140042560(&local_f8,uVar5);
        local_178 = 0x39;
        FUN_140042560(&local_108,uVar5);
        local_178 = 0x3b;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        pdVar4 = (double *)(**(code **)(*DAT_141ddc9b8 + 8))(DAT_141ddc9b8,DAT_1419febe8);
        if (pdVar4 != &local_148) {
          local_168 = *(undefined4 *)pdVar4;
          uStack_164 = *(undefined4 *)((longlong)pdVar4 + 4);
          uStack_160 = *(undefined4 *)(pdVar4 + 1);
          uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
          if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_168);
        }
        local_e8 = &local_148;
        local_e0 = &local_b0;
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1b8,2,CONCAT44(uVar10,DAT_1419ff4f8),
                              &local_e8);
        iVar8 = FUN_140e63cb0(local_68,&local_res8,&local_res10,uVar5);
        if (0 < iVar8) {
          do {
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03db8);
            local_178 = 0x3d;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03db8);
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a042b8);
            uStack_18c = 0xd;
            local_198 = 1.0;
            if (&local_198 != puVar7) {
              local_168 = 0;
              uStack_164 = 0x3ff00000;
              uStack_160 = uStack_190;
              uStack_15c = 0xd;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_168);
            }
            local_178 = 0x3e;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe418);
            FUN_140e609c0(local_res8);
            if (&local_f8 != puVar7) {
              local_168 = (undefined4)local_f8;
              uStack_164 = local_f8._4_4_;
              uStack_160 = uStack_f0;
              uStack_15c = uStack_ec;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_168);
            }
            FUN_140e60910(1);
            local_178 = 0x3f;
            puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fe228);
            FUN_140e609c0(local_res8);
            if (&local_108 != puVar7) {
              local_168 = (undefined4)local_108;
              uStack_164 = local_108._4_4_;
              uStack_160 = uStack_100;
              uStack_15c = uStack_fc;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar7);
              }
              FUN_140041b80(puVar7,&local_168);
            }
            FUN_140e60910(1);
            cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
          } while (cVar1 != '\0');
        }
        FUN_140e63970(local_68,&local_res8,&local_res10);
        if (local_58 != 0) {
          FUN_140e4cd60();
        }
      }
      goto LAB_1400e9074;
    }
  }
  local_178 = 0x45;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  pdVar4 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04338);
  if (pdVar4 != &local_148) {
    local_168 = *(undefined4 *)pdVar4;
    uStack_164 = *(undefined4 *)((longlong)pdVar4 + 4);
    uStack_160 = *(undefined4 *)(pdVar4 + 1);
    uStack_15c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  local_e8 = &local_148;
  local_168 = _DAT_141dc6170;
  uStack_164 = uRam0000000141dc6174;
  uStack_160 = uRam0000000141dc6178;
  uStack_15c = uRam0000000141dc617c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_168);
  local_e0 = &local_138;
  FUN_140e634e0(local_res8,local_res10,&local_1b8,2,CONCAT44(uVar10,DAT_1419fee68),&local_e8);
LAB_1400e9074:
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
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
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return param_3;
}


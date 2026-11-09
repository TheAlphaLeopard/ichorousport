// gml_GlobalScript___InputRestart @ 0x1400ce4f0

undefined8 *
gml_GlobalScript___InputRestart
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  double *pdVar11;
  longlong *plVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong in_stack_fffffffffffffe08;
  longlong local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  uint local_1cc;
  uint local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined4 local_1b0;
  longlong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  uint uStack_16c;
  longlong local_168;
  uint uStack_15c;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_1b8 = "gml_Script_anon@152@__InputRegisterUpdatePlayer@__InputRegisterUpdatePlayer";
  local_1c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1c0;
  local_1b0 = 5;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uVar13 = 0xffffff;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_res20 = 0xffffff;
  uStack_15c = 0xffffff;
  lVar14 = 0;
  local_168 = 0;
  local_1c8 = 0xffffff;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uVar15 = 0xffffff;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_fc = 0;
  local_108 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc808) &&
     (_Init_thread_header(&DAT_141ddc808), DAT_141ddc808 == -1)) {
    DAT_141ddc810 = (longlong *)FUN_140e63aa0(DAT_141a02ca8);
    _Init_thread_footer(&DAT_141ddc808);
  }
  if (DAT_141ddc057 == '\0') {
    FUN_140e64380(DAT_141ddc810,
                  "gml_Script_anon@152@__InputRegisterUpdatePlayer@__InputRegisterUpdatePlayer");
    FUN_140e64380(local_res8,
                  "gml_Script_anon@152@__InputRegisterUpdatePlayer@__InputRegisterUpdatePlayer");
  }
  local_1b0 = 7;
  if (DAT_141ddc057 == '\0') {
    DAT_141ddc057 = '\x01';
    puVar6 = (undefined4 *)(**(code **)(*DAT_141ddc810 + 0x10))(DAT_141ddc810,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc810);
    puVar7 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_108,0,0);
    if (puVar7 != puVar6) {
      local_148 = *puVar7;
      uStack_144 = puVar7[1];
      uStack_140 = puVar7[2];
      uStack_13c = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar6 = (undefined4 *)(**(code **)(*DAT_141ddc810 + 0x10))(DAT_141ddc810,DAT_141a026b8);
    FUN_140e609c0(DAT_141ddc810);
    in_stack_fffffffffffffe08 = 0;
    puVar7 = (undefined4 *)gml_Script___InputTrace(local_res8,local_res10,&local_188,0,0);
    if (puVar7 != puVar6) {
      local_148 = *puVar7;
      uStack_144 = puVar7[1];
      uStack_140 = puVar7[2];
      uStack_13c = puVar7[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
    }
    FUN_140e60910(1);
    uVar8 = (**(code **)(*DAT_141ddc810 + 8))(DAT_141ddc810,DAT_1419fcb48);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141ddc810 + 0x10))(DAT_141ddc810,DAT_1419fd528);
    in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_1419fd6a8,0x80000000,&local_128,in_stack_fffffffffffffe08,0);
    FUN_140e609c0(DAT_141ddc810);
    if (&local_128 != puVar9) {
      local_148 = (undefined4)local_128;
      uStack_144 = local_128._4_4_;
      uStack_140 = uStack_120;
      uStack_13c = uStack_11c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_148);
    }
    FUN_140e60910(1);
  }
  local_1b0 = 0xb;
  plVar10 = (longlong *)(**(code **)(*DAT_141ddc810 + 8))(DAT_141ddc810,DAT_141a026b8);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar4 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar4 = FUN_140e63cb0(local_b8,&local_res8,&local_res10,plVar10);
  if (0 < iVar4) {
    do {
      local_1b0 = 0xd;
      local_f8 = (**(code **)(*DAT_141ddc810 + 8))(DAT_141ddc810,DAT_1419fcb48);
      in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffffffffff00;
      FUN_140e87440(local_f8,DAT_1419fe1c8,0x80000000,&local_138,in_stack_fffffffffffffe08,0);
      local_1e8 = local_138;
      uStack_1e0 = CONCAT44(uStack_12c,uStack_130);
      if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1e8);
      local_1b0 = 0xf;
      plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6e8);
      if (plVar10 != &local_198) {
        local_1e8 = *plVar10;
        uStack_1e0 = plVar10[1];
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1e8);
      }
      local_1b0 = 0x10;
      plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd7a8);
      if (plVar10 != &local_168) {
        local_1e8 = *plVar10;
        uStack_1e0 = plVar10[1];
        if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_1e8);
        local_res20 = uStack_15c;
        lVar14 = local_168;
      }
      uVar5 = local_res20;
      local_1b0 = 0x11;
      plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd498);
      if (plVar10 != &local_178) {
        local_1e8 = *plVar10;
        uStack_1e0 = plVar10[1];
        if ((1 << ((byte)local_1c8 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1e8);
        local_1c8 = uStack_16c;
      }
      local_1b0 = 0x13;
      uStack_c0 = CONCAT44(0xd,(undefined4)uStack_c0);
      local_c8 = 0;
      local_1e8 = 0;
      uStack_1e0 = uStack_c0;
      if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1e8);
      local_1b0 = 0x1c;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = 0.0;
      local_1b0 = 0x1d;
      pdVar11 = (double *)(**(code **)(*DAT_141ddc810 + 8))(DAT_141ddc810,DAT_1419fd528);
      if ((*(uint *)((longlong)pdVar11 + 0xc) & 0xffffff) == 0) {
        dVar19 = *pdVar11;
      }
      else {
        dVar19 = (double)FUN_140e4b060(pdVar11);
      }
      lVar1 = local_158;
      uVar18 = (ulonglong)dVar19;
      if (0 < (int)uVar18) {
        lVar2 = CONCAT44(uStack_14c,uStack_150);
        do {
          plVar10 = (longlong *)0x0;
          uVar17 = (int)uVar18 - 1;
          uVar18 = (ulonglong)uVar17;
          local_1b0 = 0x1f;
          iVar4 = FUN_140e4a740(&local_1d8);
          if (((local_18c & 0xffffff) == 2) && (local_198 != 0)) {
            if ((iVar4 < 0) || (*(int *)(local_198 + 0x24) <= iVar4)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                            *(undefined4 *)(local_198 + 0x24));
            }
            else {
              plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_198 + 8));
            }
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            plVar10 = &local_198;
          }
          iVar4 = FUN_140e63cb0(local_98,&local_res8,&local_res10,plVar10);
          if (0 < iVar4) {
            uVar16 = local_1c8 & 0xffffff;
            do {
              local_1b0 = 0x21;
              plVar10 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd828);
              plVar12 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde28);
              FUN_140e609c0(local_res8);
              if (plVar10 != plVar12) {
                local_1e8 = *plVar10;
                uStack_1e0 = plVar10[1];
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar12);
                }
                FUN_140041b80(plVar12,&local_1e8);
              }
              FUN_140e60910(1);
              local_1b0 = 0x23;
              plVar12 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd488);
              FUN_140e609c0(local_res8);
              iVar4 = FUN_140e4a740(&local_1d8);
              plVar10 = (longlong *)0x0;
              if (((uVar5 & 0xffffff) == 2) && (lVar14 != 0)) {
                if ((iVar4 < 0) || (*(int *)(lVar14 + 0x24) <= iVar4)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                *(undefined4 *)(lVar14 + 0x24));
                }
                else {
                  plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar14 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar10 = &local_168;
              }
              if (plVar10 != plVar12) {
                local_1e8 = *plVar10;
                uStack_1e0 = plVar10[1];
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar12);
                }
                FUN_140041b80(plVar12,&local_1e8);
              }
              FUN_140e60910(1);
              local_1b0 = 0x24;
              plVar12 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6f8);
              FUN_140e609c0(local_res8);
              iVar4 = FUN_140e4a740(&local_1d8);
              plVar10 = (longlong *)0x0;
              if ((uVar16 == 2) && (local_178 != 0)) {
                if ((iVar4 < 0) || (*(int *)(local_178 + 0x24) <= iVar4)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                *(undefined4 *)(local_178 + 0x24));
                }
                else {
                  plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_178 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar10 = &local_178;
              }
              if (plVar10 != plVar12) {
                local_1e8 = *plVar10;
                uStack_1e0 = plVar10[1];
                if ((1 << ((byte)*(undefined4 *)((longlong)plVar12 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(plVar12);
                }
                FUN_140041b80(plVar12,&local_1e8);
              }
              FUN_140e60910(1);
              local_1b0 = 0x26;
              uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd6f8);
              local_10c = 0;
              local_118 = 0;
              iVar4 = FUN_140e851f0(uVar8,&local_118,DAT_141955260,1);
              if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_118);
              }
              if (iVar4 < 1) {
                local_1b0 = 0x2f;
                puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
                uStack_cc = 0xd;
                local_d8 = 0;
                if (&local_d8 != puVar9) {
                  local_1e8 = 0;
                  uStack_1e0 = CONCAT44(0xd,uStack_d0);
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_1e8);
                }
              }
              else {
                local_1b0 = 0x28;
                local_148 = 0;
                uStack_144 = 0x3ff00000;
                uStack_13c = 0xd;
                local_1e8 = 0x3ff0000000000000;
                uStack_1e0 = CONCAT44(0xd,uStack_140);
                if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                FUN_140041b80(&local_1a8,&local_1e8);
                local_1b0 = 0x2a;
                puVar9 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
                uStack_dc = 0xd;
                local_e8 = 0x3ff0000000000000;
                if (&local_e8 != puVar9) {
                  local_1e8 = 0x3ff0000000000000;
                  uStack_1e0 = CONCAT44(0xd,uStack_e0);
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar9);
                  }
                  FUN_140041b80(puVar9,&local_1e8);
                }
                local_1b0 = 0x2b;
                uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fde28);
                cVar3 = FUN_140e491e0(uVar8);
                if (cVar3 == '\0') {
                  local_1b0 = 0x2b;
                  plVar10 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd758);
                  FUN_140e609c0(local_res8);
                  if (&local_158 != plVar10) {
                    local_1e8 = lVar1;
                    uStack_1e0 = lVar2;
                    if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0)
                    {
                      FUN_140041a50(plVar10);
                    }
                    FUN_140041b80(plVar10,&local_1e8);
                  }
                  FUN_140e60910(1);
                }
              }
              cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
            } while (cVar3 != '\0');
          }
          FUN_140e63970(local_98,&local_res8,&local_res10);
          DAT_141a67c38 = 1;
          in_stack_fffffffffffffe08 = in_stack_fffffffffffffe08 & 0xffffffffffffff00;
          FUN_140e87440(local_f8,DAT_1419fe1c8,0x80000000,&local_138,in_stack_fffffffffffffe08,0);
          DAT_141a67c38 = 0;
          DAT_141a72aac = 0;
          local_1b0 = 0x33;
          uVar5 = local_1cc & 0xffffff;
          if (uVar5 == 0) {
LAB_1400cf0a2:
            local_1d8 = local_1d8 + 1.0;
          }
          else {
            if (uVar5 == 1) {
              local_1d8 = (double)FUN_140e4b060(&local_1d8);
              local_1cc = 0;
              goto LAB_1400cf0a2;
            }
            if (uVar5 == 7) {
              local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_1d8 = (double)((longlong)local_1d8 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_1cc = 0;
                goto LAB_1400cf0a2;
              }
              FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
            }
          }
          if (local_88 != 0) {
            FUN_140e4cd60();
          }
          uVar5 = local_res20;
        } while (0 < (int)uVar17);
      }
      local_1b0 = 0x36;
      plVar10 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd618);
      FUN_140e609c0(local_res8);
      if (&local_1a8 != plVar10) {
        local_1e8 = local_1a8;
        uStack_1e0 = CONCAT44(uStack_19c,uStack_1a0);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar10);
        }
        FUN_140041b80(plVar10,&local_1e8);
      }
      FUN_140e60910(1);
      cVar3 = FUN_140e643f0(local_b8,&local_res8,&local_res10);
      uVar13 = uStack_14c;
      uVar15 = uStack_19c;
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_b8,&local_res8,&local_res10);
  if (local_a8 != 0) {
    FUN_140e4cd60();
    local_a8 = 0;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uVar15 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1c8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  DAT_141dc7a50 = (undefined8 *)local_1c0;
  return local_res18;
}


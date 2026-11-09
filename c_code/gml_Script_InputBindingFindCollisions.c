// gml_Script_InputBindingFindCollisions @ 0x1402f6bd0

undefined8 *
gml_Script_InputBindingFindCollisions
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong *puVar13;
  double *pdVar14;
  uint uVar15;
  ulonglong uVar16;
  byte bVar17;
  double dVar18;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  ulonglong uVar19;
  undefined4 uVar21;
  undefined8 uVar20;
  ulonglong in_stack_fffffffffffffde0;
  double local_218;
  uint local_20c;
  double local_208;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  uint local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  uint local_174;
  longlong local_170;
  uint uStack_164;
  ulonglong local_160;
  undefined4 local_158;
  undefined4 local_154;
  ulonglong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128 [2];
  double local_118;
  byte local_10c;
  undefined8 local_f8 [2];
  undefined4 local_e8 [4];
  undefined8 *local_d8;
  double *local_d0;
  double *local_c8;
  undefined8 *local_c0;
  undefined4 *local_b8;
  ulonglong local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint local_a0 [2];
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  uVar15 = 0;
  local_res20 = 0;
  local_1a0 = "gml_Script___InputBindingFindInternal";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x1c;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a0,param_4,4,param_5);
  uVar21 = 1;
  _eh_vector_constructor_iterator_(local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  uVar5 = 0xffffff;
  bVar17 = 0xff;
  uStack_164 = 0xffffff;
  local_170 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef7e8);
  local_1d4 = 0;
  local_1e0 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf34) &&
     (_Init_thread_header(&DAT_141dddf34), DAT_141dddf34 == -1)) {
    DAT_141dddf50 = (longlong *)FUN_140e63aa0(DAT_1419ef7b8);
    _Init_thread_footer(&DAT_141dddf34);
  }
  if (DAT_141ddc0ac == '\0') {
    FUN_140e64380(DAT_141dddf50,"gml_Script___InputBindingFindInternal");
    FUN_140e64380(local_res8,"gml_Script___InputBindingFindInternal");
  }
  local_198 = 0x1e;
  if (DAT_141ddc0ac == '\0') {
    DAT_141ddc0ac = '\x01';
    puVar7 = (undefined4 *)(**(code **)(*DAT_141dddf50 + 0x10))(DAT_141dddf50,DAT_141a026b8);
    FUN_140e609c0(DAT_141dddf50);
    puVar8 = (undefined4 *)gml_Script___InputTrace(local_res8,local_res10,&local_1e0,0,0);
    if (puVar8 != puVar7) {
      local_1c8._0_4_ = *puVar8;
      local_1c8._4_4_ = puVar8[1];
      uStack_1c0 = puVar8[2];
      uStack_1bc = puVar8[3];
      if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_1c8);
    }
    FUN_140e60910(1);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dddf50 + 0x10))(DAT_141dddf50,DAT_1419fd528);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar19 = 0;
    uVar10 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_1f8,0,0);
    uVar19 = uVar19 & 0xffffffffffffff00;
    FUN_140e87440(uVar10,DAT_1419fd6a8,0x80000000,&local_138,uVar19,
                  in_stack_fffffffffffffde0 & 0xffffffffffffff00);
    uVar21 = (undefined4)(uVar19 >> 0x20);
    FUN_140e609c0(DAT_141dddf50);
    if (&local_138 != puVar9) {
      local_1c8._0_4_ = (undefined4)local_138;
      local_1c8._4_4_ = local_138._4_4_;
      uStack_1c0 = uStack_130;
      uStack_1bc = uStack_12c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_1c8);
    }
    FUN_140e60910(1);
  }
  local_198 = 0x21;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 5;
  puVar9 = &DAT_1419df7b0;
  uVar19 = (ulonglong)local_a0[0];
  if ((int)local_a0[0] < 3) {
    puVar11 = &DAT_1419df7b0;
LAB_1402f6f30:
    local_1c8._0_4_ = *(undefined4 *)puVar11;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_1c0 = *(undefined4 *)(puVar11 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_1c8);
  }
  else {
    puVar11 = (undefined8 *)local_98[2];
    if (puVar11 != local_128) goto LAB_1402f6f30;
  }
  local_d8 = local_128;
  uVar20 = CONCAT44(uVar21,DAT_1419fdbf8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_1e0,1,uVar20,&local_d8);
  cVar2 = FUN_140e491e0(uVar10);
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  if (cVar2 == '\0') goto LAB_1402f709e;
  local_198 = 0x21;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  if ((int)local_a0[0] < 3) {
    pdVar14 = (double *)&DAT_1419df7b0;
LAB_1402f6ff4:
    local_1c8._0_4_ = *(undefined4 *)pdVar14;
    local_1c8._4_4_ = *(undefined4 *)((longlong)pdVar14 + 4);
    uStack_1c0 = *(undefined4 *)(pdVar14 + 1);
    uStack_1bc = *(undefined4 *)((longlong)pdVar14 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1c8);
  }
  else {
    pdVar14 = (double *)local_98[2];
    if (pdVar14 != &local_118) goto LAB_1402f6ff4;
  }
  local_d0 = &local_118;
  if (2 < (int)local_a0[0]) {
    puVar9 = (undefined8 *)local_98[2];
  }
  uVar20 = CONCAT44(uVar21,DAT_1419fdc48);
  puVar11 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1f8,1,uVar20,&local_d0);
  if (puVar11 != puVar9) {
    local_1c8._0_4_ = *(undefined4 *)puVar11;
    local_1c8._4_4_ = *(undefined4 *)((longlong)puVar11 + 4);
    uStack_1c0 = *(undefined4 *)(puVar11 + 1);
    uStack_1bc = *(undefined4 *)((longlong)puVar11 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1c8);
  }
LAB_1402f709e:
  local_198 = 0x23;
  plVar12 = (longlong *)(**(code **)(*DAT_141dddf50 + 8))(DAT_141dddf50,DAT_141a026b8);
  if ((int)local_a0[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_98[3];
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_90,&local_res8,&local_res10,plVar12);
  if (0 < iVar3) {
    do {
      local_198 = 0x25;
      if ((int)local_a0[0] < 2) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_98[1];
      }
      cVar2 = FUN_140e491e0(puVar9);
      if (cVar2 == '\0') {
        puVar13 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4d8);
        local_154 = *(undefined4 *)((longlong)puVar13 + 0xc);
        local_158 = (int)puVar13[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_160 = *puVar13;
        }
        else {
          FUN_1400419b0(&local_160,puVar13);
        }
        puVar13 = &local_160;
        uVar15 = uVar15 | 10;
      }
      else {
        puVar13 = (ulonglong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4c8);
        uStack_144 = *(undefined4 *)((longlong)puVar13 + 0xc);
        uStack_148 = (int)puVar13[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar13 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_150 = *puVar13;
        }
        else {
          FUN_1400419b0(&local_150,puVar13);
        }
        puVar13 = &local_150;
        uVar15 = uVar15 | 5;
      }
      local_b0 = *puVar13;
      uStack_a8 = (undefined4)puVar13[1];
      uStack_a4 = *(undefined4 *)((longlong)puVar13 + 0xc);
      local_res20 = uVar15;
      local_1e8 = uVar15;
      if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_b0);
      if (((uVar15 & 2) != 0) &&
         (uVar15 = uVar15 & 0xfffffffd, local_res20 = uVar15, local_1e8 = uVar15,
         (1 << ((byte)local_154 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_160);
      }
      if (((uVar15 & 1) != 0) &&
         (uVar15 = uVar15 & 0xfffffffe, local_res20 = uVar15, local_1e8 = uVar15,
         (1 << ((byte)uStack_144 & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_150);
      }
      local_198 = 0x27;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1fc = 0;
      local_208 = 0.0;
      local_198 = 0x28;
      pdVar14 = (double *)(**(code **)(*DAT_141dddf50 + 8))(DAT_141dddf50,DAT_1419fd528);
      if ((*(uint *)((longlong)pdVar14 + 0xc) & 0xffffff) == 0) {
        dVar18 = *pdVar14;
      }
      else {
        dVar18 = (double)FUN_140e4b060(pdVar14);
      }
      lVar1 = local_170;
      uVar16 = (ulonglong)dVar18;
      local_174 = uStack_164;
      if (0 < (int)uVar16) {
        local_178 = uStack_164 & 0xffffff;
        do {
          uVar5 = local_178;
          plVar12 = (longlong *)0x0;
          uVar16 = (ulonglong)((int)uVar16 - 1);
          local_198 = 0x2a;
          local_b0 = uVar16;
          iVar3 = FUN_140e4a740(&local_208);
          if ((uVar5 == 2) && (lVar1 != 0)) {
            if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
              FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                            *(undefined4 *)(lVar1 + 0x24));
            }
            else {
              plVar12 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
            }
            if (plVar12 != &local_1b8) goto LAB_1402f7398;
          }
          else {
            FUN_140e632c0("trying to index variable that is not an array");
            plVar12 = &local_170;
LAB_1402f7398:
            local_188 = (undefined4)*plVar12;
            uStack_184 = *(undefined4 *)((longlong)plVar12 + 4);
            uStack_180 = (undefined4)plVar12[1];
            uStack_17c = *(undefined4 *)((longlong)plVar12 + 0xc);
            if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            FUN_140041b80(&local_1b8,&local_188);
          }
          local_198 = 0x2b;
          if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_218);
          }
          local_20c = 0;
          local_218 = 0.0;
          iVar3 = 0;
          if ((local_1ac == 2) && (local_1b8 != 0)) {
            iVar3 = *(int *)(local_1b8 + 0x24);
          }
          if (0 < iVar3) {
            do {
              plVar12 = (longlong *)0x0;
              iVar3 = iVar3 + -1;
              local_198 = 0x2e;
              if ((int)local_a0[0] < 3) {
                puVar9 = &DAT_1419df7b0;
              }
              else {
                puVar9 = (undefined8 *)local_98[2];
              }
              iVar4 = FUN_140e4a740(&local_218);
              if (((local_1ac & 0xffffff) == 2) && (local_1b8 != 0)) {
                if ((iVar4 < 0) || (*(int *)(local_1b8 + 0x24) <= iVar4)) {
                  FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                                *(undefined4 *)(local_1b8 + 0x24));
                }
                else {
                  plVar12 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_1b8 + 8));
                }
              }
              else {
                FUN_140e632c0("trying to index variable that is not an array");
                plVar12 = &local_1b8;
              }
              iVar4 = FUN_140e851f0(plVar12,puVar9,DAT_141955260,0);
              uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
              if (iVar4 == 0) {
                local_198 = 0x30;
                if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1e0);
                }
                local_1e0 = 0;
                local_1d8 = 0;
                local_1d4 = 5;
                if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1f8);
                }
                local_1f8 = 0;
                local_1f0 = 0;
                local_1ec = 5;
                FUN_140e609c0(DAT_141a729d8);
                FUN_140e645a0(&local_1c8,gml_GlobalScript_InputBindingFindCollisions,0);
                if (&local_1c8 != puVar6) {
                  local_188 = (undefined4)local_1c8;
                  uStack_184 = local_1c8._4_4_;
                  uStack_180 = uStack_1c0;
                  uStack_17c = uStack_1bc;
                  if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(puVar6);
                  }
                  FUN_140041b80(puVar6,&local_188);
                }
                FUN_140e60910(1);
                if (puVar6 != local_128) {
                  local_188 = *(undefined4 *)puVar6;
                  uStack_184 = *(undefined4 *)((longlong)puVar6 + 4);
                  uStack_180 = *(undefined4 *)(puVar6 + 1);
                  uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
                  if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_128);
                  }
                  FUN_140041b80(local_128,&local_188);
                }
                if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1c8);
                }
                local_d8 = local_128;
                local_d0 = &local_208;
                local_c8 = &local_218;
                if ((int)local_a0[0] < 1) {
                  puVar9 = &DAT_1419df7b0;
LAB_1402f7607:
                  local_188 = *(undefined4 *)puVar9;
                  uStack_184 = *(undefined4 *)((longlong)puVar9 + 4);
                  uStack_180 = *(undefined4 *)(puVar9 + 1);
                  uStack_17c = *(undefined4 *)((longlong)puVar9 + 0xc);
                  if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_f8);
                  }
                  FUN_140041b80(local_f8,&local_188);
                }
                else {
                  puVar9 = (undefined8 *)*local_98;
                  if (puVar9 != local_f8) goto LAB_1402f7607;
                }
                local_c0 = local_f8;
                uVar10 = CONCAT44(uVar21,DAT_1419fd6d8);
                puVar7 = (undefined4 *)
                         FUN_140e634e0(local_res8,local_res10,&local_1f8,3,uVar10,&local_d8);
                uVar21 = (undefined4)((ulonglong)uVar10 >> 0x20);
                if (puVar7 != local_e8) {
                  local_188 = *puVar7;
                  uStack_184 = puVar7[1];
                  uStack_180 = puVar7[2];
                  uStack_17c = puVar7[3];
                  if ((1 << ((byte)local_e8[3] & 0x1f) & 0x46U) != 0) {
                    FUN_140041a50(local_e8);
                  }
                  FUN_140041b80(local_e8,&local_188);
                }
                local_b8 = local_e8;
                uVar20 = CONCAT44(uVar21,DAT_1419fe568);
                FUN_140e634e0(local_res8,local_res10,&local_1e0,2,uVar20,&local_c0);
              }
              local_198 = 0x36;
              uVar5 = local_20c & 0xffffff;
              if (uVar5 == 0) {
LAB_1402f773f:
                local_218 = local_218 + 1.0;
              }
              else {
                if (uVar5 == 1) {
                  local_218 = (double)FUN_140e4b060(&local_218);
                  local_20c = 0;
                  goto LAB_1402f773f;
                }
                if (uVar5 == 7) {
                  local_218 = (double)CONCAT44(local_218._4_4_,local_218._0_4_ + 1);
                }
                else if (uVar5 == 10) {
                  local_218 = (double)((longlong)local_218 + 1);
                }
                else {
                  if (uVar5 == 0xd) {
                    local_20c = 0;
                    goto LAB_1402f773f;
                  }
                  FUN_140042910(&DAT_14172c3d8,&local_218);
                }
              }
            } while (0 < iVar3);
            uVar16 = local_b0;
          }
          local_198 = 0x39;
          uVar5 = local_1fc & 0xffffff;
          if (uVar5 == 0) {
LAB_1402f77c9:
            local_208 = local_208 + 1.0;
          }
          else {
            if (uVar5 == 1) {
              local_208 = (double)FUN_140e4b060(&local_208);
              local_1fc = 0;
              goto LAB_1402f77c9;
            }
            if (uVar5 == 7) {
              local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
            }
            else if (uVar5 == 10) {
              local_208 = (double)((longlong)local_208 + 1);
            }
            else {
              if (uVar5 == 0xd) {
                local_1fc = 0;
                goto LAB_1402f77c9;
              }
              FUN_140042910(&DAT_14172c3d8,&local_208);
            }
          }
        } while (0 < (int)uVar16);
        uVar15 = local_1e8;
      }
      uVar5 = local_174;
      bVar17 = (byte)local_174;
      cVar2 = FUN_140e643f0(local_90,&local_res8);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_90,&local_res8,&local_res10);
  if (local_80 != 0) {
    FUN_140e4cd60();
    local_80 = 0;
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << (bVar17 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_a0[0]) {
    puVar6 = local_98;
    do {
      puVar9 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      *puVar9 = 0;
      *(undefined4 *)(puVar9 + 1) = 0;
      *(undefined4 *)((longlong)puVar9 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  FUN_140e4cd60(local_98);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return local_res18;
}


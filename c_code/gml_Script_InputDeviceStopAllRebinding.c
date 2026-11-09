// gml_Script_InputDeviceStopAllRebinding @ 0x1403252c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputDeviceStopAllRebinding
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  double *pdVar9;
  uint *puVar10;
  longlong *plVar11;
  double *pdVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  ulonglong in_stack_fffffffffffffe50;
  double **ppdVar17;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint uStack_194;
  uint uStack_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  double local_178;
  uint local_16c;
  undefined8 local_168;
  uint uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  double local_138;
  undefined4 local_12c;
  double local_128;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  uint local_108 [3];
  byte local_fc;
  uint local_f8 [3];
  byte local_ec;
  uint local_e8 [3];
  byte local_dc;
  double *local_d8;
  double *local_d0;
  double *local_c8;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_150 = "gml_Script_InputDeviceSetRebinding";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x13;
  FUN_140041df0(local_68,param_4,5,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde218) &&
     (_Init_thread_header(&DAT_141dde218), DAT_141dde218 == -1)) {
    DAT_141dde210 = (longlong *)FUN_140e63aa0(DAT_1419f11f8);
    _Init_thread_footer(&DAT_141dde218);
  }
  local_148 = 0x13;
  pdVar12 = (double *)&DAT_1419df7b0;
  uVar13 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[2];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (local_148 = 0x13, 2 < (int)local_68[0])) &&
     (puVar7 = (undefined8 *)local_60[2], puVar7 != &DAT_1419df7b0)) {
    local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_168);
  }
  if ((int)local_68[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[3];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar4 == 0) && (3 < (int)local_68[0])) &&
     (puVar7 = (undefined8 *)local_60[3], puVar7 != &DAT_1419df7b0)) {
    local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_160 = DAT_1419df7b8;
    uStack_15c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_168);
  }
  if ((int)local_68[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[4];
  }
  iVar4 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_15c = 0xd;
    local_168 = 0x3ff0000000000000;
    if ((int)local_68[0] < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_60[4];
      if (&local_168 == puVar7) goto LAB_140325584;
    }
    local_198 = 0;
    uStack_194 = 0x3ff00000;
    uStack_190 = uStack_160;
    uStack_18c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_198);
  }
LAB_140325584:
  if (DAT_141ddc0df == '\0') {
    FUN_140e64380(DAT_141dde210,"gml_Script_InputDeviceSetRebinding");
    FUN_140e64380(param_1,"gml_Script_InputDeviceSetRebinding");
  }
  local_148 = 0x15;
  if (DAT_141ddc0df == '\0') {
    DAT_141ddc0df = '\x01';
    puVar7 = (undefined8 *)(**(code **)(*DAT_141dde210 + 0x10))(DAT_141dde210,DAT_1419f1038);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uVar14 = 0;
    uVar8 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_1a8,0,0);
    in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a02e18,0x80000000,&local_88,uVar14 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe50);
    FUN_140e609c0(DAT_141dde210);
    if (&local_88 != puVar7) {
      local_198 = (uint)local_88;
      uStack_194 = local_88._4_4_;
      uStack_190 = uStack_80;
      uStack_18c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_198);
    }
    FUN_140e60910(1);
    puVar7 = (undefined8 *)(**(code **)(*DAT_141dde210 + 0x10))(DAT_141dde210,DAT_141a02788);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    uVar14 = 0;
    uVar8 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_188,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a027d8,0x80000000,&local_98,uVar14,
                  in_stack_fffffffffffffe50 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde210);
    if (&local_98 != puVar7) {
      local_198 = (uint)local_98;
      uStack_194 = local_98._4_4_;
      uStack_190 = uStack_90;
      uStack_18c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_198);
    }
    FUN_140e60910(1);
  }
  local_148 = 0x18;
  if ((int)local_68[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_60;
  }
  uStack_15c = 0;
  local_168 = 0xc059000000000000;
  iVar4 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,0);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar4 != 0) {
    if ((int)local_68[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_60;
    }
    uStack_15c = 0;
    local_168 = 0;
    iVar4 = FUN_140e851f0(puVar7,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      local_148 = 0x1a;
      goto LAB_140326498;
    }
  }
  local_148 = 0x1d;
  if ((int)local_68[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[1];
  }
  cVar3 = FUN_140e491e0(puVar7);
  if (cVar3 == '\0') {
    local_148 = 0x2d;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_1419f1038);
    if (pdVar9 != &local_138) {
      local_198 = *(uint *)pdVar9;
      uStack_194 = *(uint *)((longlong)pdVar9 + 4);
      uStack_190 = *(uint *)(pdVar9 + 1);
      uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    local_d8 = &local_138;
    if ((int)local_68[0] < 1) {
      pdVar9 = (double *)&DAT_1419df7b0;
LAB_140325f14:
      local_198 = *(uint *)pdVar9;
      uStack_194 = *(uint *)((longlong)pdVar9 + 4);
      uStack_190 = *(uint *)(pdVar9 + 1);
      uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_198);
    }
    else {
      pdVar9 = (double *)*local_60;
      if (pdVar9 != &local_128) goto LAB_140325f14;
    }
    local_d0 = &local_128;
    uVar15 = CONCAT44(uVar16,DAT_141a01478);
    uVar8 = FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar15,&local_d8);
    uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') goto LAB_140326498;
    local_148 = 0x2f;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_1419f1038);
    if (pdVar9 != &local_118) {
      local_198 = *(uint *)pdVar9;
      uStack_194 = *(uint *)((longlong)pdVar9 + 4);
      uStack_190 = *(uint *)(pdVar9 + 1);
      uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_198);
    }
    local_c8 = &local_118;
    if ((int)local_68[0] < 1) {
      puVar10 = (uint *)&DAT_1419df7b0;
LAB_140326023:
      local_198 = *puVar10;
      uStack_194 = puVar10[1];
      uStack_190 = puVar10[2];
      uStack_18c = puVar10[3];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_198);
    }
    else {
      puVar10 = (uint *)*local_60;
      if (puVar10 != local_108) goto LAB_140326023;
    }
    local_c0 = local_108;
    ppdVar17 = &local_c8;
    uVar14 = CONCAT44(uVar16,DAT_141a01f38);
    FUN_140e634e0(param_1,param_2,&local_188,2,uVar14,ppdVar17);
    local_148 = 0x31;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_16c = 0;
    local_178 = 0.0;
    local_148 = 0x32;
    plVar11 = (longlong *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_141a02788);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar11 + 0xc) == 2) && (*plVar11 != 0)) {
      iVar4 = *(int *)(*plVar11 + 0x24);
    }
    while (0 < iVar4) {
      iVar4 = iVar4 + -1;
      local_148 = 0x34;
      plVar11 = (longlong *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_141a02788);
      iVar5 = FUN_140e4a740(&local_178);
      if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      ppdVar17 = (double **)((ulonglong)ppdVar17 & 0xffffffffffffff00);
      uVar14 = uVar14 & 0xffffffffffffff00;
      FUN_140e87440(plVar11,DAT_1419fd5c8,0x80000000,&local_78,uVar14,ppdVar17);
      if ((int)local_68[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_60;
      }
      iVar5 = FUN_140e851f0(&local_78,puVar7,DAT_141955260,0);
      if (iVar5 == 0) {
        local_148 = 0x36;
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        uVar16 = (undefined4)(uVar14 >> 0x20);
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_141a02788);
        if (pdVar9 != &local_138) {
          local_198 = *(uint *)pdVar9;
          uStack_194 = *(undefined4 *)((longlong)pdVar9 + 4);
          uStack_190 = *(uint *)(pdVar9 + 1);
          uStack_18c = *(undefined4 *)((longlong)pdVar9 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_198);
        }
        local_d8 = &local_138;
        local_d0 = &local_178;
        local_198 = _DAT_1419e4000;
        uStack_194 = uRam00000001419e4004;
        uStack_190 = uRam00000001419e4008;
        uStack_18c = uRam00000001419e400c;
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_198);
        local_c8 = &local_118;
        uVar14 = CONCAT44(uVar16,DAT_1419fd808);
        ppdVar17 = &local_d8;
        FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar14,&local_d8);
      }
      else {
        local_148 = 0x3a;
        uVar6 = local_16c & 0xffffff;
        if (uVar6 != 0) {
          if (uVar6 != 1) {
            if (uVar6 == 7) {
              local_178 = (double)CONCAT44(local_178._4_4_,local_178._0_4_ + 1);
            }
            else if (uVar6 == 10) {
              local_178 = (double)((longlong)local_178 + 1);
            }
            else {
              if (uVar6 == 0xd) {
                local_16c = 0;
                goto LAB_14032632b;
              }
              FUN_140042910(&DAT_14172c3d8,&local_178,&local_178);
            }
            goto LAB_14032633c;
          }
          local_178 = (double)FUN_140e4b060(&local_178);
          local_16c = 0;
        }
LAB_14032632b:
        local_178 = local_178 + 1.0;
      }
LAB_14032633c:
    }
    local_148 = 0x3e;
    if ((int)local_68[0] < 5) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_60[4];
    }
    cVar3 = FUN_140e491e0(puVar7);
    if (cVar3 != '\0') {
      local_148 = 0x40;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      if (((int)local_68[0] < 1) || (pdVar12 = (double *)*local_60, pdVar12 != &local_138)) {
        local_198 = *(uint *)pdVar12;
        uStack_194 = *(uint *)((longlong)pdVar12 + 4);
        uStack_190 = *(uint *)(pdVar12 + 1);
        uStack_18c = *(uint *)((longlong)pdVar12 + 0xc);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_198);
      }
      local_d8 = &local_138;
      pdVar12 = (double *)
                gml_Script_InputDeviceGetPlayerUsingGamepad(param_1,param_2,&local_188,1,&local_d8);
      if (pdVar12 != &local_128) {
        local_198 = *(uint *)pdVar12;
        uStack_194 = *(uint *)((longlong)pdVar12 + 4);
        uStack_190 = *(uint *)(pdVar12 + 1);
        uStack_18c = *(uint *)((longlong)pdVar12 + 0xc);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_198);
      }
      local_d0 = &local_128;
      gml_Script__system_anon_145_InputVerbCount_InputVerbCount
                (param_1,param_2,&local_1a8,1,&local_d0);
    }
    goto LAB_140326498;
  }
  local_148 = 0x1f;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_1419f1038);
  if (pdVar9 != &local_138) {
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  local_d8 = &local_138;
  if ((int)local_68[0] < 1) {
    pdVar9 = (double *)&DAT_1419df7b0;
LAB_1403258ff:
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
  }
  else {
    pdVar9 = (double *)*local_60;
    if (pdVar9 != &local_128) goto LAB_1403258ff;
  }
  local_d0 = &local_128;
  uVar15 = CONCAT44(uVar16,DAT_141a01478);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_1a8,2,uVar15,&local_d8);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') goto LAB_140326498;
  local_148 = 0x21;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_198 = DAT_1419fdc28 & 0xffffff;
  uStack_194 = (int)(DAT_1419fdc28 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_194 == 0xf) {
    uStack_194 = 0x4000004;
  }
  else {
    uStack_194 = uStack_194 | 0x1000000;
  }
  uStack_15c = 0xf;
  local_168 = CONCAT44(uStack_194,DAT_1419fdc28) & 0xffffffff00ffffff;
  uStack_190 = uStack_160;
  uStack_18c = 0xf;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_198);
  local_c8 = &local_118;
  if ((int)local_68[0] < 1) {
    puVar10 = (uint *)&DAT_1419df7b0;
LAB_140325a35:
    local_198 = *puVar10;
    uStack_194 = puVar10[1];
    uStack_190 = puVar10[2];
    uStack_18c = puVar10[3];
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_198);
  }
  else {
    puVar10 = (uint *)*local_60;
    if (puVar10 != local_108) goto LAB_140325a35;
  }
  local_c0 = local_108;
  if ((int)local_68[0] < 3) {
    puVar10 = (uint *)&DAT_1419df7b0;
LAB_140325a85:
    local_198 = *puVar10;
    uStack_194 = puVar10[1];
    uStack_190 = puVar10[2];
    uStack_18c = puVar10[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_198);
  }
  else {
    puVar10 = (uint *)local_60[2];
    if (puVar10 != local_f8) goto LAB_140325a85;
  }
  local_b8 = local_f8;
  if ((int)local_68[0] < 4) {
    puVar10 = (uint *)&DAT_1419df7b0;
LAB_140325ad5:
    local_198 = *puVar10;
    uStack_194 = puVar10[1];
    uStack_190 = puVar10[2];
    uStack_18c = puVar10[3];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_198);
  }
  else {
    puVar10 = (uint *)local_60[3];
    if (puVar10 != local_e8) goto LAB_140325ad5;
  }
  local_b0 = local_e8;
  uVar8 = CONCAT44(uVar16,DAT_1419fd6d8);
  pdVar9 = (double *)FUN_140e634e0(param_1,param_2,&local_188,4,uVar8,&local_c8);
  uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
  if (pdVar9 != &local_a8) {
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_198);
  }
  local_148 = 0x22;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_1419f1038);
  if (pdVar9 != &local_138) {
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  local_d8 = &local_138;
  if ((int)local_68[0] < 1) {
    pdVar9 = (double *)&DAT_1419df7b0;
LAB_140325c0d:
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_198);
  }
  else {
    pdVar9 = (double *)*local_60;
    if (pdVar9 != &local_128) goto LAB_140325c0d;
  }
  local_d0 = &local_128;
  local_c8 = &local_a8;
  uVar8 = CONCAT44(uVar16,DAT_1419ff3d8);
  FUN_140e634e0(param_1,param_2,&local_1a8,3,uVar8,&local_d8);
  uVar16 = (undefined4)((ulonglong)uVar8 >> 0x20);
  local_148 = 0x23;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  pdVar9 = (double *)(**(code **)(*DAT_141dde210 + 8))(DAT_141dde210,DAT_141a02788);
  if (pdVar9 != &local_138) {
    local_198 = *(uint *)pdVar9;
    uStack_194 = *(uint *)((longlong)pdVar9 + 4);
    uStack_190 = *(uint *)(pdVar9 + 1);
    uStack_18c = *(uint *)((longlong)pdVar9 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_198);
  }
  local_d8 = &local_138;
  local_d0 = &local_a8;
  FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar16,DAT_1419fe568),&local_d8);
  local_148 = 0x25;
  if ((int)local_68[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_60[4];
  }
  cVar3 = FUN_140e491e0(puVar7);
  if (cVar3 != '\0') {
    local_148 = 0x27;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    if (((int)local_68[0] < 1) || (pdVar12 = (double *)*local_60, pdVar12 != &local_138)) {
      local_198 = *(uint *)pdVar12;
      uStack_194 = *(uint *)((longlong)pdVar12 + 4);
      uStack_190 = *(uint *)(pdVar12 + 1);
      uStack_18c = *(uint *)((longlong)pdVar12 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_198);
    }
    local_d8 = &local_138;
    pdVar12 = (double *)
              gml_Script_InputDeviceGetPlayerUsingGamepad(param_1,param_2,&local_188,1,&local_d8);
    if (pdVar12 != &local_128) {
      local_198 = *(uint *)pdVar12;
      uStack_194 = *(uint *)((longlong)pdVar12 + 4);
      uStack_190 = *(uint *)(pdVar12 + 1);
      uStack_18c = *(uint *)((longlong)pdVar12 + 0xc);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_198);
    }
    local_d0 = &local_128;
    gml_Script__system_anon_145_InputVerbCount_InputVerbCount
              (param_1,param_2,&local_1a8,1,&local_d0);
  }
LAB_140326498:
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,6,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar7 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}


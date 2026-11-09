// gml_Script_InputReleased @ 0x140363260

undefined8 *
gml_Script_InputReleased
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 **ppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  uint local_dc;
  double local_d8;
  uint local_cc;
  double local_c8;
  uint local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong *local_a0;
  double *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_b0 = "gml_Script_InputPressedMany";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xb;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = (undefined1 *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_cc = 0xffffff;
  local_d8 = 0.0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  local_11c = 0;
  local_128 = 0;
  local_84 = 0;
  local_90 = 0;
  local_80 = (undefined4 *)((longlong)param_3 + 0xc);
  *local_80 = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde6d8) &&
     (_Init_thread_header(&DAT_141dde6d8), DAT_141dde6d8 == -1)) {
    DAT_141dde6d0 = (longlong *)FUN_140e63aa0(DAT_1419f35d8);
    _Init_thread_footer(&DAT_141dde6d8);
  }
  local_a8 = 0xb;
  pdVar13 = (double *)&DAT_1419df7b0;
  uVar11 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_60[1];
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_a8 = 0xb;
    if ((int)local_68[0] < 2) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)local_60[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc132 == '\0') {
    FUN_140e64380(DAT_141dde6d0,"gml_Script_InputPressedMany");
    FUN_140e64380(param_1,"gml_Script_InputPressedMany");
  }
  local_a8 = 0xd;
  if (DAT_141ddc132 == '\0') {
    DAT_141ddc132 = '\x01';
    ppuVar7 = (undefined1 **)(**(code **)(*DAT_141dde6d0 + 0x10))(DAT_141dde6d0,DAT_1419efbd8);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar14 = 0;
    uVar8 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_128,0,0);
    FUN_140e87440(uVar8,DAT_141a02e78,0x80000000,&local_78,uVar14 & 0xffffffffffffff00,
                  in_stack_fffffffffffffed0 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde6d0);
    if (&local_78 != ppuVar7) {
      local_118 = local_78;
      uStack_110 = uStack_70;
      uStack_10c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)ppuVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(ppuVar7);
      }
      FUN_140041b80(ppuVar7,&local_118);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    local_90 = 0;
    local_88 = 0;
    local_84 = 5;
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dde6d0 + 0x10))(DAT_141dde6d0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6d0);
    uVar16 = 0;
    puVar10 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_90,0,0);
    if (puVar10 != puVar9) {
      local_118 = (undefined1 *)*puVar10;
      uStack_110 = *(undefined4 *)(puVar10 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_118);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x11;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_68[0] < 1) {
    plVar12 = &DAT_1419df7b0;
LAB_14036362c:
    local_118 = (undefined1 *)*plVar12;
    uStack_110 = (undefined4)plVar12[1];
    uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  else {
    plVar12 = (longlong *)*local_60;
    if (plVar12 != &local_108) goto LAB_14036362c;
  }
  local_a0 = &local_108;
  uVar15 = CONCAT44(uVar16,DAT_141a014a8);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar15,&local_a0);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 != '\0') {
    if ((int)local_68[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_60;
    }
    uStack_10c = 0;
    local_118 = &DAT_bff0000000000000;
    iVar4 = FUN_140e851f0(puVar9,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar4 == 0) {
      local_a8 = 0x13;
      puVar9 = (undefined8 *)(**(code **)(*DAT_141dde6d0 + 8))(DAT_141dde6d0,DAT_1419efbd8);
      if ((int)local_68[0] < 1) {
        puVar10 = &DAT_1419df7b0;
      }
      else {
        puVar10 = (undefined8 *)*local_60;
      }
      if (puVar9 != puVar10) {
        local_118 = (undefined1 *)*puVar9;
        uStack_110 = *(undefined4 *)(puVar9 + 1);
        uStack_10c = *(undefined4 *)((longlong)puVar9 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar10);
        }
        FUN_140041b80(puVar10,&local_118);
      }
    }
  }
  local_a8 = 0x16;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_68[0] < 1) {
    plVar12 = &DAT_1419df7b0;
LAB_1403637af:
    local_118 = (undefined1 *)*plVar12;
    uStack_110 = (undefined4)plVar12[1];
    uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  else {
    plVar12 = (longlong *)*local_60;
    if (plVar12 != &local_108) goto LAB_1403637af;
  }
  local_a0 = &local_108;
  uVar15 = CONCAT44(uVar16,DAT_1419fdb88);
  uVar8 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar15,&local_a0);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar3 = FUN_140e491e0(uVar8);
  if (cVar3 == '\0') {
    local_a8 = 0x21;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_68[0] < 2) {
      plVar12 = &DAT_1419df7b0;
LAB_140363adf:
      local_118 = (undefined1 *)*plVar12;
      uStack_110 = (undefined4)plVar12[1];
      uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
    }
    else {
      plVar12 = (longlong *)local_60[1];
      if (plVar12 != &local_108) goto LAB_140363adf;
    }
    local_a0 = &local_108;
    uVar8 = FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar16,DAT_1419fdb88),&local_a0);
    cVar3 = FUN_140e491e0(uVar8);
    if (cVar3 == '\0') {
      local_a8 = 0x2a;
      if ((int)local_68[0] < 2) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)local_60[1];
      }
      uStack_10c = 0;
      local_118 = &DAT_bff0000000000000;
      iVar4 = FUN_140e851f0(puVar9,&local_118,DAT_141955260,0);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if (iVar4 != 0) {
        local_a8 = 0x35;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        if ((int)local_68[0] < 1) {
          plVar12 = &DAT_1419df7b0;
LAB_14036402c:
          local_118 = (undefined1 *)*plVar12;
          uStack_110 = (undefined4)plVar12[1];
          uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_118);
        }
        else {
          plVar12 = (longlong *)*local_60;
          if (plVar12 != &local_108) goto LAB_14036402c;
        }
        local_a0 = &local_108;
        if (((int)local_68[0] < 2) || (pdVar13 = (double *)local_60[1], pdVar13 != &local_f8)) {
          local_118 = (undefined1 *)*pdVar13;
          uStack_110 = *(undefined4 *)(pdVar13 + 1);
          uStack_10c = *(undefined4 *)((longlong)pdVar13 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_118);
        }
        local_98 = &local_f8;
        puVar9 = (undefined8 *)gml_Script_InputPressedMany(param_1,param_2,&local_128,2,&local_a0);
        if (puVar9 != param_3) {
          local_118 = (undefined1 *)*puVar9;
          uStack_110 = *(undefined4 *)(puVar9 + 1);
          uStack_10c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_118);
        }
        goto LAB_140364112;
      }
      local_a8 = 0x2c;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_dc = 0;
      local_e8 = 0.0;
      iVar4 = 1;
      do {
        iVar4 = iVar4 + -1;
        local_a8 = 0x2f;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        if ((int)local_68[0] < 1) {
          plVar12 = &DAT_1419df7b0;
LAB_140363eb0:
          local_118 = (undefined1 *)*plVar12;
          uStack_110 = (undefined4)plVar12[1];
          uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_118);
        }
        else {
          plVar12 = (longlong *)*local_60;
          if (plVar12 != &local_108) goto LAB_140363eb0;
        }
        local_a0 = &local_108;
        local_98 = &local_e8;
        uVar8 = gml_Script_InputPressedMany(param_1,param_2,&local_128,2,&local_a0);
        cVar3 = FUN_140e491e0(uVar8);
        if (cVar3 != '\0') {
          local_a8 = 0x2f;
          goto LAB_140363fc7;
        }
        local_a8 = 0x30;
        uVar6 = local_dc & 0xffffff;
        if (uVar6 == 0) {
LAB_140363f70:
          local_e8 = local_e8 + 1.0;
        }
        else {
          if (uVar6 == 1) {
            local_e8 = (double)FUN_140e4b060(&local_e8);
            local_dc = 0;
            goto LAB_140363f70;
          }
          if (uVar6 == 7) {
            local_e8 = (double)CONCAT44(local_e8._4_4_,local_e8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_e8 = (double)((longlong)local_e8 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_dc = 0;
              goto LAB_140363f70;
            }
            FUN_140042910(&DAT_14172c3d8,&local_e8,&local_e8);
          }
        }
      } while (0 < iVar4);
    }
    else {
      local_a8 = 0x23;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_cc = 0;
      local_d8 = 0.0;
      if ((int)local_68[0] < 2) {
        plVar12 = &DAT_1419df7b0;
      }
      else {
        plVar12 = (longlong *)local_60[1];
      }
      iVar4 = 0;
      if ((*(int *)((longlong)plVar12 + 0xc) == 2) && (*plVar12 != 0)) {
        iVar4 = *(int *)(*plVar12 + 0x24);
      }
      while (0 < iVar4) {
        iVar4 = iVar4 + -1;
        local_a8 = 0x26;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        if ((int)local_68[0] < 1) {
          plVar12 = &DAT_1419df7b0;
LAB_140363c16:
          local_118 = (undefined1 *)*plVar12;
          uStack_110 = (undefined4)plVar12[1];
          uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_118);
        }
        else {
          plVar12 = (longlong *)*local_60;
          if (plVar12 != &local_108) goto LAB_140363c16;
        }
        local_a0 = &local_108;
        iVar5 = FUN_140e4a740(&local_d8);
        if ((int)local_68[0] < 2) {
          pdVar13 = (double *)&DAT_1419df7b0;
        }
        else {
          pdVar13 = (double *)local_60[1];
        }
        if (((*(uint *)((longlong)pdVar13 + 0xc) & 0xffffff) == 2) &&
           (dVar2 = *pdVar13, dVar2 != 0.0)) {
          if ((iVar5 < 0) || (*(int *)((longlong)dVar2 + 0x24) <= iVar5)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                          *(undefined4 *)((longlong)dVar2 + 0x24));
            pdVar13 = (double *)0x0;
          }
          else {
            pdVar13 = (double *)((longlong)iVar5 * 0x10 + *(longlong *)((longlong)dVar2 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (pdVar13 != &local_f8) {
          local_118 = (undefined1 *)*pdVar13;
          uStack_110 = *(undefined4 *)(pdVar13 + 1);
          uStack_10c = *(undefined4 *)((longlong)pdVar13 + 0xc);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_118);
        }
        local_98 = &local_f8;
        uVar8 = gml_Script_InputPressedMany(param_1,param_2,&local_128,2,&local_a0);
        cVar3 = FUN_140e491e0(uVar8);
        if (cVar3 != '\0') {
          local_a8 = 0x26;
          goto LAB_140363fc7;
        }
        local_a8 = 0x27;
        uVar6 = local_cc & 0xffffff;
        if (uVar6 == 0) {
LAB_140363d75:
          local_d8 = local_d8 + 1.0;
        }
        else {
          if (uVar6 == 1) {
            local_d8 = (double)FUN_140e4b060(&local_d8);
            local_cc = 0;
            goto LAB_140363d75;
          }
          if (uVar6 == 7) {
            local_d8 = (double)CONCAT44(local_d8._4_4_,local_d8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_d8 = (double)((longlong)local_d8 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_cc = 0;
              goto LAB_140363d75;
            }
            FUN_140042910(&DAT_14172c3d8,&local_d8,&local_d8);
          }
        }
      }
    }
  }
  else {
    local_a8 = 0x18;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0.0;
    if ((int)local_68[0] < 1) {
      plVar12 = &DAT_1419df7b0;
    }
    else {
      plVar12 = (longlong *)*local_60;
    }
    iVar4 = 0;
    if ((*(int *)((longlong)plVar12 + 0xc) == 2) && (*plVar12 != 0)) {
      iVar4 = *(int *)(*plVar12 + 0x24);
    }
    while (0 < iVar4) {
      iVar4 = iVar4 + -1;
      local_a8 = 0x1b;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      iVar5 = FUN_140e4a740(&local_c8);
      if ((int)local_68[0] < 1) {
        plVar12 = &DAT_1419df7b0;
      }
      else {
        plVar12 = (longlong *)*local_60;
      }
      if (((*(uint *)((longlong)plVar12 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar12, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",(longlong)iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar12 != &local_108) {
        local_118 = (undefined1 *)*plVar12;
        uStack_110 = (undefined4)plVar12[1];
        uStack_10c = *(undefined4 *)((longlong)plVar12 + 0xc);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_118);
      }
      local_a0 = &local_108;
      if ((int)local_68[0] < 2) {
        pdVar13 = (double *)&DAT_1419df7b0;
LAB_140363996:
        local_118 = (undefined1 *)*pdVar13;
        uStack_110 = *(undefined4 *)(pdVar13 + 1);
        uStack_10c = *(undefined4 *)((longlong)pdVar13 + 0xc);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_118);
      }
      else {
        pdVar13 = (double *)local_60[1];
        if (pdVar13 != &local_f8) goto LAB_140363996;
      }
      local_98 = &local_f8;
      uVar8 = gml_Script_InputReleased(param_1,param_2,&local_128,2,&local_a0);
      cVar3 = FUN_140e491e0(uVar8);
      if (cVar3 != '\0') {
        local_a8 = 0x1b;
LAB_140363fc7:
        *local_80 = 0xd;
        *param_3 = 0x3ff0000000000000;
        goto LAB_140364112;
      }
      local_a8 = 0x1c;
      uVar6 = local_bc & 0xffffff;
      if (uVar6 == 0) {
LAB_140363a45:
        local_c8 = local_c8 + 1.0;
      }
      else {
        if (uVar6 == 1) {
          local_c8 = (double)FUN_140e4b060(&local_c8);
          local_bc = 0;
          goto LAB_140363a45;
        }
        if (uVar6 == 7) {
          local_c8 = (double)CONCAT44(local_c8._4_4_,local_c8._0_4_ + 1);
        }
        else if (uVar6 == 10) {
          local_c8 = (double)((longlong)local_c8 + 1);
        }
        else {
          if (uVar6 == 0xd) {
            local_bc = 0;
            goto LAB_140363a45;
          }
          FUN_140042910(&DAT_14172c3d8,&local_c8,&local_c8);
        }
      }
    }
  }
  local_a8 = 0x39;
  *local_80 = 0xd;
  *param_3 = 0;
LAB_140364112:
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,2,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar9 = local_60;
    do {
      puVar10 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


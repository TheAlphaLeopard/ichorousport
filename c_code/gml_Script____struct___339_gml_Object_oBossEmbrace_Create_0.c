// gml_Script____struct___339_gml_Object_oBossEmbrace_Create_0 @ 0x140727040

undefined8 *
gml_Script____struct___339_gml_Object_oBossEmbrace_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  double *pdVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  double dVar10;
  code *pcVar11;
  undefined4 uVar13;
  ulonglong uVar12;
  longlong **in_stack_fffffffffffffec0;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  uint uStack_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_6c;
  double local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  
  local_e0 = "gml_Script_anon@1179@gml_Object_oBossEmbrace_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x35;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_8c = 0xffffff;
  local_98 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_4c = 0;
  local_58 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x36;
  pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a074e8);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar5;
  }
  else {
    dVar10 = (double)FUN_140e4b060(pdVar5);
  }
  uVar9 = (ulonglong)dVar10;
  uVar8 = (uint)uVar9;
  do {
    if ((int)uVar8 < 1) {
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      _eh_vector_destructor_iterator_(&local_88,0x10,2,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_e8;
      return param_3;
    }
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
    local_d8 = 0x37;
    plVar6 = (longlong *)FUN_140e8da20(&local_58,param_1,0);
    if (plVar6 != &local_118) {
      local_f8 = *plVar6;
      lStack_f0 = plVar6[1];
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_f8);
    }
    local_d8 = 0x38;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_12c = 0;
    local_138 = 0.0;
    bVar2 = true;
LAB_140727206:
    if (!bVar2) {
      local_d8 = 0x38;
      uVar3 = local_12c & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_12c = 0;
              goto LAB_14072725f;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
          goto LAB_140727269;
        }
        local_138 = (double)FUN_140e4b060(&local_138);
        local_12c = 0;
      }
LAB_14072725f:
      local_138 = local_138 + 1.0;
    }
LAB_140727269:
    bVar2 = false;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06f38);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar4 = *(int *)(*plVar6 + 0x24);
    }
    local_5c = 0;
    local_68 = (double)iVar4;
    iVar4 = FUN_140e851f0(&local_138,&local_68,DAT_141955260,1);
    if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    if (iVar4 != -2 && iVar4 < 0) {
      local_d8 = 0x39;
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06f38);
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      in_stack_fffffffffffffec0 =
           (longlong **)((ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
      pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
      FUN_140e87440(uVar7,DAT_141a07558,0x80000000,&local_98,pcVar11,in_stack_fffffffffffffec0);
      iVar4 = FUN_140e4a740(&local_138);
      if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      iVar4 = FUN_140e851f0(plVar6,&local_98,DAT_141955260,0);
      if (iVar4 != 0) {
        local_d8 = 0x39;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        uVar13 = (undefined4)((ulonglong)pcVar11 >> 0x20);
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06f38);
        local_c0 = &local_118;
        iVar4 = FUN_140e4a740(&local_138);
        if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        if (plVar6 != &local_78) {
          local_f8 = *plVar6;
          lStack_f0 = plVar6[1];
          if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_78);
          }
          FUN_140041b80(&local_78,&local_f8);
        }
        local_b8 = &local_78;
        in_stack_fffffffffffffec0 = &local_c0;
        pcVar11 = (code *)CONCAT44(uVar13,DAT_1419fe568);
        FUN_140e634e0(param_1,param_2,&local_128,2,pcVar11,in_stack_fffffffffffffec0);
      }
      goto LAB_140727206;
    }
    local_d8 = 0x3b;
    iVar4 = 0;
    if ((uStack_10c == 2) && (local_118 != 0)) {
      iVar4 = *(int *)(local_118 + 0x24);
    }
    dVar10 = (double)FUN_140e78f00((longlong)(iVar4 + -1));
    iVar4 = (int)dVar10;
    plVar6 = (longlong *)0x0;
    if (((uStack_10c & 0xffffff) == 2) && (local_118 != 0)) {
      if ((iVar4 < 0) || (*(int *)(local_118 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(local_118 + 0x24));
      }
      else {
        plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_118 + 8));
      }
      if (plVar6 != &local_108) goto LAB_140727569;
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar6 = &local_118;
LAB_140727569:
      local_f8 = *plVar6;
      lStack_f0 = plVar6[1];
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_f8);
    }
    local_d8 = 0x3c;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar12 = (ulonglong)pcVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a06e68,0x80000000,&local_a8,uVar12,
                  (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar12 >> 0x20);
    lStack_f0 = CONCAT44(uStack_9c,uStack_a0);
    local_f8 = local_a8;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_f8);
    local_c0 = &local_88;
    local_b8 = &local_108;
    in_stack_fffffffffffffec0 = &local_c0;
    pcVar11 = (code *)CONCAT44(uVar13,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_128,2,pcVar11,in_stack_fffffffffffffec0);
    local_d8 = 0x3d;
    lStack_f0 = CONCAT44(uStack_fc,uStack_100);
    local_f8 = local_108;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_f8);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87930(uVar7,DAT_141a07558,0x80000000,&local_d0);
  } while( true );
}


// gml_GlobalScript_scribble_flush_shader_uniforms @ 0x14045ee90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_scribble_flush_shader_uniforms
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *local_res8;
  undefined8 local_res10;
  longlong **pplVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffec0;
  double local_138;
  uint local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  undefined4 local_10c;
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong local_c0;
  uint local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_d0 = "gml_Script_scribble_flush_everything";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_118,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0xb;
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_88 = (undefined4)DAT_1419df7b0;
  uStack_84 = DAT_1419df7b0._4_4_;
  uStack_80 = DAT_1419df7b8;
  uStack_7c = DAT_1419df7bc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_88);
  local_e8 = &local_118;
  pplVar11 = &local_e8;
  uVar6 = gml_Script___scribble_texture_get_material(local_res8,local_res10,&local_128,1,pplVar11);
  uVar12 = (ulonglong)pplVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a05138,0x80000000,&local_a0,uVar12,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_a0);
  if (0 < iVar3) {
    do {
      local_c8 = 0xe;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      local_c8 = 0xf;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05cd8);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
        iVar3 = *(int *)(*plVar7 + 0x24);
      }
      while (0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_c8 = 0x11;
        plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05cd8);
        local_88 = 0;
        uStack_84 = 0x3ff00000;
        uStack_7c = 0xd;
        local_f8 = 0;
        uStack_f4 = 0x3ff00000;
        uStack_f0 = uStack_80;
        uStack_ec = 0xd;
        if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b0);
        }
        FUN_140041b80(&local_b0,&local_f8);
        iVar4 = FUN_140e4a740(&local_138);
        if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0))
        {
          if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(lVar1 + 0x24));
            plVar8 = (longlong *)0x0;
          }
          else {
            plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
        }
        FUN_140e87930(plVar8,DAT_141a05c98,0x80000000,&local_b0);
        local_c8 = 0x12;
        uVar5 = local_12c & 0xffffff;
        if (uVar5 == 0) {
LAB_14045f1c8:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_14045f1c8;
          }
          if (uVar5 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_12c = 0;
              goto LAB_14045f1c8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
      }
      local_c8 = 0x18;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      local_c8 = 0x19;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a070c8);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar3 = *(int *)(*plVar8 + 0x24);
      }
      while( true ) {
        uVar13 = (undefined4)(uVar12 >> 0x20);
        if (iVar3 < 1) break;
        iVar3 = iVar3 + -1;
        local_c8 = 0x1c;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a070c8);
        iVar4 = FUN_140e4a740(&local_138);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
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
        if (plVar9 != &local_118) {
          local_f8 = (undefined4)*plVar9;
          uStack_f4 = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_f0 = (undefined4)plVar9[1];
          uStack_ec = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_f8);
        }
        local_e8 = &local_118;
        uVar12 = CONCAT44(uVar13,DAT_141a073c8);
        FUN_140e634e0(local_res8,local_res10,&local_128,1,uVar12,&local_e8);
        local_c8 = 0x1d;
        uVar5 = local_12c & 0xffffff;
        if (uVar5 == 0) {
LAB_14045f3d8:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_14045f3d8;
          }
          if (uVar5 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_12c = 0;
              goto LAB_14045f3d8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
      }
      local_c8 = 0x20;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07418);
      if (plVar9 != &local_118) {
        local_f8 = (undefined4)*plVar9;
        uStack_f4 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_f0 = (undefined4)plVar9[1];
        uStack_ec = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_c8 = 0x21;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      if (plVar8 != &local_118) {
        local_f8 = (undefined4)*plVar8;
        uStack_f4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_f0 = (undefined4)plVar8[1];
        uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      local_c8 = 0x26;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      local_c8 = 0x27;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07238);
      iVar3 = 0;
      if ((*(int *)((longlong)plVar8 + 0xc) == 2) && (*plVar8 != 0)) {
        iVar3 = *(int *)(*plVar8 + 0x24);
      }
      while (uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20), 0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_c8 = 0x29;
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a070c8);
        local_c8 = 0x2a;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_128 = 0;
        local_120 = 0;
        local_11c = 5;
        plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07238);
        iVar4 = FUN_140e4a740(&local_138);
        if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0))
        {
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
        if (plVar9 != &local_118) {
          local_f8 = (undefined4)*plVar9;
          uStack_f4 = *(undefined4 *)((longlong)plVar9 + 4);
          uStack_f0 = (undefined4)plVar9[1];
          uStack_ec = *(undefined4 *)((longlong)plVar9 + 0xc);
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_f8);
        }
        local_e8 = &local_118;
        uVar6 = CONCAT44(uVar13,DAT_141a06368);
        FUN_140e634e0(local_res8,local_res10,&local_128,1,uVar6,&local_e8);
        local_c8 = 0x2b;
        uVar5 = local_12c & 0xffffff;
        if (uVar5 == 0) {
LAB_14045f7df:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_14045f7df;
          }
          if (uVar5 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_12c = 0;
              goto LAB_14045f7df;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
      }
      local_c8 = 0x2f;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a07548);
      if (plVar9 != &local_118) {
        local_f8 = (undefined4)*plVar9;
        uStack_f4 = *(undefined4 *)((longlong)plVar9 + 4);
        uStack_f0 = (undefined4)plVar9[1];
        uStack_ec = *(undefined4 *)((longlong)plVar9 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_c8 = 0x30;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      if (plVar8 != &local_118) {
        local_f8 = (undefined4)*plVar8;
        uStack_f4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_f0 = (undefined4)plVar8[1];
        uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_c8 = 0x34;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a04d68);
      if (plVar8 != &local_118) {
        local_f8 = (undefined4)*plVar8;
        uStack_f4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_f0 = (undefined4)plVar8[1];
        uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      uVar6 = CONCAT44(uVar13,DAT_141a063c8);
      plVar8 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_128,1,uVar6,&local_e8);
      if (plVar8 != &local_c0) {
        local_f8 = (undefined4)*plVar8;
        uStack_f4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_f0 = (undefined4)plVar8[1];
        uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_f8);
      }
      local_c8 = 0x35;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      iVar3 = 0;
      if ((local_b4 == 2) && (local_c0 != 0)) {
        iVar3 = *(int *)(local_c0 + 0x24);
      }
      while (uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20), 0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_c8 = 0x38;
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a07238);
        uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a04d68);
        iVar4 = FUN_140e4a740(&local_138);
        plVar8 = (longlong *)0x0;
        if (((local_b4 & 0xffffff) == 2) && (local_c0 != 0)) {
          if ((iVar4 < 0) || (*(int *)(local_c0 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(local_c0 + 0x24));
          }
          else {
            plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_c0 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar8 = &local_c0;
        }
        FUN_140e98dc0(local_res8,local_res10,uVar10,plVar8);
        local_c8 = 0x39;
        uVar5 = local_12c & 0xffffff;
        if (uVar5 == 0) {
LAB_14045fc2e:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_14045fc2e;
          }
          if (uVar5 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_12c = 0;
              goto LAB_14045fc2e;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
      }
      local_c8 = 0x3b;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar8 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05b78);
      if (plVar8 != &local_118) {
        local_f8 = (undefined4)*plVar8;
        uStack_f4 = *(undefined4 *)((longlong)plVar8 + 4);
        uStack_f0 = (undefined4)plVar8[1];
        uStack_ec = *(undefined4 *)((longlong)plVar8 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_c8 = 0x3c;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      if (plVar7 != &local_118) {
        local_f8 = (undefined4)*plVar7;
        uStack_f4 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_f0 = (undefined4)plVar7[1];
        uStack_ec = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar6 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar6,&local_e8);
      uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_c8 = 0x40;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a05058);
      if (plVar7 != &local_118) {
        local_f8 = (undefined4)*plVar7;
        uStack_f4 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_f0 = (undefined4)plVar7[1];
        uStack_ec = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      uVar6 = CONCAT44(uVar13,DAT_141a063c8);
      plVar7 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_128,1,uVar6,&local_e8);
      if (plVar7 != &local_c0) {
        local_f8 = (undefined4)*plVar7;
        uStack_f4 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_f0 = (undefined4)plVar7[1];
        uStack_ec = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_f8);
      }
      local_c8 = 0x41;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = 0.0;
      iVar3 = 0;
      if ((local_b4 == 2) && (local_c0 != 0)) {
        iVar3 = *(int *)(local_c0 + 0x24);
      }
      while (uVar13 = (undefined4)((ulonglong)uVar6 >> 0x20), 0 < iVar3) {
        iVar3 = iVar3 + -1;
        local_c8 = 0x44;
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05cd8);
        uVar10 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a05058);
        iVar4 = FUN_140e4a740(&local_138);
        plVar7 = (longlong *)0x0;
        if (((local_b4 & 0xffffff) == 2) && (local_c0 != 0)) {
          if ((iVar4 < 0) || (*(int *)(local_c0 + 0x24) <= iVar4)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                          *(undefined4 *)(local_c0 + 0x24));
          }
          else {
            plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(local_c0 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar7 = &local_c0;
        }
        FUN_140e98dc0(local_res8,local_res10,uVar10,plVar7);
        local_c8 = 0x45;
        uVar5 = local_12c & 0xffffff;
        if (uVar5 == 0) {
LAB_14046007e:
          local_138 = local_138 + 1.0;
        }
        else {
          if (uVar5 == 1) {
            local_138 = (double)FUN_140e4b060(&local_138);
            local_12c = 0;
            goto LAB_14046007e;
          }
          if (uVar5 == 7) {
            local_138 = (double)CONCAT44(local_138._4_4_,local_138._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_138 = (double)((longlong)local_138 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_12c = 0;
              goto LAB_14046007e;
            }
            FUN_140042910(&DAT_14172c3d8,&local_138,&local_138);
          }
        }
      }
      local_c8 = 0x47;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      plVar7 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06a18);
      if (plVar7 != &local_118) {
        local_f8 = (undefined4)*plVar7;
        uStack_f4 = *(undefined4 *)((longlong)plVar7 + 4);
        uStack_f0 = (undefined4)plVar7[1];
        uStack_ec = *(undefined4 *)((longlong)plVar7 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_f8);
      }
      local_e8 = &local_118;
      local_f8 = _DAT_141dc65f0;
      uStack_f4 = uRam0000000141dc65f4;
      uStack_f0 = uRam0000000141dc65f8;
      uStack_ec = uRam0000000141dc65fc;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_f8);
      local_e0 = local_108;
      uVar12 = CONCAT44(uVar13,DAT_1419fee68);
      FUN_140e634e0(local_res8,local_res10,&local_128,2,uVar12,&local_e8);
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


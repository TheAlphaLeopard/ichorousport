// gml_Script__system_anon_145_InputVerbCount_InputVerbCount @ 0x140372110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__system_anon_145_InputVerbCount_InputVerbCount
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  double *pdVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  double dVar13;
  undefined8 local_res8;
  undefined8 local_res10;
  ulonglong uVar14;
  undefined4 uVar16;
  undefined8 uVar15;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  double local_168;
  uint local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  double local_148;
  byte local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  double *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_f0 = "gml_Script_InputVerbConsumeAll";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_88,param_4,1,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_17c = 0;
  local_188 = 0;
  local_14c = 0;
  local_158 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde7b8) &&
     (_Init_thread_header(&DAT_141dde7b8), DAT_141dde7b8 == -1)) {
    DAT_141dde7c0 = (longlong *)FUN_140e63aa0(DAT_1419f3b18);
    _Init_thread_footer(&DAT_141dde7b8);
  }
  local_e8 = 9;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_e8 = 9;
    if ((int)local_88[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_80;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
  }
  if (DAT_141ddc143 == '\0') {
    FUN_140e64380(DAT_141dde7c0,"gml_Script_InputVerbConsumeAll");
    FUN_140e64380(local_res8,"gml_Script_InputVerbConsumeAll");
  }
  local_e8 = 0xb;
  if (DAT_141ddc143 == '\0') {
    DAT_141ddc143 = '\x01';
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    pdVar7 = (double *)(**(code **)(*DAT_141dde7c0 + 0x10))(DAT_141dde7c0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde7c0);
    pdVar8 = (double *)gml_Script___InputTrace(local_res8,local_res10,&local_188,0,0);
    if (pdVar8 != pdVar7) {
      local_178 = *pdVar8;
      uStack_170 = *(undefined4 *)(pdVar8 + 1);
      uStack_16c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar7);
      }
      FUN_140041b80(pdVar7,&local_178);
    }
    FUN_140e60910(1);
    puVar9 = (undefined8 *)(**(code **)(*DAT_141dde7c0 + 0x10))(DAT_141dde7c0,DAT_1419fd528);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar14 = 0;
    uVar10 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_158,0,0);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar10,DAT_1419fd6a8,0x80000000,&local_98,uVar14,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar16 = (undefined4)(uVar14 >> 0x20);
    FUN_140e609c0(DAT_141dde7c0);
    if (&local_98 != (double *)puVar9) {
      local_178 = local_98;
      uStack_170 = uStack_90;
      uStack_16c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar9);
      }
      FUN_140041b80(puVar9,&local_178);
    }
    FUN_140e60910(1);
  }
  local_e8 = 4;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_88[0] < 1) {
    pdVar7 = (double *)&DAT_1419df7b0;
LAB_1403724c8:
    local_178 = *pdVar7;
    uStack_170 = *(undefined4 *)(pdVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)pdVar7 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    pdVar7 = (double *)*local_80;
    if (pdVar7 != &local_148) goto LAB_1403724c8;
  }
  local_d0 = &local_148;
  uVar15 = CONCAT44(uVar16,DAT_141a014a8);
  uVar10 = FUN_140e634e0(local_res8,local_res10,&local_188,1,uVar15,&local_d0);
  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
  cVar3 = FUN_140e491e0(uVar10);
  if (cVar3 == '\0') {
    local_e8 = 7;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_d4 = 5;
    if ((int)local_88[0] < 1) {
      puVar9 = &DAT_1419df7b0;
LAB_1403725b8:
      local_178 = (double)*puVar9;
      uStack_170 = *(undefined4 *)(puVar9 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar9 = (undefined8 *)*local_80;
      if (puVar9 != &local_138) goto LAB_1403725b8;
    }
    local_c8 = &local_138;
    local_178 = (double)CONCAT44(uRam0000000141dd1abc,_DAT_141dd1ab8);
    uStack_170 = uRam0000000141dd1ac0;
    uStack_16c = DAT_141dd1ac4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_c0 = local_128;
    puVar9 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_e0,1,CONCAT44(uVar16,DAT_1419fdc58),
                           &local_c8);
    if (puVar9 != &local_118) {
      local_178 = (double)*puVar9;
      uStack_170 = *(undefined4 *)(puVar9 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_178);
    }
    local_b8 = &local_118;
    local_178 = (double)CONCAT44(uRam0000000141dd1a7c,_DAT_141dd1a78);
    uStack_170 = uRam0000000141dd1a80;
    uStack_16c = DAT_141dd1a84;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_b0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_158,3,&local_c0);
  }
  local_e8 = 0xc;
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  uStack_16c = 0;
  local_178 = 1.0;
  uVar5 = FUN_140e851f0(puVar9,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar5 < 0x80000000) {
    local_e8 = 0x13;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_178 = (double)CONCAT44(uRam0000000141dd1aac,_DAT_141dd1aa8);
    uStack_170 = uRam0000000141dd1ab0;
    uStack_16c = DAT_141dd1ab4;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    local_d0 = &local_148;
    if ((int)local_88[0] < 1) {
      puVar9 = &DAT_1419df7b0;
LAB_1403727f8:
      local_178 = (double)*puVar9;
      uStack_170 = *(undefined4 *)(puVar9 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
    }
    else {
      puVar9 = (undefined8 *)*local_80;
      if (puVar9 != &local_138) goto LAB_1403727f8;
    }
    local_c8 = &local_138;
    local_178 = (double)CONCAT44(uRam0000000141dd1a9c,_DAT_141dd1a98);
    uStack_170 = uRam0000000141dd1aa0;
    uStack_16c = DAT_141dd1aa4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_c0 = local_128;
    local_178 = (double)CONCAT44(uRam00000001419e4514,_DAT_1419e4510);
    uStack_170 = uRam00000001419e4518;
    uStack_16c = uRam00000001419e451c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_b8 = &local_118;
    local_178 = (double)CONCAT44(uRam0000000141dd1acc,_DAT_141dd1ac8);
    uStack_170 = uRam0000000141dd1ad0;
    uStack_16c = DAT_141dd1ad4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_b0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_188,5,&local_d0);
  }
  local_e8 = 0x1b;
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  uStack_16c = 0;
  local_178 = 0.0;
  iVar4 = FUN_140e851f0(puVar9,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (iVar4 == -2 || -1 < iVar4) goto LAB_140372a90;
  local_e8 = 0x1b;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  local_a8 = _DAT_141dd1aa8;
  uStack_a4 = uRam0000000141dd1aac;
  uStack_a0 = uRam0000000141dd1ab0;
  uStack_9c = DAT_141dd1ab4;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_a8);
  local_d0 = &local_148;
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_1403729f9:
    local_a8 = *(undefined4 *)puVar9;
    uStack_a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_a0 = *(undefined4 *)(puVar9 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_a8);
  }
  else {
    puVar9 = (undefined8 *)*local_80;
    if (puVar9 != &local_138) goto LAB_1403729f9;
  }
  local_c8 = &local_138;
  local_a8 = _DAT_141dd1a88;
  uStack_a4 = uRam0000000141dd1a8c;
  uStack_a0 = uRam0000000141dd1a90;
  uStack_9c = DAT_141dd1a94;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_a8);
  local_c0 = local_128;
  FUN_14008e020(local_res8,local_res10,&local_188,3,&local_d0);
LAB_140372a90:
  local_e8 = 0x10;
  plVar11 = (longlong *)(**(code **)(*DAT_141dde7c0 + 8))(DAT_141dde7c0,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_80;
  }
  iVar4 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar11 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar11, lVar1 != 0)) {
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
  }
  iVar4 = FUN_140e63cb0(local_78,&local_res8,&local_res10,plVar11);
  if (0 < iVar4) {
    do {
      local_e8 = 0x12;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_15c = 0;
      local_168 = 0.0;
      local_e8 = 0x13;
      pdVar7 = (double *)(**(code **)(*DAT_141dde7c0 + 8))(DAT_141dde7c0,DAT_1419fd528);
      if ((*(uint *)((longlong)pdVar7 + 0xc) & 0xffffff) == 0) {
        dVar13 = *pdVar7;
      }
      else {
        dVar13 = (double)FUN_140e4b060(pdVar7);
      }
      uVar14 = (ulonglong)dVar13;
      uVar5 = (uint)uVar14;
      while (0 < (int)uVar5) {
        uVar5 = (int)uVar14 - 1;
        uVar14 = (ulonglong)uVar5;
        local_e8 = 0x15;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        local_d0 = &local_168;
        if ((int)local_88[0] < 1) {
          puVar9 = &DAT_1419df7b0;
LAB_140372bf5:
          local_a8 = *(undefined4 *)puVar9;
          uStack_a4 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_a0 = *(undefined4 *)(puVar9 + 1);
          uStack_9c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          FUN_140041b80(&local_138,&local_a8);
        }
        else {
          puVar9 = (undefined8 *)*local_80;
          if (puVar9 != &local_138) goto LAB_140372bf5;
        }
        local_c8 = &local_138;
        gml_Script_InputVerbConsumeAll(local_res8,local_res10,&local_188,2,&local_d0);
        local_e8 = 0x16;
        uVar6 = local_15c & 0xffffff;
        if (uVar6 == 0) {
LAB_140372ca7:
          local_168 = local_168 + 1.0;
        }
        else {
          if (uVar6 == 1) {
            local_168 = (double)FUN_140e4b060(&local_168);
            local_15c = 0;
            goto LAB_140372ca7;
          }
          if (uVar6 == 7) {
            local_168 = (double)CONCAT44(local_168._4_4_,local_168._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_168 = (double)((longlong)local_168 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_15c = 0;
              goto LAB_140372ca7;
            }
            FUN_140042910(&DAT_14172c3d8,&local_168,&local_168);
          }
        }
      }
      cVar3 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar9 = local_80;
    do {
      puVar2 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}


// gml_GlobalScript___InputPlugInRegisterCallbackInternal @ 0x1400bff60

undefined8 *
gml_GlobalScript___InputPlugInRegisterCallbackInternal
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  code *pcVar12;
  ulonglong in_stack_fffffffffffffe50;
  undefined8 **ppuVar13;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  longlong local_178;
  uint local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_150 = "gml_Script___InputPlugInExecuteCallbacks";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0xb;
  FUN_140041df0(local_88,param_4,7,param_5);
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_17c = 0;
  local_188 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc780) &&
     (_Init_thread_header(&DAT_141ddc780), DAT_141ddc780 == -1)) {
    DAT_141ddc788 = (longlong *)FUN_140e63aa0(DAT_141a024a8);
    _Init_thread_footer(&DAT_141ddc780);
  }
  local_148 = 0xb;
  uVar11 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[1];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (local_148 = 0xb, 1 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[1], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if ((int)local_88[0] < 3) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[2];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (2 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[2], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if ((int)local_88[0] < 4) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[3];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (3 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[3], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if ((int)local_88[0] < 5) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[4];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (4 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[4], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if ((int)local_88[0] < 6) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[5];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (5 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[5], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if ((int)local_88[0] < 7) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)local_80[6];
  }
  iVar2 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (6 < (int)local_88[0])) &&
     (puVar9 = (undefined8 *)local_80[6], puVar9 != &DAT_1419df7b0)) {
    local_1a8 = (undefined4)DAT_1419df7b0;
    uStack_1a4 = DAT_1419df7b0._4_4_;
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_1a8);
  }
  if (DAT_141ddc04e == '\0') {
    FUN_140e64380(DAT_141ddc788,"gml_Script___InputPlugInExecuteCallbacks");
    FUN_140e64380(param_1,"gml_Script___InputPlugInExecuteCallbacks");
  }
  local_148 = 0xd;
  if (DAT_141ddc04e == '\0') {
    DAT_141ddc04e = '\x01';
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    puVar5 = (undefined4 *)(**(code **)(*DAT_141ddc788 + 0x10))(DAT_141ddc788,DAT_1419fcb48);
    FUN_140e609c0(DAT_141ddc788);
    puVar6 = (undefined4 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_188,0,0);
    if (puVar6 != puVar5) {
      local_1a8 = *puVar6;
      uStack_1a4 = puVar6[1];
      uStack_1a0 = puVar6[2];
      uStack_19c = puVar6[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1a8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    local_140 = 0;
    local_138 = 0;
    local_134 = 5;
    puVar5 = (undefined4 *)(**(code **)(*DAT_141ddc788 + 0x10))(DAT_141ddc788,DAT_141a02588);
    FUN_140e609c0(DAT_141ddc788);
    pcVar12 = (code *)0x0;
    puVar6 = (undefined4 *)
             gml_Script_anon_825__playerArray_anon_93___InputSystemPlayerArray___InputSystemPlayerArray
                       (param_1,param_2,&local_140,0,0);
    if (puVar6 != puVar5) {
      local_1a8 = *puVar6;
      uStack_1a4 = puVar6[1];
      uStack_1a0 = puVar6[2];
      uStack_19c = puVar6[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_148 = 0x10;
  uVar7 = (**(code **)(*DAT_141ddc788 + 8))(DAT_141ddc788,DAT_1419fcb48);
  ppuVar13 = (undefined8 **)(in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  puVar9 = (undefined8 *)((ulonglong)pcVar12 & 0xffffffffffffff00);
  FUN_140e87440(uVar7,DAT_141a024e8,0x80000000,&local_108,puVar9,ppuVar13);
  local_1a8 = (undefined4)local_108;
  uStack_1a4 = local_108._4_4_;
  uStack_1a0 = uStack_100;
  uStack_19c = uStack_fc;
  FUN_140041b80(&local_118,&local_1a8);
  local_148 = 0x11;
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
    if (puVar10 == &local_168) goto LAB_1400c056f;
  }
  local_1a8 = *(undefined4 *)puVar10;
  uStack_1a4 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_1a0 = *(undefined4 *)(puVar10 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar10 + 0xc);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_1a8);
LAB_1400c056f:
  uVar7 = (**(code **)(*DAT_141ddc788 + 8))(DAT_141ddc788,DAT_1419fcb48);
  FUN_140e87930(uVar7,DAT_141a024e8,0x80000000,&local_168);
  local_148 = 0x13;
  plVar8 = (longlong *)(**(code **)(*DAT_141ddc788 + 8))(DAT_141ddc788,DAT_141a02588);
  if ((int)local_88[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_80;
  }
  iVar2 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_178) {
    local_1a8 = (undefined4)*plVar8;
    uStack_1a4 = *(undefined4 *)((longlong)plVar8 + 4);
    uStack_1a0 = (undefined4)plVar8[1];
    uStack_19c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1a8);
  }
  local_148 = 0x14;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0.0;
  iVar2 = 0;
  if ((local_16c == 2) && (local_178 != 0)) {
    iVar2 = *(int *)(local_178 + 0x24);
  }
joined_r0x0001400c06a7:
  do {
    if (iVar2 < 1) {
      local_148 = 0x1b;
      local_118._4_4_ = (undefined4)((ulonglong)local_118 >> 0x20);
      local_1a8 = (undefined4)local_118;
      uStack_1a4 = local_118._4_4_;
      uStack_19c = uStack_10c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1a8);
      uVar7 = (**(code **)(*DAT_141ddc788 + 8))(DAT_141ddc788,DAT_1419fcb48);
      FUN_140e87930(uVar7,DAT_141a024e8,0x80000000,&local_168);
      if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_140);
      }
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_130);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      _eh_vector_destructor_iterator_(&local_f8,0x10,7,FUN_140041b30);
      if (0 < (int)local_88[0]) {
        puVar9 = local_80;
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
      FUN_140e4cd60(local_80);
      DAT_141dc7a50 = (undefined8 *)local_158;
      return param_3;
    }
    iVar2 = iVar2 + -1;
    local_148 = 0x17;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    iVar3 = FUN_140e4a740(&local_198);
    plVar8 = (longlong *)0x0;
    if (((local_16c & 0xffffff) == 2) && (local_178 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_178 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_178 + 0x24));
      }
      else {
        plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_178 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar8 = &local_178;
    }
    FUN_140e87440(plVar8,DAT_141a02598,0x80000000,&local_130,(ulonglong)puVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if ((int)local_88[0] < 2) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c0797:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[1];
      if (puVar9 != &local_f8) goto LAB_1400c0797;
    }
    local_78 = &local_f8;
    if ((int)local_88[0] < 3) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c07e6:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[2];
      if (puVar9 != &local_e8) goto LAB_1400c07e6;
    }
    local_70 = &local_e8;
    if ((int)local_88[0] < 4) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c0835:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[3];
      if (puVar9 != &local_d8) goto LAB_1400c0835;
    }
    local_68 = &local_d8;
    if ((int)local_88[0] < 5) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c0884:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[4];
      if (puVar9 != &local_c8) goto LAB_1400c0884;
    }
    local_60 = &local_c8;
    if ((int)local_88[0] < 6) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c08d3:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[5];
      if (puVar9 != &local_b8) goto LAB_1400c08d3;
    }
    local_58 = &local_b8;
    if ((int)local_88[0] < 7) {
      puVar9 = &DAT_1419df7b0;
LAB_1400c0925:
      local_1a8 = *(undefined4 *)puVar9;
      uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
      uStack_1a0 = *(undefined4 *)(puVar9 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_1a8);
    }
    else {
      puVar9 = (undefined8 *)local_80[6];
      if (puVar9 != &local_a8) goto LAB_1400c0925;
    }
    local_50 = &local_a8;
    iVar3 = FUN_140e4a740(&local_198);
    plVar8 = (longlong *)0x0;
    if (((local_16c & 0xffffff) == 2) && (local_178 != 0)) {
      if ((iVar3 < 0) || (*(int *)(local_178 + 0x24) <= iVar3)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                      *(undefined4 *)(local_178 + 0x24));
      }
      else {
        plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(local_178 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar8 = &local_178;
    }
    uVar7 = FUN_140069500(plVar8);
    ppuVar13 = &local_78;
    puVar9 = &local_130;
    FUN_140e63610(uVar7,param_2,&local_188,6,puVar9,ppuVar13);
    local_148 = 0x18;
    uVar4 = local_18c & 0xffffff;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        local_198 = (double)FUN_140e4b060(&local_198);
        local_18c = 0;
        goto LAB_1400c0a48;
      }
      if (uVar4 == 7) {
        local_198 = (double)CONCAT44(local_198._4_4_,local_198._0_4_ + 1);
      }
      else if (uVar4 == 10) {
        local_198 = (double)((longlong)local_198 + 1);
      }
      else {
        if (uVar4 == 0xd) {
          local_18c = 0;
          goto LAB_1400c0a48;
        }
        FUN_140042910(&DAT_14172c3d8,&local_198,&local_198);
      }
      goto joined_r0x0001400c06a7;
    }
LAB_1400c0a48:
    local_198 = local_198 + 1.0;
  } while( true );
}


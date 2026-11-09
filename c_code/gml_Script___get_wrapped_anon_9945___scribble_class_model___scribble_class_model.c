// gml_Script___get_wrapped_anon_9945___scribble_class_model___scribble_class_model @ 0x14014e170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___get_wrapped_anon_9945___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulonglong in_stack_fffffffffffffef0;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_80 = "gml_Script___get_line_data@anon@8652@__scribble_class_model@__scribble_class_model";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xf7;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xf9;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  uStack_dc = 0;
  local_e8 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_78 = 0xf9;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = _DAT_141dcb8d8;
    uStack_f4 = uRam0000000141dcb8dc;
    uStack_f0 = uRam0000000141dcb8e0;
    uStack_ec = DAT_141dcb8e4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_50 = &local_b8;
    if (param_4 < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_14014e30f:
      local_f8 = *(undefined4 *)puVar6;
      uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_f0 = *(undefined4 *)(puVar6 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_f8);
    }
    else {
      puVar6 = (undefined8 *)param_5[1];
      if (puVar6 != &local_a8) goto LAB_14014e30f;
    }
    local_48 = &local_a8;
    local_f8 = _DAT_141dcb868;
    uStack_f4 = uRam0000000141dcb86c;
    uStack_f0 = uRam0000000141dcb870;
    uStack_ec = DAT_141dcb874;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_f8);
    local_40 = local_98;
    pcVar11 = (code *)&local_50;
    FUN_1401ef7f0(param_1,param_2,&local_108,3,pcVar11);
  }
  local_78 = 0xfa;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06b48);
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  uVar4 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,1);
  if (uVar4 < 0x80000000) {
    local_78 = 0xfa;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06b48);
    local_f8 = _DAT_141dcb8d8;
    uStack_f4 = uRam0000000141dcb8dc;
    uStack_f0 = uRam0000000141dcb8e0;
    uStack_ec = DAT_141dcb8e4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
    local_60 = &local_d8;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
LAB_14014e48e:
      local_f8 = *(undefined4 *)puVar7;
      uStack_f4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_f0 = *(undefined4 *)(puVar7 + 1);
      uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_f8);
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
      if (puVar7 != &local_c8) goto LAB_14014e48e;
    }
    local_58 = &local_c8;
    local_f8 = _DAT_141dcb888;
    uStack_f4 = uRam0000000141dcb88c;
    uStack_f0 = uRam0000000141dcb890;
    uStack_ec = DAT_141dcb894;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_50 = &local_b8;
    uStack_dc = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_e8,puVar6);
    }
    uStack_ec = 7;
    local_f8 = 1;
    FUN_1400462a0(&local_e8,&local_f8);
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = (undefined4)local_e8;
    uStack_f4 = local_e8._4_4_;
    uStack_f0 = uStack_e0;
    uStack_ec = uStack_dc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_48 = &local_a8;
    pcVar11 = (code *)&local_60;
    FUN_1401ef7f0(param_1,param_2,&local_108,4,pcVar11);
  }
  local_78 = 0xfc;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a051a8);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_78 = 0xfe;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_f8 = _DAT_141dcb8c8;
    uStack_f4 = uRam0000000141dcb8cc;
    uStack_f0 = uRam0000000141dcb8d0;
    uStack_ec = DAT_141dcb8d4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
    local_60 = &local_d8;
    pcVar11 = (code *)&local_60;
    FUN_1401ef7f0(param_1,param_2,&local_108,1,pcVar11);
  }
  local_78 = 0x101;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
  if (param_4 < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
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
    plVar9 = plVar8;
  }
  FUN_140e87440(plVar9,DAT_141a050d8,0x80000000,&local_70,(ulonglong)pcVar11 & 0xffffffffffffff00,
                in_stack_fffffffffffffef0 & 0xffffffffffffff00);
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 == &local_d8) goto LAB_14014e79e;
  }
  local_f8 = *(undefined4 *)puVar6;
  uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_f0 = *(undefined4 *)(puVar6 + 1);
  uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_f8);
LAB_14014e79e:
  local_60 = &local_d8;
  if (1 < param_4) {
    puVar10 = (undefined8 *)param_5[1];
  }
  iVar3 = FUN_140e4a740(puVar10);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar5 = FUN_140069500(plVar8);
  puVar10 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_108,1,&local_70,&local_60);
  if (puVar10 != param_3) {
    local_f8 = *(undefined4 *)puVar10;
    uStack_f4 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_f0 = *(undefined4 *)(puVar10 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


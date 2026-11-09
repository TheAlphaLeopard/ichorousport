// gml_Script___get_glyph_data_anon_9319___scribble_class_model___scribble_class_model @ 0x14014db20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___get_glyph_data_anon_9319___scribble_class_model___scribble_class_model
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
  undefined4 uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_80 = "gml_Script___get_text@anon@8045@__scribble_class_model@__scribble_class_model";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xe9;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  uVar9 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xeb;
  puVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_cc = 0;
  local_d8 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_d8,DAT_141955260,1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_78 = 0xeb;
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = _DAT_141dcb8d8;
    uStack_f4 = uRam0000000141dcb8dc;
    uStack_f0 = uRam0000000141dcb8e0;
    uStack_ec = DAT_141dcb8e4;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_50 = &local_b8;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
LAB_14014dca8:
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
      puVar6 = (undefined8 *)*param_5;
      if (puVar6 != &local_a8) goto LAB_14014dca8;
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
    FUN_1401ef7f0(param_1,param_2,&local_e8,3,pcVar11);
    uVar9 = local_dc;
  }
  local_78 = 0xec;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06b48);
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uVar4 = FUN_140e851f0(puVar6,uVar5,DAT_141955260,1);
  if (0x7fffffff < uVar4) goto LAB_14014df76;
  local_78 = 0xec;
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06b48);
  local_f8 = _DAT_141dcb8d8;
  uStack_f4 = uRam0000000141dcb8dc;
  uStack_f0 = uRam0000000141dcb8e0;
  uStack_ec = DAT_141dcb8e4;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_f8);
  local_58 = &local_c8;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14014de22:
    local_f8 = *(undefined4 *)puVar7;
    uStack_f4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_f0 = *(undefined4 *)(puVar7 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_b8) goto LAB_14014de22;
  }
  local_50 = &local_b8;
  local_f8 = _DAT_141dcb888;
  uStack_f4 = uRam0000000141dcb88c;
  uStack_f0 = uRam0000000141dcb890;
  uStack_ec = DAT_141dcb894;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_f8);
  local_48 = &local_a8;
  uStack_cc = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_d0 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) == 0) {
    local_d8 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_d8,puVar6);
  }
  uStack_ec = 7;
  local_f8 = 1;
  FUN_1400462a0(&local_d8,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = (undefined4)local_d8;
  uStack_f4 = local_d8._4_4_;
  uStack_f0 = uStack_d0;
  uStack_ec = uStack_cc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_f8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_40 = local_98;
  pcVar11 = (code *)&local_58;
  FUN_1401ef7f0(param_1,param_2,&local_e8,4,pcVar11);
  uVar9 = local_dc;
LAB_14014df76:
  local_78 = 0xee;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a056c8);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_78 = 0xf0;
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_f8 = _DAT_141dcb898;
    uStack_f4 = uRam0000000141dcb89c;
    uStack_f0 = uRam0000000141dcb8a0;
    uStack_ec = DAT_141dcb8a4;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
    local_58 = &local_c8;
    pcVar11 = (code *)&local_58;
    FUN_1401ef7f0(param_1,param_2,&local_e8,1,pcVar11);
    uVar9 = local_dc;
  }
  local_78 = 0xf3;
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
  if (0 < param_4) {
    puVar10 = (undefined8 *)*param_5;
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
  FUN_140e87440(plVar8,DAT_141a05358,0x80000000,&local_68,(ulonglong)pcVar11 & 0xffffffffffffff00,0)
  ;
  if (&local_68 != param_3) {
    local_f8 = (undefined4)local_68;
    uStack_f4 = local_68._4_4_;
    uStack_f0 = uStack_60;
    uStack_ec = uStack_5c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


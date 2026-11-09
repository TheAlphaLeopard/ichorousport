// gml_Script___flush_anon_2854___scribble_class_model___scribble_class_model @ 0x14014a590

undefined8 *
gml_Script___flush_anon_2854___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  uint uVar9;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_74;
  longlong *local_60 [5];
  
  local_90 = "gml_Script___submit@anon@2254@__scribble_class_model@__scribble_class_model";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x43;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  uVar9 = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x45;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05c98);
  cVar2 = FUN_140e491e0(uVar4);
  if (cVar2 != '\0') {
    local_88 = 0x45;
    if (param_3 != &DAT_1419df7b0) {
      local_c8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_c0 = DAT_1419df7b8;
      uStack_bc = DAT_1419df7bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_c8);
    }
    goto LAB_14014a986;
  }
  local_88 = 0x47;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05af8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a05e58);
  in_stack_ffffffffffffff20 = in_stack_ffffffffffffff20 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a04e98,0x80000000,&local_b8,uVar11,in_stack_ffffffffffffff20);
  FUN_140e609c0(param_1);
  if (&local_b8 != puVar5) {
    local_c8 = local_b8;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 0x49;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
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
    plVar8 = plVar6;
  }
  FUN_140e87440(plVar8,DAT_141a04d18,0x80000000,&local_a8,uVar11 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uStack_bc = 0xd;
  local_c8 = 0;
  cVar2 = FUN_140e491e0(&local_c8);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if (cVar2 == '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06a28);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') goto LAB_14014a880;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06ae8);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') goto LAB_14014a880;
    cVar2 = '\0';
  }
  else {
LAB_14014a880:
    if (param_4 < 2) {
      cVar2 = FUN_140e491e0(&DAT_1419df7b0);
    }
    else {
      cVar2 = FUN_140e491e0(param_5[1]);
    }
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  local_74 = 0xd;
  if (cVar2 != '\0') {
    uVar9 = 0x3ff00000;
  }
  local_80 = (ulonglong)uVar9 << 0x20;
  local_60[0] = &local_80;
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar5);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  uVar4 = FUN_140069500(plVar6);
  FUN_140e63610(uVar4,param_2,&local_d8,1,&local_a8,local_60);
LAB_14014a986:
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


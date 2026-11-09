// gml_Script____struct___48___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page @ 0x14015cbb0

undefined8 *
gml_Script____struct___48___get_glyph_data_anon_5426___scribble_class_page___scribble_class_page
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined1 *local_res8;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 **in_stack_ffffffffffffff40;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script___freeze@anon@4607@__scribble_class_page@__scribble_class_page";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x6f;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0.0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x71;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06af8);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_48 = 0x78;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_ac = 0;
    local_b8 = 0.0;
    local_48 = 0x79;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07368);
    iVar8 = 0;
    if ((*(int *)((longlong)plVar6 + 0xc) == 2) && (*plVar6 != 0)) {
      iVar8 = *(int *)(*plVar6 + 0x24);
    }
    while (0 < iVar8) {
      iVar8 = iVar8 + -1;
      local_48 = 0x7b;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a07368);
      iVar3 = FUN_140e4a740(&local_b8);
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
      uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
      FUN_140e87440(plVar6,DAT_141a07248,0x80000000,&local_98,uVar10,
                    (ulonglong)in_stack_ffffffffffffff40 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar10 >> 0x20);
      local_78 = local_98;
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_78);
      local_res8 = local_88;
      in_stack_ffffffffffffff40 = &local_res8;
      pcVar9 = (code *)CONCAT44(uVar11,DAT_141a07508);
      FUN_140e634e0(param_1,param_2,&local_a8,1,pcVar9,in_stack_ffffffffffffff40);
      local_48 = 0x7c;
      uVar4 = local_ac & 0xffffff;
      if (uVar4 == 0) {
LAB_14015ce61:
        local_b8 = local_b8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_b8 = (double)FUN_140e4b060(&local_b8);
          local_ac = 0;
          goto LAB_14015ce61;
        }
        if (uVar4 == 7) {
          local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_b8 = (double)((longlong)local_b8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_ac = 0;
            goto LAB_14015ce61;
          }
          FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
        }
      }
    }
    local_48 = 0x7f;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06af8);
    uStack_6c = 0xd;
    local_78 = 0x3ff0000000000000;
    if (&local_78 != puVar7) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_70;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_68);
    }
    local_48 = 0x81;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


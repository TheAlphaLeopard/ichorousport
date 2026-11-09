// gml_GlobalScript___scribble_class_null_element @ 0x140150630

undefined8 *
gml_GlobalScript___scribble_class_null_element
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  code *pcVar10;
  undefined8 **in_stack_ffffffffffffff40;
  double local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  
  local_60 = 
  "gml_Script___finalize_vertex_buffers@anon@11708@__scribble_class_model@__scribble_class_model";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x13e;
  pcVar10 = FUN_140041b30;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_ac = 0;
  local_b8 = 0.0;
  local_58 = 0x141;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
  uVar2 = local_res10;
  iVar9 = 0;
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar9 = *(int *)(*plVar5 + 0x24);
  }
  if (0 < iVar9) {
    do {
      iVar9 = iVar9 + -1;
      local_58 = 0x143;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
      iVar3 = FUN_140e4a740(&local_b8);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
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
        plVar8 = plVar5;
      }
      FUN_140e87440(plVar8,DAT_141a069d8,0x80000000,&local_88,
                    (ulonglong)pcVar10 & 0xffffffffffffff00,
                    (ulonglong)in_stack_ffffffffffffff40 & 0xffffffffffffff00);
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
LAB_140150811:
        local_78 = *(undefined4 *)puVar6;
        uStack_74 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_70 = *(undefined4 *)(puVar6 + 1);
        uStack_6c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_78);
      }
      else {
        puVar6 = (undefined8 *)*param_5;
        if (puVar6 != local_98) goto LAB_140150811;
      }
      local_res8 = local_98;
      iVar3 = FUN_140e4a740(&local_b8);
      if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar7 = FUN_140069500(plVar5);
      in_stack_ffffffffffffff40 = &local_res8;
      pcVar10 = (code *)&local_88;
      FUN_140e63610(uVar7,uVar2,&local_a8,1,pcVar10,in_stack_ffffffffffffff40);
      local_58 = 0x144;
      uVar4 = local_ac & 0xffffff;
      if (uVar4 == 0) {
LAB_140150923:
        local_b8 = local_b8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_b8 = (double)FUN_140e4b060(&local_b8);
          local_ac = 0;
          goto LAB_140150923;
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
            goto LAB_140150923;
          }
          FUN_140042910(&DAT_14172c3d8,&local_b8,&local_b8);
        }
      }
    } while (0 < iVar9);
    param_3 = local_res18;
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


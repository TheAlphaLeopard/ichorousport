// gml_Script___reset_anon_3356___scribble_class_model___scribble_class_model @ 0x14014aa20

undefined8 *
gml_Script___reset_anon_3356___scribble_class_model___scribble_class_model
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  double *pdVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined8 *in_stack_ffffffffffffff48;
  ulonglong in_stack_ffffffffffffff50;
  double local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
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
  
  local_50 = "gml_Script___freeze@anon@2557@__scribble_class_model@__scribble_class_model";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x4e;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a06af8);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_48 = 0x50;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = 0.0;
    local_48 = 0x51;
    pdVar6 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a06b48);
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar12 = *pdVar6;
    }
    else {
      dVar12 = (double)FUN_140e4b060(pdVar6);
    }
    uVar11 = (ulonglong)dVar12;
    uVar10 = (uint)uVar11;
    while (0 < (int)uVar10) {
      uVar10 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar10;
      local_48 = 0x53;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a05ec8);
      iVar3 = FUN_140e4a740(&local_a8);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
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
        plVar9 = plVar7;
      }
      FUN_140e87440(plVar9,DAT_141a05c38,0x80000000,&local_88,
                    (ulonglong)in_stack_ffffffffffffff48 & 0xffffffffffffff00,
                    in_stack_ffffffffffffff50 & 0xffffffffffffff00);
      iVar3 = FUN_140e4a740(&local_a8);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      uVar5 = FUN_140069500(plVar7);
      in_stack_ffffffffffffff50 = 0;
      in_stack_ffffffffffffff48 = &local_88;
      FUN_140e63610(uVar5,param_2,&local_98,0,in_stack_ffffffffffffff48,0);
      local_48 = 0x54;
      uVar4 = local_9c & 0xffffff;
      if (uVar4 == 0) {
LAB_14014acbd:
        local_a8 = local_a8 + 1.0;
      }
      else {
        if (uVar4 == 1) {
          local_a8 = (double)FUN_140e4b060(&local_a8);
          local_9c = 0;
          goto LAB_14014acbd;
        }
        if (uVar4 == 7) {
          local_a8 = (double)CONCAT44(local_a8._4_4_,local_a8._0_4_ + 1);
        }
        else if (uVar4 == 10) {
          local_a8 = (double)((longlong)local_a8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_9c = 0;
            goto LAB_14014acbd;
          }
          FUN_140042910(&DAT_14172c3d8,&local_a8,&local_a8);
        }
      }
    }
    local_48 = 0x57;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06af8);
    uStack_6c = 0xd;
    local_78 = 0x3ff0000000000000;
    if (&local_78 != puVar8) {
      local_68 = 0;
      uStack_64 = 0x3ff00000;
      uStack_60 = uStack_70;
      uStack_5c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_68);
    }
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


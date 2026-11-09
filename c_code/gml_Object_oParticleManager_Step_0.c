// gml_Object_oParticleManager_Step_0 @ 0x140bc4c60

longlong *
gml_Object_oParticleManager_Step_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong local_c8;
  longlong lStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  double local_a8;
  undefined4 local_9c;
  longlong local_98;
  byte local_8c;
  longlong local_88;
  byte local_7c;
  longlong local_78;
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  local_60 = "gml_Script_anon@3624@gml_Object_oParticleManager_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xec;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0.0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xed;
  plVar8 = &DAT_1419df7b0;
  if (param_4 < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)param_5[2];
  }
  cVar2 = FUN_140e491e0(puVar6);
  if (cVar2 == '\0') {
    local_58 = 0xf7;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6f28);
    iVar4 = 0;
    if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
      iVar4 = *(int *)(*plVar5 + 0x24);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = (double)iVar4;
    local_58 = 0xf8;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6ea8);
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f28);
    if (plVar5 != &local_98) {
      local_c8 = *plVar5;
      lStack_c0 = plVar5[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    local_50 = &local_98;
    if (param_4 < 1) {
      plVar5 = &DAT_1419df7b0;
LAB_140bc5049:
      local_c8 = *plVar5;
      lStack_c0 = plVar5[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_c8);
    }
    else {
      plVar5 = (longlong *)*param_5;
      if (plVar5 != &local_88) goto LAB_140bc5049;
    }
    local_48 = &local_88;
    if ((param_4 < 2) || (plVar8 = (longlong *)param_5[1], plVar8 != &local_78)) {
      local_c8 = *plVar8;
      lStack_c0 = plVar8[1];
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_c8);
    }
    local_40 = &local_78;
    FUN_140e609c0(param_1);
    uVar3 = FUN_140e4a740(&local_a8);
    plVar8 = (longlong *)FUN_140e48e40(puVar6,uVar3);
    FUN_140e609c0(*(undefined8 *)*puVar6);
    plVar5 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar7,DAT_1419fd6d8),&local_50);
    if (plVar5 != plVar8) {
      local_c8 = *plVar5;
      lStack_c0 = plVar5[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar8);
      }
      FUN_140041b80(plVar8,&local_c8);
    }
    FUN_140e60910(2);
    local_58 = 0xfa;
    uVar7 = DAT_1419f6f28;
    goto LAB_140bc515f;
  }
  local_58 = 0xef;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6f68);
  iVar4 = 0;
  if ((*(int *)((longlong)plVar5 + 0xc) == 2) && (*plVar5 != 0)) {
    iVar4 = *(int *)(*plVar5 + 0x24);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = (double)iVar4;
  local_58 = 0xf0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f6ea8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6f68);
  if (plVar5 != &local_98) {
    local_c8 = *plVar5;
    lStack_c0 = plVar5[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_c8);
  }
  local_50 = &local_98;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_140bc4e30:
    local_c8 = *plVar5;
    lStack_c0 = plVar5[1];
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  else {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != &local_88) goto LAB_140bc4e30;
  }
  local_48 = &local_88;
  if ((param_4 < 2) || (plVar8 = (longlong *)param_5[1], plVar8 != &local_78)) {
    local_c8 = *plVar8;
    lStack_c0 = plVar8[1];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_c8);
  }
  local_40 = &local_78;
  FUN_140e609c0(param_1);
  uVar3 = FUN_140e4a740(&local_a8);
  plVar8 = (longlong *)FUN_140e48e40(puVar6,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  plVar5 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar7,DAT_1419fd6d8),&local_50);
  if (plVar5 != plVar8) {
    local_c8 = *plVar5;
    lStack_c0 = plVar5[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar8);
    }
    FUN_140041b80(plVar8,&local_c8);
  }
  FUN_140e60910(2);
  local_58 = 0xf2;
  uVar7 = DAT_1419f6f68;
LAB_140bc515f:
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,uVar7);
  iVar4 = FUN_140e4a740(&local_a8);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
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
  if (plVar8 != param_3) {
    local_c8 = *plVar8;
    lStack_c0 = plVar8[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


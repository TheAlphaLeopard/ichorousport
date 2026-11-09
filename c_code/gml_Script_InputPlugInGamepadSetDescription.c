// gml_Script_InputPlugInGamepadSetDescription @ 0x14035b230

undefined8 *
gml_Script_InputPlugInGamepadSetDescription
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong **pplVar12;
  undefined4 uVar13;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 *local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  longlong local_70;
  byte local_64;
  longlong *local_50 [3];
  
  local_80 = "gml_Script_InputPlugInGamepadResetMapping";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  _eh_vector_constructor_iterator_(&local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = (undefined8 *)0x0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde638) &&
     (_Init_thread_header(&DAT_141dde638), DAT_141dde638 == -1)) {
    DAT_141dde640 = (longlong *)FUN_140e63aa0(DAT_1419f3298);
    _Init_thread_footer(&DAT_141dde638);
  }
  if (DAT_141ddc127 == '\0') {
    FUN_140e64380(DAT_141dde640,"gml_Script_InputPlugInGamepadResetMapping");
    FUN_140e64380(param_1,"gml_Script_InputPlugInGamepadResetMapping");
  }
  local_78 = 8;
  if (DAT_141ddc127 == '\0') {
    DAT_141ddc127 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde640 + 0x10))(DAT_141dde640,DAT_1419fd298);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar11 = 0;
    uVar5 = gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                      (param_1,param_2,&local_d8,0,0);
    FUN_140e87440(uVar5,DAT_1419fd268,0x80000000,&local_98,uVar11 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    FUN_140e609c0(DAT_141dde640);
    if (&local_98 != puVar4) {
      local_c8 = (undefined4)local_98;
      uStack_c4 = local_98._4_4_;
      uStack_c0 = uStack_90;
      uStack_bc = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_78 = 10;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar7 = &DAT_1419df7b0;
  }
  else {
    plVar7 = (longlong *)*param_5;
    if (plVar7 == &local_70) goto LAB_14035b4b9;
  }
  local_c8 = (undefined4)*plVar7;
  uStack_c4 = *(undefined4 *)((longlong)plVar7 + 4);
  uStack_c0 = (undefined4)plVar7[1];
  uStack_bc = *(undefined4 *)((longlong)plVar7 + 0xc);
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  FUN_140041b80(&local_70,&local_c8);
LAB_14035b4b9:
  local_50[0] = &local_70;
  pplVar12 = local_50;
  ppuVar6 = (undefined8 **)gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_d8,1,pplVar12);
  uVar13 = (undefined4)((ulonglong)pplVar12 >> 0x20);
  if (ppuVar6 != &local_a8) {
    local_c8 = *(undefined4 *)ppuVar6;
    uStack_c4 = *(undefined4 *)((longlong)ppuVar6 + 4);
    uStack_c0 = *(undefined4 *)(ppuVar6 + 1);
    uStack_bc = *(undefined4 *)((longlong)ppuVar6 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_78 = 0xb;
  iVar2 = FUN_140e851f0(&local_a8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_78 = 0xb;
  }
  else {
    local_78 = 0xd;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    plVar7 = (longlong *)(**(code **)(*DAT_141dde640 + 8))(DAT_141dde640,DAT_1419fd298);
    if (param_4 < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)param_5[1];
    }
    local_ac = *(undefined4 *)((longlong)puVar10 + 0xc);
    local_b0 = *(undefined4 *)(puVar10 + 1);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_b8 = *puVar10;
    }
    else {
      FUN_1400419b0(&local_b8);
    }
    uStack_bc = 7;
    local_c8 = 0x8001;
    FUN_1400462a0(&local_b8,&local_c8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    iVar2 = FUN_140e4a740(&local_b8);
    if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar7 != &local_70) {
      local_c8 = (undefined4)*plVar7;
      uStack_c4 = *(undefined4 *)((longlong)plVar7 + 4);
      uStack_c0 = (undefined4)plVar7[1];
      uStack_bc = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_70);
      }
      FUN_140041b80(&local_70,&local_c8);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_50[0] = &local_70;
    if (1 < param_4) {
      puVar4 = (undefined8 *)param_5[1];
    }
    local_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    local_b0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
      local_b8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_b8,puVar4);
    }
    uStack_bc = 7;
    local_c8 = 0x8001;
    FUN_1400462a0(&local_b8,&local_c8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uVar3 = FUN_140e4a740(&local_b8);
    puVar8 = (undefined4 *)FUN_140e48e40(&local_a8,uVar3);
    FUN_140e609c0(*local_a8);
    puVar9 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar13,DAT_1419fd0c8),local_50);
    if (puVar9 != puVar8) {
      local_c8 = *puVar9;
      uStack_c4 = puVar9[1];
      uStack_c0 = puVar9[2];
      uStack_bc = puVar9[3];
      if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_c8);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


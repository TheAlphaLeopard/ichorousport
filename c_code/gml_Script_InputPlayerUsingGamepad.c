// gml_Script_InputPlayerUsingGamepad @ 0x140353f10

undefined8 *
gml_Script_InputPlayerUsingGamepad
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputPlayerSwap";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 8;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde5b8) &&
     (_Init_thread_header(&DAT_141dde5b8), DAT_141dde5b8 == -1)) {
    DAT_141dde5c0 = (longlong *)FUN_140e63aa0(DAT_1419f2dc8);
    _Init_thread_footer(&DAT_141dde5b8);
  }
  if (DAT_141ddc11e == '\0') {
    FUN_140e64380(DAT_141dde5c0,"gml_Script_InputPlayerSwap");
    FUN_140e64380(param_1,"gml_Script_InputPlayerSwap");
  }
  local_38 = 10;
  if (DAT_141ddc11e == '\0') {
    DAT_141ddc11e = '\x01';
    puVar4 = (undefined4 *)(**(code **)(*DAT_141dde5c0 + 0x10))(DAT_141dde5c0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde5c0);
    puVar5 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_68,0,0);
    if (puVar5 != puVar4) {
      local_58 = *puVar5;
      uStack_54 = puVar5[1];
      uStack_50 = puVar5[2];
      uStack_4c = puVar5[3];
      if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xd;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde5c0 + 8))(DAT_141dde5c0,DAT_141a026b8);
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar2 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_98) {
    local_58 = (undefined4)*plVar6;
    uStack_54 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_50 = (undefined4)plVar6[1];
    uStack_4c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_58);
  }
  local_38 = 0xe;
  plVar6 = (longlong *)(**(code **)(*DAT_141dde5c0 + 8))(DAT_141dde5c0,DAT_141a026b8);
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  iVar2 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_a8) {
    local_58 = (undefined4)*plVar6;
    uStack_54 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_50 = (undefined4)plVar6[1];
    uStack_4c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_58);
  }
  local_38 = 0x10;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
LAB_140354249:
    local_58 = *(undefined4 *)puVar7;
    uStack_54 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_50 = *(undefined4 *)(puVar7 + 1);
    uStack_4c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_58);
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
    if (puVar7 != &local_78) goto LAB_140354249;
  }
  FUN_140e87930(&local_98,DAT_1419fd7f8,0x80000000,&local_78);
  local_38 = 0x11;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 == &local_88) goto LAB_1403542d5;
  }
  local_58 = *(undefined4 *)puVar7;
  uStack_54 = *(undefined4 *)((longlong)puVar7 + 4);
  uStack_50 = *(undefined4 *)(puVar7 + 1);
  uStack_4c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_58);
LAB_1403542d5:
  FUN_140e87930(&local_a8,DAT_1419fd7f8,0x80000000,&local_88);
  local_38 = 0x13;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141dde5c0 + 0x10))(DAT_141dde5c0,DAT_141a026b8);
  FUN_140e609c0(DAT_141dde5c0);
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e4a740(puVar8);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar7,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (&local_a8 != puVar8) {
    local_58 = (undefined4)local_a8;
    uStack_54 = local_a8._4_4_;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x14;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141dde5c0 + 0x10))(DAT_141dde5c0,DAT_141a026b8);
  FUN_140e609c0(DAT_141dde5c0);
  if (1 < param_4) {
    puVar9 = (undefined8 *)param_5[1];
  }
  uVar3 = FUN_140e4a740(puVar9);
  puVar9 = (undefined8 *)FUN_140e48e40(puVar7,uVar3);
  FUN_140e609c0(*(undefined8 *)*puVar7);
  if (&local_98 != puVar9) {
    local_58 = (undefined4)local_98;
    uStack_54 = local_98._4_4_;
    uStack_50 = uStack_90;
    uStack_4c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_58);
  }
  FUN_140e60910(2);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


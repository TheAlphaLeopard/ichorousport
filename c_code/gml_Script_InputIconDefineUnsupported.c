// gml_Script_InputIconDefineUnsupported @ 0x14032ca30

undefined8 *
gml_Script_InputIconDefineUnsupported
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
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
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_60 = "gml_Script_InputIconDefineKeyboard";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xb;
  FUN_140041df0(local_38,param_4,2,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde2a4) &&
     (_Init_thread_header(&DAT_141dde2a4), DAT_141dde2a4 == -1)) {
    DAT_141dde2a8 = (longlong *)FUN_140e63aa0(DAT_1419f1528);
    _Init_thread_footer(&DAT_141dde2a4);
  }
  if (DAT_141ddc0e9 == '\0') {
    FUN_140e64380(DAT_141dde2a8,"gml_Script_InputIconDefineKeyboard");
    FUN_140e64380(param_1,"gml_Script_InputIconDefineKeyboard");
  }
  local_58 = 0xd;
  if (DAT_141ddc0e9 == '\0') {
    DAT_141ddc0e9 = '\x01';
    puVar2 = (undefined8 *)(**(code **)(*DAT_141dde2a8 + 0x10))(DAT_141dde2a8,DAT_1419f1518);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    uVar6 = 0;
    uVar3 = FUN_1400ae430(param_1,param_2,&local_d8,0,0);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a018d8,0x80000000,&local_78,uVar6,
                  in_stack_ffffffffffffff20 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar6 >> 0x20);
    FUN_140e609c0(DAT_141dde2a8);
    if (&local_78 != puVar2) {
      local_c8 = (undefined4)local_78;
      uStack_c4 = local_78._4_4_;
      uStack_c0 = uStack_70;
      uStack_bc = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_c8);
    }
    FUN_140e60910(1);
  }
  local_58 = 0xf;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14032ccab:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 != &local_a8) goto LAB_14032ccab;
  }
  local_50 = &local_a8;
  uVar7 = CONCAT44(uVar8,DAT_1419fdbf8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar7,&local_50);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_58 = 0xf;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_38[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14032cd5e:
      local_c8 = *(undefined4 *)puVar5;
      uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_c0 = *(undefined4 *)(puVar5 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_c8);
    }
    else {
      puVar5 = (undefined8 *)*local_30;
      if (puVar5 != &local_98) goto LAB_14032cd5e;
    }
    local_48 = &local_98;
    if ((int)local_38[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_30;
    }
    uVar3 = CONCAT44(uVar8,DAT_1419fdc48);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar3,&local_48);
    uVar8 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if (puVar4 != puVar5) {
      local_c8 = *(undefined4 *)puVar4;
      uStack_c4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_c0 = *(undefined4 *)(puVar4 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_c8);
    }
  }
  local_58 = 0x11;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141dde2a8 + 8))(DAT_141dde2a8,DAT_1419f1518);
  if (puVar5 != &local_a8) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
  }
  local_50 = &local_a8;
  if ((int)local_38[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_30;
    if (puVar5 == &local_98) goto LAB_14032cec1;
  }
  local_c8 = *(undefined4 *)puVar5;
  uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_c0 = *(undefined4 *)(puVar5 + 1);
  uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_c8);
LAB_14032cec1:
  local_48 = &local_98;
  if (((int)local_38[0] < 2) || (puVar2 = (undefined8 *)local_30[1], puVar2 != &local_88)) {
    local_c8 = *(undefined4 *)puVar2;
    uStack_c4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_c0 = *(undefined4 *)(puVar2 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_c8);
  }
  local_40 = &local_88;
  FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar8,DAT_1419ff3d8),&local_50);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,3,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar2 = local_30;
    do {
      puVar5 = (undefined8 *)*puVar2;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar2 = puVar2 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


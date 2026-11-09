// gml_GlobalScript___InputRegisterPlayerDeviceChanged @ 0x1400c9b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___InputRegisterPlayerDeviceChanged
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined1 *local_48;
  
  local_70 = 
  "gml_Script_anon@166@__InputRegisterGamepadDisconnected@__InputRegisterGamepadDisconnected";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 5;
  _eh_vector_constructor_iterator_(local_b8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc7e8) &&
     (_Init_thread_header(&DAT_141ddc7e8), DAT_141ddc7e8 == -1)) {
    DAT_141ddc7e0 = (longlong *)FUN_140e63aa0(DAT_141a02aa8);
    _Init_thread_footer(&DAT_141ddc7e8);
  }
  if (DAT_141ddc054 == '\0') {
    FUN_140e64380(DAT_141ddc7e0,
                  "gml_Script_anon@166@__InputRegisterGamepadDisconnected@__InputRegisterGamepadDisconnected"
                 );
    FUN_140e64380(param_1,
                  "gml_Script_anon@166@__InputRegisterGamepadDisconnected@__InputRegisterGamepadDisconnected"
                 );
  }
  local_68 = 7;
  if (DAT_141ddc054 == '\0') {
    DAT_141ddc054 = '\x01';
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a011a8);
    puVar6 = (undefined4 *)(**(code **)(*DAT_141ddc7e0 + 0x10))(DAT_141ddc7e0,DAT_141a01188);
    FUN_140e609c0(DAT_141ddc7e0);
    if (puVar5 != puVar6) {
      local_d8 = *puVar5;
      uStack_d4 = puVar5[1];
      uStack_d0 = puVar5[2];
      uStack_cc = puVar5[3];
      if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_d8);
    }
    FUN_140e60910(1);
  }
  local_68 = 9;
  plVar7 = (longlong *)(**(code **)(*DAT_141ddc7e0 + 8))(DAT_141ddc7e0,DAT_141a01188);
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(puVar8);
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
  iVar3 = FUN_140e851f0(plVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) goto LAB_1400ca0f1;
  local_68 = 0xb;
  if (param_4 < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)param_5[1];
  }
  cVar2 = FUN_140e491e0(puVar8);
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_d8 = _DAT_141dcb068;
  uStack_d4 = uRam0000000141dcb06c;
  uStack_d0 = uRam0000000141dcb070;
  uStack_cc = DAT_141dcb074;
  if (cVar2 == '\0') {
    local_68 = 0x12;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_d8);
    local_58 = local_b8;
    if (param_4 < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_1400c9f86:
      local_d8 = *(undefined4 *)puVar8;
      uStack_d4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_d0 = *(undefined4 *)(puVar8 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_d8);
    }
    else {
      puVar8 = (undefined8 *)*param_5;
      if (puVar8 != &local_a8) goto LAB_1400c9f86;
    }
    uStack_50 = &local_a8;
    local_d8 = _DAT_141dcb078;
    uStack_d4 = uRam0000000141dcb07c;
    uStack_d0 = uRam0000000141dcb080;
    uStack_cc = DAT_141dcb084;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_d8);
    local_48 = local_98;
    gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
              (param_1,param_2,&local_c8,3,&local_58);
    local_68 = 0x13;
    plVar7 = (longlong *)(**(code **)(*DAT_141ddc7e0 + 8))(DAT_141ddc7e0,DAT_141a01188);
    local_d8 = 0;
    uStack_d4 = 0x3ff00000;
    uStack_cc = 0xd;
    local_58 = (undefined1 *)0x3ff0000000000000;
    uStack_50 = (undefined8 *)CONCAT44(0xd,uStack_d0);
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_58);
    if (0 < param_4) {
      puVar9 = (undefined8 *)*param_5;
    }
    iVar3 = FUN_140e4a740(puVar9);
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
    FUN_140e87930(plVar7,DAT_1419fd318,0x80000000,&local_88);
    goto LAB_1400ca0f1;
  }
  local_68 = 0xd;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_d8);
  local_58 = local_b8;
  if (param_4 < 1) {
    puVar9 = &DAT_1419df7b0;
LAB_1400c9e1f:
    local_d8 = *(undefined4 *)puVar9;
    uStack_d4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_d0 = *(undefined4 *)(puVar9 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_d8);
  }
  else {
    puVar9 = (undefined8 *)*param_5;
    if (puVar9 != &local_a8) goto LAB_1400c9e1f;
  }
  uStack_50 = &local_a8;
  local_d8 = _DAT_141dcb088;
  uStack_d4 = uRam0000000141dcb08c;
  uStack_d0 = uRam0000000141dcb090;
  uStack_cc = DAT_141dcb094;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_d8);
  local_48 = local_98;
  gml_Script___ApplyPS5_anon_427___InputTrggerEffectClassFeedback___InputTrggerEffectClassFeedback
            (param_1,param_2,&local_c8,3,&local_58);
  local_68 = 0xe;
  puVar9 = (undefined8 *)(**(code **)(*DAT_141ddc7e0 + 0x10))(DAT_141ddc7e0,DAT_141a01188);
  FUN_140e609c0(DAT_141ddc7e0);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar4 = FUN_140e4a740(param_5);
  puVar8 = (undefined8 *)FUN_140e48e40(puVar9,uVar4);
  FUN_140e609c0(*(undefined8 *)*puVar9);
  if (puVar8 != &DAT_1419df7b0) {
    local_d8 = (undefined4)DAT_1419df7b0;
    uStack_d4 = DAT_1419df7b0._4_4_;
    uStack_d0 = DAT_1419df7b8;
    uStack_cc = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_d8);
  }
  FUN_140e60910(2);
LAB_1400ca0f1:
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


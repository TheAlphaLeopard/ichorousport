// gml_Script_InputVibrateGetSupported @ 0x140384d20

undefined8 *
gml_Script_InputVibrateGetSupported
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff58;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_InputVibrateGetStrength";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 7;
  FUN_140041df0(local_68,param_4,1,param_5);
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8f4) {
    _Init_thread_header(&DAT_141dde8f4);
    if (DAT_141dde8f4 == -1) {
      DAT_141dde8f8 = (longlong *)FUN_140e63aa0(DAT_1419f4228);
      _Init_thread_footer(&DAT_141dde8f4);
    }
  }
  local_38 = 7;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_38 = 7;
    if ((int)local_68[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if (DAT_141ddc159 == '\0') {
    FUN_140e64380(DAT_141dde8f8,"gml_Script_InputVibrateGetStrength");
    FUN_140e64380(param_1,"gml_Script_InputVibrateGetStrength");
  }
  local_38 = 9;
  if (DAT_141ddc159 == '\0') {
    DAT_141ddc159 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde8f8 + 0x10))(DAT_141dde8f8,DAT_141a026b8);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    in_stack_ffffffffffffff58 = 0;
    uVar4 = FUN_1400ebd30(param_1,param_2,&local_98,0,0);
    in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419fed38,0x80000000,&local_78,in_stack_ffffffffffffff58,0);
    FUN_140e609c0(DAT_141dde8f8);
    if (&local_78 != puVar3) {
      local_58 = (undefined4)local_78;
      uStack_54 = local_78._4_4_;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_58);
    }
    FUN_140e60910(1);
  }
  local_38 = 0xb;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde8f8 + 8))(DAT_141dde8f8,DAT_141a026b8);
  if (0 < (int)local_68[0]) {
    puVar7 = (undefined8 *)*local_60;
  }
  iVar2 = FUN_140e4a740(puVar7);
  if (((*(uint *)((longlong)plVar5 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar5, lVar1 != 0)) {
    if ((iVar2 < 0) || (*(int *)(lVar1 + 0x24) <= iVar2)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87440(plVar5,DAT_141a03db8,0x80000000,&local_88,
                in_stack_ffffffffffffff58 & 0xffffffffffffff00,0);
  if (&local_88 != param_3) {
    local_58 = (undefined4)local_88;
    uStack_54 = local_88._4_4_;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_58);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < (int)local_68[0]) {
    puVar7 = local_60;
    do {
      puVar3 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


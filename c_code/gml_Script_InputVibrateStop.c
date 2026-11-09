// gml_Script_InputVibrateStop @ 0x1403875c0

undefined8 *
gml_Script_InputVibrateStop
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
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_InputVibrateSetStrength";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 8;
  FUN_140041df0(local_78,param_4,2,param_5);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde938) {
    _Init_thread_header(&DAT_141dde938);
    if (DAT_141dde938 == -1) {
      DAT_141dde930 = (longlong *)FUN_140e63aa0(DAT_1419f4368);
      _Init_thread_footer(&DAT_141dde938);
    }
  }
  local_48 = 8;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_70[1];
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_48 = 8;
    if ((int)local_78[0] < 2) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_70[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if (DAT_141ddc15d == '\0') {
    FUN_140e64380(DAT_141dde930,"gml_Script_InputVibrateSetStrength");
    FUN_140e64380(param_1,"gml_Script_InputVibrateSetStrength");
  }
  local_48 = 10;
  if (DAT_141ddc15d == '\0') {
    DAT_141ddc15d = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde930 + 0x10))(DAT_141dde930,DAT_141a026b8);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar9 = 0;
    uVar4 = FUN_1400ebd30(param_1,param_2,&local_a8,0,0);
    FUN_140e87440(uVar4,DAT_1419fed38,0x80000000,&local_88,uVar9 & 0xffffffffffffff00,0);
    FUN_140e609c0(DAT_141dde930);
    if (&local_88 != puVar3) {
      local_68 = (undefined4)local_88;
      uStack_64 = local_88._4_4_;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_68);
    }
    FUN_140e60910(1);
  }
  local_48 = 0xc;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde930 + 8))(DAT_141dde930,DAT_141a026b8);
  if ((int)local_78[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_70;
  }
  if ((*(uint *)((longlong)puVar3 + 0xc) & 0xffffff) == 0) {
    uVar8 = (undefined4)*puVar3;
  }
  else {
    uVar8 = FUN_140e4b060();
  }
  uVar4 = FUN_140e78ec0(uVar8,0,0x3ff0000000000000);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  if (1 < (int)local_78[0]) {
    puVar7 = (undefined8 *)local_70[1];
  }
  local_98 = uVar4;
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
  FUN_140e87930(plVar5,DAT_141a03db8,0x80000000,&local_98);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (0 < (int)local_78[0]) {
    puVar7 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


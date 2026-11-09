// gml_Script_InputVirtualCreate @ 0x140387b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVirtualCreate
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
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  uint local_50 [2];
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_80 = "gml_Script_InputVibrateStop";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 7;
  FUN_140041df0(local_50,param_4,1,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde948) {
    _Init_thread_header(&DAT_141dde948);
    if (DAT_141dde948 == -1) {
      DAT_141dde940 = (longlong *)FUN_140e63aa0(DAT_1419f4488);
      _Init_thread_footer(&DAT_141dde948);
    }
  }
  local_78 = 7;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*local_48;
  }
  iVar2 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_78 = 7;
    if ((int)local_50[0] < 1) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)*local_48;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
  }
  if (DAT_141ddc15e == '\0') {
    FUN_140e64380(DAT_141dde940,"gml_Script_InputVibrateStop");
    FUN_140e64380(param_1,"gml_Script_InputVibrateStop");
  }
  local_78 = 9;
  if (DAT_141ddc15e == '\0') {
    DAT_141ddc15e = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141dde940 + 0x10))(DAT_141dde940,DAT_141a026b8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar9 = 0;
    uVar4 = FUN_1400ebd30(param_1,param_2,&local_c8,0,0);
    in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
    pcVar8 = (code *)(uVar9 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_1419fed38,0x80000000,&local_b8,pcVar8,in_stack_ffffffffffffff30);
    FUN_140e609c0(DAT_141dde940);
    if (&local_b8 != puVar3) {
      local_98 = (undefined4)local_b8;
      uStack_94 = local_b8._4_4_;
      uStack_90 = uStack_b0;
      uStack_8c = uStack_ac;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_98);
    }
    FUN_140e60910(1);
  }
  local_78 = 0xb;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  plVar5 = (longlong *)(**(code **)(*DAT_141dde940 + 8))(DAT_141dde940,DAT_141a026b8);
  if (0 < (int)local_50[0]) {
    puVar7 = (undefined8 *)*local_48;
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
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(plVar5,DAT_141a04338,0x80000000,&local_a8,uVar9,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  local_98 = (undefined4)local_a8;
  uStack_94 = local_a8._4_4_;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_98);
  local_40 = local_70;
  local_98 = _DAT_141dc6500;
  uStack_94 = uRam0000000141dc6504;
  uStack_90 = uRam0000000141dc6508;
  uStack_8c = uRam0000000141dc650c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_98);
  local_38 = local_60;
  FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar10,DAT_1419fee68),&local_40);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar7 = local_48;
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
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


// gml_Script_InputVibrateGetMagnitude @ 0x140382b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script_InputVibrateGetMagnitude
                   (undefined8 param_1,undefined8 param_2,double *param_3,undefined4 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 **ppuVar13;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  longlong local_78;
  int local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_InputVibrateGetEventCount";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 9;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_12c = 0;
  local_138 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde8d8) &&
     (_Init_thread_header(&DAT_141dde8d8), DAT_141dde8d8 == -1)) {
    DAT_141dde8d0 = (longlong *)FUN_140e63aa0(DAT_1419f41c8);
    _Init_thread_footer(&DAT_141dde8d8);
  }
  local_b8 = 9;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 9;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc156 == '\0') {
    FUN_140e64380(DAT_141dde8d0,"gml_Script_InputVibrateGetEventCount");
    FUN_140e64380(param_1,"gml_Script_InputVibrateGetEventCount");
  }
  local_b8 = 0xb;
  if (DAT_141ddc156 == '\0') {
    DAT_141ddc156 = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde8d0 + 0x10))(DAT_141dde8d0,DAT_141a026b8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar11 = 0;
    uVar6 = FUN_1400ebd30(param_1,param_2,&local_138,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_68,uVar11,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde8d0);
    if (&local_68 != puVar5) {
      uStack_140 = CONCAT44(uStack_5c,uStack_60);
      local_148 = local_68;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 4;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140382e86:
    local_148 = *puVar5;
    uStack_140 = puVar5[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_140382e86;
  }
  local_a0 = &local_128;
  ppuVar13 = &local_a0;
  ppuVar12 = (undefined8 **)CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar12,ppuVar13);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_b8 = 5;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar10 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140382f4f:
      local_148 = *puVar5;
      uStack_140 = puVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_140382f4f;
    }
    local_98 = &local_118;
    local_148 = _DAT_141dd1fc8;
    uStack_140 = uRam0000000141dd1fd0;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_90 = &local_108;
    ppuVar13 = &local_98;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar10,DAT_1419fdc58),ppuVar13);
    if (puVar5 != &local_f8) {
      local_148 = *puVar5;
      uStack_140 = puVar5[1];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_88 = &local_f8;
    local_148 = _DAT_141dd1ff8;
    uStack_140 = uRam0000000141dd2000;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    ppuVar12 = &local_90;
    FUN_14008e020(param_1,param_2,&local_b0,3,ppuVar12);
    uVar10 = local_a4;
  }
  local_b8 = 0xb;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_140 = uStack_140 & 0xffffffff;
  local_148 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)(uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar4 < 0x80000000) {
    local_b8 = 0xf;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = _DAT_141dd1fd8;
    uStack_140 = uRam0000000141dd1fe0;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_a0 = &local_128;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14038318d:
      local_148 = *puVar5;
      uStack_140 = puVar5[1];
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_118) goto LAB_14038318d;
    }
    local_98 = &local_118;
    local_148 = _DAT_141dd1fe8;
    uStack_140 = uRam0000000141dd1ff0;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_90 = &local_108;
    local_148 = _DAT_1419e45f0;
    uStack_140 = uRam00000001419e45f8;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_88 = &local_f8;
    local_148 = _DAT_141dd2018;
    uStack_140 = uRam0000000141dd2020;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    ppuVar12 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_138,5,ppuVar12);
  }
  local_b8 = 0x12;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_140 = uStack_140 & 0xffffffff;
  local_148 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)(uStack_140 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140383432;
  local_b8 = 0x12;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_58 = _DAT_141dd1fd8;
  uStack_50 = uRam0000000141dd1fe0;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_58);
  local_a0 = &local_128;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14038339b:
    local_58 = *puVar5;
    uStack_50 = puVar5[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_58);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_14038339b;
  }
  local_98 = &local_118;
  local_58 = _DAT_141dd2008;
  uStack_50 = uRam0000000141dd2010;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_58);
  local_90 = &local_108;
  ppuVar12 = &local_a0;
  FUN_14008e020(param_1,param_2,&local_138,3,ppuVar12);
LAB_140383432:
  local_b8 = 0xf;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde8d0 + 8))(DAT_141dde8d0,DAT_141a026b8);
  if (0 < (int)local_48[0]) {
    puVar8 = (undefined8 *)*local_40;
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
  FUN_140e87440(plVar7,DAT_141a04338,0x80000000,&local_78,(ulonglong)ppuVar12 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  iVar3 = 0;
  if ((local_6c == 2) && (local_78 != 0)) {
    iVar3 = *(int *)(local_78 + 0x24);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = (double)iVar3;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


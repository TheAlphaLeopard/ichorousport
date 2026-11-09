// gml_Script_InputVerbGroupGetVerbs @ 0x140377350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputVerbGroupGetVerbs
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffeb0;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
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
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_c0 = "gml_Script_InputVerbGroupGetActive";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 9;
  FUN_140041df0(local_58,param_4,2,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_12c = 0;
  local_138 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde820) &&
     (_Init_thread_header(&DAT_141dde820), DAT_141dde820 == -1)) {
    DAT_141dde818 = (longlong *)FUN_140e63aa0(DAT_1419f3d28);
    _Init_thread_footer(&DAT_141dde820);
  }
  local_b8 = 9;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_b8 = 9;
    if ((int)local_58[0] < 2) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_50[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc14a == '\0') {
    FUN_140e64380(DAT_141dde818,"gml_Script_InputVerbGroupGetActive");
    FUN_140e64380(param_1,"gml_Script_InputVerbGroupGetActive");
  }
  local_b8 = 0xb;
  if (DAT_141ddc14a == '\0') {
    DAT_141ddc14a = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde818 + 0x10))(DAT_141dde818,DAT_141a04048);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar13 = 0;
    uVar7 = gml_Script___Update_anon_619___InputVibrateClassADSR___InputVibrateClassADSR
                      (param_1,param_2,&local_138,0,0);
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(uVar7,DAT_141a03fe8,0x80000000,&local_78,uVar13,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar13 >> 0x20);
    FUN_140e609c0(DAT_141dde818);
    if (&local_78 != puVar6) {
      local_148 = local_78;
      uStack_140 = uStack_70;
      uStack_13c = uStack_6c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_148);
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
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140377655:
    local_148 = *puVar6;
    uStack_140 = *(undefined4 *)(puVar6 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
    if (puVar6 != &local_128) goto LAB_140377655;
  }
  local_a0 = &local_128;
  uVar14 = CONCAT44(uVar11,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar14,&local_a0);
  uVar15 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_b8 = 9;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_58[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140377720:
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_50[1];
      if (puVar6 != &local_118) goto LAB_140377720;
    }
    local_98 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd1ccc,_DAT_141dd1cc8);
    uStack_140 = uRam0000000141dd1cd0;
    uStack_13c = DAT_141dd1cd4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_90 = local_108;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar15,DAT_1419fdc58),&local_98);
    if (puVar6 != &local_f8) {
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_88 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd1cdc,_DAT_141dd1cd8);
    uStack_140 = uRam0000000141dd1ce0;
    uStack_13c = DAT_141dd1ce4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    FUN_14008e020(param_1,param_2,&local_b0,3,&local_90);
    uVar11 = local_a4;
  }
  local_b8 = 0xd;
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
  }
  uStack_13c = 0;
  uVar12 = 0x3ff00000;
  local_148 = 0x3ff0000000000000;
  uVar5 = FUN_140e851f0(puVar6,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar5 < 0x80000000) {
    local_b8 = 0x12;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = CONCAT44(uRam0000000141dd1cac,_DAT_141dd1ca8);
    uStack_140 = uRam0000000141dd1cb0;
    uStack_13c = DAT_141dd1cb4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_a0 = &local_128;
    if ((int)local_58[0] < 2) {
      puVar6 = &DAT_1419df7b0;
LAB_140377962:
      local_148 = *puVar6;
      uStack_140 = *(undefined4 *)(puVar6 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar6 = (undefined8 *)local_50[1];
      if (puVar6 != &local_118) goto LAB_140377962;
    }
    local_98 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd1cbc,_DAT_141dd1cb8);
    uStack_140 = uRam0000000141dd1cc0;
    uStack_13c = DAT_141dd1cc4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_90 = local_108;
    local_148 = CONCAT44(uRam00000001419e4574,_DAT_1419e4570);
    uStack_140 = uRam00000001419e4578;
    uStack_13c = uRam00000001419e457c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_88 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd1c8c,_DAT_141dd1c88);
    uStack_140 = uRam0000000141dd1c90;
    uStack_13c = DAT_141dd1c94;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    FUN_14008e020(param_1,param_2,&local_138,5,&local_a0);
  }
  local_b8 = 0x12;
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar4 = FUN_140e851f0(puVar6,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar4 == -2 || -1 < iVar4) goto LAB_140377c0b;
  local_b8 = 0x12;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_68 = _DAT_141dd1ca8;
  uStack_64 = uRam0000000141dd1cac;
  uStack_60 = uRam0000000141dd1cb0;
  uStack_5c = DAT_141dd1cb4;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_68);
  local_a0 = &local_128;
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
LAB_140377b74:
    local_68 = *(undefined4 *)puVar6;
    uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_60 = *(undefined4 *)(puVar6 + 1);
    uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_68);
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
    if (puVar6 != &local_118) goto LAB_140377b74;
  }
  local_98 = &local_118;
  local_68 = _DAT_141dd1c98;
  uStack_64 = uRam0000000141dd1c9c;
  uStack_60 = uRam0000000141dd1ca0;
  uStack_5c = DAT_141dd1ca4;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_68);
  local_90 = local_108;
  FUN_14008e020(param_1,param_2,&local_138,3,&local_a0);
LAB_140377c0b:
  local_b8 = 0xf;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde818 + 8))(DAT_141dde818,DAT_141a04048);
  if ((int)local_58[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_50[1];
  }
  iVar4 = FUN_140e4a740(puVar6);
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
  uVar13 = FUN_140e4a8b0(plVar8);
  if (0 < (int)local_58[0]) {
    puVar9 = (undefined8 *)*local_50;
  }
  bVar3 = FUN_140e4a8b0(puVar9);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (0 < (longlong)(1L << (bVar3 & 0x3f) & uVar13)) {
    uVar12 = 0;
  }
  *param_3 = (ulonglong)uVar12 << 0x20;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar9 = local_50;
    do {
      puVar6 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


// gml_Script_InputCursorSet @ 0x1403150e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputCursorSet
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
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
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  ulonglong in_stack_fffffffffffffe90;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78 [2];
  undefined8 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_e0 = "gml_Script_InputCursorLimitRemove";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 7;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_78,param_4,1,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_14c = 0;
  local_158 = 0;
  local_c4 = 0;
  local_d0 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde100) &&
     (_Init_thread_header(&DAT_141dde100), DAT_141dde100 == -1)) {
    DAT_141dde0f8 = (longlong *)FUN_140e63aa0(DAT_1419f0508);
    _Init_thread_footer(&DAT_141dde100);
  }
  local_d8 = 7;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_70;
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_d8 = 7;
    if ((int)local_78[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_70;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc0ca == '\0') {
    FUN_140e64380(DAT_141dde0f8,"gml_Script_InputCursorLimitRemove");
    FUN_140e64380(local_res8,"gml_Script_InputCursorLimitRemove");
  }
  local_d8 = 9;
  if (DAT_141ddc0ca == '\0') {
    DAT_141ddc0ca = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde0f8 + 0x10))(DAT_141dde0f8,DAT_141a026b8);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar11 = 0;
    uVar6 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (local_res8,local_res10,&local_158,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_98,uVar11,
                  in_stack_fffffffffffffe90 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde0f8);
    if (&local_98 != puVar5) {
      local_168 = local_98;
      uStack_160 = uStack_90;
      uStack_15c = uStack_8c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_168);
    }
    FUN_140e60910(1);
  }
  local_d8 = 7;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403153d9:
    local_168 = *puVar5;
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
  }
  else {
    puVar5 = (undefined8 *)*local_70;
    if (puVar5 != &local_148) goto LAB_1403153d9;
  }
  local_c0 = &local_148;
  uVar12 = CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(local_res8,local_res10,&local_158,1,uVar12,&local_c0);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_d8 = 0xb;
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((int)local_78[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1403154aa:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)*local_70;
      if (puVar5 != &local_138) goto LAB_1403154aa;
    }
    local_b8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dcff1c,_DAT_141dcff18);
    uStack_160 = uRam0000000141dcff20;
    uStack_15c = DAT_141dcff24;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_b0 = local_128;
    puVar5 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_f8,1,CONCAT44(uVar13,DAT_1419fdc58),
                           &local_b8);
    if (puVar5 != &local_118) {
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_168);
    }
    local_a8 = &local_118;
    local_168 = CONCAT44(uRam0000000141dcff4c,_DAT_141dcff48);
    uStack_160 = uRam0000000141dcff50;
    uStack_15c = DAT_141dcff54;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_d0,3,&local_b0);
    uVar10 = local_c4;
  }
  local_d8 = 0x13;
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_70;
  }
  uStack_15c = 0;
  local_168 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (uVar4 < 0x80000000) {
    local_d8 = 0x13;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_168 = CONCAT44(uRam0000000141dcff5c,_DAT_141dcff58);
    uStack_160 = uRam0000000141dcff60;
    uStack_15c = DAT_141dcff64;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_168);
    local_c0 = &local_148;
    if ((int)local_78[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_1403156f6:
      local_168 = *puVar5;
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_168);
    }
    else {
      puVar5 = (undefined8 *)*local_70;
      if (puVar5 != &local_138) goto LAB_1403156f6;
    }
    local_b8 = &local_138;
    local_168 = CONCAT44(uRam0000000141dcff6c,_DAT_141dcff68);
    uStack_160 = uRam0000000141dcff70;
    uStack_15c = DAT_141dcff74;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_168);
    local_b0 = local_128;
    local_168 = CONCAT44(uRam00000001419e3f34,_DAT_1419e3f30);
    uStack_160 = uRam00000001419e3f38;
    uStack_15c = uRam00000001419e3f3c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_168);
    local_a8 = &local_118;
    local_168 = CONCAT44(uRam0000000141dcff2c,_DAT_141dcff28);
    uStack_160 = uRam0000000141dcff30;
    uStack_15c = DAT_141dcff34;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_168);
    local_a0 = local_108;
    FUN_14008e020(local_res8,local_res10,&local_158,5,&local_c0);
  }
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_70;
  }
  uStack_15c = 0;
  local_168 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_168,DAT_141955260,1);
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140315991;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_88 = _DAT_141dcff58;
  uStack_84 = uRam0000000141dcff5c;
  uStack_80 = uRam0000000141dcff60;
  uStack_7c = DAT_141dcff64;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_88);
  local_c0 = &local_148;
  if ((int)local_78[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403158f2:
    local_88 = *(undefined4 *)puVar5;
    uStack_84 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_80 = *(undefined4 *)(puVar5 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_88);
  }
  else {
    puVar5 = (undefined8 *)*local_70;
    if (puVar5 != &local_138) goto LAB_1403158f2;
  }
  local_b8 = &local_138;
  local_88 = _DAT_141dcff38;
  uStack_84 = uRam0000000141dcff3c;
  uStack_80 = uRam0000000141dcff40;
  uStack_7c = DAT_141dcff44;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_88);
  local_b0 = local_128;
  FUN_14008e020(local_res8,local_res10,&local_158,3,&local_c0);
LAB_140315991:
  local_d8 = 0xd;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde0f8 + 8))(DAT_141dde0f8,DAT_141a026b8);
  if (0 < (int)local_78[0]) {
    puVar8 = (undefined8 *)*local_70;
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
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,plVar7);
  if (0 < iVar3) {
    do {
      local_d8 = 0xf;
      puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00d28);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0;
      cVar2 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,5,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar8 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


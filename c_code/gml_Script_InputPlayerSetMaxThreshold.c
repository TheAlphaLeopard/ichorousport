// gml_Script_InputPlayerSetMaxThreshold @ 0x140350230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerSetMaxThreshold
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_InputPlayerSetGhost";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xe;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_11c = 0;
  local_128 = 0;
  local_84 = 0;
  local_90 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde588) &&
     (_Init_thread_header(&DAT_141dde588), DAT_141dde588 == -1)) {
    DAT_141dde580 = (longlong *)FUN_140e63aa0(DAT_1419f2cc8);
    _Init_thread_footer(&DAT_141dde588);
  }
  local_a8 = 0xe;
  puVar9 = &DAT_1419df7b0;
  uVar10 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_a8 = 0xe;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if (DAT_141ddc11a == '\0') {
    FUN_140e64380(DAT_141dde580,"gml_Script_InputPlayerSetGhost");
    FUN_140e64380(param_1,"gml_Script_InputPlayerSetGhost");
  }
  local_a8 = 0x10;
  if (DAT_141ddc11a == '\0') {
    DAT_141ddc11a = '\x01';
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde580 + 0x10))(DAT_141dde580,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde580);
    uVar11 = 0;
    puVar6 = (undefined8 *)gml_Script___InputTrace(param_1,param_2,&local_128,0,0);
    if (puVar6 != puVar5) {
      local_138 = *puVar6;
      uStack_130 = *(undefined4 *)(puVar6 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_138);
    }
    FUN_140e60910(1);
  }
  local_a8 = 4;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14035050a:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_118) goto LAB_14035050a;
  }
  local_70 = &local_118;
  uVar12 = CONCAT44(uVar11,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar12,&local_70);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar11 = 0;
  if (cVar2 == '\0') {
    local_a8 = 6;
    local_90 = 0;
    local_88 = 0;
    local_84 = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1403505d5:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_108) goto LAB_1403505d5;
    }
    local_68 = &local_108;
    local_138 = CONCAT44(uRam0000000141dd0f9c,_DAT_141dd0f98);
    uStack_130 = uRam0000000141dd0fa0;
    uStack_12c = DAT_141dd0fa4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_60 = local_f8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar13,DAT_1419fdc58),&local_68);
    if (puVar5 != &local_e8) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_58 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dd0f6c,_DAT_141dd0f68);
    uStack_130 = uRam0000000141dd0f70;
    uStack_12c = DAT_141dd0f74;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_50 = local_d8;
    FUN_14008e020(param_1,param_2,&local_90,3,&local_60);
    uVar11 = local_84;
  }
  local_a8 = 8;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar4 < 0x80000000) {
    local_a8 = 0xc;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam0000000141dd0f7c,_DAT_141dd0f78);
    uStack_130 = uRam0000000141dd0f80;
    uStack_12c = DAT_141dd0f84;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_70 = &local_118;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140350817:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_108) goto LAB_140350817;
    }
    local_68 = &local_108;
    local_138 = CONCAT44(uRam0000000141dd0fac,_DAT_141dd0fa8);
    uStack_130 = uRam0000000141dd0fb0;
    uStack_12c = DAT_141dd0fb4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_138);
    local_60 = local_f8;
    local_138 = CONCAT44(uRam00000001419e42b4,_DAT_1419e42b0);
    uStack_130 = uRam00000001419e42b8;
    uStack_12c = uRam00000001419e42bc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_58 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dd0fbc,_DAT_141dd0fb8);
    uStack_130 = uRam0000000141dd0fc0;
    uStack_12c = DAT_141dd0fc4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_50 = local_d8;
    FUN_14008e020(param_1,param_2,&local_128,5,&local_70);
  }
  local_a8 = 0x14;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_a8 = 0x17;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_80 = _DAT_141dd0f78;
    uStack_7c = uRam0000000141dd0f7c;
    uStack_78 = uRam0000000141dd0f80;
    uStack_74 = DAT_141dd0f84;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_80);
    local_70 = &local_118;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140350a23:
      local_80 = *(undefined4 *)puVar5;
      uStack_7c = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_78 = *(undefined4 *)(puVar5 + 1);
      uStack_74 = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_80);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_108) goto LAB_140350a23;
    }
    local_68 = &local_108;
    local_80 = _DAT_141dd0f88;
    uStack_7c = uRam0000000141dd0f8c;
    uStack_78 = uRam0000000141dd0f90;
    uStack_74 = DAT_141dd0f94;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_80);
    local_60 = local_f8;
    FUN_14008e020(param_1,param_2,&local_128,3,&local_70);
  }
  local_a8 = 0x14;
  plVar8 = (longlong *)(**(code **)(*DAT_141dde580 + 8))(DAT_141dde580,DAT_141a026b8);
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 == &local_a0) goto LAB_140350b1b;
  }
  local_80 = *(undefined4 *)puVar5;
  uStack_7c = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_78 = *(undefined4 *)(puVar5 + 1);
  uStack_74 = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  FUN_140041b80(&local_a0,&local_80);
LAB_140350b1b:
  if (1 < (int)local_48[0]) {
    puVar9 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e4a740(puVar9);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar8,DAT_1419fd708,0x80000000,&local_a0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar9 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


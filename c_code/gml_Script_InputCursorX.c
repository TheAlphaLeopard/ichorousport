// gml_Script_InputCursorX @ 0x140316a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputCursorX
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
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
  undefined8 uVar12;
  undefined4 uVar13;
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
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_InputCursorSetSpeed";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xb;
  FUN_140041df0(local_48,param_4,2,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_12c = 0;
  local_138 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde110) &&
     (_Init_thread_header(&DAT_141dde110), DAT_141dde110 == -1)) {
    DAT_141dde118 = (longlong *)FUN_140e63aa0(DAT_1419f0558);
    _Init_thread_footer(&DAT_141dde110);
  }
  local_b8 = 0xb;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 0xb;
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
  if (DAT_141ddc0cc == '\0') {
    FUN_140e64380(DAT_141dde118,"gml_Script_InputCursorSetSpeed");
    FUN_140e64380(param_1,"gml_Script_InputCursorSetSpeed");
  }
  local_b8 = 0xd;
  if (DAT_141ddc0cc == '\0') {
    DAT_141ddc0cc = '\x01';
    puVar5 = (undefined8 *)(**(code **)(*DAT_141dde118 + 0x10))(DAT_141dde118,DAT_141a026b8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar11 = 0;
    uVar6 = gml_Script____struct___12___InputCursorTransformCoordinate___InputCursorTransformCoordinate
                      (param_1,param_2,&local_138,0,0);
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_1419fed38,0x80000000,&local_58,uVar11,
                  in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar10 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dde118);
    if (&local_58 != puVar5) {
      local_148 = local_58;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
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
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140316d8c:
    local_148 = *puVar5;
    uStack_140 = *(undefined4 *)(puVar5 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_128) goto LAB_140316d8c;
  }
  local_80 = &local_128;
  uVar12 = CONCAT44(uVar10,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar12,&local_80);
  uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
  cVar2 = FUN_140e491e0(uVar6);
  uVar10 = 0;
  if (cVar2 == '\0') {
    local_b8 = 5;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140316e57:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_118) goto LAB_140316e57;
    }
    local_78 = &local_118;
    local_148 = CONCAT44(uRam0000000141dcffdc,_DAT_141dcffd8);
    uStack_140 = uRam0000000141dcffe0;
    uStack_13c = DAT_141dcffe4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_70 = local_108;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar13,DAT_1419fdc58),&local_78);
    if (puVar5 != &local_f8) {
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_148);
    }
    local_68 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dd001c,_DAT_141dd0018);
    uStack_140 = uRam0000000141dd0020;
    uStack_13c = DAT_141dd0024;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_60 = local_e8;
    FUN_14008e020(param_1,param_2,&local_a0,3,&local_70);
    uVar10 = local_94;
  }
  local_b8 = 0xb;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
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
    local_148 = CONCAT44(uRam0000000141dcffec,_DAT_141dcffe8);
    uStack_140 = uRam0000000141dcfff0;
    uStack_13c = DAT_141dcfff4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_80 = &local_128;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_140317099:
      local_148 = *puVar5;
      uStack_140 = *(undefined4 *)(puVar5 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_118) goto LAB_140317099;
    }
    local_78 = &local_118;
    local_148 = CONCAT44(uRam0000000141dd002c,_DAT_141dd0028);
    uStack_140 = uRam0000000141dd0030;
    uStack_13c = DAT_141dd0034;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_148);
    local_70 = local_108;
    local_148 = CONCAT44(uRam00000001419e3f54,_DAT_1419e3f50);
    uStack_140 = uRam00000001419e3f58;
    uStack_13c = uRam00000001419e3f5c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_68 = &local_f8;
    local_148 = CONCAT44(uRam0000000141dcfffc,_DAT_141dcfff8);
    uStack_140 = uRam0000000141dd0000;
    uStack_13c = DAT_141dd0004;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_60 = local_e8;
    FUN_14008e020(param_1,param_2,&local_138,5,&local_80);
  }
  local_b8 = 0x14;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar3 = FUN_140e851f0(puVar5,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar3 != -2 && iVar3 < 0) {
    local_b8 = 0x14;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_90 = _DAT_141dcffe8;
    uStack_8c = uRam0000000141dcffec;
    uStack_88 = uRam0000000141dcfff0;
    uStack_84 = DAT_141dcfff4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_90);
    local_80 = &local_128;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1403172a5:
      local_90 = *(undefined4 *)puVar5;
      uStack_8c = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_88 = *(undefined4 *)(puVar5 + 1);
      uStack_84 = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_90);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_118) goto LAB_1403172a5;
    }
    local_78 = &local_118;
    local_90 = _DAT_141dd0008;
    uStack_8c = uRam0000000141dd000c;
    uStack_88 = uRam0000000141dd0010;
    uStack_84 = DAT_141dd0014;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_90);
    local_70 = local_108;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_80);
  }
  local_b8 = 0x11;
  plVar7 = (longlong *)(**(code **)(*DAT_141dde118 + 8))(DAT_141dde118,DAT_141a026b8);
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 == &local_b0) goto LAB_14031739d;
  }
  local_90 = *(undefined4 *)puVar5;
  uStack_8c = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_88 = *(undefined4 *)(puVar5 + 1);
  uStack_84 = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_90);
LAB_14031739d:
  if (1 < (int)local_48[0]) {
    puVar8 = (undefined8 *)local_40[1];
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
  FUN_140e87930(plVar7,DAT_141a00db8,0x80000000,&local_b0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
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


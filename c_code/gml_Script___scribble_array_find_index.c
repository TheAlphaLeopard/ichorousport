// gml_Script___scribble_array_find_index @ 0x1401f0810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong *
gml_Script___scribble_array_find_index
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined1 **ppuVar12;
  undefined4 uVar13;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  ulonglong local_c8;
  byte local_bc;
  ulonglong local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  ulonglong *local_68;
  ulonglong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_e0 = "gml_Script___scribble_process_colour";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x52;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_10c = 0;
  local_118 = 0;
  local_fc = 0;
  local_108 = 0;
  bVar9 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddda84) &&
     (_Init_thread_header(&DAT_141ddda84), DAT_141ddda84 == -1)) {
    DAT_141ddda68 = (longlong *)FUN_140e63aa0(DAT_141a0a058);
    _Init_thread_footer(&DAT_141ddda84);
  }
  if (DAT_141ddc09d == '\0') {
    FUN_140e64380(DAT_141ddda68,"gml_Script___scribble_process_colour");
    FUN_140e64380(param_1,"gml_Script___scribble_process_colour");
  }
  local_d8 = 0x54;
  if (DAT_141ddc09d == '\0') {
    DAT_141ddc09d = '\x01';
    puVar3 = (undefined4 *)(**(code **)(*DAT_141ddda68 + 0x10))(DAT_141ddda68,DAT_141a05548);
    FUN_140e609c0(DAT_141ddda68);
    uVar10 = 0;
    puVar4 = (undefined4 *)gml_GlobalScript___scribble_constants(param_1,param_2,&local_118,0,0);
    if (puVar4 != puVar3) {
      local_128 = *puVar4;
      uStack_124 = puVar4[1];
      uStack_120 = puVar4[2];
      uStack_11c = puVar4[3];
      if ((1 << ((byte)puVar3[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_128);
    }
    FUN_140e60910(1);
  }
  local_d8 = 0x56;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_1401f0a26:
    local_128 = (undefined4)*puVar6;
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_120 = (undefined4)puVar6[1];
    uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  else {
    puVar6 = (ulonglong *)*param_5;
    if (puVar6 != &local_c8) goto LAB_1401f0a26;
  }
  local_68 = &local_c8;
  uVar11 = CONCAT44(uVar10,DAT_1419fdbf8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_118,1,uVar11,&local_68);
  uVar10 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_d8 = 0x61;
    if (0 < param_4) {
      puVar8 = (ulonglong *)*param_5;
    }
    if (puVar8 != param_3) {
      local_128 = (undefined4)*puVar8;
      uStack_124 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_120 = (undefined4)puVar8[1];
      uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_128);
    }
    goto LAB_1401f0df5;
  }
  local_d8 = 0x58;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar6 = (ulonglong *)(**(code **)(*DAT_141ddda68 + 8))(DAT_141ddda68,DAT_141a05548);
  if (puVar6 != &local_b8) {
    local_128 = (undefined4)*puVar6;
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_120 = (undefined4)puVar6[1];
    uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
  }
  local_60 = &local_b8;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1401f0b31:
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_a8) goto LAB_1401f0b31;
  }
  local_58 = &local_a8;
  uVar11 = CONCAT44(uVar10,DAT_1419fcba8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar11,&local_60);
  uVar13 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  uVar10 = 0;
  if (cVar1 == '\0') {
    local_d8 = 0x5a;
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    local_128 = _DAT_141dcd758;
    uStack_124 = uRam0000000141dcd75c;
    uStack_120 = uRam0000000141dcd760;
    uStack_11c = DAT_141dcd764;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_128);
    local_50 = local_98;
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_1401f0c0a:
      local_128 = *(undefined4 *)puVar7;
      uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_120 = *(undefined4 *)(puVar7 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_128);
    }
    else {
      puVar7 = (undefined8 *)*param_5;
      if (puVar7 != &local_88) goto LAB_1401f0c0a;
    }
    local_48 = &local_88;
    local_128 = _DAT_141dcd798;
    uStack_124 = uRam0000000141dcd79c;
    uStack_120 = uRam0000000141dcd7a0;
    uStack_11c = DAT_141dcd7a4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_128);
    local_40 = local_78;
    ppuVar12 = &local_50;
    FUN_1401ef7f0(param_1,param_2,&local_f8,3,ppuVar12);
    uVar13 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
    uVar10 = local_ec;
  }
  bVar9 = (byte)uVar10;
  local_d8 = 0x5d;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (puVar6 != &local_c8) {
    local_128 = (undefined4)*puVar6;
    uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_120 = (undefined4)puVar6[1];
    uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_128);
  }
  local_68 = &local_c8;
  if ((param_4 < 1) || (puVar8 = (ulonglong *)*param_5, puVar8 != &local_b8)) {
    local_128 = (undefined4)*puVar8;
    uStack_124 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_120 = (undefined4)puVar8[1];
    uStack_11c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
  }
  local_60 = &local_b8;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_118,2,CONCAT44(uVar13,DAT_141a01138),&local_68);
  uVar2 = FUN_140e4a8b0(uVar5);
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 10;
  *param_3 = (ulonglong)(uVar2 & 0xffffff);
LAB_1401f0df5:
  if ((1 << (bVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


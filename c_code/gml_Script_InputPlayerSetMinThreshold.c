// gml_Script_InputPlayerSetMinThreshold @ 0x140351fe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerSetMinThreshold
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar17;
  undefined1 **ppuVar15;
  undefined8 **ppuVar16;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined4 local_d8 [3];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_InputPlayerSetMetadata";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xb;
  FUN_140041df0(local_48,param_4,3,param_5);
  uVar13 = 1;
  _eh_vector_constructor_iterator_(&local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_11c = 0;
  local_128 = 0;
  local_74 = 0;
  local_80 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde59c) &&
     (_Init_thread_header(&DAT_141dde59c), DAT_141dde59c == -1)) {
    DAT_141dde5a0 = (longlong *)FUN_140e63aa0(DAT_1419f2d68);
    _Init_thread_footer(&DAT_141dde59c);
  }
  local_a8 = 0xb;
  puVar12 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_a8 = 0xb;
    if ((int)local_48[0] < 2) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_40[1];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
    *puVar10 = 0;
  }
  if ((int)local_48[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[2];
  }
  iVar3 = FUN_140e851f0(puVar10,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_10c = 0xd;
    local_118 = 0;
    if ((int)local_48[0] < 3) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)local_40[2];
      if (&local_118 == puVar10) goto LAB_1403521f3;
    }
    local_138 = 0;
    uStack_134 = 0;
    uStack_130 = uStack_110;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_138);
  }
LAB_1403521f3:
  if (DAT_141ddc11c == '\0') {
    FUN_140e64380(DAT_141dde5a0,"gml_Script_InputPlayerSetMetadata");
    FUN_140e64380(param_1,"gml_Script_InputPlayerSetMetadata");
  }
  local_a8 = 0xd;
  if (DAT_141ddc11c == '\0') {
    DAT_141ddc11c = '\x01';
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar5 = (undefined4 *)(**(code **)(*DAT_141dde5a0 + 0x10))(DAT_141dde5a0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde5a0);
    uVar13 = 0;
    puVar6 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_128,0,0);
    if (puVar6 != puVar5) {
      local_138 = *puVar6;
      uStack_134 = puVar6[1];
      uStack_130 = puVar6[2];
      uStack_12c = puVar6[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
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
    puVar10 = &DAT_1419df7b0;
LAB_140352333:
    local_138 = *(undefined4 *)puVar10;
    uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_130 = *(undefined4 *)(puVar10 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  else {
    puVar10 = (undefined8 *)local_40[1];
    if (puVar10 != &local_108) goto LAB_140352333;
  }
  local_70 = &local_108;
  uVar14 = CONCAT44(uVar13,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar14,&local_70);
  uVar17 = (undefined4)((ulonglong)uVar14 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  uVar13 = 0;
  if (cVar2 == '\0') {
    local_a8 = 7;
    local_80 = 0;
    local_78 = 0;
    local_74 = 5;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((int)local_48[0] < 2) {
      puVar10 = &DAT_1419df7b0;
LAB_1403523fd:
      local_138 = *(undefined4 *)puVar10;
      uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_130 = *(undefined4 *)(puVar10 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    else {
      puVar10 = (undefined8 *)local_40[1];
      if (puVar10 != &local_f8) goto LAB_1403523fd;
    }
    local_68 = &local_f8;
    local_138 = _DAT_141dd1068;
    uStack_134 = uRam0000000141dd106c;
    uStack_130 = uRam0000000141dd1070;
    uStack_12c = DAT_141dd1074;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_60 = local_e8;
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_a0,1,CONCAT44(uVar17,DAT_1419fdc58),&local_68);
    if (puVar5 != local_d8) {
      local_138 = *puVar5;
      uStack_134 = puVar5[1];
      uStack_130 = puVar5[2];
      uStack_12c = puVar5[3];
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_138);
    }
    local_58 = local_d8;
    local_138 = _DAT_141dd1038;
    uStack_134 = uRam0000000141dd103c;
    uStack_130 = uRam0000000141dd1040;
    uStack_12c = DAT_141dd1044;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_50 = local_c8;
    ppuVar15 = &local_60;
    FUN_14008e020(param_1,param_2,&local_80,3,ppuVar15);
    uVar17 = (undefined4)((ulonglong)ppuVar15 >> 0x20);
    uVar13 = local_74;
  }
  local_a8 = 0xd;
  if ((int)local_48[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[1];
  }
  uStack_10c = 0;
  local_118 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar10,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar4 < 0x80000000) {
    local_a8 = 0x11;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = _DAT_141dd1048;
    uStack_134 = uRam0000000141dd104c;
    uStack_130 = uRam0000000141dd1050;
    uStack_12c = DAT_141dd1054;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_70 = &local_108;
    if ((int)local_48[0] < 2) {
      puVar10 = &DAT_1419df7b0;
LAB_140352639:
      local_138 = *(undefined4 *)puVar10;
      uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_130 = *(undefined4 *)(puVar10 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    else {
      puVar10 = (undefined8 *)local_40[1];
      if (puVar10 != &local_f8) goto LAB_140352639;
    }
    local_68 = &local_f8;
    local_138 = _DAT_141dd1028;
    uStack_134 = uRam0000000141dd102c;
    uStack_130 = uRam0000000141dd1030;
    uStack_12c = DAT_141dd1034;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_60 = local_e8;
    local_138 = _DAT_1419e4300;
    uStack_134 = uRam00000001419e4304;
    uStack_130 = uRam00000001419e4308;
    uStack_12c = uRam00000001419e430c;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_58 = local_d8;
    local_138 = _DAT_141dd1078;
    uStack_134 = uRam0000000141dd107c;
    uStack_130 = uRam0000000141dd1080;
    uStack_12c = DAT_141dd1084;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_138);
    local_50 = local_c8;
    ppuVar16 = &local_70;
    FUN_14008e020(param_1,param_2,&local_128,5,ppuVar16);
    uVar17 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
  }
  local_a8 = 0x15;
  if ((int)local_48[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[1];
  }
  uStack_10c = 0;
  local_118 = 0;
  iVar3 = FUN_140e851f0(puVar10,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (!(iVar3 == -2 || -1 < iVar3)) {
    local_a8 = 0x15;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = _DAT_141dd1048;
    uStack_134 = uRam0000000141dd104c;
    uStack_130 = uRam0000000141dd1050;
    uStack_12c = DAT_141dd1054;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
    local_70 = &local_108;
    if ((int)local_48[0] < 2) {
      puVar10 = &DAT_1419df7b0;
LAB_140352841:
      local_138 = *(undefined4 *)puVar10;
      uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_130 = *(undefined4 *)(puVar10 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    else {
      puVar10 = (undefined8 *)local_40[1];
      if (puVar10 != &local_f8) goto LAB_140352841;
    }
    local_68 = &local_f8;
    local_138 = _DAT_141dd1058;
    uStack_134 = uRam0000000141dd105c;
    uStack_130 = uRam0000000141dd1060;
    uStack_12c = DAT_141dd1064;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_138);
    local_60 = local_e8;
    ppuVar16 = &local_70;
    FUN_14008e020(param_1,param_2,&local_128,3,ppuVar16);
    uVar17 = (undefined4)((ulonglong)ppuVar16 >> 0x20);
  }
  local_a8 = 0x11;
  if ((int)local_48[0] < 3) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_40[2];
  }
  cVar2 = FUN_140e491e0(puVar10);
  if (cVar2 != '\0') {
    local_a8 = 0x11;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    if ((int)local_48[0] < 1) {
      puVar10 = &DAT_1419df7b0;
LAB_140352948:
      local_138 = *(undefined4 *)puVar10;
      uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_130 = *(undefined4 *)(puVar10 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar10 = (undefined8 *)*local_40;
      if (puVar10 != &local_108) goto LAB_140352948;
    }
    local_70 = &local_108;
    if ((int)local_48[0] < 1) {
      puVar10 = &DAT_1419df7b0;
    }
    else {
      puVar10 = (undefined8 *)*local_40;
    }
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar17,DAT_1419fd0c8),&local_70);
    if (puVar8 != puVar10) {
      local_138 = *(undefined4 *)puVar8;
      uStack_134 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_130 = *(undefined4 *)(puVar8 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_138);
    }
  }
  local_a8 = 0x12;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde5a0 + 8))(DAT_141dde5a0,DAT_141a026b8);
  if ((int)local_48[0] < 1) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)*local_40;
    if (puVar10 == &local_90) goto LAB_140352a4e;
  }
  local_138 = *(undefined4 *)puVar10;
  uStack_134 = *(undefined4 *)((longlong)puVar10 + 4);
  uStack_130 = *(undefined4 *)(puVar10 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar10 + 0xc);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_138);
LAB_140352a4e:
  if (1 < (int)local_48[0]) {
    puVar12 = (undefined8 *)local_40[1];
  }
  iVar3 = FUN_140e4a740(puVar12);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  FUN_140e87930(plVar9,DAT_1419fd098,0x80000000,&local_90);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar12 = local_40;
    do {
      puVar10 = (undefined8 *)*puVar12;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      *puVar10 = 0;
      *(undefined4 *)(puVar10 + 1) = 0;
      *(undefined4 *)((longlong)puVar10 + 0xc) = 5;
      puVar12 = puVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


// gml_Script_InputPlayerUsingGeneric @ 0x1403545c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlayerUsingGeneric
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
  undefined4 uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined4 local_f8 [3];
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
  undefined4 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_c0 = "gml_Script_InputPlayerUsingGamepad";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 10;
  FUN_140041df0(local_68,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_14c = 0;
  local_158 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde5d0) &&
     (_Init_thread_header(&DAT_141dde5d0), DAT_141dde5d0 == -1)) {
    DAT_141dde5c8 = (longlong *)FUN_140e63aa0(DAT_1419f2de8);
    _Init_thread_footer(&DAT_141dde5d0);
  }
  local_b8 = 10;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_b8 = 10;
    if ((int)local_68[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_68[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_60[1];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    uStack_12c = 0xd;
    local_138 = 0x3ff0000000000000;
    if ((int)local_68[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_60[1];
      if (&local_138 == puVar8) goto LAB_1403547df;
    }
    local_148 = 0;
    uStack_144 = 0x3ff00000;
    uStack_140 = uStack_130;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_148);
  }
LAB_1403547df:
  if (DAT_141ddc11f == '\0') {
    FUN_140e64380(DAT_141dde5c8,"gml_Script_InputPlayerUsingGamepad");
    FUN_140e64380(param_1,"gml_Script_InputPlayerUsingGamepad");
  }
  local_b8 = 0xc;
  if (DAT_141ddc11f == '\0') {
    DAT_141ddc11f = '\x01';
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar5 = (undefined4 *)(**(code **)(*DAT_141dde5c8 + 0x10))(DAT_141dde5c8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde5c8);
    uVar12 = 0;
    puVar6 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_158,0,0);
    if (puVar6 != puVar5) {
      local_148 = *puVar6;
      uStack_144 = puVar6[1];
      uStack_140 = puVar6[2];
      uStack_13c = puVar6[3];
      if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 4;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_14035491e:
    local_148 = *(undefined4 *)puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
  }
  else {
    puVar8 = (undefined8 *)*local_60;
    if (puVar8 != &local_128) goto LAB_14035491e;
  }
  local_a0 = &local_128;
  ppuVar14 = &local_a0;
  ppuVar13 = (undefined8 **)CONCAT44(uVar12,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_158,1,ppuVar13,ppuVar14);
  cVar2 = FUN_140e491e0(uVar7);
  uVar12 = 0;
  if (cVar2 == '\0') {
    local_b8 = 5;
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uVar12 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if ((int)local_68[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_1403549e7:
      local_148 = *(undefined4 *)puVar8;
      uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_60;
      if (puVar8 != &local_118) goto LAB_1403549e7;
    }
    local_98 = &local_118;
    local_148 = _DAT_141dd1108;
    uStack_144 = uRam0000000141dd110c;
    uStack_140 = uRam0000000141dd1110;
    uStack_13c = DAT_141dd1114;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_90 = &local_108;
    ppuVar14 = &local_98;
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar14);
    if (puVar5 != local_f8) {
      local_148 = *puVar5;
      uStack_144 = puVar5[1];
      uStack_140 = puVar5[2];
      uStack_13c = puVar5[3];
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_148);
    }
    local_88 = local_f8;
    local_148 = _DAT_141dd10f8;
    uStack_144 = uRam0000000141dd10fc;
    uStack_140 = uRam0000000141dd1100;
    uStack_13c = DAT_141dd1104;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    ppuVar13 = &local_90;
    FUN_14008e020(param_1,param_2,&local_b0,3,ppuVar13);
    uVar12 = local_a4;
  }
  local_b8 = 0xc;
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar4 < 0x80000000) {
    local_b8 = 0x10;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = _DAT_141dd1118;
    uStack_144 = uRam0000000141dd111c;
    uStack_140 = uRam0000000141dd1120;
    uStack_13c = DAT_141dd1124;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_148);
    local_a0 = &local_128;
    if ((int)local_68[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_140354c19:
      local_148 = *(undefined4 *)puVar8;
      uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_60;
      if (puVar8 != &local_118) goto LAB_140354c19;
    }
    local_98 = &local_118;
    local_148 = _DAT_141dd10e8;
    uStack_144 = uRam0000000141dd10ec;
    uStack_140 = uRam0000000141dd10f0;
    uStack_13c = DAT_141dd10f4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
    local_90 = &local_108;
    local_148 = _DAT_1419e4350;
    uStack_144 = uRam00000001419e4354;
    uStack_140 = uRam00000001419e4358;
    uStack_13c = uRam00000001419e435c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_88 = local_f8;
    local_148 = _DAT_141dd1128;
    uStack_144 = uRam0000000141dd112c;
    uStack_140 = uRam0000000141dd1130;
    uStack_13c = DAT_141dd1134;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_80 = local_e8;
    ppuVar13 = &local_a0;
    FUN_14008e020(param_1,param_2,&local_158,5,ppuVar13);
  }
  local_b8 = 0x18;
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_60;
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar3 = FUN_140e851f0(puVar8,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_140354eba;
  local_b8 = 0x18;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_148 = _DAT_141dd1118;
  uStack_144 = uRam0000000141dd111c;
  uStack_140 = uRam0000000141dd1120;
  uStack_13c = DAT_141dd1124;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_a0 = &local_128;
  if ((int)local_68[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_140354e1f:
    local_148 = *(undefined4 *)puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar8 = (undefined8 *)*local_60;
    if (puVar8 != &local_118) goto LAB_140354e1f;
  }
  local_98 = &local_118;
  local_148 = _DAT_141dd1138;
  uStack_144 = uRam0000000141dd113c;
  uStack_140 = uRam0000000141dd1140;
  uStack_13c = DAT_141dd1144;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_148);
  local_90 = &local_108;
  ppuVar13 = &local_a0;
  FUN_14008e020(param_1,param_2,&local_158,3,ppuVar13);
LAB_140354eba:
  local_b8 = 0x15;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde5c8 + 8))(DAT_141dde5c8,DAT_141a026b8);
  if (0 < (int)local_68[0]) {
    puVar10 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e4a740(puVar10);
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
  FUN_140e87440(plVar9,DAT_1419fd5c8,0x80000000,&local_78,(ulonglong)ppuVar13 & 0xffffffffffffff00,
                (ulonglong)ppuVar14 & 0xffffffffffffff00);
  local_148 = (undefined4)local_78;
  uStack_144 = local_78._4_4_;
  uStack_140 = uStack_70;
  uStack_13c = uStack_6c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_148);
  local_a0 = &local_128;
  puVar10 = (undefined8 *)gml_Script_InputDeviceSetRebinding(param_1,param_2,&local_158,1,&local_a0)
  ;
  if (puVar10 != param_3) {
    local_148 = *(undefined4 *)puVar10;
    uStack_144 = *(undefined4 *)((longlong)puVar10 + 4);
    uStack_140 = *(undefined4 *)(puVar10 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar10 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_148);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,5,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar10 = local_60;
    do {
      puVar8 = (undefined8 *)*puVar10;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar10 = puVar10 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


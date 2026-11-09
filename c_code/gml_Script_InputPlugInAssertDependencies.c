// gml_Script_InputPlugInAssertDependencies @ 0x140356ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputPlugInAssertDependencies
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
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
  uint uVar13;
  undefined8 **ppuVar14;
  undefined8 **ppuVar15;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined4 local_e8 [3];
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
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_b0 = "gml_Script_InputPlayerUsingTouch";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 10;
  FUN_140041df0(local_58,param_4,2,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0;
  local_138 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde5f8) &&
     (_Init_thread_header(&DAT_141dde5f8), DAT_141dde5f8 == -1)) {
    DAT_141dde5f0 = (longlong *)FUN_140e63aa0(DAT_1419f2f68);
    _Init_thread_footer(&DAT_141dde5f8);
  }
  local_a8 = 10;
  puVar10 = &DAT_1419df7b0;
  uVar11 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_a8 = 10;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)*local_50;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if ((int)local_58[0] < 2) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_50[1];
  }
  iVar3 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  uVar13 = 0x3ff00000;
  if (iVar3 == 0) {
    uStack_11c = 0xd;
    local_128 = 0x3ff0000000000000;
    if ((int)local_58[0] < 2) {
      puVar8 = &DAT_1419df7b0;
    }
    else {
      puVar8 = (undefined8 *)local_50[1];
      if (&local_128 == puVar8) goto LAB_140356ce0;
    }
    local_148 = 0;
    uStack_144 = 0x3ff00000;
    uStack_140 = uStack_120;
    uStack_13c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_148);
  }
LAB_140356ce0:
  if (DAT_141ddc122 == '\0') {
    FUN_140e64380(DAT_141dde5f0,"gml_Script_InputPlayerUsingTouch");
    FUN_140e64380(param_1,"gml_Script_InputPlayerUsingTouch");
  }
  local_a8 = 0xc;
  if (DAT_141ddc122 == '\0') {
    DAT_141ddc122 = '\x01';
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    puVar5 = (undefined4 *)(**(code **)(*DAT_141dde5f0 + 0x10))(DAT_141dde5f0,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde5f0);
    uVar12 = 0;
    puVar6 = (undefined4 *)gml_Script___InputTrace(param_1,param_2,&local_138,0,0);
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
  local_a8 = 4;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_140356e1f:
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
    puVar8 = (undefined8 *)*local_50;
    if (puVar8 != &local_118) goto LAB_140356e1f;
  }
  local_90 = &local_118;
  ppuVar15 = &local_90;
  ppuVar14 = (undefined8 **)CONCAT44(uVar12,DAT_141a014a8);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_138,1,ppuVar14,ppuVar15);
  cVar2 = FUN_140e491e0(uVar7);
  uVar12 = 0;
  if (cVar2 == '\0') {
    local_a8 = 5;
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    uVar12 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_140356ee8:
      local_148 = *(undefined4 *)puVar8;
      uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_50;
      if (puVar8 != &local_108) goto LAB_140356ee8;
    }
    local_88 = &local_108;
    local_148 = _DAT_141dd1248;
    uStack_144 = uRam0000000141dd124c;
    uStack_140 = uRam0000000141dd1250;
    uStack_13c = DAT_141dd1254;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_80 = &local_f8;
    ppuVar15 = &local_88;
    puVar5 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar15);
    if (puVar5 != local_e8) {
      local_148 = *puVar5;
      uStack_144 = puVar5[1];
      uStack_140 = puVar5[2];
      uStack_13c = puVar5[3];
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_148);
    }
    local_78 = local_e8;
    local_148 = _DAT_141dd1238;
    uStack_144 = uRam0000000141dd123c;
    uStack_140 = uRam0000000141dd1240;
    uStack_13c = DAT_141dd1244;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    ppuVar14 = &local_80;
    FUN_14008e020(param_1,param_2,&local_a0,3,ppuVar14);
    uVar12 = local_94;
  }
  local_a8 = 0xb;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
  }
  uStack_11c = 0;
  local_128 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar8,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (uVar4 < 0x80000000) {
    local_a8 = 0x10;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    local_148 = _DAT_141dd1208;
    uStack_144 = uRam0000000141dd120c;
    uStack_140 = uRam0000000141dd1210;
    uStack_13c = DAT_141dd1214;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_90 = &local_118;
    if ((int)local_58[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_14035711a:
      local_148 = *(undefined4 *)puVar8;
      uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_50;
      if (puVar8 != &local_108) goto LAB_14035711a;
    }
    local_88 = &local_108;
    local_148 = _DAT_141dd1228;
    uStack_144 = uRam0000000141dd122c;
    uStack_140 = uRam0000000141dd1230;
    uStack_13c = DAT_141dd1234;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_148);
    local_80 = &local_f8;
    local_148 = _DAT_1419e4380;
    uStack_144 = uRam00000001419e4384;
    uStack_140 = uRam00000001419e4388;
    uStack_13c = uRam00000001419e438c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_78 = local_e8;
    local_148 = _DAT_141dd1258;
    uStack_144 = uRam0000000141dd125c;
    uStack_140 = uRam0000000141dd1260;
    uStack_13c = DAT_141dd1264;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    ppuVar14 = &local_90;
    FUN_14008e020(param_1,param_2,&local_138,5,ppuVar14);
  }
  local_a8 = 0x18;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_50;
  }
  uStack_11c = 0;
  local_128 = 0;
  iVar3 = FUN_140e851f0(puVar8,&local_128,DAT_141955260,1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_1403573bd;
  local_a8 = 0x18;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_148 = _DAT_141dd1208;
  uStack_144 = uRam0000000141dd120c;
  uStack_140 = uRam0000000141dd1210;
  uStack_13c = DAT_141dd1214;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_148);
  local_90 = &local_118;
  if ((int)local_58[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_140357326:
    local_148 = *(undefined4 *)puVar8;
    uStack_144 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_148);
  }
  else {
    puVar8 = (undefined8 *)*local_50;
    if (puVar8 != &local_108) goto LAB_140357326;
  }
  local_88 = &local_108;
  local_148 = _DAT_141dd1218;
  uStack_144 = uRam0000000141dd121c;
  uStack_140 = uRam0000000141dd1220;
  uStack_13c = DAT_141dd1224;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_148);
  local_80 = &local_f8;
  ppuVar14 = &local_90;
  FUN_14008e020(param_1,param_2,&local_138,3,ppuVar14);
LAB_1403573bd:
  local_a8 = 0x15;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde5f0 + 8))(DAT_141dde5f0,DAT_141a026b8);
  if (0 < (int)local_58[0]) {
    puVar10 = (undefined8 *)*local_50;
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
  FUN_140e87440(plVar9,DAT_1419fd5c8,0x80000000,&local_68,(ulonglong)ppuVar14 & 0xffffffffffffff00,
                (ulonglong)ppuVar15 & 0xffffffffffffff00);
  uStack_11c = 0;
  local_128 = 0xc069000000000000;
  iVar3 = FUN_140e851f0(&local_68,&local_128,DAT_141955260,0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (iVar3 != 0) {
    uVar13 = 0;
  }
  *param_3 = (ulonglong)uVar13 << 0x20;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar10 = local_50;
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
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


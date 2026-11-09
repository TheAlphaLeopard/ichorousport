// gml_Script_InputPlugInWarning @ 0x140360d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputPlugInWarning
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 **ppuVar13;
  ulonglong uVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  uint local_88 [2];
  undefined8 *local_80;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_180 = "gml_Script_InputPlugInVerbStateSet";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0xc;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_88,param_4,6,param_5);
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_148,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_164 = 0;
  local_170 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde6b4) &&
     (_Init_thread_header(&DAT_141dde6b4), DAT_141dde6b4 == -1)) {
    DAT_141dde6b8 = (longlong *)FUN_140e63aa0(DAT_1419f3558);
    _Init_thread_footer(&DAT_141dde6b4);
  }
  local_178 = 0xc;
  puVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[1];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (local_178 = 0xc, 1 < (int)local_88[0])) &&
     (puVar6 = (undefined8 *)local_80[1], puVar6 != &DAT_1419df7b0)) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  if ((int)local_88[0] < 3) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[2];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (2 < (int)local_88[0])) &&
     (puVar6 = (undefined8 *)local_80[2], puVar6 != &DAT_1419df7b0)) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  if ((int)local_88[0] < 4) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[3];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (3 < (int)local_88[0])) &&
     (puVar6 = (undefined8 *)local_80[3], puVar6 != &DAT_1419df7b0)) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  if ((int)local_88[0] < 5) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[4];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar3 == 0) && (4 < (int)local_88[0])) &&
     (puVar6 = (undefined8 *)local_80[4], puVar6 != &DAT_1419df7b0)) {
    local_1a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_1a0 = DAT_1419df7b8;
    uStack_19c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_1a8);
  }
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    if ((int)local_88[0] < 6) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)local_80[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
  }
  if (DAT_141ddc130 == '\0') {
    FUN_140e64380(DAT_141dde6b8,"gml_Script_InputPlugInVerbStateSet");
    FUN_140e64380(local_res8,"gml_Script_InputPlugInVerbStateSet");
  }
  local_178 = 0xe;
  if (DAT_141ddc130 == '\0') {
    DAT_141ddc130 = '\x01';
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde6b8 + 0x10))(DAT_141dde6b8,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde6b8);
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (local_res8,local_res10,&local_198,0,0);
    if (puVar7 != puVar6) {
      local_1a8 = *puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde6b8 + 0x10))(DAT_141dde6b8,DAT_141a026b8);
    FUN_140e609c0(DAT_141dde6b8);
    uVar5 = 0;
    puVar7 = (undefined8 *)gml_Script___InputTrace(local_res8,local_res10,&local_170,0,0);
    if (puVar7 != puVar6) {
      local_1a8 = *puVar7;
      uStack_1a0 = *(undefined4 *)(puVar7 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_178 = 6;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
LAB_140361236:
    local_1a8 = *puVar6;
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
    if (puVar6 != &local_148) goto LAB_140361236;
  }
  local_b8 = &local_148;
  ppuVar15 = &local_b8;
  ppuVar13 = (undefined8 **)CONCAT44(uVar5,DAT_141a014a8);
  uVar8 = FUN_140e634e0(local_res8,local_res10,&local_198,1,ppuVar13,ppuVar15);
  cVar2 = FUN_140e491e0(uVar8);
  if (cVar2 == '\0') {
    local_178 = 0xb;
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    uVar5 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
    local_170 = 0;
    local_168 = 0;
    local_164 = 5;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    if ((int)local_88[0] < 6) {
      puVar6 = &DAT_1419df7b0;
LAB_140361324:
      local_1a8 = *puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1a8);
    }
    else {
      puVar6 = (undefined8 *)local_80[5];
      if (puVar6 != &local_138) goto LAB_140361324;
    }
    local_b0 = &local_138;
    local_1a8 = CONCAT44(uRam0000000141dd14fc,_DAT_141dd14f8);
    uStack_1a0 = uRam0000000141dd1500;
    uStack_19c = DAT_141dd1504;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
    local_a8 = &local_128;
    ppuVar15 = &local_b0;
    puVar6 = (undefined8 *)
             FUN_140e634e0(local_res8,local_res10,&local_e8,1,CONCAT44(uVar5,DAT_1419fdc58),ppuVar15
                          );
    if (puVar6 != &local_118) {
      local_1a8 = *puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1a8);
    }
    local_a0 = &local_118;
    local_1a8 = CONCAT44(uRam0000000141dd152c,_DAT_141dd1528);
    uStack_1a0 = uRam0000000141dd1530;
    uStack_19c = DAT_141dd1534;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1a8);
    local_98 = local_108;
    ppuVar13 = &local_a8;
    FUN_14008e020(local_res8,local_res10,&local_170,3,ppuVar13);
  }
  local_178 = 0xe;
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  uStack_19c = 0;
  local_1a8 = 0x3ff0000000000000;
  uVar4 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (uVar4 < 0x80000000) {
    local_178 = 0x11;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_1a8 = CONCAT44(uRam0000000141dd151c,_DAT_141dd1518);
    uStack_1a0 = uRam0000000141dd1520;
    uStack_19c = DAT_141dd1524;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
    local_b8 = &local_148;
    if ((int)local_88[0] < 6) {
      puVar6 = &DAT_1419df7b0;
LAB_140361569:
      local_1a8 = *puVar6;
      uStack_1a0 = *(undefined4 *)(puVar6 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1a8);
    }
    else {
      puVar6 = (undefined8 *)local_80[5];
      if (puVar6 != &local_138) goto LAB_140361569;
    }
    local_b0 = &local_138;
    local_1a8 = CONCAT44(uRam0000000141dd154c,_DAT_141dd1548);
    uStack_1a0 = uRam0000000141dd1550;
    uStack_19c = DAT_141dd1554;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
    local_a8 = &local_128;
    local_1a8 = CONCAT44(uRam00000001419e4414,_DAT_1419e4410);
    uStack_1a0 = uRam00000001419e4418;
    uStack_19c = uRam00000001419e441c;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
    local_a0 = &local_118;
    local_1a8 = CONCAT44(uRam0000000141dd153c,_DAT_141dd1538);
    uStack_1a0 = uRam0000000141dd1540;
    uStack_19c = DAT_141dd1544;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1a8);
    local_98 = local_108;
    ppuVar13 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_198,5,ppuVar13);
  }
  local_178 = 0x15;
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  uStack_19c = 0;
  local_1a8 = 0;
  iVar3 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 == -2 || -1 < iVar3) goto LAB_14036180c;
  local_178 = 0x1a;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  local_160 = _DAT_141dd1518;
  uStack_15c = uRam0000000141dd151c;
  uStack_158 = uRam0000000141dd1520;
  uStack_154 = DAT_141dd1524;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_160);
  local_b8 = &local_148;
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
LAB_140361771:
    local_160 = *(undefined4 *)puVar6;
    uStack_15c = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_158 = *(undefined4 *)(puVar6 + 1);
    uStack_154 = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_160);
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
    if (puVar6 != &local_138) goto LAB_140361771;
  }
  local_b0 = &local_138;
  local_160 = _DAT_141dd1558;
  uStack_15c = uRam0000000141dd155c;
  uStack_158 = uRam0000000141dd1560;
  uStack_154 = DAT_141dd1564;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_160);
  local_a8 = &local_128;
  ppuVar13 = &local_b8;
  FUN_14008e020(local_res8,local_res10,&local_198,3,ppuVar13);
LAB_14036180c:
  local_178 = 0x13;
  uVar8 = (**(code **)(*DAT_141dde6b8 + 8))(DAT_141dde6b8,DAT_1419fcb48);
  uVar16 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
  ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
  FUN_140e87440(uVar8,DAT_141a024e8,0x80000000,&local_c8,ppuVar13,uVar16);
  uStack_19c = 10;
  local_1a8 = 6;
  iVar3 = FUN_140e851f0(&local_c8,&local_1a8,DAT_141955260,0);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if (iVar3 != 0) {
    local_178 = 0x15;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    local_160 = _DAT_141dd1508;
    uStack_15c = uRam0000000141dd150c;
    uStack_158 = uRam0000000141dd1510;
    uStack_154 = DAT_141dd1514;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_160);
    local_b8 = &local_148;
    ppuVar13 = &local_b8;
    FUN_14008e020(local_res8,local_res10,&local_198,1,ppuVar13);
  }
  local_178 = 0x18;
  plVar9 = (longlong *)(**(code **)(*DAT_141dde6b8 + 8))(DAT_141dde6b8,DAT_141a026b8);
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  uVar5 = FUN_140e4a740(puVar6);
  if ((int)local_88[0] < 6) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_80[5];
  }
  iVar3 = FUN_140e4a740(puVar6);
  if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar10 = plVar9;
  }
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  FUN_140e87440(plVar10,DAT_1419fd6e8,uVar5,&local_d8,uVar14,uVar16);
  iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_d8);
  if (0 < iVar3) {
    do {
      local_178 = 0x1a;
      if ((int)local_88[0] < 2) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_80[1];
      }
      iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_178 = 0x1a;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fde28);
        FUN_140e609c0(local_res8);
        if ((int)local_88[0] < 2) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[1];
        }
        if (puVar7 != puVar6) {
          local_160 = *(undefined4 *)puVar7;
          uStack_15c = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_158 = *(undefined4 *)(puVar7 + 1);
          uStack_154 = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_160);
        }
        FUN_140e60910(1);
      }
      local_178 = 0x1b;
      if ((int)local_88[0] < 3) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_80[2];
      }
      iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_178 = 0x1b;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd488);
        FUN_140e609c0(local_res8);
        if ((int)local_88[0] < 3) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[2];
        }
        if (puVar7 != puVar6) {
          local_160 = *(undefined4 *)puVar7;
          uStack_15c = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_158 = *(undefined4 *)(puVar7 + 1);
          uStack_154 = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_160);
        }
        FUN_140e60910(1);
      }
      local_178 = 0x1d;
      if ((int)local_88[0] < 4) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_80[3];
      }
      iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_178 = 0x1f;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd6f8);
        FUN_140e609c0(local_res8);
        if ((int)local_88[0] < 4) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[3];
        }
        if (puVar7 != puVar6) {
          local_160 = *(undefined4 *)puVar7;
          uStack_15c = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_158 = *(undefined4 *)(puVar7 + 1);
          uStack_154 = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_160);
        }
        FUN_140e60910(1);
        local_178 = 0x20;
        plVar10 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd828);
        FUN_140e609c0(local_res8);
        if ((int)local_88[0] < 4) {
          puVar6 = &DAT_1419df7b0;
        }
        else {
          puVar6 = (undefined8 *)local_80[3];
        }
        uStack_19c = 0;
        local_1a8 = 0;
        iVar3 = FUN_140e851f0(puVar6,&local_1a8,DAT_141955260,1);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar10);
        }
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0xd;
        if (iVar3 < 1) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0x3ff00000;
        }
        *plVar10 = (ulonglong)uVar4 << 0x20;
        FUN_140e60910(1);
      }
      local_178 = 0x23;
      if ((int)local_88[0] < 5) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)local_80[4];
      }
      iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
      if (iVar3 != 0) {
        local_178 = 0x23;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd758);
        FUN_140e609c0(local_res8);
        if ((int)local_88[0] < 5) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)local_80[4];
        }
        if (puVar7 != puVar6) {
          local_160 = *(undefined4 *)puVar7;
          uStack_15c = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_158 = *(undefined4 *)(puVar7 + 1);
          uStack_154 = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_160);
        }
        FUN_140e60910(1);
      }
      cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_78,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  uVar16 = uVar16 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a024e8,0x80000000,&local_c8,uVar14,uVar16);
  if ((int)local_88[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_80;
  }
  uVar5 = FUN_140e4a740(puVar6);
  if (5 < (int)local_88[0]) {
    puVar11 = (undefined8 *)local_80[5];
  }
  iVar3 = FUN_140e4a740(puVar11);
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
  FUN_140e87440(plVar9,DAT_1419fd6e8,uVar5,&local_d8,uVar14 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,6,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar11 = local_80;
    do {
      puVar6 = (undefined8 *)*puVar11;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar11 = puVar11 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_188;
  return local_res18;
}


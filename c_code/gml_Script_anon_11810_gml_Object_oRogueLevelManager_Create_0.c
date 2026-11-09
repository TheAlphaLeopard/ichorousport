// gml_Script_anon_11810_gml_Object_oRogueLevelManager_Create_0 @ 0x140cc5e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_11810_gml_Object_oRogueLevelManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined8 local_98;
  byte local_8c;
  undefined8 *local_68 [6];
  
  local_110 = "gml_Script_anon@9910@gml_Object_oRogueLevelManager_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x196;
  FUN_140041df0(local_a8,param_4,3,param_5);
  uVar16 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar7 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9c18);
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_f4 = 0;
  local_100 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141de324c) &&
     (_Init_thread_header(&DAT_141de324c), DAT_141de324c == -1)) {
    DAT_141de3150 = FUN_140e63aa0(DAT_1419f9c68);
    _Init_thread_footer(&DAT_141de324c);
  }
  local_108 = 0x196;
  puVar15 = &DAT_1419df7b0;
  uVar14 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_a0[2];
  }
  iVar6 = FUN_140e851f0(puVar8,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar6 == 0) &&
     ((local_108 = 0x196, (int)local_a8[0] < 3 ||
      (puVar15 = (undefined8 *)local_a0[2], puVar15 != &DAT_141ddad18)))) {
    local_148 = CONCAT44(DAT_141ddad18._4_4_,(undefined4)DAT_141ddad18);
    uStack_140 = DAT_141ddad20;
    uStack_13c = DAT_141ddad24;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_148);
  }
  FUN_140e643a0(param_1,DAT_141de3150);
  local_108 = 0x198;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57c50);
  FUN_140e609c0(param_1);
  if ((int)local_a8[0] < 3) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)local_a0[2];
  }
  if (puVar8 != puVar15) {
    local_148 = *puVar8;
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x19a;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 5;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9bd8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_138,gml_Script_anon_9910_gml_Object_oRogueLevelManager_Create_0,0);
  if (&local_138 != puVar7) {
    local_148 = local_138;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_148);
  }
  FUN_140e60910(1);
  if (puVar7 != &local_98) {
    local_148 = *puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_68[0] = &local_98;
  FUN_140e609c0(param_1);
  uVar10 = CONCAT44(uVar16,DAT_1419fd6d8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_100,1,uVar10,local_68);
  if (puVar7 != puVar15) {
    local_148 = *puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x1a2;
  if ((int)local_a8[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_140cc6242:
    local_148 = *puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_148);
  }
  else {
    puVar7 = (undefined8 *)*local_a0;
    if (puVar7 != &local_e0) goto LAB_140cc6242;
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_e0);
  local_108 = 0x1a3;
  if ((int)local_a8[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_a0[1];
    if (puVar7 == &local_f0) goto LAB_140cc62de;
  }
  local_148 = *puVar7;
  uStack_140 = *(undefined4 *)(puVar7 + 1);
  uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_148);
LAB_140cc62de:
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_f0);
  local_108 = 0x1a5;
  uStack_13c = 0xf;
  local_148 = 0x1000001000001aa;
  local_138 = 0x1000001000001aa;
  uStack_130 = uStack_140;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_138);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_128);
  local_108 = 0x1a7;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f98e8);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar7) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_138);
  }
  local_108 = 0x1a8;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0x416fffffe0000000;
  local_108 = 0x1aa;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e88);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1ab;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9e38);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1ac;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9cc8);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1ad;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f26d8);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1ae;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffa38);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1af;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56b30);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1b1;
  puVar9 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0378);
  if (puVar9 != &DAT_141ddad98) {
    local_148 = CONCAT44(uRam0000000141ddad9c,_DAT_141ddad98);
    uStack_140 = uRam0000000141ddada0;
    uStack_13c = DAT_141ddada4;
    if ((1 << ((byte)*(undefined4 *)(puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    FUN_140041b80(puVar9,&local_148);
  }
  local_108 = 0x1b2;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f71b8);
  FUN_140e609c0(param_1);
  if (puVar15 != &DAT_1419df7b0) {
    local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x1b3;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6118);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1b4;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9fa8);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1b5;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffb98);
  uStack_13c = 0xd;
  local_148 = 0;
  if (&local_148 != puVar15) {
    local_138 = 0;
    uStack_130 = uStack_140;
    uStack_12c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_138);
  }
  local_108 = 0x1b6;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9f18);
  FUN_140e609c0(param_1);
  if (puVar15 != &DAT_1419df7b0) {
    local_148 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_140 = DAT_1419df7b8;
    uStack_13c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar15);
    }
    FUN_140041b80(puVar15,&local_148);
  }
  FUN_140e60910(1);
  local_108 = 0x1b8;
  puVar15 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57c50);
  local_c4 = *(undefined4 *)((longlong)puVar15 + 0xc);
  local_c8 = *(undefined4 *)(puVar15 + 1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) == 0) {
    local_d0 = *puVar15;
  }
  else {
    FUN_1400419b0(&local_d0,puVar15);
  }
  bVar3 = false;
  bVar2 = true;
  if ((*(int *)(lVar1 + 0x18) < DAT_141de31b8) &&
     (_Init_thread_header(&DAT_141de31b8), DAT_141de31b8 == -1)) {
    _DAT_141de327c = DAT_141ddad94;
    _DAT_141de3278 = DAT_141ddad90;
    if ((1 << ((byte)DAT_141ddad94 & 0x1f) & 0x46U) == 0) {
      _DAT_141de3270 = DAT_141ddad88;
    }
    else {
      FUN_1400419b0(&DAT_141de3270,&DAT_141ddad88);
    }
    DAT_141de3280 = 0;
    _DAT_141de3290 = DAT_141ddade4;
    _DAT_141de328c = DAT_141ddade0;
    if ((1 << ((byte)DAT_141ddade4 & 0x1f) & 0x46U) == 0) {
      _DAT_141de3284 = DAT_141ddadd8;
    }
    else {
      FUN_1400419b0(&DAT_141de3284,&DAT_141ddadd8);
    }
    _DAT_141de3294 = 1;
    _DAT_141de32a4 = DAT_141ddadd4;
    _DAT_141de32a0 = DAT_141ddadd0;
    if ((1 << ((byte)DAT_141ddadd4 & 0x1f) & 0x46U) == 0) {
      _DAT_141de3298 = DAT_141ddadc8;
    }
    else {
      FUN_1400419b0(&DAT_141de3298,&DAT_141ddadc8);
    }
    _DAT_141de32a8 = 2;
    _DAT_141de32b8 = DAT_141ddae14;
    _DAT_141de32b4 = DAT_141ddae10;
    if ((1 << ((byte)DAT_141ddae14 & 0x1f) & 0x46U) == 0) {
      _DAT_141de32ac = DAT_141ddae08;
    }
    else {
      FUN_1400419b0(&DAT_141de32ac,&DAT_141ddae08);
    }
    _DAT_141de32bc = 3;
    _DAT_141de32cc = DAT_141ddae54;
    _DAT_141de32c8 = DAT_141ddae50;
    if ((1 << ((byte)DAT_141ddae54 & 0x1f) & 0x46U) == 0) {
      _DAT_141de32c0 = DAT_141ddae48;
    }
    else {
      FUN_1400419b0(&DAT_141de32c0,&DAT_141ddae48);
    }
    _DAT_141de32d0 = 4;
    _DAT_141de32e0 = DAT_141ddad44;
    _DAT_141de32dc = DAT_141ddad40;
    if ((1 << ((byte)DAT_141ddad44 & 0x1f) & 0x46U) == 0) {
      _DAT_141de32d4 = DAT_141ddad38;
    }
    else {
      FUN_1400419b0(&DAT_141de32d4,&DAT_141ddad38);
    }
    _DAT_141de32e4 = 5;
    _DAT_141de32f4 = DAT_141ddad84;
    _DAT_141de32f0 = DAT_141ddad80;
    if ((1 << ((byte)DAT_141ddad84 & 0x1f) & 0x46U) == 0) {
      _DAT_141de32e8 = DAT_141ddad78;
    }
    else {
      FUN_1400419b0(&DAT_141de32e8,&DAT_141ddad78);
    }
    _DAT_141de32f8 = 6;
    _DAT_141de3308 = DAT_141ddadc4;
    _DAT_141de3304 = DAT_141ddadc0;
    if ((1 << ((byte)DAT_141ddadc4 & 0x1f) & 0x46U) == 0) {
      _DAT_141de32fc = DAT_141ddadb8;
    }
    else {
      FUN_1400419b0(&DAT_141de32fc,&DAT_141ddadb8);
    }
    _DAT_141de330c = 7;
    atexit((_func_5014 *)&LAB_141497580);
    _Init_thread_footer(&DAT_141de31b8);
  }
  uVar13 = 0;
  do {
    iVar6 = FUN_140e851f0(&DAT_141de3270 + (longlong)(int)uVar13 * 0x14,&local_d0,DAT_141955260,0);
    uVar16 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (iVar6 == 0) {
      switch((&DAT_141de3280)[(longlong)(int)uVar13 * 5]) {
      case 0:
        local_108 = 0x1bb;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x4139816900000000;
        local_108 = 0x1bc;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001ac;
        local_138 = 0x1000001000001ac;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_128);
        local_108 = 0x1bd;
        puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6118);
        uStack_13c = 0xd;
        local_148 = 0x3ff0000000000000;
        if (&local_148 != puVar15) {
          local_138 = 0x3ff0000000000000;
          uStack_130 = uStack_140;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar15);
          }
          FUN_140041b80(puVar15,&local_138);
        }
        goto switchD_140cc6c59_default;
      case 1:
        local_108 = 0x1c1;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x4156183e00000000;
        local_108 = 0x1c2;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001b1;
        local_138 = 0x1000001000001b1;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 2:
        local_108 = 0x1c7;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x413100a800000000;
        local_108 = 0x1c8;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001af;
        local_138 = 0x1000001000001af;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 3:
        local_108 = 0x1cd;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x40efffe000000000;
        local_108 = 0x1ce;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001b3;
        local_138 = 0x1000001000001b3;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 4:
        local_108 = 0x1d3;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x40efffe000000000;
        local_108 = 0x1d4;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001b5;
        local_138 = 0x1000001000001b5;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 5:
        local_108 = 0x1d9;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x40efffe000000000;
        local_108 = 0x1da;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001b5;
        local_138 = 0x1000001000001b5;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 6:
        local_108 = 0x1df;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x416fffe000000000;
        local_108 = 0x1e0;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001aa;
        local_138 = 0x1000001000001aa;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        break;
      case 7:
        local_108 = 0x1e6;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9a88);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0x416fffe000000000;
        local_108 = 0x1e7;
        uStack_13c = 0xf;
        local_148 = 0x1000001000001b1;
        local_138 = 0x1000001000001b1;
        uStack_130 = uStack_140;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_138);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_128);
        local_108 = 0x1e8;
        puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f6118);
        uStack_13c = 0xd;
        local_148 = 0;
        if (&local_148 != puVar15) {
          local_138 = 0;
          uStack_130 = uStack_140;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar15);
          }
          FUN_140041b80(puVar15,&local_138);
        }
        local_108 = 0x1e9;
        puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffa38);
        uStack_13c = 0xd;
        local_148 = 0x3ff0000000000000;
        if (&local_148 != puVar15) {
          local_138 = 0x3ff0000000000000;
          uStack_130 = uStack_140;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar15);
          }
          FUN_140041b80(puVar15,&local_138);
        }
      default:
        goto switchD_140cc6c59_default;
      }
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_128);
      break;
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 8);
switchD_140cc6c59_default:
  local_108 = 0x1ee;
  uVar10 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f98e8);
  cVar5 = FUN_140e491e0(uVar10);
  if (cVar5 == '\0') {
    uStack_13c = 0;
    local_148 = 0x416fffffe0000000;
    puVar15 = &local_148;
  }
  else {
    puVar15 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9a88);
    uStack_12c = *(undefined4 *)((longlong)puVar15 + 0xc);
    uStack_130 = *(undefined4 *)(puVar15 + 1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar15;
    }
    else {
      FUN_1400419b0(&local_138,puVar15);
    }
    puVar15 = &local_138;
    bVar3 = true;
    bVar2 = false;
  }
  uVar4 = uStack_13c;
  FUN_140e609c0(param_1);
  if (puVar15 != puVar7) {
    local_b8 = *(undefined4 *)puVar15;
    uStack_b4 = *(undefined4 *)((longlong)puVar15 + 4);
    uStack_b0 = *(undefined4 *)(puVar15 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar15 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_b8);
  }
  if ((bVar2) && ((1 << ((byte)uVar4 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_148);
  }
  if ((bVar3) && ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_108 = 0x1f0;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_100 = 0;
  local_f8 = 0;
  local_f4 = 5;
  puVar11 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57c20);
  FUN_140e609c0(param_1);
  puVar12 = (undefined4 *)
            FUN_140e634e0(param_1,param_2,&local_100,0,CONCAT44(uVar16,DAT_1419fd6d8),0);
  if (puVar12 != puVar11) {
    local_b8 = *puVar12;
    uStack_b4 = puVar12[1];
    uStack_b0 = puVar12[2];
    uStack_ac = puVar12[3];
    if ((1 << ((byte)puVar11[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    FUN_140041b80(puVar11,&local_b8);
  }
  FUN_140e60910(1);
  local_108 = 0x1f2;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f98f8);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_148,gml_Script_anon_11944_anon_11810_gml_Object_oRogueLevelManager_Create_0,
                param_1);
  if (&local_148 != puVar7) {
    local_b8 = (undefined4)local_148;
    uStack_b4 = local_148._4_4_;
    uStack_b0 = uStack_140;
    uStack_ac = uStack_13c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_b8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,3,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar7 = local_a0;
    do {
      puVar15 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar15 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar15);
      }
      *puVar15 = 0;
      *(undefined4 *)(puVar15 + 1) = 0;
      *(undefined4 *)((longlong)puVar15 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}


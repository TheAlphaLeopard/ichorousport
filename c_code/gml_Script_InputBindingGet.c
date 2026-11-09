// gml_Script_InputBindingGet @ 0x1402f7b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputBindingGet
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_b0 = "gml_Script_InputBindingFindCollisions";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x10;
  FUN_140041df0(local_48,param_4,5,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_4c = 0;
  local_58 = 0;
  local_13c = 0;
  local_148 = 0;
  local_12c = 0;
  local_138 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf68) &&
     (_Init_thread_header(&DAT_141dddf68), DAT_141dddf68 == -1)) {
    DAT_141dddf60 = (longlong *)FUN_140e63aa0(DAT_1419ef838);
    _Init_thread_footer(&DAT_141dddf68);
  }
  local_a8 = 0x10;
  puVar9 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0x10;
    if ((int)local_48[0] < 4) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_40[3];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if ((int)local_48[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[4];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_48[0] < 5) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_40[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if (DAT_141ddc0ae == '\0') {
    FUN_140e64380(DAT_141dddf60,"gml_Script_InputBindingFindCollisions");
    FUN_140e64380(param_1,"gml_Script_InputBindingFindCollisions");
  }
  local_a8 = 0x12;
  if (DAT_141ddc0ae == '\0') {
    DAT_141ddc0ae = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dddf60 + 0x10))(DAT_141dddf60,DAT_1419fee58);
    FUN_140e609c0(DAT_141dddf60);
    puVar5 = (undefined8 *)FUN_140e8da20(&local_58,param_1,0);
    if (puVar5 != puVar4) {
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_158);
    }
    FUN_140e60910(1);
  }
  local_a8 = 0x13;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dddf60 + 8))(DAT_141dddf60,DAT_1419fee58);
  if (puVar4 != &local_128) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  local_90 = &local_128;
  local_158 = CONCAT44(uRam0000000141dc63f4,_DAT_141dc63f0);
  uStack_150 = uRam0000000141dc63f8;
  uStack_14c = uRam0000000141dc63fc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_88 = &local_118;
  uVar6 = CONCAT44(uVar12,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_148,2,uVar6,&local_90);
  uVar12 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_a8 = 4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f7f58:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[3];
    if (puVar5 != &local_128) goto LAB_1402f7f58;
  }
  local_90 = &local_128;
  uVar10 = CONCAT44(uVar12,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,&local_90);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_a8 = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((int)local_48[0] < 4) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f8041:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[3];
      if (puVar5 != &local_118) goto LAB_1402f8041;
    }
    local_88 = &local_118;
    local_158 = CONCAT44(uRam0000000141dcf46c,_DAT_141dcf468);
    uStack_150 = uRam0000000141dcf470;
    uStack_14c = DAT_141dcf474;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_80 = &local_108;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_a0,1,CONCAT44(uVar12,DAT_1419fdc58),&local_88);
    if (puVar5 != &local_f8) {
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    local_78 = &local_f8;
    local_158 = CONCAT44(uRam0000000141dcf47c,_DAT_141dcf478);
    uStack_150 = uRam0000000141dcf480;
    uStack_14c = DAT_141dcf484;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
    local_70 = &local_e8;
    ppuVar11 = &local_80;
    FUN_14008e020(param_1,param_2,&local_138,3,ppuVar11);
    uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  }
  local_a8 = 8;
  if ((int)local_48[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[3];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar3 < 0x80000000) {
    local_a8 = 0xd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dcf4bc,_DAT_141dcf4b8);
    uStack_150 = uRam0000000141dcf4c0;
    uStack_14c = DAT_141dcf4c4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_90 = &local_128;
    if ((int)local_48[0] < 4) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f827a:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[3];
      if (puVar5 != &local_118) goto LAB_1402f827a;
    }
    local_88 = &local_118;
    local_158 = CONCAT44(uRam0000000141dcf48c,_DAT_141dcf488);
    uStack_150 = uRam0000000141dcf490;
    uStack_14c = DAT_141dcf494;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_80 = &local_108;
    local_158 = CONCAT44(uRam00000001419e3d64,_DAT_1419e3d60);
    uStack_150 = uRam00000001419e3d68;
    uStack_14c = uRam00000001419e3d6c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
    local_78 = &local_f8;
    local_158 = CONCAT44(uRam0000000141dcf4ac,_DAT_141dcf4a8);
    uStack_150 = uRam0000000141dcf4b0;
    uStack_14c = DAT_141dcf4b4;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
    local_70 = &local_e8;
    ppuVar11 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,5,ppuVar11);
    uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  }
  local_a8 = 0x13;
  if ((int)local_48[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[3];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_a8 = 0x17;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dcf4bc,_DAT_141dcf4b8);
    uStack_150 = uRam0000000141dcf4c0;
    uStack_14c = DAT_141dcf4c4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_90 = &local_128;
    if ((int)local_48[0] < 4) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f8482:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[3];
      if (puVar5 != &local_118) goto LAB_1402f8482;
    }
    local_88 = &local_118;
    local_158 = CONCAT44(uRam0000000141dcf49c,_DAT_141dcf498);
    uStack_150 = uRam0000000141dcf4a0;
    uStack_14c = DAT_141dcf4a4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_80 = &local_108;
    ppuVar11 = &local_90;
    FUN_14008e020(param_1,param_2,&local_148,3,ppuVar11);
    uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  }
  local_a8 = 0x17;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f8569:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_128) goto LAB_1402f8569;
  }
  local_90 = &local_128;
  uVar10 = CONCAT44(uVar12,DAT_1419fdbf8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar10,&local_90);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_a8 = 0x17;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f862a:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
      if (puVar5 != &local_118) goto LAB_1402f862a;
    }
    local_88 = &local_118;
    if ((int)local_48[0] < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_40[1];
    }
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_138,1,CONCAT44(uVar12,DAT_1419fdc48),&local_88);
    if (puVar7 != puVar5) {
      local_158 = *puVar7;
      uStack_150 = *(undefined4 *)(puVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_158);
    }
  }
  local_a8 = 0x19;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  local_158 = CONCAT44(uRam00000001419e3d54,_DAT_1419e3d50);
  uStack_150 = uRam00000001419e3d58;
  uStack_14c = uRam00000001419e3d5c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_158);
  local_90 = &local_128;
  if (puVar4 != &local_118) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  local_88 = &local_118;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f87a2:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_108) goto LAB_1402f87a2;
  }
  local_80 = &local_108;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f87f1:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_f8) goto LAB_1402f87f1;
  }
  local_78 = &local_f8;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f8840:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_e8) goto LAB_1402f8840;
  }
  local_70 = &local_e8;
  if ((int)local_48[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[4];
    if (puVar5 == &local_d8) goto LAB_1402f88bf;
  }
  local_158 = *puVar5;
  uStack_150 = *(undefined4 *)(puVar5 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_158);
LAB_1402f88bf:
  local_68 = &local_d8;
  if (((int)local_48[0] < 4) || (puVar9 = (undefined8 *)local_40[3], puVar9 != &local_c8)) {
    local_158 = *puVar9;
    uStack_150 = *(undefined4 *)(puVar9 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  local_60 = &local_c8;
  gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_148,7,&local_90);
  local_a8 = 0x1b;
  if (puVar4 != param_3) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,7,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar9 = local_40;
    do {
      puVar4 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


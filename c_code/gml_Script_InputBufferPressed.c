// gml_Script_InputBufferPressed @ 0x140300c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputBufferPressed
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50 [2];
  undefined8 *local_48;
  
  local_a0 = "gml_Script_InputBindingSwap";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xc;
  FUN_140041df0(local_50,param_4,6,param_5);
  uVar8 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_13c = 0;
  local_148 = 0;
  local_54 = 0;
  local_60 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xc;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_50[0];
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_98 = 0xc;
    if ((int)local_50[0] < 6) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_48[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  local_98 = 6;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_140300df1:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
    if (puVar5 != &local_138) goto LAB_140300df1;
  }
  local_d8 = &local_138;
  uVar9 = CONCAT44(uVar8,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar9,&local_d8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  uVar8 = 0;
  if (cVar1 == '\0') {
    local_98 = 9;
    local_60 = 0;
    local_58 = 0;
    local_54 = 5;
    if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    local_90 = 0;
    local_88 = 0;
    local_84 = 5;
    if ((int)local_50[0] < 6) {
      puVar5 = &DAT_1419df7b0;
LAB_140300ebb:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_48[5];
      if (puVar5 != &local_128) goto LAB_140300ebb;
    }
    local_d0 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf7cc,_DAT_141dcf7c8);
    uStack_150 = uRam0000000141dcf7d0;
    uStack_14c = DAT_141dcf7d4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_c8 = &local_118;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_90,1,CONCAT44(uVar10,DAT_1419fdc58),&local_d0);
    if (puVar5 != &local_108) {
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_c0 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf79c,_DAT_141dcf798);
    uStack_150 = uRam0000000141dcf7a0;
    uStack_14c = DAT_141dcf7a4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
    local_b8 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_60,3,&local_c8);
    uVar8 = local_54;
  }
  local_98 = 0xe;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar3 < 0x80000000) {
    local_98 = 0x11;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dcf78c,_DAT_141dcf788);
    uStack_150 = uRam0000000141dcf790;
    uStack_14c = DAT_141dcf794;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_d8 = &local_138;
    if ((int)local_50[0] < 6) {
      puVar5 = &DAT_1419df7b0;
LAB_1403010fe:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_48[5];
      if (puVar5 != &local_128) goto LAB_1403010fe;
    }
    local_d0 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf7ac,_DAT_141dcf7a8);
    uStack_150 = uRam0000000141dcf7b0;
    uStack_14c = DAT_141dcf7b4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_c8 = &local_118;
    local_158 = CONCAT44(uRam00000001419e3dd4,_DAT_1419e3dd0);
    uStack_150 = uRam00000001419e3dd8;
    uStack_14c = uRam00000001419e3ddc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_c0 = &local_108;
    local_158 = CONCAT44(uRam0000000141dcf7bc,_DAT_141dcf7b8);
    uStack_150 = uRam0000000141dcf7c0;
    uStack_14c = DAT_141dcf7c4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
    local_b8 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_148,5,&local_d8);
  }
  local_98 = 0x13;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_98 = 0x17;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dcf78c,_DAT_141dcf788);
    uStack_150 = uRam0000000141dcf790;
    uStack_14c = DAT_141dcf794;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
    local_d8 = &local_138;
    if ((int)local_50[0] < 6) {
      puVar5 = &DAT_1419df7b0;
LAB_14030130d:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_48[5];
      if (puVar5 != &local_128) goto LAB_14030130d;
    }
    local_d0 = &local_128;
    local_158 = CONCAT44(uRam0000000141dcf77c,_DAT_141dcf778);
    uStack_150 = uRam0000000141dcf780;
    uStack_14c = DAT_141dcf784;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_c8 = &local_118;
    FUN_14008e020(param_1,param_2,&local_148,3,&local_d8);
  }
  local_98 = 0x10;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403013f6:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_48;
    if (puVar5 != &local_138) goto LAB_1403013f6;
  }
  local_d8 = &local_138;
  if ((int)local_50[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14030144a:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[1];
    if (puVar5 != &local_128) goto LAB_14030144a;
  }
  local_d0 = &local_128;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14030149e:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
    if (puVar5 != &local_118) goto LAB_14030149e;
  }
  local_c8 = &local_118;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_1403014f1:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
    if (puVar5 != &local_108) goto LAB_1403014f1;
  }
  local_c0 = &local_108;
  puVar5 = (undefined8 *)gml_Script_InputBindingSet(param_1,param_2,&local_148,4,&local_d8);
  if (puVar5 != &local_70) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_158);
  }
  local_98 = 0x11;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403015cb:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_48;
    if (puVar5 != &local_138) goto LAB_1403015cb;
  }
  local_d8 = &local_138;
  if ((int)local_50[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_14030161f:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[3];
    if (puVar5 != &local_128) goto LAB_14030161f;
  }
  local_d0 = &local_128;
  if ((int)local_50[0] < 5) {
    puVar5 = &DAT_1419df7b0;
LAB_140301673:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[4];
    if (puVar5 != &local_118) goto LAB_140301673;
  }
  local_c8 = &local_118;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_1403016c6:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
    if (puVar5 != &local_108) goto LAB_1403016c6;
  }
  local_c0 = &local_108;
  puVar5 = (undefined8 *)gml_Script_InputBindingSet(param_1,param_2,&local_148,4,&local_d8);
  if (puVar5 != &local_80) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_158);
  }
  local_98 = 0x12;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403017a0:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_48;
    if (puVar5 != &local_138) goto LAB_1403017a0;
  }
  local_d8 = &local_138;
  if ((int)local_50[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403017f4:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[1];
    if (puVar5 != &local_128) goto LAB_1403017f4;
  }
  local_d0 = &local_128;
  local_c8 = &local_80;
  if ((int)local_50[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14030184f:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[2];
    if (puVar5 != &local_108) goto LAB_14030184f;
  }
  local_c0 = &local_108;
  if ((int)local_50[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_14030189e:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[5];
    if (puVar5 != &local_f8) goto LAB_14030189e;
  }
  local_b8 = &local_f8;
  gml_Script_InputBindingSetSafe(param_1,param_2,&local_148,5,&local_d8);
  local_98 = 0x13;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_50[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14030193f:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_48;
    if (puVar5 != &local_138) goto LAB_14030193f;
  }
  local_d8 = &local_138;
  if ((int)local_50[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_140301993:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_48[3];
    if (puVar5 != &local_128) goto LAB_140301993;
  }
  local_d0 = &local_128;
  local_c8 = &local_70;
  if ((int)local_50[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_48[4];
    if (puVar5 == &local_108) goto LAB_140301a1e;
  }
  local_158 = *puVar5;
  uStack_150 = *(undefined4 *)(puVar5 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_158);
LAB_140301a1e:
  local_c0 = &local_108;
  if (((int)local_50[0] < 6) || (puVar6 = (undefined8 *)local_48[5], puVar6 != &local_f8)) {
    local_158 = *puVar6;
    uStack_150 = *(undefined4 *)(puVar6 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
  }
  local_b8 = &local_f8;
  gml_Script_InputBindingSetSafe(param_1,param_2,&local_148,5,&local_d8);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,6,FUN_140041b30);
  if (0 < (int)local_50[0]) {
    puVar6 = local_48;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_48);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


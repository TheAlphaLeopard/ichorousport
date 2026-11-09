// gml_Script___InputBindingFindInternal @ 0x1402f5dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputBindingFindInternal
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
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
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_c0 = "gml_Script_InputBindingFind";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xe;
  FUN_140041df0(local_58,param_4,3,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  local_11c = 0;
  local_128 = 0;
  local_6c = 0;
  local_78 = 0;
  local_7c = 0;
  local_88 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddf48) &&
     (_Init_thread_header(&DAT_141dddf48), DAT_141dddf48 == -1)) {
    DAT_141dddf40 = (longlong *)FUN_140e63aa0(DAT_1419ef818);
    _Init_thread_footer(&DAT_141dddf48);
  }
  local_b8 = 0xe;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_50[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 0xe;
    if ((int)local_58[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_50[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0;
  }
  if (DAT_141ddc0ad == '\0') {
    FUN_140e64380(DAT_141dddf40,"gml_Script_InputBindingFind");
    FUN_140e64380(param_1,"gml_Script_InputBindingFind");
  }
  local_b8 = 0x10;
  if (DAT_141ddc0ad == '\0') {
    DAT_141ddc0ad = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dddf40 + 0x10))(DAT_141dddf40,DAT_1419fee58);
    FUN_140e609c0(DAT_141dddf40);
    puVar5 = (undefined8 *)FUN_140e8da20(&local_68,param_1,0);
    if (puVar5 != puVar4) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_138);
    }
    FUN_140e60910(1);
  }
  local_b8 = 0x11;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141dddf40 + 8))(DAT_141dddf40,DAT_1419fee58);
  if (puVar4 != &local_118) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_b0 = &local_118;
  local_138 = CONCAT44(uRam0000000141dc63e4,_DAT_141dc63e0);
  uStack_130 = uRam0000000141dc63e8;
  uStack_12c = uRam0000000141dc63ec;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_138);
  local_a8 = &local_108;
  uVar6 = CONCAT44(uVar9,DAT_1419fee68);
  FUN_140e634e0(param_1,param_2,&local_128,2,uVar6,&local_b0);
  uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_b8 = 4;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f6161:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  else {
    puVar5 = (undefined8 *)local_50[2];
    if (puVar5 != &local_118) goto LAB_1402f6161;
  }
  local_b0 = &local_118;
  uVar10 = CONCAT44(uVar9,DAT_141a014a8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar10,&local_b0);
  uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  uVar9 = 0;
  if (cVar1 == '\0') {
    local_b8 = 6;
    local_78 = 0;
    local_70 = 0;
    local_6c = 5;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    if ((int)local_58[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f6230:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)local_50[2];
      if (puVar5 != &local_108) goto LAB_1402f6230;
    }
    local_a8 = &local_108;
    local_138 = CONCAT44(uRam0000000141dcf45c,_DAT_141dcf458);
    uStack_130 = uRam0000000141dcf460;
    uStack_12c = DAT_141dcf464;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_a0 = &local_f8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_88,1,CONCAT44(uVar11,DAT_1419fdc58),&local_a8);
    if (puVar5 != &local_e8) {
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_138);
    }
    local_98 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dcf44c,_DAT_141dcf448);
    uStack_130 = uRam0000000141dcf450;
    uStack_12c = DAT_141dcf454;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_90 = local_d8;
    FUN_14008e020(param_1,param_2,&local_78,3,&local_a0);
    uVar9 = local_6c;
  }
  local_b8 = 0xb;
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[2];
  }
  uStack_12c = 0;
  local_138 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (uVar3 < 0x80000000) {
    local_b8 = 0x10;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam0000000141dcf43c,_DAT_141dcf438);
    uStack_130 = uRam0000000141dcf440;
    uStack_12c = DAT_141dcf444;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_b0 = &local_118;
    if ((int)local_58[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f6474:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)local_50[2];
      if (puVar5 != &local_108) goto LAB_1402f6474;
    }
    local_a8 = &local_108;
    local_138 = CONCAT44(uRam0000000141dcf40c,_DAT_141dcf408);
    uStack_130 = uRam0000000141dcf410;
    uStack_12c = DAT_141dcf414;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_a0 = &local_f8;
    local_138 = CONCAT44(uRam00000001419e3d44,_DAT_1419e3d40);
    uStack_130 = uRam00000001419e3d48;
    uStack_12c = uRam00000001419e3d4c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
    local_98 = &local_e8;
    local_138 = CONCAT44(uRam0000000141dcf41c,_DAT_141dcf418);
    uStack_130 = uRam0000000141dcf420;
    uStack_12c = DAT_141dcf424;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_138);
    local_90 = local_d8;
    FUN_14008e020(param_1,param_2,&local_128,5,&local_b0);
  }
  local_b8 = 0x16;
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[2];
  }
  uStack_12c = 0;
  local_138 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_138,DAT_141955260,1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_b8 = 0x19;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    local_138 = CONCAT44(uRam0000000141dcf43c,_DAT_141dcf438);
    uStack_130 = uRam0000000141dcf440;
    uStack_12c = DAT_141dcf444;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_b0 = &local_118;
    if ((int)local_58[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1402f6681:
      local_138 = *puVar5;
      uStack_130 = *(undefined4 *)(puVar5 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_138);
    }
    else {
      puVar5 = (undefined8 *)local_50[2];
      if (puVar5 != &local_108) goto LAB_1402f6681;
    }
    local_a8 = &local_108;
    local_138 = CONCAT44(uRam0000000141dcf42c,_DAT_141dcf428);
    uStack_130 = uRam0000000141dcf430;
    uStack_12c = DAT_141dcf434;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_138);
    local_a0 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_128,3,&local_b0);
  }
  local_b8 = 0x17;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (puVar4 != &local_118) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_b0 = &local_118;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1402f67b9:
    local_138 = *puVar5;
    uStack_130 = *(undefined4 *)(puVar5 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_138);
  }
  else {
    puVar5 = (undefined8 *)*local_50;
    if (puVar5 != &local_108) goto LAB_1402f67b9;
  }
  local_a8 = &local_108;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
    if (puVar5 == &local_f8) goto LAB_1402f6840;
  }
  local_138 = *puVar5;
  uStack_130 = *(undefined4 *)(puVar5 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_138);
LAB_1402f6840:
  local_a0 = &local_f8;
  if (((int)local_58[0] < 3) || (puVar8 = (undefined8 *)local_50[2], puVar8 != &local_e8)) {
    local_138 = *puVar8;
    uStack_130 = *(undefined4 *)(puVar8 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_98 = &local_e8;
  gml_Script_InputBindingFindCollisions(param_1,param_2,&local_128,4,&local_b0);
  local_b8 = 0x19;
  if (puVar4 != param_3) {
    local_138 = *puVar4;
    uStack_130 = *(undefined4 *)(puVar4 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar8 = local_50;
    do {
      puVar4 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


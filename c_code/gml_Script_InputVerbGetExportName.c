// gml_Script_InputVerbGetExportName @ 0x140373430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputVerbGetExportName
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
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
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_90 = "gml_Script_InputVerbGetBindingName";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x78;
  FUN_140041df0(local_48,param_4,4,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_13c = 0;
  local_148 = 0;
  local_12c = 0;
  local_138 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x78;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_88 = 0x78;
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
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_48[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[3];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if ((int)local_48[0] < 4) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_40[3];
      if (puVar5 == (undefined8 *)&DAT_141dd1af8) goto LAB_14037363a;
    }
    local_158 = CONCAT44(uRam0000000141dd1afc,_DAT_141dd1af8);
    uStack_150 = uRam0000000141dd1b00;
    uStack_14c = DAT_141dd1b04;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
LAB_14037363a:
  local_88 = 4;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140373688:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_128) goto LAB_140373688;
  }
  local_80 = &local_128;
  uVar8 = CONCAT44(uVar9,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar8,&local_80);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_88 = 6;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140373771:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_118) goto LAB_140373771;
    }
    local_78 = &local_118;
    local_158 = CONCAT44(uRam0000000141dd1b2c,_DAT_141dd1b28);
    uStack_150 = uRam0000000141dd1b30;
    uStack_14c = DAT_141dd1b34;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_70 = &local_108;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar9,DAT_1419fdc58),&local_78);
    if (puVar5 != &local_f8) {
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_158);
    }
    local_68 = &local_f8;
    local_158 = CONCAT44(uRam0000000141dd1b1c,_DAT_141dd1b18);
    uStack_150 = uRam0000000141dd1b20;
    uStack_14c = DAT_141dd1b24;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
    local_60 = &local_e8;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_70);
  }
  local_88 = 9;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
  }
  uStack_14c = 0;
  local_158 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (uVar3 < 0x80000000) {
    local_88 = 0xc;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dd1adc,_DAT_141dd1ad8);
    uStack_150 = uRam0000000141dd1ae0;
    uStack_14c = DAT_141dd1ae4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_80 = &local_128;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_1403739aa:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_118) goto LAB_1403739aa;
    }
    local_78 = &local_118;
    local_158 = CONCAT44(uRam0000000141dd1aec,_DAT_141dd1ae8);
    uStack_150 = uRam0000000141dd1af0;
    uStack_14c = DAT_141dd1af4;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_70 = &local_108;
    local_158 = CONCAT44(uRam00000001419e4524,_DAT_1419e4520);
    uStack_150 = uRam00000001419e4528;
    uStack_14c = uRam00000001419e452c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_158);
    local_68 = &local_f8;
    local_158 = CONCAT44(uRam0000000141dd1b0c,_DAT_141dd1b08);
    uStack_150 = uRam0000000141dd1b10;
    uStack_14c = DAT_141dd1b14;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
    local_60 = &local_e8;
    FUN_14008e020(param_1,param_2,&local_148,5,&local_80);
  }
  local_88 = 0xf;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
  }
  uStack_14c = 0;
  local_158 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_158,DAT_141955260,1);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_88 = 0x10;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    local_158 = CONCAT44(uRam0000000141dd1adc,_DAT_141dd1ad8);
    uStack_150 = uRam0000000141dd1ae0;
    uStack_14c = DAT_141dd1ae4;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
    local_80 = &local_128;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_140373bb2:
      local_158 = *puVar5;
      uStack_150 = *(undefined4 *)(puVar5 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_118) goto LAB_140373bb2;
    }
    local_78 = &local_118;
    local_158 = CONCAT44(uRam0000000141dd1b3c,_DAT_141dd1b38);
    uStack_150 = uRam0000000141dd1b40;
    uStack_14c = DAT_141dd1b44;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
    local_70 = &local_108;
    FUN_14008e020(param_1,param_2,&local_148,3,&local_80);
  }
  local_88 = 0x7c;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140373c99:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_128) goto LAB_140373c99;
  }
  local_80 = &local_128;
  local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_150 = DAT_1419df7b8;
  uStack_14c = DAT_1419df7bc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_158);
  local_78 = &local_118;
  puVar5 = (undefined8 *)gml_Script_InputPlayerUsingGeneric(param_1,param_2,&local_148,2,&local_80);
  if (puVar5 != &local_a8) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_158);
  }
  local_88 = 0x7d;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  local_80 = &local_a8;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140373dec:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_118) goto LAB_140373dec;
  }
  local_78 = &local_118;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140373e3f:
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_158);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_108) goto LAB_140373e3f;
  }
  local_70 = &local_108;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 == &local_f8) goto LAB_140373ebe;
  }
  local_158 = *puVar5;
  uStack_150 = *(undefined4 *)(puVar5 + 1);
  uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_158);
LAB_140373ebe:
  local_68 = &local_f8;
  puVar5 = (undefined8 *)gml_Script_InputBindingSet(param_1,param_2,&local_138,4,&local_80);
  if (puVar5 != &local_e8) {
    local_158 = *puVar5;
    uStack_150 = *(undefined4 *)(puVar5 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_158);
  }
  local_60 = &local_e8;
  local_58 = &local_a8;
  if (((int)local_48[0] < 4) || (puVar7 = (undefined8 *)local_40[3], puVar7 != &local_c8)) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_158);
  }
  local_50 = &local_c8;
  puVar7 = (undefined8 *)gml_Script_InputGetHotswap(param_1,param_2,&local_148,3,&local_60);
  if (puVar7 != param_3) {
    local_158 = *puVar7;
    uStack_150 = *(undefined4 *)(puVar7 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_158);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,7,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar7 = local_40;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


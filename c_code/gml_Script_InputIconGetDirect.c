// gml_Script_InputIconGetDirect @ 0x14032d480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputIconGetDirect
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
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
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
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_a0 = "gml_Script_InputIconGet";
  local_a8 = DAT_141dc7a50;
  local_98 = 0xb;
  DAT_141dc7a50 = &local_a8;
  FUN_140041df0(local_48,param_4,3,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_15c = 0;
  local_168 = 0;
  local_13c = 0;
  local_148 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xb;
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
    local_98 = 0xb;
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
  local_98 = 4;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14032d669:
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_138) goto LAB_14032d669;
  }
  local_88 = &local_138;
  uVar8 = CONCAT44(uVar9,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_98 = 7;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14032d756:
      local_178 = *puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_128) goto LAB_14032d756;
    }
    local_80 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd041c,_DAT_141dd0418);
    uStack_170 = uRam0000000141dd0420;
    uStack_16c = DAT_141dd0424;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_78 = &local_118;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar9,DAT_1419fdc58),&local_80);
    if (puVar5 != &local_108) {
      local_178 = *puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_178);
    }
    local_70 = &local_108;
    local_178 = CONCAT44(uRam0000000141dd042c,_DAT_141dd0428);
    uStack_170 = uRam0000000141dd0430;
    uStack_16c = DAT_141dd0434;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
    local_68 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_148,3,&local_78);
  }
  local_98 = 0xd;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
  }
  uStack_16c = 0;
  local_178 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (uVar3 < 0x80000000) {
    local_98 = 0x10;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd044c,_DAT_141dd0448);
    uStack_170 = uRam0000000141dd0450;
    uStack_16c = DAT_141dd0454;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_88 = &local_138;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14032d98b:
      local_178 = *puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_128) goto LAB_14032d98b;
    }
    local_80 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd040c,_DAT_141dd0408);
    uStack_170 = uRam0000000141dd0410;
    uStack_16c = DAT_141dd0414;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_78 = &local_118;
    local_178 = CONCAT44(uRam00000001419e4044,_DAT_1419e4040);
    uStack_170 = uRam00000001419e4048;
    uStack_16c = uRam00000001419e404c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_178);
    local_70 = &local_108;
    local_178 = CONCAT44(uRam0000000141dd03fc,_DAT_141dd03f8);
    uStack_170 = uRam0000000141dd0400;
    uStack_16c = DAT_141dd0404;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
    local_68 = &local_f8;
    FUN_14008e020(param_1,param_2,&local_168,5,&local_88);
  }
  local_98 = 0x15;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
  }
  uStack_16c = 0;
  local_178 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_178,DAT_141955260,1);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if (!(iVar2 == -2 || -1 < iVar2)) {
    local_98 = 0x15;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_178 = CONCAT44(uRam0000000141dd044c,_DAT_141dd0448);
    uStack_170 = uRam0000000141dd0450;
    uStack_16c = DAT_141dd0454;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_88 = &local_138;
    if ((int)local_48[0] < 3) {
      puVar5 = &DAT_1419df7b0;
LAB_14032db8e:
      local_178 = *puVar5;
      uStack_170 = *(undefined4 *)(puVar5 + 1);
      uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
    }
    else {
      puVar5 = (undefined8 *)local_40[2];
      if (puVar5 != &local_128) goto LAB_14032db8e;
    }
    local_80 = &local_128;
    local_178 = CONCAT44(uRam0000000141dd043c,_DAT_141dd0438);
    uStack_170 = uRam0000000141dd0440;
    uStack_16c = DAT_141dd0444;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
    local_78 = &local_118;
    FUN_14008e020(param_1,param_2,&local_168,3,&local_88);
  }
  local_98 = 0xf;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_14032dc71:
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 != &local_138) goto LAB_14032dc71;
  }
  local_88 = &local_138;
  local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = DAT_1419df7b8;
  uStack_16c = DAT_1419df7bc;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_178);
  local_80 = &local_128;
  puVar5 = (undefined8 *)gml_Script_InputPlayerUsingGeneric(param_1,param_2,&local_168,2,&local_88);
  if (puVar5 != &local_b8) {
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  local_98 = 0x10;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  local_88 = &local_b8;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14032ddec:
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_128) goto LAB_14032ddec;
  }
  local_80 = &local_128;
  if ((int)local_48[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_14032de3b:
    local_178 = *puVar5;
    uStack_170 = *(undefined4 *)(puVar5 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_178);
  }
  else {
    puVar5 = (undefined8 *)local_40[1];
    if (puVar5 != &local_118) goto LAB_14032de3b;
  }
  local_78 = &local_118;
  if ((int)local_48[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_40[2];
    if (puVar5 == &local_108) goto LAB_14032deba;
  }
  local_178 = *puVar5;
  uStack_170 = *(undefined4 *)(puVar5 + 1);
  uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_178);
LAB_14032deba:
  local_70 = &local_108;
  if (((int)local_48[0] < 3) || (puVar7 = (undefined8 *)local_40[2], puVar7 != &local_f8)) {
    local_178 = *puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_178);
  }
  local_68 = &local_f8;
  puVar7 = (undefined8 *)gml_Script_InputBindingSet(param_1,param_2,&local_148,4,&local_88);
  if (puVar7 != &local_e8) {
    local_178 = *puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_178);
  }
  local_60 = &local_e8;
  local_58 = &local_b8;
  puVar7 = (undefined8 *)
           gml_Script_InputPlayerGetMaxThreshold(param_1,param_2,&local_158,1,&local_68);
  if (puVar7 != &local_c8) {
    local_178 = *puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_178);
  }
  local_50 = &local_c8;
  puVar7 = (undefined8 *)gml_Script_InputIconTag(param_1,param_2,&local_168,3,&local_60);
  if (puVar7 != param_3) {
    local_178 = *puVar7;
    uStack_170 = *(undefined4 *)(puVar7 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_138,0x10,8,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


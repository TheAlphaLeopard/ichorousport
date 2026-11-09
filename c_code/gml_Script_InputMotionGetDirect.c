// gml_Script_InputMotionGetDirect @ 0x140336bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputMotionGetDirect
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
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_80 = "gml_Script_InputMotionGet";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0x13;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0x13;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_78 = 0x13;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  local_78 = 4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140336d2e:
    local_118 = *puVar5;
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_e8) goto LAB_140336d2e;
  }
  local_70 = &local_e8;
  uVar8 = CONCAT44(uVar9,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,uVar8,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_78 = 9;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_140336e15:
      local_118 = *puVar5;
      uStack_110 = *(undefined4 *)(puVar5 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_118);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_d8) goto LAB_140336e15;
    }
    local_68 = &local_d8;
    local_118 = CONCAT44(uRam0000000141dd079c,_DAT_141dd0798);
    uStack_110 = uRam0000000141dd07a0;
    uStack_10c = DAT_141dd07a4;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    local_60 = local_c8;
    puVar5 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_98,1,CONCAT44(uVar9,DAT_1419fdc58),&local_68);
    if (puVar5 != &local_b8) {
      local_118 = *puVar5;
      uStack_110 = *(undefined4 *)(puVar5 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_118);
    }
    local_58 = &local_b8;
    local_118 = CONCAT44(uRam0000000141dd077c,_DAT_141dd0778);
    uStack_110 = uRam0000000141dd0780;
    uStack_10c = DAT_141dd0784;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_50 = local_a8;
    FUN_14008e020(param_1,param_2,&local_f8,3,&local_60);
  }
  local_78 = 0xf;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_10c = 0;
  local_118 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (uVar3 < 0x80000000) {
    local_78 = 0x15;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_118 = CONCAT44(uRam0000000141dd076c,_DAT_141dd0768);
    uStack_110 = uRam0000000141dd0770;
    uStack_10c = DAT_141dd0774;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
    local_70 = &local_e8;
    if ((int)local_48[0] < 1) {
      puVar5 = &DAT_1419df7b0;
LAB_14033704a:
      local_118 = *puVar5;
      uStack_110 = *(undefined4 *)(puVar5 + 1);
      uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_118);
    }
    else {
      puVar5 = (undefined8 *)*local_40;
      if (puVar5 != &local_d8) goto LAB_14033704a;
    }
    local_68 = &local_d8;
    local_118 = CONCAT44(uRam0000000141dd075c,_DAT_141dd0758);
    uStack_110 = uRam0000000141dd0760;
    uStack_10c = DAT_141dd0764;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_118);
    local_60 = local_c8;
    local_118 = CONCAT44(uRam00000001419e40f4,_DAT_1419e40f0);
    uStack_110 = uRam00000001419e40f8;
    uStack_10c = uRam00000001419e40fc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_118);
    local_58 = &local_b8;
    local_118 = CONCAT44(uRam0000000141dd074c,_DAT_141dd0748);
    uStack_110 = uRam0000000141dd0750;
    uStack_10c = DAT_141dd0754;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_118);
    local_50 = local_a8;
    FUN_14008e020(param_1,param_2,&local_108,5,&local_70);
  }
  local_78 = 0x1a;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*local_40;
  }
  uStack_10c = 0;
  local_118 = 0;
  iVar2 = FUN_140e851f0(puVar5,&local_118,DAT_141955260,1);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (iVar2 == -2 || -1 < iVar2) goto LAB_1403372e9;
  local_78 = 0x1a;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_118 = CONCAT44(uRam0000000141dd076c,_DAT_141dd0768);
  uStack_110 = uRam0000000141dd0770;
  uStack_10c = DAT_141dd0774;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_118);
  local_70 = &local_e8;
  if ((int)local_48[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_14033724e:
    local_118 = *puVar5;
    uStack_110 = *(undefined4 *)(puVar5 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  else {
    puVar5 = (undefined8 *)*local_40;
    if (puVar5 != &local_d8) goto LAB_14033724e;
  }
  local_68 = &local_d8;
  local_118 = CONCAT44(uRam0000000141dd078c,_DAT_141dd0788);
  uStack_110 = uRam0000000141dd0790;
  uStack_10c = DAT_141dd0794;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_60 = local_c8;
  FUN_14008e020(param_1,param_2,&local_108,3,&local_70);
LAB_1403372e9:
  local_78 = 0x17;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (((int)local_48[0] < 1) || (puVar7 = (undefined8 *)*local_40, puVar7 != &local_e8)) {
    local_118 = *puVar7;
    uStack_110 = *(undefined4 *)(puVar7 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_118);
  }
  local_70 = &local_e8;
  puVar7 = (undefined8 *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_f8,1,&local_70)
  ;
  if (puVar7 != &local_d8) {
    local_118 = *puVar7;
    uStack_110 = *(undefined4 *)(puVar7 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_118);
  }
  local_68 = &local_d8;
  puVar7 = (undefined8 *)gml_Script_InputMotionIsCalibrated(param_1,param_2,&local_108,1,&local_68);
  if (puVar7 != param_3) {
    local_118 = *puVar7;
    uStack_110 = *(undefined4 *)(puVar7 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


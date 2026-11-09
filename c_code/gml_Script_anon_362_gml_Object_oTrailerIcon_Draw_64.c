// gml_Script_anon_362_gml_Object_oTrailerIcon_Draw_64 @ 0x140dd2050

uint * gml_Script_anon_362_gml_Object_oTrailerIcon_Draw_64
                 (longlong *param_1,undefined8 param_2,uint *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  uint uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined4 local_fc;
  ulonglong local_f8;
  undefined4 local_ec;
  uint local_e8 [3];
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  ulonglong local_a8;
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  ulonglong *local_68;
  uint *local_60;
  ulonglong *local_58;
  ulonglong *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  
  local_c0 = "gml_Script_anon@833@gml_Object_oTrailerIcon_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x32;
  FUN_140041df0(local_48,param_4,1,param_5);
  _eh_vector_constructor_iterator_(&local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  puVar3 = (ulonglong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_ec = 0xffffff;
  local_f8 = 0;
  puVar4 = (ulonglong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef1a8);
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_dc = 0xffffff;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_11c = 0;
  local_128 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_b8 = 0x32;
  puVar9 = (uint *)&DAT_1419df7b0;
  uVar8 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 0x32;
    if ((int)local_48[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x4024000000000000;
  }
  local_b8 = 0x34;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f3368);
  if (puVar3 != &local_a8) {
    local_118 = *puVar3;
    uStack_110 = (uint)puVar3[1];
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_118);
  }
  local_68 = &local_a8;
  puVar3 = (ulonglong *)FUN_140e63610(param_1,param_2,&local_128,1,uVar5,&local_68);
  if (puVar3 != &local_f8) {
    local_118 = *puVar3;
    uStack_110 = (uint)puVar3[1];
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
  }
  local_b8 = 0x35;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  if (puVar4 != &local_a8) {
    local_118 = *puVar4;
    uStack_110 = (uint)puVar4[1];
    uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_118);
  }
  local_68 = &local_a8;
  puVar3 = (ulonglong *)FUN_140e63610(param_1,param_2,&local_128,1,uVar5,&local_68);
  uVar10 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar3 != &local_108) {
    local_118 = *puVar3;
    uStack_110 = (uint)puVar3[1];
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_118);
  }
  local_b8 = 0x37;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_d8 = DAT_1419f5b58 & 0xffffff;
  uStack_d4 = (int)(DAT_1419f5b58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_d4 == 0xf) {
    uStack_d4 = 0x4000004;
  }
  else {
    uStack_d4 = uStack_d4 | 0x1000000;
  }
  uStack_10c = 0xf;
  local_118 = CONCAT44(uStack_d4,DAT_1419f5b58) & 0xffffffff00ffffff;
  uStack_d0 = uStack_110;
  uStack_cc = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_d8);
  local_68 = &local_a8;
  if (((int)local_48[0] < 1) || (puVar9 = (uint *)*local_40, puVar9 != local_98)) {
    local_d8 = *puVar9;
    uStack_d4 = puVar9[1];
    uStack_d0 = puVar9[2];
    uStack_cc = puVar9[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_d8);
  }
  local_60 = local_98;
  local_58 = &local_f8;
  local_50 = &local_108;
  puVar9 = (uint *)FUN_140e634e0(param_1,param_2,&local_128,4,CONCAT44(uVar10,DAT_1419fd6d8),
                                 &local_68);
  uVar7 = 0xffffff;
  if (puVar9 != local_e8) {
    local_d8 = *puVar9;
    uStack_d4 = puVar9[1];
    uStack_d0 = puVar9[2];
    uStack_cc = puVar9[3];
    FUN_140041b80(local_e8,&local_d8);
    uVar7 = uStack_dc;
  }
  local_b8 = 0x3a;
  if (local_e8 != param_3) {
    local_d8 = local_e8[0];
    uStack_d4 = local_e8[1];
    uStack_d0 = local_e8[2];
    uStack_cc = uStack_dc;
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_d8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,4,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar6 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


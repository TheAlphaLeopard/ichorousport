// gml_Script_anon_4965_gml_Object_oOfferingManager_Create_0 @ 0x140b86920

uint * gml_Script_anon_4965_gml_Object_oOfferingManager_Create_0
                 (undefined8 param_1,undefined8 param_2,uint *param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8 [3];
  uint uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  uint local_a8 [3];
  byte local_9c;
  uint local_98 [3];
  byte local_8c;
  uint local_88 [3];
  byte local_7c;
  uint local_78 [3];
  byte local_6c;
  uint *local_68;
  uint *local_60;
  uint *local_58;
  uint *local_50;
  uint local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  local_c0 = "gml_Script_anon@4378@gml_Object_oOfferingManager_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xa4;
  FUN_140041df0(local_48,param_4,3,param_5);
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_ec = 0;
  local_f8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_b8 = 0xa4;
  puVar6 = (uint *)&DAT_1419df7b0;
  uVar5 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 3) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_40[2];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 0xa4;
    if ((int)local_48[0] < 3) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_40[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x4020000000000000;
  }
  local_b8 = 0xa5;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = DAT_1419f5b58 & 0xffffff;
  uStack_e4 = (int)(DAT_1419f5b58 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_e4 == 0xf) {
    uStack_e4 = 0x4000004;
  }
  else {
    uStack_e4 = uStack_e4 | 0x1000000;
  }
  uStack_2c = 0xf;
  local_38 = CONCAT44(uStack_e4,DAT_1419f5b58) & 0xffffffff00ffffff;
  uStack_e0 = uStack_30;
  uStack_dc = 0xf;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_e8);
  local_68 = local_a8;
  if ((int)local_48[0] < 3) {
    puVar3 = (uint *)&DAT_1419df7b0;
LAB_140b86b1c:
    local_e8 = *puVar3;
    uStack_e4 = puVar3[1];
    uStack_e0 = puVar3[2];
    uStack_dc = puVar3[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
  }
  else {
    puVar3 = (uint *)local_40[2];
    if (puVar3 != local_98) goto LAB_140b86b1c;
  }
  local_60 = local_98;
  if ((int)local_48[0] < 1) {
    puVar3 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar3 = (uint *)*local_40;
    if (puVar3 == local_88) goto LAB_140b86b99;
  }
  local_e8 = *puVar3;
  uStack_e4 = puVar3[1];
  uStack_e0 = puVar3[2];
  uStack_dc = puVar3[3];
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
LAB_140b86b99:
  local_58 = local_88;
  if (((int)local_48[0] < 2) || (puVar6 = (uint *)local_40[1], puVar6 != local_78)) {
    local_e8 = *puVar6;
    uStack_e4 = puVar6[1];
    uStack_e0 = puVar6[2];
    uStack_dc = puVar6[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
  }
  local_50 = local_78;
  puVar6 = (uint *)FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar7,DAT_1419fd6d8),&local_68
                                );
  if (puVar6 != local_d8) {
    local_e8 = *puVar6;
    uStack_e4 = puVar6[1];
    uStack_e0 = puVar6[2];
    uStack_dc = puVar6[3];
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_e8);
  }
  local_b8 = 0xa7;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_68 = local_d8;
  gml_Script_anon_6618_DefineBuffs_OFFERINGSINIT(param_1,param_2,&local_f8,1,&local_68);
  local_b8 = 0xa9;
  if (local_d8 != param_3) {
    local_e8 = local_d8[0];
    uStack_e4 = local_d8[1];
    uStack_e0 = local_d8[2];
    uStack_dc = uStack_cc;
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,4,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar4 = local_40;
    do {
      puVar1 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


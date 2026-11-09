// gml_Script_anon_4319_Buff_OFFERINGSINIT @ 0x1403c2900

undefined8 *
gml_Script_anon_4319_Buff_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_d0 = "gml_Script_anon@3965@Attribute@OFFERINGSINIT";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x93;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0;
  local_118 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x95;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
  if (puVar2 != &local_88) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  local_40 = &local_88;
  uVar3 = CONCAT44(uVar7,DAT_141a0aa48);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar3,&local_40);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_e8) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_128);
  }
  local_c8 = 0x96;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  local_58 = &local_e8;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c2ace:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_a8) goto LAB_1403c2ace;
  }
  local_50 = &local_a8;
  uVar6 = CONCAT44(uVar7,DAT_1419f5d88);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_1403c2d14;
  local_c8 = 0x97;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
  if (puVar4 != local_98) {
    local_128 = *puVar4;
    uStack_124 = puVar4[1];
    uStack_120 = puVar4[2];
    uStack_11c = puVar4[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_128);
  }
  local_48 = local_98;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c2bfe:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_128);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_88) goto LAB_1403c2bfe;
  }
  local_40 = &local_88;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403c2c4a:
    local_128 = *(undefined4 *)puVar5;
    uStack_124 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_120 = *(undefined4 *)(puVar5 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_128);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_78) goto LAB_1403c2c4a;
  }
  local_38 = &local_78;
  if ((param_4 < 3) || (puVar2 = (undefined8 *)param_5[2], puVar2 != &local_68)) {
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_68);
    }
    FUN_140041b80(&local_68,&local_128);
  }
  local_30 = &local_68;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar7,DAT_141a01138),&local_48);
  FUN_140e63610(param_1,param_2,&local_108,2,uVar3,&local_38);
LAB_1403c2d14:
  local_c8 = 0x99;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


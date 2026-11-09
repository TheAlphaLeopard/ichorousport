// gml_Script_Trinket @ 0x1405ddfa0

undefined8 *
gml_Script_Trinket(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  undefined8 uVar6;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_68;
  byte local_5c;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38 [2];
  
  local_c0 = "gml_Script_anon@390@Trinket@TRINKETSINIT";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0xd;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
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
  local_b8 = 0xe;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_88) goto LAB_1405de0b0;
  }
  local_d8 = *(undefined4 *)puVar2;
  uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_d0 = *(undefined4 *)(puVar2 + 1);
  uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_d8);
LAB_1405de0b0:
  local_48 = &local_88;
  uVar4 = CONCAT44(uVar7,DAT_1419fcb18);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar4,&local_48);
  uVar7 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_e8) {
    local_d8 = *(undefined4 *)puVar2;
    uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_d0 = *(undefined4 *)(puVar2 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_d8);
  }
  local_b8 = 0xf;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
  if (puVar3 != local_a8) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_d8);
  }
  local_58 = local_a8;
  local_50 = &local_e8;
  uVar6 = CONCAT44(uVar7,DAT_1419fcba8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_118,2,uVar6,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_b8 = 0x10;
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
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5de8);
    if (puVar2 != &local_88) {
      local_d8 = *(undefined4 *)puVar2;
      uStack_d4 = *(undefined4 *)((longlong)puVar2 + 4);
      uStack_d0 = *(undefined4 *)(puVar2 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar2 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_d8);
    }
    local_48 = &local_88;
    local_40 = &local_e8;
    if ((param_4 < 2) || (puVar5 = (undefined8 *)param_5[1], puVar5 != &local_68)) {
      local_d8 = *(undefined4 *)puVar5;
      uStack_d4 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_d0 = *(undefined4 *)(puVar5 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_d8);
    }
    local_38[0] = &local_68;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar7,DAT_141a01138),&local_48);
    FUN_140e63610(param_1,param_2,&local_108,1,uVar4,local_38);
  }
  local_b8 = 0x12;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
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
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}


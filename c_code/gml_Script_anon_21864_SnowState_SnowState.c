// gml_Script_anon_21864_SnowState_SnowState @ 0x140508990

undefined8 *
gml_Script_anon_21864_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar9;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  uint local_c0 [2];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  longlong **local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70 [32];
  undefined1 local_50 [24];
  
  local_e0 = "gml_Script_anon@21191@SnowState@SnowState";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x2a3;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_c0,param_4,1,param_5);
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_fc = 0;
  local_108 = 0;
  local_c4 = 0;
  local_d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x2a3;
  puVar8 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_c0[0];
  if ((int)local_c0[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_b8;
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_d8 = 0x2a3;
    uStack_11c = 0xd;
    local_128 = 0x3ff0000000000000;
    if ((int)local_c0[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_b8;
      if (&local_128 == puVar6) goto LAB_140508af7;
    }
    local_f8 = 0;
    uStack_f4 = 0x3ff00000;
    uStack_f0 = uStack_120;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_f8);
  }
LAB_140508af7:
  local_d8 = 0x2a4;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fcbc8);
  puVar6 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_108,0,CONCAT44(uVar9,DAT_1419fca88),0);
  uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
  uStack_120 = *(undefined4 *)(puVar6 + 1);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_128 = *puVar6;
  }
  else {
    FUN_1400419b0(&local_128,puVar6);
  }
  FUN_1400462a0(&local_128,uVar5);
  local_f8 = (undefined4)local_128;
  uStack_f4 = local_128._4_4_;
  uStack_f0 = uStack_120;
  uStack_ec = uStack_11c;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_f8);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_d8 = 0x2a5;
  if (0 < (int)local_c0[0]) {
    puVar8 = (undefined8 *)*local_b8;
  }
  cVar3 = FUN_140e491e0(puVar8);
  if (cVar3 == '\0') {
    local_b0 = &local_d0;
    local_a8 = local_70;
    local_a0 = local_50;
    local_98 = &local_118;
    local_90 = &local_res8;
    local_88 = &local_res10;
    puVar8 = (undefined8 *)FUN_140508e10(&local_b0,&local_f8);
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_11c = local_10c;
    uStack_120 = local_110;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) == 0) {
      local_128 = local_118;
    }
    else {
      FUN_1400419b0(&local_128,&local_118);
    }
    puVar8 = &local_128;
    bVar2 = true;
    bVar1 = false;
  }
  if (puVar8 != param_3) {
    local_80 = *(undefined4 *)puVar8;
    uStack_7c = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_78 = *(undefined4 *)(puVar8 + 1);
    uStack_74 = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_80);
  }
  if ((bVar1) && ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_f8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  if (0 < (int)local_c0[0]) {
    puVar8 = local_b8;
    do {
      puVar6 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_b8);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


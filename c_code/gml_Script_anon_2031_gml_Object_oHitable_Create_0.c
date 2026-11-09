// gml_Script_anon_2031_gml_Object_oHitable_Create_0 @ 0x140b09870

longlong *
gml_Script_anon_2031_gml_Object_oHitable_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
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
  undefined8 local_c8;
  undefined4 local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_e0 = "gml_Script_anon@1776@___struct___575@gml_Object_oHitable_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 99;
  FUN_140041df0(local_88,param_4,2,param_5);
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  uVar10 = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 99;
  puVar7 = &DAT_1419df7b0;
  uVar6 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_80[1];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_d8 = 99;
    uStack_10c = 0xd;
    local_118 = (undefined1 *)0x0;
    if ((int)local_88[0] < 2) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)local_80[1];
      if (&local_118 == puVar4) goto LAB_140b099c0;
    }
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = uStack_110;
    uStack_ec = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_f8);
  }
LAB_140b099c0:
  local_d8 = 100;
  bVar8 = false;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a58110);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
    uStack_10c = 0;
    local_118 = &DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,0);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar2 != 0) {
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1eed0);
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a07f68);
      if ((int)local_88[0] < 1) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)*local_80;
      }
      if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
        uVar9 = (undefined4)*puVar5;
      }
      else {
        uVar9 = FUN_140e4b060();
      }
      local_c8 = FUN_1412a79b0(uVar9,0x4076700000000000);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_bc = 0;
      local_78 = &local_c8;
      uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_110 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
        local_118 = (undefined1 *)*puVar4;
      }
      else {
        FUN_1400419b0(&local_118,puVar4);
      }
      FUN_1400462a0(&local_118,uVar3);
      local_f8 = (undefined4)local_118;
      uStack_f4 = local_118._4_4_;
      uStack_f0 = uStack_110;
      uStack_ec = uStack_10c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_f8);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_70 = local_b8;
      uStack_10c = *(undefined4 *)((longlong)puVar4 + 0xc);
      uStack_110 = *(undefined4 *)(puVar4 + 1);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) == 0) {
        local_118 = (undefined1 *)*puVar4;
      }
      else {
        FUN_1400419b0(&local_118,puVar4);
      }
      FUN_1400460e0(&local_118,uVar3);
      local_f8 = (undefined4)local_118;
      uStack_f4 = local_118._4_4_;
      uStack_f0 = uStack_110;
      uStack_ec = uStack_10c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_f8);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_68 = local_a8;
      local_f8 = (undefined4)DAT_1419df7b0;
      uStack_f4 = DAT_1419df7b0._4_4_;
      uStack_f0 = DAT_1419df7b8;
      uStack_ec = DAT_1419df7bc;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_f8);
      local_60 = local_98;
      uVar3 = gml_Script_AngleRotateTowards(param_1,param_2,&local_108,4,&local_78);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 == '\0') {
        bVar8 = false;
        goto LAB_140b09cca;
      }
    }
    if (1 < (int)local_88[0]) {
      puVar7 = (undefined8 *)local_80[1];
    }
    cVar1 = FUN_140e491e0(puVar7);
    bVar8 = cVar1 == '\0';
  }
LAB_140b09cca:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (bVar8) {
    uVar10 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar10 << 0x20;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar7 = local_80;
    do {
      puVar4 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


// gml_Script____struct___106 @ 0x1402e2b90

longlong *
gml_Script____struct___106
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  bool bVar11;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  undefined4 local_d0;
  uint local_cc;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  longlong local_a0;
  byte local_94;
  longlong local_90;
  byte local_84;
  uint local_80 [2];
  undefined8 *local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  local_b0 = "gml_Script_savedata_get";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x10;
  FUN_140041df0(local_80,param_4,2,param_5);
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,2,FUN_1400424d0,FUN_140041b30);
  plVar5 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c20);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x10;
  plVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_80[0];
  if ((int)local_80[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_78[1];
  }
  iVar4 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar4 == 0) {
    local_a8 = 0x10;
    uStack_fc = 0xd;
    local_108 = 0;
    if ((int)local_80[0] < 2) {
      plVar9 = &DAT_1419df7b0;
    }
    else {
      plVar9 = (longlong *)local_78[1];
      if (&local_108 == plVar9) goto LAB_1402e2d0a;
    }
    local_e8 = 0;
    uStack_e0 = uStack_100;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar9);
    }
    FUN_140041b80(plVar9,&local_e8);
  }
LAB_1402e2d0a:
  local_a8 = 0x12;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if (plVar5 != &local_a0) {
    local_108 = *plVar5;
    uStack_100 = (undefined4)plVar5[1];
    uStack_fc = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_108);
  }
  local_70 = &local_a0;
  if ((int)local_80[0] < 1) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)*local_78;
    if (plVar5 == &local_90) goto LAB_1402e2dc8;
  }
  local_108 = *plVar5;
  uStack_100 = (undefined4)plVar5[1];
  uStack_fc = *(undefined4 *)((longlong)plVar5 + 0xc);
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  FUN_140041b80(&local_90,&local_108);
LAB_1402e2dc8:
  local_68 = &local_90;
  plVar5 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar10,DAT_141a01138),&local_70);
  uVar10 = 0xffffff;
  if (plVar5 != &local_c8) {
    local_108 = *plVar5;
    uStack_100 = (undefined4)plVar5[1];
    uStack_fc = *(undefined4 *)((longlong)plVar5 + 0xc);
    FUN_140041b80(&local_c8,&local_108);
    uVar10 = uStack_bc;
  }
  local_a8 = 0x14;
  local_108 = local_c8;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  FUN_140041b80(&local_d8,&local_108);
  if ((local_cc & 0xffffff) == 3) {
    bVar11 = local_d8 == 0;
  }
  else {
    bVar11 = (local_cc & 0xffffff) == 5;
  }
  bVar2 = (byte)local_cc;
  if (bVar11) {
    if (1 < (int)local_80[0]) {
      plVar7 = (longlong *)local_78[1];
    }
    uStack_fc = *(undefined4 *)((longlong)plVar7 + 0xc);
    uStack_100 = (int)plVar7[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_108 = *plVar7;
    }
    else {
      FUN_1400419b0(&local_108,plVar7);
    }
    plVar7 = &local_108;
    bVar3 = true;
    bVar11 = false;
  }
  else {
    uStack_dc = local_cc;
    uStack_e0 = local_d0;
    if ((1 << (bVar2 & 0x1f) & 0x46U) == 0) {
      local_e8 = local_d8;
    }
    else {
      FUN_1400419b0(&local_e8,&local_d8);
    }
    plVar7 = &local_e8;
    bVar3 = false;
    bVar11 = true;
  }
  if (plVar7 != param_3) {
    local_60 = (undefined4)*plVar7;
    uStack_5c = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_58 = (undefined4)plVar7[1];
    uStack_54 = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_60);
  }
  if ((bVar11) && ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_e8);
  }
  if ((bVar3) && ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << (bVar2 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,2,FUN_140041b30);
  if (0 < (int)local_80[0]) {
    puVar6 = local_78;
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
  FUN_140e4cd60(local_78);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


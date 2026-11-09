// gml_Script_anon_9845_gml_Object_oRogueLevelManager_Other_12 @ 0x140d093f0

undefined8 *
gml_Script_anon_9845_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  byte local_94;
  undefined8 local_90;
  byte local_84;
  undefined8 local_80;
  byte local_74;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  uint local_58 [2];
  undefined8 *local_50;
  
  local_b0 = "gml_Script_anon@9614@gml_Object_oRogueLevelManager_Other_12";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x153;
  FUN_140041df0(local_58,param_4,3,param_5);
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_a0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x153;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_58[0];
  if ((int)local_58[0] < 3) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_50[2];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0x153;
    if ((int)local_58[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_50[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = &DAT_bff0000000000000;
  }
  local_a8 = 0x155;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b10);
  if ((int)local_58[0] < 2) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)local_50[1];
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar6;
  }
  else {
    dVar9 = (double)FUN_140e4b060();
  }
  if ((int)local_58[0] < 1) {
    pdVar6 = (double *)&DAT_1419df7b0;
  }
  else {
    pdVar6 = (double *)*local_50;
  }
  if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
    dVar10 = *pdVar6;
  }
  else {
    dVar10 = (double)FUN_140e4b060();
  }
  uVar3 = FUN_140e4a740(uVar4);
  puVar5 = (undefined8 *)FUN_140ea8b20(&local_e8,uVar3,(longlong)dVar10,(longlong)dVar9);
  if (puVar5 != &local_d8) {
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_c8);
  }
  local_a8 = 0x157;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_70 = &local_d8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,CONCAT44(uVar11,DAT_1419fcb88),&local_70);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_a8 = 0x157;
    goto LAB_140d097c9;
  }
  local_a8 = 0x159;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  if ((int)local_58[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_140d096de:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)*local_50;
    if (puVar5 != &local_a0) goto LAB_140d096de;
  }
  local_70 = &local_a0;
  if ((int)local_58[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_140d0972b:
    local_c8 = *(undefined4 *)puVar5;
    uStack_c4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_c0 = *(undefined4 *)(puVar5 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_90);
    }
    FUN_140041b80(&local_90,&local_c8);
  }
  else {
    puVar5 = (undefined8 *)local_50[1];
    if (puVar5 != &local_90) goto LAB_140d0972b;
  }
  local_68 = &local_90;
  if (((int)local_58[0] < 3) || (puVar7 = (undefined8 *)local_50[2], puVar7 != &local_80)) {
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_c8);
  }
  local_60 = &local_80;
  gml_Script_floor_n(param_1,param_2,&local_e8,3,&local_70);
LAB_140d097c9:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_a0,0x10,3,FUN_140041b30);
  if (0 < (int)local_58[0]) {
    puVar7 = local_50;
    do {
      puVar5 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_50);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

